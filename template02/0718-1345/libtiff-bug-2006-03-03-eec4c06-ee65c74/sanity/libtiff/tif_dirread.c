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
enum TIFFIgnoreSense {
    TIS_STORE = 0,
    TIS_EXTRACT = 1,
    TIS_EMPTY = 2
} ;
struct __anonstruct_TIFFHeader_18 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint32 tiff_diroff ;
};
typedef struct __anonstruct_TIFFHeader_18 TIFFHeader;
struct __anonstruct_TIFFDirEntry_19 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint32 tdir_count ;
   uint32 tdir_offset ;
};
typedef struct __anonstruct_TIFFDirEntry_19 TIFFDirEntry;
enum __anonenum_TIFFDataType_20 {
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
    TIFF_IFD = 13
} ;
typedef enum __anonenum_TIFFDataType_20 TIFFDataType;
struct tiff;
typedef struct tiff TIFF;
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void *tdata_t;
typedef uint32 toff_t;
typedef void *thandle_t;
typedef unsigned char TIFFRGBValue;
struct __anonstruct_TIFFDisplay_21 {
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
typedef struct __anonstruct_TIFFDisplay_21 TIFFDisplay;
struct __anonstruct_TIFFYCbCrToRGB_22 {
   TIFFRGBValue *clamptab ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   int32 *Cr_g_tab ;
   int32 *Cb_g_tab ;
   int32 *Y_tab ;
};
typedef struct __anonstruct_TIFFYCbCrToRGB_22 TIFFYCbCrToRGB;
struct __anonstruct_TIFFCIELabToRGB_23 {
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
typedef struct __anonstruct_TIFFCIELabToRGB_23 TIFFCIELabToRGB;
struct _TIFFRGBAImage;
typedef struct _TIFFRGBAImage TIFFRGBAImage;
typedef void (*tileContigRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                  uint32  , uint32  , uint32  , int32  ,
                                  int32  , unsigned char * );
typedef void (*tileSeparateRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                    uint32  , uint32  , uint32  , int32  ,
                                    int32  , unsigned char * , unsigned char * ,
                                    unsigned char * , unsigned char * );
union __anonunion_put_24 {
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
   union __anonunion_put_24 put ;
   TIFFRGBValue *Map ;
   uint32 **BWmap ;
   uint32 **PALmap ;
   TIFFYCbCrToRGB *ycbcr ;
   TIFFCIELabToRGB *cielab ;
   int row_offset ;
   int col_offset ;
};
typedef int (*TIFFInitMethod)(TIFF * , int  );
struct __anonstruct_TIFFCodec_25 {
   char *name ;
   uint16 scheme ;
   int (*init)(TIFF * , int  ) ;
};
typedef struct __anonstruct_TIFFCodec_25 TIFFCodec;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_27 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_26 {
   int __count ;
   union __anonunion___value_27 __value ;
};
typedef struct __anonstruct___mbstate_t_26 __mbstate_t;
struct __anonstruct__G_fpos_t_28 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_28 _G_fpos_t;
struct __anonstruct__G_fpos64_t_29 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_29 _G_fpos64_t;
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
typedef tsize_t (*TIFFReadWriteProc)(thandle_t  , tdata_t  , tsize_t  );
typedef toff_t (*TIFFSeekProc)(thandle_t  , toff_t  , int  );
typedef int (*TIFFCloseProc)(thandle_t  );
typedef toff_t (*TIFFSizeProc)(thandle_t  );
typedef int (*TIFFMapFileProc)(thandle_t  , tdata_t * , toff_t * );
typedef void (*TIFFUnmapFileProc)(thandle_t  , tdata_t  , toff_t  );
typedef void (*TIFFExtendProc)(TIFF * );
struct __anonstruct_TIFFFieldInfo_30 {
   ttag_t field_tag ;
   short field_readcount ;
   short field_writecount ;
   TIFFDataType field_type ;
   unsigned short field_bit ;
   unsigned char field_oktochange ;
   unsigned char field_passcount ;
   char *field_name ;
};
typedef struct __anonstruct_TIFFFieldInfo_30 TIFFFieldInfo;
struct _TIFFTagValue {
   TIFFFieldInfo const   *info ;
   int count ;
   void *value ;
};
typedef struct _TIFFTagValue TIFFTagValue;
typedef int (*TIFFVSetMethod)(TIFF * , ttag_t  , va_list  );
typedef int (*TIFFVGetMethod)(TIFF * , ttag_t  , va_list  );
typedef void (*TIFFPrintMethod)(TIFF * , FILE * , long  );
struct __anonstruct_TIFFTagMethods_31 {
   int (*vsetfield)(TIFF * , ttag_t  , va_list  ) ;
   int (*vgetfield)(TIFF * , ttag_t  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
};
typedef struct __anonstruct_TIFFTagMethods_31 TIFFTagMethods;
struct __anonstruct_TIFFDirectory_32 {
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
   tstrip_t td_stripsperimage ;
   tstrip_t td_nstrips ;
   uint32 *td_stripoffset ;
   uint32 *td_stripbytecount ;
   int td_stripbytecountsorted ;
   uint16 td_nsubifd ;
   uint32 *td_subifd ;
   uint16 td_ycbcrsubsampling[2] ;
   uint16 td_ycbcrpositioning ;
   uint16 *td_transferfunction[3] ;
   int td_inknameslen ;
   char *td_inknames ;
   int td_customValueCount ;
   TIFFTagValue *td_customValues ;
};
typedef struct __anonstruct_TIFFDirectory_32 TIFFDirectory;
typedef double dblparam_t;
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
typedef int (*TIFFPreMethod)(TIFF * , tsample_t  );
typedef int (*TIFFCodeMethod)(TIFF * , tidata_t  , tsize_t  , tsample_t  );
typedef int (*TIFFSeekMethod)(TIFF * , uint32  );
typedef void (*TIFFPostMethod)(TIFF * , tidata_t  , tsize_t  );
typedef uint32 (*TIFFStripMethod)(TIFF * , uint32  );
typedef void (*TIFFTileMethod)(TIFF * , uint32 * , uint32 * );
struct tiff {
   char *tif_name ;
   int tif_fd ;
   int tif_mode ;
   uint32 tif_flags ;
   toff_t tif_diroff ;
   toff_t tif_nextdiroff ;
   toff_t *tif_dirlist ;
   uint16 tif_dirnumber ;
   TIFFDirectory tif_dir ;
   TIFFHeader tif_header ;
   int const   *tif_typeshift ;
   long const   *tif_typemask ;
   uint32 tif_row ;
   tdir_t tif_curdir ;
   tstrip_t tif_curstrip ;
   toff_t tif_curoff ;
   toff_t tif_dataoff ;
   uint16 tif_nsubifd ;
   toff_t tif_subifdoff ;
   uint32 tif_col ;
   ttile_t tif_curtile ;
   tsize_t tif_tilesize ;
   int tif_decodestatus ;
   int (*tif_setupdecode)(TIFF * ) ;
   int (*tif_predecode)(TIFF * , tsample_t  ) ;
   int (*tif_setupencode)(TIFF * ) ;
   int tif_encodestatus ;
   int (*tif_preencode)(TIFF * , tsample_t  ) ;
   int (*tif_postencode)(TIFF * ) ;
   int (*tif_decoderow)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_encoderow)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_decodestrip)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_encodestrip)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_decodetile)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_encodetile)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   void (*tif_close)(TIFF * ) ;
   int (*tif_seek)(TIFF * , uint32  ) ;
   void (*tif_cleanup)(TIFF * ) ;
   uint32 (*tif_defstripsize)(TIFF * , uint32  ) ;
   void (*tif_deftilesize)(TIFF * , uint32 * , uint32 * ) ;
   tidata_t tif_data ;
   tsize_t tif_scanlinesize ;
   tsize_t tif_scanlineskew ;
   tidata_t tif_rawdata ;
   tsize_t tif_rawdatasize ;
   tidata_t tif_rawcp ;
   tsize_t tif_rawcc ;
   tidata_t tif_base ;
   toff_t tif_size ;
   int (*tif_mapproc)(thandle_t  , tdata_t * , toff_t * ) ;
   void (*tif_unmapproc)(thandle_t  , tdata_t  , toff_t  ) ;
   thandle_t tif_clientdata ;
   tsize_t (*tif_readproc)(thandle_t  , tdata_t  , tsize_t  ) ;
   tsize_t (*tif_writeproc)(thandle_t  , tdata_t  , tsize_t  ) ;
   toff_t (*tif_seekproc)(thandle_t  , toff_t  , int  ) ;
   int (*tif_closeproc)(thandle_t  ) ;
   toff_t (*tif_sizeproc)(thandle_t  ) ;
   void (*tif_postdecode)(TIFF * , tidata_t  , tsize_t  ) ;
   TIFFFieldInfo **tif_fieldinfo ;
   size_t tif_nfields ;
   TIFFFieldInfo const   *tif_foundfield ;
   TIFFTagMethods tif_tagmethods ;
   TIFFClientInfoLink *tif_clientinfo ;
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
extern tdata_t _TIFFmalloc(tsize_t  ) ;
extern tdata_t _TIFFrealloc(tdata_t  , tsize_t  ) ;
extern void _TIFFmemset(tdata_t  , int  , tsize_t  ) ;
extern void _TIFFmemcpy(tdata_t  , tdata_t const    , tsize_t  ) ;
extern int _TIFFmemcmp(tdata_t const    , tdata_t const    , tsize_t  ) ;
extern void _TIFFfree(tdata_t  ) ;
extern int TIFFGetTagListCount(TIFF * ) ;
extern ttag_t TIFFGetTagListEntry(TIFF * , int tag_index ) ;
extern void TIFFMergeFieldInfo(TIFF * , TIFFFieldInfo const   * , int  ) ;
extern TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF * , ttag_t  ,
                                                TIFFDataType  ) ;
extern TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF * , char const   * ,
                                                      TIFFDataType  ) ;
extern TIFFFieldInfo const   *TIFFFieldWithTag(TIFF * , ttag_t  ) ;
extern TIFFFieldInfo const   *TIFFFieldWithName(TIFF * , char const   * ) ;
extern TIFFTagMethods *TIFFAccessTagMethods(TIFF * ) ;
extern void *TIFFGetClientInfo(TIFF * , char const   * ) ;
extern void TIFFSetClientInfo(TIFF * , void * , char const   * ) ;
extern void TIFFCleanup(TIFF * ) ;
extern void TIFFClose(TIFF * ) ;
extern int TIFFFlush(TIFF * ) ;
extern int TIFFFlushData(TIFF * ) ;
extern int TIFFGetField(TIFF * , ttag_t   , ...) ;
extern int TIFFVGetField(TIFF * , ttag_t  , va_list  ) ;
extern int TIFFGetFieldDefaulted(TIFF * , ttag_t   , ...) ;
extern int TIFFVGetFieldDefaulted(TIFF * , ttag_t  , va_list  ) ;
int TIFFReadDirectory(TIFF *tif ) ;
int TIFFReadCustomDirectory(TIFF *tif , toff_t diroff ,
                            TIFFFieldInfo const   *info , size_t n ) ;
int TIFFReadEXIFDirectory(TIFF *tif , toff_t diroff ) ;
extern tsize_t TIFFScanlineSize(TIFF * ) ;
extern tsize_t TIFFRasterScanlineSize(TIFF * ) ;
extern tsize_t TIFFStripSize(TIFF * ) ;
extern tsize_t TIFFRawStripSize(TIFF * , tstrip_t  ) ;
extern tsize_t TIFFVStripSize(TIFF * , uint32  ) ;
extern tsize_t TIFFTileRowSize(TIFF * ) ;
extern tsize_t TIFFTileSize(TIFF * ) ;
extern tsize_t TIFFVTileSize(TIFF * , uint32  ) ;
extern uint32 TIFFDefaultStripSize(TIFF * , uint32  ) ;
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
extern tdir_t TIFFCurrentDirectory(TIFF * ) ;
extern tdir_t TIFFNumberOfDirectories(TIFF * ) ;
extern uint32 TIFFCurrentDirOffset(TIFF * ) ;
extern tstrip_t TIFFCurrentStrip(TIFF * ) ;
extern ttile_t TIFFCurrentTile(TIFF * ) ;
extern int TIFFReadBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;
extern int TIFFWriteBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;
extern int TIFFSetupStrips(TIFF * ) ;
extern int TIFFWriteCheck(TIFF * , int  , char const   * ) ;
extern void TIFFFreeDirectory(TIFF * ) ;
extern int TIFFCreateDirectory(TIFF * ) ;
extern int TIFFLastDirectory(TIFF * ) ;
extern int TIFFSetDirectory(TIFF * , tdir_t  ) ;
extern int TIFFSetSubDirectory(TIFF * , uint32  ) ;
extern int TIFFUnlinkDirectory(TIFF * , tdir_t  ) ;
extern int TIFFSetField(TIFF * , ttag_t   , ...) ;
extern int TIFFVSetField(TIFF * , ttag_t  , va_list  ) ;
extern int TIFFWriteDirectory(TIFF * ) ;
extern int TIFFCheckpointDirectory(TIFF * ) ;
extern int TIFFRewriteDirectory(TIFF * ) ;
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense  , int  ) ;
extern void TIFFPrintDirectory(TIFF * , FILE * , long  ) ;
extern int TIFFReadScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;
extern int TIFFWriteScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;
extern int TIFFReadRGBAImage(TIFF * , uint32  , uint32  , uint32 * , int  ) ;
extern int TIFFReadRGBAImageOriented(TIFF * , uint32  , uint32  , uint32 * ,
                                     int  , int  ) ;
extern int TIFFReadRGBAStrip(TIFF * , tstrip_t  , uint32 * ) ;
extern int TIFFReadRGBATile(TIFF * , uint32  , uint32  , uint32 * ) ;
extern int TIFFRGBAImageOK(TIFF * , char * ) ;
extern int TIFFRGBAImageBegin(TIFFRGBAImage * , TIFF * , int  , char * ) ;
extern int TIFFRGBAImageGet(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
extern void TIFFRGBAImageEnd(TIFFRGBAImage * ) ;
extern TIFF *TIFFOpen(char const   * , char const   * ) ;
extern TIFF *TIFFFdOpen(int  , char const   * , char const   * ) ;
extern TIFF *TIFFClientOpen(char const   * , char const   * , thandle_t  ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            toff_t (*)(thandle_t  , toff_t  , int  ) ,
                            int (*)(thandle_t  ) , toff_t (*)(thandle_t  ) ,
                            int (*)(thandle_t  , tdata_t * , toff_t * ) ,
                            void (*)(thandle_t  , tdata_t  , toff_t  ) ) ;
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
extern ttile_t TIFFComputeTile(TIFF * , uint32  , uint32  , uint32  ,
                               tsample_t  ) ;
extern int TIFFCheckTile(TIFF * , uint32  , uint32  , uint32  , tsample_t  ) ;
extern ttile_t TIFFNumberOfTiles(TIFF * ) ;
extern tsize_t TIFFReadTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                            tsample_t  ) ;
extern tsize_t TIFFWriteTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                             tsample_t  ) ;
extern tstrip_t TIFFComputeStrip(TIFF * , uint32  , tsample_t  ) ;
extern tstrip_t TIFFNumberOfStrips(TIFF * ) ;
extern tsize_t TIFFReadEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFReadRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFReadEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFReadRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern int TIFFDataWidth(TIFFDataType  ) ;
extern void TIFFSetWriteOffset(TIFF * , toff_t  ) ;
extern void TIFFSwabShort(uint16 * ) ;
extern void TIFFSwabLong(uint32 * ) ;
extern void TIFFSwabDouble(double * ) ;
extern void TIFFSwabArrayOfShort(uint16 * , unsigned long  ) ;
extern void TIFFSwabArrayOfTriples(uint8 * , unsigned long  ) ;
extern void TIFFSwabArrayOfLong(uint32 * , unsigned long  ) ;
extern void TIFFSwabArrayOfDouble(double * , unsigned long  ) ;
extern void TIFFReverseBits(unsigned char * , unsigned long  ) ;
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
extern TIFFFieldInfo const   *_TIFFGetFieldInfo(size_t * ) ;
extern TIFFFieldInfo const   *_TIFFGetExifFieldInfo(size_t * ) ;
extern void _TIFFSetupFieldInfo(TIFF * , TIFFFieldInfo const   * , size_t  ) ;
extern void _TIFFPrintFieldInfo(TIFF * , FILE * ) ;
extern TIFFDataType _TIFFSampleToTagType(TIFF * ) ;
extern TIFFFieldInfo const   *_TIFFFindOrRegisterFieldInfo(TIFF *tif ,
                                                           ttag_t tag ,
                                                           TIFFDataType dt ) ;
extern TIFFFieldInfo *_TIFFCreateAnonFieldInfo(TIFF *tif , ttag_t tag ,
                                               TIFFDataType dt ) ;
extern int _TIFFgetMode(char const   * , char const   * ) ;
extern int _TIFFNoRowEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
extern int _TIFFNoStripEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
extern int _TIFFNoTileEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
extern int _TIFFNoRowDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
extern int _TIFFNoStripDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
extern int _TIFFNoTileDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
extern void _TIFFNoPostDecode(TIFF * , tidata_t  , tsize_t  ) ;
extern int _TIFFNoPreCode(TIFF * , tsample_t  ) ;
extern int _TIFFNoSeek(TIFF * , uint32  ) ;
extern void _TIFFSwab16BitData(TIFF * , tidata_t  , tsize_t  ) ;
extern void _TIFFSwab24BitData(TIFF * , tidata_t  , tsize_t  ) ;
extern void _TIFFSwab32BitData(TIFF * , tidata_t  , tsize_t  ) ;
extern void _TIFFSwab64BitData(TIFF * , tidata_t  , tsize_t  ) ;
extern int TIFFFlushData1(TIFF * ) ;
extern int TIFFDefaultDirectory(TIFF * ) ;
extern int TIFFSetCompressionScheme(TIFF * , int  ) ;
extern int TIFFSetDefaultCompressionState(TIFF * ) ;
extern uint32 _TIFFDefaultStripSize(TIFF * , uint32  ) ;
extern void _TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;
extern int _TIFFDataSize(TIFFDataType  ) ;
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
extern tdata_t _TIFFCheckMalloc(TIFF * , size_t  , size_t  , char const   * ) ;
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
static int EstimateStripByteCounts(TIFF *tif , TIFFDirEntry *dir ,
                                   uint16 dircount ) ;
static void MissingRequired(TIFF *tif , char const   *tagname ) ;
static int CheckDirCount(TIFF *tif , TIFFDirEntry *dir , uint32 count ) ;
static tsize_t TIFFFetchData(TIFF *tif , TIFFDirEntry *dir , char *cp ) ;
static tsize_t TIFFFetchString(TIFF *tif , TIFFDirEntry *dir , char *cp ) ;
static float TIFFFetchRational(TIFF *tif , TIFFDirEntry *dir ) ;
static int TIFFFetchNormalTag(TIFF *tif , TIFFDirEntry *dp ) ;
static int TIFFFetchPerSampleShorts(TIFF *tif , TIFFDirEntry *dir , uint16 *pl ) ;
static int TIFFFetchPerSampleLongs(TIFF *tif , TIFFDirEntry *dir , uint32 *pl ) ;
static int TIFFFetchPerSampleAnys(TIFF *tif , TIFFDirEntry *dir , double *pl ) ;
static int TIFFFetchShortArray(TIFF *tif , TIFFDirEntry *dir , uint16 *v ) ;
static int TIFFFetchStripThing(TIFF *tif , TIFFDirEntry *dir , long nstrips ,
                               uint32 **lpp ) ;
static int TIFFFetchRefBlackWhite(TIFF *tif , TIFFDirEntry *dir ) ;
static float TIFFFetchFloat(TIFF *tif , TIFFDirEntry *dir ) ;
static int TIFFFetchFloatArray(TIFF *tif , TIFFDirEntry *dir , float *v ) ;
static int TIFFFetchDoubleArray(TIFF *tif , TIFFDirEntry *dir , double *v ) ;
static int TIFFFetchAnyArray(TIFF *tif , TIFFDirEntry *dir , double *v ) ;
static int TIFFFetchShortPair(TIFF *tif , TIFFDirEntry *dir ) ;
static void ChopUpSingleUncompressedStrip(TIFF *tif ) ;
int TIFFReadDirectory(TIFF *tif ) ;
static char const   module[18]  = 
  {      (char const   )'T',      (char const   )'I',      (char const   )'F',      (char const   )'F', 
        (char const   )'R',      (char const   )'e',      (char const   )'a',      (char const   )'d', 
        (char const   )'D',      (char const   )'i',      (char const   )'r',      (char const   )'e', 
        (char const   )'c',      (char const   )'t',      (char const   )'o',      (char const   )'r', 
        (char const   )'y',      (char const   )'\000'};
int TIFFReadDirectory(TIFF *tif ) 
{ 
  int n ;
  TIFFDirectory *td ;
  TIFFDirEntry *dp ;
  TIFFDirEntry *dir ;
  uint16 iv ;
  uint32 v ;
  TIFFFieldInfo const   *fip ;
  size_t fix ;
  uint16 dircount ;
  toff_t nextdiroff ;
  int diroutoforderwarning ;
  toff_t *new_dirlist ;
  tdata_t tmp ;
  toff_t tmp___0 ;
  tsize_t tmp___1 ;
  tdata_t tmp___2 ;
  tsize_t tmp___3 ;
  tsize_t tmp___4 ;
  toff_t off ;
  tdata_t tmp___5 ;
  int tmp___6 ;
  TIFFFieldInfo *tmp___7 ;
  uint32 expected ;
  uint32 tmp___8 ;
  int tmp___9 ;
  unsigned long tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  unsigned long tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  double dv ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  char *cp ;
  int tmp___29 ;
  tdata_t tmp___30 ;
  uint32 c ;
  tsize_t tmp___31 ;
  unsigned long tmp___32 ;
  TIFFFieldInfo const   *tmp___33 ;
  int tmp___34 ;
  TIFFFieldInfo const   *tmp___35 ;
  int tmp___36 ;
  TIFFFieldInfo const   *tmp___37 ;
  int tmp___38 ;
  toff_t tmp___39 ;
  tsize_t tmp___40 ;
  tstrip_t strip ;
  tsize_t tmp___41 ;

  {
  dir = (TIFFDirEntry *)((void *)0);
  diroutoforderwarning = 0;
  tif->tif_diroff = tif->tif_nextdiroff;
  if (tif->tif_diroff == 0U) {
    return (0);
  } else {

  }
  n = 0;
  while (n < (int )tif->tif_dirnumber) {
    if (*(tif->tif_dirlist + n) == tif->tif_diroff) {
      return (0);
    } else {

    }
    n ++;
  }
  tif->tif_dirnumber = (uint16 )((int )tif->tif_dirnumber + 1);
  tmp = _TIFFrealloc((tdata_t )tif->tif_dirlist,
                     (tsize_t )((unsigned int )tif->tif_dirnumber * sizeof(toff_t )));
  new_dirlist = (toff_t *)tmp;
  if (! new_dirlist) {
    TIFFErrorExt(tif->tif_clientdata, module,
                 "%s: Failed to allocate space for IFD list", tif->tif_name);
    return (0);
  } else {

  }
  tif->tif_dirlist = new_dirlist;
  *(tif->tif_dirlist + ((int )tif->tif_dirnumber - 1)) = tif->tif_diroff;
  (*(tif->tif_cleanup))(tif);
  tif->tif_curdir = (tdir_t )((int )tif->tif_curdir + 1);
  nextdiroff = (toff_t )0;
  if (! ((tif->tif_flags & 2048U) != 0U)) {
    tmp___0 = (*(tif->tif_seekproc))(tif->tif_clientdata, tif->tif_diroff, 0);
    if (tmp___0 == tif->tif_diroff) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%s: Seek error accessing TIFF directory", tif->tif_name);
      return (0);
    }
    tmp___1 = (*(tif->tif_readproc))(tif->tif_clientdata,
                                     (tdata_t )(& dircount),
                                     (tsize_t )sizeof(uint16 ));
    if (tmp___1 == (tsize_t )sizeof(uint16 )) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%s: Can not read TIFF directory count", tif->tif_name);
      return (0);
    }
    if (tif->tif_flags & 128U) {
      TIFFSwabShort(& dircount);
    } else {

    }
    tmp___2 = _TIFFCheckMalloc(tif, (size_t )dircount, sizeof(TIFFDirEntry ),
                               "to read TIFF directory");
    dir = (TIFFDirEntry *)tmp___2;
    if ((unsigned int )dir == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
    tmp___3 = (*(tif->tif_readproc))(tif->tif_clientdata, (tdata_t )dir,
                                     (tsize_t )((unsigned int )dircount * sizeof(TIFFDirEntry )));
    if (tmp___3 == (tsize_t )((unsigned int )dircount * sizeof(TIFFDirEntry ))) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%.100s: Can not read TIFF directory", tif->tif_name);
      goto bad;
    }
    tmp___4 = (*(tif->tif_readproc))(tif->tif_clientdata,
                                     (tdata_t )(& nextdiroff),
                                     (tsize_t )sizeof(uint32 ));
  } else {
    off = tif->tif_diroff;
    if (off + sizeof(uint16 ) > tif->tif_size) {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%s: Can not read TIFF directory count", tif->tif_name);
      return (0);
    } else {
      _TIFFmemcpy((tdata_t )(& dircount),
                  (tdata_t const   )(tif->tif_base + off),
                  (tsize_t )sizeof(uint16 ));
    }
    off += sizeof(uint16 );
    if (tif->tif_flags & 128U) {
      TIFFSwabShort(& dircount);
    } else {

    }
    tmp___5 = _TIFFCheckMalloc(tif, (size_t )dircount, sizeof(TIFFDirEntry ),
                               "to read TIFF directory");
    dir = (TIFFDirEntry *)tmp___5;
    if ((unsigned int )dir == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
    if (off + (unsigned int )dircount * sizeof(TIFFDirEntry ) > tif->tif_size) {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%s: Can not read TIFF directory", tif->tif_name);
      goto bad;
    } else {
      _TIFFmemcpy((tdata_t )dir, (tdata_t const   )(tif->tif_base + off),
                  (tsize_t )((unsigned int )dircount * sizeof(TIFFDirEntry )));
    }
    off += (unsigned int )dircount * sizeof(TIFFDirEntry );
    if (off + sizeof(uint32 ) <= tif->tif_size) {
      _TIFFmemcpy((tdata_t )(& nextdiroff),
                  (tdata_t const   )(tif->tif_base + off),
                  (tsize_t )sizeof(uint32 ));
    } else {

    }
  }
  if (tif->tif_flags & 128U) {
    TIFFSwabLong(& nextdiroff);
  } else {

  }
  tif->tif_nextdiroff = nextdiroff;
  tif->tif_flags &= 4294967231U;
  td = & tif->tif_dir;
  TIFFFreeDirectory(tif);
  TIFFDefaultDirectory(tif);
  TIFFSetField(tif, (ttag_t )284, 1);
  dp = dir;
  n = (int )dircount;
  while (n > 0) {
    if (tif->tif_flags & 128U) {
      TIFFSwabArrayOfShort(& dp->tdir_tag, 2UL);
      TIFFSwabArrayOfLong(& dp->tdir_count, 2UL);
    } else {

    }
    if ((int )dp->tdir_tag == 277) {
      tmp___6 = TIFFFetchNormalTag(tif, dp);
      if (tmp___6) {

      } else {
        goto bad;
      }
      dp->tdir_tag = (uint16 )0;
    } else {

    }
    n --;
    dp ++;
  }
  fix = (size_t )0;
  dp = dir;
  n = (int )dircount;
  while (n > 0) {
    if (fix >= tif->tif_nfields) {
      goto __Cont;
    } else
    if ((int )dp->tdir_tag == 0) {
      goto __Cont;
    } else {

    }
    if ((ttag_t )dp->tdir_tag < (*(tif->tif_fieldinfo + fix))->field_tag) {
      if (! diroutoforderwarning) {
        TIFFWarningExt(tif->tif_clientdata, module,
                       "%s: invalid TIFF directory; tags are not sorted in ascending order",
                       tif->tif_name);
        diroutoforderwarning = 1;
      } else {

      }
      fix = (size_t )0;
    } else {

    }
    while (1) {
      if (fix < tif->tif_nfields) {
        if ((*(tif->tif_fieldinfo + fix))->field_tag < (ttag_t )dp->tdir_tag) {

        } else {
          break;
        }
      } else {
        break;
      }
      fix ++;
    }
    if (fix >= tif->tif_nfields) {
      goto _L;
    } else
    if ((*(tif->tif_fieldinfo + fix))->field_tag != (ttag_t )dp->tdir_tag) {
      _L: /* CIL Label */ 
      TIFFWarningExt(tif->tif_clientdata, module,
                     "%s: unknown field with tag %d (0x%x) encountered",
                     tif->tif_name, (int )dp->tdir_tag, (int )dp->tdir_tag,
                     (int )dp->tdir_type);
      tmp___7 = _TIFFCreateAnonFieldInfo(tif, (ttag_t )dp->tdir_tag,
                                         (TIFFDataType )dp->tdir_type);
      TIFFMergeFieldInfo(tif, (TIFFFieldInfo const   *)tmp___7, 1);
      fix = (size_t )0;
      while (1) {
        if (fix < tif->tif_nfields) {
          if ((*(tif->tif_fieldinfo + fix))->field_tag < (ttag_t )dp->tdir_tag) {

          } else {
            break;
          }
        } else {
          break;
        }
        fix ++;
      }
    } else {

    }
    if ((int )(*(tif->tif_fieldinfo + fix))->field_bit == 0) {
      ignore: 
      dp->tdir_tag = (uint16 )0;
      goto __Cont;
    } else {

    }
    fip = (TIFFFieldInfo const   *)*(tif->tif_fieldinfo + fix);
    while (1) {
      if ((int )dp->tdir_type != (int )((unsigned short )fip->field_type)) {
        if (fix < tif->tif_nfields) {

        } else {
          break;
        }
      } else {
        break;
      }
      if ((unsigned int const   )fip->field_type == 0U) {
        break;
      } else {

      }
      fix ++;
      fip = (TIFFFieldInfo const   *)*(tif->tif_fieldinfo + fix);
      if (fix >= tif->tif_nfields) {
        TIFFWarningExt(tif->tif_clientdata, module,
                       "%s: wrong data type %d for \"%s\"; tag ignored",
                       tif->tif_name, (int )dp->tdir_type,
                       (*(tif->tif_fieldinfo + (fix - 1U)))->field_name);
        goto ignore;
      } else
      if (fip->field_tag != (ttag_t const   )dp->tdir_tag) {
        TIFFWarningExt(tif->tif_clientdata, module,
                       "%s: wrong data type %d for \"%s\"; tag ignored",
                       tif->tif_name, (int )dp->tdir_type,
                       (*(tif->tif_fieldinfo + (fix - 1U)))->field_name);
        goto ignore;
      } else {

      }
    }
    if ((int const   )fip->field_readcount != -1) {
      if ((int const   )fip->field_readcount != -3) {
        if ((int const   )fip->field_readcount == -2) {
          tmp___8 = (uint32 )td->td_samplesperpixel;
        } else {
          tmp___8 = (uint32 )fip->field_readcount;
        }
        expected = tmp___8;
        tmp___9 = CheckDirCount(tif, dp, expected);
        if (tmp___9) {

        } else {
          goto ignore;
        }
      } else {

      }
    } else {

    }
    switch ((int )dp->tdir_tag) {
    case 259: 
    if (dp->tdir_count == 1U) {
      if ((int )tif->tif_header.tiff_magic == 19789) {
        tmp___10 = (unsigned long )(dp->tdir_offset >> *(tif->tif_typeshift + dp->tdir_type)) & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
      } else {
        tmp___10 = (unsigned long )dp->tdir_offset & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
      }
      v = (uint32 )tmp___10;
      tmp___11 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )((uint16 )v));
      if (tmp___11) {

      } else {
        goto bad;
      }
      break;
    } else
    if ((int )dp->tdir_type == 4) {
      tmp___12 = TIFFFetchPerSampleLongs(tif, dp, & v);
      if (tmp___12) {
        tmp___13 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )((uint16 )v));
        if (tmp___13) {

        } else {
          goto bad;
        }
      } else {
        goto bad;
      }
    } else {
      tmp___14 = TIFFFetchPerSampleShorts(tif, dp, & iv);
      if (tmp___14) {
        tmp___15 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )iv);
        if (tmp___15) {

        } else {
          goto bad;
        }
      } else {
        goto bad;
      }
    }
    dp->tdir_tag = (uint16 )0;
    break;
    case 325: 
    case 324: 
    case 279: 
    case 273: 
    tif->tif_dir.td_fieldsset[(int const   )fip->field_bit / 32] |= 1UL << ((int const   )fip->field_bit & 31);
    break;
    case 338: 
    case 278: 
    case 284: 
    case 32998: 
    case 322: 
    case 323: 
    case 32997: 
    case 257: 
    case 256: 
    tmp___16 = TIFFFetchNormalTag(tif, dp);
    if (tmp___16) {

    } else {
      goto bad;
    }
    dp->tdir_tag = (uint16 )0;
    break;
    }
    __Cont: /* CIL Label */ 
    n --;
    dp ++;
  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 1))) {
    MissingRequired(tif, "ImageLength");
    goto bad;
  } else {

  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 20))) {
    MissingRequired(tif, "PlanarConfiguration");
    goto bad;
  } else {

  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 2))) {
    td->td_nstrips = TIFFNumberOfStrips(tif);
    td->td_tilewidth = td->td_imagewidth;
    td->td_tilelength = td->td_rowsperstrip;
    td->td_tiledepth = td->td_imagedepth;
    tif->tif_flags &= 4294966271U;
  } else {
    td->td_nstrips = TIFFNumberOfTiles(tif);
    tif->tif_flags |= 1024U;
  }
  if (! td->td_nstrips) {
    if ((tif->tif_flags & 1024U) != 0U) {
      tmp___17 = "tiles";
    } else {
      tmp___17 = "strips";
    }
    TIFFErrorExt(tif->tif_clientdata, module,
                 "%s: cannot handle zero number of %s", tif->tif_name, tmp___17);
    goto bad;
  } else {

  }
  td->td_stripsperimage = td->td_nstrips;
  if ((int )td->td_planarconfig == 2) {
    td->td_stripsperimage /= (tstrip_t )td->td_samplesperpixel;
  } else {

  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 25))) {
    if ((tif->tif_flags & 1024U) != 0U) {
      tmp___18 = "TileOffsets";
    } else {
      tmp___18 = "StripOffsets";
    }
    MissingRequired(tif, tmp___18);
    goto bad;
  } else {

  }
  dp = dir;
  n = (int )dircount;
  while (n > 0) {
    if ((int )dp->tdir_tag == 0) {
      goto __Cont___0;
    } else {

    }
    switch ((int )dp->tdir_tag) {
    case 339: 
    case 32996: 
    case 258: 
    case 281: 
    case 280: 
    if (dp->tdir_count == 1U) {
      if ((int )tif->tif_header.tiff_magic == 19789) {
        tmp___19 = (unsigned long )(dp->tdir_offset >> *(tif->tif_typeshift + dp->tdir_type)) & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
      } else {
        tmp___19 = (unsigned long )dp->tdir_offset & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
      }
      v = (uint32 )tmp___19;
      tmp___20 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )((uint16 )v));
      if (tmp___20) {

      } else {
        goto bad;
      }
    } else
    if ((int )dp->tdir_tag == 258) {
      if ((int )dp->tdir_type == 4) {
        tmp___21 = TIFFFetchPerSampleLongs(tif, dp, & v);
        if (tmp___21) {
          tmp___22 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )((uint16 )v));
          if (tmp___22) {

          } else {
            goto bad;
          }
        } else {
          goto bad;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: /* CIL Label */ 
      tmp___23 = TIFFFetchPerSampleShorts(tif, dp, & iv);
      if (tmp___23) {
        tmp___24 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )iv);
        if (tmp___24) {

        } else {
          goto bad;
        }
      } else {
        goto bad;
      }
    }
    break;
    case 341: 
    case 340: 
    dv = 0.0;
    tmp___25 = TIFFFetchPerSampleAnys(tif, dp, & dv);
    if (tmp___25) {
      tmp___26 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, dv);
      if (tmp___26) {

      } else {
        goto bad;
      }
    } else {
      goto bad;
    }
    break;
    case 324: 
    case 273: 
    tmp___27 = TIFFFetchStripThing(tif, dp, (long )td->td_nstrips,
                                   & td->td_stripoffset);
    if (tmp___27) {

    } else {
      goto bad;
    }
    break;
    case 325: 
    case 279: 
    tmp___28 = TIFFFetchStripThing(tif, dp, (long )td->td_nstrips,
                                   & td->td_stripbytecount);
    if (tmp___28) {

    } else {
      goto bad;
    }
    break;
    case 301: 
    case 320: 
    v = (uint32 )(1L << (int )td->td_bitspersample);
    if ((int )dp->tdir_tag == 320) {
      goto _L___1;
    } else
    if (dp->tdir_count != v) {
      _L___1: /* CIL Label */ 
      tmp___29 = CheckDirCount(tif, dp, 3U * v);
      if (tmp___29) {

      } else {
        break;
      }
    } else {

    }
    v *= sizeof(uint16 );
    tmp___30 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(uint16 ),
                                "to read \"TransferFunction\" tag");
    cp = (char *)tmp___30;
    if ((unsigned int )cp != (unsigned int )((void *)0)) {
      tmp___31 = TIFFFetchData(tif, dp, cp);
      if (tmp___31) {
        c = (uint32 )(1L << (int )td->td_bitspersample);
        if (dp->tdir_count == c) {
          v = (uint32 )0L;
        } else {

        }
        TIFFSetField(tif, (ttag_t )dp->tdir_tag, cp, cp + v, cp + 2U * v);
      } else {

      }
      _TIFFfree((tdata_t )cp);
    } else {

    }
    break;
    case 336: 
    case 530: 
    case 321: 
    case 297: 
    TIFFFetchShortPair(tif, dp);
    break;
    case 532: 
    TIFFFetchRefBlackWhite(tif, dp);
    break;
    case 255: 
    v = (uint32 )0L;
    if ((int )tif->tif_header.tiff_magic == 19789) {
      tmp___32 = (unsigned long )(dp->tdir_offset >> *(tif->tif_typeshift + dp->tdir_type)) & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
    } else {
      tmp___32 = (unsigned long )dp->tdir_offset & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
    }
    switch ((uint32 )tmp___32) {
    case 2U: 
    v = (uint32 )1;
    break;
    case 3U: 
    v = (uint32 )2;
    break;
    }
    if (v) {
      TIFFSetField(tif, (ttag_t )254, v);
    } else {

    }
    break;
    default: 
    TIFFFetchNormalTag(tif, dp);
    break;
    }
    __Cont___0: /* CIL Label */ 
    n --;
    dp ++;
  }
  if ((int )td->td_photometric == 3) {
    if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 26))) {
      MissingRequired(tif, "Colormap");
      goto bad;
    } else {

    }
  } else {

  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 24))) {
    if ((int )td->td_planarconfig == 1) {
      if (td->td_nstrips > 1U) {
        MissingRequired(tif, "StripByteCounts");
        goto bad;
      } else {
        goto _L___2;
      }
    } else
    _L___2: /* CIL Label */ 
    if ((int )td->td_planarconfig == 2) {
      if (td->td_nstrips != (tstrip_t )td->td_samplesperpixel) {
        MissingRequired(tif, "StripByteCounts");
        goto bad;
      } else {

      }
    } else {

    }
    tmp___33 = TIFFFieldWithTag(tif, (ttag_t )279);
    TIFFWarningExt(tif->tif_clientdata, module,
                   "%s: TIFF directory is missing required \"%s\" field, calculating from imagelength",
                   tif->tif_name, tmp___33->field_name);
    tmp___34 = EstimateStripByteCounts(tif, dir, dircount);
    if (tmp___34 < 0) {
      goto bad;
    } else {

    }
  } else
  if (td->td_nstrips == 1U) {
    if (*(td->td_stripoffset + 0) != 0U) {
      if (*(td->td_stripbytecount + 0) == 0U) {
        if (*(td->td_stripoffset + 0) != 0U) {
          goto _L___4;
        } else {
          goto _L___6;
        }
      } else
      _L___6: /* CIL Label */ 
      if ((int )td->td_compression == 1) {
        tmp___39 = (*(tif->tif_sizeproc))(tif->tif_clientdata);
        if (*(td->td_stripbytecount + 0) > tmp___39 - *(td->td_stripoffset + 0)) {
          goto _L___4;
        } else {
          goto _L___5;
        }
      } else
      _L___5: /* CIL Label */ 
      if (tif->tif_mode == 0) {
        if ((int )td->td_compression == 1) {
          tmp___40 = TIFFScanlineSize(tif);
          if (*(td->td_stripbytecount + 0) < (uint32 )tmp___40 * td->td_imagelength) {
            _L___4: /* CIL Label */ 
            tmp___35 = TIFFFieldWithTag(tif, (ttag_t )279);
            TIFFWarningExt(tif->tif_clientdata, module,
                           "%s: Bogus \"%s\" field, ignoring and calculating from imagelength",
                           tif->tif_name, tmp___35->field_name);
            tmp___36 = EstimateStripByteCounts(tif, dir, dircount);
            if (tmp___36 < 0) {
              goto bad;
            } else {

            }
          } else {
            goto _L___7;
          }
        } else {
          goto _L___7;
        }
      } else {
        goto _L___7;
      }
    } else {
      goto _L___7;
    }
  } else
  _L___7: /* CIL Label */ 
  _L___3: /* CIL Label */ 
  if ((int )td->td_planarconfig == 1) {
    if (td->td_nstrips > 2U) {
      if ((int )td->td_compression == 1) {
        if (*(td->td_stripbytecount + 0) != *(td->td_stripbytecount + 1)) {
          tmp___37 = TIFFFieldWithTag(tif, (ttag_t )279);
          TIFFWarningExt(tif->tif_clientdata, module,
                         "%s: Wrong \"%s\" field, ignoring and calculating from imagelength",
                         tif->tif_name, tmp___37->field_name);
          tmp___38 = EstimateStripByteCounts(tif, dir, dircount);
          if (tmp___38 < 0) {
            goto bad;
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
  if (dir) {
    _TIFFfree((tdata_t )((char *)dir));
    dir = (TIFFDirEntry *)((void *)0);
  } else {

  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 19))) {
    td->td_maxsamplevalue = (uint16 )((1L << (int )td->td_bitspersample) - 1L);
  } else {

  }
  if (td->td_nstrips > 1U) {
    td->td_stripbytecountsorted = 1;
    strip = (tstrip_t )1;
    while (strip < td->td_nstrips) {
      if (*(td->td_stripoffset + (strip - 1U)) > *(td->td_stripoffset + strip)) {
        td->td_stripbytecountsorted = 0;
        break;
      } else {

      }
      strip ++;
    }
  } else {

  }
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 7))) {
    TIFFSetField(tif, (ttag_t )259, 1);
  } else {

  }
  if (td->td_nstrips == 1U) {
    if ((int )td->td_compression == 1) {
      if ((tif->tif_flags & 33792U) == 32768U) {
        ChopUpSingleUncompressedStrip(tif);
      } else {

      }
    } else {

    }
  } else {

  }
  tif->tif_row = (uint32 )-1;
  tif->tif_curstrip = (tstrip_t )-1;
  tif->tif_col = (uint32 )-1;
  tif->tif_curtile = (ttile_t )-1;
  tif->tif_tilesize = -1;
  tif->tif_scanlinesize = TIFFScanlineSize(tif);
  if (! tif->tif_scanlinesize) {
    TIFFErrorExt(tif->tif_clientdata, module,
                 "%s: cannot handle zero scanline size", tif->tif_name);
    return (0);
  } else {

  }
  if ((tif->tif_flags & 1024U) != 0U) {
    tif->tif_tilesize = TIFFTileSize(tif);
    if (! tif->tif_tilesize) {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%s: cannot handle zero tile size", tif->tif_name);
      return (0);
    } else {

    }
  } else {
    tmp___41 = TIFFStripSize(tif);
    if (tmp___41) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module,
                   "%s: cannot handle zero strip size", tif->tif_name);
      return (0);
    }
  }
  return (1);
  bad: 
  if (dir) {
    _TIFFfree((tdata_t )dir);
  } else {

  }
  return (0);
}
}
int TIFFReadCustomDirectory(TIFF *tif , toff_t diroff ,
                            TIFFFieldInfo const   *info , size_t n ) ;
static char const   module___0[24]  = 
  {      (char const   )'T',      (char const   )'I',      (char const   )'F',      (char const   )'F', 
        (char const   )'R',      (char const   )'e',      (char const   )'a',      (char const   )'d', 
        (char const   )'C',      (char const   )'u',      (char const   )'s',      (char const   )'t', 
        (char const   )'o',      (char const   )'m',      (char const   )'D',      (char const   )'i', 
        (char const   )'r',      (char const   )'e',      (char const   )'c',      (char const   )'t', 
        (char const   )'o',      (char const   )'r',      (char const   )'y',      (char const   )'\000'};
int TIFFReadCustomDirectory(TIFF *tif , toff_t diroff ,
                            TIFFFieldInfo const   *info , size_t n ) 
{ 
  TIFFDirectory *td ;
  TIFFDirEntry *dp ;
  TIFFDirEntry *dir ;
  TIFFFieldInfo const   *fip ;
  size_t fix ;
  uint16 i ;
  uint16 dircount ;
  toff_t tmp ;
  tsize_t tmp___0 ;
  tdata_t tmp___1 ;
  tsize_t tmp___2 ;
  toff_t off ;
  tdata_t tmp___3 ;
  TIFFFieldInfo *tmp___4 ;
  uint32 expected ;
  uint32 tmp___5 ;
  int tmp___6 ;

  {
  td = & tif->tif_dir;
  dir = (TIFFDirEntry *)((void *)0);
  _TIFFSetupFieldInfo(tif, info, n);
  tif->tif_diroff = diroff;
  if (! ((tif->tif_flags & 2048U) != 0U)) {
    tmp = (*(tif->tif_seekproc))(tif->tif_clientdata, diroff, 0);
    if (tmp == diroff) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module___0,
                   "%s: Seek error accessing TIFF directory", tif->tif_name);
      return (0);
    }
    tmp___0 = (*(tif->tif_readproc))(tif->tif_clientdata,
                                     (tdata_t )(& dircount),
                                     (tsize_t )sizeof(uint16 ));
    if (tmp___0 == (tsize_t )sizeof(uint16 )) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module___0,
                   "%s: Can not read TIFF directory count", tif->tif_name);
      return (0);
    }
    if (tif->tif_flags & 128U) {
      TIFFSwabShort(& dircount);
    } else {

    }
    tmp___1 = _TIFFCheckMalloc(tif, (size_t )dircount, sizeof(TIFFDirEntry ),
                               "to read TIFF directory");
    dir = (TIFFDirEntry *)tmp___1;
    if ((unsigned int )dir == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
    tmp___2 = (*(tif->tif_readproc))(tif->tif_clientdata, (tdata_t )dir,
                                     (tsize_t )((unsigned int )dircount * sizeof(TIFFDirEntry )));
    if (tmp___2 == (tsize_t )((unsigned int )dircount * sizeof(TIFFDirEntry ))) {

    } else {
      TIFFErrorExt(tif->tif_clientdata, module___0,
                   "%.100s: Can not read TIFF directory", tif->tif_name);
      goto bad;
    }
  } else {
    off = diroff;
    if (off + sizeof(uint16 ) > tif->tif_size) {
      TIFFErrorExt(tif->tif_clientdata, module___0,
                   "%s: Can not read TIFF directory count", tif->tif_name);
      return (0);
    } else {
      _TIFFmemcpy((tdata_t )(& dircount),
                  (tdata_t const   )(tif->tif_base + off),
                  (tsize_t )sizeof(uint16 ));
    }
    off += sizeof(uint16 );
    if (tif->tif_flags & 128U) {
      TIFFSwabShort(& dircount);
    } else {

    }
    tmp___3 = _TIFFCheckMalloc(tif, (size_t )dircount, sizeof(TIFFDirEntry ),
                               "to read TIFF directory");
    dir = (TIFFDirEntry *)tmp___3;
    if ((unsigned int )dir == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
    if (off + (unsigned int )dircount * sizeof(TIFFDirEntry ) > tif->tif_size) {
      TIFFErrorExt(tif->tif_clientdata, module___0,
                   "%s: Can not read TIFF directory", tif->tif_name);
      goto bad;
    } else {
      _TIFFmemcpy((tdata_t )dir, (tdata_t const   )(tif->tif_base + off),
                  (tsize_t )((unsigned int )dircount * sizeof(TIFFDirEntry )));
    }
  }
  TIFFFreeDirectory(tif);
  fix = (size_t )0;
  dp = dir;
  i = dircount;
  while ((int )i > 0) {
    if (tif->tif_flags & 128U) {
      TIFFSwabArrayOfShort(& dp->tdir_tag, 2UL);
      TIFFSwabArrayOfLong(& dp->tdir_count, 2UL);
    } else {

    }
    if (fix >= tif->tif_nfields) {
      goto __Cont;
    } else
    if ((int )dp->tdir_tag == 0) {
      goto __Cont;
    } else {

    }
    while (1) {
      if (fix < tif->tif_nfields) {
        if ((*(tif->tif_fieldinfo + fix))->field_tag < (ttag_t )dp->tdir_tag) {

        } else {
          break;
        }
      } else {
        break;
      }
      fix ++;
    }
    if (fix >= tif->tif_nfields) {
      goto _L;
    } else
    if ((*(tif->tif_fieldinfo + fix))->field_tag != (ttag_t )dp->tdir_tag) {
      _L: /* CIL Label */ 
      TIFFWarningExt(tif->tif_clientdata, module___0,
                     "%s: unknown field with tag %d (0x%x) encountered",
                     tif->tif_name, (int )dp->tdir_tag, (int )dp->tdir_tag,
                     (int )dp->tdir_type);
      tmp___4 = _TIFFCreateAnonFieldInfo(tif, (ttag_t )dp->tdir_tag,
                                         (TIFFDataType )dp->tdir_type);
      TIFFMergeFieldInfo(tif, (TIFFFieldInfo const   *)tmp___4, 1);
      fix = (size_t )0;
      while (1) {
        if (fix < tif->tif_nfields) {
          if ((*(tif->tif_fieldinfo + fix))->field_tag < (ttag_t )dp->tdir_tag) {

          } else {
            break;
          }
        } else {
          break;
        }
        fix ++;
      }
    } else {

    }
    if ((int )(*(tif->tif_fieldinfo + fix))->field_bit == 0) {
      ignore: 
      dp->tdir_tag = (uint16 )0;
      goto __Cont;
    } else {

    }
    fip = (TIFFFieldInfo const   *)*(tif->tif_fieldinfo + fix);
    while (1) {
      if ((int )dp->tdir_type != (int )((unsigned short )fip->field_type)) {
        if (fix < tif->tif_nfields) {

        } else {
          break;
        }
      } else {
        break;
      }
      if ((unsigned int const   )fip->field_type == 0U) {
        break;
      } else {

      }
      fix ++;
      fip = (TIFFFieldInfo const   *)*(tif->tif_fieldinfo + fix);
      if (fix >= tif->tif_nfields) {
        TIFFWarningExt(tif->tif_clientdata, module___0,
                       "%s: wrong data type %d for \"%s\"; tag ignored",
                       tif->tif_name, (int )dp->tdir_type,
                       (*(tif->tif_fieldinfo + (fix - 1U)))->field_name);
        goto ignore;
      } else
      if (fip->field_tag != (ttag_t const   )dp->tdir_tag) {
        TIFFWarningExt(tif->tif_clientdata, module___0,
                       "%s: wrong data type %d for \"%s\"; tag ignored",
                       tif->tif_name, (int )dp->tdir_type,
                       (*(tif->tif_fieldinfo + (fix - 1U)))->field_name);
        goto ignore;
      } else {

      }
    }
    if ((int const   )fip->field_readcount != -1) {
      if ((int const   )fip->field_readcount != -3) {
        if ((int const   )fip->field_readcount == -2) {
          tmp___5 = (uint32 )td->td_samplesperpixel;
        } else {
          tmp___5 = (uint32 )fip->field_readcount;
        }
        expected = tmp___5;
        tmp___6 = CheckDirCount(tif, dp, expected);
        if (tmp___6) {

        } else {
          goto ignore;
        }
      } else {

      }
    } else {

    }
    TIFFFetchNormalTag(tif, dp);
    __Cont: /* CIL Label */ 
    i = (uint16 )((int )i - 1);
    dp ++;
  }
  if (dir) {
    _TIFFfree((tdata_t )dir);
  } else {

  }
  return (1);
  bad: 
  if (dir) {
    _TIFFfree((tdata_t )dir);
  } else {

  }
  return (0);
}
}
int TIFFReadEXIFDirectory(TIFF *tif , toff_t diroff ) 
{ 
  size_t exifFieldInfoCount ;
  TIFFFieldInfo const   *exifFieldInfo ;
  TIFFFieldInfo const   *tmp ;
  int tmp___0 ;

  {
  tmp = _TIFFGetExifFieldInfo(& exifFieldInfoCount);
  exifFieldInfo = tmp;
  tmp___0 = TIFFReadCustomDirectory(tif, diroff, exifFieldInfo,
                                    exifFieldInfoCount);
  return (tmp___0);
}
}
static int EstimateStripByteCounts(TIFF *tif , TIFFDirEntry *dir ,
                                   uint16 dircount ) ;
static char const   module___1[24]  = 
  {      (char const   )'E',      (char const   )'s',      (char const   )'t',      (char const   )'i', 
        (char const   )'m',      (char const   )'a',      (char const   )'t',      (char const   )'e', 
        (char const   )'S',      (char const   )'t',      (char const   )'r',      (char const   )'i', 
        (char const   )'p',      (char const   )'B',      (char const   )'y',      (char const   )'t', 
        (char const   )'e',      (char const   )'C',      (char const   )'o',      (char const   )'u', 
        (char const   )'n',      (char const   )'t',      (char const   )'s',      (char const   )'\000'};
static int EstimateStripByteCounts(TIFF *tif , TIFFDirEntry *dir ,
                                   uint16 dircount ) 
{ 
  register TIFFDirEntry *dp ;
  register TIFFDirectory *td ;
  uint16 i ;
  tdata_t tmp ;
  uint32 space ;
  toff_t filesize ;
  toff_t tmp___0 ;
  uint16 n ;
  uint32 cc ;
  int tmp___1 ;
  uint32 rowbytes ;
  tsize_t tmp___2 ;
  uint32 rowsperstrip ;

  {
  td = & tif->tif_dir;
  if (td->td_stripbytecount) {
    _TIFFfree((tdata_t )td->td_stripbytecount);
  } else {

  }
  tmp = _TIFFCheckMalloc(tif, td->td_nstrips, sizeof(uint32 ),
                         "for \"StripByteCounts\" array");
  td->td_stripbytecount = (uint32 *)tmp;
  if ((int )td->td_compression != 1) {
    space = ((sizeof(TIFFHeader ) + sizeof(uint16 )) + (unsigned int )dircount * sizeof(TIFFDirEntry )) + sizeof(uint32 );
    tmp___0 = (*(tif->tif_sizeproc))(tif->tif_clientdata);
    filesize = tmp___0;
    dp = dir;
    n = dircount;
    while ((int )n > 0) {
      tmp___1 = TIFFDataWidth((TIFFDataType )dp->tdir_type);
      cc = (uint32 )tmp___1;
      if (cc == 0U) {
        TIFFErrorExt(tif->tif_clientdata, module___1,
                     "%s: Cannot determine size of unknown tag type %d",
                     tif->tif_name, (int )dp->tdir_type);
        return (-1);
      } else {

      }
      cc *= dp->tdir_count;
      if (cc > sizeof(uint32 )) {
        space += cc;
      } else {

      }
      n = (uint16 )((int )n - 1);
      dp ++;
    }
    space = filesize - space;
    if ((int )td->td_planarconfig == 2) {
      space /= (uint32 )td->td_samplesperpixel;
    } else {

    }
    i = (uint16 )0;
    while ((tstrip_t )i < td->td_nstrips) {
      *(td->td_stripbytecount + i) = space;
      i = (uint16 )((int )i + 1);
    }
    i = (uint16 )((int )i - 1);
    if (*(td->td_stripoffset + i) + *(td->td_stripbytecount + i) > filesize) {
      *(td->td_stripbytecount + i) = filesize - *(td->td_stripoffset + i);
    } else {

    }
  } else {
    tmp___2 = TIFFScanlineSize(tif);
    rowbytes = (uint32 )tmp___2;
    rowsperstrip = td->td_imagelength / td->td_stripsperimage;
    i = (uint16 )0;
    while ((tstrip_t )i < td->td_nstrips) {
      *(td->td_stripbytecount + i) = rowbytes * rowsperstrip;
      i = (uint16 )((int )i + 1);
    }
  }
  tif->tif_dir.td_fieldsset[0] |= 1UL << 24;
  if (! (tif->tif_dir.td_fieldsset[0] & (1UL << 17))) {
    td->td_rowsperstrip = td->td_imagelength;
  } else {

  }
  return (1);
}
}
static void MissingRequired(TIFF *tif , char const   *tagname ) ;
static char const   module___2[16]  = 
  {      (char const   )'M',      (char const   )'i',      (char const   )'s',      (char const   )'s', 
        (char const   )'i',      (char const   )'n',      (char const   )'g',      (char const   )'R', 
        (char const   )'e',      (char const   )'q',      (char const   )'u',      (char const   )'i', 
        (char const   )'r',      (char const   )'e',      (char const   )'d',      (char const   )'\000'};
static void MissingRequired(TIFF *tif , char const   *tagname ) 
{ 


  {
  TIFFErrorExt(tif->tif_clientdata, module___2,
               "%s: TIFF directory is missing required \"%s\" field",
               tif->tif_name, tagname);
  return;
}
}
static int CheckDirCount(TIFF *tif , TIFFDirEntry *dir , uint32 count ) 
{ 
  TIFFFieldInfo const   *tmp ;
  TIFFFieldInfo const   *tmp___0 ;

  {
  if (count > dir->tdir_count) {
    tmp = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
    TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "incorrect count for field \"%s\" (%lu, expecting %lu); tag ignored",
                   tmp->field_name, dir->tdir_count, count);
    return (0);
  } else
  if (count < dir->tdir_count) {
    tmp___0 = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
    TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "incorrect count for field \"%s\" (%lu, expecting %lu); tag trimmed",
                   tmp___0->field_name, dir->tdir_count, count);
    return (1);
  } else {

  }
  return (1);
}
}
static tsize_t TIFFFetchData(TIFF *tif , TIFFDirEntry *dir , char *cp ) 
{ 
  int w ;
  int tmp ;
  tsize_t cc ;
  toff_t tmp___0 ;
  tsize_t tmp___1 ;
  tsize_t offset ;
  TIFFFieldInfo const   *tmp___2 ;

  {
  tmp = TIFFDataWidth((TIFFDataType )dir->tdir_type);
  w = tmp;
  cc = (tsize_t )(dir->tdir_count * (uint32 )w);
  if (! dir->tdir_count) {
    goto bad;
  } else
  if (! w) {
    goto bad;
  } else
  if ((tsize_t )dir->tdir_count / w != cc) {
    goto bad;
  } else {

  }
  if (! ((tif->tif_flags & 2048U) != 0U)) {
    tmp___0 = (*(tif->tif_seekproc))(tif->tif_clientdata, dir->tdir_offset, 0);
    if (tmp___0 == dir->tdir_offset) {

    } else {
      goto bad;
    }
    tmp___1 = (*(tif->tif_readproc))(tif->tif_clientdata, (tdata_t )cp, cc);
    if (tmp___1 == cc) {

    } else {
      goto bad;
    }
  } else {
    offset = (tsize_t )(dir->tdir_offset + (uint32 )cc);
    if ((tsize_t )dir->tdir_offset != offset - cc) {
      goto bad;
    } else
    if (offset > (tsize_t )tif->tif_size) {
      goto bad;
    } else {

    }
    _TIFFmemcpy((tdata_t )cp,
                (tdata_t const   )(tif->tif_base + dir->tdir_offset), cc);
  }
  if (tif->tif_flags & 128U) {
    switch ((int )dir->tdir_type) {
    case 8: 
    case 3: 
    TIFFSwabArrayOfShort((uint16 *)cp, (unsigned long )dir->tdir_count);
    break;
    case 11: 
    case 9: 
    case 4: 
    TIFFSwabArrayOfLong((uint32 *)cp, (unsigned long )dir->tdir_count);
    break;
    case 10: 
    case 5: 
    TIFFSwabArrayOfLong((uint32 *)cp, (unsigned long )(2U * dir->tdir_count));
    break;
    case 12: 
    TIFFSwabArrayOfDouble((double *)cp, (unsigned long )dir->tdir_count);
    break;
    }
  } else {

  }
  return (cc);
  bad: 
  tmp___2 = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
  TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
               "Error fetching data for field \"%s\"", tmp___2->field_name);
  return (0);
}
}
static tsize_t TIFFFetchString(TIFF *tif , TIFFDirEntry *dir , char *cp ) 
{ 
  uint32 l ;
  tsize_t tmp ;

  {
  if (dir->tdir_count <= 4U) {
    l = dir->tdir_offset;
    if (tif->tif_flags & 128U) {
      TIFFSwabLong(& l);
    } else {

    }
    _TIFFmemcpy((tdata_t )cp, (tdata_t const   )(& l), (tsize_t )dir->tdir_count);
    return (1);
  } else {

  }
  tmp = TIFFFetchData(tif, dir, cp);
  return (tmp);
}
}
static int cvtRational(TIFF *tif , TIFFDirEntry *dir , uint32 num ,
                       uint32 denom , float *rv ) 
{ 
  TIFFFieldInfo const   *tmp ;

  {
  if (denom == 0U) {
    tmp = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "%s: Rational with zero denominator (num = %lu)",
                 tmp->field_name, num);
    return (0);
  } else {
    if ((int )dir->tdir_type == 5) {
      *rv = (float )num / (float )denom;
    } else {
      *rv = (float )((int32 )num) / (float )((int32 )denom);
    }
    return (1);
  }
}
}
static float TIFFFetchRational(TIFF *tif , TIFFDirEntry *dir ) 
{ 
  uint32 l[2] ;
  float v ;
  tsize_t tmp ;
  int tmp___0 ;
  float tmp___1 ;
  tsize_t tmp___2 ;
  int tmp___3 ;

  {
  tmp___2 = TIFFFetchData(tif, dir, (char *)(l));
  if (tmp___2) {
    tmp___3 = cvtRational(tif, dir, l[0], l[1], & v);
    if (tmp___3) {
      tmp___1 = v;
    } else {
      tmp___1 = 1.0f;
    }
  } else {
    tmp___1 = 1.0f;
  }
  return (tmp___1);
}
}
static float TIFFFetchFloat(TIFF *tif , TIFFDirEntry *dir ) 
{ 
  float v ;
  int32 l ;
  unsigned long tmp ;

  {
  if ((int )tif->tif_header.tiff_magic == 19789) {
    tmp = (unsigned long )(dir->tdir_offset >> *(tif->tif_typeshift + dir->tdir_type)) & (unsigned long )*(tif->tif_typemask + dir->tdir_type);
  } else {
    tmp = (unsigned long )dir->tdir_offset & (unsigned long )*(tif->tif_typemask + dir->tdir_type);
  }
  l = (int32 )((uint32 )tmp);
  _TIFFmemcpy((tdata_t )(& v), (tdata_t const   )(& l), (tsize_t )sizeof(float ));
  return (v);
}
}
static int TIFFFetchByteArray(TIFF *tif , TIFFDirEntry *dir , uint8 *v ) 
{ 
  tsize_t tmp ;

  {
  if (dir->tdir_count <= 4U) {
    if ((int )tif->tif_header.tiff_magic == 19789) {
      if ((int )dir->tdir_type == 6) {
        switch (dir->tdir_count) {
        case 4U: 
        *(v + 3) = (uint8 )(dir->tdir_offset & 255U);
        case 3U: 
        *(v + 2) = (uint8 )((dir->tdir_offset >> 8) & 255U);
        case 2U: 
        *(v + 1) = (uint8 )((dir->tdir_offset >> 16) & 255U);
        case 1U: 
        *(v + 0) = (uint8 )(dir->tdir_offset >> 24);
        }
      } else {
        switch (dir->tdir_count) {
        case 4U: 
        *(v + 3) = (uint8 )(dir->tdir_offset & 255U);
        case 3U: 
        *(v + 2) = (uint8 )((dir->tdir_offset >> 8) & 255U);
        case 2U: 
        *(v + 1) = (uint8 )((dir->tdir_offset >> 16) & 255U);
        case 1U: 
        *(v + 0) = (uint8 )(dir->tdir_offset >> 24);
        }
      }
    } else
    if ((int )dir->tdir_type == 6) {
      switch (dir->tdir_count) {
      case 4U: 
      *(v + 3) = (uint8 )(dir->tdir_offset >> 24);
      case 3U: 
      *(v + 2) = (uint8 )((dir->tdir_offset >> 16) & 255U);
      case 2U: 
      *(v + 1) = (uint8 )((dir->tdir_offset >> 8) & 255U);
      case 1U: 
      *(v + 0) = (uint8 )(dir->tdir_offset & 255U);
      }
    } else {
      switch (dir->tdir_count) {
      case 4U: 
      *(v + 3) = (uint8 )(dir->tdir_offset >> 24);
      case 3U: 
      *(v + 2) = (uint8 )((dir->tdir_offset >> 16) & 255U);
      case 2U: 
      *(v + 1) = (uint8 )((dir->tdir_offset >> 8) & 255U);
      case 1U: 
      *(v + 0) = (uint8 )(dir->tdir_offset & 255U);
      }
    }
    return (1);
  } else {
    tmp = TIFFFetchData(tif, dir, (char *)v);
    return (tmp != 0);
  }
}
}
static int TIFFFetchShortArray(TIFF *tif , TIFFDirEntry *dir , uint16 *v ) 
{ 
  tsize_t tmp ;

  {
  if (dir->tdir_count <= 2U) {
    if ((int )tif->tif_header.tiff_magic == 19789) {
      switch (dir->tdir_count) {
      case 2U: 
      *(v + 1) = (uint16 )(dir->tdir_offset & 65535U);
      case 1U: 
      *(v + 0) = (uint16 )(dir->tdir_offset >> 16);
      }
    } else {
      switch (dir->tdir_count) {
      case 2U: 
      *(v + 1) = (uint16 )(dir->tdir_offset >> 16);
      case 1U: 
      *(v + 0) = (uint16 )(dir->tdir_offset & 65535U);
      }
    }
    return (1);
  } else {
    tmp = TIFFFetchData(tif, dir, (char *)v);
    return (tmp != 0);
  }
}
}
static int TIFFFetchShortPair(TIFF *tif , TIFFDirEntry *dir ) 
{ 
  uint8 v[4] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint16 v___0[2] ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  switch ((int )dir->tdir_type) {
  case 6: 
  case 1: 
  tmp = TIFFFetchByteArray(tif, dir, v);
  if (tmp) {
    tmp___0 = TIFFSetField(tif, (ttag_t )dir->tdir_tag, (int )v[0], (int )v[1]);
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  return (tmp___1);
  case 8: 
  case 3: 
  tmp___2 = TIFFFetchShortArray(tif, dir, v___0);
  if (tmp___2) {
    tmp___3 = TIFFSetField(tif, (ttag_t )dir->tdir_tag, (int )v___0[0],
                           (int )v___0[1]);
    if (tmp___3) {
      tmp___4 = 1;
    } else {
      tmp___4 = 0;
    }
  } else {
    tmp___4 = 0;
  }
  return (tmp___4);
  default: 
  return (0);
  }
}
}
static int TIFFFetchLongArray(TIFF *tif , TIFFDirEntry *dir , uint32 *v ) 
{ 
  tsize_t tmp ;

  {
  if (dir->tdir_count == 1U) {
    *(v + 0) = dir->tdir_offset;
    return (1);
  } else {
    tmp = TIFFFetchData(tif, dir, (char *)v);
    return (tmp != 0);
  }
}
}
static int TIFFFetchRationalArray(TIFF *tif , TIFFDirEntry *dir , float *v ) 
{ 
  int ok ;
  uint32 *l ;
  int tmp ;
  tdata_t tmp___0 ;
  uint32 i ;
  tsize_t tmp___1 ;

  {
  ok = 0;
  tmp = TIFFDataWidth((TIFFDataType )dir->tdir_type);
  tmp___0 = _TIFFCheckMalloc(tif, dir->tdir_count, (size_t )tmp,
                             "to fetch array of rationals");
  l = (uint32 *)tmp___0;
  if (l) {
    tmp___1 = TIFFFetchData(tif, dir, (char *)l);
    if (tmp___1) {
      i = (uint32 )0;
      while (i < dir->tdir_count) {
        ok = cvtRational(tif, dir, *(l + 2U * i), *(l + (2U * i + 1U)), v + i);
        if (! ok) {
          break;
        } else {

        }
        i ++;
      }
    } else {

    }
    _TIFFfree((tdata_t )((char *)l));
  } else {

  }
  return (ok);
}
}
static int TIFFFetchFloatArray(TIFF *tif , TIFFDirEntry *dir , float *v ) 
{ 
  tsize_t tmp ;

  {
  if (dir->tdir_count == 1U) {
    *(v + 0) = *((float *)(& dir->tdir_offset));
    return (1);
  } else {
    tmp = TIFFFetchData(tif, dir, (char *)v);
    if (tmp) {
      return (1);
    } else {
      return (0);
    }
  }
}
}
static int TIFFFetchDoubleArray(TIFF *tif , TIFFDirEntry *dir , double *v ) 
{ 
  tsize_t tmp ;

  {
  tmp = TIFFFetchData(tif, dir, (char *)v);
  if (tmp) {
    return (1);
  } else {
    return (0);
  }
}
}
static int TIFFFetchAnyArray(TIFF *tif , TIFFDirEntry *dir , double *v ) 
{ 
  int i ;
  int tmp ;
  uint8 *vp ;
  int8 *vp___0 ;
  int tmp___0 ;
  uint16 *vp___1 ;
  int16 *vp___2 ;
  int tmp___1 ;
  uint32 *vp___3 ;
  int32 *vp___4 ;
  int tmp___2 ;
  float *vp___5 ;
  int tmp___3 ;
  float *vp___6 ;
  int tmp___4 ;
  TIFFFieldInfo const   *tmp___5 ;

  {
  switch ((int )dir->tdir_type) {
  case 6: 
  case 1: 
  tmp = TIFFFetchByteArray(tif, dir, (uint8 *)v);
  if (tmp) {

  } else {
    return (0);
  }
  if ((int )dir->tdir_type == 1) {
    vp = (uint8 *)v;
    i = (int )(dir->tdir_count - 1U);
    while (i >= 0) {
      *(v + i) = (double )*(vp + i);
      i --;
    }
  } else {
    vp___0 = (int8 *)v;
    i = (int )(dir->tdir_count - 1U);
    while (i >= 0) {
      *(v + i) = (double )*(vp___0 + i);
      i --;
    }
  }
  break;
  case 8: 
  case 3: 
  tmp___0 = TIFFFetchShortArray(tif, dir, (uint16 *)v);
  if (tmp___0) {

  } else {
    return (0);
  }
  if ((int )dir->tdir_type == 3) {
    vp___1 = (uint16 *)v;
    i = (int )(dir->tdir_count - 1U);
    while (i >= 0) {
      *(v + i) = (double )*(vp___1 + i);
      i --;
    }
  } else {
    vp___2 = (int16 *)v;
    i = (int )(dir->tdir_count - 1U);
    while (i >= 0) {
      *(v + i) = (double )*(vp___2 + i);
      i --;
    }
  }
  break;
  case 9: 
  case 4: 
  tmp___1 = TIFFFetchLongArray(tif, dir, (uint32 *)v);
  if (tmp___1) {

  } else {
    return (0);
  }
  if ((int )dir->tdir_type == 4) {
    vp___3 = (uint32 *)v;
    i = (int )(dir->tdir_count - 1U);
    while (i >= 0) {
      *(v + i) = (double )*(vp___3 + i);
      i --;
    }
  } else {
    vp___4 = (int32 *)v;
    i = (int )(dir->tdir_count - 1U);
    while (i >= 0) {
      *(v + i) = (double )*(vp___4 + i);
      i --;
    }
  }
  break;
  case 10: 
  case 5: 
  tmp___2 = TIFFFetchRationalArray(tif, dir, (float *)v);
  if (tmp___2) {

  } else {
    return (0);
  }
  vp___5 = (float *)v;
  i = (int )(dir->tdir_count - 1U);
  while (i >= 0) {
    *(v + i) = (double )*(vp___5 + i);
    i --;
  }
  break;
  case 11: 
  tmp___3 = TIFFFetchFloatArray(tif, dir, (float *)v);
  if (tmp___3) {

  } else {
    return (0);
  }
  vp___6 = (float *)v;
  i = (int )(dir->tdir_count - 1U);
  while (i >= 0) {
    *(v + i) = (double )*(vp___6 + i);
    i --;
  }
  break;
  case 12: 
  tmp___4 = TIFFFetchDoubleArray(tif, dir, v);
  return (tmp___4);
  default: 
  tmp___5 = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
  TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
               "cannot read TIFF_ANY type %d for field \"%s\"",
               tmp___5->field_name);
  return (0);
  }
  return (1);
}
}
static int TIFFFetchNormalTag(TIFF *tif , TIFFDirEntry *dp ) ;
static char const   mesg[19]  = 
  {      (char const   )'t',      (char const   )'o',      (char const   )' ',      (char const   )'f', 
        (char const   )'e',      (char const   )'t',      (char const   )'c',      (char const   )'h', 
        (char const   )' ',      (char const   )'t',      (char const   )'a',      (char const   )'g', 
        (char const   )' ',      (char const   )'v',      (char const   )'a',      (char const   )'l', 
        (char const   )'u',      (char const   )'e',      (char const   )'\000'};
static int TIFFFetchNormalTag(TIFF *tif , TIFFDirEntry *dp ) 
{ 
  int ok ;
  TIFFFieldInfo const   *fip ;
  TIFFFieldInfo const   *tmp ;
  char *cp ;
  tdata_t tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  tdata_t tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  tdata_t tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  tdata_t tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  tdata_t tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  tdata_t tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  tdata_t tmp___18 ;
  tsize_t tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  TIFFDataType type ;
  uint16 v ;
  unsigned long tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  uint32 v32 ;
  unsigned long tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  float v___0 ;
  float tmp___29 ;
  float tmp___30 ;
  float tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  double v___1 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  char c[2] ;
  int tmp___39 ;
  int tmp___40 ;
  tsize_t tmp___41 ;
  int tmp___42 ;

  {
  ok = 0;
  tmp = TIFFFieldWithTag(tif, (ttag_t )dp->tdir_tag);
  fip = tmp;
  if (dp->tdir_count > 1U) {
    cp = (char *)((void *)0);
    switch ((int )dp->tdir_type) {
    case 6: 
    case 1: 
    tmp___0 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(uint8 ), mesg);
    cp = (char *)tmp___0;
    if (cp) {
      tmp___1 = TIFFFetchByteArray(tif, dp, (uint8 *)cp);
      if (tmp___1) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    } else {
      tmp___2 = 0;
    }
    ok = tmp___2;
    break;
    case 8: 
    case 3: 
    tmp___3 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(uint16 ), mesg);
    cp = (char *)tmp___3;
    if (cp) {
      tmp___4 = TIFFFetchShortArray(tif, dp, (uint16 *)cp);
      if (tmp___4) {
        tmp___5 = 1;
      } else {
        tmp___5 = 0;
      }
    } else {
      tmp___5 = 0;
    }
    ok = tmp___5;
    break;
    case 9: 
    case 4: 
    tmp___6 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(uint32 ), mesg);
    cp = (char *)tmp___6;
    if (cp) {
      tmp___7 = TIFFFetchLongArray(tif, dp, (uint32 *)cp);
      if (tmp___7) {
        tmp___8 = 1;
      } else {
        tmp___8 = 0;
      }
    } else {
      tmp___8 = 0;
    }
    ok = tmp___8;
    break;
    case 10: 
    case 5: 
    tmp___9 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(float ), mesg);
    cp = (char *)tmp___9;
    if (cp) {
      tmp___10 = TIFFFetchRationalArray(tif, dp, (float *)cp);
      if (tmp___10) {
        tmp___11 = 1;
      } else {
        tmp___11 = 0;
      }
    } else {
      tmp___11 = 0;
    }
    ok = tmp___11;
    break;
    case 11: 
    tmp___12 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(float ), mesg);
    cp = (char *)tmp___12;
    if (cp) {
      tmp___13 = TIFFFetchFloatArray(tif, dp, (float *)cp);
      if (tmp___13) {
        tmp___14 = 1;
      } else {
        tmp___14 = 0;
      }
    } else {
      tmp___14 = 0;
    }
    ok = tmp___14;
    break;
    case 12: 
    tmp___15 = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof(double ), mesg);
    cp = (char *)tmp___15;
    if (cp) {
      tmp___16 = TIFFFetchDoubleArray(tif, dp, (double *)cp);
      if (tmp___16) {
        tmp___17 = 1;
      } else {
        tmp___17 = 0;
      }
    } else {
      tmp___17 = 0;
    }
    ok = tmp___17;
    break;
    case 7: 
    case 2: 
    tmp___18 = _TIFFCheckMalloc(tif, dp->tdir_count + 1U, (size_t )1, mesg);
    cp = (char *)tmp___18;
    if (cp) {
      tmp___19 = TIFFFetchString(tif, dp, cp);
      if (tmp___19) {
        tmp___20 = 1;
      } else {
        tmp___20 = 0;
      }
    } else {
      tmp___20 = 0;
    }
    ok = tmp___20;
    if (ok != 0) {
      *(cp + dp->tdir_count) = (char )'\000';
    } else {

    }
    break;
    }
    if (ok) {
      if (fip->field_passcount) {
        tmp___21 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, dp->tdir_count, cp);
        ok = tmp___21;
      } else {
        tmp___22 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, cp);
        ok = tmp___22;
      }
    } else {

    }
    if ((unsigned int )cp != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )cp);
    } else {

    }
  } else {
    tmp___42 = CheckDirCount(tif, dp, (uint32 )1);
    if (tmp___42) {
      switch ((int )dp->tdir_type) {
      case 8: 
      case 3: 
      case 6: 
      case 1: 
      type = (TIFFDataType )fip->field_type;
      if ((unsigned int )type != 4U) {
        if ((unsigned int )type != 9U) {
          if ((int )tif->tif_header.tiff_magic == 19789) {
            tmp___23 = (unsigned long )(dp->tdir_offset >> *(tif->tif_typeshift + dp->tdir_type)) & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
          } else {
            tmp___23 = (unsigned long )dp->tdir_offset & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
          }
          v = (uint16 )((uint32 )tmp___23);
          if (fip->field_passcount) {
            tmp___24 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, 1, & v);
            ok = tmp___24;
          } else {
            tmp___25 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (int )v);
            ok = tmp___25;
          }
          break;
        } else {

        }
      } else {

      }
      case 9: 
      case 4: 
      if ((int )tif->tif_header.tiff_magic == 19789) {
        tmp___26 = (unsigned long )(dp->tdir_offset >> *(tif->tif_typeshift + dp->tdir_type)) & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
      } else {
        tmp___26 = (unsigned long )dp->tdir_offset & (unsigned long )*(tif->tif_typemask + dp->tdir_type);
      }
      v32 = (uint32 )tmp___26;
      if (fip->field_passcount) {
        tmp___27 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, 1, & v32);
        ok = tmp___27;
      } else {
        tmp___28 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, v32);
        ok = tmp___28;
      }
      break;
      case 11: 
      case 10: 
      case 5: 
      if ((int )dp->tdir_type == 11) {
        tmp___29 = TIFFFetchFloat(tif, dp);
        tmp___31 = tmp___29;
      } else {
        tmp___30 = TIFFFetchRational(tif, dp);
        tmp___31 = tmp___30;
      }
      v___0 = tmp___31;
      if (fip->field_passcount) {
        tmp___32 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, 1, & v___0);
        ok = tmp___32;
      } else {
        tmp___33 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, (double )v___0);
        ok = tmp___33;
      }
      break;
      case 12: 
      tmp___34 = TIFFFetchDoubleArray(tif, dp, & v___1);
      if (tmp___34) {
        if (fip->field_passcount) {
          tmp___35 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, 1, & v___1);
          tmp___37 = tmp___35;
        } else {
          tmp___36 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, v___1);
          tmp___37 = tmp___36;
        }
        if (tmp___37) {
          tmp___38 = 1;
        } else {
          tmp___38 = 0;
        }
      } else {
        tmp___38 = 0;
      }
      ok = tmp___38;
      break;
      case 7: 
      case 2: 
      tmp___41 = TIFFFetchString(tif, dp, c);
      ok = tmp___41 != 0;
      if (ok != 0) {
        c[1] = (char )'\000';
        if (fip->field_passcount) {
          tmp___39 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, 1, c);
          ok = tmp___39;
        } else {
          tmp___40 = TIFFSetField(tif, (ttag_t )dp->tdir_tag, c);
          ok = tmp___40;
        }
      } else {

      }
      break;
      }
    } else {

    }
  }
  return (ok);
}
}
static int TIFFFetchPerSampleShorts(TIFF *tif , TIFFDirEntry *dir , uint16 *pl ) 
{ 
  uint16 samples ;
  int status ;
  uint16 buf[10] ;
  uint16 *v ;
  tdata_t tmp ;
  uint16 i ;
  int check_count ;
  TIFFFieldInfo const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  samples = tif->tif_dir.td_samplesperpixel;
  status = 0;
  tmp___2 = CheckDirCount(tif, dir, (uint32 )samples);
  if (tmp___2) {
    v = buf;
    if (dir->tdir_count > sizeof(buf) / sizeof(buf[0])) {
      tmp = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint16 ),
                             "to fetch per-sample values");
      v = (uint16 *)tmp;
    } else {

    }
    if (v) {
      tmp___1 = TIFFFetchShortArray(tif, dir, v);
      if (tmp___1) {
        check_count = (int )dir->tdir_count;
        if ((int )samples < check_count) {
          check_count = (int )samples;
        } else {

        }
        i = (uint16 )1;
        while ((int )i < check_count) {
          if ((int )*(v + i) != (int )*(v + 0)) {
            tmp___0 = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
            TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                         "Cannot handle different per-sample values for field \"%s\"",
                         tmp___0->field_name);
            goto bad;
          } else {

          }
          i = (uint16 )((int )i + 1);
        }
        *pl = *(v + 0);
        status = 1;
      } else {

      }
    } else {

    }
    bad: 
    if (v) {
      if ((unsigned int )v != (unsigned int )(buf)) {
        _TIFFfree((tdata_t )v);
      } else {

      }
    } else {

    }
  } else {

  }
  return (status);
}
}
static int TIFFFetchPerSampleLongs(TIFF *tif , TIFFDirEntry *dir , uint32 *pl ) 
{ 
  uint16 samples ;
  int status ;
  uint32 buf[10] ;
  uint32 *v ;
  tdata_t tmp ;
  uint16 i ;
  int check_count ;
  TIFFFieldInfo const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  samples = tif->tif_dir.td_samplesperpixel;
  status = 0;
  tmp___2 = CheckDirCount(tif, dir, (uint32 )samples);
  if (tmp___2) {
    v = buf;
    if (dir->tdir_count > sizeof(buf) / sizeof(buf[0])) {
      tmp = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint32 ),
                             "to fetch per-sample values");
      v = (uint32 *)tmp;
    } else {

    }
    if (v) {
      tmp___1 = TIFFFetchLongArray(tif, dir, v);
      if (tmp___1) {
        check_count = (int )dir->tdir_count;
        if ((int )samples < check_count) {
          check_count = (int )samples;
        } else {

        }
        i = (uint16 )1;
        while ((int )i < check_count) {
          if (*(v + i) != *(v + 0)) {
            tmp___0 = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
            TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                         "Cannot handle different per-sample values for field \"%s\"",
                         tmp___0->field_name);
            goto bad;
          } else {

          }
          i = (uint16 )((int )i + 1);
        }
        *pl = *(v + 0);
        status = 1;
      } else {

      }
    } else {

    }
    bad: 
    if (v) {
      if ((unsigned int )v != (unsigned int )(buf)) {
        _TIFFfree((tdata_t )v);
      } else {

      }
    } else {

    }
  } else {

  }
  return (status);
}
}
static int TIFFFetchPerSampleAnys(TIFF *tif , TIFFDirEntry *dir , double *pl ) 
{ 
  uint16 samples ;
  int status ;
  double buf[10] ;
  double *v ;
  tdata_t tmp ;
  uint16 i ;
  int check_count ;
  TIFFFieldInfo const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  samples = tif->tif_dir.td_samplesperpixel;
  status = 0;
  tmp___2 = CheckDirCount(tif, dir, (uint32 )samples);
  if (tmp___2) {
    v = buf;
    if (dir->tdir_count > sizeof(buf) / sizeof(buf[0])) {
      tmp = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(double ),
                             "to fetch per-sample values");
      v = (double *)tmp;
    } else {

    }
    if (v) {
      tmp___1 = TIFFFetchAnyArray(tif, dir, v);
      if (tmp___1) {
        check_count = (int )dir->tdir_count;
        if ((int )samples < check_count) {
          check_count = (int )samples;
        } else {

        }
        i = (uint16 )1;
        while ((int )i < check_count) {
          if (*(v + i) != *(v + 0)) {
            tmp___0 = TIFFFieldWithTag(tif, (ttag_t )dir->tdir_tag);
            TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                         "Cannot handle different per-sample values for field \"%s\"",
                         tmp___0->field_name);
            goto bad;
          } else {

          }
          i = (uint16 )((int )i + 1);
        }
        *pl = *(v + 0);
        status = 1;
      } else {

      }
    } else {

    }
    bad: 
    if (v) {
      if ((unsigned int )v != (unsigned int )(buf)) {
        _TIFFfree((tdata_t )v);
      } else {

      }
    } else {

    }
  } else {

  }
  return (status);
}
}
static int TIFFFetchStripThing(TIFF *tif , TIFFDirEntry *dir , long nstrips ,
                               uint32 **lpp ) 
{ 
  register uint32 *lp ;
  int status ;
  uint32 *tmp ;
  tdata_t tmp___0 ;
  uint16 *dp ;
  tdata_t tmp___1 ;
  int i ;
  uint32 *dp___0 ;
  tdata_t tmp___2 ;
  int i___0 ;

  {
  CheckDirCount(tif, dir, (uint32 )nstrips);
  if ((unsigned int )*lpp == (unsigned int )((void *)0)) {
    tmp___0 = _TIFFCheckMalloc(tif, (size_t )nstrips, sizeof(uint32 ),
                               "for strip array");
    tmp = (uint32 *)tmp___0;
    *lpp = tmp;
    if ((unsigned int )tmp == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
  } else {

  }
  lp = *lpp;
  _TIFFmemset((tdata_t )lp, 0,
              (tsize_t )((unsigned long )sizeof(uint32 ) * (unsigned long )nstrips));
  if ((int )dir->tdir_type == 3) {
    tmp___1 = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint16 ),
                               "to fetch strip tag");
    dp = (uint16 *)tmp___1;
    if ((unsigned int )dp == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
    status = TIFFFetchShortArray(tif, dir, dp);
    if (status != 0) {
      i = 0;
      while (1) {
        if ((long )i < nstrips) {
          if (i < (int )dir->tdir_count) {

          } else {
            break;
          }
        } else {
          break;
        }
        *(lp + i) = (uint32 )*(dp + i);
        i ++;
      }
    } else {

    }
    _TIFFfree((tdata_t )((char *)dp));
  } else
  if (nstrips != (long )((int )dir->tdir_count)) {
    tmp___2 = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint32 ),
                               "to fetch strip tag");
    dp___0 = (uint32 *)tmp___2;
    if ((unsigned int )dp___0 == (unsigned int )((void *)0)) {
      return (0);
    } else {

    }
    status = TIFFFetchLongArray(tif, dir, dp___0);
    if (status != 0) {
      i___0 = 0;
      while (1) {
        if ((long )i___0 < nstrips) {
          if (i___0 < (int )dir->tdir_count) {

          } else {
            break;
          }
        } else {
          break;
        }
        *(lp + i___0) = *(dp___0 + i___0);
        i___0 ++;
      }
    } else {

    }
    _TIFFfree((tdata_t )((char *)dp___0));
  } else {
    status = TIFFFetchLongArray(tif, dir, lp);
  }
  return (status);
}
}
static int TIFFFetchRefBlackWhite(TIFF *tif , TIFFDirEntry *dir ) ;
static char const   mesg___0[32]  = 
  {      (char const   )'f',      (char const   )'o',      (char const   )'r',      (char const   )' ', 
        (char const   )'\"',      (char const   )'R',      (char const   )'e',      (char const   )'f', 
        (char const   )'e',      (char const   )'r',      (char const   )'e',      (char const   )'n', 
        (char const   )'c',      (char const   )'e',      (char const   )'B',      (char const   )'l', 
        (char const   )'a',      (char const   )'c',      (char const   )'k',      (char const   )'W', 
        (char const   )'h',      (char const   )'i',      (char const   )'t',      (char const   )'e', 
        (char const   )'\"',      (char const   )' ',      (char const   )'a',      (char const   )'r', 
        (char const   )'r',      (char const   )'a',      (char const   )'y',      (char const   )'\000'};
static int TIFFFetchRefBlackWhite(TIFF *tif , TIFFDirEntry *dir ) 
{ 
  char *cp ;
  int ok ;
  int tmp ;
  tdata_t tmp___0 ;
  float *fp ;
  tdata_t tmp___1 ;
  uint32 i ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if ((int )dir->tdir_type == 5) {
    tmp = TIFFFetchNormalTag(tif, dir);
    return (tmp);
  } else {

  }
  tmp___0 = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint32 ), mesg___0);
  cp = (char *)tmp___0;
  if (cp) {
    tmp___2 = TIFFFetchLongArray(tif, dir, (uint32 *)cp);
    if (tmp___2) {
      tmp___3 = 1;
    } else {
      tmp___3 = 0;
    }
  } else {
    tmp___3 = 0;
  }
  ok = tmp___3;
  if (ok != 0) {
    tmp___1 = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(float ), mesg___0);
    fp = (float *)tmp___1;
    ok = (unsigned int )fp != (unsigned int )((void *)0);
    if (ok != 0) {
      i = (uint32 )0;
      while (i < dir->tdir_count) {
        *(fp + i) = (float )*((uint32 *)cp + i);
        i ++;
      }
      ok = TIFFSetField(tif, (ttag_t )dir->tdir_tag, fp);
      _TIFFfree((tdata_t )((char *)fp));
    } else {

    }
  } else {

  }
  if (cp) {
    _TIFFfree((tdata_t )cp);
  } else {

  }
  return (ok);
}
}
static void ChopUpSingleUncompressedStrip(TIFF *tif ) 
{ 
  register TIFFDirectory *td ;
  uint32 bytecount ;
  uint32 offset ;
  tsize_t rowbytes ;
  tsize_t tmp ;
  tsize_t stripbytes ;
  tstrip_t strip ;
  tstrip_t nstrips ;
  tstrip_t rowsperstrip ;
  uint32 *newcounts ;
  uint32 *newoffsets ;
  tdata_t tmp___0 ;
  tdata_t tmp___1 ;
  tstrip_t tmp___2 ;

  {
  td = & tif->tif_dir;
  bytecount = *(td->td_stripbytecount + 0);
  offset = *(td->td_stripoffset + 0);
  tmp = TIFFVTileSize(tif, (uint32 )1);
  rowbytes = tmp;
  if (rowbytes > 8192) {
    stripbytes = rowbytes;
    rowsperstrip = (tstrip_t )1;
  } else
  if (rowbytes > 0) {
    rowsperstrip = (tstrip_t )(8192 / rowbytes);
    stripbytes = (tsize_t )((tstrip_t )rowbytes * rowsperstrip);
  } else {
    return;
  }
  if (rowsperstrip >= td->td_rowsperstrip) {
    return;
  } else {

  }
  nstrips = (bytecount + ((uint32 )stripbytes - 1U)) / (uint32 )stripbytes;
  if (nstrips == 0U) {
    return;
  } else {

  }
  tmp___0 = _TIFFCheckMalloc(tif, nstrips, sizeof(uint32 ),
                             "for chopped \"StripByteCounts\" array");
  newcounts = (uint32 *)tmp___0;
  tmp___1 = _TIFFCheckMalloc(tif, nstrips, sizeof(uint32 ),
                             "for chopped \"StripOffsets\" array");
  newoffsets = (uint32 *)tmp___1;
  if ((unsigned int )newcounts == (unsigned int )((void *)0)) {
    goto _L;
  } else
  if ((unsigned int )newoffsets == (unsigned int )((void *)0)) {
    _L: /* CIL Label */ 
    if ((unsigned int )newcounts != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )newcounts);
    } else {

    }
    if ((unsigned int )newoffsets != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )newoffsets);
    } else {

    }
    return;
  } else {

  }
  strip = (tstrip_t )0;
  while (strip < nstrips) {
    if (stripbytes > (tsize_t )bytecount) {
      stripbytes = (tsize_t )bytecount;
    } else {

    }
    *(newcounts + strip) = (uint32 )stripbytes;
    *(newoffsets + strip) = offset;
    offset += (uint32 )stripbytes;
    bytecount -= (uint32 )stripbytes;
    strip ++;
  }
  tmp___2 = nstrips;
  td->td_nstrips = tmp___2;
  td->td_stripsperimage = tmp___2;
  TIFFSetField(tif, (ttag_t )278, rowsperstrip);
  _TIFFfree((tdata_t )td->td_stripbytecount);
  _TIFFfree((tdata_t )td->td_stripoffset);
  td->td_stripbytecount = newcounts;
  td->td_stripoffset = newoffsets;
  td->td_stripbytecountsorted = 1;
  return;
}
}
