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
typedef uint64 toff_t;
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrile_t;
typedef tstrile_t tstrip_t;
typedef tstrile_t ttile_t;
typedef tmsize_t tsize_t;
typedef void *tdata_t;
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
typedef toff_t (*TIFFSeekProc)(thandle_t  , toff_t  , int  );
typedef int (*TIFFCloseProc)(thandle_t  );
typedef toff_t (*TIFFSizeProc)(thandle_t  );
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
union __anonunion_tdir_offset_38 {
   uint16 toff_short ;
   uint32 toff_long ;
   uint64 toff_long8 ;
};
struct __anonstruct_TIFFDirEntry_37 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint64 tdir_count ;
   union __anonunion_tdir_offset_38 tdir_offset ;
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
union __anonunion_tif_header_39 {
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
   union __anonunion_tif_header_39 tif_header ;
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
   toff_t (*tif_seekproc)(thandle_t  , toff_t  , int  ) ;
   int (*tif_closeproc)(thandle_t  ) ;
   toff_t (*tif_sizeproc)(thandle_t  ) ;
   void (*tif_postdecode)(TIFF *tif , uint8 *buf , tmsize_t size ) ;
   TIFFField **tif_fields ;
   size_t tif_nfields ;
   TIFFField const   *tif_foundfield ;
   TIFFTagMethods tif_tagmethods ;
   TIFFClientInfoLink *tif_clientinfo ;
   TIFFFieldArray *tif_fieldscompat ;
   size_t tif_nfieldscompat ;
};
typedef long wchar_t;
struct __anonstruct___wait_terminated_40 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_41 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_40 __wait_terminated ;
   struct __anonstruct___wait_stopped_41 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_42 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_42  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_43 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_43 div_t;
struct __anonstruct_ldiv_t_44 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_44 ldiv_t;
struct __anonstruct_lldiv_t_45 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_45 lldiv_t;
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
typedef long double float_t;
typedef long double double_t;
enum __anonenum_46 {
    FP_NAN = 0,
    FP_INFINITE = 1,
    FP_ZERO = 2,
    FP_SUBNORMAL = 3,
    FP_NORMAL = 4
} ;
enum __anonenum__LIB_VERSION_TYPE_47 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;
typedef enum __anonenum__LIB_VERSION_TYPE_47 _LIB_VERSION_TYPE;
struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};
union __anonunion___u_48 {
   float __f ;
   int __i ;
};
union __anonunion___u_49 {
   double __d ;
   int __i[2] ;
};
union __anonunion___u_50 {
   long double __l ;
   int __i[3] ;
};
union __anonunion___n_51 {
   long double __xld ;
   unsigned int __xi[3] ;
};
union __anonunion_52 {
   double __d ;
   int __i[2] ;
};
enum __anonenum_53 {
    _ISupper = 256,
    _ISlower = 512,
    _ISalpha = 1024,
    _ISdigit = 2048,
    _ISxdigit = 4096,
    _ISspace = 8192,
    _ISprint = 16384,
    _ISgraph = 32768,
    _ISblank = 1,
    _IScntrl = 2,
    _ISpunct = 4,
    _ISalnum = 8
} ;
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_54 {
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
enum __anonenum_55 {
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
enum __anonenum_56 {
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
typedef unsigned int uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
struct offset {
   uint32 tmargin ;
   uint32 lmargin ;
   uint32 bmargin ;
   uint32 rmargin ;
   uint32 crop_width ;
   uint32 crop_length ;
   uint32 startx ;
   uint32 endx ;
   uint32 starty ;
   uint32 endy ;
};
struct buffinfo {
   uint32 size ;
   unsigned char *buffer ;
};
struct zone {
   int position ;
   int total ;
};
struct pageseg {
   uint32 x1 ;
   uint32 x2 ;
   uint32 y1 ;
   uint32 y2 ;
   int position ;
   int total ;
   uint32 buffsize ;
};
struct coordpairs {
   double X1 ;
   double X2 ;
   double Y1 ;
   double Y2 ;
};
struct region {
   uint32 x1 ;
   uint32 x2 ;
   uint32 y1 ;
   uint32 y2 ;
   uint32 width ;
   uint32 length ;
   uint32 buffsize ;
   unsigned char *buffptr ;
};
struct crop_mask {
   double width ;
   double length ;
   double margins[4] ;
   float xres ;
   float yres ;
   uint32 combined_width ;
   uint32 combined_length ;
   uint32 bufftotal ;
   uint16 img_mode ;
   uint16 exp_mode ;
   uint16 crop_mode ;
   uint16 res_unit ;
   uint16 edge_ref ;
   uint16 rotation ;
   uint16 mirror ;
   uint16 invert ;
   uint16 photometric ;
   uint16 selections ;
   uint16 regions ;
   struct region regionlist[8] ;
   uint16 zones ;
   struct zone zonelist[8] ;
   struct coordpairs corners[8] ;
};
struct paperdef {
   char name[15] ;
   double width ;
   double length ;
   double asratio ;
};
struct image_data {
   float xres ;
   float yres ;
   uint32 width ;
   uint32 length ;
   uint16 res_unit ;
   uint16 bps ;
   uint16 spp ;
   uint16 planar ;
   uint16 photometric ;
   uint16 orientation ;
   uint16 adjustments ;
};
struct pagedef {
   char name[16] ;
   double width ;
   double length ;
   double hmargin ;
   double vmargin ;
   double hres ;
   double vres ;
   uint32 mode ;
   uint16 res_unit ;
   unsigned int rows ;
   unsigned int cols ;
   unsigned int orient ;
};
struct dump_opts {
   int debug ;
   int format ;
   int level ;
   char mode[4] ;
   char infilename[4097] ;
   char outfilename[4097] ;
   FILE *infile ;
   FILE *outfile ;
};
struct cpTag {
   uint16 tag ;
   uint16 count ;
   TIFFDataType type ;
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
extern TIFFField const   *TIFFFindField(TIFF * , uint32  , TIFFDataType  ) ;
extern TIFFField const   *TIFFFieldWithTag(TIFF * , uint32  ) ;
extern TIFFField const   *TIFFFieldWithName(TIFF * , char const   * ) ;
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
extern int TIFFReadCustomDirectory(TIFF *tif , toff_t diroff ,
                                   TIFFFieldArray const   *infoarray ) ;
extern int TIFFReadEXIFDirectory(TIFF *tif , toff_t diroff ) ;
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
extern int TIFFUnsetField(TIFF * , uint32  ) ;
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
                            toff_t (*)(thandle_t  , toff_t  , int  ) ,
                            int (*)(thandle_t  ) , toff_t (*)(thandle_t  ) ,
                            int (*)(thandle_t  , void **base , toff_t *size ) ,
                            void (*)(thandle_t  , void *base , toff_t size ) ) ;
extern char const   *TIFFFileName(TIFF * ) ;
extern char const   *TIFFSetFileName(TIFF * , char const   * ) ;
extern void ( /* format attribute */  TIFFError)(char const   * ,
                                                 char const   *  , ...) ;
extern void ( /* format attribute */  TIFFErrorExt)(thandle_t  ,
                                                    char const   * ,
                                                    char const   *  , ...) ;
extern void ( /* format attribute */  TIFFWarning)(char const   * ,
                                                   char const   *  , ...) ;
extern void ( /* format attribute */  TIFFWarningExt)(thandle_t  ,
                                                      char const   * ,
                                                      char const   *  , ...) ;
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
extern int TIFFDataWidth(TIFFDataType  ) ;
extern void TIFFSetWriteOffset(TIFF *tif , toff_t off ) ;
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
extern int TIFFMergeFieldInfo(TIFF * , TIFFFieldInfo const   * , uint32  ) ;
extern TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF * , uint32  ,
                                                TIFFDataType  ) ;
extern TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF * , char const   * ,
                                                      TIFFDataType  ) ;
extern TIFFFieldArray const   *_TIFFGetFields(void) ;
extern TIFFFieldArray const   *_TIFFGetExifFields(void) ;
extern void _TIFFSetupFields(TIFF *tif , TIFFFieldArray const   *infoarray ) ;
extern void _TIFFPrintFieldInfo(TIFF * , FILE * ) ;
extern int _TIFFMergeFields(TIFF * , TIFFField const   * , uint32  ) ;
extern TIFFField const   *_TIFFFindOrRegisterField(TIFF * , uint32  ,
                                                   TIFFDataType  ) ;
extern TIFFField *_TIFFCreateAnonField(TIFF * , uint32  , TIFFDataType  ) ;
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
extern int _TIFFRewriteField(TIFF * , uint16  , TIFFDataType  , tmsize_t  ,
                             void * ) ;
extern int TIFFSetCompressionScheme(TIFF *tif , int scheme ) ;
extern int TIFFSetDefaultCompressionState(TIFF *tif ) ;
extern uint32 _TIFFDefaultStripSize(TIFF *tif , uint32 s ) ;
extern void _TIFFDefaultTileSize(TIFF *tif , uint32 *tw , uint32 *th ) ;
extern int _TIFFDataSize(TIFFDataType type ) ;
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
extern  __attribute__((__nothrow__)) double acos(double __x ) ;
extern  __attribute__((__nothrow__)) double __acos(double __x ) ;
extern  __attribute__((__nothrow__)) double asin(double __x ) ;
extern  __attribute__((__nothrow__)) double __asin(double __x ) ;
extern  __attribute__((__nothrow__)) double atan(double __x ) ;
extern  __attribute__((__nothrow__)) double __atan(double __x ) ;
extern  __attribute__((__nothrow__)) double atan2(double __y , double __x ) ;
extern  __attribute__((__nothrow__)) double __atan2(double __y , double __x ) ;
extern  __attribute__((__nothrow__)) double cos(double __x ) ;
extern  __attribute__((__nothrow__)) double __cos(double __x ) ;
extern  __attribute__((__nothrow__)) double sin(double __x ) ;
extern  __attribute__((__nothrow__)) double __sin(double __x ) ;
extern  __attribute__((__nothrow__)) double tan(double __x ) ;
extern  __attribute__((__nothrow__)) double __tan(double __x ) ;
extern  __attribute__((__nothrow__)) double cosh(double __x ) ;
extern  __attribute__((__nothrow__)) double __cosh(double __x ) ;
extern  __attribute__((__nothrow__)) double sinh(double __x ) ;
extern  __attribute__((__nothrow__)) double __sinh(double __x ) ;
extern  __attribute__((__nothrow__)) double tanh(double __x ) ;
extern  __attribute__((__nothrow__)) double __tanh(double __x ) ;
extern  __attribute__((__nothrow__)) double acosh(double __x ) ;
extern  __attribute__((__nothrow__)) double __acosh(double __x ) ;
extern  __attribute__((__nothrow__)) double asinh(double __x ) ;
extern  __attribute__((__nothrow__)) double __asinh(double __x ) ;
extern  __attribute__((__nothrow__)) double atanh(double __x ) ;
extern  __attribute__((__nothrow__)) double __atanh(double __x ) ;
extern  __attribute__((__nothrow__)) double exp(double __x ) ;
extern  __attribute__((__nothrow__)) double __exp(double __x ) ;
extern  __attribute__((__nothrow__)) double frexp(double __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) double __frexp(double __x ,
                                                    int *__exponent ) ;
extern  __attribute__((__nothrow__)) double ldexp(double __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) double __ldexp(double __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) double log(double __x ) ;
extern  __attribute__((__nothrow__)) double __log(double __x ) ;
extern  __attribute__((__nothrow__)) double log10(double __x ) ;
extern  __attribute__((__nothrow__)) double __log10(double __x ) ;
extern  __attribute__((__nothrow__)) double modf(double __x , double *__iptr ) ;
extern  __attribute__((__nothrow__)) double __modf(double __x , double *__iptr ) ;
extern  __attribute__((__nothrow__)) double expm1(double __x ) ;
extern  __attribute__((__nothrow__)) double __expm1(double __x ) ;
extern  __attribute__((__nothrow__)) double log1p(double __x ) ;
extern  __attribute__((__nothrow__)) double __log1p(double __x ) ;
extern  __attribute__((__nothrow__)) double logb(double __x ) ;
extern  __attribute__((__nothrow__)) double __logb(double __x ) ;
extern  __attribute__((__nothrow__)) double exp2(double __x ) ;
extern  __attribute__((__nothrow__)) double __exp2(double __x ) ;
extern  __attribute__((__nothrow__)) double log2(double __x ) ;
extern  __attribute__((__nothrow__)) double __log2(double __x ) ;
extern  __attribute__((__nothrow__)) double pow(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __pow(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double sqrt(double __x ) ;
extern  __attribute__((__nothrow__)) double __sqrt(double __x ) ;
extern  __attribute__((__nothrow__)) double hypot(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __hypot(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double cbrt(double __x ) ;
extern  __attribute__((__nothrow__)) double __cbrt(double __x ) ;
__inline extern  __attribute__((__nothrow__)) double ceil(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __ceil(double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) double fabs(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __fabs(double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) double floor(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __floor(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double fmod(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fmod(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) int __isinf(double __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __finite(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isinf(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int finite(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double drem(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __drem(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double significand(double __x ) ;
extern  __attribute__((__nothrow__)) double __significand(double __x ) ;
extern  __attribute__((__nothrow__)) double copysign(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __copysign(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double nan(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __nan(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __isnan(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isnan(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double j0(double  ) ;
extern  __attribute__((__nothrow__)) double __j0(double  ) ;
extern  __attribute__((__nothrow__)) double j1(double  ) ;
extern  __attribute__((__nothrow__)) double __j1(double  ) ;
extern  __attribute__((__nothrow__)) double jn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double __jn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double y0(double  ) ;
extern  __attribute__((__nothrow__)) double __y0(double  ) ;
extern  __attribute__((__nothrow__)) double y1(double  ) ;
extern  __attribute__((__nothrow__)) double __y1(double  ) ;
extern  __attribute__((__nothrow__)) double yn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double __yn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double erf(double  ) ;
extern  __attribute__((__nothrow__)) double __erf(double  ) ;
extern  __attribute__((__nothrow__)) double erfc(double  ) ;
extern  __attribute__((__nothrow__)) double __erfc(double  ) ;
extern  __attribute__((__nothrow__)) double lgamma(double  ) ;
extern  __attribute__((__nothrow__)) double __lgamma(double  ) ;
extern  __attribute__((__nothrow__)) double tgamma(double  ) ;
extern  __attribute__((__nothrow__)) double __tgamma(double  ) ;
extern  __attribute__((__nothrow__)) double gamma(double  ) ;
extern  __attribute__((__nothrow__)) double __gamma(double  ) ;
extern  __attribute__((__nothrow__)) double lgamma_r(double  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) double __lgamma_r(double  ,
                                                       int *__signgamp ) ;
extern  __attribute__((__nothrow__)) double rint(double __x ) ;
extern  __attribute__((__nothrow__)) double __rint(double __x ) ;
extern  __attribute__((__nothrow__)) double nextafter(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __nextafter(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double nexttoward(double __x ,
                                                       long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __nexttoward(double __x ,
                                                         long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double remainder(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __remainder(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double scalbn(double __x , int __n ) ;
extern  __attribute__((__nothrow__)) double __scalbn(double __x , int __n ) ;
extern  __attribute__((__nothrow__)) int ilogb(double __x ) ;
extern  __attribute__((__nothrow__)) int __ilogb(double __x ) ;
extern  __attribute__((__nothrow__)) double scalbln(double __x , long __n ) ;
extern  __attribute__((__nothrow__)) double __scalbln(double __x , long __n ) ;
extern  __attribute__((__nothrow__)) double nearbyint(double __x ) ;
extern  __attribute__((__nothrow__)) double __nearbyint(double __x ) ;
extern  __attribute__((__nothrow__)) double round(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __round(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double trunc(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __trunc(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double remquo(double __x , double __y ,
                                                   int *__quo ) ;
extern  __attribute__((__nothrow__)) double __remquo(double __x , double __y ,
                                                     int *__quo ) ;
__inline extern  __attribute__((__nothrow__)) long lrint(double __x ) ;
extern  __attribute__((__nothrow__)) long __lrint(double __x ) ;
__inline extern  __attribute__((__nothrow__)) long long llrint(double __x ) ;
extern  __attribute__((__nothrow__)) long long __llrint(double __x ) ;
extern  __attribute__((__nothrow__)) long lround(double __x ) ;
extern  __attribute__((__nothrow__)) long __lround(double __x ) ;
extern  __attribute__((__nothrow__)) long long llround(double __x ) ;
extern  __attribute__((__nothrow__)) long long __llround(double __x ) ;
extern  __attribute__((__nothrow__)) double fdim(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fdim(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double fmax(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fmax(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double fmin(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fmin(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) int __fpclassify(double __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double fma(double __x , double __y ,
                                                double __z ) ;
extern  __attribute__((__nothrow__)) double __fma(double __x , double __y ,
                                                  double __z ) ;
extern  __attribute__((__nothrow__)) double scalb(double __x , double __n ) ;
extern  __attribute__((__nothrow__)) double __scalb(double __x , double __n ) ;
extern  __attribute__((__nothrow__)) float acosf(float __x ) ;
extern  __attribute__((__nothrow__)) float __acosf(float __x ) ;
extern  __attribute__((__nothrow__)) float asinf(float __x ) ;
extern  __attribute__((__nothrow__)) float __asinf(float __x ) ;
extern  __attribute__((__nothrow__)) float atanf(float __x ) ;
extern  __attribute__((__nothrow__)) float __atanf(float __x ) ;
extern  __attribute__((__nothrow__)) float atan2f(float __y , float __x ) ;
extern  __attribute__((__nothrow__)) float __atan2f(float __y , float __x ) ;
extern  __attribute__((__nothrow__)) float cosf(float __x ) ;
extern  __attribute__((__nothrow__)) float __cosf(float __x ) ;
extern  __attribute__((__nothrow__)) float sinf(float __x ) ;
extern  __attribute__((__nothrow__)) float __sinf(float __x ) ;
extern  __attribute__((__nothrow__)) float tanf(float __x ) ;
extern  __attribute__((__nothrow__)) float __tanf(float __x ) ;
extern  __attribute__((__nothrow__)) float coshf(float __x ) ;
extern  __attribute__((__nothrow__)) float __coshf(float __x ) ;
extern  __attribute__((__nothrow__)) float sinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __sinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float tanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __tanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float acoshf(float __x ) ;
extern  __attribute__((__nothrow__)) float __acoshf(float __x ) ;
extern  __attribute__((__nothrow__)) float asinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __asinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float atanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __atanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float expf(float __x ) ;
extern  __attribute__((__nothrow__)) float __expf(float __x ) ;
extern  __attribute__((__nothrow__)) float frexpf(float __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) float __frexpf(float __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) float ldexpf(float __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) float __ldexpf(float __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) float logf(float __x ) ;
extern  __attribute__((__nothrow__)) float __logf(float __x ) ;
extern  __attribute__((__nothrow__)) float log10f(float __x ) ;
extern  __attribute__((__nothrow__)) float __log10f(float __x ) ;
extern  __attribute__((__nothrow__)) float modff(float __x , float *__iptr ) ;
extern  __attribute__((__nothrow__)) float __modff(float __x , float *__iptr ) ;
extern  __attribute__((__nothrow__)) float expm1f(float __x ) ;
extern  __attribute__((__nothrow__)) float __expm1f(float __x ) ;
extern  __attribute__((__nothrow__)) float log1pf(float __x ) ;
extern  __attribute__((__nothrow__)) float __log1pf(float __x ) ;
extern  __attribute__((__nothrow__)) float logbf(float __x ) ;
extern  __attribute__((__nothrow__)) float __logbf(float __x ) ;
extern  __attribute__((__nothrow__)) float exp2f(float __x ) ;
extern  __attribute__((__nothrow__)) float __exp2f(float __x ) ;
extern  __attribute__((__nothrow__)) float log2f(float __x ) ;
extern  __attribute__((__nothrow__)) float __log2f(float __x ) ;
extern  __attribute__((__nothrow__)) float powf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __powf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float sqrtf(float __x ) ;
extern  __attribute__((__nothrow__)) float __sqrtf(float __x ) ;
extern  __attribute__((__nothrow__)) float hypotf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __hypotf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float cbrtf(float __x ) ;
extern  __attribute__((__nothrow__)) float __cbrtf(float __x ) ;
__inline extern  __attribute__((__nothrow__)) float ceilf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __ceilf(float __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) float fabsf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __fabsf(float __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) float floorf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __floorf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float fmodf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fmodf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) int __isinff(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __finitef(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isinff(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int finitef(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float dremf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __dremf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float significandf(float __x ) ;
extern  __attribute__((__nothrow__)) float __significandf(float __x ) ;
extern  __attribute__((__nothrow__)) float copysignf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __copysignf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float nanf(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __nanf(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __isnanf(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isnanf(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float j0f(float  ) ;
extern  __attribute__((__nothrow__)) float __j0f(float  ) ;
extern  __attribute__((__nothrow__)) float j1f(float  ) ;
extern  __attribute__((__nothrow__)) float __j1f(float  ) ;
extern  __attribute__((__nothrow__)) float jnf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float __jnf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float y0f(float  ) ;
extern  __attribute__((__nothrow__)) float __y0f(float  ) ;
extern  __attribute__((__nothrow__)) float y1f(float  ) ;
extern  __attribute__((__nothrow__)) float __y1f(float  ) ;
extern  __attribute__((__nothrow__)) float ynf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float __ynf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float erff(float  ) ;
extern  __attribute__((__nothrow__)) float __erff(float  ) ;
extern  __attribute__((__nothrow__)) float erfcf(float  ) ;
extern  __attribute__((__nothrow__)) float __erfcf(float  ) ;
extern  __attribute__((__nothrow__)) float lgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float __lgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float tgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float __tgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float gammaf(float  ) ;
extern  __attribute__((__nothrow__)) float __gammaf(float  ) ;
extern  __attribute__((__nothrow__)) float lgammaf_r(float  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) float __lgammaf_r(float  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) float rintf(float __x ) ;
extern  __attribute__((__nothrow__)) float __rintf(float __x ) ;
extern  __attribute__((__nothrow__)) float nextafterf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __nextafterf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float nexttowardf(float __x ,
                                                       long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __nexttowardf(float __x ,
                                                         long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float remainderf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __remainderf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float scalbnf(float __x , int __n ) ;
extern  __attribute__((__nothrow__)) float __scalbnf(float __x , int __n ) ;
extern  __attribute__((__nothrow__)) int ilogbf(float __x ) ;
extern  __attribute__((__nothrow__)) int __ilogbf(float __x ) ;
extern  __attribute__((__nothrow__)) float scalblnf(float __x , long __n ) ;
extern  __attribute__((__nothrow__)) float __scalblnf(float __x , long __n ) ;
extern  __attribute__((__nothrow__)) float nearbyintf(float __x ) ;
extern  __attribute__((__nothrow__)) float __nearbyintf(float __x ) ;
extern  __attribute__((__nothrow__)) float roundf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __roundf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float truncf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __truncf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float remquof(float __x , float __y ,
                                                   int *__quo ) ;
extern  __attribute__((__nothrow__)) float __remquof(float __x , float __y ,
                                                     int *__quo ) ;
__inline extern  __attribute__((__nothrow__)) long lrintf(float __x ) ;
extern  __attribute__((__nothrow__)) long __lrintf(float __x ) ;
__inline extern  __attribute__((__nothrow__)) long long llrintf(float __x ) ;
extern  __attribute__((__nothrow__)) long long __llrintf(float __x ) ;
extern  __attribute__((__nothrow__)) long lroundf(float __x ) ;
extern  __attribute__((__nothrow__)) long __lroundf(float __x ) ;
extern  __attribute__((__nothrow__)) long long llroundf(float __x ) ;
extern  __attribute__((__nothrow__)) long long __llroundf(float __x ) ;
extern  __attribute__((__nothrow__)) float fdimf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fdimf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float fmaxf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fmaxf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float fminf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fminf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) int __fpclassifyf(float __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __signbitf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float fmaf(float __x , float __y ,
                                                float __z ) ;
extern  __attribute__((__nothrow__)) float __fmaf(float __x , float __y ,
                                                  float __z ) ;
extern  __attribute__((__nothrow__)) float scalbf(float __x , float __n ) ;
extern  __attribute__((__nothrow__)) float __scalbf(float __x , float __n ) ;
extern  __attribute__((__nothrow__)) long double acosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __acosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double asinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __asinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double atanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __atanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double atan2l(long double __y ,
                                                        long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double __atan2l(long double __y ,
                                                                   long double __x ) ;
extern  __attribute__((__nothrow__)) long double cosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __cosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double sinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __sinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double tanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __tanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double coshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __coshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double sinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __sinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double tanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __tanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double acoshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __acoshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double asinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __asinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double atanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __atanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double expl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __expl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double frexpl(long double __x ,
                                                        int *__exponent ) ;
extern  __attribute__((__nothrow__)) long double __frexpl(long double __x ,
                                                          int *__exponent ) ;
extern  __attribute__((__nothrow__)) long double ldexpl(long double __x ,
                                                        int __exponent ) ;
extern  __attribute__((__nothrow__)) long double __ldexpl(long double __x ,
                                                          int __exponent ) ;
extern  __attribute__((__nothrow__)) long double logl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __logl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double log10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __log10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double modfl(long double __x ,
                                                       long double *__iptr ) ;
extern  __attribute__((__nothrow__)) long double __modfl(long double __x ,
                                                         long double *__iptr ) ;
extern  __attribute__((__nothrow__)) long double expm1l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __expm1l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double log1pl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __log1pl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double logbl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __logbl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double exp2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __exp2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double log2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __log2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double powl(long double __x ,
                                                      long double __y ) ;
extern  __attribute__((__nothrow__)) long double __powl(long double __x ,
                                                        long double __y ) ;
extern  __attribute__((__nothrow__)) long double sqrtl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __sqrtl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double hypotl(long double __x ,
                                                        long double __y ) ;
extern  __attribute__((__nothrow__)) long double __hypotl(long double __x ,
                                                          long double __y ) ;
extern  __attribute__((__nothrow__)) long double cbrtl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __cbrtl(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double ceill(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __ceill(long double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) long double fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) long double __fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) long double floorl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __floorl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double fmodl(long double __x ,
                                                       long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fmodl(long double __x ,
                                                         long double __y ) ;
extern  __attribute__((__nothrow__)) int __isinfl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __finitel(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isinfl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int finitel(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double dreml(long double __x ,
                                                       long double __y ) ;
extern  __attribute__((__nothrow__)) long double __dreml(long double __x ,
                                                         long double __y ) ;
extern  __attribute__((__nothrow__)) long double significandl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __significandl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double copysignl(long double __x ,
                                                           long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __copysignl(long double __x ,
                                                             long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double nanl(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __nanl(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __isnanl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isnanl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double j0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __j0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double j1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __j1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double jnl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double __jnl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double y0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __y0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double y1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __y1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double ynl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double __ynl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double erfl(long double  ) ;
extern  __attribute__((__nothrow__)) long double __erfl(long double  ) ;
extern  __attribute__((__nothrow__)) long double erfcl(long double  ) ;
extern  __attribute__((__nothrow__)) long double __erfcl(long double  ) ;
extern  __attribute__((__nothrow__)) long double lgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double __lgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double tgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double __tgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double gammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double __gammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double lgammal_r(long double  ,
                                                           int *__signgamp ) ;
extern  __attribute__((__nothrow__)) long double __lgammal_r(long double  ,
                                                             int *__signgamp ) ;
extern  __attribute__((__nothrow__)) long double rintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __rintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double nextafterl(long double __x ,
                                                            long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __nextafterl(long double __x ,
                                                              long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double nexttowardl(long double __x ,
                                                             long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __nexttowardl(long double __x ,
                                                               long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double remainderl(long double __x ,
                                                            long double __y ) ;
extern  __attribute__((__nothrow__)) long double __remainderl(long double __x ,
                                                              long double __y ) ;
extern  __attribute__((__nothrow__)) long double scalbnl(long double __x ,
                                                         int __n ) ;
extern  __attribute__((__nothrow__)) long double __scalbnl(long double __x ,
                                                           int __n ) ;
extern  __attribute__((__nothrow__)) int ilogbl(long double __x ) ;
extern  __attribute__((__nothrow__)) int __ilogbl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double scalblnl(long double __x ,
                                                          long __n ) ;
extern  __attribute__((__nothrow__)) long double __scalblnl(long double __x ,
                                                            long __n ) ;
extern  __attribute__((__nothrow__)) long double nearbyintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __nearbyintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double roundl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __roundl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double truncl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __truncl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double remquol(long double __x ,
                                                         long double __y ,
                                                         int *__quo ) ;
extern  __attribute__((__nothrow__)) long double __remquol(long double __x ,
                                                           long double __y ,
                                                           int *__quo ) ;
__inline extern  __attribute__((__nothrow__)) long lrintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long __lrintl(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long long llrintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long long __llrintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long lroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long __lroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long long llroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long long __llroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double fdiml(long double __x ,
                                                       long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fdiml(long double __x ,
                                                         long double __y ) ;
extern  __attribute__((__nothrow__)) long double fmaxl(long double __x ,
                                                       long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fmaxl(long double __x ,
                                                         long double __y ) ;
extern  __attribute__((__nothrow__)) long double fminl(long double __x ,
                                                       long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fminl(long double __x ,
                                                         long double __y ) ;
extern  __attribute__((__nothrow__)) int __fpclassifyl(long double __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double fmal(long double __x ,
                                                      long double __y ,
                                                      long double __z ) ;
extern  __attribute__((__nothrow__)) long double __fmal(long double __x ,
                                                        long double __y ,
                                                        long double __z ) ;
extern  __attribute__((__nothrow__)) long double scalbl(long double __x ,
                                                        long double __n ) ;
extern  __attribute__((__nothrow__)) long double __scalbl(long double __x ,
                                                          long double __n ) ;
extern int signgam ;
extern _LIB_VERSION_TYPE _LIB_VERSION ;
extern int matherr(struct exception *__exc ) ;
__inline extern  __attribute__((__nothrow__)) int __signbitf(float __x )  __attribute__((__const__)) ;
__inline extern int __signbitf(float __x ) 
{ 
  union __anonunion___u_48 __u ;

  {
  __u.__f = __x;
  return (__u.__i < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
__inline extern int __signbit(double __x ) 
{ 
  union __anonunion___u_49 __u ;

  {
  __u.__d = __x;
  return (__u.__i[1] < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
__inline extern int __signbitl(long double __x ) 
{ 
  union __anonunion___u_50 __u ;

  {
  __u.__l = __x;
  return ((__u.__i[2] & 32768) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) double __sgn(double __x ) ;
__inline extern  __attribute__((__nothrow__)) double __sgn(double __x ) ;
__inline extern double __sgn(double __x ) 
{ 
  double tmp ;
  double tmp___0 ;

  {
  if (__x == 0.0) {
    tmp___0 = 0.0;
  } else {
    if (__x > 0.0) {
      tmp = 1.0;
    } else {
      tmp = - 1.0;
    }
    tmp___0 = tmp;
  }
  return (tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) float __sgnf(float __x ) ;
__inline extern  __attribute__((__nothrow__)) float __sgnf(float __x ) ;
__inline extern float __sgnf(float __x ) 
{ 
  double tmp ;
  double tmp___0 ;

  {
  if ((double )__x == 0.0) {
    tmp___0 = 0.0;
  } else {
    if ((double )__x > 0.0) {
      tmp = 1.0;
    } else {
      tmp = - 1.0;
    }
    tmp___0 = tmp;
  }
  return ((float )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) long double __sgnl(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double __sgnl(long double __x ) ;
__inline extern long double __sgnl(long double __x ) 
{ 
  double tmp ;
  double tmp___0 ;

  {
  if (__x == (long double )0.0) {
    tmp___0 = 0.0;
  } else {
    if (__x > (long double )0.0) {
      tmp = 1.0;
    } else {
      tmp = - 1.0;
    }
    tmp___0 = tmp;
  }
  return ((long double )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) long double __atan2l(long double __y ,
                                                                   long double __x ) ;
__inline extern long double __atan2l(long double __y , long double __x ) 
{ 
  long double tmp ;

  {
  tmp = __builtin_atan2l(__y, __x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) double fabs(double __x )  __attribute__((__const__)) ;
__inline extern double fabs(double __x ) 
{ 
  double tmp ;

  {
  tmp = __builtin_fabs(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) float fabsf(float __x )  __attribute__((__const__)) ;
__inline extern float fabsf(float __x ) 
{ 
  float tmp ;

  {
  tmp = __builtin_fabsf(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long double fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern long double fabsl(long double __x ) 
{ 
  long double tmp ;

  {
  tmp = __builtin_fabsl(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long double __fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern long double __fabsl(long double __x ) 
{ 
  long double tmp ;

  {
  tmp = __builtin_fabsl(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long double __sgn1l(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double __sgn1l(long double __x ) ;
__inline extern long double __sgn1l(long double __x ) 
{ 
  union __anonunion___n_51 __n ;

  {
  __n.__xld = __x;
  __n.__xi[2] = (__n.__xi[2] & 32768U) | 16383U;
  __n.__xi[1] = 2147483648U;
  __n.__xi[0] = 0U;
  return (__n.__xld);
}
}
__inline extern  __attribute__((__nothrow__)) double floor(double __x )  __attribute__((__const__)) ;
__inline extern double floor(double __x ) 
{ 
  register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0400, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore),
                       "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((double )__value);
}
}
__inline extern  __attribute__((__nothrow__)) float floorf(float __x )  __attribute__((__const__)) ;
__inline extern float floorf(float __x ) 
{ 
  register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0400, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore),
                       "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((float )__value);
}
}
__inline extern  __attribute__((__nothrow__)) long double floorl(long double __x )  __attribute__((__const__)) ;
__inline extern long double floorl(long double __x ) 
{ 
  register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0400, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore),
                       "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return (__value);
}
}
__inline extern  __attribute__((__nothrow__)) double ceil(double __x )  __attribute__((__const__)) ;
__inline extern double ceil(double __x ) 
{ 
  register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0800, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore),
                       "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((double )__value);
}
}
__inline extern  __attribute__((__nothrow__)) float ceilf(float __x )  __attribute__((__const__)) ;
__inline extern float ceilf(float __x ) 
{ 
  register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0800, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore),
                       "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((float )__value);
}
}
__inline extern  __attribute__((__nothrow__)) long double ceill(long double __x )  __attribute__((__const__)) ;
__inline extern long double ceill(long double __x ) 
{ 
  register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0800, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore),
                       "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return (__value);
}
}
__inline extern  __attribute__((__nothrow__)) long lrintf(float __x ) ;
__inline extern long lrintf(float __x ) 
{ 
  long __lrintres ;

  {
  __asm__  volatile   ("fistpl %0": "=m" (__lrintres): "t" (__x): "st");
  return (__lrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long lrint(double __x ) ;
__inline extern long lrint(double __x ) 
{ 
  long __lrintres ;

  {
  __asm__  volatile   ("fistpl %0": "=m" (__lrintres): "t" (__x): "st");
  return (__lrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long lrintl(long double __x ) ;
__inline extern long lrintl(long double __x ) 
{ 
  long __lrintres ;

  {
  __asm__  volatile   ("fistpl %0": "=m" (__lrintres): "t" (__x): "st");
  return (__lrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long long llrintf(float __x ) ;
__inline extern long long llrintf(float __x ) 
{ 
  long long __llrintres ;

  {
  __asm__  volatile   ("fistpll %0": "=m" (__llrintres): "t" (__x): "st");
  return (__llrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long long llrint(double __x ) ;
__inline extern long long llrint(double __x ) 
{ 
  long long __llrintres ;

  {
  __asm__  volatile   ("fistpll %0": "=m" (__llrintres): "t" (__x): "st");
  return (__llrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long long llrintl(long double __x ) ;
__inline extern long long llrintl(long double __x ) 
{ 
  long long __llrintres ;

  {
  __asm__  volatile   ("fistpll %0": "=m" (__llrintres): "t" (__x): "st");
  return (__llrintres);
}
}
__inline extern  __attribute__((__nothrow__)) int __finite(double __x )  __attribute__((__const__)) ;
__inline extern int __finite(double __x ) 
{ 
  union __anonunion_52 __constr_expr_0 ;

  {
  __constr_expr_0.__d = __x;
  return ((int )((((unsigned int )__constr_expr_0.__i[1] | 2148532223U) + 1U) >> 31));
}
}
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isalnum(int  ) ;
extern  __attribute__((__nothrow__)) int isalpha(int  ) ;
extern  __attribute__((__nothrow__)) int iscntrl(int  ) ;
extern  __attribute__((__nothrow__)) int isdigit(int  ) ;
extern  __attribute__((__nothrow__)) int islower(int  ) ;
extern  __attribute__((__nothrow__)) int isgraph(int  ) ;
extern  __attribute__((__nothrow__)) int isprint(int  ) ;
extern  __attribute__((__nothrow__)) int ispunct(int  ) ;
extern  __attribute__((__nothrow__)) int isspace(int  ) ;
extern  __attribute__((__nothrow__)) int isupper(int  ) ;
extern  __attribute__((__nothrow__)) int isxdigit(int  ) ;
__inline extern  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline extern  __attribute__((__nothrow__)) int toupper(int __c ) ;
extern  __attribute__((__nothrow__)) int isblank(int  ) ;
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
__inline extern  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline extern int tolower(int __c ) 
{ 
  __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_tolower_loc();
      tmp___0 = *(*tmp + __c);
    } else {
      tmp___0 = (__int32_t const   )__c;
    }
  } else {
    tmp___0 = (__int32_t const   )__c;
  }
  return ((int )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int toupper(int __c ) ;
__inline extern int toupper(int __c ) 
{ 
  __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_toupper_loc();
      tmp___0 = *(*tmp + __c);
    } else {
      tmp___0 = (__int32_t const   )__c;
    }
  } else {
    tmp___0 = (__int32_t const   )__c;
  }
  return ((int )tmp___0);
}
}
extern  __attribute__((__nothrow__)) int isalnum_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isalpha_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int iscntrl_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isdigit_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int islower_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isgraph_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isprint_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ispunct_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isspace_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isupper_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isxdigit_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isblank_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int __tolower_l(int __c , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int tolower_l(int __c , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int __toupper_l(int __c , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int toupper_l(int __c , __locale_t __l ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf )  __asm__("fstat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                               char const   * __restrict  __filename ,
                                                                                               struct stat * __restrict  __statbuf ,
                                                                                               int __flag )  __asm__("fstatat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
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
                                                                                     struct stat *__stat_buf )  __asm__("__fxstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __xstat)(int __ver ,
                                                                                      char const   *__filename ,
                                                                                      struct stat *__stat_buf )  __asm__("__xstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __lxstat)(int __ver ,
                                                                                       char const   *__filename ,
                                                                                       struct stat *__stat_buf )  __asm__("__lxstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4))) __fxstatat)(int __ver ,
                                                                                         int __fildes ,
                                                                                         char const   *__filename ,
                                                                                         struct stat *__stat_buf ,
                                                                                         int __flag )  __asm__("__fxstatat64")  ;
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
                                                                                            struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
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
                                                                                             struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
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
                                                                                           struct stat *__statbuf )  __asm__("fstat64")  ;
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
                                                                                               int __flag )  __asm__("fstatat64")  ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) access)(char const   *__name ,
                                                                                   int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) faccessat)(int __fd ,
                                                                                      char const   *__file ,
                                                                                      int __type ,
                                                                                      int __flag ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off64_t __offset )  __asm__("pread64")  ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __nbytes ,
                      __off64_t __offset )  __asm__("pwrite64")  ;
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
                                                                                     __off64_t __length )  __asm__("truncate64")  ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int fdatasync(int __fildes ) ;
struct paperdef PaperTable[49]  = 
  {      {{(char )'d', (char )'e', (char )'f', (char )'a', (char )'u', (char )'l',
       (char )'t', (char )'\000'}, 8.500, 14.000, 0.607}, 
        {{(char )'p', (char )'a', (char )'4', (char )'\000'}, 8.264, 11.000, 0.751}, 
        {{(char )'l', (char )'e', (char )'t', (char )'t', (char )'e', (char )'r',
       (char )'\000'}, 8.500, 11.000, 0.773}, 
        {{(char )'l', (char )'e', (char )'g', (char )'a', (char )'l', (char )'\000'},
      8.500, 14.000, 0.607}, 
        {{(char )'h', (char )'a', (char )'l', (char )'f', (char )'-', (char )'l',
       (char )'e', (char )'t', (char )'t', (char )'e', (char )'r', (char )'\000'},
      8.500, 5.514, 1.542}, 
        {{(char )'e', (char )'x', (char )'e', (char )'c', (char )'u', (char )'t',
       (char )'i', (char )'v', (char )'e', (char )'\000'}, 7.264, 10.528, 0.690}, 
        {{(char )'t', (char )'a', (char )'b', (char )'l', (char )'o', (char )'i',
       (char )'d', (char )'\000'}, 11.000, 17.000, 0.647}, 
        {{(char )'1', (char )'1', (char )'x', (char )'1', (char )'7', (char )'\000'},
      11.000, 17.000, 0.647}, 
        {{(char )'l', (char )'e', (char )'d', (char )'g', (char )'e', (char )'r',
       (char )'\000'}, 17.000, 11.000, 1.545}, 
        {{(char )'a', (char )'r', (char )'c', (char )'h', (char )'a', (char )'\000'},
      9.000, 12.000, 0.750}, 
        {{(char )'a', (char )'r', (char )'c', (char )'h', (char )'b', (char )'\000'},
      12.000, 18.000, 0.667}, 
        {{(char )'a', (char )'r', (char )'c', (char )'h', (char )'c', (char )'\000'},
      18.000, 24.000, 0.750}, 
        {{(char )'a', (char )'r', (char )'c', (char )'h', (char )'d', (char )'\000'},
      24.000, 36.000, 0.667}, 
        {{(char )'a', (char )'r', (char )'c', (char )'h', (char )'e', (char )'\000'},
      36.000, 48.000, 0.750}, 
        {{(char )'c', (char )'s', (char )'h', (char )'e', (char )'e', (char )'t',
       (char )'\000'}, 17.000, 22.000, 0.773}, 
        {{(char )'d', (char )'s', (char )'h', (char )'e', (char )'e', (char )'t',
       (char )'\000'}, 22.000, 34.000, 0.647}, 
        {{(char )'e', (char )'s', (char )'h', (char )'e', (char )'e', (char )'t',
       (char )'\000'}, 34.000, 44.000, 0.773}, 
        {{(char )'s', (char )'u', (char )'p', (char )'e', (char )'r', (char )'b',
       (char )'\000'}, 11.708, 17.042, 0.687}, 
        {{(char )'c', (char )'o', (char )'m', (char )'m', (char )'e', (char )'r',
       (char )'c', (char )'i', (char )'a', (char )'l', (char )'\000'}, 4.139,
      9.528, 0.434}, 
        {{(char )'m', (char )'o', (char )'n', (char )'a', (char )'r', (char )'c',
       (char )'h', (char )'\000'}, 3.889, 7.528, 0.517}, 
        {{(char )'e', (char )'n', (char )'v', (char )'e', (char )'l', (char )'o',
       (char )'p', (char )'e', (char )'-', (char )'d', (char )'l', (char )'\000'},
      4.333, 8.681, 0.499}, 
        {{(char )'e', (char )'n', (char )'v', (char )'e', (char )'l', (char )'o',
       (char )'p', (char )'e', (char )'-', (char )'c', (char )'5', (char )'\000'},
      6.389, 9.028, 0.708}, 
        {{(char )'e', (char )'u', (char )'r', (char )'o', (char )'p', (char )'o',
       (char )'s', (char )'t', (char )'c', (char )'a', (char )'r', (char )'d',
       (char )'\000'}, 4.139, 5.833, 0.710}, 
        {{(char )'a', (char )'0', (char )'\000'}, 33.111, 46.806, 0.707}, 
        {{(char )'a', (char )'1', (char )'\000'}, 23.389, 33.111, 0.706}, 
        {{(char )'a', (char )'2', (char )'\000'}, 16.542, 23.389, 0.707}, 
        {{(char )'a', (char )'3', (char )'\000'}, 11.694, 16.542, 0.707}, 
        {{(char )'a', (char )'4', (char )'\000'}, 8.264, 11.694, 0.707}, 
        {{(char )'a', (char )'5', (char )'\000'}, 5.833, 8.264, 0.706}, 
        {{(char )'a', (char )'6', (char )'\000'}, 4.125, 5.833, 0.707}, 
        {{(char )'a', (char )'7', (char )'\000'}, 2.917, 4.125, 0.707}, 
        {{(char )'a', (char )'8', (char )'\000'}, 2.056, 2.917, 0.705}, 
        {{(char )'a', (char )'9', (char )'\000'}, 1.458, 2.056, 0.709}, 
        {{(char )'a', (char )'1', (char )'0', (char )'\000'}, 1.014, 1.458, 0.695}, 
        {{(char )'b', (char )'0', (char )'\000'}, 39.375, 55.667, 0.707}, 
        {{(char )'b', (char )'1', (char )'\000'}, 27.833, 39.375, 0.707}, 
        {{(char )'b', (char )'2', (char )'\000'}, 19.681, 27.833, 0.707}, 
        {{(char )'b', (char )'3', (char )'\000'}, 13.903, 19.681, 0.706}, 
        {{(char )'b', (char )'4', (char )'\000'}, 9.847, 13.903, 0.708}, 
        {{(char )'b', (char )'5', (char )'\000'}, 6.931, 9.847, 0.704}, 
        {{(char )'b', (char )'6', (char )'\000'}, 4.917, 6.931, 0.709}, 
        {{(char )'c', (char )'0', (char )'\000'}, 36.097, 51.069, 0.707}, 
        {{(char )'c', (char )'1', (char )'\000'}, 25.514, 36.097, 0.707}, 
        {{(char )'c', (char )'2', (char )'\000'}, 18.028, 25.514, 0.707}, 
        {{(char )'c', (char )'3', (char )'\000'}, 12.750, 18.028, 0.707}, 
        {{(char )'c', (char )'4', (char )'\000'}, 9.014, 12.750, 0.707}, 
        {{(char )'c', (char )'5', (char )'\000'}, 6.375, 9.014, 0.707}, 
        {{(char )'c', (char )'6', (char )'\000'}, 4.486, 6.375, 0.704}, 
        {{(char )'\000'}, 0.000, 0.000, 1.000}};
static int outtiled  =    -1;
static uint32 tilewidth  ;
static uint32 tilelength  ;
static uint16 config  ;
static uint16 compression  ;
static uint16 predictor  ;
static uint16 fillorder  ;
static uint32 rowsperstrip  ;
static uint32 g3opts  ;
static int ignore  =    0;
static uint32 defg3opts  =    (uint32 )-1;
static int quality  =    75;
static int jpegcolormode  =    1;
static uint16 defcompression  =    (uint16 )-1;
static uint16 defpredictor  =    (uint16 )-1;
static int pageNum  =    0;
static int little_endian  =    1;
static int readContigStripsIntoBuffer(TIFF *in , uint8 *buf ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp ) ;
static int readSeparateStripsIntoBuffer(TIFF *in , uint8 *obuf , uint32 length ,
                                        uint32 width , unsigned short spp ,
                                        struct dump_opts *dump ) ;
static int readContigTilesIntoBuffer(TIFF *in , uint8 *buf ,
                                     uint32 imagelength , uint32 imagewidth ,
                                     tsample_t spp ) ;
static int readSeparateTilesIntoBuffer(TIFF *in , uint8 *buf ,
                                       uint32 imagelength , uint32 imagewidth ,
                                       unsigned short spp ) ;
static int writeBufferToContigStrips(TIFF *out , uint8 *buf ,
                                     uint32 imagelength , uint32 imagewidth ,
                                     tsample_t spp ) ;
static int writeBufferToContigTiles(TIFF *out , uint8 *buf ,
                                    uint32 imagelength , uint32 imagewidth ,
                                    tsample_t spp ) ;
static int writeBufferToSeparateStrips(TIFF *out , uint8 *buf , uint32 length ,
                                       uint32 width , unsigned short spp ,
                                       struct dump_opts *dump ) ;
static int writeBufferToSeparateTiles(TIFF *out , uint8 *buf ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp , struct dump_opts *dump ) ;
static int extractContigSamplesToBuffer(uint8 *out , uint8 *in , uint32 rows ,
                                        uint32 cols , int outskew , int inskew ,
                                        tsample_t sample , uint16 spp ,
                                        uint16 bps , struct dump_opts *dump ) ;
static void cpStripToTile(uint8 *out , uint8 *in , uint32 rows , uint32 cols ,
                          int outskew , int inskew ) ;
static void cpSeparateBufToContigBuf(uint8 *out , uint8 *in , uint32 rows ,
                                     uint32 cols , int outskew , int inskew ,
                                     tsample_t spp , int bytes_per_sample ) ;
static int processCompressOptions(char *opt ) ;
static void usage(void) ;
static void initImageData(struct image_data *image ) ;
static void initCropMasks(struct crop_mask *cps ) ;
static void initPageSetup(struct pagedef *page , struct pageseg *pagelist ,
                          struct buffinfo *seg_buffs ) ;
static void initDumpOptions(struct dump_opts *dump ) ;
void process_command_opts(int argc , char **argv , char *mp , char *mode ,
                          uint32 *dirnum , uint16 *defconfig ,
                          uint16 *deffillorder , uint32 *deftilewidth ,
                          uint32 *deftilelength , uint32 *defrowsperstrip ,
                          struct crop_mask *crop_data , struct pagedef *page ,
                          struct dump_opts *dump , unsigned int *imagelist ,
                          unsigned int *image_count ) ;
static int update_output_file(TIFF **tiffout , char *mode , int autoindex ,
                              char *outname , unsigned int *page ) ;
static int get_page_geometry(char *name , struct pagedef *page ) ;
static int computeInputPixelOffsets(struct crop_mask *crop ,
                                    struct image_data *image ,
                                    struct offset *off ) ;
static int computeOutputPixelOffsets(struct crop_mask *crop ,
                                     struct image_data *image ,
                                     struct pagedef *page ,
                                     struct pageseg *sections ,
                                     struct dump_opts *dump ) ;
static int loadImage(TIFF *in , struct image_data *image ,
                     struct dump_opts *dump , unsigned char **read_ptr ) ;
static int correct_orientation(struct image_data *image ,
                               unsigned char **work_buff_ptr ) ;
static int getCropOffsets(struct image_data *image , struct crop_mask *crop ,
                          struct dump_opts *dump ) ;
static int processCropSelections(struct image_data *image ,
                                 struct crop_mask *crop ,
                                 unsigned char **read_buff_ptr ,
                                 struct buffinfo *seg_buffs ) ;
static int writeSelections(TIFF *in , TIFF **out , struct crop_mask *crop ,
                           struct image_data *image , struct dump_opts *dump ,
                           struct buffinfo *seg_buffs , char *mp ,
                           char *filename , unsigned int *page ,
                           unsigned int total_pages ) ;
static int createImageSection(uint32 sectsize , unsigned char **sect_buff_ptr ) ;
static int extractImageSection(struct image_data *image ,
                               struct pageseg *section ,
                               unsigned char *src_buff ,
                               unsigned char *sect_buff ) ;
static int writeSingleSection(TIFF *in , TIFF *out , struct image_data *image ,
                              struct dump_opts *dump , uint32 width ,
                              uint32 length , double hres , double vres ,
                              unsigned char *sect_buff ) ;
static int writeImageSections(TIFF *in , TIFF *out , struct image_data *image ,
                              struct pagedef *page , struct pageseg *sections ,
                              struct dump_opts *dump , unsigned char *src_buff ,
                              unsigned char **sect_buff_ptr ) ;
static int createCroppedImage(struct image_data *image ,
                              struct crop_mask *crop ,
                              unsigned char **read_buff_ptr ,
                              unsigned char **crop_buff_ptr ) ;
static int writeCroppedImage(TIFF *in , TIFF *out , struct image_data *image ,
                             struct dump_opts *dump , uint32 width ,
                             uint32 length , unsigned char *crop_buff ,
                             int pagenum , int total_pages ) ;
static int rotateContigSamples8bits(uint16 rotation , uint16 spp , uint16 bps ,
                                    uint32 width , uint32 length , uint32 col ,
                                    uint8 *src , uint8 *dst ) ;
static int rotateContigSamples16bits(uint16 rotation , uint16 spp , uint16 bps ,
                                     uint32 width , uint32 length , uint32 col ,
                                     uint8 *src , uint8 *dst ) ;
static int rotateContigSamples24bits(uint16 rotation , uint16 spp , uint16 bps ,
                                     uint32 width , uint32 length , uint32 col ,
                                     uint8 *src , uint8 *dst ) ;
static int rotateContigSamples32bits(uint16 rotation , uint16 spp , uint16 bps ,
                                     uint32 width , uint32 length , uint32 col ,
                                     uint8 *src , uint8 *dst ) ;
static int rotateImage(uint16 rotation , struct image_data *image ,
                       uint32 *img_width , uint32 *img_length ,
                       unsigned char **ibuff_ptr ) ;
static int mirrorImage(uint16 spp , uint16 bps , uint16 mirror , uint32 width ,
                       uint32 length , unsigned char *ibuff ) ;
static int invertImage(uint16 photometric , uint16 spp , uint16 bps ,
                       uint32 width , uint32 length , unsigned char *work_buff ) ;
static int reverseSamples8bits(uint16 spp , uint16 bps , uint32 width ,
                               uint8 *ibuff , uint8 *obuff ) ;
static int reverseSamples16bits(uint16 spp , uint16 bps , uint32 width ,
                                uint8 *ibuff , uint8 *obuff ) ;
static int reverseSamples24bits(uint16 spp , uint16 bps , uint32 width ,
                                uint8 *ibuff , uint8 *obuff ) ;
static int reverseSamples32bits(uint16 spp , uint16 bps , uint32 width ,
                                uint8 *ibuff , uint8 *obuff ) ;
static int reverseSamplesBytes(uint16 spp , uint16 bps , uint32 width ,
                               uint8 *src , uint8 *dst ) ;
static int extractSeparateRegion(struct image_data *image ,
                                 struct crop_mask *crop ,
                                 unsigned char *read_buff ,
                                 unsigned char *crop_buff , int region ) ;
static int extractCompositeRegions(struct image_data *image ,
                                   struct crop_mask *crop ,
                                   unsigned char *read_buff ,
                                   unsigned char *crop_buff ) ;
static int extractContigSamples8bits(uint8 *in , uint8 *out , uint32 cols ,
                                     tsample_t sample , uint16 spp ,
                                     uint16 bps , tsample_t count ,
                                     uint32 start , uint32 end ) ;
static int extractContigSamples16bits(uint8 *in , uint8 *out , uint32 cols ,
                                      tsample_t sample , uint16 spp ,
                                      uint16 bps , tsample_t count ,
                                      uint32 start , uint32 end ) ;
static int extractContigSamples24bits(uint8 *in , uint8 *out , uint32 cols ,
                                      tsample_t sample , uint16 spp ,
                                      uint16 bps , tsample_t count ,
                                      uint32 start , uint32 end ) ;
static int extractContigSamples32bits(uint8 *in , uint8 *out , uint32 cols ,
                                      tsample_t sample , uint16 spp ,
                                      uint16 bps , tsample_t count ,
                                      uint32 start , uint32 end ) ;
static int extractContigSamplesBytes(uint8 *in , uint8 *out , uint32 cols ,
                                     tsample_t sample , uint16 spp ,
                                     uint16 bps , tsample_t count ,
                                     uint32 start , uint32 end ) ;
static int extractContigSamplesShifted8bits(uint8 *in , uint8 *out ,
                                            uint32 cols , tsample_t sample ,
                                            uint16 spp , uint16 bps ,
                                            tsample_t count , uint32 start ,
                                            uint32 end , int shift ) ;
static int extractContigSamplesShifted16bits(uint8 *in , uint8 *out ,
                                             uint32 cols , tsample_t sample ,
                                             uint16 spp , uint16 bps ,
                                             tsample_t count , uint32 start ,
                                             uint32 end , int shift ) ;
static int extractContigSamplesShifted24bits(uint8 *in , uint8 *out ,
                                             uint32 cols , tsample_t sample ,
                                             uint16 spp , uint16 bps ,
                                             tsample_t count , uint32 start ,
                                             uint32 end , int shift ) ;
static int extractContigSamplesShifted32bits(uint8 *in , uint8 *out ,
                                             uint32 cols , tsample_t sample ,
                                             uint16 spp , uint16 bps ,
                                             tsample_t count , uint32 start ,
                                             uint32 end , int shift ) ;
static int combineSeparateSamples8bits(uint8 **in , uint8 *out , uint32 row ,
                                       uint32 cols , uint16 spp , uint16 bps ,
                                       FILE *dumpfile , int format , int level ) ;
static int combineSeparateSamples16bits(uint8 **in , uint8 *out , uint32 row ,
                                        uint32 cols , uint16 spp , uint16 bps ,
                                        FILE *dumpfile , int format , int level ) ;
static int combineSeparateSamples24bits(uint8 **in , uint8 *out , uint32 row ,
                                        uint32 cols , uint16 spp , uint16 bps ,
                                        FILE *dumpfile , int format , int level ) ;
static int combineSeparateSamples32bits(uint8 **in , uint8 *out , uint32 row ,
                                        uint32 cols , uint16 spp , uint16 bps ,
                                        FILE *dumpfile , int format , int level ) ;
static int combineSeparateSamplesBytes(unsigned char **srcbuffs ,
                                       unsigned char *out , uint32 row ,
                                       uint32 width , unsigned short spp ,
                                       uint16 bps , FILE *dumpfile ,
                                       int format , int level ) ;
static void dump_info(FILE *dumpfile , int format , char *prefix , char *msg 
                      , ...) ;
static int dump_data(FILE *dumpfile , int format , char *dump_tag ,
                     unsigned char *data , uint32 count ) ;
static int dump_byte(FILE *dumpfile , int format , char *dump_tag ,
                     unsigned char data ) ;
static int dump_short(FILE *dumpfile , int format , char *dump_tag ,
                      uint16 data ) ;
static int dump_long(FILE *dumpfile , int format , char *dump_tag , uint32 data ) ;
static int dump_wide(FILE *dumpfile , int format , char *dump_tag , uint64 data ) ;
static int dump_buffer(FILE *dumpfile , int format , uint32 rows ,
                       uint32 width , uint32 row , unsigned char *buff ) ;
static char tiffcrop_version_id[4]  = {      (char )'2',      (char )'.',      (char )'0',      (char )'\000'};
static char tiffcrop_rev_date[11]  = 
  {      (char )'0',      (char )'1',      (char )'-',      (char )'0', 
        (char )'6',      (char )'-',      (char )'2',      (char )'0', 
        (char )'0',      (char )'9',      (char )'\000'};
static char *stuff[127]  = 
  {      (char *)"usage: tiffcrop [options] source1 ... sourceN  destination",      (char *)"where options are:",      (char *)" -h\t\tPrint this syntax listing",      (char *)" -v\t\tPrint tiffcrop version identifier and last revision date", 
        (char *)" ",      (char *)" -a\t\tAppend to output instead of overwriting",      (char *)" -d offset\tSet initial directory offset, counting first image as one, not zero",      (char *)" -p contig\tPack samples contiguously (e.g. RGBRGB...)", 
        (char *)" -p separate\tStore samples separately (e.g. RRR...GGG...BBB...)",      (char *)" -s\t\tWrite output in strips",      (char *)" -t\t\tWrite output in tiles",      (char *)" -i\t\tIgnore read errors", 
        (char *)" ",      (char *)" -r #\t\tMake each strip have no more than # rows",      (char *)" -w #\t\tSet output tile width (pixels)",      (char *)" -l #\t\tSet output tile length (pixels)", 
        (char *)" ",      (char *)" -f lsb2msb\tForce lsb-to-msb FillOrder for output",      (char *)" -f msb2lsb\tForce msb-to-lsb FillOrder for output",      (char *)"", 
        (char *)" -c lzw[:opts]\tCompress output with Lempel-Ziv & Welch encoding",      (char *)" -c zip[:opts]\tCompress output with deflate encoding",      (char *)" -c jpeg[:opts]\tcompress output with JPEG encoding",      (char *)" -c packbits\tCompress output with packbits encoding", 
        (char *)" -c g3[:opts]\tCompress output with CCITT Group 3 encoding",      (char *)" -c g4\t\tCompress output with CCITT Group 4 encoding",      (char *)" -c none\tUse no compression algorithm on output",      (char *)" ", 
        (char *)"Group 3 options:",      (char *)" 1d\t\tUse default CCITT Group 3 1D-encoding",      (char *)" 2d\t\tUse optional CCITT Group 3 2D-encoding",      (char *)" fill\t\tByte-align EOL codes", 
        (char *)"For example, -c g3:2d:fill to get G3-2D-encoded data with byte-aligned EOLs",      (char *)" ",      (char *)"JPEG options:",      (char *)" #\t\tSet compression quality level (0-100, default 75)", 
        (char *)" r\t\tOutput color image as RGB rather than YCbCr",      (char *)"For example, -c jpeg:r:50 to get JPEG-encoded RGB data with 50% comp. quality",      (char *)" ",      (char *)"LZW and deflate options:", 
        (char *)" #\t\tSet predictor value",      (char *)"For example, -c lzw:2 to get LZW-encoded data with horizontal differencing",      (char *)" ",      (char *)"Page and selection options:", 
        (char *)" -N odd|even|#,#-#,#|last         sequences and ranges of images within file to process",      (char *)"             The words odd or even may be used to specify all odd or even numbered images.",      (char *)"             The word last may be used in place of a number in the sequence to indicate.",      (char *)"             The final image in the file without knowing how many images there are.", 
        (char *)"             Numbers are counted from one even though TIFF IFDs are counted from zero.",      (char *)" ",      (char *)" -E t|l|r|b  edge to use as origin for width and length of crop region",      (char *)" -U units    [in, cm, px ] inches, centimeters or pixels", 
        (char *)" ",      (char *)" -m #,#,#,#  margins from edges for selection: top, left, bottom, right separated by commas",      (char *)" -X #        horizontal dimension of region to extract expressed in current units",      (char *)" -Y #        vertical dimension of region to extract expressed in current units", 
        (char *)" -Z #:#,#:#  zones of the image designated as position X of Y,",      (char *)"             eg 1:3 would be first of three equal portions measured from reference edge",      (char *)" -z x1,y1,x2,y2:...:xN,yN,xN+1,yN+1",      (char *)"             regions of the image designated by upper left and lower right coordinates", 
        (char *)"",      (char *)"Export grouping options:",      (char *)" -e c|d|i|m|s    export mode for images and selections from input images.",      (char *)"                 When exporting a composite image from multiple zones or regions", 
        (char *)"                 (combined and image modes), the selections must have equal sizes",      (char *)"                 for the axis perpendicular to the edge specified with -E.",      (char *)"    c|combined   All images and selections are written to a single file (default).",      (char *)"                 with multiple selections from one image combined into a single image.", 
        (char *)"    d|divided    All images and selections are written to a single file",      (char *)"                 with each selection from one image written to a new image.",      (char *)"    i|image      Each input image is written to a new file (numeric filename sequence)",      (char *)"                 with multiple selections from the image combined into one image.", 
        (char *)"    m|multiple   Each input image is written to a new file (numeric filename sequence)",      (char *)"                 with each selection from the image written to a new image.",      (char *)"    s|separated  Individual selections from each image are written to separate files.",      (char *)"", 
        (char *)"Output options:",      (char *)" -H #        Set horizontal resolution of output images to #",      (char *)" -V #        Set vertical resolution of output images to #",      (char *)" -J #        Set horizontal margin of output page to # expressed in current units", 
        (char *)" -K #        Set verticalal margin of output page to # expressed in current units",      (char *)" ",      (char *)" -O orient    orientation for output image, portrait, landscape, auto",      (char *)" -P page      page size for output image segments, eg letter, legal, tabloid, etc", 
        (char *)" -S cols:rows Divide the image into equal sized segments using cols across and rows down.",      (char *)" ",      (char *)" -F hor|vert|both",      (char *)"             flip (mirror) image or region horizontally, vertically, or both", 
        (char *)" -R #        [90,180,or 270] degrees clockwise rotation of image or extracted region",      (char *)" -I [black|white|data|both]",      (char *)"             invert color space, eg dark to light for bilevel and grayscale images",      (char *)"             If argument is white or black, set the PHOTOMETRIC_INTERPRETATION ", 
        (char *)"             tag to MinIsBlack or MinIsWhite without altering the image data",      (char *)"             If the argument is data or both, the image data are modified:",      (char *)"             both inverts the data and the PHOTOMETRIC_INTERPRETATION tag,",      (char *)"             data inverts the data but not the PHOTOMETRIC_INTERPRETATION tag", 
        (char *)" ",      (char *)"-D opt1:value1,opt2:value2,opt3:value3:opt4:value4",      (char *)"             Debug/dump program progress and/or data to non-TIFF files.",      (char *)"             Options include the following and must be joined as a comma", 
        (char *)"             separate list. The use of this option is generally limited to",      (char *)"             program debugging and development of future options.",      (char *)" ",      (char *)"   debug:N   Display limited program progress indicators where larger N", 
        (char *)"             increase the level of detail. The program must be compiled with",      (char *)"             -DDEBUG -DDEBUG2 to enable full debug reporting",      (char *)"",      (char *)"   format:txt|raw  Format any logged data as ASCII text or raw binary ", 
        (char *)"             values. ASCII text dumps include strings of ones and zeroes",      (char *)"             representing the binary values in the image data plus identifying headers.",      (char *)" ",      (char *)"   level:N   Specify the level of detail presented in the dump files.", 
        (char *)"             This can vary from dumps of the entire input or output image data to dumps",      (char *)"             of data processed by specific functions. Current range of levels is 1 to 3.",      (char *)" ",      (char *)"   input:full-path-to-directory/input-dumpname", 
        (char *)" ",      (char *)"   output:full-path-to-directory/output-dumpnaem",      (char *)" ",      (char *)"             When dump files are being written, each image will be written to a separate", 
        (char *)"             file with the name built by adding a numeric sequence value to the dumpname",      (char *)"             and an extension of .txt for ASCII dumps or .bin for binary dumps.",      (char *)" ",      (char *)"             The four debug/dump options are independent, though it makes little sense to", 
        (char *)"             specify a dump file without specifying a detail level.",      (char *)" ",      (char *)((void *)0)};
static int readContigTilesIntoBuffer(TIFF *in ,
                                     uint8 *buf , uint32 imagelength ,
                                     uint32 imagewidth , tsample_t spp ) 
{ 
  int status ;
  tdata_t tilebuf ;
  tmsize_t tmp ;
  void *tmp___0 ;
  uint32 imagew ;
  tmsize_t tmp___1 ;
  uint32 tilew ;
  tmsize_t tmp___2 ;
  int iskew ;
  uint8 *bufp ;
  uint32 tw ;
  uint32 tl ;
  uint32 row ;
  uint32 nrow ;
  uint32 tmp___3 ;
  uint32 colb ;
  uint32 col ;
  char const   *tmp___4 ;
  tmsize_t tmp___5 ;
  uint32 width ;
  uint32 oskew ;

  {
  status = 1;
  tmp = TIFFTileSize(in);
  tmp___0 = _TIFFmalloc(tmp);
  tilebuf = tmp___0;
  tmp___1 = TIFFScanlineSize(in);
  imagew = (uint32 )tmp___1;
  tmp___2 = TIFFTileRowSize(in);
  tilew = (uint32 )tmp___2;
  iskew = (int )(imagew - tilew);
  bufp = buf;
  if ((unsigned int )tilebuf == (unsigned int )((tdata_t )0)) {
    return (0);
  } else {

  }
  TIFFGetField(in, (uint32 )322, & tw);
  TIFFGetField(in, (uint32 )323, & tl);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___3 = imagelength - row;
    } else {
      tmp___3 = tl;
    }
    nrow = tmp___3;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      tmp___5 = TIFFReadTile(in, tilebuf, col, row, (uint32 )0, (uint16 )0);
      if (tmp___5 < 0L) {
        if (! ignore) {
          tmp___4 = TIFFFileName(in);
          TIFFError(tmp___4, "Error, can\'t read tile at %lu %lu",
                    (unsigned long )col, (unsigned long )row);
          status = 0;
          goto done;
        } else {

        }
      } else {

      }
      if (colb + tilew > imagew) {
        width = imagew - colb;
        oskew = tilew - width;
        cpStripToTile(bufp + colb, (uint8 *)tilebuf, nrow, width,
                      (int )(oskew + (uint32 )iskew), (int )oskew);
      } else {
        cpStripToTile(bufp + colb, (uint8 *)tilebuf, nrow, tilew, iskew, 0);
      }
      colb += tilew;
      col += tw;
    }
    bufp += imagew * nrow;
    row += tl;
  }
  done: 
  _TIFFfree(tilebuf);
  return (status);
}
}
static int readSeparateTilesIntoBuffer(TIFF *in , uint8 *buf ,
                                       uint32 imagelength , uint32 imagewidth ,
                                       unsigned short spp ) 
{ 
  int status ;
  uint32 imagew ;
  tmsize_t tmp ;
  uint32 tilew ;
  tmsize_t tmp___0 ;
  int iskew ;
  tdata_t tilebuf ;
  tmsize_t tmp___1 ;
  void *tmp___2 ;
  uint8 *bufp ;
  uint32 tw ;
  uint32 tl ;
  uint32 row ;
  uint16 bps ;
  uint16 bytes_per_sample ;
  uint32 nrow ;
  uint32 tmp___3 ;
  uint32 colb ;
  uint32 col ;
  tsample_t s ;
  char const   *tmp___4 ;
  tmsize_t tmp___5 ;
  uint32 width ;
  int oskew ;

  {
  status = 1;
  tmp = TIFFRasterScanlineSize(in);
  imagew = (uint32 )tmp;
  tmp___0 = TIFFTileRowSize(in);
  tilew = (uint32 )tmp___0;
  iskew = (int )(imagew - tilew * (uint32 )spp);
  tmp___1 = TIFFTileSize(in);
  tmp___2 = _TIFFmalloc(tmp___1);
  tilebuf = tmp___2;
  bufp = buf;
  if ((unsigned int )tilebuf == (unsigned int )((tdata_t )0)) {
    return (0);
  } else {

  }
  TIFFGetField(in, (uint32 )322, & tw);
  TIFFGetField(in, (uint32 )323, & tl);
  TIFFGetField(in, (uint32 )258, & bps);
  if ((int )bps % 8 == 0) {

  } else {
    __assert_fail("bps % 8 == 0", "tiffcrop.c", 800U,
                  "readSeparateTilesIntoBuffer");
  }
  bytes_per_sample = (uint16 )((int )bps / 8);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___3 = imagelength - row;
    } else {
      tmp___3 = tl;
    }
    nrow = tmp___3;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      s = (tsample_t )0;
      while ((int )s < (int )spp) {
        tmp___5 = TIFFReadTile(in, tilebuf, col, row, (uint32 )0, s);
        if (tmp___5 < 0L) {
          if (! ignore) {
            tmp___4 = TIFFFileName(in);
            TIFFError(tmp___4, "Error, can\'t read tile at %lu %lu, sample %lu",
                      (unsigned long )col, (unsigned long )row,
                      (unsigned long )s);
            status = 0;
            goto done;
          } else {

          }
        } else {

        }
        if (colb + tilew * (uint32 )spp > imagew) {
          width = imagew - colb;
          oskew = (int )(tilew * (uint32 )spp - width);
          cpSeparateBufToContigBuf((bufp + colb) + (int )s * (int )bytes_per_sample,
                                   (uint8 *)tilebuf, nrow,
                                   width / (uint32 )((int )spp * (int )bytes_per_sample),
                                   oskew + iskew, oskew / (int )spp, spp,
                                   (int )bytes_per_sample);
        } else {
          cpSeparateBufToContigBuf((bufp + colb) + (int )s * (int )bytes_per_sample,
                                   (uint8 *)tilebuf, nrow, tw, iskew, 0, spp,
                                   (int )bytes_per_sample);
        }
        s = (tsample_t )((int )s + 1);
      }
      colb += tilew * (uint32 )spp;
      col += tw;
    }
    bufp += imagew * nrow;
    row += tl;
  }
  done: 
  _TIFFfree(tilebuf);
  return (status);
}
}
static int writeBufferToContigStrips(TIFF *out , uint8 *buf ,
                                     uint32 imagelength , uint32 imagewidth ,
                                     tsample_t spp ) 
{ 
  uint32 row ;
  uint32 rowsperstrip___0 ;
  tstrip_t strip ;
  uint32 nrows ;
  uint32 tmp ;
  tsize_t stripsize ;
  tmsize_t tmp___0 ;
  char const   *tmp___1 ;
  tstrip_t tmp___2 ;
  tmsize_t tmp___3 ;

  {
  strip = (tstrip_t )0;
  TIFFGetFieldDefaulted(out, (uint32 )278, & rowsperstrip___0);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + rowsperstrip___0 > imagelength) {
      tmp = imagelength - row;
    } else {
      tmp = rowsperstrip___0;
    }
    nrows = tmp;
    tmp___0 = TIFFVStripSize(out, nrows);
    stripsize = tmp___0;
    tmp___2 = strip;
    strip ++;
    tmp___3 = TIFFWriteEncodedStrip(out, tmp___2, (void *)buf, stripsize);
    if (tmp___3 < 0L) {
      tmp___1 = TIFFFileName(out);
      TIFFError(tmp___1, "Error, can\'t write strip %u", strip - 1U);
      return (0);
    } else {

    }
    buf += stripsize;
    row += rowsperstrip___0;
  }
  return (1);
}
}
static int writeBufferToSeparateStrips(TIFF *out , uint8 *buf , uint32 length ,
                                       uint32 width , unsigned short spp ,
                                       struct dump_opts *dump ) 
{ 
  uint8 *src ;
  uint16 bps ;
  uint32 row ;
  uint32 nrows ;
  uint32 rowsize ;
  uint32 rowsperstrip___0 ;
  uint32 bytes_per_sample ;
  tsample_t s ;
  tstrip_t strip ;
  tsize_t stripsize ;
  tmsize_t tmp ;
  tsize_t rowstripsize ;
  tsize_t scanlinesize ;
  tmsize_t tmp___0 ;
  tsize_t total_bytes ;
  tdata_t obuf ;
  int tmp___1 ;
  char const   *tmp___2 ;
  tstrip_t tmp___3 ;
  tmsize_t tmp___4 ;

  {
  strip = (tstrip_t )0;
  tmp = TIFFStripSize(out);
  stripsize = tmp;
  tmp___0 = TIFFScanlineSize(out);
  scanlinesize = tmp___0;
  total_bytes = (tsize_t )0;
  TIFFGetFieldDefaulted(out, (uint32 )278, & rowsperstrip___0);
  TIFFGetField(out, (uint32 )258, & bps);
  bytes_per_sample = (uint32 )(((int )bps + 7) / 8);
  rowsize = ((uint32 )((int )bps * (int )spp) * width + 7U) / 8U;
  rowstripsize = (tsize_t )((rowsperstrip___0 * bytes_per_sample) * (width + 1U));
  obuf = _TIFFmalloc(rowstripsize);
  if ((unsigned int )obuf == (unsigned int )((void *)0)) {
    return (0);
  } else {

  }
  s = (tsample_t )0;
  while ((int )s < (int )spp) {
    row = (uint32 )0;
    while (row < length) {
      if (row + rowsperstrip___0 > length) {
        nrows = length - row;
      } else {
        nrows = rowsperstrip___0;
      }
      stripsize = TIFFVStripSize(out, nrows);
      src = buf + row * rowsize;
      total_bytes += stripsize;
      memset(obuf, '\000', (size_t )rowstripsize);
      tmp___1 = extractContigSamplesToBuffer((uint8 *)obuf, src, nrows, width,
                                             0, 0, s, spp, bps, dump);
      if (tmp___1) {
        _TIFFfree(obuf);
        return (0);
      } else {

      }
      if ((unsigned int )dump->outfile != (unsigned int )((void *)0)) {
        if (dump->level == 1) {
          dump_info(dump->outfile, dump->format, (char *)"",
                    (char *)"Sample %2d, Strip: %2d, bytes: %4d, Row %4d, bytes: %4d, Input offset: %6d",
                    (int )s + 1, strip + 1U, stripsize, row + 1U, scanlinesize,
                    src - buf);
          dump_buffer(dump->outfile, dump->format, nrows, (uint32 )scanlinesize,
                      row, (unsigned char *)obuf);
        } else {

        }
      } else {

      }
      tmp___3 = strip;
      strip ++;
      tmp___4 = TIFFWriteEncodedStrip(out, tmp___3, obuf, stripsize);
      if (tmp___4 < 0L) {
        tmp___2 = TIFFFileName(out);
        TIFFError(tmp___2, "Error, can\'t write strip %u", strip - 1U);
        _TIFFfree(obuf);
        return (0);
      } else {

      }
      row += rowsperstrip___0;
    }
    s = (tsample_t )((int )s + 1);
  }
  _TIFFfree(obuf);
  return (1);
}
}
static int writeBufferToContigTiles(TIFF *out , uint8 *buf ,
                                    uint32 imagelength , uint32 imagewidth ,
                                    tsample_t spp ) 
{ 
  uint32 imagew ;
  tmsize_t tmp ;
  uint32 tilew ;
  tmsize_t tmp___0 ;
  int iskew ;
  tdata_t obuf ;
  tmsize_t tmp___1 ;
  void *tmp___2 ;
  uint8 *bufp ;
  uint32 tl ;
  uint32 tw ;
  uint32 row ;
  uint32 nrow ;
  uint32 tmp___3 ;
  uint32 colb ;
  uint32 col ;
  uint32 width ;
  int oskew ;
  char const   *tmp___4 ;
  tmsize_t tmp___5 ;

  {
  tmp = TIFFScanlineSize(out);
  imagew = (uint32 )tmp;
  tmp___0 = TIFFTileRowSize(out);
  tilew = (uint32 )tmp___0;
  iskew = (int )(imagew - tilew);
  tmp___1 = TIFFTileSize(out);
  tmp___2 = _TIFFmalloc(tmp___1);
  obuf = tmp___2;
  bufp = buf;
  if ((unsigned int )obuf == (unsigned int )((void *)0)) {
    return (0);
  } else {

  }
  TIFFGetField(out, (uint32 )323, & tl);
  TIFFGetField(out, (uint32 )322, & tw);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___3 = imagelength - row;
    } else {
      tmp___3 = tl;
    }
    nrow = tmp___3;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      if (colb + tilew > imagew) {
        width = imagew - colb;
        oskew = (int )(tilew - width);
        cpStripToTile((uint8 *)obuf, bufp + colb, nrow, width, oskew,
                      oskew + iskew);
      } else {
        cpStripToTile((uint8 *)obuf, bufp + colb, nrow, tilew, 0, iskew);
      }
      tmp___5 = TIFFWriteTile(out, obuf, col, row, (uint32 )0, (uint16 )0);
      if (tmp___5 < 0L) {
        tmp___4 = TIFFFileName(out);
        TIFFError(tmp___4, "Error, can\'t write tile at %lu %lu",
                  (unsigned long )col, (unsigned long )row);
        _TIFFfree(obuf);
        return (0);
      } else {

      }
      colb += tilew;
      col += tw;
    }
    bufp += nrow * imagew;
    row += tilelength;
  }
  _TIFFfree(obuf);
  return (1);
}
}
static int writeBufferToSeparateTiles(TIFF *out , uint8 *buf ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp , struct dump_opts *dump ) 
{ 
  uint32 imagew ;
  tmsize_t tmp ;
  tsize_t tilew ;
  tmsize_t tmp___0 ;
  uint32 iimagew ;
  tmsize_t tmp___1 ;
  int iskew ;
  tdata_t obuf ;
  tmsize_t tmp___2 ;
  void *tmp___3 ;
  uint8 *bufp ;
  uint32 tl ;
  uint32 tw ;
  uint32 row ;
  uint16 bps ;
  uint16 bytes_per_sample ;
  uint32 nrow ;
  uint32 tmp___4 ;
  uint32 colb ;
  uint32 col ;
  tsample_t s ;
  uint32 width ;
  int oskew ;
  char const   *tmp___5 ;
  tmsize_t tmp___6 ;

  {
  tmp = TIFFScanlineSize(out);
  imagew = (uint32 )tmp;
  tmp___0 = TIFFTileRowSize(out);
  tilew = tmp___0;
  tmp___1 = TIFFRasterScanlineSize(out);
  iimagew = (uint32 )tmp___1;
  iskew = (int )((unsigned long )iimagew - (unsigned long )(tilew * (tsize_t )spp));
  tmp___2 = TIFFTileSize(out);
  tmp___3 = _TIFFmalloc(tmp___2);
  obuf = tmp___3;
  bufp = buf;
  if ((unsigned int )obuf == (unsigned int )((void *)0)) {
    return (0);
  } else {

  }
  TIFFGetField(out, (uint32 )323, & tl);
  TIFFGetField(out, (uint32 )322, & tw);
  TIFFGetField(out, (uint32 )258, & bps);
  if ((int )bps % 8 == 0) {

  } else {
    __assert_fail("bps % 8 == 0", "tiffcrop.c", 1053U,
                  "writeBufferToSeparateTiles");
  }
  bytes_per_sample = (uint16 )(((int )bps + 7) / 8);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___4 = imagelength - row;
    } else {
      tmp___4 = tl;
    }
    nrow = tmp___4;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      s = (tsample_t )0;
      while ((int )s < (int )spp) {
        if ((unsigned long )colb + (unsigned long )tilew > (unsigned long )imagew) {
          width = imagew - colb;
          oskew = (int )((unsigned long )tilew - (unsigned long )width);
          extractContigSamplesToBuffer((uint8 *)obuf,
                                       (bufp + colb * (uint32 )spp) + (int )s,
                                       nrow, width / (uint32 )bytes_per_sample,
                                       oskew, oskew * (int )spp + iskew, s, spp,
                                       bps, dump);
        } else {
          extractContigSamplesToBuffer((uint8 *)obuf,
                                       (bufp + colb * (uint32 )spp) + (int )s,
                                       nrow, tilewidth, 0, iskew, s, spp, bps,
                                       dump);
        }
        tmp___6 = TIFFWriteTile(out, obuf, col, row, (uint32 )0, s);
        if (tmp___6 < 0L) {
          tmp___5 = TIFFFileName(out);
          TIFFError(tmp___5, "Error, can\'t write tile at %lu %lu sample %lu",
                    (unsigned long )col, (unsigned long )row, (unsigned long )s);
          _TIFFfree(obuf);
          return (0);
        } else {

        }
        s = (tsample_t )((int )s + 1);
      }
      colb = (uint32 )((unsigned long )colb + (unsigned long )tilew);
      col += tw;
    }
    bufp += nrow * iimagew;
    row += tl;
  }
  _TIFFfree(obuf);
  return (1);
}
}
static void processG3Options(char *cp ) 
{ 
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
  size_t tmp___12 ;
  size_t tmp___13 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___17 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  size_t tmp___23 ;
  size_t tmp___24 ;
  size_t tmp___25 ;
  size_t tmp___26 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___30 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  size_t tmp___36 ;
  size_t tmp___37 ;
  void *tmp___38 ;
  char *tmp___39 ;
  void *tmp___40 ;
  char *tmp___41 ;

  {
  tmp___41 = __builtin_strchr(cp, ':');
  cp = tmp___41;
  if (cp) {
    if (defg3opts == 4294967295U) {
      defg3opts = (uint32 )0;
    } else {

    }
    while (1) {
      cp ++;
      if (0) {
        if (0) {
          __s1_len___1 = strlen((char const   *)cp);
          __s2_len___1 = strlen("1d");
          if (! ((size_t )((void const   *)(cp + 1)) - (size_t )((void const   *)cp) == 1U)) {
            goto _L___4;
          } else
          if (__s1_len___1 >= 4U) {
            _L___4: /* CIL Label */ 
            if (! ((size_t )((void const   *)("1d" + 1)) - (size_t )((void const   *)"1d") == 1U)) {
              tmp___33 = 1;
            } else
            if (__s2_len___1 >= 4U) {
              tmp___33 = 1;
            } else {
              tmp___33 = 0;
            }
          } else {
            tmp___33 = 0;
          }
          if (tmp___33) {
            tmp___28 = __builtin_strcmp((char const   *)cp, "1d");
            tmp___32 = tmp___28;
          } else {
            tmp___31 = __builtin_strcmp((char const   *)cp, "1d");
            tmp___32 = tmp___31;
          }
        } else {
          tmp___31 = __builtin_strcmp((char const   *)cp, "1d");
          tmp___32 = tmp___31;
        }
        tmp___35 = tmp___32;
      } else {
        tmp___34 = strncmp((char const   *)cp, "1d", (size_t )2);
        tmp___35 = tmp___34;
      }
      if (tmp___35 == 0) {
        defg3opts &= 4294967294U;
      } else {
        if (0) {
          if (0) {
            __s1_len___0 = strlen((char const   *)cp);
            __s2_len___0 = strlen("2d");
            if (! ((size_t )((void const   *)(cp + 1)) - (size_t )((void const   *)cp) == 1U)) {
              goto _L___2;
            } else
            if (__s1_len___0 >= 4U) {
              _L___2: /* CIL Label */ 
              if (! ((size_t )((void const   *)("2d" + 1)) - (size_t )((void const   *)"2d") == 1U)) {
                tmp___20 = 1;
              } else
              if (__s2_len___0 >= 4U) {
                tmp___20 = 1;
              } else {
                tmp___20 = 0;
              }
            } else {
              tmp___20 = 0;
            }
            if (tmp___20) {
              tmp___15 = __builtin_strcmp((char const   *)cp, "2d");
              tmp___19 = tmp___15;
            } else {
              tmp___18 = __builtin_strcmp((char const   *)cp, "2d");
              tmp___19 = tmp___18;
            }
          } else {
            tmp___18 = __builtin_strcmp((char const   *)cp, "2d");
            tmp___19 = tmp___18;
          }
          tmp___22 = tmp___19;
        } else {
          tmp___21 = strncmp((char const   *)cp, "2d", (size_t )2);
          tmp___22 = tmp___21;
        }
        if (tmp___22 == 0) {
          defg3opts |= 1U;
        } else {
          if (0) {
            if (0) {
              __s1_len = strlen((char const   *)cp);
              __s2_len = strlen("fill");
              if (! ((size_t )((void const   *)(cp + 1)) - (size_t )((void const   *)cp) == 1U)) {
                goto _L___0;
              } else
              if (__s1_len >= 4U) {
                _L___0: /* CIL Label */ 
                if (! ((size_t )((void const   *)("fill" + 1)) - (size_t )((void const   *)"fill") == 1U)) {
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
                tmp___2 = __builtin_strcmp((char const   *)cp, "fill");
                tmp___6 = tmp___2;
              } else {
                tmp___5 = __builtin_strcmp((char const   *)cp, "fill");
                tmp___6 = tmp___5;
              }
            } else {
              tmp___5 = __builtin_strcmp((char const   *)cp, "fill");
              tmp___6 = tmp___5;
            }
            tmp___9 = tmp___6;
          } else {
            tmp___8 = strncmp((char const   *)cp, "fill", (size_t )4);
            tmp___9 = tmp___8;
          }
          if (tmp___9 == 0) {
            defg3opts |= 4U;
          } else {
            usage();
          }
        }
      }
      tmp___39 = __builtin_strchr(cp, ':');
      cp = tmp___39;
      if (cp) {

      } else {
        break;
      }
    }
  } else {

  }
  return;
}
}
static int processCompressOptions(char *opt ) 
{ 
  char *cp ;
  void *tmp ;
  char *tmp___0 ;
  unsigned short const   **tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *cp___0 ;
  void *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  char *cp___1 ;
  void *tmp___7 ;
  char *tmp___8 ;
  int tmp___9 ;
  size_t tmp___10 ;
  size_t tmp___11 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___15 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  size_t tmp___21 ;
  size_t tmp___22 ;
  size_t tmp___23 ;
  size_t tmp___24 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___28 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  size_t tmp___34 ;
  size_t tmp___35 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___39 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  size_t tmp___43 ;
  size_t tmp___44 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___48 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  size_t tmp___54 ;
  size_t tmp___55 ;
  size_t tmp___56 ;
  size_t tmp___57 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___61 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___62 ;
  int tmp___63 ;
  int tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
  size_t tmp___67 ;
  size_t tmp___68 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___72 ;
  unsigned char const   *__s1___4 ;
  register int __result___10 ;
  int tmp___73 ;
  int tmp___74 ;
  int tmp___75 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___76 ;
  int tmp___77 ;
  int tmp___78 ;
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___79 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___80 ;
  int tmp___81 ;
  int tmp___82 ;

  {
  if (0) {
    __s1_len___5 = strlen((char const   *)opt);
    __s2_len___5 = strlen("none");
    if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
      goto _L___12;
    } else
    if (__s1_len___5 >= 4U) {
      _L___12: /* CIL Label */ 
      if (! ((size_t )((void const   *)("none" + 1)) - (size_t )((void const   *)"none") == 1U)) {
        tmp___82 = 1;
      } else
      if (__s2_len___5 >= 4U) {
        tmp___82 = 1;
      } else {
        tmp___82 = 0;
      }
    } else {
      tmp___82 = 0;
    }
    if (tmp___82) {
      tmp___77 = __builtin_strcmp((char const   *)opt, "none");
      tmp___81 = tmp___77;
    } else {
      tmp___80 = __builtin_strcmp((char const   *)opt, "none");
      tmp___81 = tmp___80;
    }
  } else {
    tmp___80 = __builtin_strcmp((char const   *)opt, "none");
    tmp___81 = tmp___80;
  }
  if (tmp___81 == 0) {
    defcompression = (uint16 )1;
  } else {
    if (0) {
      __s1_len___4 = strlen((char const   *)opt);
      __s2_len___4 = strlen("packbits");
      if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
        goto _L___10;
      } else
      if (__s1_len___4 >= 4U) {
        _L___10: /* CIL Label */ 
        if (! ((size_t )((void const   *)("packbits" + 1)) - (size_t )((void const   *)"packbits") == 1U)) {
          tmp___75 = 1;
        } else
        if (__s2_len___4 >= 4U) {
          tmp___75 = 1;
        } else {
          tmp___75 = 0;
        }
      } else {
        tmp___75 = 0;
      }
      if (tmp___75) {
        tmp___70 = __builtin_strcmp((char const   *)opt, "packbits");
        tmp___74 = tmp___70;
      } else {
        tmp___73 = __builtin_strcmp((char const   *)opt, "packbits");
        tmp___74 = tmp___73;
      }
    } else {
      tmp___73 = __builtin_strcmp((char const   *)opt, "packbits");
      tmp___74 = tmp___73;
    }
    if (tmp___74 == 0) {
      defcompression = (uint16 )32773;
    } else {
      if (0) {
        if (0) {
          __s1_len___3 = strlen((char const   *)opt);
          __s2_len___3 = strlen("jpeg");
          if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
            goto _L___8;
          } else
          if (__s1_len___3 >= 4U) {
            _L___8: /* CIL Label */ 
            if (! ((size_t )((void const   *)("jpeg" + 1)) - (size_t )((void const   *)"jpeg") == 1U)) {
              tmp___64 = 1;
            } else
            if (__s2_len___3 >= 4U) {
              tmp___64 = 1;
            } else {
              tmp___64 = 0;
            }
          } else {
            tmp___64 = 0;
          }
          if (tmp___64) {
            tmp___59 = __builtin_strcmp((char const   *)opt, "jpeg");
            tmp___63 = tmp___59;
          } else {
            tmp___62 = __builtin_strcmp((char const   *)opt, "jpeg");
            tmp___63 = tmp___62;
          }
        } else {
          tmp___62 = __builtin_strcmp((char const   *)opt, "jpeg");
          tmp___63 = tmp___62;
        }
        tmp___66 = tmp___63;
      } else {
        tmp___65 = strncmp((char const   *)opt, "jpeg", (size_t )4);
        tmp___66 = tmp___65;
      }
      if (tmp___66 == 0) {
        tmp___0 = __builtin_strchr(opt, ':');
        cp = tmp___0;
        defcompression = (uint16 )7;
        while (cp) {
          tmp___1 = __ctype_b_loc();
          if ((int const   )*(*tmp___1 + (int )*(cp + 1)) & 2048) {
            quality = atoi((char const   *)(cp + 1));
          } else
          if ((int )*(cp + 1) == 114) {
            jpegcolormode = 0;
          } else {
            usage();
          }
          tmp___3 = __builtin_strchr(cp + 1, ':');
          cp = tmp___3;
        }
      } else {
        if (0) {
          if (0) {
            __s1_len___2 = strlen((char const   *)opt);
            __s2_len___2 = strlen("g3");
            if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
              goto _L___6;
            } else
            if (__s1_len___2 >= 4U) {
              _L___6: /* CIL Label */ 
              if (! ((size_t )((void const   *)("g3" + 1)) - (size_t )((void const   *)"g3") == 1U)) {
                tmp___51 = 1;
              } else
              if (__s2_len___2 >= 4U) {
                tmp___51 = 1;
              } else {
                tmp___51 = 0;
              }
            } else {
              tmp___51 = 0;
            }
            if (tmp___51) {
              tmp___46 = __builtin_strcmp((char const   *)opt, "g3");
              tmp___50 = tmp___46;
            } else {
              tmp___49 = __builtin_strcmp((char const   *)opt, "g3");
              tmp___50 = tmp___49;
            }
          } else {
            tmp___49 = __builtin_strcmp((char const   *)opt, "g3");
            tmp___50 = tmp___49;
          }
          tmp___53 = tmp___50;
        } else {
          tmp___52 = strncmp((char const   *)opt, "g3", (size_t )2);
          tmp___53 = tmp___52;
        }
        if (tmp___53 == 0) {
          processG3Options(opt);
          defcompression = (uint16 )3;
        } else {
          if (0) {
            __s1_len___1 = strlen((char const   *)opt);
            __s2_len___1 = strlen("g4");
            if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
              goto _L___4;
            } else
            if (__s1_len___1 >= 4U) {
              _L___4: /* CIL Label */ 
              if (! ((size_t )((void const   *)("g4" + 1)) - (size_t )((void const   *)"g4") == 1U)) {
                tmp___42 = 1;
              } else
              if (__s2_len___1 >= 4U) {
                tmp___42 = 1;
              } else {
                tmp___42 = 0;
              }
            } else {
              tmp___42 = 0;
            }
            if (tmp___42) {
              tmp___37 = __builtin_strcmp((char const   *)opt, "g4");
              tmp___41 = tmp___37;
            } else {
              tmp___40 = __builtin_strcmp((char const   *)opt, "g4");
              tmp___41 = tmp___40;
            }
          } else {
            tmp___40 = __builtin_strcmp((char const   *)opt, "g4");
            tmp___41 = tmp___40;
          }
          if (tmp___41 == 0) {
            defcompression = (uint16 )4;
          } else {
            if (0) {
              if (0) {
                __s1_len___0 = strlen((char const   *)opt);
                __s2_len___0 = strlen("lzw");
                if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
                  goto _L___2;
                } else
                if (__s1_len___0 >= 4U) {
                  _L___2: /* CIL Label */ 
                  if (! ((size_t )((void const   *)("lzw" + 1)) - (size_t )((void const   *)"lzw") == 1U)) {
                    tmp___31 = 1;
                  } else
                  if (__s2_len___0 >= 4U) {
                    tmp___31 = 1;
                  } else {
                    tmp___31 = 0;
                  }
                } else {
                  tmp___31 = 0;
                }
                if (tmp___31) {
                  tmp___26 = __builtin_strcmp((char const   *)opt, "lzw");
                  tmp___30 = tmp___26;
                } else {
                  tmp___29 = __builtin_strcmp((char const   *)opt, "lzw");
                  tmp___30 = tmp___29;
                }
              } else {
                tmp___29 = __builtin_strcmp((char const   *)opt, "lzw");
                tmp___30 = tmp___29;
              }
              tmp___33 = tmp___30;
            } else {
              tmp___32 = strncmp((char const   *)opt, "lzw", (size_t )3);
              tmp___33 = tmp___32;
            }
            if (tmp___33 == 0) {
              tmp___5 = __builtin_strchr(opt, ':');
              cp___0 = tmp___5;
              if (cp___0) {
                tmp___6 = atoi((char const   *)(cp___0 + 1));
                defpredictor = (uint16 )tmp___6;
              } else {

              }
              defcompression = (uint16 )5;
            } else {
              if (0) {
                if (0) {
                  __s1_len = strlen((char const   *)opt);
                  __s2_len = strlen("zip");
                  if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
                    goto _L___0;
                  } else
                  if (__s1_len >= 4U) {
                    _L___0: /* CIL Label */ 
                    if (! ((size_t )((void const   *)("zip" + 1)) - (size_t )((void const   *)"zip") == 1U)) {
                      tmp___18 = 1;
                    } else
                    if (__s2_len >= 4U) {
                      tmp___18 = 1;
                    } else {
                      tmp___18 = 0;
                    }
                  } else {
                    tmp___18 = 0;
                  }
                  if (tmp___18) {
                    tmp___13 = __builtin_strcmp((char const   *)opt, "zip");
                    tmp___17 = tmp___13;
                  } else {
                    tmp___16 = __builtin_strcmp((char const   *)opt, "zip");
                    tmp___17 = tmp___16;
                  }
                } else {
                  tmp___16 = __builtin_strcmp((char const   *)opt, "zip");
                  tmp___17 = tmp___16;
                }
                tmp___20 = tmp___17;
              } else {
                tmp___19 = strncmp((char const   *)opt, "zip", (size_t )3);
                tmp___20 = tmp___19;
              }
              if (tmp___20 == 0) {
                tmp___8 = __builtin_strchr(opt, ':');
                cp___1 = tmp___8;
                if (cp___1) {
                  tmp___9 = atoi((char const   *)(cp___1 + 1));
                  defpredictor = (uint16 )tmp___9;
                } else {

                }
                defcompression = (uint16 )8;
              } else {
                return (0);
              }
            }
          }
        }
      }
    }
  }
  return (1);
}
}
static void usage(void) 
{ 
  char buf[8192] ;
  int i ;
  char const   *tmp ;

  {
  setbuf((FILE */* __restrict  */)stderr, (char */* __restrict  */)(buf));
  tmp = TIFFGetVersion();
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"\n%s\n", tmp);
  i = 0;
  while ((unsigned int )stuff[i] != (unsigned int )((void *)0)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s\n", stuff[i]);
    i ++;
  }
  exit(-1);
}
}
static void cpTag(TIFF *in , TIFF *out , uint16 tag , uint16 count ,
                  TIFFDataType type ) 
{ 
  uint16 shortv ;
  int tmp ;
  uint16 shortv1 ;
  uint16 shortv2 ;
  int tmp___0 ;
  uint16 *tr ;
  uint16 *tg ;
  uint16 *tb ;
  uint16 *ta ;
  int tmp___1 ;
  uint16 shortv1___0 ;
  uint16 *shortav ;
  int tmp___2 ;
  uint32 longv ;
  int tmp___3 ;
  float floatv ;
  int tmp___4 ;
  float *floatav ;
  int tmp___5 ;
  char *stringv ;
  int tmp___6 ;
  double doublev ;
  int tmp___7 ;
  double *doubleav ;
  int tmp___8 ;
  char const   *tmp___9 ;

  {
  switch ((unsigned int )type) {
  case 3U: 
  if ((int )count == 1) {
    tmp = TIFFGetField(in, (uint32 )tag, & shortv);
    if (tmp) {
      TIFFSetField(out, (uint32 )tag, (int )shortv);
    } else {

    }
  } else
  if ((int )count == 2) {
    tmp___0 = TIFFGetField(in, (uint32 )tag, & shortv1, & shortv2);
    if (tmp___0) {
      TIFFSetField(out, (uint32 )tag, (int )shortv1, (int )shortv2);
    } else {

    }
  } else
  if ((int )count == 4) {
    tmp___1 = TIFFGetField(in, (uint32 )tag, & tr, & tg, & tb, & ta);
    if (tmp___1) {
      TIFFSetField(out, (uint32 )tag, tr, tg, tb, ta);
    } else {

    }
  } else
  if ((int )count == 65535) {
    tmp___2 = TIFFGetField(in, (uint32 )tag, & shortv1___0, & shortav);
    if (tmp___2) {
      TIFFSetField(out, (uint32 )tag, (int )shortv1___0, shortav);
    } else {

    }
  } else {

  }
  break;
  case 4U: 
  tmp___3 = TIFFGetField(in, (uint32 )tag, & longv);
  if (tmp___3) {
    TIFFSetField(out, (uint32 )tag, longv);
  } else {

  }
  break;
  case 5U: 
  if ((int )count == 1) {
    tmp___4 = TIFFGetField(in, (uint32 )tag, & floatv);
    if (tmp___4) {
      TIFFSetField(out, (uint32 )tag, (double )floatv);
    } else {

    }
  } else
  if ((int )count == 65535) {
    tmp___5 = TIFFGetField(in, (uint32 )tag, & floatav);
    if (tmp___5) {
      TIFFSetField(out, (uint32 )tag, floatav);
    } else {

    }
  } else {

  }
  break;
  case 2U: 
  tmp___6 = TIFFGetField(in, (uint32 )tag, & stringv);
  if (tmp___6) {
    TIFFSetField(out, (uint32 )tag, stringv);
  } else {

  }
  break;
  case 12U: 
  if ((int )count == 1) {
    tmp___7 = TIFFGetField(in, (uint32 )tag, & doublev);
    if (tmp___7) {
      TIFFSetField(out, (uint32 )tag, doublev);
    } else {

    }
  } else
  if ((int )count == 65535) {
    tmp___8 = TIFFGetField(in, (uint32 )tag, & doubleav);
    if (tmp___8) {
      TIFFSetField(out, (uint32 )tag, doubleav);
    } else {

    }
  } else {

  }
  break;
  default: 
  tmp___9 = TIFFFileName(in);
  TIFFError(tmp___9, "Data type %d is not supported, tag %d skipped.",
            (int )tag, (unsigned int )type);
  }
  return;
}
}
static struct cpTag tags[33]  = 
  {      {(uint16 )254, (uint16 )1, (TIFFDataType )4}, 
        {(uint16 )263, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )269, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )270, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )271, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )272, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )280, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )281, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )282, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )283, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )285, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )286, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )287, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )296, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )305, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )306, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )315, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )316, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )318, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )319, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )321, (uint16 )2, (TIFFDataType )3}, 
        {(uint16 )332, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )336, (uint16 )2, (TIFFDataType )3}, 
        {(uint16 )337, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )339, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )529, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )530, (uint16 )2, (TIFFDataType )3}, 
        {(uint16 )531, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )532, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )338, (uint16 )-1, (TIFFDataType )3}, 
        {(uint16 )340, (uint16 )1, (TIFFDataType )12}, 
        {(uint16 )341, (uint16 )1, (TIFFDataType )12}, 
        {(uint16 )37439, (uint16 )1, (TIFFDataType )12}};
static void cpStripToTile(uint8 *out , uint8 *in , uint32 rows , uint32 cols ,
                          int outskew , int inskew ) 
{ 
  uint32 j ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint32 tmp___1 ;
  uint32 tmp___2 ;

  {
  while (1) {
    tmp___2 = rows;
    rows --;
    if (tmp___2 > 0U) {

    } else {
      break;
    }
    j = cols;
    while (1) {
      tmp___1 = j;
      j --;
      if (tmp___1 > 0U) {

      } else {
        break;
      }
      tmp = out;
      out ++;
      tmp___0 = in;
      in ++;
      *tmp = *tmp___0;
    }
    out += outskew;
    in += inskew;
  }
  return;
}
}
void process_command_opts(int argc , char **argv , char *mp , char *mode ,
                          uint32 *dirnum , uint16 *defconfig ,
                          uint16 *deffillorder , uint32 *deftilewidth ,
                          uint32 *deftilelength , uint32 *defrowsperstrip ,
                          struct crop_mask *crop_data , struct pagedef *page ,
                          struct dump_opts *dump , unsigned int *imagelist ,
                          unsigned int *image_count ) 
{ 
  int c ;
  int good_args ;
  char *opt_offset ;
  char *opt_ptr ;
  char *sep ;
  unsigned int i ;
  unsigned int j ;
  unsigned int start ;
  unsigned int end ;
  char *tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int __res ;
  int __c ;
  __int32_t const   **tmp___2 ;
  __int32_t const   **tmp___3 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___7 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___14 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___22 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___29 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  long tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  char *tmp___39 ;
  char __a0 ;
  char __a1 ;
  char __a2 ;
  char *tmp___40 ;
  char *tmp___41 ;
  char *tmp___42 ;
  char *tmp___43 ;
  char *tmp___44 ;
  char *tmp___45 ;
  char *tmp___46 ;
  char *tmp___47 ;
  char *tmp___48 ;
  char *tmp___49 ;
  int __res___0 ;
  int __c___0 ;
  __int32_t const   **tmp___50 ;
  __int32_t const   **tmp___51 ;
  int __res___1 ;
  int __c___1 ;
  __int32_t const   **tmp___52 ;
  __int32_t const   **tmp___53 ;
  size_t tmp___54 ;
  size_t tmp___55 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___59 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int tmp___63 ;
  int tmp___64 ;
  size_t tmp___65 ;
  size_t tmp___66 ;
  size_t tmp___67 ;
  size_t tmp___68 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___72 ;
  unsigned char const   *__s1___4 ;
  register int __result___10 ;
  int tmp___73 ;
  int tmp___74 ;
  int tmp___75 ;
  int tmp___76 ;
  int tmp___77 ;
  size_t tmp___78 ;
  size_t tmp___79 ;
  size_t tmp___80 ;
  size_t tmp___81 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___82 ;
  int tmp___83 ;
  int tmp___84 ;
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___85 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___86 ;
  int tmp___87 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  size_t tmp___91 ;
  size_t tmp___92 ;
  size_t tmp___93 ;
  size_t tmp___94 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___95 ;
  int tmp___96 ;
  int tmp___97 ;
  unsigned char const   *__s2___6 ;
  register int __result___13 ;
  int tmp___98 ;
  unsigned char const   *__s1___6 ;
  register int __result___14 ;
  int tmp___99 ;
  int tmp___100 ;
  int tmp___101 ;
  int tmp___102 ;
  int tmp___103 ;
  size_t tmp___104 ;
  size_t tmp___105 ;
  size_t tmp___106 ;
  size_t tmp___107 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___108 ;
  int tmp___109 ;
  int tmp___110 ;
  unsigned char const   *__s2___7 ;
  register int __result___15 ;
  int tmp___111 ;
  unsigned char const   *__s1___7 ;
  register int __result___16 ;
  int tmp___112 ;
  int tmp___113 ;
  int tmp___114 ;
  int tmp___115 ;
  int tmp___116 ;
  size_t tmp___117 ;
  size_t tmp___118 ;
  size_t tmp___119 ;
  size_t tmp___120 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  unsigned char const   *__s2___8 ;
  register int __result___17 ;
  int tmp___124 ;
  unsigned char const   *__s1___8 ;
  register int __result___18 ;
  int tmp___125 ;
  int tmp___126 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___129 ;
  size_t tmp___130 ;
  size_t tmp___131 ;
  size_t tmp___132 ;
  size_t tmp___133 ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___134 ;
  int tmp___135 ;
  int tmp___136 ;
  unsigned char const   *__s2___9 ;
  register int __result___19 ;
  int tmp___137 ;
  unsigned char const   *__s1___9 ;
  register int __result___20 ;
  int tmp___138 ;
  int tmp___139 ;
  int tmp___140 ;
  int tmp___141 ;
  int tmp___142 ;
  size_t tmp___143 ;
  size_t tmp___144 ;
  size_t tmp___145 ;
  size_t tmp___146 ;
  int __res___2 ;
  int __c___2 ;
  __int32_t const   **tmp___147 ;
  __int32_t const   **tmp___148 ;
  int __res___3 ;
  int __c___3 ;
  __int32_t const   **tmp___149 ;
  __int32_t const   **tmp___150 ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___151 ;
  int tmp___152 ;
  int tmp___153 ;
  unsigned char const   *__s2___10 ;
  register int __result___21 ;
  int tmp___154 ;
  unsigned char const   *__s1___10 ;
  register int __result___22 ;
  int tmp___155 ;
  int tmp___156 ;
  int tmp___157 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___158 ;
  int tmp___159 ;
  int tmp___160 ;
  unsigned char const   *__s2___11 ;
  register int __result___23 ;
  int tmp___161 ;
  unsigned char const   *__s1___11 ;
  register int __result___24 ;
  int tmp___162 ;
  int tmp___163 ;
  int tmp___164 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___165 ;
  int tmp___166 ;
  int tmp___167 ;
  unsigned char const   *__s2___12 ;
  register int __result___25 ;
  int tmp___168 ;
  unsigned char const   *__s1___12 ;
  register int __result___26 ;
  int tmp___169 ;
  int tmp___170 ;
  int tmp___171 ;
  size_t __s1_len___13 ;
  size_t __s2_len___13 ;
  int tmp___172 ;
  int tmp___173 ;
  int tmp___174 ;
  unsigned char const   *__s2___13 ;
  register int __result___27 ;
  int tmp___175 ;
  unsigned char const   *__s1___13 ;
  register int __result___28 ;
  int tmp___176 ;
  int tmp___177 ;
  int tmp___178 ;
  unsigned int tmp___179 ;
  unsigned int tmp___180 ;
  unsigned int tmp___181 ;
  char __a0___0 ;
  char __a1___0 ;
  char __a2___0 ;
  char *tmp___182 ;
  char *tmp___183 ;
  char *tmp___184 ;
  char *tmp___185 ;
  char *tmp___186 ;
  char *tmp___187 ;
  char *tmp___188 ;
  char *tmp___189 ;
  char *tmp___190 ;
  char *tmp___191 ;
  unsigned int tmp___192 ;
  int tmp___193 ;
  int tmp___194 ;
  int tmp___195 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___196 ;
  int tmp___197 ;
  int tmp___198 ;
  unsigned char const   *__s2___14 ;
  register int __result___29 ;
  int tmp___199 ;
  unsigned char const   *__s1___14 ;
  register int __result___30 ;
  int tmp___200 ;
  int tmp___201 ;
  int tmp___202 ;
  unsigned int tmp___203 ;
  size_t __s1_len___15 ;
  size_t __s2_len___15 ;
  int tmp___204 ;
  int tmp___205 ;
  int tmp___206 ;
  unsigned char const   *__s2___15 ;
  register int __result___31 ;
  int tmp___207 ;
  unsigned char const   *__s1___15 ;
  register int __result___32 ;
  int tmp___208 ;
  int tmp___209 ;
  int tmp___210 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___211 ;
  int tmp___212 ;
  int tmp___213 ;
  unsigned char const   *__s2___16 ;
  register int __result___33 ;
  int tmp___214 ;
  unsigned char const   *__s1___16 ;
  register int __result___34 ;
  int tmp___215 ;
  int tmp___216 ;
  int tmp___217 ;
  size_t __s1_len___17 ;
  size_t __s2_len___17 ;
  int tmp___218 ;
  int tmp___219 ;
  int tmp___220 ;
  unsigned char const   *__s2___17 ;
  register int __result___35 ;
  int tmp___221 ;
  unsigned char const   *__s1___17 ;
  register int __result___36 ;
  int tmp___222 ;
  int tmp___223 ;
  int tmp___224 ;
  int __res___4 ;
  int __c___4 ;
  __int32_t const   **tmp___225 ;
  __int32_t const   **tmp___226 ;
  size_t __s1_len___18 ;
  size_t __s2_len___18 ;
  int tmp___227 ;
  int tmp___228 ;
  int tmp___229 ;
  unsigned char const   *__s2___18 ;
  register int __result___37 ;
  int tmp___230 ;
  unsigned char const   *__s1___18 ;
  register int __result___38 ;
  int tmp___231 ;
  int tmp___232 ;
  int tmp___233 ;
  int tmp___234 ;
  unsigned long tmp___235 ;
  char __a0___1 ;
  char __a1___1 ;
  char __a2___1 ;
  char *tmp___236 ;
  char *tmp___237 ;
  char *tmp___238 ;
  char *tmp___239 ;
  char *tmp___240 ;
  char *tmp___241 ;
  char *tmp___242 ;
  char *tmp___243 ;
  char *tmp___244 ;
  char *tmp___245 ;
  int tmp___246 ;
  int tmp___247 ;
  int tmp___248 ;
  int tmp___249 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___250 ;
  int tmp___251 ;
  int tmp___252 ;
  unsigned char const   *__s2___19 ;
  register int __result___39 ;
  int tmp___253 ;
  unsigned char const   *__s1___19 ;
  register int __result___40 ;
  int tmp___254 ;
  int tmp___255 ;
  int tmp___256 ;
  size_t __s1_len___20 ;
  size_t __s2_len___20 ;
  int tmp___257 ;
  int tmp___258 ;
  int tmp___259 ;
  unsigned char const   *__s2___20 ;
  register int __result___41 ;
  int tmp___260 ;
  unsigned char const   *__s1___20 ;
  register int __result___42 ;
  int tmp___261 ;
  int tmp___262 ;
  int tmp___263 ;
  size_t __s1_len___21 ;
  size_t __s2_len___21 ;
  int tmp___264 ;
  int tmp___265 ;
  int tmp___266 ;
  unsigned char const   *__s2___21 ;
  register int __result___43 ;
  int tmp___267 ;
  unsigned char const   *__s1___21 ;
  register int __result___44 ;
  int tmp___268 ;
  int tmp___269 ;
  int tmp___270 ;
  void *tmp___271 ;
  char *tmp___272 ;

  {
  good_args = 0;
  opt_offset = (char *)((void *)0);
  opt_ptr = (char *)((void *)0);
  sep = (char *)((void *)0);
  tmp = mp;
  mp ++;
  *tmp = (char )'w';
  *mp = (char )'\000';
  while (1) {
    c = getopt(argc, (char * const  *)argv,
               "ac:d:e:f:hil:m:p:r:stvw:z:BCD:E:F:H:I:J:K:LMN:O:P:R:S:U:V:X:Y:Z:");
    if (c != -1) {

    } else {
      break;
    }
    good_args ++;
    switch (c) {
    case 97: 
    *(mode + 0) = (char )'a';
    break;
    case 99: 
    tmp___0 = processCompressOptions(optarg);
    if (tmp___0) {

    } else {
      TIFFError("Unknown compression option", "%s", optarg);
      TIFFError("For valid options type", "tiffcrop -h");
      exit(-1);
    }
    break;
    case 100: 
    tmp___1 = strtoul((char const   */* __restrict  */)optarg,
                      (char **/* __restrict  */)((void *)0), 0);
    start = (unsigned int )tmp___1;
    if (start == 0U) {
      TIFFError("", "Directory offset must be greater than zero");
      TIFFError("For valid options type", "tiffcrop -h");
      exit(-1);
    } else {

    }
    *dirnum = start - 1U;
    break;
    case 101: 
    if (sizeof(*(optarg + 0)) > 1U) {
      __res = tolower((int )*(optarg + 0));
    } else {
      tmp___3 = __ctype_tolower_loc();
      __res = (int )*(*tmp___3 + (int )*(optarg + 0));
    }
    switch (__res) {
    case 99: 
    crop_data->exp_mode = (uint16 )0;
    crop_data->img_mode = (uint16 )0;
    break;
    case 100: 
    crop_data->exp_mode = (uint16 )1;
    crop_data->img_mode = (uint16 )1;
    break;
    case 105: 
    crop_data->exp_mode = (uint16 )2;
    crop_data->img_mode = (uint16 )0;
    break;
    case 109: 
    crop_data->exp_mode = (uint16 )3;
    crop_data->img_mode = (uint16 )1;
    break;
    case 115: 
    crop_data->exp_mode = (uint16 )4;
    crop_data->img_mode = (uint16 )1;
    break;
    default: 
    TIFFError("Unknown export mode", "%s", optarg);
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    }
    break;
    case 102: 
    if (0) {
      __s1_len___0 = strlen((char const   *)optarg);
      __s2_len___0 = strlen("lsb2msb");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___2;
      } else
      if (__s1_len___0 >= 4U) {
        _L___2: /* CIL Label */ 
        if (! ((size_t )((void const   *)("lsb2msb" + 1)) - (size_t )((void const   *)"lsb2msb") == 1U)) {
          tmp___17 = 1;
        } else
        if (__s2_len___0 >= 4U) {
          tmp___17 = 1;
        } else {
          tmp___17 = 0;
        }
      } else {
        tmp___17 = 0;
      }
      if (tmp___17) {
        tmp___12 = __builtin_strcmp((char const   *)optarg, "lsb2msb");
        tmp___16 = tmp___12;
      } else {
        tmp___15 = __builtin_strcmp((char const   *)optarg, "lsb2msb");
        tmp___16 = tmp___15;
      }
    } else {
      tmp___15 = __builtin_strcmp((char const   *)optarg, "lsb2msb");
      tmp___16 = tmp___15;
    }
    if (tmp___16 == 0) {
      *deffillorder = (uint16 )2;
    } else {
      if (0) {
        __s1_len = strlen((char const   *)optarg);
        __s2_len = strlen("msb2lsb");
        if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
          goto _L___0;
        } else
        if (__s1_len >= 4U) {
          _L___0: /* CIL Label */ 
          if (! ((size_t )((void const   *)("msb2lsb" + 1)) - (size_t )((void const   *)"msb2lsb") == 1U)) {
            tmp___10 = 1;
          } else
          if (__s2_len >= 4U) {
            tmp___10 = 1;
          } else {
            tmp___10 = 0;
          }
        } else {
          tmp___10 = 0;
        }
        if (tmp___10) {
          tmp___5 = __builtin_strcmp((char const   *)optarg, "msb2lsb");
          tmp___9 = tmp___5;
        } else {
          tmp___8 = __builtin_strcmp((char const   *)optarg, "msb2lsb");
          tmp___9 = tmp___8;
        }
      } else {
        tmp___8 = __builtin_strcmp((char const   *)optarg, "msb2lsb");
        tmp___9 = tmp___8;
      }
      if (tmp___9 == 0) {
        *deffillorder = (uint16 )1;
      } else {
        TIFFError("Unknown fill order", "%s", optarg);
        TIFFError("For valid options type", "tiffcrop -h");
        exit(-1);
      }
    }
    break;
    case 104: 
    usage();
    break;
    case 105: 
    ignore = 1;
    break;
    case 108: 
    outtiled = 1;
    tmp___18 = atoi((char const   *)optarg);
    *deftilelength = (uint32 )tmp___18;
    break;
    case 112: 
    if (0) {
      __s1_len___2 = strlen((char const   *)optarg);
      __s2_len___2 = strlen("separate");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___6;
      } else
      if (__s1_len___2 >= 4U) {
        _L___6: /* CIL Label */ 
        if (! ((size_t )((void const   *)("separate" + 1)) - (size_t )((void const   *)"separate") == 1U)) {
          tmp___32 = 1;
        } else
        if (__s2_len___2 >= 4U) {
          tmp___32 = 1;
        } else {
          tmp___32 = 0;
        }
      } else {
        tmp___32 = 0;
      }
      if (tmp___32) {
        tmp___27 = __builtin_strcmp((char const   *)optarg, "separate");
        tmp___31 = tmp___27;
      } else {
        tmp___30 = __builtin_strcmp((char const   *)optarg, "separate");
        tmp___31 = tmp___30;
      }
    } else {
      tmp___30 = __builtin_strcmp((char const   *)optarg, "separate");
      tmp___31 = tmp___30;
    }
    if (tmp___31 == 0) {
      *defconfig = (uint16 )2;
    } else {
      if (0) {
        __s1_len___1 = strlen((char const   *)optarg);
        __s2_len___1 = strlen("contig");
        if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
          goto _L___4;
        } else
        if (__s1_len___1 >= 4U) {
          _L___4: /* CIL Label */ 
          if (! ((size_t )((void const   *)("contig" + 1)) - (size_t )((void const   *)"contig") == 1U)) {
            tmp___25 = 1;
          } else
          if (__s2_len___1 >= 4U) {
            tmp___25 = 1;
          } else {
            tmp___25 = 0;
          }
        } else {
          tmp___25 = 0;
        }
        if (tmp___25) {
          tmp___20 = __builtin_strcmp((char const   *)optarg, "contig");
          tmp___24 = tmp___20;
        } else {
          tmp___23 = __builtin_strcmp((char const   *)optarg, "contig");
          tmp___24 = tmp___23;
        }
      } else {
        tmp___23 = __builtin_strcmp((char const   *)optarg, "contig");
        tmp___24 = tmp___23;
      }
      if (tmp___24 == 0) {
        *defconfig = (uint16 )1;
      } else {
        TIFFError("Unkown planar configuration", "%s", optarg);
        TIFFError("For valid options type", "tiffcrop -h");
        exit(-1);
      }
    }
    break;
    case 114: 
    tmp___33 = atol((char const   *)optarg);
    *defrowsperstrip = (uint32 )tmp___33;
    break;
    case 115: 
    outtiled = 0;
    break;
    case 116: 
    outtiled = 1;
    break;
    case 118: 
    TIFFError("Tiffcrop version", "%s, last updated: %s", tiffcrop_version_id,
              tiffcrop_rev_date);
    TIFFError("Tiffcp code", "Copyright (c) 1988-1997 Sam Leffler");
    TIFFError("           ", "Copyright (c) 1991-1997 Silicon Graphics, Inc");
    TIFFError("Tiffcrop additions", "Copyright (c) 2007-2009 Richard Nolde");
    exit(0);
    break;
    case 119: 
    outtiled = 1;
    tmp___34 = atoi((char const   *)optarg);
    *deftilewidth = (uint32 )tmp___34;
    break;
    case 122: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 16);
    i = 0U;
    opt_ptr = strtok((char */* __restrict  */)optarg,
                     (char const   */* __restrict  */)":");
    while (1) {
      if ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
        if (i < 8U) {

        } else {
          break;
        }
      } else {
        break;
      }
      crop_data->regions = (uint16 )((int )crop_data->regions + 1);
      tmp___35 = sscanf((char const   */* __restrict  */)opt_ptr,
                        (char const   */* __restrict  */)"%lf,%lf,%lf,%lf",
                        & crop_data->corners[i].X1, & crop_data->corners[i].Y1,
                        & crop_data->corners[i].X2, & crop_data->corners[i].Y2);
      if (tmp___35 != 4) {
        TIFFError("Unable to parse coordinates for region", "%d %s", i, optarg);
        TIFFError("For valid options type", "tiffcrop -h");
        exit(-1);
      } else {

      }
      opt_ptr = strtok((char */* __restrict  */)((void *)0),
                       (char const   */* __restrict  */)":");
      i ++;
    }
    if ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
      if (i >= 8U) {
        TIFFError("Region list exceeds limit of", "%d regions %s", 8, optarg);
        TIFFError("For valid options type", "tiffcrop -h");
        exit(-1);
      } else {

      }
    } else {

    }
    break;
    case 66: 
    tmp___36 = mp;
    mp ++;
    *tmp___36 = (char )'b';
    *mp = (char )'\000';
    break;
    case 76: 
    tmp___37 = mp;
    mp ++;
    *tmp___37 = (char )'l';
    *mp = (char )'\000';
    break;
    case 77: 
    tmp___38 = mp;
    mp ++;
    *tmp___38 = (char )'m';
    *mp = (char )'\000';
    break;
    case 67: 
    tmp___39 = mp;
    mp ++;
    *tmp___39 = (char )'c';
    *mp = (char )'\000';
    break;
    case 68: 
    i = 0U;
    opt_ptr = strtok((char */* __restrict  */)optarg,
                     (char const   */* __restrict  */)",");
    while ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
      tmp___49 = __builtin_strpbrk((char const   *)opt_ptr, ":=");
      opt_offset = tmp___49;
      if ((unsigned int )opt_offset == (unsigned int )((void *)0)) {
        TIFFError("Invalid dump option", "%s", optarg);
        TIFFError("For valid options type", "tiffcrop -h");
        exit(-1);
      } else {

      }
      *opt_offset = (char )'\000';
      end = strlen((char const   *)opt_ptr);
      i = 0U;
      while (i < end) {
        if (sizeof(*(opt_ptr + i)) > 1U) {
          __res___0 = tolower((int )*(opt_ptr + i));
        } else {
          tmp___51 = __ctype_tolower_loc();
          __res___0 = (int )*(*tmp___51 + (int )*(opt_ptr + i));
        }
        *(opt_ptr + i) = (char )__res___0;
        i ++;
      }
      if (0) {
        if (0) {
          __s1_len___9 = strlen((char const   *)opt_ptr);
          __s2_len___9 = strlen("for");
          if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
            goto _L___20;
          } else
          if (__s1_len___9 >= 4U) {
            _L___20: /* CIL Label */ 
            if (! ((size_t )((void const   *)("for" + 1)) - (size_t )((void const   *)"for") == 1U)) {
              tmp___140 = 1;
            } else
            if (__s2_len___9 >= 4U) {
              tmp___140 = 1;
            } else {
              tmp___140 = 0;
            }
          } else {
            tmp___140 = 0;
          }
          if (tmp___140) {
            tmp___135 = __builtin_strcmp((char const   *)opt_ptr, "for");
            tmp___139 = tmp___135;
          } else {
            tmp___138 = __builtin_strcmp((char const   *)opt_ptr, "for");
            tmp___139 = tmp___138;
          }
        } else {
          tmp___138 = __builtin_strcmp((char const   *)opt_ptr, "for");
          tmp___139 = tmp___138;
        }
        tmp___142 = tmp___139;
      } else {
        tmp___141 = strncmp((char const   *)opt_ptr, "for", (size_t )3);
        tmp___142 = tmp___141;
      }
      if (tmp___142 == 0) {
        end = strlen((char const   *)(opt_offset + 1));
        i = 1U;
        while (i <= end) {
          if (sizeof(*(opt_offset + i)) > 1U) {
            __res___1 = tolower((int )*(opt_offset + i));
          } else {
            tmp___53 = __ctype_tolower_loc();
            __res___1 = (int )*(*tmp___53 + (int )*(opt_offset + i));
          }
          *(opt_offset + i) = (char )__res___1;
          i ++;
        }
        if (0) {
          if (0) {
            __s1_len___4 = strlen((char const   *)(opt_offset + 1));
            __s2_len___4 = strlen("txt");
            if (! ((size_t )((void const   *)((opt_offset + 1) + 1)) - (size_t )((void const   *)(opt_offset + 1)) == 1U)) {
              goto _L___10;
            } else
            if (__s1_len___4 >= 4U) {
              _L___10: /* CIL Label */ 
              if (! ((size_t )((void const   *)("txt" + 1)) - (size_t )((void const   *)"txt") == 1U)) {
                tmp___75 = 1;
              } else
              if (__s2_len___4 >= 4U) {
                tmp___75 = 1;
              } else {
                tmp___75 = 0;
              }
            } else {
              tmp___75 = 0;
            }
            if (tmp___75) {
              tmp___70 = __builtin_strcmp((char const   *)(opt_offset + 1),
                                          "txt");
              tmp___74 = tmp___70;
            } else {
              tmp___73 = __builtin_strcmp((char const   *)(opt_offset + 1),
                                          "txt");
              tmp___74 = tmp___73;
            }
          } else {
            tmp___73 = __builtin_strcmp((char const   *)(opt_offset + 1), "txt");
            tmp___74 = tmp___73;
          }
          tmp___77 = tmp___74;
        } else {
          tmp___76 = strncmp((char const   *)(opt_offset + 1), "txt", (size_t )3);
          tmp___77 = tmp___76;
        }
        if (tmp___77 == 0) {
          dump->format = 1;
          strcpy((char */* __restrict  */)(dump->mode),
                 (char const   */* __restrict  */)"w");
        } else {
          if (0) {
            if (0) {
              __s1_len___3 = strlen((char const   *)(opt_offset + 1));
              __s2_len___3 = strlen("raw");
              if (! ((size_t )((void const   *)((opt_offset + 1) + 1)) - (size_t )((void const   *)(opt_offset + 1)) == 1U)) {
                goto _L___8;
              } else
              if (__s1_len___3 >= 4U) {
                _L___8: /* CIL Label */ 
                if (! ((size_t )((void const   *)("raw" + 1)) - (size_t )((void const   *)"raw") == 1U)) {
                  tmp___62 = 1;
                } else
                if (__s2_len___3 >= 4U) {
                  tmp___62 = 1;
                } else {
                  tmp___62 = 0;
                }
              } else {
                tmp___62 = 0;
              }
              if (tmp___62) {
                tmp___57 = __builtin_strcmp((char const   *)(opt_offset + 1),
                                            "raw");
                tmp___61 = tmp___57;
              } else {
                tmp___60 = __builtin_strcmp((char const   *)(opt_offset + 1),
                                            "raw");
                tmp___61 = tmp___60;
              }
            } else {
              tmp___60 = __builtin_strcmp((char const   *)(opt_offset + 1),
                                          "raw");
              tmp___61 = tmp___60;
            }
            tmp___64 = tmp___61;
          } else {
            tmp___63 = strncmp((char const   *)(opt_offset + 1), "raw",
                               (size_t )3);
            tmp___64 = tmp___63;
          }
          if (tmp___64 == 0) {
            dump->format = 2;
            strcpy((char */* __restrict  */)(dump->mode),
                   (char const   */* __restrict  */)"wb");
          } else {
            TIFFError("parse_command_opts", "Unknown dump format %s",
                      opt_offset + 1);
            TIFFError("For valid options type", "tiffcrop -h");
            exit(-1);
          }
        }
      } else {
        if (0) {
          if (0) {
            __s1_len___5 = strlen((char const   *)opt_ptr);
            __s2_len___5 = strlen("lev");
            if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
              goto _L___12;
            } else
            if (__s1_len___5 >= 4U) {
              _L___12: /* CIL Label */ 
              if (! ((size_t )((void const   *)("lev" + 1)) - (size_t )((void const   *)"lev") == 1U)) {
                tmp___88 = 1;
              } else
              if (__s2_len___5 >= 4U) {
                tmp___88 = 1;
              } else {
                tmp___88 = 0;
              }
            } else {
              tmp___88 = 0;
            }
            if (tmp___88) {
              tmp___83 = __builtin_strcmp((char const   *)opt_ptr, "lev");
              tmp___87 = tmp___83;
            } else {
              tmp___86 = __builtin_strcmp((char const   *)opt_ptr, "lev");
              tmp___87 = tmp___86;
            }
          } else {
            tmp___86 = __builtin_strcmp((char const   *)opt_ptr, "lev");
            tmp___87 = tmp___86;
          }
          tmp___90 = tmp___87;
        } else {
          tmp___89 = strncmp((char const   *)opt_ptr, "lev", (size_t )3);
          tmp___90 = tmp___89;
        }
        if (tmp___90 == 0) {
          dump->level = atoi((char const   *)(opt_offset + 1));
        } else {

        }
        if (0) {
          if (0) {
            __s1_len___6 = strlen((char const   *)opt_ptr);
            __s2_len___6 = strlen("in");
            if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
              goto _L___14;
            } else
            if (__s1_len___6 >= 4U) {
              _L___14: /* CIL Label */ 
              if (! ((size_t )((void const   *)("in" + 1)) - (size_t )((void const   *)"in") == 1U)) {
                tmp___101 = 1;
              } else
              if (__s2_len___6 >= 4U) {
                tmp___101 = 1;
              } else {
                tmp___101 = 0;
              }
            } else {
              tmp___101 = 0;
            }
            if (tmp___101) {
              tmp___96 = __builtin_strcmp((char const   *)opt_ptr, "in");
              tmp___100 = tmp___96;
            } else {
              tmp___99 = __builtin_strcmp((char const   *)opt_ptr, "in");
              tmp___100 = tmp___99;
            }
          } else {
            tmp___99 = __builtin_strcmp((char const   *)opt_ptr, "in");
            tmp___100 = tmp___99;
          }
          tmp___103 = tmp___100;
        } else {
          tmp___102 = strncmp((char const   *)opt_ptr, "in", (size_t )2);
          tmp___103 = tmp___102;
        }
        if (tmp___103 == 0) {
          __builtin_strncpy(dump->infilename, (char const   *)(opt_offset + 1),
                            4076U);
        } else {

        }
        if (0) {
          if (0) {
            __s1_len___7 = strlen((char const   *)opt_ptr);
            __s2_len___7 = strlen("out");
            if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
              goto _L___16;
            } else
            if (__s1_len___7 >= 4U) {
              _L___16: /* CIL Label */ 
              if (! ((size_t )((void const   *)("out" + 1)) - (size_t )((void const   *)"out") == 1U)) {
                tmp___114 = 1;
              } else
              if (__s2_len___7 >= 4U) {
                tmp___114 = 1;
              } else {
                tmp___114 = 0;
              }
            } else {
              tmp___114 = 0;
            }
            if (tmp___114) {
              tmp___109 = __builtin_strcmp((char const   *)opt_ptr, "out");
              tmp___113 = tmp___109;
            } else {
              tmp___112 = __builtin_strcmp((char const   *)opt_ptr, "out");
              tmp___113 = tmp___112;
            }
          } else {
            tmp___112 = __builtin_strcmp((char const   *)opt_ptr, "out");
            tmp___113 = tmp___112;
          }
          tmp___116 = tmp___113;
        } else {
          tmp___115 = strncmp((char const   *)opt_ptr, "out", (size_t )3);
          tmp___116 = tmp___115;
        }
        if (tmp___116 == 0) {
          __builtin_strncpy(dump->outfilename, (char const   *)(opt_offset + 1),
                            4076U);
        } else {

        }
        if (0) {
          if (0) {
            __s1_len___8 = strlen((char const   *)opt_ptr);
            __s2_len___8 = strlen("deb");
            if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
              goto _L___18;
            } else
            if (__s1_len___8 >= 4U) {
              _L___18: /* CIL Label */ 
              if (! ((size_t )((void const   *)("deb" + 1)) - (size_t )((void const   *)"deb") == 1U)) {
                tmp___127 = 1;
              } else
              if (__s2_len___8 >= 4U) {
                tmp___127 = 1;
              } else {
                tmp___127 = 0;
              }
            } else {
              tmp___127 = 0;
            }
            if (tmp___127) {
              tmp___122 = __builtin_strcmp((char const   *)opt_ptr, "deb");
              tmp___126 = tmp___122;
            } else {
              tmp___125 = __builtin_strcmp((char const   *)opt_ptr, "deb");
              tmp___126 = tmp___125;
            }
          } else {
            tmp___125 = __builtin_strcmp((char const   *)opt_ptr, "deb");
            tmp___126 = tmp___125;
          }
          tmp___129 = tmp___126;
        } else {
          tmp___128 = strncmp((char const   *)opt_ptr, "deb", (size_t )3);
          tmp___129 = tmp___128;
        }
        if (tmp___129 == 0) {
          dump->debug = atoi((char const   *)(opt_offset + 1));
        } else {

        }
      }
      opt_ptr = strtok((char */* __restrict  */)((void *)0),
                       (char const   */* __restrict  */)",");
      i ++;
    }
    tmp___145 = strlen((char const   *)(dump->infilename));
    if (tmp___145) {
      goto _L___21;
    } else {
      tmp___146 = strlen((char const   *)(dump->outfilename));
      if (tmp___146) {
        _L___21: /* CIL Label */ 
        if (dump->level == 1) {
          TIFFError("", "Defaulting to dump level 1, no data.");
        } else {

        }
        if (dump->format == 0) {
          TIFFError("", "You must specify a dump format for dump files");
          TIFFError("For valid options type", "tiffcrop -h");
          exit(-1);
        } else {

        }
      } else {

      }
    }
    break;
    case 109: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 1);
    i = 0U;
    opt_ptr = strtok((char */* __restrict  */)optarg,
                     (char const   */* __restrict  */)",:");
    while (1) {
      if ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
        if (i < 4U) {

        } else {
          break;
        }
      } else {
        break;
      }
      crop_data->margins[i] = atof((char const   *)opt_ptr);
      opt_ptr = strtok((char */* __restrict  */)((void *)0),
                       (char const   */* __restrict  */)",:");
      i ++;
    }
    break;
    case 69: 
    if (sizeof(*(optarg + 0)) > 1U) {
      __res___2 = tolower((int )*(optarg + 0));
    } else {
      tmp___148 = __ctype_tolower_loc();
      __res___2 = (int )*(*tmp___148 + (int )*(optarg + 0));
    }
    switch (__res___2) {
    case 116: 
    crop_data->edge_ref = (uint16 )1;
    break;
    case 98: 
    crop_data->edge_ref = (uint16 )3;
    break;
    case 108: 
    crop_data->edge_ref = (uint16 )2;
    break;
    case 114: 
    crop_data->edge_ref = (uint16 )4;
    break;
    default: 
    TIFFError("Edge reference must be top, bottom, left, or right", "%s", optarg);
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    }
    break;
    case 70: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 64);
    if (sizeof(*(optarg + 0)) > 1U) {
      __res___3 = tolower((int )*(optarg + 0));
    } else {
      tmp___150 = __ctype_tolower_loc();
      __res___3 = (int )*(*tmp___150 + (int )*(optarg + 0));
    }
    switch (__res___3) {
    case 104: 
    crop_data->mirror = (uint16 )1;
    break;
    case 118: 
    crop_data->mirror = (uint16 )2;
    break;
    case 98: 
    crop_data->mirror = (uint16 )3;
    break;
    default: 
    TIFFError("Flip mode must be horiz, vert, or both", "%s", optarg);
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    }
    break;
    case 72: 
    page->hres = atof((char const   *)optarg);
    page->mode |= 1U;
    break;
    case 73: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 128);
    if (0) {
      __s1_len___10 = strlen((char const   *)optarg);
      __s2_len___10 = strlen("black");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___23;
      } else
      if (__s1_len___10 >= 4U) {
        _L___23: /* CIL Label */ 
        if (! ((size_t )((void const   *)("black" + 1)) - (size_t )((void const   *)"black") == 1U)) {
          tmp___157 = 1;
        } else
        if (__s2_len___10 >= 4U) {
          tmp___157 = 1;
        } else {
          tmp___157 = 0;
        }
      } else {
        tmp___157 = 0;
      }
      if (tmp___157) {
        tmp___152 = __builtin_strcmp((char const   *)optarg, "black");
        tmp___156 = tmp___152;
      } else {
        tmp___155 = __builtin_strcmp((char const   *)optarg, "black");
        tmp___156 = tmp___155;
      }
    } else {
      tmp___155 = __builtin_strcmp((char const   *)optarg, "black");
      tmp___156 = tmp___155;
    }
    if (tmp___156 == 0) {
      crop_data->photometric = (uint16 )1;
      continue;
    } else {

    }
    if (0) {
      __s1_len___11 = strlen((char const   *)optarg);
      __s2_len___11 = strlen("white");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___25;
      } else
      if (__s1_len___11 >= 4U) {
        _L___25: /* CIL Label */ 
        if (! ((size_t )((void const   *)("white" + 1)) - (size_t )((void const   *)"white") == 1U)) {
          tmp___164 = 1;
        } else
        if (__s2_len___11 >= 4U) {
          tmp___164 = 1;
        } else {
          tmp___164 = 0;
        }
      } else {
        tmp___164 = 0;
      }
      if (tmp___164) {
        tmp___159 = __builtin_strcmp((char const   *)optarg, "white");
        tmp___163 = tmp___159;
      } else {
        tmp___162 = __builtin_strcmp((char const   *)optarg, "white");
        tmp___163 = tmp___162;
      }
    } else {
      tmp___162 = __builtin_strcmp((char const   *)optarg, "white");
      tmp___163 = tmp___162;
    }
    if (tmp___163 == 0) {
      crop_data->photometric = (uint16 )0;
      continue;
    } else {

    }
    if (0) {
      __s1_len___12 = strlen((char const   *)optarg);
      __s2_len___12 = strlen("data");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___27;
      } else
      if (__s1_len___12 >= 4U) {
        _L___27: /* CIL Label */ 
        if (! ((size_t )((void const   *)("data" + 1)) - (size_t )((void const   *)"data") == 1U)) {
          tmp___171 = 1;
        } else
        if (__s2_len___12 >= 4U) {
          tmp___171 = 1;
        } else {
          tmp___171 = 0;
        }
      } else {
        tmp___171 = 0;
      }
      if (tmp___171) {
        tmp___166 = __builtin_strcmp((char const   *)optarg, "data");
        tmp___170 = tmp___166;
      } else {
        tmp___169 = __builtin_strcmp((char const   *)optarg, "data");
        tmp___170 = tmp___169;
      }
    } else {
      tmp___169 = __builtin_strcmp((char const   *)optarg, "data");
      tmp___170 = tmp___169;
    }
    if (tmp___170 == 0) {
      crop_data->photometric = (uint16 )10;
      continue;
    } else {

    }
    if (0) {
      __s1_len___13 = strlen((char const   *)optarg);
      __s2_len___13 = strlen("both");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___29;
      } else
      if (__s1_len___13 >= 4U) {
        _L___29: /* CIL Label */ 
        if (! ((size_t )((void const   *)("both" + 1)) - (size_t )((void const   *)"both") == 1U)) {
          tmp___178 = 1;
        } else
        if (__s2_len___13 >= 4U) {
          tmp___178 = 1;
        } else {
          tmp___178 = 0;
        }
      } else {
        tmp___178 = 0;
      }
      if (tmp___178) {
        tmp___173 = __builtin_strcmp((char const   *)optarg, "both");
        tmp___177 = tmp___173;
      } else {
        tmp___176 = __builtin_strcmp((char const   *)optarg, "both");
        tmp___177 = tmp___176;
      }
    } else {
      tmp___176 = __builtin_strcmp((char const   *)optarg, "both");
      tmp___177 = tmp___176;
    }
    if (tmp___177 == 0) {
      crop_data->photometric = (uint16 )11;
      continue;
    } else {

    }
    TIFFError("Missing or unknown option for inverting PHOTOMETRIC_INTERPRETATION",
              "%s", optarg);
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    break;
    case 74: 
    page->hmargin = atof((char const   *)optarg);
    page->mode |= 4U;
    break;
    case 75: 
    page->vmargin = atof((char const   *)optarg);
    page->mode |= 4U;
    break;
    case 78: 
    i = 0U;
    opt_ptr = strtok((char */* __restrict  */)optarg,
                     (char const   */* __restrict  */)",");
    while (1) {
      if ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
        if (i < 1024U) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (0) {
        __s1_len___17 = strlen((char const   *)opt_ptr);
        __s2_len___17 = strlen("odd");
        if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
          goto _L___37;
        } else
        if (__s1_len___17 >= 4U) {
          _L___37: /* CIL Label */ 
          if (! ((size_t )((void const   *)("odd" + 1)) - (size_t )((void const   *)"odd") == 1U)) {
            tmp___224 = 1;
          } else
          if (__s2_len___17 >= 4U) {
            tmp___224 = 1;
          } else {
            tmp___224 = 0;
          }
        } else {
          tmp___224 = 0;
        }
        if (tmp___224) {
          tmp___219 = __builtin_strcmp((char const   *)opt_ptr, "odd");
          tmp___223 = tmp___219;
        } else {
          tmp___222 = __builtin_strcmp((char const   *)opt_ptr, "odd");
          tmp___223 = tmp___222;
        }
      } else {
        tmp___222 = __builtin_strcmp((char const   *)opt_ptr, "odd");
        tmp___223 = tmp___222;
      }
      if (tmp___223 == 0) {
        j = 1U;
        while (j <= 1024U) {
          tmp___179 = i;
          i ++;
          *(imagelist + tmp___179) = j;
          j += 2U;
        }
        *image_count = 511U;
        break;
      } else {
        if (0) {
          __s1_len___16 = strlen((char const   *)opt_ptr);
          __s2_len___16 = strlen("even");
          if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
            goto _L___35;
          } else
          if (__s1_len___16 >= 4U) {
            _L___35: /* CIL Label */ 
            if (! ((size_t )((void const   *)("even" + 1)) - (size_t )((void const   *)"even") == 1U)) {
              tmp___217 = 1;
            } else
            if (__s2_len___16 >= 4U) {
              tmp___217 = 1;
            } else {
              tmp___217 = 0;
            }
          } else {
            tmp___217 = 0;
          }
          if (tmp___217) {
            tmp___212 = __builtin_strcmp((char const   *)opt_ptr, "even");
            tmp___216 = tmp___212;
          } else {
            tmp___215 = __builtin_strcmp((char const   *)opt_ptr, "even");
            tmp___216 = tmp___215;
          }
        } else {
          tmp___215 = __builtin_strcmp((char const   *)opt_ptr, "even");
          tmp___216 = tmp___215;
        }
        if (tmp___216 == 0) {
          j = 2U;
          while (j <= 1024U) {
            tmp___180 = i;
            i ++;
            *(imagelist + tmp___180) = j;
            j += 2U;
          }
          *image_count = 512U;
          break;
        } else {
          if (0) {
            __s1_len___15 = strlen((char const   *)opt_ptr);
            __s2_len___15 = strlen("last");
            if (! ((size_t )((void const   *)(opt_ptr + 1)) - (size_t )((void const   *)opt_ptr) == 1U)) {
              goto _L___33;
            } else
            if (__s1_len___15 >= 4U) {
              _L___33: /* CIL Label */ 
              if (! ((size_t )((void const   *)("last" + 1)) - (size_t )((void const   *)"last") == 1U)) {
                tmp___210 = 1;
              } else
              if (__s2_len___15 >= 4U) {
                tmp___210 = 1;
              } else {
                tmp___210 = 0;
              }
            } else {
              tmp___210 = 0;
            }
            if (tmp___210) {
              tmp___205 = __builtin_strcmp((char const   *)opt_ptr, "last");
              tmp___209 = tmp___205;
            } else {
              tmp___208 = __builtin_strcmp((char const   *)opt_ptr, "last");
              tmp___209 = tmp___208;
            }
          } else {
            tmp___208 = __builtin_strcmp((char const   *)opt_ptr, "last");
            tmp___209 = tmp___208;
          }
          if (tmp___209 == 0) {
            tmp___181 = i;
            i ++;
            *(imagelist + tmp___181) = 1024U;
          } else {
            tmp___191 = __builtin_strpbrk((char const   *)opt_ptr, ":-");
            sep = tmp___191;
            if (! sep) {
              tmp___192 = i;
              i ++;
              tmp___193 = atoi((char const   *)opt_ptr);
              *(imagelist + tmp___192) = (unsigned int )(tmp___193 - 1);
            } else {
              *sep = (char )'\000';
              tmp___194 = atoi((char const   *)opt_ptr);
              start = (unsigned int )tmp___194;
              if (0) {
                __s1_len___14 = strlen((char const   *)(sep + 1));
                __s2_len___14 = strlen("last");
                if (! ((size_t )((void const   *)((sep + 1) + 1)) - (size_t )((void const   *)(sep + 1)) == 1U)) {
                  goto _L___31;
                } else
                if (__s1_len___14 >= 4U) {
                  _L___31: /* CIL Label */ 
                  if (! ((size_t )((void const   *)("last" + 1)) - (size_t )((void const   *)"last") == 1U)) {
                    tmp___202 = 1;
                  } else
                  if (__s2_len___14 >= 4U) {
                    tmp___202 = 1;
                  } else {
                    tmp___202 = 0;
                  }
                } else {
                  tmp___202 = 0;
                }
                if (tmp___202) {
                  tmp___197 = __builtin_strcmp((char const   *)(sep + 1), "last");
                  tmp___201 = tmp___197;
                } else {
                  tmp___200 = __builtin_strcmp((char const   *)(sep + 1), "last");
                  tmp___201 = tmp___200;
                }
              } else {
                tmp___200 = __builtin_strcmp((char const   *)(sep + 1), "last");
                tmp___201 = tmp___200;
              }
              if (tmp___201) {
                tmp___195 = atoi((char const   *)(sep + 1));
                end = (unsigned int )tmp___195;
              } else {
                end = 1024U;
              }
              j = start;
              while (1) {
                if (j <= end) {
                  if ((j - start) + i < 1024U) {

                  } else {
                    break;
                  }
                } else {
                  break;
                }
                tmp___203 = i;
                i ++;
                *(imagelist + tmp___203) = j - 1U;
                j ++;
              }
            }
          }
        }
      }
      opt_ptr = strtok((char */* __restrict  */)((void *)0),
                       (char const   */* __restrict  */)",");
    }
    *image_count = i;
    break;
    case 79: 
    if (sizeof(*(optarg + 0)) > 1U) {
      __res___4 = tolower((int )*(optarg + 0));
    } else {
      tmp___226 = __ctype_tolower_loc();
      __res___4 = (int )*(*tmp___226 + (int )*(optarg + 0));
    }
    switch (__res___4) {
    case 97: 
    page->orient = 16U;
    break;
    case 112: 
    page->orient = 1U;
    break;
    case 108: 
    page->orient = 2U;
    break;
    default: 
    TIFFError("Orientation must be portrait, landscape, or auto.", "%s", optarg);
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    }
    break;
    case 80: 
    tmp___234 = get_page_geometry(optarg, page);
    if (tmp___234) {
      if (0) {
        __s1_len___18 = strlen((char const   *)optarg);
        __s2_len___18 = strlen("list");
        if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
          goto _L___39;
        } else
        if (__s1_len___18 >= 4U) {
          _L___39: /* CIL Label */ 
          if (! ((size_t )((void const   *)("list" + 1)) - (size_t )((void const   *)"list") == 1U)) {
            tmp___233 = 1;
          } else
          if (__s2_len___18 >= 4U) {
            tmp___233 = 1;
          } else {
            tmp___233 = 0;
          }
        } else {
          tmp___233 = 0;
        }
        if (tmp___233) {
          tmp___228 = __builtin_strcmp((char const   *)optarg, "list");
          tmp___232 = tmp___228;
        } else {
          tmp___231 = __builtin_strcmp((char const   *)optarg, "list");
          tmp___232 = tmp___231;
        }
      } else {
        tmp___231 = __builtin_strcmp((char const   *)optarg, "list");
        tmp___232 = tmp___231;
      }
      if (tmp___232) {

      } else {
        TIFFError("", "Name            Width   Length (in inches)");
        i = 0U;
        while (i < 48U) {
          TIFFError("", "%-15.15s %5.2f   %5.2f", PaperTable[i].name,
                    PaperTable[i].width, PaperTable[i].length);
          i ++;
        }
        exit(-1);
      }
      TIFFError("Invalid paper size", "%s", optarg);
      TIFFError("", "Select one of:");
      TIFFError("", "Name            Width   Length (in inches)");
      i = 0U;
      while (i < 48U) {
        TIFFError("", "%-15.15s %5.2f   %5.2f", PaperTable[i].name,
                  PaperTable[i].width, PaperTable[i].length);
        i ++;
      }
      exit(-1);
    } else {
      page->mode |= 2U;
    }
    break;
    case 82: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 32);
    tmp___235 = strtoul((char const   */* __restrict  */)optarg,
                        (char **/* __restrict  */)((void *)0), 0);
    switch (tmp___235) {
    case 90UL: 
    crop_data->rotation = (uint16 )90;
    break;
    case 180UL: 
    crop_data->rotation = (uint16 )180;
    break;
    case 270UL: 
    crop_data->rotation = (uint16 )270;
    break;
    default: 
    TIFFError("Rotation must be 90, 180, or 270 degrees clockwise", "%s", optarg);
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    }
    break;
    case 83: 
    tmp___245 = __builtin_strpbrk((char const   *)optarg, ",:");
    sep = tmp___245;
    if (sep) {
      *sep = (char )'\000';
      tmp___246 = atoi((char const   *)optarg);
      page->cols = (unsigned int )tmp___246;
      tmp___247 = atoi((char const   *)(sep + 1));
      page->rows = (unsigned int )tmp___247;
    } else {
      tmp___248 = atoi((char const   *)optarg);
      page->cols = (unsigned int )tmp___248;
      tmp___249 = atoi((char const   *)optarg);
      page->rows = (unsigned int )tmp___249;
    }
    if (page->cols * page->rows > 32U) {
      TIFFError("Limit for subdivisions, ie rows x columns, exceeded", "%d", 32);
      exit(-1);
    } else {

    }
    page->mode |= 8U;
    break;
    case 85: 
    if (0) {
      __s1_len___21 = strlen((char const   *)optarg);
      __s2_len___21 = strlen("in");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___45;
      } else
      if (__s1_len___21 >= 4U) {
        _L___45: /* CIL Label */ 
        if (! ((size_t )((void const   *)("in" + 1)) - (size_t )((void const   *)"in") == 1U)) {
          tmp___270 = 1;
        } else
        if (__s2_len___21 >= 4U) {
          tmp___270 = 1;
        } else {
          tmp___270 = 0;
        }
      } else {
        tmp___270 = 0;
      }
      if (tmp___270) {
        tmp___265 = __builtin_strcmp((char const   *)optarg, "in");
        tmp___269 = tmp___265;
      } else {
        tmp___268 = __builtin_strcmp((char const   *)optarg, "in");
        tmp___269 = tmp___268;
      }
    } else {
      tmp___268 = __builtin_strcmp((char const   *)optarg, "in");
      tmp___269 = tmp___268;
    }
    if (tmp___269 == 0) {
      crop_data->res_unit = (uint16 )2;
      page->res_unit = (uint16 )2;
    } else {
      if (0) {
        __s1_len___20 = strlen((char const   *)optarg);
        __s2_len___20 = strlen("cm");
        if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
          goto _L___43;
        } else
        if (__s1_len___20 >= 4U) {
          _L___43: /* CIL Label */ 
          if (! ((size_t )((void const   *)("cm" + 1)) - (size_t )((void const   *)"cm") == 1U)) {
            tmp___263 = 1;
          } else
          if (__s2_len___20 >= 4U) {
            tmp___263 = 1;
          } else {
            tmp___263 = 0;
          }
        } else {
          tmp___263 = 0;
        }
        if (tmp___263) {
          tmp___258 = __builtin_strcmp((char const   *)optarg, "cm");
          tmp___262 = tmp___258;
        } else {
          tmp___261 = __builtin_strcmp((char const   *)optarg, "cm");
          tmp___262 = tmp___261;
        }
      } else {
        tmp___261 = __builtin_strcmp((char const   *)optarg, "cm");
        tmp___262 = tmp___261;
      }
      if (tmp___262 == 0) {
        crop_data->res_unit = (uint16 )3;
        page->res_unit = (uint16 )3;
      } else {
        if (0) {
          __s1_len___19 = strlen((char const   *)optarg);
          __s2_len___19 = strlen("px");
          if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
            goto _L___41;
          } else
          if (__s1_len___19 >= 4U) {
            _L___41: /* CIL Label */ 
            if (! ((size_t )((void const   *)("px" + 1)) - (size_t )((void const   *)"px") == 1U)) {
              tmp___256 = 1;
            } else
            if (__s2_len___19 >= 4U) {
              tmp___256 = 1;
            } else {
              tmp___256 = 0;
            }
          } else {
            tmp___256 = 0;
          }
          if (tmp___256) {
            tmp___251 = __builtin_strcmp((char const   *)optarg, "px");
            tmp___255 = tmp___251;
          } else {
            tmp___254 = __builtin_strcmp((char const   *)optarg, "px");
            tmp___255 = tmp___254;
          }
        } else {
          tmp___254 = __builtin_strcmp((char const   *)optarg, "px");
          tmp___255 = tmp___254;
        }
        if (tmp___255 == 0) {
          crop_data->res_unit = (uint16 )1;
          page->res_unit = (uint16 )1;
        } else {
          TIFFError("Illegal unit of measure", "%s", optarg);
          TIFFError("For valid options type", "tiffcrop -h");
          exit(-1);
        }
      }
    }
    break;
    case 86: 
    page->vres = atof((char const   *)optarg);
    page->mode |= 1U;
    break;
    case 88: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 2);
    crop_data->width = atof((char const   *)optarg);
    break;
    case 89: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 4);
    crop_data->length = atof((char const   *)optarg);
    break;
    case 90: 
    crop_data->crop_mode = (uint16 )((int )crop_data->crop_mode | 8);
    i = 0U;
    opt_ptr = strtok((char */* __restrict  */)optarg,
                     (char const   */* __restrict  */)",");
    while (1) {
      if ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
        if (i < 8U) {

        } else {
          break;
        }
      } else {
        break;
      }
      crop_data->zones = (uint16 )((int )crop_data->zones + 1);
      tmp___272 = __builtin_strchr(opt_ptr, ':');
      opt_offset = tmp___272;
      *opt_offset = (char )'\000';
      crop_data->zonelist[i].position = atoi((char const   *)opt_ptr);
      crop_data->zonelist[i].total = atoi((char const   *)(opt_offset + 1));
      opt_ptr = strtok((char */* __restrict  */)((void *)0),
                       (char const   */* __restrict  */)",");
      i ++;
    }
    if ((unsigned int )opt_ptr != (unsigned int )((void *)0)) {
      if (i >= 8U) {
        TIFFError("Zone list exceeds region limit", "%d", 8);
        exit(-1);
      } else {

      }
    } else {

    }
    break;
    case 63: 
    TIFFError("For valid options type", "tiffcrop -h");
    exit(-1);
    }
  }
  return;
}
}
static int update_output_file(TIFF **tiffout , char *mode , int autoindex ,
                              char *outname , unsigned int *page ) ;
static int findex  =    0;
static int update_output_file(TIFF **tiffout , char *mode , int autoindex ,
                              char *outname , unsigned int *page ) 
{ 
  char *sep ;
  char filenum[16] ;
  char export_ext[16] ;
  char exportname[4096] ;

  {
  strcpy((char */* __restrict  */)(export_ext),
         (char const   */* __restrict  */)".tiff");
  if (autoindex) {
    if ((unsigned int )*tiffout != (unsigned int )((void *)0)) {
      TIFFClose(*tiffout);
      *tiffout = (TIFF *)((void *)0);
    } else {

    }
  } else {

  }
  __builtin_strncpy(exportname, (char const   *)outname, 4081U);
  if ((unsigned int )*tiffout == (unsigned int )((void *)0)) {
    if (autoindex) {
      findex ++;
      sep = strstr((char const   *)(exportname), ".tif");
      if (sep) {
        __builtin_strncpy(export_ext, (char const   *)sep, 5U);
        *sep = (char )'\000';
      } else {
        sep = strstr((char const   *)(exportname), ".TIF");
        if (sep) {
          __builtin_strncpy(export_ext, (char const   *)sep, 5U);
          *sep = (char )'\000';
        } else {
          __builtin_strncpy(export_ext, ".tiff", 5U);
        }
      }
      export_ext[5] = (char )'\000';
      sprintf((char */* __restrict  */)(filenum),
              (char const   */* __restrict  */)"-%03d%s", findex, export_ext);
      filenum[15] = (char )'\000';
      __builtin_strncat(exportname, (char const   *)(filenum), 14U);
    } else {

    }
    *tiffout = TIFFOpen((char const   *)(exportname), (char const   *)mode);
    if ((unsigned int )*tiffout == (unsigned int )((void *)0)) {
      TIFFError("update_output_file", "Unable to open output file %s\n",
                exportname);
      return (1);
    } else {

    }
    *page = 0U;
    return (0);
  } else {
    (*page) ++;
  }
  return (0);
}
}
int main(int argc , char **argv ) 
{ 
  uint16 defconfig ;
  uint16 deffillorder ;
  uint32 deftilewidth ;
  uint32 deftilelength ;
  uint32 defrowsperstrip ;
  uint32 dirnum ;
  TIFF *in ;
  TIFF *out ;
  char mode[10] ;
  char *mp ;
  struct image_data image ;
  struct crop_mask crop ;
  struct pagedef page ;
  struct pageseg sections[32] ;
  struct buffinfo seg_buffs[32] ;
  struct dump_opts dump ;
  unsigned char *read_buff ;
  unsigned char *crop_buff ;
  unsigned char *sect_buff ;
  unsigned char *sect_src ;
  unsigned int imagelist[1025] ;
  unsigned int image_count ;
  unsigned int dump_images ;
  unsigned int next_image ;
  unsigned int next_page ;
  unsigned int total_pages ;
  unsigned int total_images ;
  unsigned int end_of_input ;
  int seg ;
  int length ;
  char temp_filename[4097] ;
  uint16 tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  int tmp___2 ;
  size_t tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  size_t tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  uint16 tmp___19 ;
  int tmp___20 ;
  char const   *tmp___21 ;

  {
  defconfig = (uint16 )-1;
  deffillorder = (uint16 )0;
  deftilewidth = (uint32 )-1;
  deftilelength = (uint32 )-1;
  defrowsperstrip = (uint32 )0;
  dirnum = (uint32 )0;
  in = (TIFF *)((void *)0);
  out = (TIFF *)((void *)0);
  mp = mode;
  read_buff = (unsigned char *)((void *)0);
  crop_buff = (unsigned char *)((void *)0);
  sect_buff = (unsigned char *)((void *)0);
  sect_src = (unsigned char *)((void *)0);
  image_count = 0U;
  dump_images = 0U;
  next_image = 0U;
  next_page = 0U;
  total_pages = 0U;
  total_images = 0U;
  end_of_input = 0U;
  memset((void *)(temp_filename), '\000', (size_t )4097);
  little_endian = (int )*((unsigned char *)(& little_endian)) & 49;
  initImageData(& image);
  initCropMasks(& crop);
  initPageSetup(& page, sections, seg_buffs);
  initDumpOptions(& dump);
  process_command_opts(argc, argv, mp, mode, & dirnum, & defconfig,
                       & deffillorder, & deftilewidth, & deftilelength,
                       & defrowsperstrip, & crop, & page, & dump, imagelist,
                       & image_count);
  if (argc - optind < 2) {
    usage();
  } else {

  }
  if (argc - optind == 2) {
    pageNum = -1;
  } else {
    total_images = 0U;
  }
  while (optind < argc - 1) {
    in = TIFFOpen((char const   *)*(argv + optind), "r");
    if ((unsigned int )in == (unsigned int )((void *)0)) {
      return (-3);
    } else {

    }
    tmp = TIFFNumberOfDirectories(in);
    total_images = (unsigned int )tmp;
    if (image_count == 0U) {
      dirnum = (uint32 )0;
      total_pages = total_images;
    } else {
      dirnum = (uint32 )((tdir_t )(imagelist[next_image] - 1U));
      next_image ++;
      if (image_count > total_images) {
        image_count = total_images;
      } else {

      }
      total_pages = image_count;
    }
    if (dirnum == 1023U) {
      dirnum = total_images - 1U;
    } else {

    }
    if (dirnum > total_images) {
      tmp___0 = TIFFFileName(in);
      TIFFError(tmp___0,
                "Invalid image number %d, File contains only %d images",
                (int )dirnum + 1, total_images);
      if ((unsigned int )out != (unsigned int )((void *)0)) {
        TIFFClose(out);
      } else {

      }
      return (1);
    } else {

    }
    if (dirnum != 0U) {
      tmp___2 = TIFFSetDirectory(in, (tdir_t )dirnum);
      if (tmp___2) {

      } else {
        tmp___1 = TIFFFileName(in);
        TIFFError(tmp___1, "Error, setting subdirectory at %d", dirnum);
        if ((unsigned int )out != (unsigned int )((void *)0)) {
          TIFFClose(out);
        } else {

        }
        return (1);
      }
    } else {

    }
    end_of_input = 0U;
    while (end_of_input == 0U) {
      config = defconfig;
      compression = defcompression;
      predictor = defpredictor;
      fillorder = deffillorder;
      rowsperstrip = defrowsperstrip;
      tilewidth = deftilewidth;
      tilelength = deftilelength;
      g3opts = defg3opts;
      if (dump.format != 0) {
        dump_images ++;
        tmp___3 = strlen((char const   *)(dump.infilename));
        length = (int )tmp___3;
        if (length > 0) {
          if ((unsigned int )dump.infile != (unsigned int )((void *)0)) {
            fclose(dump.infile);
          } else {

          }
          if (dump.format == 1) {
            tmp___4 = "txt";
          } else {
            tmp___4 = "raw";
          }
          sprintf((char */* __restrict  */)(temp_filename),
                  (char const   */* __restrict  */)"%s-read-%03d.%s",
                  dump.infilename, dump_images, tmp___4);
          dump.infile = fopen((char const   */* __restrict  */)(temp_filename),
                              (char const   */* __restrict  */)(dump.mode));
          if ((unsigned int )dump.infile == (unsigned int )((void *)0)) {
            TIFFError("Unable to open dump file %s for writing",
                      (char const   *)(temp_filename));
            exit(-1);
          } else {

          }
          tmp___5 = TIFFFileName(in);
          dump_info(dump.infile, dump.format, (char *)"Reading image",
                    (char *)"%d from %s", dump_images, tmp___5);
        } else {

        }
        tmp___6 = strlen((char const   *)(dump.outfilename));
        length = (int )tmp___6;
        if (length > 0) {
          if ((unsigned int )dump.outfile != (unsigned int )((void *)0)) {
            fclose(dump.outfile);
          } else {

          }
          if (dump.format == 1) {
            tmp___7 = "txt";
          } else {
            tmp___7 = "raw";
          }
          sprintf((char */* __restrict  */)(temp_filename),
                  (char const   */* __restrict  */)"%s-write-%03d.%s",
                  dump.outfilename, dump_images, tmp___7);
          dump.outfile = fopen((char const   */* __restrict  */)(temp_filename),
                               (char const   */* __restrict  */)(dump.mode));
          if ((unsigned int )dump.outfile == (unsigned int )((void *)0)) {
            TIFFError("Unable to open dump file %s for writing",
                      (char const   *)(temp_filename));
            exit(-1);
          } else {

          }
          tmp___8 = TIFFFileName(in);
          dump_info(dump.outfile, dump.format, (char *)"Writing image",
                    (char *)"%d from %s", dump_images, tmp___8);
        } else {

        }
      } else {

      }
      if (dump.debug) {
        TIFFError("main", "Reading image %4d of %4d total pages.", dirnum + 1U,
                  total_pages);
      } else {

      }
      tmp___9 = loadImage(in, & image, & dump, & read_buff);
      if (tmp___9) {
        TIFFError("main", "Unable to load source image");
        exit(-1);
      } else {

      }
      if ((int )image.adjustments != 0) {
        tmp___10 = correct_orientation(& image, & read_buff);
        if (tmp___10) {
          TIFFError("main", "Unable to correct image orientation");
        } else {

        }
      } else {

      }
      tmp___11 = getCropOffsets(& image, & crop, & dump);
      if (tmp___11) {
        TIFFError("main", "Unable to define crop regions");
        exit(-1);
      } else {

      }
      if ((int )crop.selections > 0) {
        tmp___12 = processCropSelections(& image, & crop, & read_buff, seg_buffs);
        if (tmp___12) {
          TIFFError("main", "Unable to process image selections");
          exit(-1);
        } else {

        }
      } else {
        tmp___13 = createCroppedImage(& image, & crop, & read_buff, & crop_buff);
        if (tmp___13) {
          TIFFError("main", "Unable to create output image");
          exit(-1);
        } else {

        }
      }
      if (page.mode == 0U) {
        if ((int )crop.selections > 0) {
          writeSelections(in, & out, & crop, & image, & dump, seg_buffs, mp,
                          *(argv + (argc - 1)), & next_page, total_pages);
        } else {
          tmp___14 = update_output_file(& out, mp, (int )crop.exp_mode,
                                        *(argv + (argc - 1)), & next_page);
          if (tmp___14) {
            exit(1);
          } else {

          }
          tmp___15 = writeCroppedImage(in, out, & image, & dump,
                                       crop.combined_width,
                                       crop.combined_length, crop_buff,
                                       (int )next_page, (int )total_pages);
          if (tmp___15) {
            TIFFError("main", "Unable to write new image");
            exit(-1);
          } else {

          }
        }
      } else {
        if ((unsigned int )crop_buff != (unsigned int )((void *)0)) {
          sect_src = crop_buff;
        } else {
          sect_src = read_buff;
        }
        tmp___16 = computeOutputPixelOffsets(& crop, & image, & page, sections,
                                             & dump);
        if (tmp___16) {
          TIFFError("main", "Unable to compute output section data");
          exit(-1);
        } else {

        }
        tmp___17 = update_output_file(& out, mp, (int )crop.exp_mode,
                                      *(argv + (argc - 1)), & next_page);
        if (tmp___17) {
          exit(1);
        } else {

        }
        tmp___18 = writeImageSections(in, out, & image, & page, sections,
                                      & dump, sect_src, & sect_buff);
        if (tmp___18) {
          TIFFError("main", "Unable to write image sections");
          exit(-1);
        } else {

        }
      }
      if (image_count == 0U) {
        dirnum ++;
      } else {
        dirnum = (uint32 )((tdir_t )(imagelist[next_image] - 1U));
        next_image ++;
      }
      if (dirnum == 1023U) {
        tmp___19 = TIFFNumberOfDirectories(in);
        dirnum = (uint32 )((int )tmp___19 - 1);
      } else {

      }
      tmp___20 = TIFFSetDirectory(in, (tdir_t )dirnum);
      if (tmp___20) {

      } else {
        end_of_input = 1U;
      }
    }
    TIFFClose(in);
    optind ++;
  }
  if (read_buff) {
    _TIFFfree((void *)read_buff);
  } else {

  }
  if (crop_buff) {
    _TIFFfree((void *)crop_buff);
  } else {

  }
  if (sect_buff) {
    _TIFFfree((void *)sect_buff);
  } else {

  }
  seg = 0;
  while (seg < (int )crop.selections) {
    _TIFFfree((void *)seg_buffs[seg].buffer);
    seg ++;
  }
  if (dump.format != 0) {
    if ((unsigned int )dump.infile != (unsigned int )((void *)0)) {
      fclose(dump.infile);
    } else {

    }
    if ((unsigned int )dump.outfile != (unsigned int )((void *)0)) {
      tmp___21 = TIFFFileName(out);
      dump_info(dump.outfile, dump.format, (char *)"",
                (char *)"Completed run for %s", tmp___21);
      fclose(dump.outfile);
    } else {

    }
  } else {

  }
  TIFFClose(out);
  return (0);
}
}
static int dump_data(FILE *dumpfile , int format , char *dump_tag ,
                     unsigned char *data , uint32 count ) 
{ 
  int j ;
  int k ;
  uint32 i ;
  char dump_array[10] ;
  unsigned char bitset ;
  char const   *tmp ;
  size_t tmp___0 ;

  {
  if ((unsigned int )dumpfile == (unsigned int )((void *)0)) {
    TIFFError("", "Invalid FILE pointer for dump file\n");
    return (1);
  } else {

  }
  if (format == 1) {
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s  ", dump_tag);
    i = (uint32 )0;
    while (i < count) {
      j = 0;
      k = 7;
      while (j < 8) {
        if ((int )*(data + i) & (1 << k)) {
          bitset = (unsigned char)1;
        } else {
          bitset = (unsigned char)0;
        }
        if (bitset) {
          tmp = "1";
        } else {
          tmp = "0";
        }
        sprintf((char */* __restrict  */)(& dump_array[j]),
                (char const   */* __restrict  */)tmp);
        j ++;
        k --;
      }
      dump_array[8] = (char )'\000';
      fprintf((FILE */* __restrict  */)dumpfile,
              (char const   */* __restrict  */)" %s", dump_array);
      i ++;
    }
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)"\n");
  } else {
    tmp___0 = fwrite((void const   */* __restrict  */)data, (size_t )1, count,
                     (FILE */* __restrict  */)dumpfile);
    if (tmp___0 != count) {
      TIFFError("", "Unable to write binary data to dump file\n");
      return (1);
    } else {

    }
  }
  return (0);
}
}
static int dump_byte(FILE *dumpfile , int format , char *dump_tag ,
                     unsigned char data ) 
{ 
  int j ;
  int k ;
  char dump_array[10] ;
  unsigned char bitset ;
  char const   *tmp ;
  size_t tmp___0 ;

  {
  if ((unsigned int )dumpfile == (unsigned int )((void *)0)) {
    TIFFError("", "Invalid FILE pointer for dump file\n");
    return (1);
  } else {

  }
  if (format == 1) {
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s  ", dump_tag);
    j = 0;
    k = 7;
    while (j < 8) {
      if ((int )data & (1 << k)) {
        bitset = (unsigned char)1;
      } else {
        bitset = (unsigned char)0;
      }
      if (bitset) {
        tmp = "1";
      } else {
        tmp = "0";
      }
      sprintf((char */* __restrict  */)(& dump_array[j]),
              (char const   */* __restrict  */)tmp);
      j ++;
      k --;
    }
    dump_array[8] = (char )'\000';
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s\n", dump_array);
  } else {
    tmp___0 = fwrite((void const   */* __restrict  */)(& data), (size_t )1,
                     (size_t )1, (FILE */* __restrict  */)dumpfile);
    if (tmp___0 != 1U) {
      TIFFError("", "Unable to write binary data to dump file\n");
      return (1);
    } else {

    }
  }
  return (0);
}
}
static int dump_short(FILE *dumpfile , int format , char *dump_tag ,
                      uint16 data ) 
{ 
  int j ;
  int k ;
  char dump_array[20] ;
  unsigned char bitset ;
  char const   *tmp ;
  size_t tmp___0 ;

  {
  if ((unsigned int )dumpfile == (unsigned int )((void *)0)) {
    TIFFError("", "Invalid FILE pointer for dump file\n");
    return (1);
  } else {

  }
  if (format == 1) {
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s  ", dump_tag);
    j = 0;
    k = 15;
    while (k >= 0) {
      if ((int )data & (1 << k)) {
        bitset = (unsigned char)1;
      } else {
        bitset = (unsigned char)0;
      }
      if (bitset) {
        tmp = "1";
      } else {
        tmp = "0";
      }
      sprintf((char */* __restrict  */)(& dump_array[j]),
              (char const   */* __restrict  */)tmp);
      if (k % 8 == 0) {
        j ++;
        sprintf((char */* __restrict  */)(& dump_array[j]),
                (char const   */* __restrict  */)" ");
      } else {

      }
      j ++;
      k --;
    }
    dump_array[17] = (char )'\000';
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s\n", dump_array);
  } else {
    tmp___0 = fwrite((void const   */* __restrict  */)(& data), (size_t )2,
                     (size_t )1, (FILE */* __restrict  */)dumpfile);
    if (tmp___0 != 2U) {
      TIFFError("", "Unable to write binary data to dump file\n");
      return (1);
    } else {

    }
  }
  return (0);
}
}
static int dump_long(FILE *dumpfile , int format , char *dump_tag , uint32 data ) 
{ 
  int j ;
  int k ;
  char dump_array[40] ;
  unsigned char bitset ;
  char const   *tmp ;
  size_t tmp___0 ;

  {
  if ((unsigned int )dumpfile == (unsigned int )((void *)0)) {
    TIFFError("", "Invalid FILE pointer for dump file\n");
    return (1);
  } else {

  }
  if (format == 1) {
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s  ", dump_tag);
    j = 0;
    k = 31;
    while (k >= 0) {
      if (data & (1U << k)) {
        bitset = (unsigned char)1;
      } else {
        bitset = (unsigned char)0;
      }
      if (bitset) {
        tmp = "1";
      } else {
        tmp = "0";
      }
      sprintf((char */* __restrict  */)(& dump_array[j]),
              (char const   */* __restrict  */)tmp);
      if (k % 8 == 0) {
        j ++;
        sprintf((char */* __restrict  */)(& dump_array[j]),
                (char const   */* __restrict  */)" ");
      } else {

      }
      j ++;
      k --;
    }
    dump_array[35] = (char )'\000';
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s\n", dump_array);
  } else {
    tmp___0 = fwrite((void const   */* __restrict  */)(& data), (size_t )4,
                     (size_t )1, (FILE */* __restrict  */)dumpfile);
    if (tmp___0 != 4U) {
      TIFFError("", "Unable to write binary data to dump file\n");
      return (1);
    } else {

    }
  }
  return (0);
}
}
static int dump_wide(FILE *dumpfile , int format , char *dump_tag , uint64 data ) 
{ 
  int j ;
  int k ;
  char dump_array[80] ;
  unsigned char bitset ;
  char const   *tmp ;
  size_t tmp___0 ;

  {
  if ((unsigned int )dumpfile == (unsigned int )((void *)0)) {
    TIFFError("", "Invalid FILE pointer for dump file\n");
    return (1);
  } else {

  }
  if (format == 1) {
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s  ", dump_tag);
    j = 0;
    k = 63;
    while (k >= 0) {
      if (data & (1ULL << k)) {
        bitset = (unsigned char)1;
      } else {
        bitset = (unsigned char)0;
      }
      if (bitset) {
        tmp = "1";
      } else {
        tmp = "0";
      }
      sprintf((char */* __restrict  */)(& dump_array[j]),
              (char const   */* __restrict  */)tmp);
      if (k % 8 == 0) {
        j ++;
        sprintf((char */* __restrict  */)(& dump_array[j]),
                (char const   */* __restrict  */)" ");
      } else {

      }
      j ++;
      k --;
    }
    dump_array[71] = (char )'\000';
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)" %s\n", dump_array);
  } else {
    tmp___0 = fwrite((void const   */* __restrict  */)(& data), (size_t )8,
                     (size_t )1, (FILE */* __restrict  */)dumpfile);
    if (tmp___0 != 8U) {
      TIFFError("", "Unable to write binary data to dump file\n");
      return (1);
    } else {

    }
  }
  return (0);
}
}
static void dump_info(FILE *dumpfile , int format , char *prefix , char *msg 
                      , ...) 
{ 
  va_list ap ;

  {
  if (format == 1) {
    __builtin_va_start(ap, msg);
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)"%s ", prefix);
    vfprintf((FILE */* __restrict  */)dumpfile,
             (char const   */* __restrict  */)msg, ap);
    fprintf((FILE */* __restrict  */)dumpfile,
            (char const   */* __restrict  */)"\n");
  } else {

  }
  return;
}
}
static int dump_buffer(FILE *dumpfile , int format , uint32 rows ,
                       uint32 width , uint32 row , unsigned char *buff ) 
{ 
  int j ;
  int k ;
  uint32 i ;
  unsigned char *dump_ptr ;

  {
  if ((unsigned int )dumpfile == (unsigned int )((void *)0)) {
    TIFFError("", "Invalid FILE pointer for dump file\n");
    return (1);
  } else {

  }
  i = (uint32 )0;
  while (i < rows) {
    dump_ptr = buff + i * width;
    if (format == 1) {
      dump_info(dumpfile, format, (char *)"",
                (char *)"Row %4d, %d bytes at offset %d", (row + i) + 1U, width,
                row * width);
    } else {

    }
    j = 0;
    k = (int )width;
    while (k >= 10) {
      dump_data(dumpfile, format, (char *)"", dump_ptr, (uint32 )10);
      j += 10;
      k -= 10;
      dump_ptr += 10;
    }
    if (k > 0) {
      dump_data(dumpfile, format, (char *)"", dump_ptr, (uint32 )k);
    } else {

    }
    i ++;
  }
  return (0);
}
}
static int extractContigSamplesBytes(uint8 *in , uint8 *out , uint32 cols ,
                                     tsample_t sample , uint16 spp ,
                                     uint16 bps , tsample_t count ,
                                     uint32 start , uint32 end ) 
{ 
  int i ;
  int bytes_per_sample ;
  int sindex ;
  uint32 col ;
  uint32 dst_rowsize ;
  uint32 bit_offset ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint8 *src ;
  uint8 *dst ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  src = in;
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesBytes", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesBytes", "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamplesBytes",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamplesBytes",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamplesBytes",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamplesBytes",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  dst_rowsize = (((uint32 )bps * (end - start)) * (uint32 )count) / 8U;
  bytes_per_sample = ((int )bps + 7) / 8;
  if ((int )count == (int )spp) {
    src = in + (start * (uint32 )spp) * (uint32 )bytes_per_sample;
    _TIFFmemcpy((void *)dst, (void const   *)src, (tmsize_t )dst_rowsize);
  } else {
    col = start;
    while (col < end) {
      sindex = (int )sample;
      while (1) {
        if (sindex < (int )spp) {
          if (sindex < (int )sample + (int )count) {

          } else {
            break;
          }
        } else {
          break;
        }
        bit_offset = (col * (uint32 )bps) * (uint32 )spp;
        if (sindex == 0) {
          src_byte = bit_offset / 8U;
          src_bit = bit_offset % 8U;
        } else {
          src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
          src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
        }
        src = in + src_byte;
        i = 0;
        while (i < bytes_per_sample) {
          tmp = dst;
          dst ++;
          tmp___0 = src;
          src ++;
          *tmp = *tmp___0;
          i ++;
        }
        sindex ++;
      }
      col ++;
    }
  }
  return (0);
}
}
static int extractContigSamples8bits(uint8 *in , uint8 *out , uint32 cols ,
                                     tsample_t sample , uint16 spp ,
                                     uint16 bps , tsample_t count ,
                                     uint32 start , uint32 end ) 
{ 
  int ready_bits ;
  int sindex ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint8 maskbits ;
  uint8 matchbits ;
  uint8 buff1 ;
  uint8 buff2 ;
  uint8 *src ;
  uint8 *dst ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  ready_bits = 0;
  sindex = 0;
  maskbits = (uint8 )0;
  matchbits = (uint8 )0;
  buff1 = (uint8 )0;
  buff2 = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples8bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples8bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamples8bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamples8bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamples8bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamples8bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  ready_bits = 0;
  maskbits = (uint8 )(255 >> (8 - (int )bps));
  buff2 = (uint8 )0;
  buff1 = buff2;
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = (uint8 )((int )maskbits << ((8U - src_bit) - (uint32 )bps));
      buff1 = (uint8 )(((int )*src & (int )matchbits) << src_bit);
      if (ready_bits >= 8) {
        tmp = dst;
        dst ++;
        *tmp = buff2;
        buff2 = buff1;
        ready_bits -= 8;
      } else {
        buff2 = (uint8 )((int )buff2 | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    buff1 = (uint8 )((unsigned int )buff2 & (255U << (8 - ready_bits)));
    tmp___0 = dst;
    dst ++;
    *tmp___0 = buff1;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamples16bits(uint8 *in , uint8 *out , uint32 cols ,
                                      tsample_t sample , uint16 spp ,
                                      uint16 bps , tsample_t count ,
                                      uint32 start , uint32 end ) 
{ 
  int ready_bits ;
  int sindex ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint16 maskbits ;
  uint16 matchbits ;
  uint16 buff1 ;
  uint16 buff2 ;
  uint8 bytebuff ;
  uint8 *src ;
  uint8 *dst ;
  unsigned char swapbuff[2] ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  ready_bits = 0;
  sindex = 0;
  maskbits = (uint16 )0;
  matchbits = (uint16 )0;
  buff1 = (uint16 )0;
  buff2 = (uint16 )0;
  bytebuff = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples16bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples16bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamples16bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamples16bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamples16bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamples16bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  ready_bits = 0;
  maskbits = (uint16 )(65535 >> (16 - (int )bps));
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = (uint16 )((int )maskbits << ((16U - src_bit) - (uint32 )bps));
      if (little_endian) {
        swapbuff[1] = *src;
        swapbuff[0] = *(src + 1);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
      }
      buff1 = *((uint16 *)(swapbuff));
      buff1 = (uint16 )(((int )buff1 & (int )matchbits) << src_bit);
      if (ready_bits < 8) {
        bytebuff = (uint8 )0;
        buff2 = (uint16 )((int )buff2 | ((int )buff1 >> ready_bits));
      } else {
        bytebuff = (uint8 )((int )buff2 >> 8);
        tmp = dst;
        dst ++;
        *tmp = bytebuff;
        ready_bits -= 8;
        buff2 = (uint16 )(((int )buff2 << 8) | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff = (uint8 )((int )buff2 >> 8);
    tmp___0 = dst;
    dst ++;
    *tmp___0 = bytebuff;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamples24bits(uint8 *in , uint8 *out , uint32 cols ,
                                      tsample_t sample , uint16 spp ,
                                      uint16 bps , tsample_t count ,
                                      uint32 start , uint32 end ) 
{ 
  int ready_bits ;
  int sindex ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint32 maskbits ;
  uint32 matchbits ;
  uint32 buff1 ;
  uint32 buff2 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 *src ;
  uint8 *dst ;
  unsigned char swapbuff[4] ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint8 *tmp___1 ;

  {
  ready_bits = 0;
  sindex = 0;
  maskbits = (uint32 )0;
  matchbits = (uint32 )0;
  buff1 = (uint32 )0;
  buff2 = (uint32 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )in == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples24bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )out == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples24bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamples24bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamples24bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamples24bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamples24bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  ready_bits = 0;
  maskbits = 4294967295U >> (32 - (int )bps);
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = maskbits << ((32U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff[3] = *src;
        swapbuff[2] = *(src + 1);
        swapbuff[1] = *(src + 2);
        swapbuff[0] = *(src + 3);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
        swapbuff[2] = *(src + 2);
        swapbuff[3] = *(src + 3);
      }
      buff1 = *((uint32 *)(swapbuff));
      buff1 = (buff1 & matchbits) << src_bit;
      if (ready_bits < 16) {
        bytebuff2 = (uint8 )0;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      } else {
        bytebuff1 = (uint8 )(buff2 >> 24);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 16);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        ready_bits -= 16;
        buff2 = (buff2 << 16) | (buff1 >> ready_bits);
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 24);
    tmp___1 = dst;
    dst ++;
    *tmp___1 = bytebuff1;
    buff2 <<= 8;
    bytebuff2 = bytebuff1;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamples32bits(uint8 *in , uint8 *out , uint32 cols ,
                                      tsample_t sample , uint16 spp ,
                                      uint16 bps , tsample_t count ,
                                      uint32 start , uint32 end ) 
{ 
  int ready_bits ;
  int sindex ;
  int shift_width ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint32 longbuff1 ;
  uint32 longbuff2 ;
  uint64 maskbits ;
  uint64 matchbits ;
  uint64 buff1 ;
  uint64 buff2 ;
  uint64 buff3 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 bytebuff3 ;
  uint8 bytebuff4 ;
  uint8 *src ;
  uint8 *dst ;
  unsigned char swapbuff1[4] ;
  unsigned char swapbuff2[4] ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint8 *tmp___1 ;
  uint8 *tmp___2 ;
  uint8 *tmp___3 ;

  {
  ready_bits = 0;
  sindex = 0;
  shift_width = 0;
  longbuff1 = (uint32 )0;
  longbuff2 = (uint32 )0;
  maskbits = (uint64 )0;
  matchbits = (uint64 )0;
  buff1 = (uint64 )0;
  buff2 = (uint64 )0;
  buff3 = (uint64 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  bytebuff3 = (uint8 )0;
  bytebuff4 = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )in == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples32bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )out == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamples32bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamples32bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamples32bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamples32bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamples32bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  shift_width = ((int )bps + 7) / 8 + 1;
  ready_bits = 0;
  maskbits = 0xffffffffffffffffULL >> (64 - (int )bps);
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = maskbits << ((64U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff1[3] = *src;
        swapbuff1[2] = *(src + 1);
        swapbuff1[1] = *(src + 2);
        swapbuff1[0] = *(src + 3);
      } else {
        swapbuff1[0] = *src;
        swapbuff1[1] = *(src + 1);
        swapbuff1[2] = *(src + 2);
        swapbuff1[3] = *(src + 3);
      }
      longbuff1 = *((uint32 *)(swapbuff1));
      memset((void *)(swapbuff2), '\000', sizeof(swapbuff2));
      if (little_endian) {
        swapbuff2[3] = *src;
        swapbuff2[2] = *(src + 1);
        swapbuff2[1] = *(src + 2);
        swapbuff2[0] = *(src + 3);
      } else {
        swapbuff2[0] = *src;
        swapbuff2[1] = *(src + 1);
        swapbuff2[2] = *(src + 2);
        swapbuff2[3] = *(src + 3);
      }
      longbuff2 = *((uint32 *)(swapbuff2));
      buff3 = ((uint64 )longbuff1 << 32) | (unsigned long long )longbuff2;
      buff1 = (buff3 & matchbits) << src_bit;
      if (ready_bits >= 32) {
        bytebuff1 = (uint8 )(buff2 >> 56);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 48);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        bytebuff3 = (uint8 )(buff2 >> 40);
        tmp___1 = dst;
        dst ++;
        *tmp___1 = bytebuff3;
        bytebuff4 = (uint8 )(buff2 >> 32);
        tmp___2 = dst;
        dst ++;
        *tmp___2 = bytebuff4;
        ready_bits -= 32;
        buff2 = (buff2 << 32) | (buff1 >> ready_bits);
      } else {
        bytebuff4 = (uint8 )0;
        bytebuff3 = bytebuff4;
        bytebuff2 = bytebuff3;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 56);
    tmp___3 = dst;
    dst ++;
    *tmp___3 = bytebuff1;
    buff2 <<= 8;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamplesShifted8bits(uint8 *in , uint8 *out ,
                                            uint32 cols , tsample_t sample ,
                                            uint16 spp , uint16 bps ,
                                            tsample_t count , uint32 start ,
                                            uint32 end , int shift ) 
{ 
  int ready_bits ;
  int sindex ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint8 maskbits ;
  uint8 matchbits ;
  uint8 buff1 ;
  uint8 buff2 ;
  uint8 *src ;
  uint8 *dst ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  ready_bits = 0;
  sindex = 0;
  maskbits = (uint8 )0;
  matchbits = (uint8 )0;
  buff1 = (uint8 )0;
  buff2 = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted8bits",
              "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted8bits",
              "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamplesShifted8bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamplesShifted8bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamplesShifted8bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamplesShifted8bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  ready_bits = shift;
  maskbits = (uint8 )(255 >> (8 - (int )bps));
  buff2 = (uint8 )0;
  buff1 = buff2;
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = (uint8 )((int )maskbits << ((8U - src_bit) - (uint32 )bps));
      buff1 = (uint8 )(((int )*src & (int )matchbits) << src_bit);
      if (col == start) {
        if (sindex == (int )sample) {
          buff2 = (uint8 )((int )*src & (255 << shift));
        } else {

        }
      } else {

      }
      if (ready_bits >= 8) {
        tmp = dst;
        dst ++;
        *tmp = (uint8 )((int )*tmp | (int )buff2);
        buff2 = buff1;
        ready_bits -= 8;
      } else {
        buff2 = (uint8 )((int )buff2 | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    buff1 = (uint8 )((unsigned int )buff2 & (255U << (8 - ready_bits)));
    tmp___0 = dst;
    dst ++;
    *tmp___0 = buff1;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamplesShifted16bits(uint8 *in , uint8 *out ,
                                             uint32 cols , tsample_t sample ,
                                             uint16 spp , uint16 bps ,
                                             tsample_t count , uint32 start ,
                                             uint32 end , int shift ) 
{ 
  int ready_bits ;
  int sindex ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint16 maskbits ;
  uint16 matchbits ;
  uint16 buff1 ;
  uint16 buff2 ;
  uint8 bytebuff ;
  uint8 *src ;
  uint8 *dst ;
  unsigned char swapbuff[2] ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  ready_bits = 0;
  sindex = 0;
  maskbits = (uint16 )0;
  matchbits = (uint16 )0;
  buff1 = (uint16 )0;
  buff2 = (uint16 )0;
  bytebuff = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted16bits",
              "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted16bits",
              "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamplesShifted16bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamplesShifted16bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamplesShifted16bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamplesShifted16bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  ready_bits = shift;
  maskbits = (uint16 )(65535 >> (16 - (int )bps));
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = (uint16 )((int )maskbits << ((16U - src_bit) - (uint32 )bps));
      if (little_endian) {
        swapbuff[1] = *src;
        swapbuff[0] = *(src + 1);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
      }
      buff1 = *((uint16 *)(swapbuff));
      if (col == start) {
        if (sindex == (int )sample) {
          buff2 = (uint16 )((int )buff1 & (65535 << (8 - shift)));
        } else {

        }
      } else {

      }
      buff1 = (uint16 )(((int )buff1 & (int )matchbits) << src_bit);
      if (ready_bits < 8) {
        buff2 = (uint16 )((int )buff2 | ((int )buff1 >> ready_bits));
      } else {
        bytebuff = (uint8 )((int )buff2 >> 8);
        tmp = dst;
        dst ++;
        *tmp = bytebuff;
        ready_bits -= 8;
        buff2 = (uint16 )(((int )buff2 << 8) | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff = (uint8 )((int )buff2 >> 8);
    tmp___0 = dst;
    dst ++;
    *tmp___0 = bytebuff;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamplesShifted24bits(uint8 *in , uint8 *out ,
                                             uint32 cols , tsample_t sample ,
                                             uint16 spp , uint16 bps ,
                                             tsample_t count , uint32 start ,
                                             uint32 end , int shift ) 
{ 
  int ready_bits ;
  int sindex ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint32 maskbits ;
  uint32 matchbits ;
  uint32 buff1 ;
  uint32 buff2 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 *src ;
  uint8 *dst ;
  unsigned char swapbuff[4] ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint8 *tmp___1 ;

  {
  ready_bits = 0;
  sindex = 0;
  maskbits = (uint32 )0;
  matchbits = (uint32 )0;
  buff1 = (uint32 )0;
  buff2 = (uint32 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )in == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted24bits",
              "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )out == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted24bits",
              "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamplesShifted24bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamplesShifted24bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamplesShifted24bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamplesShifted24bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  ready_bits = shift;
  maskbits = 4294967295U >> (32 - (int )bps);
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = maskbits << ((32U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff[3] = *src;
        swapbuff[2] = *(src + 1);
        swapbuff[1] = *(src + 2);
        swapbuff[0] = *(src + 3);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
        swapbuff[2] = *(src + 2);
        swapbuff[3] = *(src + 3);
      }
      buff1 = *((uint32 *)(swapbuff));
      if (col == start) {
        if (sindex == (int )sample) {
          buff2 = buff1 & (4294967295U << (16 - shift));
        } else {

        }
      } else {

      }
      buff1 = (buff1 & matchbits) << src_bit;
      if (ready_bits < 16) {
        bytebuff2 = (uint8 )0;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      } else {
        bytebuff1 = (uint8 )(buff2 >> 24);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 16);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        ready_bits -= 16;
        buff2 = (buff2 << 16) | (buff1 >> ready_bits);
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 24);
    tmp___1 = dst;
    dst ++;
    *tmp___1 = bytebuff1;
    buff2 <<= 8;
    bytebuff2 = bytebuff1;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamplesShifted32bits(uint8 *in , uint8 *out ,
                                             uint32 cols , tsample_t sample ,
                                             uint16 spp , uint16 bps ,
                                             tsample_t count , uint32 start ,
                                             uint32 end , int shift ) 
{ 
  int ready_bits ;
  int sindex ;
  int shift_width ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint32 longbuff1 ;
  uint32 longbuff2 ;
  uint64 maskbits ;
  uint64 matchbits ;
  uint64 buff1 ;
  uint64 buff2 ;
  uint64 buff3 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 bytebuff3 ;
  uint8 bytebuff4 ;
  uint8 *src ;
  uint8 *dst ;
  unsigned char swapbuff1[4] ;
  unsigned char swapbuff2[4] ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint8 *tmp___1 ;
  uint8 *tmp___2 ;
  uint8 *tmp___3 ;

  {
  ready_bits = 0;
  sindex = 0;
  shift_width = 0;
  longbuff1 = (uint32 )0;
  longbuff2 = (uint32 )0;
  maskbits = (uint64 )0;
  matchbits = (uint64 )0;
  buff1 = (uint64 )0;
  buff2 = (uint64 )0;
  buff3 = (uint64 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  bytebuff3 = (uint8 )0;
  bytebuff4 = (uint8 )0;
  src = in;
  dst = out;
  if ((unsigned int )in == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted32bits",
              "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )out == (unsigned int )((void *)0)) {
    TIFFError("extractContigSamplesShifted32bits",
              "Invalid input or output buffer");
    return (1);
  } else {

  }
  if (start > end) {
    TIFFError("extractContigSamplesShifted32bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else
  if (start > cols) {
    TIFFError("extractContigSamplesShifted32bits",
              "Invalid start column value %d ignored", start);
    start = (uint32 )0;
  } else {

  }
  if (end == 0U) {
    TIFFError("extractContigSamplesShifted32bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else
  if (end > cols) {
    TIFFError("extractContigSamplesShifted32bits",
              "Invalid end column value %d ignored", end);
    end = cols;
  } else {

  }
  shift_width = ((int )bps + 7) / 8 + 1;
  ready_bits = shift;
  maskbits = 0xffffffffffffffffULL >> (64 - (int )bps);
  col = start;
  while (col < end) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sindex = (int )sample;
    while (1) {
      if (sindex < (int )spp) {
        if (sindex < (int )sample + (int )count) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (sindex == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )(sindex * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )(sindex * (int )bps)) % 8U;
      }
      src = in + src_byte;
      matchbits = maskbits << ((64U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff1[3] = *src;
        swapbuff1[2] = *(src + 1);
        swapbuff1[1] = *(src + 2);
        swapbuff1[0] = *(src + 3);
      } else {
        swapbuff1[0] = *src;
        swapbuff1[1] = *(src + 1);
        swapbuff1[2] = *(src + 2);
        swapbuff1[3] = *(src + 3);
      }
      longbuff1 = *((uint32 *)(swapbuff1));
      memset((void *)(swapbuff2), '\000', sizeof(swapbuff2));
      if (little_endian) {
        swapbuff2[3] = *src;
        swapbuff2[2] = *(src + 1);
        swapbuff2[1] = *(src + 2);
        swapbuff2[0] = *(src + 3);
      } else {
        swapbuff2[0] = *src;
        swapbuff2[1] = *(src + 1);
        swapbuff2[2] = *(src + 2);
        swapbuff2[3] = *(src + 3);
      }
      longbuff2 = *((uint32 *)(swapbuff2));
      buff3 = ((uint64 )longbuff1 << 32) | (unsigned long long )longbuff2;
      if (col == start) {
        if (sindex == (int )sample) {
          buff2 = buff3 & (0xffffffffffffffffULL << (32 - shift));
        } else {

        }
      } else {

      }
      buff1 = (buff3 & matchbits) << src_bit;
      if (ready_bits < 32) {
        bytebuff4 = (uint8 )0;
        bytebuff3 = bytebuff4;
        bytebuff2 = bytebuff3;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      } else {
        bytebuff1 = (uint8 )(buff2 >> 56);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 48);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        bytebuff3 = (uint8 )(buff2 >> 40);
        tmp___1 = dst;
        dst ++;
        *tmp___1 = bytebuff3;
        bytebuff4 = (uint8 )(buff2 >> 32);
        tmp___2 = dst;
        dst ++;
        *tmp___2 = bytebuff4;
        ready_bits -= 32;
        buff2 = (buff2 << 32) | (buff1 >> ready_bits);
      }
      ready_bits += (int )bps;
      sindex ++;
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 56);
    tmp___3 = dst;
    dst ++;
    *tmp___3 = bytebuff1;
    buff2 <<= 8;
    ready_bits -= 8;
  }
  return (0);
}
}
static int extractContigSamplesToBuffer(uint8 *out , uint8 *in , uint32 rows ,
                                        uint32 cols , int outskew , int inskew ,
                                        tsample_t sample , uint16 spp ,
                                        uint16 bps , struct dump_opts *dump ) 
{ 
  int shift_width ;
  int bytes_per_sample ;
  int bytes_per_pixel ;
  uint32 src_rowsize ;
  uint32 src_offset ;
  uint32 row ;
  uint32 first_col ;
  uint32 dst_rowsize ;
  uint32 dst_offset ;
  tsample_t count ;
  uint8 *src ;
  uint8 *dst ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  first_col = (uint32 )0;
  count = (tsample_t )1;
  bytes_per_sample = ((int )bps + 7) / 8;
  bytes_per_pixel = ((int )bps * (int )spp + 7) / 8;
  if ((int )bps % 8 == 0) {
    shift_width = 0;
  } else
  if (bytes_per_pixel < bytes_per_sample + 1) {
    shift_width = bytes_per_pixel;
  } else {
    shift_width = bytes_per_sample + 1;
  }
  src_rowsize = ((uint32 )((int )bps * (int )spp) * cols + 7U) / 8U;
  dst_rowsize = ((uint32 )bps * cols + 7U) / 8U;
  if ((unsigned int )dump->outfile != (unsigned int )((void *)0)) {
    if (dump->level == 4) {
      dump_info(dump->outfile, dump->format,
                (char *)"extractContigSamplesToBuffer",
                (char *)"Sample %d, %d rows", (int )sample + 1, rows + 1U);
    } else {

    }
  } else {

  }
  row = (uint32 )0;
  while (row < rows) {
    src_offset = row * src_rowsize;
    dst_offset = row * dst_rowsize;
    src = in + src_offset;
    dst = out + dst_offset;
    switch (shift_width) {
    case 0: 
    tmp = extractContigSamplesBytes(src, dst, cols, sample, spp, bps, count,
                                    first_col, cols);
    if (tmp) {
      return (1);
    } else {

    }
    break;
    case 1: 
    tmp___0 = extractContigSamples8bits(src, dst, cols, sample, spp, bps, count,
                                        first_col, cols);
    if (tmp___0) {
      return (1);
    } else {

    }
    break;
    case 2: 
    tmp___1 = extractContigSamples16bits(src, dst, cols, sample, spp, bps,
                                         count, first_col, cols);
    if (tmp___1) {
      return (1);
    } else {

    }
    break;
    case 3: 
    tmp___2 = extractContigSamples24bits(src, dst, cols, sample, spp, bps,
                                         count, first_col, cols);
    if (tmp___2) {
      return (1);
    } else {

    }
    break;
    case 5: 
    case 4: 
    tmp___3 = extractContigSamples32bits(src, dst, cols, sample, spp, bps,
                                         count, first_col, cols);
    if (tmp___3) {
      return (1);
    } else {

    }
    break;
    default: 
    TIFFError("extractContigSamplesToBuffer", "Unsupported bit depth: %d",
              (int )bps);
    return (1);
    }
    if ((unsigned int )dump->outfile != (unsigned int )((void *)0)) {
      if (dump->level == 4) {
        dump_buffer(dump->outfile, dump->format, (uint32 )1, dst_rowsize, row,
                    dst);
      } else {

      }
    } else {

    }
    out += outskew;
    in += inskew;
    row ++;
  }
  return (0);
}
}
static void cpSeparateBufToContigBuf(uint8 *out , uint8 *in , uint32 rows ,
                                     uint32 cols , int outskew , int inskew ,
                                     tsample_t spp , int bytes_per_sample ) 
{ 
  uint32 j ;
  int n ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  int tmp___1 ;
  uint32 tmp___2 ;
  uint32 tmp___3 ;

  {
  while (1) {
    tmp___3 = rows;
    rows --;
    if (tmp___3 > 0U) {

    } else {
      break;
    }
    j = cols;
    while (1) {
      tmp___2 = j;
      j --;
      if (tmp___2 > 0U) {

      } else {
        break;
      }
      n = bytes_per_sample;
      while (1) {
        tmp___1 = n;
        n --;
        if (tmp___1) {

        } else {
          break;
        }
        tmp = out;
        out ++;
        tmp___0 = in;
        in ++;
        *tmp = *tmp___0;
      }
      out += ((int )spp - 1) * bytes_per_sample;
    }
    out += outskew;
    in += inskew;
  }
  return;
}
}
static int readContigStripsIntoBuffer(TIFF *in , uint8 *buf ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp ) 
{ 
  tsize_t scanlinesize ;
  tmsize_t tmp ;
  uint8 *bufp ;
  uint32 row ;
  char const   *tmp___0 ;
  int tmp___1 ;

  {
  tmp = TIFFScanlineSize(in);
  scanlinesize = tmp;
  bufp = buf;
  row = (uint32 )0;
  while (row < imagelength) {
    tmp___1 = TIFFReadScanline(in, (tdata_t )bufp, row, (uint16 )0);
    if (tmp___1 < 0) {
      if (! ignore) {
        tmp___0 = TIFFFileName(in);
        TIFFError(tmp___0, "Error, can\'t read scanline %lu",
                  (unsigned long )row);
        return (0);
      } else {

      }
    } else {

    }
    bufp += scanlinesize;
    row ++;
  }
  return (1);
}
}
static int combineSeparateSamples8bits(uint8 **in , uint8 *out , uint32 row ,
                                       uint32 cols , uint16 spp , uint16 bps ,
                                       FILE *dumpfile , int format , int level ) 
{ 
  int ready_bits ;
  int bytes_per_sample ;
  uint32 dst_rowsize ;
  uint32 bit_offset ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint8 maskbits ;
  uint8 matchbits ;
  uint8 buff1 ;
  uint8 buff2 ;
  tsample_t s ;
  unsigned char *src ;
  unsigned char *dst ;
  char action[32] ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;

  {
  ready_bits = 0;
  bytes_per_sample = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  maskbits = (uint8 )0;
  matchbits = (uint8 )0;
  buff1 = (uint8 )0;
  buff2 = (uint8 )0;
  src = *(in + 0);
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples8bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples8bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  dst_rowsize = (((uint32 )bps * cols) * (uint32 )spp + 7U) / 8U;
  maskbits = (uint8 )(255 >> (8 - (int )bps));
  ready_bits = 0;
  buff2 = (uint8 )0;
  buff1 = buff2;
  col = (uint32 )0;
  while (col < cols) {
    bit_offset = col * (uint32 )bps;
    src_byte = bit_offset / 8U;
    src_bit = bit_offset % 8U;
    matchbits = (uint8 )((int )maskbits << ((8U - src_bit) - (uint32 )bps));
    s = (tsample_t )0;
    while ((int )s < (int )spp) {
      src = *(in + s) + src_byte;
      buff1 = (uint8 )(((int )*src & (int )matchbits) << src_bit);
      if (ready_bits >= 8) {
        tmp = dst;
        dst ++;
        *tmp = buff2;
        buff2 = buff1;
        ready_bits -= 8;
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Flush");
      } else {
        buff2 = (uint8 )((int )buff2 | ((int )buff1 >> ready_bits));
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Update");
      }
      ready_bits += (int )bps;
      if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
        if (level == 3) {
          dump_info(dumpfile, format, (char *)"",
                    (char *)"Row %3d, Col %3d, Samples %d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                    row + 1U, col + 1U, (int )s, src_byte, src_bit, dst - out);
          dump_byte(dumpfile, format, (char *)"Match bits", matchbits);
          dump_byte(dumpfile, format, (char *)"Src   bits", *src);
          dump_byte(dumpfile, format, (char *)"Buff1 bits", buff1);
          dump_byte(dumpfile, format, (char *)"Buff2 bits", buff2);
          dump_info(dumpfile, format, (char *)"", (char *)"%s", action);
        } else {

        }
      } else {

      }
      s = (tsample_t )((int )s + 1);
    }
    col ++;
  }
  if (ready_bits > 0) {
    buff1 = (uint8 )((unsigned int )buff2 & (255U << (8 - ready_bits)));
    tmp___0 = dst;
    dst ++;
    *tmp___0 = buff1;
    if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
      if (level == 3) {
        dump_info(dumpfile, format, (char *)"",
                  (char *)"Row %3d, Col %3d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                  row + 1U, col + 1U, src_byte, src_bit, dst - out);
        dump_byte(dumpfile, format, (char *)"Final bits", buff1);
      } else {

      }
    } else {

    }
  } else {

  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 2) {
      dump_info(dumpfile, format, (char *)"combineSeparateSamples8bits",
                (char *)"Output data");
      dump_buffer(dumpfile, format, (uint32 )1, dst_rowsize, row, out);
    } else {

    }
  } else {

  }
  return (0);
}
}
static int combineSeparateSamples16bits(uint8 **in , uint8 *out , uint32 row ,
                                        uint32 cols , uint16 spp , uint16 bps ,
                                        FILE *dumpfile , int format , int level ) 
{ 
  int ready_bits ;
  int bytes_per_sample ;
  uint32 dst_rowsize ;
  uint32 bit_offset ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint16 maskbits ;
  uint16 matchbits ;
  uint16 buff1 ;
  uint16 buff2 ;
  uint8 bytebuff ;
  tsample_t s ;
  unsigned char *src ;
  unsigned char *dst ;
  unsigned char swapbuff[2] ;
  char action[8] ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;

  {
  ready_bits = 0;
  bytes_per_sample = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  maskbits = (uint16 )0;
  matchbits = (uint16 )0;
  buff1 = (uint16 )0;
  buff2 = (uint16 )0;
  bytebuff = (uint8 )0;
  src = *(in + 0);
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples16bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples16bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  dst_rowsize = (((uint32 )bps * cols) * (uint32 )spp + 7U) / 8U;
  maskbits = (uint16 )(65535 >> (16 - (int )bps));
  ready_bits = 0;
  buff2 = (uint16 )0;
  buff1 = buff2;
  col = (uint32 )0;
  while (col < cols) {
    bit_offset = col * (uint32 )bps;
    src_byte = bit_offset / 8U;
    src_bit = bit_offset % 8U;
    matchbits = (uint16 )((int )maskbits << ((16U - src_bit) - (uint32 )bps));
    s = (tsample_t )0;
    while ((int )s < (int )spp) {
      src = *(in + s) + src_byte;
      if (little_endian) {
        swapbuff[1] = *src;
        swapbuff[0] = *(src + 1);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
      }
      buff1 = *((uint16 *)(swapbuff));
      buff1 = (uint16 )(((int )buff1 & (int )matchbits) << src_bit);
      if (ready_bits >= 8) {
        bytebuff = (uint8 )((int )buff2 >> 8);
        tmp = dst;
        dst ++;
        *tmp = bytebuff;
        ready_bits -= 8;
        buff2 = (uint16 )(((int )buff2 << 8) | ((int )buff1 >> ready_bits));
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Flush");
      } else {
        bytebuff = (uint8 )0;
        buff2 = (uint16 )((int )buff2 | ((int )buff1 >> ready_bits));
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Update");
      }
      ready_bits += (int )bps;
      if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
        if (level == 3) {
          dump_info(dumpfile, format, (char *)"",
                    (char *)"Row %3d, Col %3d, Samples %d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                    row + 1U, col + 1U, (int )s, src_byte, src_bit, dst - out);
          dump_short(dumpfile, format, (char *)"Match bits", matchbits);
          dump_data(dumpfile, format, (char *)"Src   bits", src, (uint32 )2);
          dump_short(dumpfile, format, (char *)"Buff1 bits", buff1);
          dump_short(dumpfile, format, (char *)"Buff2 bits", buff2);
          dump_byte(dumpfile, format, (char *)"Write byte", bytebuff);
          dump_info(dumpfile, format, (char *)"", (char *)"Ready bits:  %d, %s",
                    ready_bits, action);
        } else {

        }
      } else {

      }
      s = (tsample_t )((int )s + 1);
    }
    col ++;
  }
  if (ready_bits > 0) {
    bytebuff = (uint8 )((int )buff2 >> 8);
    tmp___0 = dst;
    dst ++;
    *tmp___0 = bytebuff;
    if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
      if (level == 3) {
        dump_info(dumpfile, format, (char *)"",
                  (char *)"Row %3d, Col %3d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                  row + 1U, col + 1U, src_byte, src_bit, dst - out);
        dump_byte(dumpfile, format, (char *)"Final bits", bytebuff);
      } else {

      }
    } else {

    }
  } else {

  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 2) {
      dump_info(dumpfile, format, (char *)"combineSeparateSamples16bits",
                (char *)"Output data");
      dump_buffer(dumpfile, format, (uint32 )1, dst_rowsize, row, out);
    } else {

    }
  } else {

  }
  return (0);
}
}
static int combineSeparateSamples24bits(uint8 **in , uint8 *out , uint32 row ,
                                        uint32 cols , uint16 spp , uint16 bps ,
                                        FILE *dumpfile , int format , int level ) 
{ 
  int ready_bits ;
  int bytes_per_sample ;
  uint32 dst_rowsize ;
  uint32 bit_offset ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 maskbits ;
  uint32 matchbits ;
  uint32 buff1 ;
  uint32 buff2 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  tsample_t s ;
  unsigned char *src ;
  unsigned char *dst ;
  unsigned char swapbuff[4] ;
  char action[8] ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;

  {
  ready_bits = 0;
  bytes_per_sample = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  maskbits = (uint32 )0;
  matchbits = (uint32 )0;
  buff1 = (uint32 )0;
  buff2 = (uint32 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  src = *(in + 0);
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples24bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples24bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  dst_rowsize = ((uint32 )bps * cols + 7U) / 8U;
  maskbits = 4294967295U >> (32 - (int )bps);
  ready_bits = 0;
  buff2 = (uint32 )0;
  buff1 = buff2;
  col = (uint32 )0;
  while (col < cols) {
    bit_offset = col * (uint32 )bps;
    src_byte = bit_offset / 8U;
    src_bit = bit_offset % 8U;
    matchbits = maskbits << ((32U - src_bit) - (uint32 )bps);
    s = (tsample_t )0;
    while ((int )s < (int )spp) {
      src = *(in + s) + src_byte;
      if (little_endian) {
        swapbuff[3] = *src;
        swapbuff[2] = *(src + 1);
        swapbuff[1] = *(src + 2);
        swapbuff[0] = *(src + 3);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
        swapbuff[2] = *(src + 2);
        swapbuff[3] = *(src + 3);
      }
      buff1 = *((uint32 *)(swapbuff));
      buff1 = (buff1 & matchbits) << src_bit;
      if (ready_bits >= 16) {
        bytebuff1 = (uint8 )(buff2 >> 24);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 16);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        ready_bits -= 16;
        buff2 = (buff2 << 16) | (buff1 >> ready_bits);
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Flush");
      } else {
        bytebuff2 = (uint8 )0;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Update");
      }
      ready_bits += (int )bps;
      if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
        if (level == 3) {
          dump_info(dumpfile, format, (char *)"",
                    (char *)"Row %3d, Col %3d, Samples %d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                    row + 1U, col + 1U, (int )s, src_byte, src_bit, dst - out);
          dump_long(dumpfile, format, (char *)"Match bits ", matchbits);
          dump_data(dumpfile, format, (char *)"Src   bits ", src, (uint32 )4);
          dump_long(dumpfile, format, (char *)"Buff1 bits ", buff1);
          dump_long(dumpfile, format, (char *)"Buff2 bits ", buff2);
          dump_byte(dumpfile, format, (char *)"Write bits1", bytebuff1);
          dump_byte(dumpfile, format, (char *)"Write bits2", bytebuff2);
          dump_info(dumpfile, format, (char *)"",
                    (char *)"Ready bits:   %d, %s", ready_bits, action);
        } else {

        }
      } else {

      }
      s = (tsample_t )((int )s + 1);
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 24);
    tmp___1 = dst;
    dst ++;
    *tmp___1 = bytebuff1;
    buff2 <<= 8;
    bytebuff2 = bytebuff1;
    ready_bits -= 8;
  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 3) {
      dump_info(dumpfile, format, (char *)"",
                (char *)"Row %3d, Col %3d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                row + 1U, col + 1U, src_byte, src_bit, dst - out);
      dump_long(dumpfile, format, (char *)"Match bits ", matchbits);
      dump_data(dumpfile, format, (char *)"Src   bits ", src, (uint32 )4);
      dump_long(dumpfile, format, (char *)"Buff1 bits ", buff1);
      dump_long(dumpfile, format, (char *)"Buff2 bits ", buff2);
      dump_byte(dumpfile, format, (char *)"Write bits1", bytebuff1);
      dump_byte(dumpfile, format, (char *)"Write bits2", bytebuff2);
      dump_info(dumpfile, format, (char *)"", (char *)"Ready bits:  %2d",
                ready_bits);
    } else {

    }
  } else {

  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 2) {
      dump_info(dumpfile, format, (char *)"combineSeparateSamples24bits",
                (char *)"Output data");
      dump_buffer(dumpfile, format, (uint32 )1, dst_rowsize, row, out);
    } else {

    }
  } else {

  }
  return (0);
}
}
static int combineSeparateSamples32bits(uint8 **in , uint8 *out , uint32 row ,
                                        uint32 cols , uint16 spp , uint16 bps ,
                                        FILE *dumpfile , int format , int level ) 
{ 
  int ready_bits ;
  int bytes_per_sample ;
  int shift_width ;
  uint32 dst_rowsize ;
  uint32 bit_offset ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 col ;
  uint32 longbuff1 ;
  uint32 longbuff2 ;
  uint64 maskbits ;
  uint64 matchbits ;
  uint64 buff1 ;
  uint64 buff2 ;
  uint64 buff3 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 bytebuff3 ;
  uint8 bytebuff4 ;
  tsample_t s ;
  unsigned char *src ;
  unsigned char *dst ;
  unsigned char swapbuff1[4] ;
  unsigned char swapbuff2[4] ;
  char action[8] ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;

  {
  ready_bits = 0;
  bytes_per_sample = 0;
  shift_width = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  longbuff1 = (uint32 )0;
  longbuff2 = (uint32 )0;
  maskbits = (uint64 )0;
  matchbits = (uint64 )0;
  buff1 = (uint64 )0;
  buff2 = (uint64 )0;
  buff3 = (uint64 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  bytebuff3 = (uint8 )0;
  bytebuff4 = (uint8 )0;
  src = *(in + 0);
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples32bits", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamples32bits", "Invalid input or output buffer");
    return (1);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  dst_rowsize = ((uint32 )bps * cols + 7U) / 8U;
  maskbits = 0xffffffffffffffffULL >> (64 - (int )bps);
  shift_width = ((int )bps + 7) / 8 + 1;
  ready_bits = 0;
  buff2 = (uint64 )0;
  buff1 = buff2;
  col = (uint32 )0;
  while (col < cols) {
    bit_offset = col * (uint32 )bps;
    src_byte = bit_offset / 8U;
    src_bit = bit_offset % 8U;
    matchbits = maskbits << ((64U - src_bit) - (uint32 )bps);
    s = (tsample_t )0;
    while ((int )s < (int )spp) {
      src = *(in + s) + src_byte;
      if (little_endian) {
        swapbuff1[3] = *src;
        swapbuff1[2] = *(src + 1);
        swapbuff1[1] = *(src + 2);
        swapbuff1[0] = *(src + 3);
      } else {
        swapbuff1[0] = *src;
        swapbuff1[1] = *(src + 1);
        swapbuff1[2] = *(src + 2);
        swapbuff1[3] = *(src + 3);
      }
      longbuff1 = *((uint32 *)(swapbuff1));
      memset((void *)(swapbuff2), '\000', sizeof(swapbuff2));
      if (little_endian) {
        swapbuff2[3] = *src;
        swapbuff2[2] = *(src + 1);
        swapbuff2[1] = *(src + 2);
        swapbuff2[0] = *(src + 3);
      } else {
        swapbuff2[0] = *src;
        swapbuff2[1] = *(src + 1);
        swapbuff2[2] = *(src + 2);
        swapbuff2[3] = *(src + 3);
      }
      longbuff2 = *((uint32 *)(swapbuff2));
      buff3 = ((uint64 )longbuff1 << 32) | (unsigned long long )longbuff2;
      buff1 = (buff3 & matchbits) << src_bit;
      if (ready_bits >= 32) {
        bytebuff1 = (uint8 )(buff2 >> 56);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 48);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        bytebuff3 = (uint8 )(buff2 >> 40);
        tmp___1 = dst;
        dst ++;
        *tmp___1 = bytebuff3;
        bytebuff4 = (uint8 )(buff2 >> 32);
        tmp___2 = dst;
        dst ++;
        *tmp___2 = bytebuff4;
        ready_bits -= 32;
        buff2 = (buff2 << 32) | (buff1 >> ready_bits);
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Flush");
      } else {
        bytebuff4 = (uint8 )0;
        bytebuff3 = bytebuff4;
        bytebuff2 = bytebuff3;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
        strcpy((char */* __restrict  */)(action),
               (char const   */* __restrict  */)"Update");
      }
      ready_bits += (int )bps;
      if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
        if (level == 3) {
          dump_info(dumpfile, format, (char *)"",
                    (char *)"Row %3d, Col %3d, Sample %d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                    row + 1U, col + 1U, (int )s, src_byte, src_bit, dst - out);
          dump_wide(dumpfile, format, (char *)"Match bits ", matchbits);
          dump_data(dumpfile, format, (char *)"Src   bits ", src, (uint32 )8);
          dump_wide(dumpfile, format, (char *)"Buff1 bits ", buff1);
          dump_wide(dumpfile, format, (char *)"Buff2 bits ", buff2);
          dump_info(dumpfile, format, (char *)"",
                    (char *)"Ready bits:   %d, %s", ready_bits, action);
        } else {

        }
      } else {

      }
      s = (tsample_t )((int )s + 1);
    }
    col ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 56);
    tmp___3 = dst;
    dst ++;
    *tmp___3 = bytebuff1;
    buff2 <<= 8;
    ready_bits -= 8;
  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 3) {
      dump_info(dumpfile, format, (char *)"",
                (char *)"Row %3d, Col %3d, Src byte offset %3d  bit offset %2d  Dst offset %3d",
                row + 1U, col + 1U, src_byte, src_bit, dst - out);
      dump_long(dumpfile, format, (char *)"Match bits ", (uint32 )matchbits);
      dump_data(dumpfile, format, (char *)"Src   bits ", src, (uint32 )4);
      dump_long(dumpfile, format, (char *)"Buff1 bits ", (uint32 )buff1);
      dump_long(dumpfile, format, (char *)"Buff2 bits ", (uint32 )buff2);
      dump_byte(dumpfile, format, (char *)"Write bits1", bytebuff1);
      dump_byte(dumpfile, format, (char *)"Write bits2", bytebuff2);
      dump_info(dumpfile, format, (char *)"", (char *)"Ready bits:  %2d",
                ready_bits);
    } else {

    }
  } else {

  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 2) {
      dump_info(dumpfile, format, (char *)"combineSeparateSamples32bits",
                (char *)"Output data");
      dump_buffer(dumpfile, format, (uint32 )1, dst_rowsize, row, out);
    } else {

    }
  } else {

  }
  return (0);
}
}
static int combineSeparateSamplesBytes(unsigned char **srcbuffs ,
                                       unsigned char *out , uint32 row ,
                                       uint32 width , unsigned short spp ,
                                       uint16 bps , FILE *dumpfile ,
                                       int format , int level ) 
{ 
  int i ;
  int bytes_per_sample ;
  int bytes_per_pixel ;
  int dst_rowsize ;
  int shift_width ;
  uint32 col ;
  uint32 col_offset ;
  unsigned char *src ;
  unsigned char *dst ;
  tsample_t s ;

  {
  src = *(srcbuffs + 0);
  dst = out;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamplesBytes", "Invalid buffer address");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("combineSeparateSamplesBytes", "Invalid buffer address");
    return (1);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  bytes_per_pixel = ((int )bps * (int )spp + 7) / 8;
  if (bytes_per_pixel < bytes_per_sample + 1) {
    shift_width = bytes_per_sample;
  } else {
    shift_width = bytes_per_pixel;
  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 2) {
      s = (tsample_t )0;
      while ((int )s < (int )spp) {
        dump_info(dumpfile, format, (char *)"combineSeparateSamplesBytes",
                  (char *)"Input data, Sample %d", (int )s);
        dump_buffer(dumpfile, format, (uint32 )1, width, row, *(srcbuffs + s));
        s = (tsample_t )((int )s + 1);
      }
    } else {

    }
  } else {

  }
  dst_rowsize = (int )(((uint32 )((int )bps * (int )spp) * width + 7U) / 8U);
  col = (uint32 )0;
  while (col < width) {
    col_offset = col * (uint32 )((int )bps / 8);
    s = (tsample_t )0;
    while (1) {
      if ((int )s < (int )spp) {
        if ((int )s < 8) {

        } else {
          break;
        }
      } else {
        break;
      }
      src = *(srcbuffs + s) + col_offset;
      i = 0;
      while (i < bytes_per_sample) {
        *(dst + i) = *(src + i);
        i ++;
      }
      src += bytes_per_sample;
      dst += bytes_per_sample;
      s = (tsample_t )((int )s + 1);
    }
    col ++;
  }
  if ((unsigned int )dumpfile != (unsigned int )((void *)0)) {
    if (level == 2) {
      dump_info(dumpfile, format, (char *)"combineSeparateSamplesBytes",
                (char *)"Output data, combined samples");
      dump_buffer(dumpfile, format, (uint32 )1, (uint32 )dst_rowsize, row, out);
    } else {

    }
  } else {

  }
  return (0);
}
}
static int readSeparateStripsIntoBuffer(TIFF *in , uint8 *obuf , uint32 length ,
                                        uint32 width , unsigned short spp ,
                                        struct dump_opts *dump ) 
{ 
  int i ;
  int bytes_per_sample ;
  int bytes_per_pixel ;
  int shift_width ;
  uint16 bps ;
  uint32 row ;
  uint32 src_rowsize ;
  uint32 dst_rowsize ;
  tsample_t s ;
  tsize_t scanlinesize ;
  tmsize_t tmp ;
  unsigned char *srcbuffs[8] ;
  unsigned char *buff ;
  unsigned char *dst ;
  void *tmp___0 ;
  char const   *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  tmp = TIFFScanlineSize(in);
  scanlinesize = tmp;
  buff = (unsigned char *)((void *)0);
  dst = (unsigned char *)((void *)0);
  TIFFGetField(in, (uint32 )258, & bps);
  if ((unsigned int )obuf == (unsigned int )((void *)0)) {
    TIFFError("readSeparateStripsIntoBuffer", "Invalid buffer argument");
    return (0);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  bytes_per_pixel = ((int )bps * (int )spp + 7) / 8;
  if (bytes_per_pixel < bytes_per_sample + 1) {
    shift_width = bytes_per_pixel;
  } else {
    shift_width = bytes_per_sample + 1;
  }
  src_rowsize = ((uint32 )bps * width + 7U) / 8U;
  dst_rowsize = (((uint32 )bps * width) * (uint32 )spp + 7U) / 8U;
  dst = obuf;
  if ((unsigned int )dump->infile != (unsigned int )((void *)0)) {
    if (dump->level == 3) {
      dump_info(dump->infile, dump->format, (char *)"",
                (char *)"Image width %d, length %d, Scanline size, %4d bytes",
                width, length, scanlinesize);
      dump_info(dump->infile, dump->format, (char *)"",
                (char *)"Bits per sample %d, Samples per pixel %d, Shift width %d",
                (int )bps, (int )spp, shift_width);
    } else {

    }
  } else {

  }
  s = (tsample_t )0;
  {
  memset(srcbuffs, 0, sizeof(srcbuffs));
  while (1) {
    if ((int )s < (int )spp) {
      if ((int )s < 8) {

      } else {
        break;
      }
    } else {
      break;
    }
    srcbuffs[s] = (unsigned char *)((void *)0);
    tmp___0 = _TIFFmalloc((tmsize_t )src_rowsize);
    buff = (unsigned char *)tmp___0;
    if (! buff) {
      TIFFError("readSeparateStripsIntoBuffer",
                "Unable to allocate read buffer for sample %d", (int )s);
      i = 0;
      while (i < (int )s) {
        _TIFFfree((void *)srcbuffs[i]);
        i ++;
      }
      return (0);
    } else {

    }
    srcbuffs[s] = buff;
    s = (tsample_t )((int )s + 1);
  }
  }
  row = (uint32 )0;
  while (row < length) {
    s = (tsample_t )0;
    while (1) {
      if ((int )s < (int )spp) {
        if ((int )s < 8) {

        } else {
          break;
        }
      } else {
        break;
      }
      buff = srcbuffs[s];
      tmp___2 = TIFFReadScanline(in, (void *)buff, row, s);
      if (tmp___2 < 0) {
        if (! ignore) {
          tmp___1 = TIFFFileName(in);
          TIFFError(tmp___1, "Error, can\'t read scanline %lu for sample %d",
                    (unsigned long )row, (int )s + 1);
          i = 0;
          while (i < (int )s) {
            _TIFFfree((void *)srcbuffs[i]);
            i ++;
          }
          return (0);
        } else {

        }
      } else {

      }
      s = (tsample_t )((int )s + 1);
    }
    dst = obuf + row * dst_rowsize;
    if ((int )bps % 8 == 0) {
      tmp___3 = combineSeparateSamplesBytes(srcbuffs, dst, row, width, spp, bps,
                                            dump->infile, dump->format,
                                            dump->level);
      if (tmp___3) {
        i = 0;
        while (i < (int )spp) {
          _TIFFfree((void *)srcbuffs[i]);
          i ++;
        }
        return (0);
      } else {

      }
    } else {
      switch (shift_width) {
      case 1: 
      tmp___4 = combineSeparateSamples8bits(srcbuffs, dst, row, width, spp, bps,
                                            dump->infile, dump->format,
                                            dump->level);
      if (tmp___4) {
        i = 0;
        while (i < (int )spp) {
          _TIFFfree((void *)srcbuffs[i]);
          i ++;
        }
        return (0);
      } else {

      }
      break;
      case 2: 
      tmp___5 = combineSeparateSamples16bits(srcbuffs, dst, row, width, spp,
                                             bps, dump->infile, dump->format,
                                             dump->level);
      if (tmp___5) {
        i = 0;
        while (i < (int )spp) {
          _TIFFfree((void *)srcbuffs[i]);
          i ++;
        }
        return (0);
      } else {

      }
      break;
      case 3: 
      tmp___6 = combineSeparateSamples24bits(srcbuffs, dst, row, width, spp,
                                             bps, dump->infile, dump->format,
                                             dump->level);
      if (tmp___6) {
        i = 0;
        while (i < (int )spp) {
          _TIFFfree((void *)srcbuffs[i]);
          i ++;
        }
        return (0);
      } else {

      }
      break;
      case 8: 
      case 7: 
      case 6: 
      case 5: 
      case 4: 
      tmp___7 = combineSeparateSamples32bits(srcbuffs, dst, row, width, spp,
                                             bps, dump->infile, dump->format,
                                             dump->level);
      if (tmp___7) {
        i = 0;
        while (i < (int )spp) {
          _TIFFfree((void *)srcbuffs[i]);
          i ++;
        }
        return (0);
      } else {

      }
      break;
      default: 
      TIFFError("readSeparateStripsIntoBuffer", "Unsupported bit depth: %d",
                (int )bps);
      i = 0;
      while (i < (int )spp) {
        _TIFFfree((void *)srcbuffs[i]);
        i ++;
      }
      return (0);
      }
    }
    row ++;
  }
  s = (tsample_t )0;
  while (1) {
    if ((int )s < (int )spp) {
      if ((int )s < 8) {

      } else {
        break;
      }
    } else {
      break;
    }
    buff = srcbuffs[s];
    if ((unsigned int )buff != (unsigned int )((void *)0)) {
      _TIFFfree((void *)buff);
    } else {

    }
    s = (tsample_t )((int )s + 1);
  }
  return (1);
}
}
static int get_page_geometry(char *name , struct pagedef *page ) 
{ 
  char *ptr ;
  int n ;
  int __res ;
  int __c ;
  __int32_t const   **tmp ;
  __int32_t const   **tmp___0 ;
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

  {
  ptr = name;
  while (*ptr) {
    if (sizeof((int )*ptr) > 1U) {
      __res = tolower((int )*ptr);
    } else {
      tmp___0 = __ctype_tolower_loc();
      __res = (int )*(*tmp___0 + (int )*ptr);
    }
    *ptr = (char )__res;
    ptr ++;
  }
  n = 0;
  while (n < 49) {
    if (0) {
      __s1_len = strlen((char const   *)name);
      __s2_len = strlen((char const   *)(PaperTable[n].name));
      if (! ((size_t )((void const   *)(name + 1)) - (size_t )((void const   *)name) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(PaperTable[n].name + 1)) - (size_t )((void const   *)(PaperTable[n].name)) == 1U)) {
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
        tmp___2 = __builtin_strcmp((char const   *)name,
                                   (char const   *)(PaperTable[n].name));
        tmp___6 = tmp___2;
      } else {
        tmp___5 = __builtin_strcmp((char const   *)name,
                                   (char const   *)(PaperTable[n].name));
        tmp___6 = tmp___5;
      }
    } else {
      tmp___5 = __builtin_strcmp((char const   *)name,
                                 (char const   *)(PaperTable[n].name));
      tmp___6 = tmp___5;
    }
    if (tmp___6 == 0) {
      page->width = PaperTable[n].width;
      page->length = PaperTable[n].length;
      __builtin_strncpy(page->name, (char const   *)(PaperTable[n].name), 15U);
      page->name[15] = (char )'\000';
      return (0);
    } else {

    }
    n ++;
  }
  return (1);
}
}
static void initPageSetup(struct pagedef *page , struct pageseg *pagelist ,
                          struct buffinfo *seg_buffs ) 
{ 
  int i ;

  {
  strcpy((char */* __restrict  */)(page->name),
         (char const   */* __restrict  */)"");
  page->mode = (uint32 )0;
  page->res_unit = (uint16 )1;
  page->hres = 0.0;
  page->vres = 0.0;
  page->width = 0.0;
  page->length = 0.0;
  page->hmargin = 0.0;
  page->vmargin = 0.0;
  page->rows = 0U;
  page->cols = 0U;
  page->orient = 0U;
  i = 0;
  while (i < 32) {
    (pagelist + i)->x1 = (uint32 )0;
    (pagelist + i)->x2 = (uint32 )0;
    (pagelist + i)->y1 = (uint32 )0;
    (pagelist + i)->y2 = (uint32 )0;
    (pagelist + i)->buffsize = (uint32 )0;
    (pagelist + i)->position = 0;
    (pagelist + i)->total = 0;
    i ++;
  }
  i = 0;
  while (i < 8) {
    (seg_buffs + i)->size = (uint32 )0;
    (seg_buffs + i)->buffer = (unsigned char *)((void *)0);
    i ++;
  }
  return;
}
}
static void initImageData(struct image_data *image ) 
{ 


  {
  image->xres = (float )0.0;
  image->yres = (float )0.0;
  image->width = (uint32 )0;
  image->length = (uint32 )0;
  image->res_unit = (uint16 )1;
  image->bps = (uint16 )0;
  image->spp = (uint16 )0;
  image->planar = (uint16 )0;
  image->photometric = (uint16 )0;
  image->orientation = (uint16 )0;
  image->adjustments = (uint16 )0;
  return;
}
}
static void initCropMasks(struct crop_mask *cps ) 
{ 
  int i ;

  {
  cps->crop_mode = (uint16 )0;
  cps->res_unit = (uint16 )1;
  cps->edge_ref = (uint16 )1;
  cps->width = (double )0;
  cps->length = (double )0;
  i = 0;
  while (i < 4) {
    cps->margins[i] = 0.0;
    i ++;
  }
  cps->bufftotal = (uint32 )0;
  cps->combined_width = (uint32 )0;
  cps->combined_length = (uint32 )0;
  cps->rotation = (uint16 )0;
  cps->photometric = (uint16 )11;
  cps->mirror = (uint16 )0;
  cps->invert = (uint16 )0;
  cps->zones = (uint16 )((uint32 )0);
  cps->regions = (uint16 )((uint32 )0);
  i = 0;
  while (i < 8) {
    cps->corners[i].X1 = 0.0;
    cps->corners[i].X2 = 0.0;
    cps->corners[i].Y1 = 0.0;
    cps->corners[i].Y2 = 0.0;
    cps->regionlist[i].x1 = (uint32 )0;
    cps->regionlist[i].x2 = (uint32 )0;
    cps->regionlist[i].y1 = (uint32 )0;
    cps->regionlist[i].y2 = (uint32 )0;
    cps->regionlist[i].width = (uint32 )0;
    cps->regionlist[i].length = (uint32 )0;
    cps->regionlist[i].buffsize = (uint32 )0;
    cps->regionlist[i].buffptr = (unsigned char *)((void *)0);
    cps->zonelist[i].position = 0;
    cps->zonelist[i].total = 0;
    i ++;
  }
  cps->exp_mode = (uint16 )0;
  cps->img_mode = (uint16 )0;
  return;
}
}
static void initDumpOptions(struct dump_opts *dump ) 
{ 


  {
  dump->debug = 0;
  dump->format = 0;
  dump->level = 1;
  sprintf((char */* __restrict  */)(dump->mode),
          (char const   */* __restrict  */)"w");
  memset((void *)(dump->infilename), '\000', (size_t )4097);
  memset((void *)(dump->outfilename), '\000', (size_t )4097);
  dump->infile = (FILE *)((void *)0);
  dump->outfile = (FILE *)((void *)0);
  return;
}
}
static int computeInputPixelOffsets(struct crop_mask *crop ,
                                    struct image_data *image ,
                                    struct offset *off ) 
{ 
  double scale ;
  float xres ;
  float yres ;
  uint32 tmargin ;
  uint32 bmargin ;
  uint32 lmargin ;
  uint32 rmargin ;
  uint32 startx ;
  uint32 endx ;
  uint32 starty ;
  uint32 endy ;
  uint32 width ;
  uint32 length ;
  uint32 crop_width ;
  uint32 crop_length ;
  uint32 i ;
  uint32 max_width ;
  uint32 max_length ;
  uint32 zwidth ;
  uint32 zlength ;
  uint32 buffsize ;
  uint32 x1 ;
  uint32 x2 ;
  uint32 y1___0 ;
  uint32 y2 ;

  {
  if ((int )image->res_unit != 2) {
    if ((int )image->res_unit != 3) {
      xres = (float )1.0;
      yres = (float )1.0;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    if (image->xres == (float )0) {
      goto _L;
    } else
    if (image->yres == (float )0) {
      _L: /* CIL Label */ 
      if ((int )crop->crop_mode & 16) {
        TIFFError("computeInputPixelOffsets",
                  "Cannot compute margins or fixed size sections without image resolution");
        TIFFError("computeInputPixelOffsets",
                  "Specify units in pixels and try again");
        return (-1);
      } else
      if ((int )crop->crop_mode & 1) {
        TIFFError("computeInputPixelOffsets",
                  "Cannot compute margins or fixed size sections without image resolution");
        TIFFError("computeInputPixelOffsets",
                  "Specify units in pixels and try again");
        return (-1);
      } else
      if ((int )crop->crop_mode & 4) {
        TIFFError("computeInputPixelOffsets",
                  "Cannot compute margins or fixed size sections without image resolution");
        TIFFError("computeInputPixelOffsets",
                  "Specify units in pixels and try again");
        return (-1);
      } else
      if ((int )crop->crop_mode & 2) {
        TIFFError("computeInputPixelOffsets",
                  "Cannot compute margins or fixed size sections without image resolution");
        TIFFError("computeInputPixelOffsets",
                  "Specify units in pixels and try again");
        return (-1);
      } else {

      }
    } else {

    }
    xres = image->xres;
    yres = image->yres;
  }
  scale = 1.0;
  switch ((int )crop->res_unit) {
  case 3: 
  if ((int )image->res_unit == 2) {
    scale = 1.0 / 2.54;
  } else {

  }
  break;
  case 2: 
  if ((int )image->res_unit == 3) {
    scale = 2.54;
  } else {

  }
  break;
  default: 
  case 1: 
  break;
  }
  if ((int )crop->crop_mode & 16) {
    max_length = (uint32 )0;
    max_width = max_length;
    i = (uint32 )0;
    while (i < (uint32 )crop->regions) {
      if ((int )crop->res_unit == 2) {
        x1 = (uint32 )((crop->corners[i].X1 * scale) * (double )xres);
        x2 = (uint32 )((crop->corners[i].X2 * scale) * (double )xres);
        y1___0 = (uint32 )((crop->corners[i].Y1 * scale) * (double )yres);
        y2 = (uint32 )((crop->corners[i].Y2 * scale) * (double )yres);
      } else
      if ((int )crop->res_unit == 3) {
        x1 = (uint32 )((crop->corners[i].X1 * scale) * (double )xres);
        x2 = (uint32 )((crop->corners[i].X2 * scale) * (double )xres);
        y1___0 = (uint32 )((crop->corners[i].Y1 * scale) * (double )yres);
        y2 = (uint32 )((crop->corners[i].Y2 * scale) * (double )yres);
      } else {
        x1 = (uint32 )crop->corners[i].X1;
        x2 = (uint32 )crop->corners[i].X2;
        y1___0 = (uint32 )crop->corners[i].Y1;
        y2 = (uint32 )crop->corners[i].Y2;
      }
      if (x1 < 1U) {
        crop->regionlist[i].x1 = (uint32 )0;
      } else {
        crop->regionlist[i].x1 = x1 - 1U;
      }
      if (x2 > image->width - 1U) {
        crop->regionlist[i].x2 = image->width - 1U;
      } else {
        crop->regionlist[i].x2 = x2 - 1U;
      }
      zwidth = (crop->regionlist[i].x2 - crop->regionlist[i].x1) + 1U;
      if (y1___0 < 1U) {
        crop->regionlist[i].y1 = (uint32 )0;
      } else {
        crop->regionlist[i].y1 = y1___0 - 1U;
      }
      if (y2 > image->length - 1U) {
        crop->regionlist[i].y2 = image->length - 1U;
      } else {
        crop->regionlist[i].y2 = y2 - 1U;
      }
      zlength = (crop->regionlist[i].y2 - crop->regionlist[i].y1) + 1U;
      if (zwidth > max_width) {
        max_width = zwidth;
      } else {

      }
      if (zlength > max_length) {
        max_length = zlength;
      } else {

      }
      buffsize = (((zwidth * (uint32 )image->bps) * (uint32 )image->spp + 7U) / 8U) * (zlength + 1U);
      crop->regionlist[i].buffsize = buffsize;
      crop->bufftotal += buffsize;
      if ((int )crop->img_mode == 0) {
        switch ((int )crop->edge_ref) {
        case 4: 
        case 2: 
        crop->combined_length = zlength;
        crop->combined_width += zwidth;
        break;
        default: 
        case 1: 
        case 3: 
        crop->combined_width = zwidth;
        crop->combined_length += zlength;
        break;
        }
      } else {

      }
      i ++;
    }
    return (0);
  } else {

  }
  if ((int )crop->crop_mode & 1) {
    if ((int )crop->res_unit != 2) {
      if ((int )crop->res_unit != 3) {
        tmargin = (uint32 )crop->margins[0];
        lmargin = (uint32 )crop->margins[1];
        bmargin = (uint32 )crop->margins[2];
        rmargin = (uint32 )crop->margins[3];
      } else {
        tmargin = (uint32 )((crop->margins[0] * scale) * (double )yres);
        lmargin = (uint32 )((crop->margins[1] * scale) * (double )xres);
        bmargin = (uint32 )((crop->margins[2] * scale) * (double )yres);
        rmargin = (uint32 )((crop->margins[3] * scale) * (double )xres);
      }
    } else {
      tmargin = (uint32 )((crop->margins[0] * scale) * (double )yres);
      lmargin = (uint32 )((crop->margins[1] * scale) * (double )xres);
      bmargin = (uint32 )((crop->margins[2] * scale) * (double )yres);
      rmargin = (uint32 )((crop->margins[3] * scale) * (double )xres);
    }
    if (lmargin + rmargin > image->width) {
      TIFFError("computeInputPixelOffsets",
                "Combined left and right margins exceed image width");
      lmargin = (uint32 )0;
      rmargin = (uint32 )0;
      return (-1);
    } else {

    }
    if (tmargin + bmargin > image->length) {
      TIFFError("computeInputPixelOffsets",
                "Combined top and bottom margins exceed image length");
      tmargin = (uint32 )0;
      bmargin = (uint32 )0;
      return (-1);
    } else {

    }
  } else {
    tmargin = (uint32 )0;
    lmargin = (uint32 )0;
    bmargin = (uint32 )0;
    rmargin = (uint32 )0;
  }
  if ((int )crop->res_unit != 2) {
    if ((int )crop->res_unit != 3) {
      if ((int )crop->crop_mode & 2) {
        width = (uint32 )crop->width;
      } else {
        width = (image->width - lmargin) - rmargin;
      }
      if ((int )crop->crop_mode & 4) {
        length = (uint32 )crop->length;
      } else {
        length = (image->length - tmargin) - bmargin;
      }
    } else {
      goto _L___1;
    }
  } else {
    _L___1: /* CIL Label */ 
    if ((int )crop->crop_mode & 2) {
      width = (uint32 )((crop->width * scale) * (double )image->xres);
    } else {
      width = (image->width - lmargin) - rmargin;
    }
    if ((int )crop->crop_mode & 4) {
      length = (uint32 )((crop->length * scale) * (double )image->yres);
    } else {
      length = (image->length - tmargin) - bmargin;
    }
  }
  off->tmargin = tmargin;
  off->bmargin = bmargin;
  off->lmargin = lmargin;
  off->rmargin = rmargin;
  switch ((int )crop->edge_ref) {
  case 3: 
  startx = lmargin;
  if (startx + width >= image->width - rmargin) {
    endx = (image->width - rmargin) - 1U;
  } else {
    endx = (startx + width) - 1U;
  }
  endy = (image->length - bmargin) - 1U;
  if (endy - length <= tmargin) {
    starty = tmargin;
  } else {
    starty = (endy - length) + 1U;
  }
  break;
  case 4: 
  endx = (image->width - rmargin) - 1U;
  if (endx - width <= lmargin) {
    startx = lmargin;
  } else {
    startx = (endx - width) + 1U;
  }
  starty = tmargin;
  if (starty + length >= image->length - bmargin) {
    endy = (image->length - bmargin) - 1U;
  } else {
    endy = (starty + length) - 1U;
  }
  break;
  default: 
  case 2: 
  case 1: 
  startx = lmargin;
  if (startx + width >= image->width - rmargin) {
    endx = (image->width - rmargin) - 1U;
  } else {
    endx = (startx + width) - 1U;
  }
  starty = tmargin;
  if (starty + length >= image->length - bmargin) {
    endy = (image->length - bmargin) - 1U;
  } else {
    endy = (starty + length) - 1U;
  }
  break;
  }
  off->startx = startx;
  off->starty = starty;
  off->endx = endx;
  off->endy = endy;
  crop_width = (endx - startx) + 1U;
  crop_length = (endy - starty) + 1U;
  if (crop_width <= 0U) {
    TIFFError("computeInputPixelOffsets",
              "Invalid left/right margins and /or image crop width requested");
    return (-1);
  } else {

  }
  if (crop_width > image->width) {
    crop_width = image->width;
  } else {

  }
  if (crop_length <= 0U) {
    TIFFError("computeInputPixelOffsets",
              "Invalid top/bottom margins and /or image crop length requested");
    return (-1);
  } else {

  }
  if (crop_length > image->length) {
    crop_length = image->length;
  } else {

  }
  off->crop_width = crop_width;
  off->crop_length = crop_length;
  return (0);
}
}
static int getCropOffsets(struct image_data *image , struct crop_mask *crop ,
                          struct dump_opts *dump ) 
{ 
  struct offset offsets ;
  int i ;
  int32 test2 ;
  uint32 test ;
  uint32 seg ;
  uint32 total ;
  uint32 need_buff ;
  uint32 buffsize ;
  uint32 zwidth ;
  uint32 zlength ;
  int tmp ;

  {
  need_buff = (uint32 )0;
  memset((void *)(& offsets), '\000', sizeof(struct offset ));
  crop->bufftotal = (uint32 )0;
  crop->combined_width = (uint32 )0;
  crop->combined_length = (uint32 )0;
  crop->selections = (uint16 )0;
  if ((int )crop->crop_mode & 1) {
    goto _L;
  } else
  if ((int )crop->crop_mode & 16) {
    goto _L;
  } else
  if ((int )crop->crop_mode & 4) {
    goto _L;
  } else
  if ((int )crop->crop_mode & 2) {
    _L: /* CIL Label */ 
    tmp = computeInputPixelOffsets(crop, image, & offsets);
    if (tmp) {
      TIFFError("getCropOffsets", "Unable to compute crop margins");
      return (-1);
    } else {

    }
    need_buff = (uint32 )1;
    crop->selections = crop->regions;
    if ((int )crop->crop_mode & 16) {
      return (0);
    } else {

    }
  } else {
    offsets.tmargin = (uint32 )0;
    offsets.lmargin = (uint32 )0;
    offsets.bmargin = (uint32 )0;
    offsets.rmargin = (uint32 )0;
    offsets.crop_width = image->width;
    offsets.crop_length = image->length;
    offsets.startx = (uint32 )0;
    offsets.endx = image->width - 1U;
    offsets.starty = (uint32 )0;
    offsets.endy = image->length - 1U;
    need_buff = (uint32 )0;
  }
  if ((unsigned int )dump->outfile != (unsigned int )((void *)0)) {
    dump_info(dump->outfile, dump->format, (char *)"",
              (char *)"Margins: Top: %d  Left: %d  Bottom: %d  Right: %d",
              offsets.tmargin, offsets.lmargin, offsets.bmargin, offsets.rmargin);
    dump_info(dump->outfile, dump->format, (char *)"",
              (char *)"Crop region within margins: Adjusted Width:  %6d  Length: %6d",
              offsets.crop_width, offsets.crop_length);
  } else {

  }
  if (! ((int )crop->crop_mode & 8)) {
    if (need_buff == 0U) {
      crop->selections = (uint16 )0;
      crop->combined_width = image->width;
      crop->combined_length = image->length;
      return (0);
    } else {
      crop->selections = (uint16 )1;
      crop->zones = (uint16 )1;
      crop->zonelist[0].total = 1;
      crop->zonelist[0].position = 1;
    }
  } else {
    crop->selections = crop->zones;
  }
  i = 0;
  while (i < (int )crop->zones) {
    seg = (uint32 )crop->zonelist[i].position;
    total = (uint32 )crop->zonelist[i].total;
    switch ((int )crop->edge_ref) {
    case 2: 
    zlength = offsets.crop_length;
    crop->regionlist[i].y1 = offsets.starty;
    crop->regionlist[i].y2 = offsets.endy;
    crop->regionlist[i].x1 = offsets.startx + (uint32 )((((double )offsets.crop_width * 1.0) * (double )(seg - 1U)) / (double )total);
    test = offsets.startx + (uint32 )((((double )offsets.crop_width * 1.0) * (double )seg) / (double )total);
    if (test > image->width - 1U) {
      crop->regionlist[i].x2 = image->width - 1U;
    } else {
      crop->regionlist[i].x2 = test - 1U;
    }
    zwidth = (crop->regionlist[i].x2 - crop->regionlist[i].x1) + 1U;
    crop->combined_length = zlength;
    if ((int )crop->exp_mode == 0) {
      crop->combined_width += zwidth;
    } else {
      crop->combined_width = zwidth;
    }
    break;
    case 3: 
    zwidth = offsets.crop_width;
    crop->regionlist[i].x1 = offsets.startx;
    crop->regionlist[i].x2 = offsets.endx;
    test2 = (int32 )(offsets.endy - (uint32 )((((double )offsets.crop_length * 1.0) * (double )seg) / (double )total));
    if (test2 < 1) {
      crop->regionlist[i].y1 = (uint32 )0;
    } else {
      crop->regionlist[i].y1 = (uint32 )(test2 + 1);
    }
    test = offsets.endy - (uint32 )((((double )offsets.crop_length * 1.0) * (double )(seg - 1U)) / (double )total);
    if (test > image->length - 1U) {
      crop->regionlist[i].y2 = image->length - 1U;
    } else {
      crop->regionlist[i].y2 = test;
    }
    zlength = (crop->regionlist[i].y2 - crop->regionlist[i].y1) + 1U;
    if ((int )crop->exp_mode == 0) {
      crop->combined_length += zlength;
    } else {
      crop->combined_length = zlength;
    }
    crop->combined_width = zwidth;
    break;
    case 4: 
    zlength = offsets.crop_length;
    crop->regionlist[i].y1 = offsets.starty;
    crop->regionlist[i].y2 = offsets.endy;
    crop->regionlist[i].x1 = offsets.startx + (uint32 )(((double )(offsets.crop_width * (total - seg)) * 1.0) / (double )total);
    test = offsets.startx + (uint32 )(((double )(offsets.crop_width * ((total - seg) + 1U)) * 1.0) / (double )total);
    if (test > image->width - 1U) {
      crop->regionlist[i].x2 = image->width - 1U;
    } else {
      crop->regionlist[i].x2 = test - 1U;
    }
    zwidth = (crop->regionlist[i].x2 - crop->regionlist[i].x1) + 1U;
    crop->combined_length = zlength;
    if ((int )crop->exp_mode == 0) {
      crop->combined_width += zwidth;
    } else {
      crop->combined_width = zwidth;
    }
    break;
    default: 
    case 1: 
    zwidth = offsets.crop_width;
    crop->regionlist[i].x1 = offsets.startx;
    crop->regionlist[i].x2 = offsets.endx;
    crop->regionlist[i].y1 = offsets.starty + (uint32 )((((double )offsets.crop_length * 1.0) * (double )(seg - 1U)) / (double )total);
    test = offsets.starty + (uint32 )((((double )offsets.crop_length * 1.0) * (double )seg) / (double )total);
    if (test > image->length - 1U) {
      crop->regionlist[i].y2 = image->length - 1U;
    } else {
      crop->regionlist[i].y2 = test - 1U;
    }
    zlength = (crop->regionlist[i].y2 - crop->regionlist[i].y1) + 1U;
    if ((int )crop->exp_mode == 0) {
      crop->combined_length += zlength;
    } else {
      crop->combined_length = zlength;
    }
    crop->combined_width = zwidth;
    break;
    }
    buffsize = (((zwidth * (uint32 )image->bps) * (uint32 )image->spp + 7U) / 8U) * (zlength + 1U);
    crop->regionlist[i].width = zwidth;
    crop->regionlist[i].length = zlength;
    crop->regionlist[i].buffsize = buffsize;
    crop->bufftotal += buffsize;
    if ((unsigned int )dump->outfile != (unsigned int )((void *)0)) {
      dump_info(dump->outfile, dump->format, (char *)"",
                (char *)"Zone %d, width: %4d, length: %4d, x1: %4d  x2: %4d  y1: %4d  y2: %4d",
                i + 1, zwidth, zlength, crop->regionlist[i].x1,
                crop->regionlist[i].x2, crop->regionlist[i].y1,
                crop->regionlist[i].y2);
    } else {

    }
    i ++;
  }
  return (0);
}
}
static int computeOutputPixelOffsets(struct crop_mask *crop ,
                                     struct image_data *image ,
                                     struct pagedef *page ,
                                     struct pageseg *sections ,
                                     struct dump_opts *dump ) 
{ 
  double scale ;
  uint32 iwidth ;
  uint32 ilength ;
  uint32 owidth ;
  uint32 olength ;
  uint32 pwidth ;
  uint32 plength ;
  uint32 orows ;
  uint32 ocols ;
  uint32 hmargin ;
  uint32 vmargin ;
  uint32 x1 ;
  uint32 x2 ;
  uint32 y1___0 ;
  uint32 y2 ;
  uint32 line_bytes ;
  unsigned int orientation ;
  uint32 i ;
  uint32 j ;
  uint32 k ;
  uint32 tmp ;

  {
  scale = 1.0;
  if ((int )page->res_unit == 1) {
    page->res_unit = image->res_unit;
  } else {

  }
  switch ((int )image->res_unit) {
  case 3: 
  if ((int )page->res_unit == 2) {
    scale = 1.0 / 2.54;
  } else {

  }
  break;
  case 2: 
  if ((int )page->res_unit == 3) {
    scale = 2.54;
  } else {

  }
  break;
  default: 
  case 1: 
  break;
  }
  if (crop->combined_width > 0U) {
    iwidth = crop->combined_width;
  } else {
    iwidth = image->width;
  }
  if (crop->combined_length > 0U) {
    ilength = crop->combined_length;
  } else {
    ilength = image->length;
  }
  if (page->hres <= 1.0) {
    page->hres = (double )image->xres;
  } else {

  }
  if (page->vres <= 1.0) {
    page->vres = (double )image->yres;
  } else {

  }
  if (page->hres < 1.0) {
    TIFFError("computeOutputPixelOffsets",
              "Invalid horizontal or vertical resolution specified or read from input image");
    return (1);
  } else
  if (page->vres < 1.0) {
    TIFFError("computeOutputPixelOffsets",
              "Invalid horizontal or vertical resolution specified or read from input image");
    return (1);
  } else {

  }
  if (page->width <= (double )0) {
    pwidth = iwidth;
  } else {
    pwidth = (uint32 )page->width;
  }
  if (page->length <= (double )0) {
    plength = ilength;
  } else {
    plength = (uint32 )page->length;
  }
  if (dump->debug) {
    TIFFError("",
              "Page size: %s, Vres: %3.2f, Hres: %3.2f, Hmargin: %3.2f, Vmargin: %3.2f\n",
              page->name, page->vres, page->hres, page->hmargin, page->vmargin);
    TIFFError("", "Res_unit: %d, Scale: %3.2f, Page width: %d, length: %d\n",
              (int )page->res_unit, scale, pwidth, plength);
  } else {

  }
  if (page->mode & 4U) {
    if ((int )page->res_unit == 2) {
      hmargin = (uint32 )(((page->hmargin * scale) * page->hres) * (double )(((int )image->bps + 7) / 8));
      vmargin = (uint32 )(((page->vmargin * scale) * page->vres) * (double )(((int )image->bps + 7) / 8));
    } else
    if ((int )page->res_unit == 3) {
      hmargin = (uint32 )(((page->hmargin * scale) * page->hres) * (double )(((int )image->bps + 7) / 8));
      vmargin = (uint32 )(((page->vmargin * scale) * page->vres) * (double )(((int )image->bps + 7) / 8));
    } else {
      hmargin = (uint32 )((page->hmargin * scale) * (double )(((int )image->bps + 7) / 8));
      vmargin = (uint32 )((page->vmargin * scale) * (double )(((int )image->bps + 7) / 8));
    }
    if ((double )hmargin * 2.0 > (double )pwidth * page->hres) {
      TIFFError("computeOutputPixelOffsets",
                "Combined left and right margins exceed page width");
      hmargin = (uint32 )0;
      return (-1);
    } else {

    }
    if ((double )vmargin * 2.0 > (double )plength * page->vres) {
      TIFFError("computeOutputPixelOffsets",
                "Combined top and bottom margins exceed page length");
      vmargin = (uint32 )0;
      return (-1);
    } else {

    }
  } else {
    hmargin = (uint32 )0;
    vmargin = (uint32 )0;
  }
  if (page->mode & 8U) {
    if (page->mode & 4U) {
      TIFFError("computeOutputPixelOffsets",
                "Output margins cannot be specified with rows and columns");
    } else {

    }
    owidth = (iwidth + (page->cols - 1U)) / page->cols;
    olength = (ilength + (page->rows - 1U)) / page->rows;
  } else
  if (page->mode & 2U) {
    owidth = (uint32 )((double )pwidth * page->hres - (double )(hmargin * 2U));
    olength = (uint32 )((double )plength * page->vres - (double )(vmargin * 2U));
  } else {
    owidth = (uint32 )((double )iwidth - (double )(hmargin * 2U) * page->hres);
    olength = (uint32 )((double )ilength - (double )(vmargin * 2U) * page->vres);
  }
  if (owidth > iwidth) {
    owidth = iwidth;
  } else {

  }
  if (olength > ilength) {
    olength = ilength;
  } else {

  }
  switch (page->orient) {
  case 1U: 
  case 0U: 
  ocols = (iwidth + (owidth - 1U)) / owidth;
  orows = (ilength + (olength - 1U)) / olength;
  orientation = 1U;
  break;
  case 2U: 
  ocols = (iwidth + (olength - 1U)) / olength;
  orows = (ilength + (owidth - 1U)) / owidth;
  x1 = olength;
  olength = owidth;
  owidth = x1;
  orientation = 2U;
  break;
  default: 
  case 16U: 
  x1 = (iwidth + (owidth - 1U)) / owidth;
  x2 = (ilength + (olength - 1U)) / olength;
  y1___0 = (iwidth + (olength - 1U)) / olength;
  y2 = (ilength + (owidth - 1U)) / owidth;
  if (x1 * x2 < y1___0 * y2) {
    ocols = x1;
    orows = x2;
    orientation = 1U;
  } else {
    ocols = y1___0;
    orows = y2;
    x1 = olength;
    olength = owidth;
    owidth = x1;
    orientation = 2U;
  }
  }
  if (ocols < 1U) {
    ocols = (uint32 )1;
  } else {

  }
  if (orows < 1U) {
    orows = (uint32 )1;
  } else {

  }
  if (page->rows < 1U) {
    page->rows = orows;
  } else {

  }
  if (page->cols < 1U) {
    page->cols = ocols;
  } else {

  }
  if (owidth * (uint32 )image->bps & 7U) {
    tmp = (owidth * (uint32 )image->bps >> 3) + 1U;
  } else {
    tmp = owidth * (uint32 )image->bps >> 3;
  }
  line_bytes = tmp * (uint32 )image->spp;
  if (page->rows * page->cols > 32U) {
    TIFFError("computeOutputPixelOffsets",
              "Rows and Columns exceed maximum sections\nIncrease resolution or reduce sections");
    return (-1);
  } else {

  }
  k = (uint32 )0;
  i = (uint32 )0;
  while (i < orows) {
    y1___0 = olength * i;
    y2 = olength * (i + 1U) - 1U;
    if (y2 >= ilength) {
      y2 = ilength - 1U;
    } else {

    }
    j = (uint32 )0;
    while (j < ocols) {
      x1 = owidth * j;
      x2 = owidth * (j + 1U) - 1U;
      if (x2 >= iwidth) {
        x2 = iwidth - 1U;
      } else {

      }
      (sections + k)->x1 = x1;
      (sections + k)->x2 = x2;
      (sections + k)->y1 = y1___0;
      (sections + k)->y2 = y2;
      (sections + k)->buffsize = line_bytes * olength;
      (sections + k)->position = (int )(k + 1U);
      (sections + k)->total = (int )(orows * ocols);
      j ++;
      k ++;
    }
    i ++;
  }
  return (0);
}
}
static int loadImage(TIFF *in , struct image_data *image ,
                     struct dump_opts *dump , unsigned char **read_ptr ) ;
static uint32 prev_readsize  =    (uint32 )0;
static int loadImage(TIFF *in , struct image_data *image ,
                     struct dump_opts *dump , unsigned char **read_ptr ) 
{ 
  uint32 i ;
  float xres ;
  float yres ;
  uint16 nstrips ;
  uint16 ntiles ;
  uint16 planar ;
  uint16 bps ;
  uint16 spp ;
  uint16 res_unit ;
  uint16 photometric ;
  uint16 orientation ;
  uint32 width ;
  uint32 length ;
  uint32 rowsperstrip___0 ;
  uint32 stsize ;
  uint32 tlsize ;
  uint32 buffsize ;
  uint32 scanlinesize ;
  unsigned char *read_buff ;
  unsigned char *new_buff ;
  int readunit ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  uint32 tmp___1 ;
  tmsize_t tmp___2 ;
  uint32 tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  xres = (float )0.0;
  yres = (float )0.0;
  read_buff = (unsigned char *)((void *)0);
  new_buff = (unsigned char *)((void *)0);
  readunit = 0;
  TIFFGetFieldDefaulted(in, (uint32 )258, & bps);
  TIFFGetFieldDefaulted(in, (uint32 )277, & spp);
  TIFFGetFieldDefaulted(in, (uint32 )284, & planar);
  TIFFGetFieldDefaulted(in, (uint32 )274, & orientation);
  TIFFGetField(in, (uint32 )262, & photometric);
  TIFFGetField(in, (uint32 )256, & width);
  TIFFGetField(in, (uint32 )257, & length);
  TIFFGetField(in, (uint32 )282, & xres);
  TIFFGetField(in, (uint32 )283, & yres);
  TIFFGetFieldDefaulted(in, (uint32 )296, & res_unit);
  tmp = TIFFScanlineSize(in);
  scanlinesize = (uint32 )tmp;
  image->bps = bps;
  image->spp = spp;
  image->planar = planar;
  image->width = width;
  image->length = length;
  image->xres = xres;
  image->yres = yres;
  image->res_unit = res_unit;
  image->photometric = photometric;
  image->orientation = orientation;
  switch ((int )orientation) {
  case 1: 
  case 0: 
  image->adjustments = (uint16 )0;
  break;
  case 2: 
  image->adjustments = (uint16 )1;
  break;
  case 3: 
  image->adjustments = (uint16 )16;
  break;
  case 4: 
  image->adjustments = (uint16 )2;
  break;
  case 5: 
  image->adjustments = (uint16 )10;
  break;
  case 6: 
  image->adjustments = (uint16 )8;
  break;
  case 7: 
  image->adjustments = (uint16 )34;
  break;
  case 8: 
  image->adjustments = (uint16 )32;
  break;
  default: 
  image->adjustments = (uint16 )0;
  image->orientation = (uint16 )1;
  }
  if ((int )bps == 0) {
    TIFFError("loadImage",
              "Invalid samples per pixel (%d) or bits per sample (%d)",
              (int )spp, (int )bps);
    return (-1);
  } else
  if ((int )spp == 0) {
    TIFFError("loadImage",
              "Invalid samples per pixel (%d) or bits per sample (%d)",
              (int )spp, (int )bps);
    return (-1);
  } else {

  }
  tmp___4 = TIFFIsTiled(in);
  if (tmp___4) {
    readunit = 2;
    tmp___0 = TIFFTileSize(in);
    tlsize = (uint32 )tmp___0;
    tmp___1 = TIFFNumberOfTiles(in);
    ntiles = (uint16 )tmp___1;
    buffsize = tlsize * (uint32 )ntiles;
    if ((unsigned int )dump->infile != (unsigned int )((void *)0)) {
      dump_info(dump->infile, dump->format, (char *)"",
                (char *)"Tilesize: %u, Number of Tiles: %u, Scanline size: %u",
                tlsize, (int )ntiles, scanlinesize);
    } else {

    }
  } else {
    readunit = 1;
    TIFFGetFieldDefaulted(in, (uint32 )278, & rowsperstrip___0);
    tmp___2 = TIFFStripSize(in);
    stsize = (uint32 )tmp___2;
    tmp___3 = TIFFNumberOfStrips(in);
    nstrips = (uint16 )tmp___3;
    buffsize = stsize * (uint32 )nstrips;
    if ((unsigned int )dump->infile != (unsigned int )((void *)0)) {
      dump_info(dump->infile, dump->format, (char *)"",
                (char *)"Stripsize: %u, Number of Strips: %u, Rows per Strip: %u, Scanline size: %u",
                stsize, (int )nstrips, rowsperstrip___0, scanlinesize);
    } else {

    }
  }
  read_buff = *read_ptr;
  if (! read_buff) {
    tmp___5 = _TIFFmalloc((tmsize_t )buffsize);
    read_buff = (unsigned char *)tmp___5;
  } else
  if (prev_readsize < buffsize) {
    tmp___6 = _TIFFrealloc((void *)read_buff, (tmsize_t )buffsize);
    new_buff = (unsigned char *)tmp___6;
    if (! new_buff) {
      free((void *)read_buff);
      tmp___7 = _TIFFmalloc((tmsize_t )buffsize);
      read_buff = (unsigned char *)tmp___7;
    } else {
      read_buff = new_buff;
    }
  } else {

  }
  if (! read_buff) {
    TIFFError("loadImage", "Unable to allocate/reallocate read buffer");
    return (-1);
  } else {

  }
  _TIFFmemset((void *)read_buff, '\000', (tmsize_t )buffsize);
  prev_readsize = buffsize;
  *read_ptr = read_buff;
  switch (readunit) {
  case 1: 
  if ((int )planar == 1) {
    tmp___8 = readContigStripsIntoBuffer(in, read_buff, length, width, spp);
    if (tmp___8) {

    } else {
      TIFFError("loadImage", "Unable to read contiguous strips into buffer");
      return (-1);
    }
  } else {
    tmp___9 = readSeparateStripsIntoBuffer(in, read_buff, length, width, spp,
                                           dump);
    if (tmp___9) {

    } else {
      TIFFError("loadImage", "Unable to read separate strips into buffer");
      return (-1);
    }
  }
  break;
  case 2: 
  if ((int )planar == 1) {
    tmp___10 = readContigTilesIntoBuffer(in, read_buff, length, width, spp);
    if (tmp___10) {

    } else {
      TIFFError("loadImage", "Unable to read contiguous tiles into buffer");
      return (-1);
    }
  } else {
    tmp___11 = readSeparateTilesIntoBuffer(in, read_buff, length, width, spp);
    if (tmp___11) {

    } else {
      TIFFError("loadImage", "Unable to read separate tiles into buffer");
      return (-1);
    }
  }
  break;
  default: 
  TIFFError("loadImage", "Unsupported image file format");
  return (-1);
  break;
  }
  if ((unsigned int )dump->infile != (unsigned int )((void *)0)) {
    if (dump->level == 2) {
      dump_info(dump->infile, dump->format, (char *)"loadImage",
                (char *)"Image width %d, length %d, Raw image data, %4d bytes",
                width, length, buffsize);
      dump_info(dump->infile, dump->format, (char *)"",
                (char *)"Bits per sample %d, Samples per pixel %d", (int )bps,
                (int )spp);
      i = (uint32 )0;
      while (i < length) {
        dump_buffer(dump->infile, dump->format, (uint32 )1, scanlinesize, i,
                    read_buff + i * scanlinesize);
        i ++;
      }
    } else {

    }
  } else {

  }
  return (0);
}
}
static int correct_orientation(struct image_data *image ,
                               unsigned char **work_buff_ptr ) 
{ 
  uint16 mirror ;
  uint16 rotation ;
  unsigned char *work_buff ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  work_buff = *work_buff_ptr;
  if ((unsigned int )image == (unsigned int )((void *)0)) {
    TIFFError("correct_orientatin", "Invalid image or buffer pointer");
    return (-1);
  } else
  if ((unsigned int )work_buff == (unsigned int )((void *)0)) {
    TIFFError("correct_orientatin", "Invalid image or buffer pointer");
    return (-1);
  } else {

  }
  if ((int )image->adjustments & 1) {
    goto _L;
  } else
  if ((int )image->adjustments & 2) {
    _L: /* CIL Label */ 
    mirror = (uint16 )((int )image->adjustments & 3);
    tmp = mirrorImage(image->spp, image->bps, mirror, image->width,
                      image->length, work_buff);
    if (tmp) {
      TIFFError("correct_orientation", "Unable to mirror image");
      return (-1);
    } else {

    }
  } else {

  }
  if ((int )image->adjustments & 8) {
    goto _L___0;
  } else
  if (16) {
    goto _L___0;
  } else {
    _L___0: /* CIL Label */ 
    if ((int )image->adjustments & 8) {
      rotation = (uint16 )90;
    } else
    if ((int )image->adjustments & 16) {
      rotation = (uint16 )180;
    } else
    if ((int )image->adjustments & 32) {
      rotation = (uint16 )270;
    } else {
      if ((int )image->adjustments & 8) {
        tmp___0 = 1;
      } else {
        tmp___0 = 1;
      }
      TIFFError("correct_orientation", "Invalid rotation value: %d", tmp___0);
      return (-1);
    }
    tmp___1 = rotateImage(rotation, image, & image->width, & image->length,
                          work_buff_ptr);
    if (tmp___1) {
      TIFFError("correct_orientation", "Unable to rotate image");
      return (-1);
    } else {

    }
    image->orientation = (uint16 )1;
  }
  return (0);
}
}
static int extractCompositeRegions(struct image_data *image ,
                                   struct crop_mask *crop ,
                                   unsigned char *read_buff ,
                                   unsigned char *crop_buff ) 
{ 
  int shift_width ;
  int bytes_per_sample ;
  int bytes_per_pixel ;
  uint32 i ;
  uint32 trailing_bits ;
  uint32 prev_trailing_bits ;
  uint32 row ;
  uint32 first_row ;
  uint32 last_row ;
  uint32 first_col ;
  uint32 last_col ;
  uint32 src_rowsize ;
  uint32 dst_rowsize ;
  uint32 src_offset ;
  uint32 dst_offset ;
  uint32 crop_width ;
  uint32 crop_length ;
  uint32 img_width ;
  uint32 img_length ;
  uint32 prev_length ;
  uint32 prev_width ;
  uint32 composite_width ;
  uint16 bps ;
  uint16 spp ;
  uint8 *src ;
  uint8 *dst ;
  tsample_t count ;
  tsample_t sample ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  sample = (tsample_t )0;
  img_width = image->width;
  img_length = image->length;
  bps = image->bps;
  spp = image->spp;
  count = spp;
  bytes_per_sample = ((int )bps + 7) / 8;
  bytes_per_pixel = ((int )bps * (int )spp + 7) / 8;
  if ((int )bps % 8 == 0) {
    shift_width = 0;
  } else
  if (bytes_per_pixel < bytes_per_sample + 1) {
    shift_width = bytes_per_pixel;
  } else {
    shift_width = bytes_per_sample + 1;
  }
  src = read_buff;
  dst = crop_buff;
  prev_length = (uint32 )0;
  prev_width = prev_length;
  trailing_bits = (uint32 )0;
  prev_trailing_bits = trailing_bits;
  composite_width = crop->combined_width;
  crop->combined_width = (uint32 )0;
  crop->combined_length = (uint32 )0;
  i = (uint32 )0;
  while (i < (uint32 )crop->selections) {
    first_row = crop->regionlist[i].y1;
    last_row = crop->regionlist[i].y2;
    first_col = crop->regionlist[i].x1;
    last_col = crop->regionlist[i].x2;
    crop_width = (last_col - first_col) + 1U;
    crop_length = (last_row - first_row) + 1U;
    crop->regionlist[i].width = crop_width;
    crop->regionlist[i].length = crop_length;
    crop->regionlist[i].buffptr = crop_buff;
    src_rowsize = ((img_width * (uint32 )bps) * (uint32 )spp + 7U) / 8U;
    dst_rowsize = ((crop_width * (uint32 )bps) * (uint32 )count + 7U) / 8U;
    switch ((int )crop->edge_ref) {
    case 3: 
    case 1: 
    default: 
    if (i > 0U) {
      if (crop_width != crop->regionlist[i - 1U].width) {
        TIFFError("extractCompositeRegions",
                  "Only equal width regions can be combined for -E top or bottom");
        return (1);
      } else {

      }
    } else {

    }
    crop->combined_width = crop_width;
    crop->combined_length += crop_length;
    row = first_row;
    while (row <= last_row) {
      src_offset = row * src_rowsize;
      dst_offset = (row - first_row) * dst_rowsize;
      src = read_buff + src_offset;
      dst = (crop_buff + dst_offset) + prev_length * dst_rowsize;
      switch (shift_width) {
      case 0: 
      tmp = extractContigSamplesBytes(src, dst, img_width, sample, spp, bps,
                                      count, first_col, last_col + 1U);
      if (tmp) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 1: 
      tmp___0 = extractContigSamplesShifted8bits(src, dst, img_width, sample,
                                                 spp, bps, count, first_col,
                                                 last_col + 1U,
                                                 (int )prev_trailing_bits);
      if (tmp___0) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 2: 
      tmp___1 = extractContigSamplesShifted16bits(src, dst, img_width, sample,
                                                  spp, bps, count, first_col,
                                                  last_col + 1U,
                                                  (int )prev_trailing_bits);
      if (tmp___1) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 3: 
      tmp___2 = extractContigSamplesShifted24bits(src, dst, img_width, sample,
                                                  spp, bps, count, first_col,
                                                  last_col + 1U,
                                                  (int )prev_trailing_bits);
      if (tmp___2) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 5: 
      case 4: 
      tmp___3 = extractContigSamplesShifted32bits(src, dst, img_width, sample,
                                                  spp, bps, count, first_col,
                                                  last_col + 1U,
                                                  (int )prev_trailing_bits);
      if (tmp___3) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      default: 
      TIFFError("extractCompositeRegions", "Unsupported bit depth %d", (int )bps);
      return (1);
      }
      row ++;
    }
    prev_length += crop_length;
    break;
    case 4: 
    case 2: 
    if (i > 0U) {
      if (crop_length != crop->regionlist[i - 1U].length) {
        TIFFError("extractCompositeRegions",
                  "Only equal length regions can be combined for -E left or right");
        return (1);
      } else {

      }
    } else {

    }
    crop->combined_width += crop_width;
    crop->combined_length = crop_length;
    dst_rowsize = ((composite_width * (uint32 )bps) * (uint32 )count + 7U) / 8U;
    trailing_bits = ((crop_width * (uint32 )bps) * (uint32 )count) % 8U;
    row = first_row;
    while (row <= last_row) {
      src_offset = row * src_rowsize;
      dst_offset = (row - first_row) * dst_rowsize;
      src = read_buff + src_offset;
      dst = (crop_buff + dst_offset) + prev_width;
      switch (shift_width) {
      case 0: 
      tmp___4 = extractContigSamplesBytes(src, dst, img_width, sample, spp, bps,
                                          count, first_col, last_col + 1U);
      if (tmp___4) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 1: 
      tmp___5 = extractContigSamplesShifted8bits(src, dst, img_width, sample,
                                                 spp, bps, count, first_col,
                                                 last_col + 1U,
                                                 (int )prev_trailing_bits);
      if (tmp___5) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 2: 
      tmp___6 = extractContigSamplesShifted16bits(src, dst, img_width, sample,
                                                  spp, bps, count, first_col,
                                                  last_col + 1U,
                                                  (int )prev_trailing_bits);
      if (tmp___6) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 3: 
      tmp___7 = extractContigSamplesShifted24bits(src, dst, img_width, sample,
                                                  spp, bps, count, first_col,
                                                  last_col + 1U,
                                                  (int )prev_trailing_bits);
      if (tmp___7) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      case 5: 
      case 4: 
      tmp___8 = extractContigSamplesShifted32bits(src, dst, img_width, sample,
                                                  spp, bps, count, first_col,
                                                  last_col + 1U,
                                                  (int )prev_trailing_bits);
      if (tmp___8) {
        TIFFError("extractCompositeRegions", "Unable to extract row %d", row);
        return (1);
      } else {

      }
      break;
      default: 
      TIFFError("extractCompositeRegions", "Unsupported bit depth %d", (int )bps);
      return (1);
      }
      row ++;
    }
    prev_width += ((crop_width * (uint32 )bps) * (uint32 )count) / 8U;
    prev_trailing_bits += trailing_bits;
    if (prev_trailing_bits > 7U) {
      prev_trailing_bits -= 8U;
    } else {

    }
    break;
    }
    i ++;
  }
  if (crop->combined_width != composite_width) {
    TIFFError("combineSeparateRegions",
              "Combined width does not match composite width");
  } else {

  }
  return (0);
}
}
static int extractSeparateRegion(struct image_data *image ,
                                 struct crop_mask *crop ,
                                 unsigned char *read_buff ,
                                 unsigned char *crop_buff , int region ) 
{ 
  int shift_width ;
  int prev_trailing_bits ;
  uint32 bytes_per_sample ;
  uint32 bytes_per_pixel ;
  uint32 src_rowsize ;
  uint32 dst_rowsize ;
  uint32 row ;
  uint32 first_row ;
  uint32 last_row ;
  uint32 first_col ;
  uint32 last_col ;
  uint32 src_offset ;
  uint32 dst_offset ;
  uint32 crop_width ;
  uint32 crop_length ;
  uint32 img_width ;
  uint32 img_length ;
  uint16 bps ;
  uint16 spp ;
  uint8 *src ;
  uint8 *dst ;
  tsample_t count ;
  tsample_t sample ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  prev_trailing_bits = 0;
  sample = (tsample_t )0;
  img_width = image->width;
  img_length = image->length;
  bps = image->bps;
  spp = image->spp;
  count = spp;
  bytes_per_sample = (uint32 )(((int )bps + 7) / 8);
  bytes_per_pixel = (uint32 )(((int )bps * (int )spp + 7) / 8);
  if ((int )bps % 8 == 0) {
    shift_width = 0;
  } else
  if (bytes_per_pixel < bytes_per_sample + 1U) {
    shift_width = (int )bytes_per_pixel;
  } else {
    shift_width = (int )(bytes_per_sample + 1U);
  }
  first_row = crop->regionlist[region].y1;
  last_row = crop->regionlist[region].y2;
  first_col = crop->regionlist[region].x1;
  last_col = crop->regionlist[region].x2;
  crop_width = (last_col - first_col) + 1U;
  crop_length = (last_row - first_row) + 1U;
  crop->regionlist[region].width = crop_width;
  crop->regionlist[region].length = crop_length;
  crop->regionlist[region].buffptr = crop_buff;
  src = read_buff;
  dst = crop_buff;
  src_rowsize = ((img_width * (uint32 )bps) * (uint32 )spp + 7U) / 8U;
  dst_rowsize = ((crop_width * (uint32 )bps) * (uint32 )spp + 7U) / 8U;
  row = first_row;
  while (row <= last_row) {
    src_offset = row * src_rowsize;
    dst_offset = (row - first_row) * dst_rowsize;
    src = read_buff + src_offset;
    dst = crop_buff + dst_offset;
    switch (shift_width) {
    case 0: 
    tmp = extractContigSamplesBytes(src, dst, img_width, sample, spp, bps,
                                    count, first_col, last_col + 1U);
    if (tmp) {
      TIFFError("extractSeparateRegion", "Unable to extract row %d", row);
      return (1);
    } else {

    }
    break;
    case 1: 
    tmp___0 = extractContigSamplesShifted8bits(src, dst, img_width, sample, spp,
                                               bps, count, first_col,
                                               last_col + 1U, prev_trailing_bits);
    if (tmp___0) {
      TIFFError("extractSeparateRegion", "Unable to extract row %d", row);
      return (1);
    } else {

    }
    break;
    case 2: 
    tmp___1 = extractContigSamplesShifted16bits(src, dst, img_width, sample,
                                                spp, bps, count, first_col,
                                                last_col + 1U,
                                                prev_trailing_bits);
    if (tmp___1) {
      TIFFError("extractSeparateRegion", "Unable to extract row %d", row);
      return (1);
    } else {

    }
    break;
    case 3: 
    tmp___2 = extractContigSamplesShifted24bits(src, dst, img_width, sample,
                                                spp, bps, count, first_col,
                                                last_col + 1U,
                                                prev_trailing_bits);
    if (tmp___2) {
      TIFFError("extractSeparateRegion", "Unable to extract row %d", row);
      return (1);
    } else {

    }
    break;
    case 5: 
    case 4: 
    tmp___3 = extractContigSamplesShifted32bits(src, dst, img_width, sample,
                                                spp, bps, count, first_col,
                                                last_col + 1U,
                                                prev_trailing_bits);
    if (tmp___3) {
      TIFFError("extractSeparateRegion", "Unable to extract row %d", row);
      return (1);
    } else {

    }
    break;
    default: 
    TIFFError("extractSeparateRegion", "Unsupported bit depth %d", (int )bps);
    return (1);
    }
    row ++;
  }
  return (0);
}
}
static int extractImageSection(struct image_data *image ,
                               struct pageseg *section ,
                               unsigned char *src_buff ,
                               unsigned char *sect_buff ) 
{ 
  unsigned char bytebuff1 ;
  unsigned char bytebuff2 ;
  unsigned char *src ;
  unsigned char *dst ;
  uint32 img_width ;
  uint32 img_length ;
  uint32 img_rowsize ;
  uint32 j ;
  uint32 shift1 ;
  uint32 shift2 ;
  uint32 trailing_bits ;
  uint32 row ;
  uint32 first_row ;
  uint32 last_row ;
  uint32 first_col ;
  uint32 last_col ;
  uint32 src_offset ;
  uint32 dst_offset ;
  uint32 row_offset ;
  uint32 col_offset ;
  uint32 offset1 ;
  uint32 offset2 ;
  uint32 full_bytes ;
  uint32 sect_width ;
  uint32 sect_length ;
  uint16 bps ;
  uint16 spp ;

  {
  img_width = image->width;
  img_length = image->length;
  bps = image->bps;
  spp = image->spp;
  src = src_buff;
  dst = sect_buff;
  src_offset = (uint32 )0;
  dst_offset = (uint32 )0;
  first_row = section->y1;
  last_row = section->y2;
  first_col = section->x1;
  last_col = section->x2;
  sect_width = (last_col - first_col) + 1U;
  sect_length = (last_row - first_row) + 1U;
  img_rowsize = ((img_width * (uint32 )bps + 7U) / 8U) * (uint32 )spp;
  full_bytes = ((sect_width * (uint32 )spp) * (uint32 )bps) / 8U;
  trailing_bits = (sect_width * (uint32 )bps) % 8U;
  if ((int )bps % 8 == 0) {
    col_offset = ((first_col * (uint32 )spp) * (uint32 )bps) / 8U;
    row = first_row;
    while (row <= last_row) {
      row_offset = row * img_rowsize;
      src_offset = row_offset + col_offset;
      _TIFFmemcpy((void *)(sect_buff + dst_offset),
                  (void const   *)(src_buff + src_offset), (tmsize_t )full_bytes);
      dst_offset += full_bytes;
      row ++;
    }
  } else {
    shift1 = (unsigned int )spp * ((first_col * (uint32 )bps) % 8U);
    shift2 = (unsigned int )spp * ((last_col * (uint32 )bps) % 8U);
    row = first_row;
    while (row <= last_row) {
      row_offset = row * img_rowsize;
      offset1 = row_offset + (first_col * (uint32 )bps) / 8U;
      offset2 = row_offset + (last_col * (uint32 )bps) / 8U;
      bytebuff2 = (unsigned char)0;
      bytebuff1 = bytebuff2;
      if (shift1 == 0U) {
        _TIFFmemcpy((void *)(sect_buff + dst_offset),
                    (void const   *)(src_buff + offset1), (tmsize_t )full_bytes);
        dst_offset += full_bytes;
        if (trailing_bits != 0U) {
          bytebuff2 = (unsigned char )((int )*(src_buff + offset2) & (255 << (7U - shift2)));
          *(sect_buff + dst_offset) = bytebuff2;
          dst_offset ++;
        } else {

        }
      } else {
        j = (uint32 )0;
        while (j <= full_bytes) {
          bytebuff1 = (unsigned char )((int )*(src_buff + (offset1 + j)) & (255 >> shift1));
          bytebuff2 = (unsigned char )((int )*(src_buff + ((offset1 + j) + 1U)) & (255 << (7U - shift1)));
          *(sect_buff + (dst_offset + j)) = (unsigned char )(((int )bytebuff1 << shift1) | ((int )bytebuff2 >> (8U - shift1)));
          j ++;
        }
        dst_offset += full_bytes;
        if (trailing_bits != 0U) {
          if (shift2 > shift1) {
            bytebuff1 = (unsigned char )((int )*(src_buff + (offset1 + full_bytes)) & (255 << (7U - shift2)));
            bytebuff2 = (unsigned char )((int )bytebuff1 & (255 << shift1));
            *(sect_buff + dst_offset) = bytebuff2;
          } else
          if (shift2 < shift1) {
            bytebuff2 = (unsigned char )(255 << ((shift1 - shift2) - 1U));
            *(sect_buff + dst_offset) = (unsigned char )((int )*(sect_buff + dst_offset) & (int )bytebuff2);
          } else {

          }
        } else {

        }
        dst_offset ++;
      }
      row ++;
    }
  }
  return (0);
}
}
static int writeSelections(TIFF *in , TIFF **out , struct crop_mask *crop ,
                           struct image_data *image , struct dump_opts *dump ,
                           struct buffinfo *seg_buffs , char *mp ,
                           char *filename , unsigned int *page ,
                           unsigned int total_pages ) 
{ 
  int i ;
  int page_count ;
  int autoindex ;
  unsigned char *crop_buff ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  autoindex = 0;
  crop_buff = (unsigned char *)((void *)0);
  switch ((int )crop->exp_mode) {
  case 0: 
  autoindex = 0;
  crop_buff = (seg_buffs + 0)->buffer;
  tmp = update_output_file(out, mp, autoindex, filename, page);
  if (tmp) {
    return (1);
  } else {

  }
  page_count = (int )total_pages;
  tmp___0 = writeCroppedImage(in, *out, image, dump, crop->combined_width,
                              crop->combined_length, crop_buff, (int )*page,
                              (int )total_pages);
  if (tmp___0) {
    TIFFError("writeRegions", "Unable to write new image");
    return (-1);
  } else {

  }
  break;
  case 1: 
  autoindex = 0;
  tmp___1 = update_output_file(out, mp, autoindex, filename, page);
  if (tmp___1) {
    return (1);
  } else {

  }
  page_count = (int )((unsigned int )crop->selections * total_pages);
  i = 0;
  while (i < (int )crop->selections) {
    crop_buff = (seg_buffs + i)->buffer;
    tmp___2 = writeCroppedImage(in, *out, image, dump,
                                crop->regionlist[i].width,
                                crop->regionlist[i].length, crop_buff,
                                (int )*page, page_count);
    if (tmp___2) {
      TIFFError("writeRegions", "Unable to write new image");
      return (-1);
    } else {

    }
    i ++;
  }
  break;
  case 2: 
  autoindex = 1;
  tmp___3 = update_output_file(out, mp, autoindex, filename, page);
  if (tmp___3) {
    return (1);
  } else {

  }
  crop_buff = (seg_buffs + 0)->buffer;
  tmp___4 = writeCroppedImage(in, *out, image, dump, crop->combined_width,
                              crop->combined_length, crop_buff, (int )*page,
                              (int )total_pages);
  if (tmp___4) {
    TIFFError("writeRegions", "Unable to write new image");
    return (-1);
  } else {

  }
  break;
  case 3: 
  autoindex = 1;
  page_count = (int )crop->selections;
  tmp___5 = update_output_file(out, mp, autoindex, filename, page);
  if (tmp___5) {
    return (1);
  } else {

  }
  i = 0;
  while (i < (int )crop->selections) {
    crop_buff = (seg_buffs + i)->buffer;
    tmp___6 = writeCroppedImage(in, *out, image, dump,
                                crop->regionlist[i].width,
                                crop->regionlist[i].length, crop_buff,
                                (int )*page, page_count);
    if (tmp___6) {
      TIFFError("writeRegions", "Unable to write new image");
      return (-1);
    } else {

    }
    i ++;
  }
  break;
  case 4: 
  autoindex = 1;
  page_count = 1;
  i = 0;
  while (i < (int )crop->selections) {
    tmp___7 = update_output_file(out, mp, autoindex, filename, page);
    if (tmp___7) {
      return (1);
    } else {

    }
    crop_buff = (seg_buffs + i)->buffer;
    tmp___8 = writeCroppedImage(in, *out, image, dump,
                                crop->regionlist[i].width,
                                crop->regionlist[i].length, crop_buff,
                                (int )*page, page_count);
    if (tmp___8) {
      TIFFError("writeRegions", "Unable to write new image");
      return (-1);
    } else {

    }
    i ++;
  }
  break;
  default: 
  return (1);
  }
  return (0);
}
}
static int writeImageSections(TIFF *in , TIFF *out , struct image_data *image ,
                              struct pagedef *page , struct pageseg *sections ,
                              struct dump_opts *dump , unsigned char *src_buff ,
                              unsigned char **sect_buff_ptr ) 
{ 
  double hres ;
  double vres ;
  uint32 i ;
  uint32 k ;
  uint32 width ;
  uint32 length ;
  uint32 sectsize ;
  unsigned char *sect_buff ;
  double tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  sect_buff = *sect_buff_ptr;
  hres = page->hres;
  vres = page->vres;
  k = page->cols * page->rows;
  if (k < 1U) {
    TIFFError("writeImageSections",
              "%d Rows and Columns exceed maximum sections\nIncrease resolution or reduce sections",
              k);
    return (-1);
  } else
  if (k > 32U) {
    TIFFError("writeImageSections",
              "%d Rows and Columns exceed maximum sections\nIncrease resolution or reduce sections",
              k);
    return (-1);
  } else {

  }
  i = (uint32 )0;
  while (i < k) {
    width = ((sections + i)->x2 - (sections + i)->x1) + 1U;
    length = ((sections + i)->y2 - (sections + i)->y1) + 1U;
    tmp = ceil((double )(width * (uint32 )image->bps + 7U) / (double )8);
    sectsize = ((uint32 )tmp * (uint32 )image->spp) * length;
    tmp___0 = createImageSection(sectsize, sect_buff_ptr);
    if (tmp___0) {
      TIFFError("writeImageSections", "Unable to allocate section buffer");
      exit(-1);
    } else {

    }
    sect_buff = *sect_buff_ptr;
    tmp___1 = extractImageSection(image, sections + i, src_buff, sect_buff);
    if (tmp___1) {
      TIFFError("writeImageSections", "Unable to extract image sections");
      exit(-1);
    } else {

    }
    tmp___2 = writeSingleSection(in, out, image, dump, width, length, hres,
                                 vres, sect_buff);
    if (tmp___2) {
      TIFFError("writeImageSections", "Unable to write image section");
      exit(-1);
    } else {

    }
    i ++;
  }
  return (0);
}
}
static int writeSingleSection(TIFF *in , TIFF *out , struct image_data *image ,
                              struct dump_opts *dump , uint32 width ,
                              uint32 length , double hres , double vres ,
                              unsigned char *sect_buff ) 
{ 
  uint16 bps ;
  uint16 spp ;
  struct cpTag *p ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint16 input_compression ;
  uint16 input_photometric ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  uint32 len32 ;
  void **data ;
  int tmp___9 ;
  uint16 ninks ;
  char const   *inknames ;
  int inknameslen ;
  size_t tmp___10 ;
  char const   *cp ;
  void *tmp___11 ;
  char *tmp___12 ;
  size_t tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned short pg0 ;
  unsigned short pg1 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;

  {
  TIFFSetField(out, (uint32 )256, width);
  TIFFSetField(out, (uint32 )257, length);
  tmp = TIFFGetField(in, (uint32 )258, & bps);
  if (tmp) {
    TIFFSetField(out, (uint32 )258, (int )bps);
  } else {

  }
  tmp___0 = TIFFGetField(in, (uint32 )277, & spp);
  if (tmp___0) {
    TIFFSetField(out, (uint32 )277, (int )spp);
  } else {

  }
  if ((int )compression != 65535) {
    TIFFSetField(out, (uint32 )259, (int )compression);
  } else {
    tmp___1 = TIFFGetField(in, (uint32 )259, & compression);
    if (tmp___1) {
      TIFFSetField(out, (uint32 )259, (int )compression);
    } else {

    }
  }
  if ((int )compression == 7) {
    tmp___2 = TIFFGetField(in, (uint32 )259, & input_compression);
    if (tmp___2) {
      if ((int )input_compression == 7) {
        TIFFSetField(in, (uint32 )65538, 1);
      } else {

      }
    } else {

    }
    tmp___3 = TIFFGetField(in, (uint32 )262, & input_photometric);
    if (tmp___3) {
      if ((int )input_photometric == 2) {
        if (jpegcolormode == 1) {
          TIFFSetField(out, (uint32 )262, 6);
        } else {
          TIFFSetField(out, (uint32 )262, 2);
        }
      } else {
        TIFFSetField(out, (uint32 )262, (int )input_photometric);
      }
    } else {

    }
  } else
  if ((int )compression == 34676) {
    goto _L;
  } else
  if ((int )compression == 34677) {
    _L: /* CIL Label */ 
    if ((int )spp == 1) {
      tmp___4 = 32844;
    } else {
      tmp___4 = 32845;
    }
    TIFFSetField(out, (uint32 )262, tmp___4);
  } else {
    TIFFSetField(out, (uint32 )262, (int )image->photometric);
  }
  if ((int )fillorder != 0) {
    TIFFSetField(out, (uint32 )266, (int )fillorder);
  } else {
    cpTag(in, out, (uint16 )266, (uint16 )1, (TIFFDataType )3);
  }
  TIFFSetField(out, (uint32 )274, (int )image->orientation);
  if (outtiled == -1) {
    outtiled = TIFFIsTiled(in);
  } else {

  }
  if (outtiled) {
    if (tilewidth == 4294967295U) {
      TIFFGetField(in, (uint32 )322, & tilewidth);
    } else {

    }
    if (tilelength == 4294967295U) {
      TIFFGetField(in, (uint32 )323, & tilelength);
    } else {

    }
    if (tilewidth > width) {
      tilewidth = width;
    } else {

    }
    if (tilelength > length) {
      tilelength = length;
    } else {

    }
    TIFFDefaultTileSize(out, & tilewidth, & tilelength);
    TIFFSetField(out, (uint32 )322, tilewidth);
    TIFFSetField(out, (uint32 )323, tilelength);
  } else {
    if (rowsperstrip == 0U) {
      tmp___5 = TIFFGetField(in, (uint32 )278, & rowsperstrip);
      if (tmp___5) {

      } else {
        rowsperstrip = TIFFDefaultStripSize(out, rowsperstrip);
      }
      if (rowsperstrip > length) {
        if (rowsperstrip != 4294967295U) {
          rowsperstrip = length;
        } else {

        }
      } else {

      }
    } else
    if (rowsperstrip == 4294967295U) {
      rowsperstrip = length;
    } else {

    }
    TIFFSetField(out, (uint32 )278, rowsperstrip);
  }
  if ((int )config != 65535) {
    TIFFSetField(out, (uint32 )284, (int )config);
  } else {
    tmp___6 = TIFFGetField(in, (uint32 )284, & config);
    if (tmp___6) {
      TIFFSetField(out, (uint32 )284, (int )config);
    } else {

    }
  }
  if ((int )spp <= 4) {
    cpTag(in, out, (uint16 )301, (uint16 )4, (TIFFDataType )3);
  } else {

  }
  cpTag(in, out, (uint16 )320, (uint16 )4, (TIFFDataType )3);
  switch ((int )compression) {
  case 7: 
  TIFFSetField(out, (uint32 )65537, quality);
  TIFFSetField(out, (uint32 )65538, jpegcolormode);
  break;
  case 32946: 
  case 8: 
  case 5: 
  if ((int )predictor != 65535) {
    TIFFSetField(out, (uint32 )317, (int )predictor);
  } else {
    tmp___7 = TIFFGetField(in, (uint32 )317, & predictor);
    if (tmp___7) {
      TIFFSetField(out, (uint32 )317, (int )predictor);
    } else {

    }
  }
  break;
  case 4: 
  case 3: 
  if ((int )compression == 3) {
    if (g3opts != 4294967295U) {
      TIFFSetField(out, (uint32 )292, g3opts);
    } else {
      tmp___8 = TIFFGetField(in, (uint32 )292, & g3opts);
      if (tmp___8) {
        TIFFSetField(out, (uint32 )292, g3opts);
      } else {

      }
    }
  } else {
    cpTag(in, out, (uint16 )293, (uint16 )1, (TIFFDataType )4);
  }
  cpTag(in, out, (uint16 )326, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )327, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )328, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34908, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34910, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34909, (uint16 )1, (TIFFDataType )2);
  break;
  }
  tmp___9 = TIFFGetField(in, (uint32 )34675, & len32, & data);
  if (tmp___9) {
    TIFFSetField(out, (uint32 )34675, len32, data);
  } else {

  }
  tmp___15 = TIFFGetField(in, (uint32 )334, & ninks);
  if (tmp___15) {
    TIFFSetField(out, (uint32 )334, (int )ninks);
    tmp___14 = TIFFGetField(in, (uint32 )333, & inknames);
    if (tmp___14) {
      tmp___10 = strlen(inknames);
      inknameslen = (int )(tmp___10 + 1U);
      cp = inknames;
      while ((int )ninks > 1) {
        tmp___11 = __rawmemchr((void const   *)cp, '\000');
        cp = (char const   *)((char *)tmp___11);
        if (cp) {
          cp ++;
          tmp___13 = strlen(cp);
          inknameslen = (int )((size_t )inknameslen + (tmp___13 + 1U));
        } else {

        }
        ninks = (uint16 )((int )ninks - 1);
      }
      TIFFSetField(out, (uint32 )333, inknameslen, inknames);
    } else {

    }
  } else {

  }
  tmp___17 = TIFFGetField(in, (uint32 )297, & pg0, & pg1);
  if (tmp___17) {
    if (pageNum < 0) {
      TIFFSetField(out, (uint32 )297, (int )pg0, (int )pg1);
    } else {
      tmp___16 = pageNum;
      pageNum ++;
      TIFFSetField(out, (uint32 )297, tmp___16, 0);
    }
  } else {

  }
  p = tags;
  while ((unsigned int )p < (unsigned int )(& tags[sizeof(tags) / sizeof(tags[0])])) {
    cpTag(in, out, p->tag, p->count, p->type);
    p ++;
  }
  TIFFSetField(out, (uint32 )282, (double )((float )hres));
  TIFFSetField(out, (uint32 )283, (double )((float )vres));
  if (outtiled) {
    if ((int )config == 1) {
      writeBufferToContigTiles(out, sect_buff, length, width, spp);
    } else {
      writeBufferToSeparateTiles(out, sect_buff, length, width, spp, dump);
    }
  } else
  if ((int )config == 1) {
    writeBufferToContigStrips(out, sect_buff, length, width, spp);
  } else {
    writeBufferToSeparateStrips(out, sect_buff, length, width, spp, dump);
  }
  tmp___18 = TIFFWriteDirectory(out);
  if (tmp___18) {

  } else {
    TIFFClose(out);
    return (-1);
  }
  return (0);
}
}
static int createImageSection(uint32 sectsize , unsigned char **sect_buff_ptr ) ;
static uint32 prev_sectsize  =    (uint32 )0;
static int createImageSection(uint32 sectsize , unsigned char **sect_buff_ptr ) 
{ 
  unsigned char *sect_buff ;
  unsigned char *new_buff ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  sect_buff = (unsigned char *)((void *)0);
  new_buff = (unsigned char *)((void *)0);
  sect_buff = *sect_buff_ptr;
  if (! sect_buff) {
    tmp = _TIFFmalloc((tmsize_t )sectsize);
    sect_buff = (unsigned char *)tmp;
    *sect_buff_ptr = sect_buff;
    _TIFFmemset((void *)sect_buff, 0, (tmsize_t )sectsize);
  } else
  if (prev_sectsize < sectsize) {
    tmp___0 = _TIFFrealloc((void *)sect_buff, (tmsize_t )sectsize);
    new_buff = (unsigned char *)tmp___0;
    if (! new_buff) {
      free((void *)sect_buff);
      tmp___1 = _TIFFmalloc((tmsize_t )sectsize);
      sect_buff = (unsigned char *)tmp___1;
    } else {
      sect_buff = new_buff;
    }
    _TIFFmemset((void *)sect_buff, 0, (tmsize_t )sectsize);
  } else {

  }
  if (! sect_buff) {
    TIFFError("createImageSection",
              "Unable to allocate/reallocate section buffer");
    return (-1);
  } else {

  }
  prev_sectsize = sectsize;
  *sect_buff_ptr = sect_buff;
  return (0);
}
}
static int processCropSelections(struct image_data *image ,
                                 struct crop_mask *crop ,
                                 unsigned char **read_buff_ptr ,
                                 struct buffinfo *seg_buffs ) 
{ 
  int i ;
  uint32 width ;
  uint32 length ;
  uint32 total_width ;
  uint32 total_length ;
  tsize_t cropsize ;
  unsigned char *crop_buff ;
  unsigned char *read_buff ;
  unsigned char *next_buff ;
  tsize_t prev_cropsize ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  char const   *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  char const   *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  crop_buff = (unsigned char *)((void *)0);
  read_buff = (unsigned char *)((void *)0);
  next_buff = (unsigned char *)((void *)0);
  prev_cropsize = (tsize_t )0;
  read_buff = *read_buff_ptr;
  if ((int )crop->img_mode == 0) {
    cropsize = (tsize_t )crop->bufftotal;
    crop_buff = (seg_buffs + 0)->buffer;
    if (! crop_buff) {
      tmp = _TIFFmalloc(cropsize);
      crop_buff = (unsigned char *)tmp;
    } else {
      prev_cropsize = (tsize_t )(seg_buffs + 0)->size;
      if (prev_cropsize < cropsize) {
        tmp___0 = _TIFFrealloc((void *)crop_buff, cropsize);
        next_buff = (unsigned char *)tmp___0;
        if (! next_buff) {
          _TIFFfree((void *)crop_buff);
          tmp___1 = _TIFFmalloc(cropsize);
          crop_buff = (unsigned char *)tmp___1;
        } else {
          crop_buff = next_buff;
        }
      } else {

      }
    }
    if (! crop_buff) {
      TIFFError("processCropSelections",
                "Unable to allocate/reallocate crop buffer");
      return (-1);
    } else {

    }
    _TIFFmemset((void *)crop_buff, 0, cropsize);
    (seg_buffs + 0)->buffer = crop_buff;
    (seg_buffs + 0)->size = (uint32 )cropsize;
    tmp___2 = extractCompositeRegions(image, crop, read_buff, crop_buff);
    if (tmp___2 != 0) {
      return (1);
    } else {

    }
    if ((int )crop->crop_mode & 128) {
      switch ((int )crop->photometric) {
      case 1: 
      case 0: 
      image->photometric = crop->photometric;
      break;
      case 11: 
      case 10: 
      tmp___3 = invertImage(image->photometric, image->spp, image->bps,
                            crop->combined_width, crop->combined_length,
                            crop_buff);
      if (tmp___3) {
        TIFFError("processCropSelections",
                  "Failed to invert colorspace for composite regions");
        return (-1);
      } else {

      }
      if ((int )crop->photometric == 11) {
        switch ((int )image->photometric) {
        case 0: 
        image->photometric = (uint16 )1;
        break;
        case 1: 
        image->photometric = (uint16 )0;
        break;
        default: 
        break;
        }
      } else {

      }
      break;
      default: 
      break;
      }
    } else {

    }
    if ((int )crop->crop_mode & 64) {
      tmp___5 = mirrorImage(image->spp, image->bps, crop->mirror,
                            crop->combined_width, crop->combined_length,
                            crop_buff);
      if (tmp___5) {
        if ((int )crop->rotation == 1) {
          tmp___4 = "horizontally";
        } else {
          tmp___4 = "vertically";
        }
        TIFFError("processCropSelections",
                  "Failed to mirror composite regions %s", tmp___4);
        return (-1);
      } else {

      }
    } else {

    }
    if ((int )crop->crop_mode & 32) {
      tmp___6 = rotateImage(crop->rotation, image, & crop->combined_width,
                            & crop->combined_length, & crop_buff);
      if (tmp___6) {
        TIFFError("processCropSelections",
                  "Failed to rotate composite regions by %d degrees",
                  (int )crop->rotation);
        return (-1);
      } else {

      }
      (seg_buffs + 0)->buffer = crop_buff;
      (seg_buffs + 0)->size = (((crop->combined_width * (uint32 )image->bps + 7U) / 8U) * (uint32 )image->spp) * crop->combined_length;
    } else {

    }
  } else {
    total_length = (uint32 )0;
    total_width = total_length;
    i = 0;
    while (i < (int )crop->selections) {
      cropsize = (tsize_t )crop->bufftotal;
      crop_buff = (seg_buffs + i)->buffer;
      if (! crop_buff) {
        tmp___7 = _TIFFmalloc(cropsize);
        crop_buff = (unsigned char *)tmp___7;
      } else {
        prev_cropsize = (tsize_t )(seg_buffs + 0)->size;
        if (prev_cropsize < cropsize) {
          tmp___8 = _TIFFrealloc((void *)crop_buff, cropsize);
          next_buff = (unsigned char *)tmp___8;
          if (! next_buff) {
            _TIFFfree((void *)crop_buff);
            tmp___9 = _TIFFmalloc(cropsize);
            crop_buff = (unsigned char *)tmp___9;
          } else {
            crop_buff = next_buff;
          }
        } else {

        }
      }
      if (! crop_buff) {
        TIFFError("processCropSelections",
                  "Unable to allocate/reallocate crop buffer");
        return (-1);
      } else {

      }
      _TIFFmemset((void *)crop_buff, 0, cropsize);
      (seg_buffs + i)->buffer = crop_buff;
      (seg_buffs + i)->size = (uint32 )cropsize;
      tmp___10 = extractSeparateRegion(image, crop, read_buff, crop_buff, i);
      if (tmp___10) {
        TIFFError("processCropSelections",
                  "Unable to extract cropped region %d from image", i);
        return (-1);
      } else {

      }
      width = crop->regionlist[i].width;
      length = crop->regionlist[i].length;
      if ((int )crop->crop_mode & 128) {
        switch ((int )crop->photometric) {
        case 1: 
        case 0: 
        image->photometric = crop->photometric;
        break;
        case 11: 
        case 10: 
        tmp___11 = invertImage(image->photometric, image->spp, image->bps,
                               width, length, crop_buff);
        if (tmp___11) {
          TIFFError("processCropSelections",
                    "Failed to invert colorspace for region");
          return (-1);
        } else {

        }
        if ((int )crop->photometric == 11) {
          switch ((int )image->photometric) {
          case 0: 
          image->photometric = (uint16 )1;
          break;
          case 1: 
          image->photometric = (uint16 )0;
          break;
          default: 
          break;
          }
        } else {

        }
        break;
        default: 
        break;
        }
      } else {

      }
      if ((int )crop->crop_mode & 64) {
        tmp___13 = mirrorImage(image->spp, image->bps, crop->mirror, width,
                               length, crop_buff);
        if (tmp___13) {
          if ((int )crop->rotation == 1) {
            tmp___12 = "horizontally";
          } else {
            tmp___12 = "vertically";
          }
          TIFFError("processCropSelections", "Failed to mirror crop region %s",
                    tmp___12);
          return (-1);
        } else {

        }
      } else {

      }
      if ((int )crop->crop_mode & 32) {
        tmp___14 = rotateImage(crop->rotation, image,
                               & crop->regionlist[i].width,
                               & crop->regionlist[i].length, & crop_buff);
        if (tmp___14) {
          TIFFError("processCropSelections",
                    "Failed to rotate crop region by %d degrees",
                    (int )crop->rotation);
          return (-1);
        } else {

        }
        total_width += crop->regionlist[i].width;
        total_length += crop->regionlist[i].length;
        crop->combined_width = total_width;
        crop->combined_length = total_length;
        (seg_buffs + i)->buffer = crop_buff;
        (seg_buffs + i)->size = (((crop->regionlist[i].width * (uint32 )image->bps + 7U) / 8U) * (uint32 )image->spp) * crop->regionlist[i].length;
      } else {

      }
      i ++;
    }
  }
  return (0);
}
}
static int createCroppedImage(struct image_data *image ,
                              struct crop_mask *crop ,
                              unsigned char **read_buff_ptr ,
                              unsigned char **crop_buff_ptr ) ;
static tsize_t prev_cropsize  =    (tsize_t )0;
static int createCroppedImage(struct image_data *image ,
                              struct crop_mask *crop ,
                              unsigned char **read_buff_ptr ,
                              unsigned char **crop_buff_ptr ) 
{ 
  tsize_t cropsize ;
  unsigned char *read_buff ;
  unsigned char *crop_buff ;
  unsigned char *new_buff ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  char const   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  read_buff = (unsigned char *)((void *)0);
  crop_buff = (unsigned char *)((void *)0);
  new_buff = (unsigned char *)((void *)0);
  read_buff = *read_buff_ptr;
  crop_buff = read_buff;
  *crop_buff_ptr = read_buff;
  crop->combined_width = image->width;
  crop->combined_length = image->length;
  cropsize = (tsize_t )crop->bufftotal;
  crop_buff = *crop_buff_ptr;
  if (! crop_buff) {
    tmp = _TIFFmalloc(cropsize);
    crop_buff = (unsigned char *)tmp;
    *crop_buff_ptr = crop_buff;
    _TIFFmemset((void *)crop_buff, 0, cropsize);
    prev_cropsize = cropsize;
  } else
  if (prev_cropsize < cropsize) {
    tmp___0 = _TIFFrealloc((void *)crop_buff, cropsize);
    new_buff = (unsigned char *)tmp___0;
    if (! new_buff) {
      free((void *)crop_buff);
      tmp___1 = _TIFFmalloc(cropsize);
      crop_buff = (unsigned char *)tmp___1;
    } else {
      crop_buff = new_buff;
    }
    _TIFFmemset((void *)crop_buff, 0, cropsize);
  } else {

  }
  if (! crop_buff) {
    TIFFError("createCroppedImage", "Unable to allocate/reallocate crop buffer");
    return (-1);
  } else {

  }
  *crop_buff_ptr = crop_buff;
  if ((int )crop->crop_mode & 128) {
    switch ((int )crop->photometric) {
    case 1: 
    case 0: 
    image->photometric = crop->photometric;
    break;
    case 11: 
    case 10: 
    tmp___2 = invertImage(image->photometric, image->spp, image->bps,
                          crop->combined_width, crop->combined_length, crop_buff);
    if (tmp___2) {
      TIFFError("createCroppedImage",
                "Failed to invert colorspace for image or cropped selection");
      return (-1);
    } else {

    }
    if ((int )crop->photometric == 11) {
      switch ((int )image->photometric) {
      case 0: 
      image->photometric = (uint16 )1;
      break;
      case 1: 
      image->photometric = (uint16 )0;
      break;
      default: 
      break;
      }
    } else {

    }
    break;
    default: 
    break;
    }
  } else {

  }
  if ((int )crop->crop_mode & 64) {
    tmp___4 = mirrorImage(image->spp, image->bps, crop->mirror,
                          crop->combined_width, crop->combined_length, crop_buff);
    if (tmp___4) {
      if ((int )crop->rotation == 1) {
        tmp___3 = "horizontally";
      } else {
        tmp___3 = "vertically";
      }
      TIFFError("createCroppedImage",
                "Failed to mirror image or cropped selection %s", tmp___3);
      return (-1);
    } else {

    }
  } else {

  }
  if ((int )crop->crop_mode & 32) {
    tmp___5 = rotateImage(crop->rotation, image, & crop->combined_width,
                          & crop->combined_length, crop_buff_ptr);
    if (tmp___5) {
      TIFFError("createCroppedImage",
                "Failed to rotate image or cropped selection by %d degrees",
                (int )crop->rotation);
      return (-1);
    } else {

    }
  } else {

  }
  if ((unsigned int )crop_buff == (unsigned int )read_buff) {
    *read_buff_ptr = (unsigned char *)((void *)0);
  } else {

  }
  return (0);
}
}
static int writeCroppedImage(TIFF *in , TIFF *out , struct image_data *image ,
                             struct dump_opts *dump , uint32 width ,
                             uint32 length , unsigned char *crop_buff ,
                             int pagenum , int total_pages ) 
{ 
  uint16 bps ;
  uint16 spp ;
  struct cpTag *p ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint16 input_compression ;
  uint16 input_photometric ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  uint32 len32 ;
  void **data ;
  int tmp___9 ;
  uint16 ninks ;
  char const   *inknames ;
  int inknameslen ;
  size_t tmp___10 ;
  char const   *cp ;
  void *tmp___11 ;
  char *tmp___12 ;
  size_t tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned short pg0 ;
  unsigned short pg1 ;
  int tmp___16 ;
  int tmp___17 ;

  {
  TIFFSetField(out, (uint32 )256, width);
  TIFFSetField(out, (uint32 )257, length);
  tmp = TIFFGetField(in, (uint32 )258, & bps);
  if (tmp) {
    TIFFSetField(out, (uint32 )258, (int )bps);
  } else {

  }
  tmp___0 = TIFFGetField(in, (uint32 )277, & spp);
  if (tmp___0) {
    TIFFSetField(out, (uint32 )277, (int )spp);
  } else {

  }
  if ((int )compression != 65535) {
    TIFFSetField(out, (uint32 )259, (int )compression);
  } else {
    tmp___1 = TIFFGetField(in, (uint32 )259, & compression);
    if (tmp___1) {
      TIFFSetField(out, (uint32 )259, (int )compression);
    } else {

    }
  }
  if ((int )compression == 7) {
    tmp___2 = TIFFGetField(in, (uint32 )259, & input_compression);
    if (tmp___2) {
      if ((int )input_compression == 7) {
        TIFFSetField(in, (uint32 )65538, 1);
      } else {

      }
    } else {

    }
    tmp___3 = TIFFGetField(in, (uint32 )262, & input_photometric);
    if (tmp___3) {
      if ((int )input_photometric == 2) {
        if (jpegcolormode == 1) {
          TIFFSetField(out, (uint32 )262, 6);
        } else {
          TIFFSetField(out, (uint32 )262, 2);
        }
      } else {
        TIFFSetField(out, (uint32 )262, (int )input_photometric);
      }
    } else {

    }
  } else
  if ((int )compression == 34676) {
    goto _L;
  } else
  if ((int )compression == 34677) {
    _L: /* CIL Label */ 
    if ((int )spp == 1) {
      tmp___4 = 32844;
    } else {
      tmp___4 = 32845;
    }
    TIFFSetField(out, (uint32 )262, tmp___4);
  } else {
    TIFFSetField(out, (uint32 )262, (int )image->photometric);
  }
  if ((int )fillorder != 0) {
    TIFFSetField(out, (uint32 )266, (int )fillorder);
  } else {
    cpTag(in, out, (uint16 )266, (uint16 )1, (TIFFDataType )3);
  }
  TIFFSetField(out, (uint32 )274, (int )image->orientation);
  if (outtiled == -1) {
    outtiled = TIFFIsTiled(in);
  } else {

  }
  if (outtiled) {
    if (tilewidth == 4294967295U) {
      TIFFGetField(in, (uint32 )322, & tilewidth);
    } else {

    }
    if (tilelength == 4294967295U) {
      TIFFGetField(in, (uint32 )323, & tilelength);
    } else {

    }
    if (tilewidth > width) {
      tilewidth = width;
    } else {

    }
    if (tilelength > length) {
      tilelength = length;
    } else {

    }
    TIFFDefaultTileSize(out, & tilewidth, & tilelength);
    TIFFSetField(out, (uint32 )322, tilewidth);
    TIFFSetField(out, (uint32 )323, tilelength);
  } else {
    if (rowsperstrip == 0U) {
      tmp___5 = TIFFGetField(in, (uint32 )278, & rowsperstrip);
      if (tmp___5) {

      } else {
        rowsperstrip = TIFFDefaultStripSize(out, rowsperstrip);
      }
      if (rowsperstrip > length) {
        rowsperstrip = length;
      } else {

      }
    } else
    if (rowsperstrip == 4294967295U) {
      rowsperstrip = length;
    } else {

    }
    TIFFSetField(out, (uint32 )278, rowsperstrip);
  }
  if ((int )config != 65535) {
    TIFFSetField(out, (uint32 )284, (int )config);
  } else {
    tmp___6 = TIFFGetField(in, (uint32 )284, & config);
    if (tmp___6) {
      TIFFSetField(out, (uint32 )284, (int )config);
    } else {

    }
  }
  if ((int )spp <= 4) {
    cpTag(in, out, (uint16 )301, (uint16 )4, (TIFFDataType )3);
  } else {

  }
  cpTag(in, out, (uint16 )320, (uint16 )4, (TIFFDataType )3);
  switch ((int )compression) {
  case 7: 
  TIFFSetField(out, (uint32 )65537, quality);
  TIFFSetField(out, (uint32 )65538, jpegcolormode);
  break;
  case 32946: 
  case 8: 
  case 5: 
  if ((int )predictor != 65535) {
    TIFFSetField(out, (uint32 )317, (int )predictor);
  } else {
    tmp___7 = TIFFGetField(in, (uint32 )317, & predictor);
    if (tmp___7) {
      TIFFSetField(out, (uint32 )317, (int )predictor);
    } else {

    }
  }
  break;
  case 4: 
  case 3: 
  if ((int )compression == 3) {
    if (g3opts != 4294967295U) {
      TIFFSetField(out, (uint32 )292, g3opts);
    } else {
      tmp___8 = TIFFGetField(in, (uint32 )292, & g3opts);
      if (tmp___8) {
        TIFFSetField(out, (uint32 )292, g3opts);
      } else {

      }
    }
  } else {
    cpTag(in, out, (uint16 )293, (uint16 )1, (TIFFDataType )4);
  }
  cpTag(in, out, (uint16 )326, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )327, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )328, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34908, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34910, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34909, (uint16 )1, (TIFFDataType )2);
  break;
  }
  tmp___9 = TIFFGetField(in, (uint32 )34675, & len32, & data);
  if (tmp___9) {
    TIFFSetField(out, (uint32 )34675, len32, data);
  } else {

  }
  tmp___15 = TIFFGetField(in, (uint32 )334, & ninks);
  if (tmp___15) {
    TIFFSetField(out, (uint32 )334, (int )ninks);
    tmp___14 = TIFFGetField(in, (uint32 )333, & inknames);
    if (tmp___14) {
      tmp___10 = strlen(inknames);
      inknameslen = (int )(tmp___10 + 1U);
      cp = inknames;
      while ((int )ninks > 1) {
        tmp___11 = __rawmemchr((void const   *)cp, '\000');
        cp = (char const   *)((char *)tmp___11);
        if (cp) {
          cp ++;
          tmp___13 = strlen(cp);
          inknameslen = (int )((size_t )inknameslen + (tmp___13 + 1U));
        } else {

        }
        ninks = (uint16 )((int )ninks - 1);
      }
      TIFFSetField(out, (uint32 )333, inknameslen, inknames);
    } else {

    }
  } else {

  }
  tmp___16 = TIFFGetField(in, (uint32 )297, & pg0, & pg1);
  if (tmp___16) {
    TIFFSetField(out, (uint32 )297, pagenum, total_pages);
  } else {

  }
  p = tags;
  while ((unsigned int )p < (unsigned int )(& tags[sizeof(tags) / sizeof(tags[0])])) {
    cpTag(in, out, p->tag, p->count, p->type);
    p ++;
  }
  if (outtiled) {
    if ((int )config == 1) {
      writeBufferToContigTiles(out, crop_buff, length, width, spp);
    } else {
      writeBufferToSeparateTiles(out, crop_buff, length, width, spp, dump);
    }
  } else
  if ((int )config == 1) {
    writeBufferToContigStrips(out, crop_buff, length, width, spp);
  } else {
    writeBufferToSeparateStrips(out, crop_buff, length, width, spp, dump);
  }
  tmp___17 = TIFFWriteDirectory(out);
  if (tmp___17) {

  } else {
    TIFFClose(out);
    return (-1);
  }
  return (0);
}
}
static int rotateContigSamples8bits(uint16 rotation , uint16 spp , uint16 bps ,
                                    uint32 width , uint32 length , uint32 col ,
                                    uint8 *src , uint8 *dst ) 
{ 
  int ready_bits ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 row ;
  uint32 rowsize ;
  uint32 bit_offset ;
  uint8 matchbits ;
  uint8 maskbits ;
  uint8 buff1 ;
  uint8 buff2 ;
  uint8 *next ;
  tsample_t sample ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  ready_bits = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  rowsize = (uint32 )0;
  bit_offset = (uint32 )0;
  matchbits = (uint8 )0;
  maskbits = (uint8 )0;
  buff1 = (uint8 )0;
  buff2 = (uint8 )0;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples8bits", "Invalid src or destination buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples8bits", "Invalid src or destination buffer");
    return (1);
  } else {

  }
  rowsize = ((uint32 )((int )bps * (int )spp) * width + 7U) / 8U;
  ready_bits = 0;
  maskbits = (uint8 )(255 >> (8 - (int )bps));
  buff2 = (uint8 )0;
  buff1 = buff2;
  row = (uint32 )0;
  while (row < length) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      switch ((int )rotation) {
      case 90: 
      next = (src + src_byte) - row * rowsize;
      break;
      case 270: 
      next = (src + src_byte) + row * rowsize;
      break;
      default: 
      TIFFError("rotateContigSamples8bits", "Invalid rotation %d",
                (int )rotation);
      return (1);
      }
      matchbits = (uint8 )((int )maskbits << ((8U - src_bit) - (uint32 )bps));
      buff1 = (uint8 )(((int )*next & (int )matchbits) << src_bit);
      if (ready_bits >= 8) {
        tmp = dst;
        dst ++;
        *tmp = buff2;
        buff2 = buff1;
        ready_bits -= 8;
      } else {
        buff2 = (uint8 )((int )buff2 | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    row ++;
  }
  if (ready_bits > 0) {
    buff1 = (uint8 )((unsigned int )buff2 & (255U << (8 - ready_bits)));
    tmp___0 = dst;
    dst ++;
    *tmp___0 = buff1;
  } else {

  }
  return (0);
}
}
static int rotateContigSamples16bits(uint16 rotation , uint16 spp , uint16 bps ,
                                     uint32 width , uint32 length , uint32 col ,
                                     uint8 *src , uint8 *dst ) 
{ 
  int ready_bits ;
  uint32 row ;
  uint32 rowsize ;
  uint32 bit_offset ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint16 matchbits ;
  uint16 maskbits ;
  uint16 buff1 ;
  uint16 buff2 ;
  uint8 bytebuff ;
  uint8 swapbuff[2] ;
  uint8 *next ;
  tsample_t sample ;
  uint8 *tmp ;
  uint8 *tmp___0 ;

  {
  ready_bits = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  matchbits = (uint16 )0;
  maskbits = (uint16 )0;
  buff1 = (uint16 )0;
  buff2 = (uint16 )0;
  bytebuff = (uint8 )0;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples16bits", "Invalid src or destination buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples16bits", "Invalid src or destination buffer");
    return (1);
  } else {

  }
  rowsize = ((uint32 )((int )bps * (int )spp) * width + 7U) / 8U;
  ready_bits = 0;
  maskbits = (uint16 )(65535 >> (16 - (int )bps));
  buff2 = (uint16 )0;
  buff1 = buff2;
  row = (uint32 )0;
  while (row < length) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      switch ((int )rotation) {
      case 90: 
      next = (src + src_byte) - row * rowsize;
      break;
      case 270: 
      next = (src + src_byte) + row * rowsize;
      break;
      default: 
      TIFFError("rotateContigSamples8bits", "Invalid rotation %d",
                (int )rotation);
      return (1);
      }
      matchbits = (uint16 )((int )maskbits << ((16U - src_bit) - (uint32 )bps));
      if (little_endian) {
        swapbuff[1] = *next;
        swapbuff[0] = *(next + 1);
      } else {
        swapbuff[0] = *next;
        swapbuff[1] = *(next + 1);
      }
      buff1 = *((uint16 *)(swapbuff));
      buff1 = (uint16 )(((int )buff1 & (int )matchbits) << src_bit);
      if (ready_bits >= 8) {
        bytebuff = (uint8 )((int )buff2 >> 8);
        tmp = dst;
        dst ++;
        *tmp = bytebuff;
        ready_bits -= 8;
        buff2 = (uint16 )(((int )buff2 << 8) | ((int )buff1 >> ready_bits));
      } else {
        bytebuff = (uint8 )0;
        buff2 = (uint16 )((int )buff2 | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    row ++;
  }
  if (ready_bits > 0) {
    bytebuff = (uint8 )((int )buff2 >> 8);
    tmp___0 = dst;
    dst ++;
    *tmp___0 = bytebuff;
  } else {

  }
  return (0);
}
}
static int rotateContigSamples24bits(uint16 rotation , uint16 spp , uint16 bps ,
                                     uint32 width , uint32 length , uint32 col ,
                                     uint8 *src , uint8 *dst ) 
{ 
  int ready_bits ;
  uint32 row ;
  uint32 rowsize ;
  uint32 bit_offset ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 matchbits ;
  uint32 maskbits ;
  uint32 buff1 ;
  uint32 buff2 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 swapbuff[4] ;
  uint8 *next ;
  tsample_t sample ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint8 *tmp___1 ;

  {
  ready_bits = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  matchbits = (uint32 )0;
  maskbits = (uint32 )0;
  buff1 = (uint32 )0;
  buff2 = (uint32 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples24bits", "Invalid src or destination buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples24bits", "Invalid src or destination buffer");
    return (1);
  } else {

  }
  rowsize = ((uint32 )((int )bps * (int )spp) * width + 7U) / 8U;
  ready_bits = 0;
  maskbits = 4294967295U >> (32 - (int )bps);
  buff2 = (uint32 )0;
  buff1 = buff2;
  row = (uint32 )0;
  while (row < length) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      switch ((int )rotation) {
      case 90: 
      next = (src + src_byte) - row * rowsize;
      break;
      case 270: 
      next = (src + src_byte) + row * rowsize;
      break;
      default: 
      TIFFError("rotateContigSamples8bits", "Invalid rotation %d",
                (int )rotation);
      return (1);
      }
      matchbits = maskbits << ((32U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff[3] = *next;
        swapbuff[2] = *(next + 1);
        swapbuff[1] = *(next + 2);
        swapbuff[0] = *(next + 3);
      } else {
        swapbuff[0] = *next;
        swapbuff[1] = *(next + 1);
        swapbuff[2] = *(next + 2);
        swapbuff[3] = *(next + 3);
      }
      buff1 = *((uint32 *)(swapbuff));
      buff1 = (buff1 & matchbits) << src_bit;
      if (ready_bits >= 16) {
        bytebuff1 = (uint8 )(buff2 >> 24);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 16);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        ready_bits -= 16;
        buff2 = (buff2 << 16) | (buff1 >> ready_bits);
      } else {
        bytebuff2 = (uint8 )0;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    row ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 24);
    tmp___1 = dst;
    dst ++;
    *tmp___1 = bytebuff1;
    buff2 <<= 8;
    bytebuff2 = bytebuff1;
    ready_bits -= 8;
  }
  return (0);
}
}
static int rotateContigSamples32bits(uint16 rotation , uint16 spp , uint16 bps ,
                                     uint32 width , uint32 length , uint32 col ,
                                     uint8 *src , uint8 *dst ) 
{ 
  int ready_bits ;
  int shift_width ;
  int bytes_per_sample ;
  int bytes_per_pixel ;
  uint32 row ;
  uint32 rowsize ;
  uint32 bit_offset ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 longbuff1 ;
  uint32 longbuff2 ;
  uint64 maskbits ;
  uint64 matchbits ;
  uint64 buff1 ;
  uint64 buff2 ;
  uint64 buff3 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 bytebuff3 ;
  uint8 bytebuff4 ;
  unsigned char swapbuff1[4] ;
  unsigned char swapbuff2[4] ;
  uint8 *next ;
  tsample_t sample ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint8 *tmp___1 ;
  uint8 *tmp___2 ;
  uint8 *tmp___3 ;

  {
  ready_bits = 0;
  shift_width = 0;
  longbuff1 = (uint32 )0;
  longbuff2 = (uint32 )0;
  maskbits = (uint64 )0;
  matchbits = (uint64 )0;
  buff1 = (uint64 )0;
  buff2 = (uint64 )0;
  buff3 = (uint64 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  bytebuff3 = (uint8 )0;
  bytebuff4 = (uint8 )0;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples24bits", "Invalid src or destination buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("rotateContigSamples24bits", "Invalid src or destination buffer");
    return (1);
  } else {

  }
  bytes_per_sample = ((int )bps + 7) / 8;
  bytes_per_pixel = ((int )bps * (int )spp + 7) / 8;
  if (bytes_per_pixel < bytes_per_sample + 1) {
    shift_width = bytes_per_pixel;
  } else {
    shift_width = bytes_per_sample + 1;
  }
  rowsize = ((uint32 )((int )bps * (int )spp) * width + 7U) / 8U;
  ready_bits = 0;
  maskbits = 0xffffffffffffffffULL >> (64 - (int )bps);
  buff2 = (uint64 )0;
  buff1 = buff2;
  row = (uint32 )0;
  while (row < length) {
    bit_offset = (col * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      switch ((int )rotation) {
      case 90: 
      next = (src + src_byte) - row * rowsize;
      break;
      case 270: 
      next = (src + src_byte) + row * rowsize;
      break;
      default: 
      TIFFError("rotateContigSamples8bits", "Invalid rotation %d",
                (int )rotation);
      return (1);
      }
      matchbits = maskbits << ((64U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff1[3] = *next;
        swapbuff1[2] = *(next + 1);
        swapbuff1[1] = *(next + 2);
        swapbuff1[0] = *(next + 3);
      } else {
        swapbuff1[0] = *next;
        swapbuff1[1] = *(next + 1);
        swapbuff1[2] = *(next + 2);
        swapbuff1[3] = *(next + 3);
      }
      longbuff1 = *((uint32 *)(swapbuff1));
      memset((void *)(swapbuff2), '\000', sizeof(swapbuff2));
      if (little_endian) {
        swapbuff2[3] = *next;
        swapbuff2[2] = *(next + 1);
        swapbuff2[1] = *(next + 2);
        swapbuff2[0] = *(next + 3);
      } else {
        swapbuff2[0] = *next;
        swapbuff2[1] = *(next + 1);
        swapbuff2[2] = *(next + 2);
        swapbuff2[3] = *(next + 3);
      }
      longbuff2 = *((uint32 *)(swapbuff2));
      buff3 = ((uint64 )longbuff1 << 32) | (unsigned long long )longbuff2;
      buff1 = (buff3 & matchbits) << src_bit;
      if (ready_bits < 32) {
        bytebuff4 = (uint8 )0;
        bytebuff3 = bytebuff4;
        bytebuff2 = bytebuff3;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      } else {
        bytebuff1 = (uint8 )(buff2 >> 56);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 48);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        bytebuff3 = (uint8 )(buff2 >> 40);
        tmp___1 = dst;
        dst ++;
        *tmp___1 = bytebuff3;
        bytebuff4 = (uint8 )(buff2 >> 32);
        tmp___2 = dst;
        dst ++;
        *tmp___2 = bytebuff4;
        ready_bits -= 32;
        buff2 = (buff2 << 32) | (buff1 >> ready_bits);
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    row ++;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 56);
    tmp___3 = dst;
    dst ++;
    *tmp___3 = bytebuff1;
    buff2 <<= 8;
    ready_bits -= 8;
  }
  return (0);
}
}
static int rotateImage(uint16 rotation , struct image_data *image ,
                       uint32 *img_width , uint32 *img_length ,
                       unsigned char **ibuff_ptr ) 
{ 
  int shift_width ;
  uint32 bytes_per_pixel ;
  uint32 bytes_per_sample ;
  uint32 row ;
  uint32 rowsize ;
  uint32 src_offset ;
  uint32 dst_offset ;
  uint32 i ;
  uint32 col ;
  uint32 width ;
  uint32 length ;
  uint32 colsize ;
  uint32 buffsize ;
  uint32 col_offset ;
  uint32 pix_offset ;
  unsigned char *ibuff ;
  unsigned char *src ;
  unsigned char *dst ;
  uint16 spp ;
  uint16 bps ;
  float res_temp ;
  unsigned char *rbuff ;
  void *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned char *tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  unsigned char *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
  rbuff = (unsigned char *)((void *)0);
  width = *img_width;
  length = *img_length;
  spp = image->spp;
  bps = image->bps;
  rowsize = ((uint32 )((int )bps * (int )spp) * width + 7U) / 8U;
  colsize = ((uint32 )((int )bps * (int )spp) * length + 7U) / 8U;
  if (colsize * width > rowsize * length) {
    buffsize = (colsize + 1U) * width;
  } else {
    buffsize = (rowsize + 1U) * length;
  }
  bytes_per_sample = (uint32 )(((int )bps + 7) / 8);
  bytes_per_pixel = (uint32 )(((int )bps * (int )spp + 7) / 8);
  if (bytes_per_pixel < bytes_per_sample + 1U) {
    shift_width = (int )bytes_per_pixel;
  } else {
    shift_width = (int )(bytes_per_sample + 1U);
  }
  switch ((int )rotation) {
  case 360: 
  case 0: 
  return (0);
  case 270: 
  case 180: 
  case 90: 
  break;
  default: 
  TIFFError("rotateImage", "Invalid rotation angle %d", (int )rotation);
  return (-1);
  }
  tmp = _TIFFmalloc((tmsize_t )buffsize);
  rbuff = (unsigned char *)tmp;
  if (rbuff) {

  } else {
    TIFFError("rotateImage", "Unable to allocate rotation buffer of %1u bytes",
              buffsize);
    return (-1);
  }
  _TIFFmemset((void *)rbuff, '\000', (tmsize_t )buffsize);
  ibuff = *ibuff_ptr;
  switch ((int )rotation) {
  case 180: 
  if ((int )bps % 8 == 0) {
    src = ibuff;
    pix_offset = (uint32 )(((int )spp * (int )bps) / 8);
    row = (uint32 )0;
    while (row < length) {
      dst_offset = ((length - row) - 1U) * rowsize;
      col = (uint32 )0;
      while (col < width) {
        col_offset = ((width - col) - 1U) * pix_offset;
        dst = (rbuff + dst_offset) + col_offset;
        i = (uint32 )0;
        while (i < bytes_per_pixel) {
          tmp___0 = dst;
          dst ++;
          tmp___1 = src;
          src ++;
          *tmp___0 = *tmp___1;
          i ++;
        }
        col ++;
      }
      row ++;
    }
  } else {
    row = (uint32 )0;
    while (row < length) {
      src_offset = row * rowsize;
      dst_offset = ((length - row) - 1U) * rowsize;
      src = ibuff + src_offset;
      dst = rbuff + dst_offset;
      switch (shift_width) {
      case 1: 
      tmp___2 = reverseSamples8bits(spp, bps, width, src, dst);
      if (tmp___2) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 2: 
      tmp___3 = reverseSamples16bits(spp, bps, width, src, dst);
      if (tmp___3) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 3: 
      tmp___4 = reverseSamples24bits(spp, bps, width, src, dst);
      if (tmp___4) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 5: 
      case 4: 
      tmp___5 = reverseSamples32bits(spp, bps, width, src, dst);
      if (tmp___5) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      default: 
      TIFFError("rotateImage", "Unsupported bit depth %d", (int )bps);
      _TIFFfree((void *)rbuff);
      return (-1);
      }
      row ++;
    }
  }
  _TIFFfree((void *)ibuff);
  *ibuff_ptr = rbuff;
  break;
  case 90: 
  if ((int )bps % 8 == 0) {
    col = (uint32 )0;
    while (col < width) {
      src_offset = (length - 1U) * rowsize + col * bytes_per_pixel;
      dst_offset = col * colsize;
      src = ibuff + src_offset;
      dst = rbuff + dst_offset;
      row = length;
      while (row > 0U) {
        i = (uint32 )0;
        while (i < bytes_per_pixel) {
          tmp___6 = dst;
          dst ++;
          *tmp___6 = *(src + i);
          i ++;
        }
        src -= rowsize;
        row --;
      }
      col ++;
    }
  } else {
    col = (uint32 )0;
    while (col < width) {
      src_offset = (length - 1U) * rowsize;
      dst_offset = col * colsize;
      src = ibuff + src_offset;
      dst = rbuff + dst_offset;
      switch (shift_width) {
      case 1: 
      tmp___7 = rotateContigSamples8bits(rotation, spp, bps, width, length, col,
                                         src, dst);
      if (tmp___7) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 2: 
      tmp___8 = rotateContigSamples16bits(rotation, spp, bps, width, length,
                                          col, src, dst);
      if (tmp___8) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 3: 
      tmp___9 = rotateContigSamples24bits(rotation, spp, bps, width, length,
                                          col, src, dst);
      if (tmp___9) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 5: 
      case 4: 
      tmp___10 = rotateContigSamples32bits(rotation, spp, bps, width, length,
                                           col, src, dst);
      if (tmp___10) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      default: 
      TIFFError("rotateImage", "Unsupported bit depth %d", (int )bps);
      _TIFFfree((void *)rbuff);
      return (-1);
      }
      col ++;
    }
  }
  _TIFFfree((void *)ibuff);
  *ibuff_ptr = rbuff;
  *img_width = length;
  *img_length = width;
  image->width = length;
  image->length = width;
  res_temp = image->xres;
  image->xres = image->yres;
  image->yres = res_temp;
  break;
  case 270: 
  if ((int )bps % 8 == 0) {
    col = (uint32 )0;
    while (col < width) {
      src_offset = col * bytes_per_pixel;
      dst_offset = ((width - col) - 1U) * colsize;
      src = ibuff + src_offset;
      dst = rbuff + dst_offset;
      row = length;
      while (row > 0U) {
        i = (uint32 )0;
        while (i < bytes_per_pixel) {
          tmp___11 = dst;
          dst ++;
          *tmp___11 = *(src + i);
          i ++;
        }
        src += rowsize;
        row --;
      }
      col ++;
    }
  } else {
    col = (uint32 )0;
    while (col < width) {
      src_offset = (uint32 )0;
      dst_offset = ((width - col) - 1U) * colsize;
      src = ibuff + src_offset;
      dst = rbuff + dst_offset;
      switch (shift_width) {
      case 1: 
      tmp___12 = rotateContigSamples8bits(rotation, spp, bps, width, length,
                                          col, src, dst);
      if (tmp___12) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 2: 
      tmp___13 = rotateContigSamples16bits(rotation, spp, bps, width, length,
                                           col, src, dst);
      if (tmp___13) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 3: 
      tmp___14 = rotateContigSamples24bits(rotation, spp, bps, width, length,
                                           col, src, dst);
      if (tmp___14) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      case 5: 
      case 4: 
      tmp___15 = rotateContigSamples32bits(rotation, spp, bps, width, length,
                                           col, src, dst);
      if (tmp___15) {
        _TIFFfree((void *)rbuff);
        return (-1);
      } else {

      }
      break;
      default: 
      TIFFError("rotateImage", "Unsupported bit depth %d", (int )bps);
      _TIFFfree((void *)rbuff);
      return (-1);
      }
      col ++;
    }
  }
  _TIFFfree((void *)ibuff);
  *ibuff_ptr = rbuff;
  *img_width = length;
  *img_length = width;
  image->width = length;
  image->length = width;
  res_temp = image->xres;
  image->xres = image->yres;
  image->yres = res_temp;
  break;
  default: 
  break;
  }
  return (0);
}
}
static int reverseSamples8bits(uint16 spp , uint16 bps , uint32 width ,
                               uint8 *ibuff , uint8 *obuff ) 
{ 
  int ready_bits ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint8 matchbits ;
  uint8 maskbits ;
  uint8 buff1 ;
  uint8 buff2 ;
  unsigned char *src ;
  unsigned char *dst ;
  tsample_t sample ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;

  {
  ready_bits = 0;
  bit_offset = (uint32 )0;
  matchbits = (uint8 )0;
  maskbits = (uint8 )0;
  buff1 = (uint8 )0;
  buff2 = (uint8 )0;
  if ((unsigned int )ibuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSamples8bits", "Invalid image or work buffer");
    return (1);
  } else
  if ((unsigned int )obuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSamples8bits", "Invalid image or work buffer");
    return (1);
  } else {

  }
  ready_bits = 0;
  maskbits = (uint8 )(255 >> (8 - (int )bps));
  dst = obuff;
  col = width;
  while (col > 0U) {
    bit_offset = ((col - 1U) * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      src = ibuff + src_byte;
      matchbits = (uint8 )((int )maskbits << ((8U - src_bit) - (uint32 )bps));
      buff1 = (uint8 )(((int )*src & (int )matchbits) << src_bit);
      if (ready_bits < 8) {
        buff2 = (uint8 )((int )buff2 | ((int )buff1 >> ready_bits));
      } else {
        tmp = dst;
        dst ++;
        *tmp = buff2;
        buff2 = buff1;
        ready_bits -= 8;
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    col --;
  }
  if (ready_bits > 0) {
    buff1 = (uint8 )((unsigned int )buff2 & (255U << (8 - ready_bits)));
    tmp___0 = dst;
    dst ++;
    *tmp___0 = buff1;
  } else {

  }
  return (0);
}
}
static int reverseSamples16bits(uint16 spp , uint16 bps , uint32 width ,
                                uint8 *ibuff , uint8 *obuff ) 
{ 
  int ready_bits ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint16 matchbits ;
  uint16 maskbits ;
  uint16 buff1 ;
  uint16 buff2 ;
  uint8 bytebuff ;
  unsigned char *src ;
  unsigned char *dst ;
  unsigned char swapbuff[2] ;
  tsample_t sample ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;

  {
  ready_bits = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  bit_offset = (uint32 )0;
  matchbits = (uint16 )0;
  maskbits = (uint16 )0;
  buff1 = (uint16 )0;
  buff2 = (uint16 )0;
  bytebuff = (uint8 )0;
  if ((unsigned int )ibuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSample16bits", "Invalid image or work buffer");
    return (1);
  } else
  if ((unsigned int )obuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSample16bits", "Invalid image or work buffer");
    return (1);
  } else {

  }
  ready_bits = 0;
  maskbits = (uint16 )(65535 >> (16 - (int )bps));
  dst = obuff;
  col = width;
  while (col > 0U) {
    bit_offset = ((col - 1U) * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      src = ibuff + src_byte;
      matchbits = (uint16 )((int )maskbits << ((16U - src_bit) - (uint32 )bps));
      if (little_endian) {
        swapbuff[1] = *src;
        swapbuff[0] = *(src + 1);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
      }
      buff1 = *((uint16 *)(swapbuff));
      buff1 = (uint16 )(((int )buff1 & (int )matchbits) << src_bit);
      if (ready_bits < 8) {
        bytebuff = (uint8 )0;
        buff2 = (uint16 )((int )buff2 | ((int )buff1 >> ready_bits));
      } else {
        bytebuff = (uint8 )((int )buff2 >> 8);
        tmp = dst;
        dst ++;
        *tmp = bytebuff;
        ready_bits -= 8;
        buff2 = (uint16 )(((int )buff2 << 8) | ((int )buff1 >> ready_bits));
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    col --;
  }
  if (ready_bits > 0) {
    bytebuff = (uint8 )((int )buff2 >> 8);
    tmp___0 = dst;
    dst ++;
    *tmp___0 = bytebuff;
  } else {

  }
  return (0);
}
}
static int reverseSamples24bits(uint16 spp , uint16 bps , uint32 width ,
                                uint8 *ibuff , uint8 *obuff ) 
{ 
  int ready_bits ;
  uint32 col ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 bit_offset ;
  uint32 matchbits ;
  uint32 maskbits ;
  uint32 buff1 ;
  uint32 buff2 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  unsigned char *src ;
  unsigned char *dst ;
  unsigned char swapbuff[4] ;
  tsample_t sample ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;

  {
  ready_bits = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  bit_offset = (uint32 )0;
  matchbits = (uint32 )0;
  maskbits = (uint32 )0;
  buff1 = (uint32 )0;
  buff2 = (uint32 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  if ((unsigned int )ibuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSamples24bits", "Invalid image or work buffer");
    return (1);
  } else
  if ((unsigned int )obuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSamples24bits", "Invalid image or work buffer");
    return (1);
  } else {

  }
  ready_bits = 0;
  maskbits = 4294967295U >> (32 - (int )bps);
  dst = obuff;
  col = width;
  while (col > 0U) {
    bit_offset = ((col - 1U) * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      src = ibuff + src_byte;
      matchbits = maskbits << ((32U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff[3] = *src;
        swapbuff[2] = *(src + 1);
        swapbuff[1] = *(src + 2);
        swapbuff[0] = *(src + 3);
      } else {
        swapbuff[0] = *src;
        swapbuff[1] = *(src + 1);
        swapbuff[2] = *(src + 2);
        swapbuff[3] = *(src + 3);
      }
      buff1 = *((uint32 *)(swapbuff));
      buff1 = (buff1 & matchbits) << src_bit;
      if (ready_bits < 16) {
        bytebuff2 = (uint8 )0;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      } else {
        bytebuff1 = (uint8 )(buff2 >> 24);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 16);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        ready_bits -= 16;
        buff2 = (buff2 << 16) | (buff1 >> ready_bits);
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    col --;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 24);
    tmp___1 = dst;
    dst ++;
    *tmp___1 = bytebuff1;
    buff2 <<= 8;
    bytebuff2 = bytebuff1;
    ready_bits -= 8;
  }
  return (0);
}
}
static int reverseSamples32bits(uint16 spp , uint16 bps , uint32 width ,
                                uint8 *ibuff , uint8 *obuff ) 
{ 
  int ready_bits ;
  int shift_width ;
  int bytes_per_sample ;
  int bytes_per_pixel ;
  uint32 bit_offset ;
  uint32 src_byte ;
  uint32 src_bit ;
  uint32 col ;
  uint32 longbuff1 ;
  uint32 longbuff2 ;
  uint64 maskbits ;
  uint64 matchbits ;
  uint64 buff1 ;
  uint64 buff2 ;
  uint64 buff3 ;
  uint8 bytebuff1 ;
  uint8 bytebuff2 ;
  uint8 bytebuff3 ;
  uint8 bytebuff4 ;
  unsigned char *src ;
  unsigned char *dst ;
  unsigned char swapbuff1[4] ;
  unsigned char swapbuff2[4] ;
  tsample_t sample ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;

  {
  ready_bits = 0;
  shift_width = 0;
  src_byte = (uint32 )0;
  src_bit = (uint32 )0;
  longbuff1 = (uint32 )0;
  longbuff2 = (uint32 )0;
  maskbits = (uint64 )0;
  matchbits = (uint64 )0;
  buff1 = (uint64 )0;
  buff2 = (uint64 )0;
  buff3 = (uint64 )0;
  bytebuff1 = (uint8 )0;
  bytebuff2 = (uint8 )0;
  bytebuff3 = (uint8 )0;
  bytebuff4 = (uint8 )0;
  if ((unsigned int )ibuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSamples32bits", "Invalid image or work buffer");
    return (1);
  } else
  if ((unsigned int )obuff == (unsigned int )((void *)0)) {
    TIFFError("reverseSamples32bits", "Invalid image or work buffer");
    return (1);
  } else {

  }
  ready_bits = 0;
  maskbits = 0xffffffffffffffffULL >> (64 - (int )bps);
  dst = obuff;
  bytes_per_sample = ((int )bps + 7) / 8;
  bytes_per_pixel = ((int )bps * (int )spp + 7) / 8;
  if (bytes_per_pixel < bytes_per_sample + 1) {
    shift_width = bytes_per_pixel;
  } else {
    shift_width = bytes_per_sample + 1;
  }
  col = width;
  while (col > 0U) {
    bit_offset = ((col - 1U) * (uint32 )bps) * (uint32 )spp;
    sample = (tsample_t )0;
    while ((int )sample < (int )spp) {
      if ((int )sample == 0) {
        src_byte = bit_offset / 8U;
        src_bit = bit_offset % 8U;
      } else {
        src_byte = (bit_offset + (uint32 )((int )sample * (int )bps)) / 8U;
        src_bit = (bit_offset + (uint32 )((int )sample * (int )bps)) % 8U;
      }
      src = ibuff + src_byte;
      matchbits = maskbits << ((64U - src_bit) - (uint32 )bps);
      if (little_endian) {
        swapbuff1[3] = *src;
        swapbuff1[2] = *(src + 1);
        swapbuff1[1] = *(src + 2);
        swapbuff1[0] = *(src + 3);
      } else {
        swapbuff1[0] = *src;
        swapbuff1[1] = *(src + 1);
        swapbuff1[2] = *(src + 2);
        swapbuff1[3] = *(src + 3);
      }
      longbuff1 = *((uint32 *)(swapbuff1));
      memset((void *)(swapbuff2), '\000', sizeof(swapbuff2));
      if (little_endian) {
        swapbuff2[3] = *src;
        swapbuff2[2] = *(src + 1);
        swapbuff2[1] = *(src + 2);
        swapbuff2[0] = *(src + 3);
      } else {
        swapbuff2[0] = *src;
        swapbuff2[1] = *(src + 1);
        swapbuff2[2] = *(src + 2);
        swapbuff2[3] = *(src + 3);
      }
      longbuff2 = *((uint32 *)(swapbuff2));
      buff3 = ((uint64 )longbuff1 << 32) | (unsigned long long )longbuff2;
      buff1 = (buff3 & matchbits) << src_bit;
      if (ready_bits < 32) {
        bytebuff4 = (uint8 )0;
        bytebuff3 = bytebuff4;
        bytebuff2 = bytebuff3;
        bytebuff1 = bytebuff2;
        buff2 |= buff1 >> ready_bits;
      } else {
        bytebuff1 = (uint8 )(buff2 >> 56);
        tmp = dst;
        dst ++;
        *tmp = bytebuff1;
        bytebuff2 = (uint8 )(buff2 >> 48);
        tmp___0 = dst;
        dst ++;
        *tmp___0 = bytebuff2;
        bytebuff3 = (uint8 )(buff2 >> 40);
        tmp___1 = dst;
        dst ++;
        *tmp___1 = bytebuff3;
        bytebuff4 = (uint8 )(buff2 >> 32);
        tmp___2 = dst;
        dst ++;
        *tmp___2 = bytebuff4;
        ready_bits -= 32;
        buff2 = (buff2 << 32) | (buff1 >> ready_bits);
      }
      ready_bits += (int )bps;
      sample = (tsample_t )((int )sample + 1);
    }
    col --;
  }
  while (ready_bits > 0) {
    bytebuff1 = (uint8 )(buff2 >> 56);
    tmp___3 = dst;
    dst ++;
    *tmp___3 = bytebuff1;
    buff2 <<= 8;
    ready_bits -= 8;
  }
  return (0);
}
}
static int reverseSamplesBytes(uint16 spp , uint16 bps , uint32 width ,
                               uint8 *src , uint8 *dst ) 
{ 
  int i ;
  uint32 col ;
  uint32 bytes_per_pixel ;
  uint32 col_offset ;
  uint8 bytebuff1 ;
  unsigned char swapbuff[32] ;
  uint8 *tmp ;

  {
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("reverseSamplesBytes", "Invalid input or output buffer");
    return (1);
  } else
  if ((unsigned int )dst == (unsigned int )((void *)0)) {
    TIFFError("reverseSamplesBytes", "Invalid input or output buffer");
    return (1);
  } else {

  }
  bytes_per_pixel = (uint32 )(((int )bps * (int )spp + 7) / 8);
  switch ((int )bps / 8) {
  case 2: 
  case 3: 
  case 4: 
  case 8: 
  col = (uint32 )0;
  while (col < width / 2U) {
    col_offset = col * bytes_per_pixel;
    _TIFFmemcpy((void *)(swapbuff), (void const   *)(src + col_offset),
                (tmsize_t )bytes_per_pixel);
    _TIFFmemcpy((void *)(src + col_offset),
                (void const   *)((dst - col_offset) - bytes_per_pixel),
                (tmsize_t )bytes_per_pixel);
    _TIFFmemcpy((void *)((dst - col_offset) - bytes_per_pixel),
                (void const   *)(swapbuff), (tmsize_t )bytes_per_pixel);
    col ++;
  }
  break;
  case 1: 
  col = (uint32 )0;
  while (col < width / 2U) {
    i = 0;
    while (i < (int )spp) {
      bytebuff1 = *src;
      tmp = src;
      src ++;
      *tmp = *((dst - (int )spp) + i);
      *((dst - (int )spp) + i) = bytebuff1;
      i ++;
    }
    dst -= (int )spp;
    col ++;
  }
  break;
  default: 
  TIFFError("reverseSamplesBytes", "Unsupported bit depth %d", (int )bps);
  return (1);
  }
  return (0);
}
}
static int mirrorImage(uint16 spp , uint16 bps , uint16 mirror , uint32 width ,
                       uint32 length , unsigned char *ibuff ) 
{ 
  int shift_width ;
  uint32 bytes_per_pixel ;
  uint32 bytes_per_sample ;
  uint32 row ;
  uint32 rowsize ;
  uint32 row_offset ;
  unsigned char *line_buff ;
  unsigned char *src ;
  unsigned char *dst ;
  void *tmp ;
  int tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  line_buff = (unsigned char *)((void *)0);
  src = ibuff;
  rowsize = ((width * (uint32 )bps) * (uint32 )spp + 7U) / 8U;
  switch ((int )mirror) {
  case 2: 
  case 3: 
  tmp = _TIFFmalloc((tmsize_t )rowsize);
  line_buff = (unsigned char *)tmp;
  if ((unsigned int )line_buff == (unsigned int )((void *)0)) {
    TIFFError("mirrorImage",
              "Unable to allocate mirror line buffer of %1u bytes", rowsize);
    return (-1);
  } else {

  }
  dst = ibuff + rowsize * (length - 1U);
  row = (uint32 )0;
  while (row < length / 2U) {
    _TIFFmemcpy((void *)line_buff, (void const   *)src, (tmsize_t )rowsize);
    _TIFFmemcpy((void *)src, (void const   *)dst, (tmsize_t )rowsize);
    _TIFFmemcpy((void *)dst, (void const   *)line_buff, (tmsize_t )rowsize);
    src += rowsize;
    dst -= rowsize;
    row ++;
  }
  if (line_buff) {
    _TIFFfree((void *)line_buff);
  } else {

  }
  if ((int )mirror == 2) {
    break;
  } else {

  }
  case 1: 
  if ((int )bps % 8 == 0) {
    row = (uint32 )0;
    while (row < length) {
      row_offset = row * rowsize;
      src = ibuff + row_offset;
      dst = (ibuff + row_offset) + rowsize;
      tmp___0 = reverseSamplesBytes(spp, bps, width, src, dst);
      if (tmp___0) {
        return (-1);
      } else {

      }
      row ++;
    }
  } else {
    tmp___1 = _TIFFmalloc((tmsize_t )(rowsize + 1U));
    line_buff = (unsigned char *)tmp___1;
    if (line_buff) {

    } else {
      TIFFError("mirrorImage", "Unable to allocate mirror line buffer");
      return (-1);
    }
    bytes_per_sample = (uint32 )(((int )bps + 7) / 8);
    bytes_per_pixel = (uint32 )(((int )bps * (int )spp + 7) / 8);
    if (bytes_per_pixel < bytes_per_sample + 1U) {
      shift_width = (int )bytes_per_pixel;
    } else {
      shift_width = (int )(bytes_per_sample + 1U);
    }
    row = (uint32 )0;
    while (row < length) {
      row_offset = row * rowsize;
      src = ibuff + row_offset;
      _TIFFmemset((void *)line_buff, '\000', (tmsize_t )rowsize);
      switch (shift_width) {
      case 1: 
      tmp___2 = reverseSamples8bits(spp, bps, width, src, line_buff);
      if (tmp___2) {
        _TIFFfree((void *)line_buff);
        return (-1);
      } else {

      }
      _TIFFmemcpy((void *)src, (void const   *)line_buff, (tmsize_t )rowsize);
      break;
      case 2: 
      tmp___3 = reverseSamples16bits(spp, bps, width, src, line_buff);
      if (tmp___3) {
        _TIFFfree((void *)line_buff);
        return (-1);
      } else {

      }
      _TIFFmemcpy((void *)src, (void const   *)line_buff, (tmsize_t )rowsize);
      break;
      case 3: 
      tmp___4 = reverseSamples24bits(spp, bps, width, src, line_buff);
      if (tmp___4) {
        _TIFFfree((void *)line_buff);
        return (-1);
      } else {

      }
      _TIFFmemcpy((void *)src, (void const   *)line_buff, (tmsize_t )rowsize);
      break;
      case 5: 
      case 4: 
      tmp___5 = reverseSamples32bits(spp, bps, width, src, line_buff);
      if (tmp___5) {
        _TIFFfree((void *)line_buff);
        return (-1);
      } else {

      }
      _TIFFmemcpy((void *)src, (void const   *)line_buff, (tmsize_t )rowsize);
      break;
      default: 
      TIFFError("mirrorImage", "Unsupported bit depth %d", (int )bps);
      _TIFFfree((void *)line_buff);
      return (-1);
      }
      row ++;
    }
    if (line_buff) {
      _TIFFfree((void *)line_buff);
    } else {

    }
  }
  break;
  default: 
  TIFFError("mirrorImage", "Invalid mirror axis %d", (int )mirror);
  return (-1);
  break;
  }
  return (0);
}
}
static int invertImage(uint16 photometric , uint16 spp , uint16 bps ,
                       uint32 width , uint32 length , unsigned char *work_buff ) 
{ 
  uint32 row ;
  uint32 col ;
  unsigned char bytebuff1 ;
  unsigned char bytebuff2 ;
  unsigned char bytebuff3 ;
  unsigned char bytebuff4 ;
  unsigned char *src ;
  uint16 *src_uint16 ;
  uint32 *src_uint32 ;
  int tmp ;

  {
  if ((int )spp != 1) {
    TIFFError("invertImage",
              "Image inversion not supported for more than one sample per pixel");
    return (-1);
  } else {

  }
  if ((int )photometric != 0) {
    if ((int )photometric != 1) {
      TIFFError("invertImage",
                "Only black and white and grayscale images can be inverted");
      return (-1);
    } else {

    }
  } else {

  }
  src = work_buff;
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    TIFFError("invertImage", "Invalid crop buffer passed to invertImage");
    return (-1);
  } else {

  }
  switch ((int )bps) {
  case 32: 
  src_uint32 = (uint32 *)src;
  row = (uint32 )0;
  while (row < length) {
    col = (uint32 )0;
    while (col < width) {
      *src_uint32 = 4294967295U - *src_uint32;
      src_uint32 ++;
      col ++;
    }
    row ++;
  }
  break;
  case 16: 
  src_uint16 = (uint16 *)src;
  row = (uint32 )0;
  while (row < length) {
    col = (uint32 )0;
    while (col < width) {
      *src_uint16 = (uint16 )(65535 - (int )*src_uint16);
      src_uint16 ++;
      col ++;
    }
    row ++;
  }
  break;
  case 8: 
  row = (uint32 )0;
  while (row < length) {
    col = (uint32 )0;
    while (col < width) {
      *src = (unsigned char )(255 - (int )*src);
      src ++;
      col ++;
    }
    row ++;
  }
  break;
  case 4: 
  row = (uint32 )0;
  while (row < length) {
    col = (uint32 )0;
    while (col < width) {
      bytebuff1 = (unsigned char )(16 - (int )((uint8 )((int )*src & (240 >> 4))));
      bytebuff2 = (unsigned char )(16 - ((int )*src & 15));
      *src = (unsigned char )(((int )bytebuff1 << 4) & (int )bytebuff2);
      src ++;
      col ++;
    }
    row ++;
  }
  break;
  case 2: 
  row = (uint32 )0;
  while (row < length) {
    col = (uint32 )0;
    while (col < width) {
      bytebuff1 = (unsigned char )(4 - (int )((uint8 )((int )*src & (192 >> 6))));
      bytebuff2 = (unsigned char )(4 - (int )((uint8 )((int )*src & (48 >> 4))));
      bytebuff3 = (unsigned char )(4 - (int )((uint8 )((int )*src & (12 >> 2))));
      bytebuff4 = (unsigned char )(4 - (int )((uint8 )((int )*src & 3)));
      if ((int )bytebuff1 << 6) {
        tmp = 1;
      } else
      if ((int )bytebuff2 << 4) {
        tmp = 1;
      } else
      if ((int )bytebuff3 << 2) {
        tmp = 1;
      } else
      if (bytebuff4) {
        tmp = 1;
      } else {
        tmp = 0;
      }
      *src = (unsigned char )tmp;
      src ++;
      col ++;
    }
    row ++;
  }
  break;
  case 1: 
  row = (uint32 )0;
  while (row < length) {
    col = (uint32 )0;
    while (col < width) {
      *src = (unsigned char )(~ ((int )*src));
      src ++;
      col += (uint32 )(8 / ((int )spp * (int )bps));
    }
    row ++;
  }
  break;
  default: 
  TIFFError("invertImage", "Unsupported bit depth %d", (int )bps);
  return (-1);
  }
  return (0);
}
}
