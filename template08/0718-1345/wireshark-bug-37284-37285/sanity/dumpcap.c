typedef unsigned int size_t;
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
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_3 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_2 {
   int __count ;
   union __anonunion___value_3 __value ;
};
typedef struct __anonstruct___mbstate_t_2 __mbstate_t;
struct __anonstruct__G_fpos_t_4 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_4 _G_fpos_t;
struct __anonstruct__G_fpos64_t_5 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_5 _G_fpos64_t;
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
typedef __off64_t off_t;
typedef __ssize_t ssize_t;
typedef _G_fpos64_t fpos_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_6 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_7 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_6 __wait_terminated ;
   struct __anonstruct___wait_stopped_7 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_8 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_8  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_9 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_9 div_t;
struct __anonstruct_ldiv_t_10 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_10 ldiv_t;
struct __anonstruct_lldiv_t_11 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_11 lldiv_t;
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
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
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
struct __anonstruct___sigset_t_12 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_12 __sigset_t;
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
struct __anonstruct_fd_set_13 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_13 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_14 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_14 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_16 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_16 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_15 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_15 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_17 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_17 pthread_mutexattr_t;
struct __anonstruct___data_19 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_18 {
   struct __anonstruct___data_19 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_18 pthread_cond_t;
union __anonunion_pthread_condattr_t_20 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_20 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_22 {
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
union __anonunion_pthread_rwlock_t_21 {
   struct __anonstruct___data_22 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_21 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_23 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_23 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_24 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_24 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_25 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_25 pthread_barrierattr_t;
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
typedef int ptrdiff_t;
typedef signed char gint8;
typedef unsigned char guint8;
typedef short gint16;
typedef unsigned short guint16;
typedef int gint32;
typedef unsigned int guint32;
typedef long long gint64;
typedef unsigned long long guint64;
typedef int gssize;
typedef unsigned int gsize;
typedef gint64 goffset;
typedef int gintptr;
typedef unsigned int guintptr;
struct _GStaticMutex;
typedef struct _GStaticMutex GStaticMutex;
struct _GMutex;
union __anonunion_static_mutex_26 {
   char pad[24] ;
   double dummy_double ;
   void *dummy_pointer ;
   long dummy_long ;
};
struct _GStaticMutex {
   struct _GMutex *runtime_mutex ;
   union __anonunion_static_mutex_26 static_mutex ;
};
union _GSystemThread;
typedef union _GSystemThread GSystemThread;
union _GSystemThread {
   char data[4] ;
   double dummy_double ;
   void *dummy_pointer ;
   long dummy_long ;
};
typedef int GPid;
typedef char gchar;
typedef short gshort;
typedef long glong;
typedef int gint;
typedef gint gboolean;
typedef unsigned char guchar;
typedef unsigned short gushort;
typedef unsigned long gulong;
typedef unsigned int guint;
typedef float gfloat;
typedef double gdouble;
typedef void *gpointer;
typedef void const   *gconstpointer;
typedef gint (*GCompareFunc)(gconstpointer a , gconstpointer b );
typedef gint (*GCompareDataFunc)(gconstpointer a , gconstpointer b ,
                                 gpointer user_data );
typedef gboolean (*GEqualFunc)(gconstpointer a , gconstpointer b );
typedef void (*GDestroyNotify)(gpointer data );
typedef void (*GFunc)(gpointer data , gpointer user_data );
typedef guint (*GHashFunc)(gconstpointer key );
typedef void (*GHFunc)(gpointer key , gpointer value , gpointer user_data );
typedef void (*GFreeFunc)(gpointer data );
typedef gchar const   *(*GTranslateFunc)(gchar const   *str , gpointer data );
union _GDoubleIEEE754;
typedef union _GDoubleIEEE754 GDoubleIEEE754;
union _GFloatIEEE754;
typedef union _GFloatIEEE754 GFloatIEEE754;
struct __anonstruct_mpn_27 {
   guint mantissa : 23 ;
   guint biased_exponent : 8 ;
   guint sign : 1 ;
};
union _GFloatIEEE754 {
   gfloat v_float ;
   struct __anonstruct_mpn_27 mpn ;
};
struct __anonstruct_mpn_28 {
   guint mantissa_low : 32 ;
   guint mantissa_high : 20 ;
   guint biased_exponent : 11 ;
   guint sign : 1 ;
};
union _GDoubleIEEE754 {
   gdouble v_double ;
   struct __anonstruct_mpn_28 mpn ;
};
struct _GTimeVal;
typedef struct _GTimeVal GTimeVal;
struct _GTimeVal {
   glong tv_sec ;
   glong tv_usec ;
};
struct _GArray;
typedef struct _GArray GArray;
struct _GByteArray;
typedef struct _GByteArray GByteArray;
struct _GPtrArray;
typedef struct _GPtrArray GPtrArray;
struct _GArray {
   gchar *data ;
   guint len ;
};
struct _GByteArray {
   guint8 *data ;
   guint len ;
};
struct _GPtrArray {
   gpointer *pdata ;
   guint len ;
};
typedef guint32 GQuark;
struct _GError;
typedef struct _GError GError;
struct _GError {
   GQuark domain ;
   gint code ;
   gchar *message ;
};
enum __anonenum_GUserDirectory_29 {
    G_USER_DIRECTORY_DESKTOP = 0,
    G_USER_DIRECTORY_DOCUMENTS = 1,
    G_USER_DIRECTORY_DOWNLOAD = 2,
    G_USER_DIRECTORY_MUSIC = 3,
    G_USER_DIRECTORY_PICTURES = 4,
    G_USER_DIRECTORY_PUBLIC_SHARE = 5,
    G_USER_DIRECTORY_TEMPLATES = 6,
    G_USER_DIRECTORY_VIDEOS = 7,
    G_USER_N_DIRECTORIES = 8
} ;
typedef enum __anonenum_GUserDirectory_29 GUserDirectory;
struct _GDebugKey;
typedef struct _GDebugKey GDebugKey;
struct _GDebugKey {
   gchar const   *key ;
   guint value ;
};
typedef void (*GVoidFunc)(void);
struct _GTrashStack;
typedef struct _GTrashStack GTrashStack;
struct _GTrashStack {
   GTrashStack *next ;
};
enum __anonenum_GThreadError_30 {
    G_THREAD_ERROR_AGAIN = 0
} ;
typedef enum __anonenum_GThreadError_30 GThreadError;
typedef gpointer (*GThreadFunc)(gpointer data );
enum __anonenum_GThreadPriority_31 {
    G_THREAD_PRIORITY_LOW = 0,
    G_THREAD_PRIORITY_NORMAL = 1,
    G_THREAD_PRIORITY_HIGH = 2,
    G_THREAD_PRIORITY_URGENT = 3
} ;
typedef enum __anonenum_GThreadPriority_31 GThreadPriority;
struct _GThread;
typedef struct _GThread GThread;
struct _GThread {
   gpointer (*func)(gpointer data ) ;
   gpointer data ;
   gboolean joinable ;
   GThreadPriority priority ;
};
typedef struct _GMutex GMutex;
struct _GCond;
typedef struct _GCond GCond;
struct _GPrivate;
typedef struct _GPrivate GPrivate;
struct _GStaticPrivate;
typedef struct _GStaticPrivate GStaticPrivate;
struct _GThreadFunctions;
typedef struct _GThreadFunctions GThreadFunctions;
struct _GThreadFunctions {
   GMutex *(*mutex_new)(void) ;
   void (*mutex_lock)(GMutex *mutex ) ;
   gboolean (*mutex_trylock)(GMutex *mutex ) ;
   void (*mutex_unlock)(GMutex *mutex ) ;
   void (*mutex_free)(GMutex *mutex ) ;
   GCond *(*cond_new)(void) ;
   void (*cond_signal)(GCond *cond ) ;
   void (*cond_broadcast)(GCond *cond ) ;
   void (*cond_wait)(GCond *cond , GMutex *mutex ) ;
   gboolean (*cond_timed_wait)(GCond *cond , GMutex *mutex , GTimeVal *end_time ) ;
   void (*cond_free)(GCond *cond ) ;
   GPrivate *(*private_new)(void (*destructor)(gpointer data ) ) ;
   gpointer (*private_get)(GPrivate *private_key ) ;
   void (*private_set)(GPrivate *private_key , gpointer data ) ;
   void (*thread_create)(gpointer (*func)(gpointer data ) , gpointer data ,
                         gulong stack_size , gboolean joinable ,
                         gboolean bound , GThreadPriority priority ,
                         gpointer thread , GError **error ) ;
   void (*thread_yield)(void) ;
   void (*thread_join)(gpointer thread ) ;
   void (*thread_exit)(void) ;
   void (*thread_set_priority)(gpointer thread , GThreadPriority priority ) ;
   void (*thread_self)(gpointer thread ) ;
   gboolean (*thread_equal)(gpointer thread1 , gpointer thread2 ) ;
};
struct _GStaticPrivate {
   guint index ;
};
struct _GStaticRecMutex;
typedef struct _GStaticRecMutex GStaticRecMutex;
struct _GStaticRecMutex {
   GStaticMutex mutex ;
   guint depth ;
   GSystemThread owner ;
};
struct _GStaticRWLock;
typedef struct _GStaticRWLock GStaticRWLock;
struct _GStaticRWLock {
   GStaticMutex mutex ;
   GCond *read_cond ;
   GCond *write_cond ;
   guint read_counter ;
   gboolean have_writer ;
   guint want_to_read ;
   guint want_to_write ;
};
enum __anonenum_GOnceStatus_32 {
    G_ONCE_STATUS_NOTCALLED = 0,
    G_ONCE_STATUS_PROGRESS = 1,
    G_ONCE_STATUS_READY = 2
} ;
typedef enum __anonenum_GOnceStatus_32 GOnceStatus;
struct _GOnce;
typedef struct _GOnce GOnce;
struct _GOnce {
   GOnceStatus volatile   status ;
   gpointer volatile   retval ;
};
struct _GAsyncQueue;
typedef struct _GAsyncQueue GAsyncQueue;
typedef __sig_atomic_t sig_atomic_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_34 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_35 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_36 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_37 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_38 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_39 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_33 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_34 _kill ;
   struct __anonstruct__timer_35 _timer ;
   struct __anonstruct__rt_36 _rt ;
   struct __anonstruct__sigchld_37 _sigchld ;
   struct __anonstruct__sigfault_38 _sigfault ;
   struct __anonstruct__sigpoll_39 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_33 _sifields ;
};
typedef struct siginfo siginfo_t;
enum __anonenum_40 {
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
enum __anonenum_41 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_42 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_43 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_44 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_45 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_46 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_47 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_49 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_48 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_49 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_48 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_50 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
typedef void (*__sighandler_t)(int  );
typedef void (*sig_t)(int  );
union __anonunion___sigaction_handler_51 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_51 __sigaction_handler ;
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
struct __anonstruct___kernel_fd_set_52 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___kernel_fd_set_52 __kernel_fd_set;
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
struct __anonstruct___kernel_fsid_t_53 {
   int val[2] ;
};
typedef struct __anonstruct___kernel_fsid_t_53 __kernel_fsid_t;
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
union __anonunion____missing_field_name_54 {
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
   union __anonunion____missing_field_name_54 __annonCompField2 ;
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
enum __anonenum_55 {
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
struct __anonstruct_mcontext_t_56 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_56 mcontext_t;
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
typedef struct ucontext ucontext_t;
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
enum __anonenum_GBookmarkFileError_57 {
    G_BOOKMARK_FILE_ERROR_INVALID_URI = 0,
    G_BOOKMARK_FILE_ERROR_INVALID_VALUE = 1,
    G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED = 2,
    G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND = 3,
    G_BOOKMARK_FILE_ERROR_READ = 4,
    G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING = 5,
    G_BOOKMARK_FILE_ERROR_WRITE = 6,
    G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND = 7
} ;
typedef enum __anonenum_GBookmarkFileError_57 GBookmarkFileError;
struct _GBookmarkFile;
typedef struct _GBookmarkFile GBookmarkFile;
enum __anonenum_GSliceConfig_58 {
    G_SLICE_CONFIG_ALWAYS_MALLOC = 1,
    G_SLICE_CONFIG_BYPASS_MAGAZINES = 2,
    G_SLICE_CONFIG_WORKING_SET_MSECS = 3,
    G_SLICE_CONFIG_COLOR_INCREMENT = 4,
    G_SLICE_CONFIG_CHUNK_SIZES = 5,
    G_SLICE_CONFIG_CONTENTION_COUNTER = 6
} ;
typedef enum __anonenum_GSliceConfig_58 GSliceConfig;
struct _GMemVTable;
typedef struct _GMemVTable GMemVTable;
struct _GMemVTable {
   gpointer (*malloc)(gsize n_bytes ) ;
   gpointer (*realloc)(gpointer mem , gsize n_bytes ) ;
   void (*free)(gpointer mem ) ;
   gpointer (*calloc)(gsize n_blocks , gsize n_block_bytes ) ;
   gpointer (*try_malloc)(gsize n_bytes ) ;
   gpointer (*try_realloc)(gpointer mem , gsize n_bytes ) ;
};
struct _GAllocator;
typedef struct _GAllocator GAllocator;
struct _GMemChunk;
typedef struct _GMemChunk GMemChunk;
struct _GList;
typedef struct _GList GList;
struct _GList {
   gpointer data ;
   GList *next ;
   GList *prev ;
};
struct _GCache;
typedef struct _GCache GCache;
typedef gpointer (*GCacheNewFunc)(gpointer key );
typedef gpointer (*GCacheDupFunc)(gpointer value );
typedef void (*GCacheDestroyFunc)(gpointer value );
enum __anonenum_GChecksumType_59 {
    G_CHECKSUM_MD5 = 0,
    G_CHECKSUM_SHA1 = 1,
    G_CHECKSUM_SHA256 = 2
} ;
typedef enum __anonenum_GChecksumType_59 GChecksumType;
struct _GChecksum;
typedef struct _GChecksum GChecksum;
struct _GCompletion;
typedef struct _GCompletion GCompletion;
typedef gchar *(*GCompletionFunc)(gpointer  );
typedef gint (*GCompletionStrncmpFunc)(gchar const   *s1 , gchar const   *s2 ,
                                       gsize n );
struct _GCompletion {
   GList *items ;
   gchar *(*func)(gpointer  ) ;
   gchar *prefix ;
   GList *cache ;
   gint (*strncmp_func)(gchar const   *s1 , gchar const   *s2 , gsize n ) ;
};
enum __anonenum_GConvertError_60 {
    G_CONVERT_ERROR_NO_CONVERSION = 0,
    G_CONVERT_ERROR_ILLEGAL_SEQUENCE = 1,
    G_CONVERT_ERROR_FAILED = 2,
    G_CONVERT_ERROR_PARTIAL_INPUT = 3,
    G_CONVERT_ERROR_BAD_URI = 4,
    G_CONVERT_ERROR_NOT_ABSOLUTE_PATH = 5
} ;
typedef enum __anonenum_GConvertError_60 GConvertError;
struct _GIConv;
typedef struct _GIConv *GIConv;
struct _GData;
typedef struct _GData GData;
typedef void (*GDataForeachFunc)(GQuark key_id , gpointer data ,
                                 gpointer user_data );
typedef gint32 GTime;
typedef guint16 GDateYear;
typedef guint8 GDateDay;
struct _GDate;
typedef struct _GDate GDate;
enum __anonenum_GDateDMY_61 {
    G_DATE_DAY = 0,
    G_DATE_MONTH = 1,
    G_DATE_YEAR = 2
} ;
typedef enum __anonenum_GDateDMY_61 GDateDMY;
enum __anonenum_GDateWeekday_62 {
    G_DATE_BAD_WEEKDAY = 0,
    G_DATE_MONDAY = 1,
    G_DATE_TUESDAY = 2,
    G_DATE_WEDNESDAY = 3,
    G_DATE_THURSDAY = 4,
    G_DATE_FRIDAY = 5,
    G_DATE_SATURDAY = 6,
    G_DATE_SUNDAY = 7
} ;
typedef enum __anonenum_GDateWeekday_62 GDateWeekday;
enum __anonenum_GDateMonth_63 {
    G_DATE_BAD_MONTH = 0,
    G_DATE_JANUARY = 1,
    G_DATE_FEBRUARY = 2,
    G_DATE_MARCH = 3,
    G_DATE_APRIL = 4,
    G_DATE_MAY = 5,
    G_DATE_JUNE = 6,
    G_DATE_JULY = 7,
    G_DATE_AUGUST = 8,
    G_DATE_SEPTEMBER = 9,
    G_DATE_OCTOBER = 10,
    G_DATE_NOVEMBER = 11,
    G_DATE_DECEMBER = 12
} ;
typedef enum __anonenum_GDateMonth_63 GDateMonth;
struct _GDate {
   guint julian_days : 32 ;
   guint julian : 1 ;
   guint dmy : 1 ;
   guint day : 6 ;
   guint month : 4 ;
   guint year : 16 ;
};
struct _GDir;
typedef struct _GDir GDir;
enum __anonenum_GFileError_64 {
    G_FILE_ERROR_EXIST = 0,
    G_FILE_ERROR_ISDIR = 1,
    G_FILE_ERROR_ACCES = 2,
    G_FILE_ERROR_NAMETOOLONG = 3,
    G_FILE_ERROR_NOENT = 4,
    G_FILE_ERROR_NOTDIR = 5,
    G_FILE_ERROR_NXIO = 6,
    G_FILE_ERROR_NODEV = 7,
    G_FILE_ERROR_ROFS = 8,
    G_FILE_ERROR_TXTBSY = 9,
    G_FILE_ERROR_FAULT = 10,
    G_FILE_ERROR_LOOP = 11,
    G_FILE_ERROR_NOSPC = 12,
    G_FILE_ERROR_NOMEM = 13,
    G_FILE_ERROR_MFILE = 14,
    G_FILE_ERROR_NFILE = 15,
    G_FILE_ERROR_BADF = 16,
    G_FILE_ERROR_INVAL = 17,
    G_FILE_ERROR_PIPE = 18,
    G_FILE_ERROR_AGAIN = 19,
    G_FILE_ERROR_INTR = 20,
    G_FILE_ERROR_IO = 21,
    G_FILE_ERROR_PERM = 22,
    G_FILE_ERROR_NOSYS = 23,
    G_FILE_ERROR_FAILED = 24
} ;
typedef enum __anonenum_GFileError_64 GFileError;
enum __anonenum_GFileTest_65 {
    G_FILE_TEST_IS_REGULAR = 1,
    G_FILE_TEST_IS_SYMLINK = 2,
    G_FILE_TEST_IS_DIR = 4,
    G_FILE_TEST_IS_EXECUTABLE = 8,
    G_FILE_TEST_EXISTS = 16
} ;
typedef enum __anonenum_GFileTest_65 GFileTest;
struct _GHashTable;
typedef struct _GHashTable GHashTable;
typedef gboolean (*GHRFunc)(gpointer key , gpointer value , gpointer user_data );
struct _GHashTableIter;
typedef struct _GHashTableIter GHashTableIter;
struct _GHashTableIter {
   gpointer dummy1 ;
   gpointer dummy2 ;
   gpointer dummy3 ;
   int dummy4 ;
   gboolean dummy5 ;
   gpointer dummy6 ;
};
struct _GHook;
typedef struct _GHook GHook;
struct _GHookList;
typedef struct _GHookList GHookList;
typedef gint (*GHookCompareFunc)(GHook *new_hook , GHook *sibling );
typedef gboolean (*GHookFindFunc)(GHook *hook , gpointer data );
typedef void (*GHookMarshaller)(GHook *hook , gpointer marshal_data );
typedef gboolean (*GHookCheckMarshaller)(GHook *hook , gpointer marshal_data );
typedef void (*GHookFunc)(gpointer data );
typedef gboolean (*GHookCheckFunc)(gpointer data );
typedef void (*GHookFinalizeFunc)(GHookList *hook_list , GHook *hook );
enum __anonenum_GHookFlagMask_66 {
    G_HOOK_FLAG_ACTIVE = 1,
    G_HOOK_FLAG_IN_CALL = 2,
    G_HOOK_FLAG_MASK = 15
} ;
typedef enum __anonenum_GHookFlagMask_66 GHookFlagMask;
struct _GHookList {
   gulong seq_id ;
   guint hook_size : 16 ;
   guint is_setup : 1 ;
   GHook *hooks ;
   gpointer dummy3 ;
   void (*finalize_hook)(GHookList *hook_list , GHook *hook ) ;
   gpointer dummy[2] ;
};
struct _GHook {
   gpointer data ;
   GHook *next ;
   GHook *prev ;
   guint ref_count ;
   gulong hook_id ;
   guint flags ;
   gpointer func ;
   void (*destroy)(gpointer data ) ;
};
struct _GPollFD;
typedef struct _GPollFD GPollFD;
typedef gint (*GPollFunc)(GPollFD *ufds , guint nfsd , gint timeout_ );
struct _GPollFD {
   gint fd ;
   gushort events ;
   gushort revents ;
};
struct _GSList;
typedef struct _GSList GSList;
struct _GSList {
   gpointer data ;
   GSList *next ;
};
struct _GMainContext;
typedef struct _GMainContext GMainContext;
struct _GMainLoop;
typedef struct _GMainLoop GMainLoop;
struct _GSource;
typedef struct _GSource GSource;
struct _GSourceCallbackFuncs;
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
struct _GSourceFuncs;
typedef struct _GSourceFuncs GSourceFuncs;
typedef gboolean (*GSourceFunc)(gpointer data );
typedef void (*GChildWatchFunc)(GPid pid , gint status , gpointer data );
struct _GSource {
   gpointer callback_data ;
   GSourceCallbackFuncs *callback_funcs ;
   GSourceFuncs *source_funcs ;
   guint ref_count ;
   GMainContext *context ;
   gint priority ;
   guint flags ;
   guint source_id ;
   GSList *poll_fds ;
   GSource *prev ;
   GSource *next ;
   gpointer reserved1 ;
   gpointer reserved2 ;
};
struct _GSourceCallbackFuncs {
   void (*ref)(gpointer cb_data ) ;
   void (*unref)(gpointer cb_data ) ;
   void (*get)(gpointer cb_data , GSource *source , GSourceFunc *func ,
               gpointer *data ) ;
};
typedef void (*GSourceDummyMarshal)(void);
struct _GSourceFuncs {
   gboolean (*prepare)(GSource *source , gint *timeout_ ) ;
   gboolean (*check)(GSource *source ) ;
   gboolean (*dispatch)(GSource *source , gboolean (*callback)(gpointer data ) ,
                        gpointer user_data ) ;
   void (*finalize)(GSource *source ) ;
   gboolean (*closure_callback)(gpointer data ) ;
   void (*closure_marshal)(void) ;
};
typedef guint32 gunichar;
typedef guint16 gunichar2;
enum __anonenum_GUnicodeType_67 {
    G_UNICODE_CONTROL = 0,
    G_UNICODE_FORMAT = 1,
    G_UNICODE_UNASSIGNED = 2,
    G_UNICODE_PRIVATE_USE = 3,
    G_UNICODE_SURROGATE = 4,
    G_UNICODE_LOWERCASE_LETTER = 5,
    G_UNICODE_MODIFIER_LETTER = 6,
    G_UNICODE_OTHER_LETTER = 7,
    G_UNICODE_TITLECASE_LETTER = 8,
    G_UNICODE_UPPERCASE_LETTER = 9,
    G_UNICODE_COMBINING_MARK = 10,
    G_UNICODE_ENCLOSING_MARK = 11,
    G_UNICODE_NON_SPACING_MARK = 12,
    G_UNICODE_DECIMAL_NUMBER = 13,
    G_UNICODE_LETTER_NUMBER = 14,
    G_UNICODE_OTHER_NUMBER = 15,
    G_UNICODE_CONNECT_PUNCTUATION = 16,
    G_UNICODE_DASH_PUNCTUATION = 17,
    G_UNICODE_CLOSE_PUNCTUATION = 18,
    G_UNICODE_FINAL_PUNCTUATION = 19,
    G_UNICODE_INITIAL_PUNCTUATION = 20,
    G_UNICODE_OTHER_PUNCTUATION = 21,
    G_UNICODE_OPEN_PUNCTUATION = 22,
    G_UNICODE_CURRENCY_SYMBOL = 23,
    G_UNICODE_MODIFIER_SYMBOL = 24,
    G_UNICODE_MATH_SYMBOL = 25,
    G_UNICODE_OTHER_SYMBOL = 26,
    G_UNICODE_LINE_SEPARATOR = 27,
    G_UNICODE_PARAGRAPH_SEPARATOR = 28,
    G_UNICODE_SPACE_SEPARATOR = 29
} ;
typedef enum __anonenum_GUnicodeType_67 GUnicodeType;
enum __anonenum_GUnicodeBreakType_68 {
    G_UNICODE_BREAK_MANDATORY = 0,
    G_UNICODE_BREAK_CARRIAGE_RETURN = 1,
    G_UNICODE_BREAK_LINE_FEED = 2,
    G_UNICODE_BREAK_COMBINING_MARK = 3,
    G_UNICODE_BREAK_SURROGATE = 4,
    G_UNICODE_BREAK_ZERO_WIDTH_SPACE = 5,
    G_UNICODE_BREAK_INSEPARABLE = 6,
    G_UNICODE_BREAK_NON_BREAKING_GLUE = 7,
    G_UNICODE_BREAK_CONTINGENT = 8,
    G_UNICODE_BREAK_SPACE = 9,
    G_UNICODE_BREAK_AFTER = 10,
    G_UNICODE_BREAK_BEFORE = 11,
    G_UNICODE_BREAK_BEFORE_AND_AFTER = 12,
    G_UNICODE_BREAK_HYPHEN = 13,
    G_UNICODE_BREAK_NON_STARTER = 14,
    G_UNICODE_BREAK_OPEN_PUNCTUATION = 15,
    G_UNICODE_BREAK_CLOSE_PUNCTUATION = 16,
    G_UNICODE_BREAK_QUOTATION = 17,
    G_UNICODE_BREAK_EXCLAMATION = 18,
    G_UNICODE_BREAK_IDEOGRAPHIC = 19,
    G_UNICODE_BREAK_NUMERIC = 20,
    G_UNICODE_BREAK_INFIX_SEPARATOR = 21,
    G_UNICODE_BREAK_SYMBOL = 22,
    G_UNICODE_BREAK_ALPHABETIC = 23,
    G_UNICODE_BREAK_PREFIX = 24,
    G_UNICODE_BREAK_POSTFIX = 25,
    G_UNICODE_BREAK_COMPLEX_CONTEXT = 26,
    G_UNICODE_BREAK_AMBIGUOUS = 27,
    G_UNICODE_BREAK_UNKNOWN = 28,
    G_UNICODE_BREAK_NEXT_LINE = 29,
    G_UNICODE_BREAK_WORD_JOINER = 30,
    G_UNICODE_BREAK_HANGUL_L_JAMO = 31,
    G_UNICODE_BREAK_HANGUL_V_JAMO = 32,
    G_UNICODE_BREAK_HANGUL_T_JAMO = 33,
    G_UNICODE_BREAK_HANGUL_LV_SYLLABLE = 34,
    G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE = 35
} ;
typedef enum __anonenum_GUnicodeBreakType_68 GUnicodeBreakType;
enum __anonenum_GUnicodeScript_69 {
    G_UNICODE_SCRIPT_INVALID_CODE = -1,
    G_UNICODE_SCRIPT_COMMON = 0,
    G_UNICODE_SCRIPT_INHERITED = 1,
    G_UNICODE_SCRIPT_ARABIC = 2,
    G_UNICODE_SCRIPT_ARMENIAN = 3,
    G_UNICODE_SCRIPT_BENGALI = 4,
    G_UNICODE_SCRIPT_BOPOMOFO = 5,
    G_UNICODE_SCRIPT_CHEROKEE = 6,
    G_UNICODE_SCRIPT_COPTIC = 7,
    G_UNICODE_SCRIPT_CYRILLIC = 8,
    G_UNICODE_SCRIPT_DESERET = 9,
    G_UNICODE_SCRIPT_DEVANAGARI = 10,
    G_UNICODE_SCRIPT_ETHIOPIC = 11,
    G_UNICODE_SCRIPT_GEORGIAN = 12,
    G_UNICODE_SCRIPT_GOTHIC = 13,
    G_UNICODE_SCRIPT_GREEK = 14,
    G_UNICODE_SCRIPT_GUJARATI = 15,
    G_UNICODE_SCRIPT_GURMUKHI = 16,
    G_UNICODE_SCRIPT_HAN = 17,
    G_UNICODE_SCRIPT_HANGUL = 18,
    G_UNICODE_SCRIPT_HEBREW = 19,
    G_UNICODE_SCRIPT_HIRAGANA = 20,
    G_UNICODE_SCRIPT_KANNADA = 21,
    G_UNICODE_SCRIPT_KATAKANA = 22,
    G_UNICODE_SCRIPT_KHMER = 23,
    G_UNICODE_SCRIPT_LAO = 24,
    G_UNICODE_SCRIPT_LATIN = 25,
    G_UNICODE_SCRIPT_MALAYALAM = 26,
    G_UNICODE_SCRIPT_MONGOLIAN = 27,
    G_UNICODE_SCRIPT_MYANMAR = 28,
    G_UNICODE_SCRIPT_OGHAM = 29,
    G_UNICODE_SCRIPT_OLD_ITALIC = 30,
    G_UNICODE_SCRIPT_ORIYA = 31,
    G_UNICODE_SCRIPT_RUNIC = 32,
    G_UNICODE_SCRIPT_SINHALA = 33,
    G_UNICODE_SCRIPT_SYRIAC = 34,
    G_UNICODE_SCRIPT_TAMIL = 35,
    G_UNICODE_SCRIPT_TELUGU = 36,
    G_UNICODE_SCRIPT_THAANA = 37,
    G_UNICODE_SCRIPT_THAI = 38,
    G_UNICODE_SCRIPT_TIBETAN = 39,
    G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL = 40,
    G_UNICODE_SCRIPT_YI = 41,
    G_UNICODE_SCRIPT_TAGALOG = 42,
    G_UNICODE_SCRIPT_HANUNOO = 43,
    G_UNICODE_SCRIPT_BUHID = 44,
    G_UNICODE_SCRIPT_TAGBANWA = 45,
    G_UNICODE_SCRIPT_BRAILLE = 46,
    G_UNICODE_SCRIPT_CYPRIOT = 47,
    G_UNICODE_SCRIPT_LIMBU = 48,
    G_UNICODE_SCRIPT_OSMANYA = 49,
    G_UNICODE_SCRIPT_SHAVIAN = 50,
    G_UNICODE_SCRIPT_LINEAR_B = 51,
    G_UNICODE_SCRIPT_TAI_LE = 52,
    G_UNICODE_SCRIPT_UGARITIC = 53,
    G_UNICODE_SCRIPT_NEW_TAI_LUE = 54,
    G_UNICODE_SCRIPT_BUGINESE = 55,
    G_UNICODE_SCRIPT_GLAGOLITIC = 56,
    G_UNICODE_SCRIPT_TIFINAGH = 57,
    G_UNICODE_SCRIPT_SYLOTI_NAGRI = 58,
    G_UNICODE_SCRIPT_OLD_PERSIAN = 59,
    G_UNICODE_SCRIPT_KHAROSHTHI = 60,
    G_UNICODE_SCRIPT_UNKNOWN = 61,
    G_UNICODE_SCRIPT_BALINESE = 62,
    G_UNICODE_SCRIPT_CUNEIFORM = 63,
    G_UNICODE_SCRIPT_PHOENICIAN = 64,
    G_UNICODE_SCRIPT_PHAGS_PA = 65,
    G_UNICODE_SCRIPT_NKO = 66,
    G_UNICODE_SCRIPT_KAYAH_LI = 67,
    G_UNICODE_SCRIPT_LEPCHA = 68,
    G_UNICODE_SCRIPT_REJANG = 69,
    G_UNICODE_SCRIPT_SUNDANESE = 70,
    G_UNICODE_SCRIPT_SAURASHTRA = 71,
    G_UNICODE_SCRIPT_CHAM = 72,
    G_UNICODE_SCRIPT_OL_CHIKI = 73,
    G_UNICODE_SCRIPT_VAI = 74,
    G_UNICODE_SCRIPT_CARIAN = 75,
    G_UNICODE_SCRIPT_LYCIAN = 76,
    G_UNICODE_SCRIPT_LYDIAN = 77
} ;
typedef enum __anonenum_GUnicodeScript_69 GUnicodeScript;
enum __anonenum_GNormalizeMode_70 {
    G_NORMALIZE_DEFAULT = 0,
    G_NORMALIZE_NFD = 0,
    G_NORMALIZE_DEFAULT_COMPOSE = 1,
    G_NORMALIZE_NFC = 1,
    G_NORMALIZE_ALL = 2,
    G_NORMALIZE_NFKD = 2,
    G_NORMALIZE_ALL_COMPOSE = 3,
    G_NORMALIZE_NFKC = 3
} ;
typedef enum __anonenum_GNormalizeMode_70 GNormalizeMode;
struct _GString;
typedef struct _GString GString;
struct _GStringChunk;
typedef struct _GStringChunk GStringChunk;
struct _GString {
   gchar *str ;
   gsize len ;
   gsize allocated_len ;
};
struct _GIOChannel;
typedef struct _GIOChannel GIOChannel;
struct _GIOFuncs;
typedef struct _GIOFuncs GIOFuncs;
enum __anonenum_GIOError_71 {
    G_IO_ERROR_NONE = 0,
    G_IO_ERROR_AGAIN = 1,
    G_IO_ERROR_INVAL = 2,
    G_IO_ERROR_UNKNOWN = 3
} ;
typedef enum __anonenum_GIOError_71 GIOError;
enum __anonenum_GIOChannelError_72 {
    G_IO_CHANNEL_ERROR_FBIG = 0,
    G_IO_CHANNEL_ERROR_INVAL = 1,
    G_IO_CHANNEL_ERROR_IO = 2,
    G_IO_CHANNEL_ERROR_ISDIR = 3,
    G_IO_CHANNEL_ERROR_NOSPC = 4,
    G_IO_CHANNEL_ERROR_NXIO = 5,
    G_IO_CHANNEL_ERROR_OVERFLOW = 6,
    G_IO_CHANNEL_ERROR_PIPE = 7,
    G_IO_CHANNEL_ERROR_FAILED = 8
} ;
typedef enum __anonenum_GIOChannelError_72 GIOChannelError;
enum __anonenum_GIOStatus_73 {
    G_IO_STATUS_ERROR = 0,
    G_IO_STATUS_NORMAL = 1,
    G_IO_STATUS_EOF = 2,
    G_IO_STATUS_AGAIN = 3
} ;
typedef enum __anonenum_GIOStatus_73 GIOStatus;
enum __anonenum_GSeekType_74 {
    G_SEEK_CUR = 0,
    G_SEEK_SET = 1,
    G_SEEK_END = 2
} ;
typedef enum __anonenum_GSeekType_74 GSeekType;
enum __anonenum_GIOCondition_75 {
    G_IO_IN = 1,
    G_IO_OUT = 4,
    G_IO_PRI = 2,
    G_IO_ERR = 8,
    G_IO_HUP = 16,
    G_IO_NVAL = 32
} ;
typedef enum __anonenum_GIOCondition_75 GIOCondition;
enum __anonenum_GIOFlags_76 {
    G_IO_FLAG_APPEND = 1,
    G_IO_FLAG_NONBLOCK = 2,
    G_IO_FLAG_IS_READABLE = 4,
    G_IO_FLAG_IS_WRITEABLE = 8,
    G_IO_FLAG_IS_SEEKABLE = 16,
    G_IO_FLAG_MASK = 31,
    G_IO_FLAG_GET_MASK = 31,
    G_IO_FLAG_SET_MASK = 3
} ;
typedef enum __anonenum_GIOFlags_76 GIOFlags;
struct _GIOChannel {
   gint ref_count ;
   GIOFuncs *funcs ;
   gchar *encoding ;
   GIConv read_cd ;
   GIConv write_cd ;
   gchar *line_term ;
   guint line_term_len ;
   gsize buf_size ;
   GString *read_buf ;
   GString *encoded_read_buf ;
   GString *write_buf ;
   gchar partial_write_buf[6] ;
   guint use_buffer : 1 ;
   guint do_encode : 1 ;
   guint close_on_unref : 1 ;
   guint is_readable : 1 ;
   guint is_writeable : 1 ;
   guint is_seekable : 1 ;
   gpointer reserved1 ;
   gpointer reserved2 ;
};
typedef gboolean (*GIOFunc)(GIOChannel *source , GIOCondition condition ,
                            gpointer data );
struct _GIOFuncs {
   GIOStatus (*io_read)(GIOChannel *channel , gchar *buf , gsize count ,
                        gsize *bytes_read , GError **err ) ;
   GIOStatus (*io_write)(GIOChannel *channel , gchar const   *buf ,
                         gsize count , gsize *bytes_written , GError **err ) ;
   GIOStatus (*io_seek)(GIOChannel *channel , gint64 offset , GSeekType type ,
                        GError **err ) ;
   GIOStatus (*io_close)(GIOChannel *channel , GError **err ) ;
   GSource *(*io_create_watch)(GIOChannel *channel , GIOCondition condition ) ;
   void (*io_free)(GIOChannel *channel ) ;
   GIOStatus (*io_set_flags)(GIOChannel *channel , GIOFlags flags ,
                             GError **err ) ;
   GIOFlags (*io_get_flags)(GIOChannel *channel ) ;
};
enum __anonenum_GKeyFileError_77 {
    G_KEY_FILE_ERROR_UNKNOWN_ENCODING = 0,
    G_KEY_FILE_ERROR_PARSE = 1,
    G_KEY_FILE_ERROR_NOT_FOUND = 2,
    G_KEY_FILE_ERROR_KEY_NOT_FOUND = 3,
    G_KEY_FILE_ERROR_GROUP_NOT_FOUND = 4,
    G_KEY_FILE_ERROR_INVALID_VALUE = 5
} ;
typedef enum __anonenum_GKeyFileError_77 GKeyFileError;
struct _GKeyFile;
typedef struct _GKeyFile GKeyFile;
enum __anonenum_GKeyFileFlags_78 {
    G_KEY_FILE_NONE = 0,
    G_KEY_FILE_KEEP_COMMENTS = 1,
    G_KEY_FILE_KEEP_TRANSLATIONS = 2
} ;
typedef enum __anonenum_GKeyFileFlags_78 GKeyFileFlags;
struct _GMappedFile;
typedef struct _GMappedFile GMappedFile;
enum __anonenum_GMarkupError_79 {
    G_MARKUP_ERROR_BAD_UTF8 = 0,
    G_MARKUP_ERROR_EMPTY = 1,
    G_MARKUP_ERROR_PARSE = 2,
    G_MARKUP_ERROR_UNKNOWN_ELEMENT = 3,
    G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE = 4,
    G_MARKUP_ERROR_INVALID_CONTENT = 5,
    G_MARKUP_ERROR_MISSING_ATTRIBUTE = 6
} ;
typedef enum __anonenum_GMarkupError_79 GMarkupError;
enum __anonenum_GMarkupParseFlags_80 {
    G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1,
    G_MARKUP_TREAT_CDATA_AS_TEXT = 2,
    G_MARKUP_PREFIX_ERROR_POSITION = 4
} ;
typedef enum __anonenum_GMarkupParseFlags_80 GMarkupParseFlags;
struct _GMarkupParseContext;
typedef struct _GMarkupParseContext GMarkupParseContext;
struct _GMarkupParser;
typedef struct _GMarkupParser GMarkupParser;
struct _GMarkupParser {
   void (*start_element)(GMarkupParseContext *context ,
                         gchar const   *element_name ,
                         gchar const   **attribute_names ,
                         gchar const   **attribute_values , gpointer user_data ,
                         GError **error ) ;
   void (*end_element)(GMarkupParseContext *context ,
                       gchar const   *element_name , gpointer user_data ,
                       GError **error ) ;
   void (*text)(GMarkupParseContext *context , gchar const   *text ,
                gsize text_len , gpointer user_data , GError **error ) ;
   void (*passthrough)(GMarkupParseContext *context ,
                       gchar const   *passthrough_text , gsize text_len ,
                       gpointer user_data , GError **error ) ;
   void (*error)(GMarkupParseContext *context , GError *error ,
                 gpointer user_data ) ;
};
enum __anonenum_GMarkupCollectType_81 {
    G_MARKUP_COLLECT_INVALID = 0,
    G_MARKUP_COLLECT_STRING = 1,
    G_MARKUP_COLLECT_STRDUP = 2,
    G_MARKUP_COLLECT_BOOLEAN = 3,
    G_MARKUP_COLLECT_TRISTATE = 4,
    G_MARKUP_COLLECT_OPTIONAL = 65536
} ;
typedef enum __anonenum_GMarkupCollectType_81 GMarkupCollectType;
enum __anonenum_GLogLevelFlags_82 {
    G_LOG_FLAG_RECURSION = 1,
    G_LOG_FLAG_FATAL = 2,
    G_LOG_LEVEL_ERROR = 4,
    G_LOG_LEVEL_CRITICAL = 8,
    G_LOG_LEVEL_WARNING = 16,
    G_LOG_LEVEL_MESSAGE = 32,
    G_LOG_LEVEL_INFO = 64,
    G_LOG_LEVEL_DEBUG = 128,
    G_LOG_LEVEL_MASK = -4
} ;
typedef enum __anonenum_GLogLevelFlags_82 GLogLevelFlags;
typedef void (*GLogFunc)(gchar const   *log_domain , GLogLevelFlags log_level ,
                         gchar const   *message , gpointer user_data );
typedef void (*GPrintFunc)(gchar const   *string );
struct _GNode;
typedef struct _GNode GNode;
enum __anonenum_GTraverseFlags_83 {
    G_TRAVERSE_LEAVES = 1,
    G_TRAVERSE_NON_LEAVES = 2,
    G_TRAVERSE_ALL = 3,
    G_TRAVERSE_MASK = 3,
    G_TRAVERSE_LEAFS = 1,
    G_TRAVERSE_NON_LEAFS = 2
} ;
typedef enum __anonenum_GTraverseFlags_83 GTraverseFlags;
enum __anonenum_GTraverseType_84 {
    G_IN_ORDER = 0,
    G_PRE_ORDER = 1,
    G_POST_ORDER = 2,
    G_LEVEL_ORDER = 3
} ;
typedef enum __anonenum_GTraverseType_84 GTraverseType;
typedef gboolean (*GNodeTraverseFunc)(GNode *node , gpointer data );
typedef void (*GNodeForeachFunc)(GNode *node , gpointer data );
typedef gpointer (*GCopyFunc)(gconstpointer src , gpointer data );
struct _GNode {
   gpointer data ;
   GNode *next ;
   GNode *prev ;
   GNode *parent ;
   GNode *children ;
};
struct _GOptionContext;
typedef struct _GOptionContext GOptionContext;
struct _GOptionGroup;
typedef struct _GOptionGroup GOptionGroup;
struct _GOptionEntry;
typedef struct _GOptionEntry GOptionEntry;
enum __anonenum_GOptionFlags_85 {
    G_OPTION_FLAG_HIDDEN = 1,
    G_OPTION_FLAG_IN_MAIN = 2,
    G_OPTION_FLAG_REVERSE = 4,
    G_OPTION_FLAG_NO_ARG = 8,
    G_OPTION_FLAG_FILENAME = 16,
    G_OPTION_FLAG_OPTIONAL_ARG = 32,
    G_OPTION_FLAG_NOALIAS = 64
} ;
typedef enum __anonenum_GOptionFlags_85 GOptionFlags;
enum __anonenum_GOptionArg_86 {
    G_OPTION_ARG_NONE = 0,
    G_OPTION_ARG_STRING = 1,
    G_OPTION_ARG_INT = 2,
    G_OPTION_ARG_CALLBACK = 3,
    G_OPTION_ARG_FILENAME = 4,
    G_OPTION_ARG_STRING_ARRAY = 5,
    G_OPTION_ARG_FILENAME_ARRAY = 6,
    G_OPTION_ARG_DOUBLE = 7,
    G_OPTION_ARG_INT64 = 8
} ;
typedef enum __anonenum_GOptionArg_86 GOptionArg;
typedef gboolean (*GOptionArgFunc)(gchar const   *option_name ,
                                   gchar const   *value , gpointer data ,
                                   GError **error );
typedef gboolean (*GOptionParseFunc)(GOptionContext *context ,
                                     GOptionGroup *group , gpointer data ,
                                     GError **error );
typedef void (*GOptionErrorFunc)(GOptionContext *context , GOptionGroup *group ,
                                 gpointer data , GError **error );
enum __anonenum_GOptionError_87 {
    G_OPTION_ERROR_UNKNOWN_OPTION = 0,
    G_OPTION_ERROR_BAD_VALUE = 1,
    G_OPTION_ERROR_FAILED = 2
} ;
typedef enum __anonenum_GOptionError_87 GOptionError;
struct _GOptionEntry {
   gchar const   *long_name ;
   gchar short_name ;
   gint flags ;
   GOptionArg arg ;
   gpointer arg_data ;
   gchar const   *description ;
   gchar const   *arg_description ;
};
struct _GPatternSpec;
typedef struct _GPatternSpec GPatternSpec;
struct _GQueue;
typedef struct _GQueue GQueue;
struct _GQueue {
   GList *head ;
   GList *tail ;
   guint length ;
};
struct _GRand;
typedef struct _GRand GRand;
struct _GRelation;
typedef struct _GRelation GRelation;
struct _GTuples;
typedef struct _GTuples GTuples;
struct _GTuples {
   guint len ;
};
enum __anonenum_GRegexError_88 {
    G_REGEX_ERROR_COMPILE = 0,
    G_REGEX_ERROR_OPTIMIZE = 1,
    G_REGEX_ERROR_REPLACE = 2,
    G_REGEX_ERROR_MATCH = 3,
    G_REGEX_ERROR_INTERNAL = 4,
    G_REGEX_ERROR_STRAY_BACKSLASH = 101,
    G_REGEX_ERROR_MISSING_CONTROL_CHAR = 102,
    G_REGEX_ERROR_UNRECOGNIZED_ESCAPE = 103,
    G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER = 104,
    G_REGEX_ERROR_QUANTIFIER_TOO_BIG = 105,
    G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS = 106,
    G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS = 107,
    G_REGEX_ERROR_RANGE_OUT_OF_ORDER = 108,
    G_REGEX_ERROR_NOTHING_TO_REPEAT = 109,
    G_REGEX_ERROR_UNRECOGNIZED_CHARACTER = 112,
    G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS = 113,
    G_REGEX_ERROR_UNMATCHED_PARENTHESIS = 114,
    G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE = 115,
    G_REGEX_ERROR_UNTERMINATED_COMMENT = 118,
    G_REGEX_ERROR_EXPRESSION_TOO_LARGE = 120,
    G_REGEX_ERROR_MEMORY_ERROR = 121,
    G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND = 125,
    G_REGEX_ERROR_MALFORMED_CONDITION = 126,
    G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES = 127,
    G_REGEX_ERROR_ASSERTION_EXPECTED = 128,
    G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME = 130,
    G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED = 131,
    G_REGEX_ERROR_HEX_CODE_TOO_LARGE = 134,
    G_REGEX_ERROR_INVALID_CONDITION = 135,
    G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND = 136,
    G_REGEX_ERROR_INFINITE_LOOP = 140,
    G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR = 142,
    G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME = 143,
    G_REGEX_ERROR_MALFORMED_PROPERTY = 146,
    G_REGEX_ERROR_UNKNOWN_PROPERTY = 147,
    G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG = 148,
    G_REGEX_ERROR_TOO_MANY_SUBPATTERNS = 149,
    G_REGEX_ERROR_INVALID_OCTAL_VALUE = 151,
    G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE = 154,
    G_REGEX_ERROR_DEFINE_REPETION = 155,
    G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS = 156,
    G_REGEX_ERROR_MISSING_BACK_REFERENCE = 157
} ;
typedef enum __anonenum_GRegexError_88 GRegexError;
enum __anonenum_GRegexCompileFlags_89 {
    G_REGEX_CASELESS = 1,
    G_REGEX_MULTILINE = 2,
    G_REGEX_DOTALL = 4,
    G_REGEX_EXTENDED = 8,
    G_REGEX_ANCHORED = 16,
    G_REGEX_DOLLAR_ENDONLY = 32,
    G_REGEX_UNGREEDY = 512,
    G_REGEX_RAW = 2048,
    G_REGEX_NO_AUTO_CAPTURE = 4096,
    G_REGEX_OPTIMIZE = 8192,
    G_REGEX_DUPNAMES = 524288,
    G_REGEX_NEWLINE_CR = 1048576,
    G_REGEX_NEWLINE_LF = 2097152,
    G_REGEX_NEWLINE_CRLF = 3145728
} ;
typedef enum __anonenum_GRegexCompileFlags_89 GRegexCompileFlags;
enum __anonenum_GRegexMatchFlags_90 {
    G_REGEX_MATCH_ANCHORED = 16,
    G_REGEX_MATCH_NOTBOL = 128,
    G_REGEX_MATCH_NOTEOL = 256,
    G_REGEX_MATCH_NOTEMPTY = 1024,
    G_REGEX_MATCH_PARTIAL = 32768,
    G_REGEX_MATCH_NEWLINE_CR = 1048576,
    G_REGEX_MATCH_NEWLINE_LF = 2097152,
    G_REGEX_MATCH_NEWLINE_CRLF = 3145728,
    G_REGEX_MATCH_NEWLINE_ANY = 4194304
} ;
typedef enum __anonenum_GRegexMatchFlags_90 GRegexMatchFlags;
struct _GRegex;
typedef struct _GRegex GRegex;
struct _GMatchInfo;
typedef struct _GMatchInfo GMatchInfo;
typedef gboolean (*GRegexEvalCallback)(GMatchInfo const   *match_info ,
                                       GString *result , gpointer user_data );
struct _GScanner;
typedef struct _GScanner GScanner;
struct _GScannerConfig;
typedef struct _GScannerConfig GScannerConfig;
union _GTokenValue;
typedef union _GTokenValue GTokenValue;
typedef void (*GScannerMsgFunc)(GScanner *scanner , gchar *message ,
                                gboolean error );
enum __anonenum_GErrorType_91 {
    G_ERR_UNKNOWN = 0,
    G_ERR_UNEXP_EOF = 1,
    G_ERR_UNEXP_EOF_IN_STRING = 2,
    G_ERR_UNEXP_EOF_IN_COMMENT = 3,
    G_ERR_NON_DIGIT_IN_CONST = 4,
    G_ERR_DIGIT_RADIX = 5,
    G_ERR_FLOAT_RADIX = 6,
    G_ERR_FLOAT_MALFORMED = 7
} ;
typedef enum __anonenum_GErrorType_91 GErrorType;
enum __anonenum_GTokenType_92 {
    G_TOKEN_EOF = 0,
    G_TOKEN_LEFT_PAREN = 40,
    G_TOKEN_RIGHT_PAREN = 41,
    G_TOKEN_LEFT_CURLY = 123,
    G_TOKEN_RIGHT_CURLY = 125,
    G_TOKEN_LEFT_BRACE = 91,
    G_TOKEN_RIGHT_BRACE = 93,
    G_TOKEN_EQUAL_SIGN = 61,
    G_TOKEN_COMMA = 44,
    G_TOKEN_NONE = 256,
    G_TOKEN_ERROR = 257,
    G_TOKEN_CHAR = 258,
    G_TOKEN_BINARY = 259,
    G_TOKEN_OCTAL = 260,
    G_TOKEN_INT = 261,
    G_TOKEN_HEX = 262,
    G_TOKEN_FLOAT = 263,
    G_TOKEN_STRING = 264,
    G_TOKEN_SYMBOL = 265,
    G_TOKEN_IDENTIFIER = 266,
    G_TOKEN_IDENTIFIER_NULL = 267,
    G_TOKEN_COMMENT_SINGLE = 268,
    G_TOKEN_COMMENT_MULTI = 269,
    G_TOKEN_LAST = 270
} ;
typedef enum __anonenum_GTokenType_92 GTokenType;
union _GTokenValue {
   gpointer v_symbol ;
   gchar *v_identifier ;
   gulong v_binary ;
   gulong v_octal ;
   gulong v_int ;
   guint64 v_int64 ;
   gdouble v_float ;
   gulong v_hex ;
   gchar *v_string ;
   gchar *v_comment ;
   guchar v_char ;
   guint v_error ;
};
struct _GScannerConfig {
   gchar *cset_skip_characters ;
   gchar *cset_identifier_first ;
   gchar *cset_identifier_nth ;
   gchar *cpair_comment_single ;
   guint case_sensitive : 1 ;
   guint skip_comment_multi : 1 ;
   guint skip_comment_single : 1 ;
   guint scan_comment_multi : 1 ;
   guint scan_identifier : 1 ;
   guint scan_identifier_1char : 1 ;
   guint scan_identifier_NULL : 1 ;
   guint scan_symbols : 1 ;
   guint scan_binary : 1 ;
   guint scan_octal : 1 ;
   guint scan_float : 1 ;
   guint scan_hex : 1 ;
   guint scan_hex_dollar : 1 ;
   guint scan_string_sq : 1 ;
   guint scan_string_dq : 1 ;
   guint numbers_2_int : 1 ;
   guint int_2_float : 1 ;
   guint identifier_2_string : 1 ;
   guint char_2_token : 1 ;
   guint symbol_2_token : 1 ;
   guint scope_0_fallback : 1 ;
   guint store_int64 : 1 ;
   guint padding_dummy ;
};
struct _GScanner {
   gpointer user_data ;
   guint max_parse_errors ;
   guint parse_errors ;
   gchar const   *input_name ;
   GData *qdata ;
   GScannerConfig *config ;
   GTokenType token ;
   GTokenValue value ;
   guint line ;
   guint position ;
   GTokenType next_token ;
   GTokenValue next_value ;
   guint next_line ;
   guint next_position ;
   GHashTable *symbol_table ;
   gint input_fd ;
   gchar const   *text ;
   gchar const   *text_end ;
   gchar *buffer ;
   guint scope_id ;
   void (*msg_handler)(GScanner *scanner , gchar *message , gboolean error ) ;
};
struct _GSequence;
typedef struct _GSequence GSequence;
struct _GSequenceNode;
typedef struct _GSequenceNode GSequenceIter;
typedef gint (*GSequenceIterCompareFunc)(GSequenceIter *a , GSequenceIter *b ,
                                         gpointer data );
enum __anonenum_GShellError_93 {
    G_SHELL_ERROR_BAD_QUOTING = 0,
    G_SHELL_ERROR_EMPTY_STRING = 1,
    G_SHELL_ERROR_FAILED = 2
} ;
typedef enum __anonenum_GShellError_93 GShellError;
enum __anonenum_GSpawnError_94 {
    G_SPAWN_ERROR_FORK = 0,
    G_SPAWN_ERROR_READ = 1,
    G_SPAWN_ERROR_CHDIR = 2,
    G_SPAWN_ERROR_ACCES = 3,
    G_SPAWN_ERROR_PERM = 4,
    G_SPAWN_ERROR_2BIG = 5,
    G_SPAWN_ERROR_NOEXEC = 6,
    G_SPAWN_ERROR_NAMETOOLONG = 7,
    G_SPAWN_ERROR_NOENT = 8,
    G_SPAWN_ERROR_NOMEM = 9,
    G_SPAWN_ERROR_NOTDIR = 10,
    G_SPAWN_ERROR_LOOP = 11,
    G_SPAWN_ERROR_TXTBUSY = 12,
    G_SPAWN_ERROR_IO = 13,
    G_SPAWN_ERROR_NFILE = 14,
    G_SPAWN_ERROR_MFILE = 15,
    G_SPAWN_ERROR_INVAL = 16,
    G_SPAWN_ERROR_ISDIR = 17,
    G_SPAWN_ERROR_LIBBAD = 18,
    G_SPAWN_ERROR_FAILED = 19
} ;
typedef enum __anonenum_GSpawnError_94 GSpawnError;
typedef void (*GSpawnChildSetupFunc)(gpointer user_data );
enum __anonenum_GSpawnFlags_95 {
    G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1,
    G_SPAWN_DO_NOT_REAP_CHILD = 2,
    G_SPAWN_SEARCH_PATH = 4,
    G_SPAWN_STDOUT_TO_DEV_NULL = 8,
    G_SPAWN_STDERR_TO_DEV_NULL = 16,
    G_SPAWN_CHILD_INHERITS_STDIN = 32,
    G_SPAWN_FILE_AND_ARGV_ZERO = 64
} ;
typedef enum __anonenum_GSpawnFlags_95 GSpawnFlags;
enum __anonenum_GAsciiType_96 {
    G_ASCII_ALNUM = 1,
    G_ASCII_ALPHA = 2,
    G_ASCII_CNTRL = 4,
    G_ASCII_DIGIT = 8,
    G_ASCII_GRAPH = 16,
    G_ASCII_LOWER = 32,
    G_ASCII_PRINT = 64,
    G_ASCII_PUNCT = 128,
    G_ASCII_SPACE = 256,
    G_ASCII_UPPER = 512,
    G_ASCII_XDIGIT = 1024
} ;
typedef enum __anonenum_GAsciiType_96 GAsciiType;
struct GTestCase;
typedef struct GTestCase GTestCase;
struct GTestSuite;
typedef struct GTestSuite GTestSuite;
enum __anonenum_GTestTrapFlags_97 {
    G_TEST_TRAP_SILENCE_STDOUT = 128,
    G_TEST_TRAP_SILENCE_STDERR = 256,
    G_TEST_TRAP_INHERIT_STDIN = 512
} ;
typedef enum __anonenum_GTestTrapFlags_97 GTestTrapFlags;
struct __anonstruct_GTestConfig_98 {
   gboolean test_initialized ;
   gboolean test_quick ;
   gboolean test_perf ;
   gboolean test_verbose ;
   gboolean test_quiet ;
};
typedef struct __anonstruct_GTestConfig_98 GTestConfig;
enum __anonenum_GTestLogType_99 {
    G_TEST_LOG_NONE = 0,
    G_TEST_LOG_ERROR = 1,
    G_TEST_LOG_START_BINARY = 2,
    G_TEST_LOG_LIST_CASE = 3,
    G_TEST_LOG_SKIP_CASE = 4,
    G_TEST_LOG_START_CASE = 5,
    G_TEST_LOG_STOP_CASE = 6,
    G_TEST_LOG_MIN_RESULT = 7,
    G_TEST_LOG_MAX_RESULT = 8,
    G_TEST_LOG_MESSAGE = 9
} ;
typedef enum __anonenum_GTestLogType_99 GTestLogType;
struct __anonstruct_GTestLogMsg_100 {
   GTestLogType log_type ;
   guint n_strings ;
   gchar **strings ;
   guint n_nums ;
   long double *nums ;
};
typedef struct __anonstruct_GTestLogMsg_100 GTestLogMsg;
struct __anonstruct_GTestLogBuffer_101 {
   GString *data ;
   GSList *msgs ;
};
typedef struct __anonstruct_GTestLogBuffer_101 GTestLogBuffer;
typedef gboolean (*GTestLogFatalFunc)(gchar const   *log_domain ,
                                      GLogLevelFlags log_level ,
                                      gchar const   *message ,
                                      gpointer user_data );
struct _GThreadPool;
typedef struct _GThreadPool GThreadPool;
struct _GThreadPool {
   void (*func)(gpointer data , gpointer user_data ) ;
   gpointer user_data ;
   gboolean exclusive ;
};
struct _GTimer;
typedef struct _GTimer GTimer;
struct _GTree;
typedef struct _GTree GTree;
typedef gboolean (*GTraverseFunc)(gpointer key , gpointer value , gpointer data );
struct _GVariantType;
typedef struct _GVariantType GVariantType;
struct _GVariant;
typedef struct _GVariant GVariant;
enum __anonenum_GVariantClass_102 {
    G_VARIANT_CLASS_BOOLEAN = 98,
    G_VARIANT_CLASS_BYTE = 121,
    G_VARIANT_CLASS_INT16 = 110,
    G_VARIANT_CLASS_UINT16 = 113,
    G_VARIANT_CLASS_INT32 = 105,
    G_VARIANT_CLASS_UINT32 = 117,
    G_VARIANT_CLASS_INT64 = 120,
    G_VARIANT_CLASS_UINT64 = 116,
    G_VARIANT_CLASS_HANDLE = 104,
    G_VARIANT_CLASS_DOUBLE = 100,
    G_VARIANT_CLASS_STRING = 115,
    G_VARIANT_CLASS_OBJECT_PATH = 111,
    G_VARIANT_CLASS_SIGNATURE = 103,
    G_VARIANT_CLASS_VARIANT = 118,
    G_VARIANT_CLASS_MAYBE = 109,
    G_VARIANT_CLASS_ARRAY = 97,
    G_VARIANT_CLASS_TUPLE = 40,
    G_VARIANT_CLASS_DICT_ENTRY = 123
} ;
typedef enum __anonenum_GVariantClass_102 GVariantClass;
struct _GVariantIter;
typedef struct _GVariantIter GVariantIter;
struct _GVariantIter {
   gsize x[16] ;
};
struct _GVariantBuilder;
typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder {
   gsize x[16] ;
};
enum __anonenum_103 {
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
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_104 {
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
enum __anonenum_105 {
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
enum __anonenum_106 {
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
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
enum __socket_type {
    SOCK_STREAM = 1,
    SOCK_DGRAM = 2,
    SOCK_RAW = 3,
    SOCK_RDM = 4,
    SOCK_SEQPACKET = 5,
    SOCK_DCCP = 6,
    SOCK_PACKET = 10,
    SOCK_CLOEXEC = 524288,
    SOCK_NONBLOCK = 2048
} ;
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
struct sockaddr_storage {
   sa_family_t ss_family ;
   unsigned long __ss_align ;
   char __ss_padding[128U - 2U * sizeof(unsigned long )] ;
};
enum __anonenum_107 {
    MSG_OOB = 1,
    MSG_PEEK = 2,
    MSG_DONTROUTE = 4,
    MSG_CTRUNC = 8,
    MSG_PROXY = 16,
    MSG_TRUNC = 32,
    MSG_DONTWAIT = 64,
    MSG_EOR = 128,
    MSG_WAITALL = 256,
    MSG_FIN = 512,
    MSG_SYN = 1024,
    MSG_CONFIRM = 2048,
    MSG_RST = 4096,
    MSG_ERRQUEUE = 8192,
    MSG_NOSIGNAL = 16384,
    MSG_MORE = 32768,
    MSG_WAITFORONE = 65536,
    MSG_CMSG_CLOEXEC = 1073741824
} ;
struct msghdr {
   void *msg_name ;
   socklen_t msg_namelen ;
   struct iovec *msg_iov ;
   size_t msg_iovlen ;
   void *msg_control ;
   size_t msg_controllen ;
   int msg_flags ;
};
struct cmsghdr {
   size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
   unsigned char __cmsg_data[] ;
};
enum __anonenum_108 {
    SCM_RIGHTS = 1
} ;
struct linger {
   int l_onoff ;
   int l_linger ;
};
struct mmsghdr;
struct osockaddr {
   unsigned short sa_family ;
   unsigned char sa_data[14] ;
};
enum __anonenum_109 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;
enum __anonenum_110 {
    IPPROTO_IP = 0,
    IPPROTO_HOPOPTS = 0,
    IPPROTO_ICMP = 1,
    IPPROTO_IGMP = 2,
    IPPROTO_IPIP = 4,
    IPPROTO_TCP = 6,
    IPPROTO_EGP = 8,
    IPPROTO_PUP = 12,
    IPPROTO_UDP = 17,
    IPPROTO_IDP = 22,
    IPPROTO_TP = 29,
    IPPROTO_DCCP = 33,
    IPPROTO_IPV6 = 41,
    IPPROTO_ROUTING = 43,
    IPPROTO_FRAGMENT = 44,
    IPPROTO_RSVP = 46,
    IPPROTO_GRE = 47,
    IPPROTO_ESP = 50,
    IPPROTO_AH = 51,
    IPPROTO_ICMPV6 = 58,
    IPPROTO_NONE = 59,
    IPPROTO_DSTOPTS = 60,
    IPPROTO_MTP = 92,
    IPPROTO_ENCAP = 98,
    IPPROTO_PIM = 103,
    IPPROTO_COMP = 108,
    IPPROTO_SCTP = 132,
    IPPROTO_UDPLITE = 136,
    IPPROTO_RAW = 255,
    IPPROTO_MAX = 256
} ;
typedef uint16_t in_port_t;
enum __anonenum_111 {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,
    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,
    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,
    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,
    IPPORT_RESERVED = 1024,
    IPPORT_USERRESERVED = 5000
} ;
typedef uint32_t in_addr_t;
struct in_addr {
   in_addr_t s_addr ;
};
union __anonunion___in6_u_112 {
   uint8_t __u6_addr8[16] ;
   uint16_t __u6_addr16[8] ;
   uint32_t __u6_addr32[4] ;
};
struct in6_addr {
   union __anonunion___in6_u_112 __in6_u ;
};
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};
struct ip_mreq {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
};
struct ip_mreq_source {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
   struct in_addr imr_sourceaddr ;
};
struct ipv6_mreq {
   struct in6_addr ipv6mr_multiaddr ;
   unsigned int ipv6mr_interface ;
};
struct group_req {
   uint32_t gr_interface ;
   struct sockaddr_storage gr_group ;
};
struct group_source_req {
   uint32_t gsr_interface ;
   struct sockaddr_storage gsr_group ;
   struct sockaddr_storage gsr_source ;
};
struct ip_msfilter {
   struct in_addr imsf_multiaddr ;
   struct in_addr imsf_interface ;
   uint32_t imsf_fmode ;
   uint32_t imsf_numsrc ;
   struct in_addr imsf_slist[1] ;
};
struct group_filter {
   uint32_t gf_interface ;
   struct sockaddr_storage gf_group ;
   uint32_t gf_fmode ;
   uint32_t gf_numsrc ;
   struct sockaddr_storage gf_slist[1] ;
};
struct ip_opts {
   struct in_addr ip_dst ;
   char ip_opts[40] ;
};
struct ip_mreqn {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_address ;
   int imr_ifindex ;
};
struct in_pktinfo {
   int ipi_ifindex ;
   struct in_addr ipi_spec_dst ;
   struct in_addr ipi_addr ;
};
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
struct rpcent {
   char *r_name ;
   char **r_aliases ;
   int r_number ;
};
struct netent {
   char *n_name ;
   char **n_aliases ;
   int n_addrtype ;
   uint32_t n_net ;
};
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
struct protoent {
   char *p_name ;
   char **p_aliases ;
   int p_proto ;
};
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
struct __anonstruct_col_expr_t_113 {
   gchar const   **col_expr ;
   gchar **col_expr_val ;
};
typedef struct __anonstruct_col_expr_t_113 col_expr_t;
struct _dfilter_t;
struct _column_info {
   gint num_cols ;
   gint *col_fmt ;
   gboolean **fmt_matx ;
   gint *col_first ;
   gint *col_last ;
   gchar **col_title ;
   gchar **col_custom_field ;
   gint *col_custom_occurrence ;
   gint *col_custom_field_id ;
   struct _dfilter_t **col_custom_dfilter ;
   gchar const   **col_data ;
   gchar **col_buf ;
   int *col_fence ;
   col_expr_t col_expr ;
   gboolean writable ;
   gboolean columns_changed ;
};
typedef struct _column_info column_info;
enum __anonenum_114 {
    COL_8021Q_VLAN_ID = 0,
    COL_ABS_DATE_TIME = 1,
    COL_ABS_TIME = 2,
    COL_CIRCUIT_ID = 3,
    COL_DSTIDX = 4,
    COL_SRCIDX = 5,
    COL_VSAN = 6,
    COL_CUMULATIVE_BYTES = 7,
    COL_CUSTOM = 8,
    COL_DCE_CALL = 9,
    COL_DCE_CTX = 10,
    COL_DELTA_TIME = 11,
    COL_DELTA_CONV_TIME = 12,
    COL_DELTA_TIME_DIS = 13,
    COL_RES_DST = 14,
    COL_UNRES_DST = 15,
    COL_RES_DST_PORT = 16,
    COL_UNRES_DST_PORT = 17,
    COL_DEF_DST = 18,
    COL_DEF_DST_PORT = 19,
    COL_EXPERT = 20,
    COL_IF_DIR = 21,
    COL_OXID = 22,
    COL_RXID = 23,
    COL_FR_DLCI = 24,
    COL_FREQ_CHAN = 25,
    COL_BSSGP_TLLI = 26,
    COL_HPUX_DEVID = 27,
    COL_HPUX_SUBSYS = 28,
    COL_DEF_DL_DST = 29,
    COL_DEF_DL_SRC = 30,
    COL_RES_DL_DST = 31,
    COL_UNRES_DL_DST = 32,
    COL_RES_DL_SRC = 33,
    COL_UNRES_DL_SRC = 34,
    COL_RSSI = 35,
    COL_TX_RATE = 36,
    COL_DSCP_VALUE = 37,
    COL_INFO = 38,
    COL_COS_VALUE = 39,
    COL_RES_NET_DST = 40,
    COL_UNRES_NET_DST = 41,
    COL_RES_NET_SRC = 42,
    COL_UNRES_NET_SRC = 43,
    COL_DEF_NET_DST = 44,
    COL_DEF_NET_SRC = 45,
    COL_NUMBER = 46,
    COL_PACKET_LENGTH = 47,
    COL_PROTOCOL = 48,
    COL_REL_TIME = 49,
    COL_REL_CONV_TIME = 50,
    COL_DEF_SRC = 51,
    COL_DEF_SRC_PORT = 52,
    COL_RES_SRC = 53,
    COL_UNRES_SRC = 54,
    COL_RES_SRC_PORT = 55,
    COL_UNRES_SRC_PORT = 56,
    COL_TEI = 57,
    COL_CLS_TIME = 58,
    NUM_COL_FMTS = 59
} ;
struct e_in6_addr {
   guint8 bytes[16] ;
};
struct _e_guid_t {
   guint32 data1 ;
   guint16 data2 ;
   guint16 data3 ;
   guint8 data4[8] ;
};
typedef struct _e_guid_t e_guid_t;
typedef int __jmp_buf[6];
struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct __jmp_buf_tag sigjmp_buf[1];
enum __anonenum_115 {
    except_no_call = 0,
    except_call = 1
} ;
struct __anonstruct_except_id_t_116 {
   unsigned long except_group ;
   unsigned long except_code ;
};
typedef struct __anonstruct_except_id_t_116 except_id_t;
struct __anonstruct_except_t_117 {
   except_id_t volatile   except_id ;
   char const   * volatile  except_message ;
   void * volatile  except_dyndata ;
};
typedef struct __anonstruct_except_t_117 except_t;
struct except_cleanup {
   void (*except_func)(void * ) ;
   void *except_context ;
};
struct except_catch {
   except_id_t const   *except_id ;
   size_t except_size ;
   except_t except_obj ;
   jmp_buf except_jmp ;
};
enum except_stacktype {
    XCEPT_CLEANUP = 0,
    XCEPT_CATCHER = 1
} ;
union __anonunion_except_info_118 {
   struct except_catch *except_catcher ;
   struct except_cleanup *except_cleanup ;
};
struct except_stacknode {
   struct except_stacknode *except_down ;
   enum except_stacktype except_type ;
   union __anonunion_except_info_118 except_info ;
};
enum __anonenum_tvbuff_type_119 {
    TVBUFF_REAL_DATA = 0,
    TVBUFF_SUBSET = 1,
    TVBUFF_COMPOSITE = 2
} ;
typedef enum __anonenum_tvbuff_type_119 tvbuff_type;
struct tvbuff;
struct __anonstruct_tvb_backing_t_120 {
   struct tvbuff *tvb ;
   guint offset ;
   guint length ;
};
typedef struct __anonstruct_tvb_backing_t_120 tvb_backing_t;
struct __anonstruct_tvb_comp_t_121 {
   GSList *tvbs ;
   guint *start_offsets ;
   guint *end_offsets ;
};
typedef struct __anonstruct_tvb_comp_t_121 tvb_comp_t;
typedef void (*tvbuff_free_cb_t)(void * );
union __anonunion_tvbuffs_122 {
   tvb_backing_t subset ;
   tvb_comp_t composite ;
};
struct tvbuff {
   tvbuff_type type ;
   gboolean initialized ;
   guint usage_count ;
   struct tvbuff *ds_tvb ;
   GSList *used_in ;
   union __anonunion_tvbuffs_122 tvbuffs ;
   guint8 const   *real_data ;
   guint length ;
   guint reported_length ;
   gint raw_offset ;
   void (*free_cb)(void * ) ;
};
typedef struct tvbuff tvbuff_t;
struct dgt_set_t {
   unsigned char const   out[15] ;
};
typedef struct dgt_set_t dgt_set_t;
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
struct nstr_phdr {
   gint64 rec_offset ;
   gint32 rec_len ;
   guint8 nicno_offset ;
   guint8 nicno_len ;
   guint8 dir_offset ;
   guint8 dir_len ;
   guint8 eth_offset ;
   guint8 pcb_offset ;
   guint8 l_pcb_offset ;
   guint8 rec_type ;
   guint8 vlantag_offset ;
   guint8 coreid_offset ;
};
struct eth_phdr {
   gint fcs_len ;
};
struct x25_phdr {
   guint8 flags ;
};
struct isdn_phdr {
   gboolean uton ;
   guint8 channel ;
};
struct atm_phdr {
   guint32 flags ;
   guint8 aal ;
   guint8 type ;
   guint8 subtype ;
   guint16 vpi ;
   guint16 vci ;
   guint8 aal2_cid ;
   guint16 channel ;
   guint16 cells ;
   guint16 aal5t_u2u ;
   guint16 aal5t_len ;
   guint32 aal5t_chksum ;
};
struct ascend_phdr {
   guint16 type ;
   char user[64] ;
   guint32 sess ;
   char call_num[64] ;
   guint32 chunk ;
   guint32 task ;
};
struct p2p_phdr {
   int sent ;
};
struct ieee_802_11_phdr {
   gint fcs_len ;
   guint8 channel ;
   guint8 data_rate ;
   guint8 signal_level ;
};
struct cosine_phdr {
   guint8 encap ;
   guint8 direction ;
   char if_name[128] ;
   guint16 pro ;
   guint16 off ;
   guint16 pri ;
   guint16 rm ;
   guint16 err ;
};
struct irda_phdr {
   guint16 pkttype ;
};
struct nettl_phdr {
   guint16 subsys ;
   guint32 devid ;
   guint32 kind ;
   gint32 pid ;
   guint16 uid ;
};
struct mtp2_phdr {
   guint8 sent ;
   guint8 annex_a_used ;
   guint16 link_number ;
};
struct __anonstruct_atm_124 {
   guint16 vp ;
   guint16 vc ;
   guint16 cid ;
};
union __anonunion_k12_input_info_t_123 {
   struct __anonstruct_atm_124 atm ;
   guint32 ds0mask ;
};
typedef union __anonunion_k12_input_info_t_123 k12_input_info_t;
struct k12_phdr {
   guint32 input ;
   gchar const   *input_name ;
   gchar const   *stack_file ;
   guint32 input_type ;
   k12_input_info_t input_info ;
   guchar *extra_info ;
   guint32 extra_length ;
   void *stuff ;
};
struct lapd_phdr {
   guint16 pkttype ;
   guint8 we_network ;
};
struct wtap;
struct wtap;
union __anonunion_inner_pseudo_header_125 {
   struct isdn_phdr isdn ;
   struct atm_phdr atm ;
   struct p2p_phdr p2p ;
};
struct catapult_dct2000_phdr {
   union __anonunion_inner_pseudo_header_125 inner_pseudo_header ;
   gint64 seek_off ;
   struct wtap *wth ;
};
struct libpcap_bt_phdr {
   guint32 direction ;
};
struct libpcap_ppp_phdr {
   guint8 direction ;
};
struct erf_phdr {
   guint64 ts ;
   guint8 type ;
   guint8 flags ;
   guint16 rlen ;
   guint16 lctr ;
   guint16 wlen ;
};
struct erf_ehdr {
   guint64 ehdr ;
};
union __anonunion_subhdr_126 {
   guint16 eth_hdr ;
   guint32 mc_hdr ;
};
struct erf_mc_phdr {
   struct erf_phdr phdr ;
   struct erf_ehdr ehdr_list[8] ;
   union __anonunion_subhdr_126 subhdr ;
};
struct sita_phdr {
   guint8 flags ;
   guint8 signals ;
   guint8 errors1 ;
   guint8 errors2 ;
   guint8 proto ;
};
struct bthci_phdr {
   gboolean sent ;
   guint8 channel ;
};
struct l1event_phdr {
   gboolean uton ;
};
struct i2c_phdr {
   guint8 is_event ;
   guint8 bus ;
   guint32 flags ;
};
struct gsm_um_phdr {
   gboolean uplink ;
   guint8 channel ;
   guint8 bsic ;
   guint16 arfcn ;
   guint32 tdma_frame ;
   guint8 error ;
   guint16 timeshift ;
};
union wtap_pseudo_header {
   struct eth_phdr eth ;
   struct x25_phdr x25 ;
   struct isdn_phdr isdn ;
   struct atm_phdr atm ;
   struct ascend_phdr ascend ;
   struct p2p_phdr p2p ;
   struct ieee_802_11_phdr ieee_802_11 ;
   struct cosine_phdr cosine ;
   struct irda_phdr irda ;
   struct nettl_phdr nettl ;
   struct mtp2_phdr mtp2 ;
   struct k12_phdr k12 ;
   struct lapd_phdr lapd ;
   struct catapult_dct2000_phdr dct2000 ;
   struct erf_mc_phdr erf ;
   struct sita_phdr sita ;
   struct bthci_phdr bthci ;
   struct l1event_phdr l1event ;
   struct i2c_phdr i2c ;
   struct gsm_um_phdr gsm_um ;
   struct nstr_phdr nstr ;
};
struct wtap_nstime {
   time_t secs ;
   int nsecs ;
};
struct wtap_pkthdr {
   struct wtap_nstime ts ;
   guint32 caplen ;
   guint32 len ;
   int pkt_encap ;
};
struct Buffer;
struct Buffer;
struct wtap_dumper;
struct wtap_dumper;
typedef struct wtap wtap;
typedef struct wtap_dumper wtap_dumper;
struct file_type_info {
   char const   *name ;
   char const   *short_name ;
   char const   *file_extensions ;
   char const   *file_extension_default ;
   gboolean writing_must_seek ;
   gboolean has_name_resolution ;
   int (*can_write_encap)(int  ) ;
   int (*dump_open)(wtap_dumper * , int * ) ;
};
typedef int (*wtap_open_routine_t)(struct wtap * , int * , char ** );
typedef void (*wtap_new_ipv4_callback_t)(guint const   addr ,
                                         gchar const   *name );
typedef void (*wtap_new_ipv6_callback_t)(void const   *addrp ,
                                         gchar const   *name );
struct addrinfo;
struct __anonstruct_nstime_t_127 {
   time_t secs ;
   int nsecs ;
};
typedef struct __anonstruct_nstime_t_127 nstime_t;
struct __anonstruct_flags_128 {
   unsigned int passed_dfilter : 1 ;
   unsigned int encoding : 2 ;
   unsigned int visited : 1 ;
   unsigned int marked : 1 ;
   unsigned int ref_time : 1 ;
   unsigned int ignored : 1 ;
};
struct _frame_data {
   GSList *pfd ;
   guint32 num ;
   guint32 pkt_len ;
   guint32 cap_len ;
   guint32 cum_bytes ;
   gint64 file_off ;
   guint16 subnum ;
   gint16 lnk_t ;
   struct __anonstruct_flags_128 flags ;
   void const   *color_filter ;
   nstime_t abs_ts ;
   nstime_t rel_ts ;
   nstime_t del_dis_ts ;
   nstime_t del_cap_ts ;
};
typedef struct _frame_data frame_data;
struct __anonstruct_data_source_129 {
   tvbuff_t *tvb ;
   gboolean name_initialized ;
   char const   *name ;
};
typedef struct __anonstruct_data_source_129 data_source;
struct range_admin_tag {
   guint32 low ;
   guint32 high ;
};
typedef struct range_admin_tag range_admin_t;
struct range {
   guint nranges ;
   range_admin_t ranges[1] ;
};
typedef struct range range_t;
enum __anonenum_convert_ret_t_130 {
    CVT_NO_ERROR = 0,
    CVT_SYNTAX_ERROR = 1,
    CVT_NUMBER_TOO_BIG = 2
} ;
typedef enum __anonenum_convert_ret_t_130 convert_ret_t;
enum __anonenum_packet_range_e_131 {
    range_process_all = 0,
    range_process_selected = 1,
    range_process_marked = 2,
    range_process_marked_range = 3,
    range_process_user_range = 4
} ;
typedef enum __anonenum_packet_range_e_131 packet_range_e;
struct packet_range_tag {
   packet_range_e process ;
   gboolean process_filtered ;
   gboolean remove_ignored ;
   range_t *user_range ;
   convert_ret_t user_range_status ;
   guint32 selected_packet ;
   guint32 mark_range_cnt ;
   guint32 user_range_cnt ;
   guint32 ignored_cnt ;
   guint32 ignored_marked_cnt ;
   guint32 ignored_mark_range_cnt ;
   guint32 ignored_user_range_cnt ;
   guint32 displayed_cnt ;
   guint32 displayed_marked_cnt ;
   guint32 displayed_mark_range_cnt ;
   guint32 displayed_user_range_cnt ;
   guint32 displayed_ignored_cnt ;
   guint32 displayed_ignored_marked_cnt ;
   guint32 displayed_ignored_mark_range_cnt ;
   guint32 displayed_ignored_user_range_cnt ;
   gboolean marked_range_active ;
   guint32 marked_range_left ;
   gboolean selected_done ;
};
typedef struct packet_range_tag packet_range_t;
enum __anonenum_range_process_e_132 {
    range_process_this = 0,
    range_process_next = 1,
    range_processing_finished = 2
} ;
typedef enum __anonenum_range_process_e_132 range_process_e;
typedef struct _dfilter_t dfilter_t;
enum __anonenum_register_action_e_133 {
    RA_NONE = 0,
    RA_DISSECTORS = 1,
    RA_LISTENERS = 2,
    RA_REGISTER = 3,
    RA_PLUGIN_REGISTER = 4,
    RA_HANDOFF = 5,
    RA_PLUGIN_HANDOFF = 6,
    RA_PREFERENCES = 7,
    RA_CONFIGURATION = 8
} ;
typedef enum __anonenum_register_action_e_133 register_action_e;
typedef void (*register_cb)(register_action_e action , char const   *message ,
                            gpointer client_data );
struct _epan_dissect_t;
typedef struct _epan_dissect_t epan_dissect_t;
struct epan_session;
typedef struct epan_session epan_t;
struct __anonstruct_ipv4_addr_134 {
   guint32 addr ;
   guint32 nmask ;
};
typedef struct __anonstruct_ipv4_addr_134 ipv4_addr;
enum __anonenum_to_str_time_res_t_135 {
    TO_STR_TIME_RES_T_SECS = 0,
    TO_STR_TIME_RES_T_DSECS = 1,
    TO_STR_TIME_RES_T_CSECS = 2,
    TO_STR_TIME_RES_T_MSECS = 3,
    TO_STR_TIME_RES_T_USECS = 4,
    TO_STR_TIME_RES_T_NSECS = 5
} ;
typedef enum __anonenum_to_str_time_res_t_135 to_str_time_res_t;
enum __anonenum_absolute_time_display_e_136 {
    ABSOLUTE_TIME_LOCAL = 1000,
    ABSOLUTE_TIME_UTC = 1001,
    ABSOLUTE_TIME_DOY_UTC = 1002
} ;
typedef enum __anonenum_absolute_time_display_e_136 absolute_time_display_e;
struct _ep_stack_frame_t;
typedef struct _ep_stack_frame_t **ep_stack_t;
struct _ep_stack_frame_t {
   void *payload ;
   struct _ep_stack_frame_t *below ;
   struct _ep_stack_frame_t *above ;
};
struct _emem_chunk_t;
struct _emem_chunk_t;
struct ws_memory_slab {
   gint const   item_size ;
   gint const   count ;
   struct _emem_chunk_t *chunk_list ;
   void *freed ;
};
struct __anonstruct_u_137 {
   guint32 rb_color : 1 ;
   guint32 is_subtree : 1 ;
};
struct _emem_tree_node_t {
   struct _emem_tree_node_t *parent ;
   struct _emem_tree_node_t *left ;
   struct _emem_tree_node_t *right ;
   struct __anonstruct_u_137 u ;
   guint32 key32 ;
   void *data ;
};
typedef struct _emem_tree_node_t emem_tree_node_t;
struct _emem_tree_t {
   struct _emem_tree_t *next ;
   int type ;
   char const   *name ;
   emem_tree_node_t *tree ;
   void *(*malloc)(size_t  ) ;
};
typedef struct _emem_tree_t emem_tree_t;
struct _emem_tree_key_t {
   guint32 length ;
   guint32 *key ;
};
typedef struct _emem_tree_key_t emem_tree_key_t;
typedef gboolean (*tree_foreach_func)(void *value , void *userdata );
struct _emem_strbuf_t {
   gchar *str ;
   gsize len ;
   gsize alloc_len ;
   gsize max_alloc_len ;
};
typedef struct _emem_strbuf_t emem_strbuf_t;
enum ftenum {
    FT_NONE = 0,
    FT_PROTOCOL = 1,
    FT_BOOLEAN = 2,
    FT_UINT8 = 3,
    FT_UINT16 = 4,
    FT_UINT24 = 5,
    FT_UINT32 = 6,
    FT_UINT64 = 7,
    FT_INT8 = 8,
    FT_INT16 = 9,
    FT_INT24 = 10,
    FT_INT32 = 11,
    FT_INT64 = 12,
    FT_FLOAT = 13,
    FT_DOUBLE = 14,
    FT_ABSOLUTE_TIME = 15,
    FT_RELATIVE_TIME = 16,
    FT_STRING = 17,
    FT_STRINGZ = 18,
    FT_EBCDIC = 19,
    FT_UINT_STRING = 20,
    FT_ETHER = 21,
    FT_BYTES = 22,
    FT_UINT_BYTES = 23,
    FT_IPv4 = 24,
    FT_IPv6 = 25,
    FT_IPXNET = 26,
    FT_FRAMENUM = 27,
    FT_PCRE = 28,
    FT_GUID = 29,
    FT_OID = 30,
    FT_EUI64 = 31,
    FT_NUM_TYPES = 32
} ;
typedef enum ftenum ftenum_t;
struct _ftype_t;
typedef struct _ftype_t ftype_t;
enum ftrepr {
    FTREPR_DISPLAY = 0,
    FTREPR_DFILTER = 1
} ;
typedef enum ftrepr ftrepr_t;
enum __anonenum_drange_node_end_t_138 {
    DRANGE_NODE_END_T_UNINITIALIZED = 0,
    DRANGE_NODE_END_T_LENGTH = 1,
    DRANGE_NODE_END_T_OFFSET = 2,
    DRANGE_NODE_END_T_TO_THE_END = 3
} ;
typedef enum __anonenum_drange_node_end_t_138 drange_node_end_t;
struct _drange_node {
   gint start_offset ;
   gint length ;
   gint end_offset ;
   drange_node_end_t ending ;
};
typedef struct _drange_node drange_node;
struct _drange {
   GSList *range_list ;
   gboolean has_total_length ;
   gint total_length ;
   gint min_start_offset ;
   gint max_start_offset ;
};
typedef struct _drange drange;
union __anonunion_value_139 {
   guint32 uinteger ;
   gint32 sinteger ;
   guint64 integer64 ;
   gdouble floating ;
   gchar *string ;
   guchar *ustring ;
   GByteArray *bytes ;
   ipv4_addr ipv4 ;
   e_guid_t guid ;
   nstime_t time ;
   tvbuff_t *tvb ;
   GRegex *re ;
};
struct _fvalue_t {
   ftype_t *ftype ;
   union __anonunion_value_139 value ;
   gboolean fvalue_gboolean1 ;
};
typedef struct _fvalue_t fvalue_t;
typedef void (*FvalueNewFunc)(fvalue_t * );
typedef void (*FvalueFreeFunc)(fvalue_t * );
typedef void (*LogFunc)(char const   *  , ...);
typedef gboolean (*FvalueFromUnparsed)(fvalue_t * , char * , gboolean  ,
                                       void (*)(char const   *  , ...) );
typedef gboolean (*FvalueFromString)(fvalue_t * , char * ,
                                     void (*)(char const   *  , ...) );
typedef void (*FvalueToStringRepr)(fvalue_t * , ftrepr_t  , char * );
typedef int (*FvalueStringReprLen)(fvalue_t * , ftrepr_t  );
typedef void (*FvalueSetFunc)(fvalue_t * , gpointer  , gboolean  );
typedef void (*FvalueSetUnsignedIntegerFunc)(fvalue_t * , guint32  );
typedef void (*FvalueSetSignedIntegerFunc)(fvalue_t * , gint32  );
typedef void (*FvalueSetInteger64Func)(fvalue_t * , guint64  );
typedef void (*FvalueSetFloatingFunc)(fvalue_t * , gdouble  );
typedef gpointer (*FvalueGetFunc)(fvalue_t * );
typedef guint32 (*FvalueGetUnsignedIntegerFunc)(fvalue_t * );
typedef gint32 (*FvalueGetSignedIntegerFunc)(fvalue_t * );
typedef guint64 (*FvalueGetInteger64Func)(fvalue_t * );
typedef double (*FvalueGetFloatingFunc)(fvalue_t * );
typedef gboolean (*FvalueCmp)(fvalue_t * , fvalue_t * );
typedef guint (*FvalueLen)(fvalue_t * );
typedef void (*FvalueSlice)(fvalue_t * , GByteArray * , guint offset ,
                            guint length );
struct _ftype_t {
   ftenum_t ftype ;
   char const   *name ;
   char const   *pretty_name ;
   int wire_size ;
   void (*new_value)(fvalue_t * ) ;
   void (*free_value)(fvalue_t * ) ;
   gboolean (*val_from_unparsed)(fvalue_t * , char * , gboolean  ,
                                 void (*)(char const   *  , ...) ) ;
   gboolean (*val_from_string)(fvalue_t * , char * ,
                               void (*)(char const   *  , ...) ) ;
   void (*val_to_string_repr)(fvalue_t * , ftrepr_t  , char * ) ;
   int (*len_string_repr)(fvalue_t * , ftrepr_t  ) ;
   void (*set_value)(fvalue_t * , gpointer  , gboolean  ) ;
   void (*set_value_uinteger)(fvalue_t * , guint32  ) ;
   void (*set_value_sinteger)(fvalue_t * , gint32  ) ;
   void (*set_value_integer64)(fvalue_t * , guint64  ) ;
   void (*set_value_floating)(fvalue_t * , gdouble  ) ;
   gpointer (*get_value)(fvalue_t * ) ;
   guint32 (*get_value_uinteger)(fvalue_t * ) ;
   gint32 (*get_value_sinteger)(fvalue_t * ) ;
   guint64 (*get_value_integer64)(fvalue_t * ) ;
   double (*get_value_floating)(fvalue_t * ) ;
   gboolean (*cmp_eq)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_ne)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_gt)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_ge)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_lt)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_le)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_bitwise_and)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_contains)(fvalue_t * , fvalue_t * ) ;
   gboolean (*cmp_matches)(fvalue_t * , fvalue_t * ) ;
   guint (*len)(fvalue_t * ) ;
   void (*slice)(fvalue_t * , GByteArray * , guint offset , guint length ) ;
};
struct _value_string;
struct _value_string;
typedef void (*custom_fmt_func_t)(gchar * , guint32  );
struct _protocol;
struct _protocol;
typedef struct _protocol protocol_t;
enum __anonenum_base_display_e_140 {
    BASE_NONE = 0,
    BASE_DEC = 1,
    BASE_HEX = 2,
    BASE_OCT = 3,
    BASE_DEC_HEX = 4,
    BASE_HEX_DEC = 5,
    BASE_CUSTOM = 6
} ;
typedef enum __anonenum_base_display_e_140 base_display_e;
enum __anonenum_hf_ref_type_141 {
    HF_REF_TYPE_NONE = 0,
    HF_REF_TYPE_INDIRECT = 1,
    HF_REF_TYPE_DIRECT = 2
} ;
typedef enum __anonenum_hf_ref_type_141 hf_ref_type;
struct _header_field_info;
typedef struct _header_field_info header_field_info;
struct _header_field_info {
   char const   *name ;
   char const   *abbrev ;
   enum ftenum type ;
   int display ;
   void const   *strings ;
   guint32 bitmask ;
   char const   *blurb ;
   int id ;
   int parent ;
   hf_ref_type ref_type ;
   int bitshift ;
   header_field_info *same_name_next ;
   header_field_info *same_name_prev ;
};
struct hf_register_info {
   int *p_id ;
   header_field_info hfinfo ;
};
typedef struct hf_register_info hf_register_info;
struct _item_label_t {
   char representation[240] ;
};
typedef struct _item_label_t item_label_t;
struct field_info {
   header_field_info *hfinfo ;
   gint start ;
   gint length ;
   gint appendix_start ;
   gint appendix_length ;
   gint tree_type ;
   item_label_t *rep ;
   guint32 flags ;
   tvbuff_t *ds_tvb ;
   fvalue_t value ;
};
typedef struct field_info field_info;
struct __anonstruct_tree_data_t_142 {
   GHashTable *interesting_hfids ;
   gboolean visible ;
   gboolean fake_protocols ;
   gint count ;
};
typedef struct __anonstruct_tree_data_t_142 tree_data_t;
struct _proto_node {
   struct _proto_node *first_child ;
   struct _proto_node *last_child ;
   struct _proto_node *next ;
   struct _proto_node *parent ;
   field_info *finfo ;
   tree_data_t *tree_data ;
};
typedef struct _proto_node proto_node;
typedef proto_node proto_tree;
typedef proto_node proto_item;
typedef void (*proto_tree_foreach_func)(proto_node * , gpointer  );
typedef gboolean (*proto_tree_traverse_func)(proto_node * , gpointer  );
typedef void (*prefix_initializer_t)(char const   *match );
enum __anonenum_address_type_143 {
    AT_NONE = 0,
    AT_ETHER = 1,
    AT_IPv4 = 2,
    AT_IPv6 = 3,
    AT_IPX = 4,
    AT_SNA = 5,
    AT_ATALK = 6,
    AT_VINES = 7,
    AT_OSI = 8,
    AT_ARCNET = 9,
    AT_FC = 10,
    AT_SS7PC = 11,
    AT_STRINGZ = 12,
    AT_EUI64 = 13,
    AT_URI = 14,
    AT_TIPC = 15,
    AT_IB = 16,
    AT_USB = 17
} ;
typedef enum __anonenum_address_type_143 address_type;
struct _address {
   address_type type ;
   int len ;
   void const   *data ;
};
typedef struct _address address;
enum __anonenum_port_type_144 {
    PT_NONE = 0,
    PT_SCTP = 1,
    PT_TCP = 2,
    PT_UDP = 3,
    PT_DCCP = 4,
    PT_IPX = 5,
    PT_NCP = 6,
    PT_EXCHG = 7,
    PT_DDP = 8,
    PT_SBCCS = 9,
    PT_IDP = 10,
    PT_TIPC = 11,
    PT_USB = 12,
    PT_I2C = 13,
    PT_IBQP = 14
} ;
typedef enum __anonenum_port_type_144 port_type;
enum __anonenum_circuit_type_145 {
    CT_NONE = 0,
    CT_DLCI = 1,
    CT_ISDN = 2,
    CT_X25 = 3,
    CT_ISUP = 4,
    CT_IAX2 = 5,
    CT_H223 = 6,
    CT_BICC = 7
} ;
typedef enum __anonenum_circuit_type_145 circuit_type;
struct _sccp_msg_info_t;
struct _packet_info {
   char const   *current_proto ;
   column_info *cinfo ;
   frame_data *fd ;
   union wtap_pseudo_header *pseudo_header ;
   GSList *data_src ;
   address dl_src ;
   address dl_dst ;
   address net_src ;
   address net_dst ;
   address src ;
   address dst ;
   guint32 ethertype ;
   guint32 ipproto ;
   guint32 ipxptype ;
   guint32 mpls_label ;
   circuit_type ctype ;
   guint32 circuit_id ;
   char const   *noreassembly_reason ;
   gboolean fragmented ;
   gboolean in_error_pkt ;
   port_type ptype ;
   guint32 srcport ;
   guint32 destport ;
   guint32 match_uint ;
   char const   *match_string ;
   guint16 can_desegment ;
   guint16 saved_can_desegment ;
   int desegment_offset ;
   guint32 desegment_len ;
   guint16 want_pdu_tracking ;
   guint32 bytes_until_next_pdu ;
   int iplen ;
   int iphdrlen ;
   guint8 ip_ttl ;
   int p2p_dir ;
   guint16 oxid ;
   guint16 rxid ;
   guint8 r_ctl ;
   guint8 sof_eof ;
   guint16 src_idx ;
   guint16 dst_idx ;
   guint16 vsan ;
   guint16 dcectxid ;
   int dcetransporttype ;
   guint16 dcetransportsalt ;
   guint16 decrypt_gssapi_tvb ;
   tvbuff_t *gssapi_wrap_tvb ;
   tvbuff_t *gssapi_encrypted_tvb ;
   tvbuff_t *gssapi_decrypted_tvb ;
   gboolean gssapi_data_encrypted ;
   guint32 ppid ;
   guint32 ppids[2] ;
   void *private_data ;
   GString *layer_names ;
   guint16 link_number ;
   guint8 annex_a_used ;
   guint16 profinet_type ;
   void *profinet_conv ;
   void *usb_conv_info ;
   void *tcp_tree ;
   char const   *dcerpc_procedure_name ;
   struct _sccp_msg_info_t *sccp_info ;
   guint16 clnp_srcref ;
   guint16 clnp_dstref ;
   guint16 zbee_cluster_id ;
   guint8 zbee_stack_vers ;
   int link_dir ;
};
typedef struct _packet_info packet_info;
struct e_in6_addr;
struct _value_string {
   guint32 value ;
   gchar const   *strptr ;
};
typedef struct _value_string value_string;
struct _string_string {
   gchar const   *value ;
   gchar const   *strptr ;
};
typedef struct _string_string string_string;
struct _range_string {
   guint32 value_min ;
   guint32 value_max ;
   gchar const   *strptr ;
};
typedef struct _range_string range_string;
struct _value_string_ext;
struct _value_string_ext;
typedef value_string const   *(*_value_string_match2_t)(guint32 const    ,
                                                        struct _value_string_ext  const  * );
struct _value_string_ext {
   value_string const   *(*_vs_match2)(guint32 const    ,
                                       struct _value_string_ext  const  * ) ;
   guint32 _vs_first_value ;
   guint _vs_num_entries ;
   value_string const   *_vs_p ;
   gchar const   *_vs_name ;
};
typedef struct _value_string_ext value_string_ext;
struct true_false_string {
   char const   *true_string ;
   char const   *false_string ;
};
typedef struct true_false_string true_false_string;
struct _packet_counts {
   gint sctp ;
   gint tcp ;
   gint udp ;
   gint icmp ;
   gint ospf ;
   gint gre ;
   gint netbios ;
   gint ipx ;
   gint vines ;
   gint other ;
   gint total ;
   gint arp ;
   gint i2c_event ;
   gint i2c_data ;
};
typedef struct _packet_counts packet_counts;
enum __anonenum_packet_char_enc_146 {
    PACKET_CHAR_ENC_CHAR_ASCII = 0,
    PACKET_CHAR_ENC_CHAR_EBCDIC = 1
} ;
typedef enum __anonenum_packet_char_enc_146 packet_char_enc;
struct dissector_handle;
struct dissector_handle;
typedef struct dissector_handle *dissector_handle_t;
struct dissector_table;
struct dissector_table;
typedef struct dissector_table *dissector_table_t;
typedef void (*dissector_t)(tvbuff_t * , packet_info * , proto_tree * );
typedef int (*new_dissector_t)(tvbuff_t * , packet_info * , proto_tree * );
typedef gboolean (*heur_dissector_t)(tvbuff_t *tvb , packet_info *pinfo ,
                                     proto_tree *tree );
typedef void (*DATFunc)(gchar const   *table_name , ftenum_t selector_type ,
                        gpointer key , gpointer value , gpointer user_data );
typedef void (*DATFunc_handle)(gchar const   *table_name , gpointer value ,
                               gpointer user_data );
typedef void (*DATFunc_table)(gchar const   *table_name ,
                              gchar const   *ui_name , gpointer user_data );
struct dtbl_entry;
typedef struct dtbl_entry dtbl_entry_t;
typedef GSList *heur_dissector_list_t;
struct print_stream;
struct print_stream;
struct print_stream_ops {
   gboolean (*print_preamble)(struct print_stream *self , gchar *filename ) ;
   gboolean (*print_line)(struct print_stream *self , int indent ,
                          char const   *line ) ;
   gboolean (*print_bookmark)(struct print_stream *self , gchar const   *name ,
                              gchar const   *title ) ;
   gboolean (*new_page)(struct print_stream *self ) ;
   gboolean (*print_finale)(struct print_stream *self ) ;
   gboolean (*destroy)(struct print_stream *self ) ;
};
typedef struct print_stream_ops print_stream_ops_t;
struct print_stream {
   print_stream_ops_t const   *ops ;
   void *data ;
};
typedef struct print_stream print_stream_t;
enum __anonenum_print_format_e_147 {
    PR_FMT_TEXT = 0,
    PR_FMT_PS = 1
} ;
typedef enum __anonenum_print_format_e_147 print_format_e;
enum __anonenum_print_range_e_148 {
    print_range_selected_only = 0,
    print_range_marked_only = 1,
    print_range_all_displayed = 2,
    print_range_all_captured = 3
} ;
typedef enum __anonenum_print_range_e_148 print_range_e;
enum __anonenum_print_dissections_e_149 {
    print_dissections_none = 0,
    print_dissections_collapsed = 1,
    print_dissections_as_displayed = 2,
    print_dissections_expanded = 3
} ;
typedef enum __anonenum_print_dissections_e_149 print_dissections_e;
struct __anonstruct_print_args_t_150 {
   print_stream_t *stream ;
   print_format_e format ;
   gboolean to_file ;
   char *file ;
   char *cmd ;
   packet_range_t range ;
   gboolean print_summary ;
   print_dissections_e print_dissections ;
   gboolean print_hex ;
   gboolean print_formfeed ;
};
typedef struct __anonstruct_print_args_t_150 print_args_t;
struct _output_fields;
struct _output_fields;
typedef struct _output_fields output_fields_t;
struct _frame_data_sequence;
typedef struct _frame_data_sequence frame_data_sequence;
enum __anonenum_file_state_151 {
    FILE_CLOSED = 0,
    FILE_READ_IN_PROGRESS = 1,
    FILE_READ_ABORTED = 2,
    FILE_READ_DONE = 3
} ;
typedef enum __anonenum_file_state_151 file_state;
enum __anonenum_search_charset_t_152 {
    SCS_ASCII_AND_UNICODE = 0,
    SCS_ASCII = 1,
    SCS_UNICODE = 2
} ;
typedef enum __anonenum_search_charset_t_152 search_charset_t;
enum __anonenum_search_direction_153 {
    SD_FORWARD = 0,
    SD_BACKWARD = 1
} ;
typedef enum __anonenum_search_direction_153 search_direction;
struct _capture_file {
   file_state state ;
   gchar *filename ;
   gchar *source ;
   gboolean is_tempfile ;
   gboolean user_saved ;
   gint64 f_datalen ;
   guint16 cd_t ;
   int lnk_t ;
   guint32 count ;
   guint32 displayed_count ;
   guint32 marked_count ;
   guint32 ignored_count ;
   guint32 ref_time_count ;
   gboolean drops_known ;
   guint32 drops ;
   nstime_t elapsed_time ;
   gboolean has_snap ;
   int snap ;
   wtap *wth ;
   dfilter_t *rfcode ;
   gchar *dfilter ;
   gboolean redissecting ;
   gchar *sfilter ;
   gboolean hex ;
   gboolean string ;
   gboolean summary_data ;
   gboolean decode_data ;
   gboolean packet_data ;
   guint32 search_pos ;
   gboolean case_type ;
   search_charset_t scs_type ;
   search_direction dir ;
   gboolean search_in_progress ;
   union wtap_pseudo_header pseudo_header ;
   guint8 pd[65535] ;
   frame_data_sequence *frames ;
   guint32 first_displayed ;
   guint32 last_displayed ;
   column_info cinfo ;
   frame_data *current_frame ;
   gint current_row ;
   epan_dissect_t *edt ;
   field_info *finfo_selected ;
};
typedef struct _capture_file capture_file;
enum __anonenum_cf_status_t_154 {
    CF_OK = 0,
    CF_ERROR = 1
} ;
typedef enum __anonenum_cf_status_t_154 cf_status_t;
enum __anonenum_cf_read_status_t_155 {
    CF_READ_OK = 0,
    CF_READ_ERROR = 1,
    CF_READ_ABORTED = 2
} ;
typedef enum __anonenum_cf_read_status_t_155 cf_read_status_t;
enum __anonenum_cf_print_status_t_156 {
    CF_PRINT_OK = 0,
    CF_PRINT_OPEN_ERROR = 1,
    CF_PRINT_WRITE_ERROR = 2
} ;
typedef enum __anonenum_cf_print_status_t_156 cf_print_status_t;
enum __anonenum_cf_cbs_157 {
    cf_cb_file_closing = 0,
    cf_cb_file_closed = 1,
    cf_cb_file_read_started = 2,
    cf_cb_file_read_finished = 3,
    cf_cb_packet_selected = 4,
    cf_cb_packet_unselected = 5,
    cf_cb_field_unselected = 6,
    cf_cb_file_save_started = 7,
    cf_cb_file_save_finished = 8,
    cf_cb_file_save_reload_finished = 9,
    cf_cb_file_save_failed = 10
} ;
typedef enum __anonenum_cf_cbs_157 cf_cbs;
typedef void (*cf_callback_t)(gint event , gpointer data , gpointer user_data );
struct __anonstruct_match_data_158 {
   char const   *string ;
   size_t string_len ;
   capture_file *cf ;
   gboolean frame_matched ;
   field_info *finfo ;
};
typedef struct __anonstruct_match_data_158 match_data;
typedef int bpf_int32;
typedef u_int bpf_u_int32;
struct bpf_insn;
struct bpf_program {
   u_int bf_len ;
   struct bpf_insn *bf_insns ;
};
struct bpf_version {
   u_short bv_major ;
   u_short bv_minor ;
};
struct bpf_insn {
   u_short code ;
   u_char jt ;
   u_char jf ;
   bpf_u_int32 k ;
};
struct pcap;
typedef struct pcap pcap_t;
struct pcap_dumper;
typedef struct pcap_dumper pcap_dumper_t;
struct pcap_if;
typedef struct pcap_if pcap_if_t;
struct pcap_addr;
typedef struct pcap_addr pcap_addr_t;
struct pcap_file_header {
   bpf_u_int32 magic ;
   u_short version_major ;
   u_short version_minor ;
   bpf_int32 thiszone ;
   bpf_u_int32 sigfigs ;
   bpf_u_int32 snaplen ;
   bpf_u_int32 linktype ;
};
enum __anonenum_pcap_direction_t_159 {
    PCAP_D_INOUT = 0,
    PCAP_D_IN = 1,
    PCAP_D_OUT = 2
} ;
typedef enum __anonenum_pcap_direction_t_159 pcap_direction_t;
struct pcap_pkthdr {
   struct timeval ts ;
   bpf_u_int32 caplen ;
   bpf_u_int32 len ;
};
struct pcap_stat {
   u_int ps_recv ;
   u_int ps_drop ;
   u_int ps_ifdrop ;
};
struct pcap_if {
   struct pcap_if *next ;
   char *name ;
   char *description ;
   struct pcap_addr *addresses ;
   bpf_u_int32 flags ;
};
struct pcap_addr {
   struct pcap_addr *next ;
   struct sockaddr *addr ;
   struct sockaddr *netmask ;
   struct sockaddr *broadaddr ;
   struct sockaddr *dstaddr ;
};
typedef void (*pcap_handler)(u_char * , struct pcap_pkthdr  const  * ,
                             u_char const   * );
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
struct __anonstruct_if_info_t_160 {
   char *name ;
   char *description ;
   GSList *addrs ;
   gboolean loopback ;
};
typedef struct __anonstruct_if_info_t_160 if_info_t;
enum __anonenum_if_address_type_161 {
    IF_AT_IPv4 = 0,
    IF_AT_IPv6 = 1
} ;
typedef enum __anonenum_if_address_type_161 if_address_type;
union __anonunion_addr_163 {
   guint32 ip4_addr ;
   guint8 ip6_addr[16] ;
};
struct __anonstruct_if_addr_t_162 {
   if_address_type ifat_type ;
   union __anonunion_addr_163 addr ;
};
typedef struct __anonstruct_if_addr_t_162 if_addr_t;
struct __anonstruct_if_capabilities_t_164 {
   gboolean can_set_rfmon ;
   GList *data_link_types ;
};
typedef struct __anonstruct_if_capabilities_t_164 if_capabilities_t;
struct __anonstruct_data_link_info_t_165 {
   int dlt ;
   char *name ;
   char *description ;
};
typedef struct __anonstruct_data_link_info_t_165 data_link_info_t;
enum __anonenum_capture_state_166 {
    CAPTURE_STOPPED = 0,
    CAPTURE_PREPARING = 1,
    CAPTURE_RUNNING = 2
} ;
typedef enum __anonenum_capture_state_166 capture_state;
struct interface_options_tag {
   gchar *name ;
   gchar *descr ;
   gchar *cfilter ;
   int snaplen ;
   int linktype ;
   gboolean promisc_mode ;
   int buffer_size ;
   gboolean monitor_mode ;
};
typedef struct interface_options_tag interface_options;
struct capture_options_tag {
   void *cf ;
   gboolean has_cfilter ;
   gchar *cfilter ;
   gchar *iface ;
   gchar *iface_descr ;
   GArray *ifaces ;
   interface_options default_options ;
   int buffer_size ;
   gboolean has_snaplen ;
   int snaplen ;
   gboolean promisc_mode ;
   int linktype ;
   gboolean monitor_mode ;
   gboolean saving_to_file ;
   gchar *save_file ;
   gboolean group_read_access ;
   gboolean use_pcapng ;
   gboolean real_time_mode ;
   gboolean show_info ;
   gboolean quit_after_cap ;
   gboolean restart ;
   gboolean multi_files_on ;
   gboolean has_file_duration ;
   gint32 file_duration ;
   gboolean has_ring_num_files ;
   guint32 ring_num_files ;
   gboolean has_autostop_files ;
   gint32 autostop_files ;
   gboolean has_autostop_packets ;
   int autostop_packets ;
   gboolean has_autostop_filesize ;
   gint32 autostop_filesize ;
   gboolean has_autostop_duration ;
   gint32 autostop_duration ;
   int fork_child ;
   int fork_child_status ;
   capture_state state ;
   gboolean output_to_pipe ;
   uid_t owner ;
   gid_t group ;
};
typedef struct capture_options_tag capture_options;
struct condition;
typedef struct condition condition;
typedef gboolean (*_cnd_eval)(condition * , va_list  );
typedef void (*_cnd_reset)(condition * );
typedef condition *(*_cnd_constr)(condition * , va_list  );
typedef void (*_cnd_destr)(condition * );
struct pcap_hdr {
   guint16 version_major ;
   guint16 version_minor ;
   gint32 thiszone ;
   guint32 sigfigs ;
   guint32 snaplen ;
   guint32 network ;
};
struct pcaprec_hdr {
   guint32 ts_sec ;
   guint32 ts_usec ;
   guint32 incl_len ;
   guint32 orig_len ;
};
struct pcaprec_modified_hdr {
   struct pcaprec_hdr hdr ;
   guint32 ifindex ;
   guint16 protocol ;
   guint8 pkt_type ;
   guint8 pad ;
};
struct pcaprec_ss990915_hdr {
   struct pcaprec_hdr hdr ;
   guint32 ifindex ;
   guint16 protocol ;
   guint8 pkt_type ;
   guint8 cpu1 ;
   guint8 cpu2 ;
   guint8 pad[3] ;
};
struct pcaprec_nokia_hdr {
   struct pcaprec_hdr hdr ;
   guint8 stuff[4] ;
};
enum __anonenum_initfilter_status_t_167 {
    INITFILTER_NO_ERROR = 0,
    INITFILTER_BAD_FILTER = 1,
    INITFILTER_OTHER_ERROR = 2
} ;
typedef enum __anonenum_initfilter_status_t_167 initfilter_status_t;
struct _pcap_queue_element {
   guint interface_id ;
   struct pcap_pkthdr phdr ;
   u_char *pd ;
};
typedef struct _pcap_queue_element pcap_queue_element;
enum __anonenum_cap_pipe_state_168 {
    STATE_EXPECT_REC_HDR = 0,
    STATE_READ_REC_HDR = 1,
    STATE_EXPECT_DATA = 2,
    STATE_READ_DATA = 3
} ;
enum __anonenum_cap_pipe_err_169 {
    PIPOK = 0,
    PIPEOF = 1,
    PIPERR = 2,
    PIPNEXIST = 3
} ;
struct _pcap_options {
   pcap_t *pcap_h ;
   int pcap_fd ;
   gboolean pcap_err ;
   guint interface_id ;
   GThread *tid ;
   int snaplen ;
   int linktype ;
   gboolean from_cap_pipe ;
   struct pcap_hdr cap_pipe_hdr ;
   struct pcaprec_modified_hdr cap_pipe_rechdr ;
   int cap_pipe_fd ;
   gboolean cap_pipe_modified ;
   gboolean cap_pipe_byte_swapped ;
   int cap_pipe_bytes_to_read ;
   int cap_pipe_bytes_read ;
   enum __anonenum_cap_pipe_state_168 cap_pipe_state ;
   enum __anonenum_cap_pipe_err_169 cap_pipe_err ;
};
typedef struct _pcap_options pcap_options;
struct _loop_data {
   gboolean go ;
   int err ;
   gint packet_count ;
   gint packet_max ;
   gint inpkts_to_sync_pipe ;
   GArray *pcaps ;
   FILE *pdh ;
   int save_file_fd ;
   long bytes_written ;
   guint32 autostop_files ;
};
typedef struct _loop_data loop_data;
struct __anonstruct_if_stat_t_170 {
   char *name ;
   pcap_t *pch ;
};
typedef struct __anonstruct_if_stat_t_170 if_stat_t;
enum __anonenum_result_171 {
    PD_REC_HDR_READ = 0,
    PD_DATA_READ = 1,
    PD_PIPE_EOF = 2,
    PD_PIPE_ERR = 3,
    PD_ERR = 4
} ;
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
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
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
extern GArray *g_array_new(gboolean zero_terminated , gboolean clear_ ,
                           guint element_size ) ;
extern GArray *g_array_sized_new(gboolean zero_terminated , gboolean clear_ ,
                                 guint element_size , guint reserved_size ) ;
extern gchar *g_array_free(GArray *array , gboolean free_segment ) ;
extern GArray *g_array_ref(GArray *array ) ;
extern void g_array_unref(GArray *array ) ;
extern guint g_array_get_element_size(GArray *array ) ;
extern GArray *g_array_append_vals(GArray *array , gconstpointer data ,
                                   guint len ) ;
extern GArray *g_array_prepend_vals(GArray *array , gconstpointer data ,
                                    guint len ) ;
extern GArray *g_array_insert_vals(GArray *array , guint index_ ,
                                   gconstpointer data , guint len ) ;
extern GArray *g_array_set_size(GArray *array , guint length ) ;
extern GArray *g_array_remove_index(GArray *array , guint index_ ) ;
extern GArray *g_array_remove_index_fast(GArray *array , guint index_ ) ;
extern GArray *g_array_remove_range(GArray *array , guint index_ , guint length ) ;
extern void g_array_sort(GArray *array , gint (*compare_func)(gconstpointer a ,
                                                              gconstpointer b ) ) ;
extern void g_array_sort_with_data(GArray *array ,
                                   gint (*compare_func)(gconstpointer a ,
                                                        gconstpointer b ,
                                                        gpointer user_data ) ,
                                   gpointer user_data ) ;
extern GPtrArray *g_ptr_array_new(void) ;
extern GPtrArray *g_ptr_array_new_with_free_func(void (*element_free_func)(gpointer data ) ) ;
extern GPtrArray *g_ptr_array_sized_new(guint reserved_size ) ;
extern gpointer *g_ptr_array_free(GPtrArray *array , gboolean free_seg ) ;
extern GPtrArray *g_ptr_array_ref(GPtrArray *array ) ;
extern void g_ptr_array_unref(GPtrArray *array ) ;
extern void g_ptr_array_set_free_func(GPtrArray *array ,
                                      void (*element_free_func)(gpointer data ) ) ;
extern void g_ptr_array_set_size(GPtrArray *array , gint length ) ;
extern gpointer g_ptr_array_remove_index(GPtrArray *array , guint index_ ) ;
extern gpointer g_ptr_array_remove_index_fast(GPtrArray *array , guint index_ ) ;
extern gboolean g_ptr_array_remove(GPtrArray *array , gpointer data ) ;
extern gboolean g_ptr_array_remove_fast(GPtrArray *array , gpointer data ) ;
extern void g_ptr_array_remove_range(GPtrArray *array , guint index_ ,
                                     guint length ) ;
extern void g_ptr_array_add(GPtrArray *array , gpointer data ) ;
extern void g_ptr_array_sort(GPtrArray *array ,
                             gint (*compare_func)(gconstpointer a ,
                                                  gconstpointer b ) ) ;
extern void g_ptr_array_sort_with_data(GPtrArray *array ,
                                       gint (*compare_func)(gconstpointer a ,
                                                            gconstpointer b ,
                                                            gpointer user_data ) ,
                                       gpointer user_data ) ;
extern void g_ptr_array_foreach(GPtrArray *array ,
                                void (*func)(gpointer data , gpointer user_data ) ,
                                gpointer user_data ) ;
extern GByteArray *g_byte_array_new(void) ;
extern GByteArray *g_byte_array_sized_new(guint reserved_size ) ;
extern guint8 *g_byte_array_free(GByteArray *array , gboolean free_segment ) ;
extern GByteArray *g_byte_array_ref(GByteArray *array ) ;
extern void g_byte_array_unref(GByteArray *array ) ;
extern GByteArray *g_byte_array_append(GByteArray *array ,
                                       guint8 const   *data , guint len ) ;
extern GByteArray *g_byte_array_prepend(GByteArray *array ,
                                        guint8 const   *data , guint len ) ;
extern GByteArray *g_byte_array_set_size(GByteArray *array , guint length ) ;
extern GByteArray *g_byte_array_remove_index(GByteArray *array , guint index_ ) ;
extern GByteArray *g_byte_array_remove_index_fast(GByteArray *array ,
                                                  guint index_ ) ;
extern GByteArray *g_byte_array_remove_range(GByteArray *array , guint index_ ,
                                             guint length ) ;
extern void g_byte_array_sort(GByteArray *array ,
                              gint (*compare_func)(gconstpointer a ,
                                                   gconstpointer b ) ) ;
extern void g_byte_array_sort_with_data(GByteArray *array ,
                                        gint (*compare_func)(gconstpointer a ,
                                                             gconstpointer b ,
                                                             gpointer user_data ) ,
                                        gpointer user_data ) ;
extern GQuark g_quark_try_string(gchar const   *string ) ;
extern GQuark g_quark_from_static_string(gchar const   *string ) ;
extern GQuark g_quark_from_string(gchar const   *string ) ;
extern gchar const   *g_quark_to_string(GQuark quark )  __attribute__((__const__)) ;
extern gchar const   *g_intern_string(gchar const   *string ) ;
extern gchar const   *g_intern_static_string(gchar const   *string ) ;
extern GError *( /* format attribute */  g_error_new)(GQuark domain ,
                                                      gint code ,
                                                      gchar const   *format 
                                                      , ...) ;
extern GError *g_error_new_literal(GQuark domain , gint code ,
                                   gchar const   *message ) ;
extern GError *g_error_new_valist(GQuark domain , gint code ,
                                  gchar const   *format , va_list args ) ;
extern void g_error_free(GError *error ) ;
extern GError *g_error_copy(GError const   *error ) ;
extern gboolean g_error_matches(GError const   *error , GQuark domain ,
                                gint code ) ;
extern void ( /* format attribute */  g_set_error)(GError **err ,
                                                   GQuark domain , gint code ,
                                                   gchar const   *format  , ...) ;
extern void g_set_error_literal(GError **err , GQuark domain , gint code ,
                                gchar const   *message ) ;
extern void g_propagate_error(GError **dest , GError *src ) ;
extern void g_clear_error(GError **err ) ;
extern void ( /* format attribute */  g_prefix_error)(GError **err ,
                                                      gchar const   *format 
                                                      , ...) ;
extern void ( /* format attribute */  g_propagate_prefixed_error)(GError **dest ,
                                                                  GError *src ,
                                                                  gchar const   *format 
                                                                  , ...) ;
extern gchar const   *g_get_user_name(void) ;
extern gchar const   *g_get_real_name(void) ;
extern gchar const   *g_get_home_dir(void) ;
extern gchar const   *g_get_tmp_dir(void) ;
extern gchar const   *g_get_host_name(void) ;
extern gchar *g_get_prgname(void) ;
extern void g_set_prgname(gchar const   *prgname ) ;
extern gchar const   *g_get_application_name(void) ;
extern void g_set_application_name(gchar const   *application_name ) ;
extern void g_reload_user_special_dirs_cache(void) ;
extern gchar const   *g_get_user_data_dir(void) ;
extern gchar const   *g_get_user_config_dir(void) ;
extern gchar const   *g_get_user_cache_dir(void) ;
extern gchar const   * const  *g_get_system_data_dirs(void) ;
extern gchar const   * const  *g_get_system_config_dirs(void) ;
extern gchar const   * const  *g_get_language_names(void) ;
extern gchar const   *g_get_user_special_dir(GUserDirectory directory ) ;
extern guint g_parse_debug_string(gchar const   *string ,
                                  GDebugKey const   *keys , guint nkeys ) ;
extern gint ( /* format attribute */  g_snprintf)(gchar *string , gulong n ,
                                                  gchar const   *format  , ...) ;
extern gint g_vsnprintf(gchar *string , gulong n , gchar const   *format ,
                        va_list args ) ;
extern gboolean g_path_is_absolute(gchar const   *file_name ) ;
extern gchar const   *g_path_skip_root(gchar const   *file_name ) ;
extern gchar const   *g_basename(gchar const   *file_name ) ;
extern gchar *g_get_current_dir(void) ;
extern gchar *g_path_get_basename(gchar const   *file_name )  __attribute__((__malloc__)) ;
extern gchar *g_path_get_dirname(gchar const   *file_name )  __attribute__((__malloc__)) ;
extern void g_nullify_pointer(gpointer *nullify_location ) ;
extern gchar const   *g_getenv(gchar const   *variable ) ;
extern gboolean g_setenv(gchar const   *variable , gchar const   *value ,
                         gboolean overwrite ) ;
extern void g_unsetenv(gchar const   *variable ) ;
extern gchar **g_listenv(void) ;
extern gchar const   *_g_getenv_nomalloc(gchar const   *variable ,
                                         gchar *buffer ) ;
extern void g_atexit(void (*func)(void) ) ;
extern gchar *g_find_program_in_path(gchar const   *program ) ;
__inline static gint g_bit_nth_lsf(gulong mask , gint nth_bit )  __attribute__((__unused__,
__const__)) ;
__inline static gint g_bit_nth_msf(gulong mask , gint nth_bit )  __attribute__((__unused__,
__const__)) ;
__inline static guint g_bit_storage(gulong number )  __attribute__((__unused__,
__const__)) ;
__inline static void g_trash_stack_push(GTrashStack **stack_p , gpointer data_p )  __attribute__((__unused__)) ;
__inline static gpointer g_trash_stack_pop(GTrashStack **stack_p )  __attribute__((__unused__)) ;
__inline static gpointer g_trash_stack_peek(GTrashStack **stack_p )  __attribute__((__unused__)) ;
__inline static guint g_trash_stack_height(GTrashStack **stack_p )  __attribute__((__unused__)) ;
__inline static gint g_bit_nth_lsf(gulong mask , gint nth_bit )  __attribute__((__unused__,
__const__)) ;
__inline static gint g_bit_nth_lsf(gulong mask , gint nth_bit ) 
{ 
  int _g_boolean_var_ ;
  long tmp ;

  {
  if (nth_bit < -1) {
    _g_boolean_var_ = 1;
  } else {
    _g_boolean_var_ = 0;
  }
  tmp = __builtin_expect((long )_g_boolean_var_, 0L);
  if (tmp) {
    nth_bit = -1;
  } else {

  }
  while (nth_bit < 31) {
    nth_bit ++;
    if (mask & (1UL << nth_bit)) {
      return (nth_bit);
    } else {

    }
  }
  return (-1);
}
}
__inline static gint g_bit_nth_msf(gulong mask , gint nth_bit )  __attribute__((__unused__,
__const__)) ;
__inline static gint g_bit_nth_msf(gulong mask , gint nth_bit ) 
{ 
  int _g_boolean_var_ ;
  long tmp ;

  {
  if (nth_bit < 0) {
    nth_bit = 32;
  } else {
    if (nth_bit > 32) {
      _g_boolean_var_ = 1;
    } else {
      _g_boolean_var_ = 0;
    }
    tmp = __builtin_expect((long )_g_boolean_var_, 0L);
    if (tmp) {
      nth_bit = 32;
    } else {

    }
  }
  while (nth_bit > 0) {
    nth_bit --;
    if (mask & (1UL << nth_bit)) {
      return (nth_bit);
    } else {

    }
  }
  return (-1);
}
}
__inline static guint g_bit_storage(gulong number )  __attribute__((__unused__,
__const__)) ;
__inline static guint g_bit_storage(gulong number ) 
{ 
  int _g_boolean_var_ ;
  long tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int _g_boolean_var____0 ;
  long tmp___2 ;

  {
  if (number) {
    _g_boolean_var____0 = 1;
  } else {
    _g_boolean_var____0 = 0;
  }
  tmp___2 = __builtin_expect((long )_g_boolean_var____0, 1L);
  if (tmp___2) {
    tmp___0 = __builtin_clzl(number);
    tmp___1 = (31 ^ tmp___0) + 1;
  } else {
    tmp___1 = 1;
  }
  return ((guint )tmp___1);
}
}
__inline static void g_trash_stack_push(GTrashStack **stack_p , gpointer data_p )  __attribute__((__unused__)) ;
__inline static void g_trash_stack_push(GTrashStack **stack_p , gpointer data_p ) 
{ 
  GTrashStack *data ;

  {
  data = (GTrashStack *)data_p;
  data->next = *stack_p;
  *stack_p = data;
  return;
}
}
__inline static gpointer g_trash_stack_pop(GTrashStack **stack_p )  __attribute__((__unused__)) ;
__inline static gpointer g_trash_stack_pop(GTrashStack **stack_p ) 
{ 
  GTrashStack *data ;

  {
  data = *stack_p;
  if (data) {
    *stack_p = data->next;
    data->next = (GTrashStack *)((void *)0);
  } else {

  }
  return ((gpointer )data);
}
}
__inline static gpointer g_trash_stack_peek(GTrashStack **stack_p )  __attribute__((__unused__)) ;
__inline static gpointer g_trash_stack_peek(GTrashStack **stack_p ) 
{ 
  GTrashStack *data ;

  {
  data = *stack_p;
  return ((gpointer )data);
}
}
__inline static guint g_trash_stack_height(GTrashStack **stack_p )  __attribute__((__unused__)) ;
__inline static guint g_trash_stack_height(GTrashStack **stack_p ) 
{ 
  GTrashStack *data ;
  guint i ;

  {
  i = (guint )0;
  data = *stack_p;
  while (data) {
    i ++;
    data = data->next;
  }
  return (i);
}
}
extern guint const   glib_major_version ;
extern guint const   glib_minor_version ;
extern guint const   glib_micro_version ;
extern guint const   glib_interface_age ;
extern guint const   glib_binary_age ;
extern gchar const   *glib_check_version(guint required_major ,
                                         guint required_minor ,
                                         guint required_micro ) ;
extern gint g_atomic_int_exchange_and_add(gint volatile __attribute__((__may_alias__))  *atomic ,
                                          gint val ) ;
extern void g_atomic_int_add(gint volatile __attribute__((__may_alias__))  *atomic ,
                             gint val ) ;
extern gboolean g_atomic_int_compare_and_exchange(gint volatile __attribute__((__may_alias__))  *atomic ,
                                                  gint oldval , gint newval ) ;
extern gboolean g_atomic_pointer_compare_and_exchange(gpointer volatile __attribute__((__may_alias__))  *atomic ,
                                                      gpointer oldval ,
                                                      gpointer newval ) ;
extern gint g_atomic_int_get(gint volatile __attribute__((__may_alias__))  *atomic ) ;
extern void g_atomic_int_set(gint volatile __attribute__((__may_alias__))  *atomic ,
                             gint newval ) ;
extern gpointer g_atomic_pointer_get(gpointer volatile __attribute__((__may_alias__))  *atomic ) ;
extern void g_atomic_pointer_set(gpointer volatile __attribute__((__may_alias__))  *atomic ,
                                 gpointer newval ) ;
extern GQuark g_thread_error_quark(void) ;
extern GThreadFunctions g_thread_functions_for_glib_use ;
extern gboolean g_thread_use_default_impl ;
extern gboolean g_threads_got_initialized ;
extern guint64 (*g_thread_gettime)(void) ;
extern void g_thread_init(GThreadFunctions *vtable ) ;
extern void g_thread_init_with_errorcheck_mutexes(GThreadFunctions *vtable ) ;
extern gboolean g_thread_get_initialized(void) ;
extern GMutex *g_static_mutex_get_mutex_impl(GMutex **mutex ) ;
extern GThread *g_thread_create_full(gpointer (*func)(gpointer data ) ,
                                     gpointer data , gulong stack_size ,
                                     gboolean joinable , gboolean bound ,
                                     GThreadPriority priority , GError **error ) ;
extern GThread *g_thread_self(void) ;
extern void g_thread_exit(gpointer retval ) ;
extern gpointer g_thread_join(GThread *thread ) ;
extern void g_thread_set_priority(GThread *thread , GThreadPriority priority ) ;
extern void g_static_mutex_init(GStaticMutex *mutex ) ;
extern void g_static_mutex_free(GStaticMutex *mutex ) ;
extern void g_static_private_init(GStaticPrivate *private_key ) ;
extern gpointer g_static_private_get(GStaticPrivate *private_key ) ;
extern void g_static_private_set(GStaticPrivate *private_key , gpointer data ,
                                 void (*notify)(gpointer data ) ) ;
extern void g_static_private_free(GStaticPrivate *private_key ) ;
extern void g_static_rec_mutex_init(GStaticRecMutex *mutex ) ;
extern void g_static_rec_mutex_lock(GStaticRecMutex *mutex ) ;
extern gboolean g_static_rec_mutex_trylock(GStaticRecMutex *mutex ) ;
extern void g_static_rec_mutex_unlock(GStaticRecMutex *mutex ) ;
extern void g_static_rec_mutex_lock_full(GStaticRecMutex *mutex , guint depth ) ;
extern guint g_static_rec_mutex_unlock_full(GStaticRecMutex *mutex ) ;
extern void g_static_rec_mutex_free(GStaticRecMutex *mutex ) ;
extern void g_static_rw_lock_init(GStaticRWLock *lock ) ;
extern void g_static_rw_lock_reader_lock(GStaticRWLock *lock ) ;
extern gboolean g_static_rw_lock_reader_trylock(GStaticRWLock *lock ) ;
extern void g_static_rw_lock_reader_unlock(GStaticRWLock *lock ) ;
extern void g_static_rw_lock_writer_lock(GStaticRWLock *lock ) ;
extern gboolean g_static_rw_lock_writer_trylock(GStaticRWLock *lock ) ;
extern void g_static_rw_lock_writer_unlock(GStaticRWLock *lock ) ;
extern void g_static_rw_lock_free(GStaticRWLock *lock ) ;
extern void g_thread_foreach(void (*thread_func)(gpointer data ,
                                                 gpointer user_data ) ,
                             gpointer user_data ) ;
extern gpointer g_once_impl(GOnce *once , gpointer (*func)(gpointer data ) ,
                            gpointer arg ) ;
__inline static gboolean g_once_init_enter(gsize volatile   *value_location )  __attribute__((__unused__)) ;
extern gboolean g_once_init_enter_impl(gsize volatile   *value_location ) ;
extern void g_once_init_leave(gsize volatile   *value_location ,
                              gsize initialization_value ) ;
__inline static gboolean g_once_init_enter(gsize volatile   *value_location )  __attribute__((__unused__)) ;
__inline static gboolean g_once_init_enter(gsize volatile   *value_location ) 
{ 
  gboolean tmp ;
  int _g_boolean_var_ ;
  gpointer tmp___0 ;
  long tmp___1 ;

  {
  tmp___0 = g_atomic_pointer_get((gpointer volatile __attribute__((__may_alias__))  *)((void *)value_location));
  if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
    _g_boolean_var_ = 1;
  } else {
    _g_boolean_var_ = 0;
  }
  tmp___1 = __builtin_expect((long )_g_boolean_var_, 1L);
  if (tmp___1) {
    return (0);
  } else {
    tmp = g_once_init_enter_impl(value_location);
    return (tmp);
  }
}
}
extern void glib_dummy_decl(void) ;
extern GAsyncQueue *g_async_queue_new(void) ;
extern GAsyncQueue *g_async_queue_new_full(void (*item_free_func)(gpointer data ) ) ;
extern void g_async_queue_lock(GAsyncQueue *queue ) ;
extern void g_async_queue_unlock(GAsyncQueue *queue ) ;
extern GAsyncQueue *g_async_queue_ref(GAsyncQueue *queue ) ;
extern void g_async_queue_unref(GAsyncQueue *queue ) ;
extern void g_async_queue_ref_unlocked(GAsyncQueue *queue ) ;
extern void g_async_queue_unref_and_unlock(GAsyncQueue *queue ) ;
extern void g_async_queue_push(GAsyncQueue *queue , gpointer data ) ;
extern void g_async_queue_push_unlocked(GAsyncQueue *queue , gpointer data ) ;
extern void g_async_queue_push_sorted(GAsyncQueue *queue , gpointer data ,
                                      gint (*func)(gconstpointer a ,
                                                   gconstpointer b ,
                                                   gpointer user_data ) ,
                                      gpointer user_data ) ;
extern void g_async_queue_push_sorted_unlocked(GAsyncQueue *queue ,
                                               gpointer data ,
                                               gint (*func)(gconstpointer a ,
                                                            gconstpointer b ,
                                                            gpointer user_data ) ,
                                               gpointer user_data ) ;
extern gpointer g_async_queue_pop(GAsyncQueue *queue ) ;
extern gpointer g_async_queue_pop_unlocked(GAsyncQueue *queue ) ;
extern gpointer g_async_queue_try_pop(GAsyncQueue *queue ) ;
extern gpointer g_async_queue_try_pop_unlocked(GAsyncQueue *queue ) ;
extern gpointer g_async_queue_timed_pop(GAsyncQueue *queue , GTimeVal *end_time ) ;
extern gpointer g_async_queue_timed_pop_unlocked(GAsyncQueue *queue ,
                                                 GTimeVal *end_time ) ;
extern gint g_async_queue_length(GAsyncQueue *queue ) ;
extern gint g_async_queue_length_unlocked(GAsyncQueue *queue ) ;
extern void g_async_queue_sort(GAsyncQueue *queue ,
                               gint (*func)(gconstpointer a , gconstpointer b ,
                                            gpointer user_data ) ,
                               gpointer user_data ) ;
extern void g_async_queue_sort_unlocked(GAsyncQueue *queue ,
                                        gint (*func)(gconstpointer a ,
                                                     gconstpointer b ,
                                                     gpointer user_data ) ,
                                        gpointer user_data ) ;
extern GMutex *_g_async_queue_get_mutex(GAsyncQueue *queue ) ;
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
extern void g_on_error_query(gchar const   *prg_name ) ;
extern void g_on_error_stack_trace(gchar const   *prg_name ) ;
extern gsize g_base64_encode_step(guchar const   *in , gsize len ,
                                  gboolean break_lines , gchar *out ,
                                  gint *state , gint *save ) ;
extern gsize g_base64_encode_close(gboolean break_lines , gchar *out ,
                                   gint *state , gint *save ) ;
extern gchar *g_base64_encode(guchar const   *data , gsize len )  __attribute__((__malloc__)) ;
extern gsize g_base64_decode_step(gchar const   *in , gsize len , guchar *out ,
                                  gint *state , guint *save ) ;
extern guchar *g_base64_decode(gchar const   *text , gsize *out_len )  __attribute__((__malloc__)) ;
extern guchar *g_base64_decode_inplace(gchar *text , gsize *out_len ) ;
extern void g_bit_lock(gint volatile   *address , gint lock_bit ) ;
extern gboolean g_bit_trylock(gint volatile   *address , gint lock_bit ) ;
extern void g_bit_unlock(gint volatile   *address , gint lock_bit ) ;
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
extern GQuark g_bookmark_file_error_quark(void) ;
extern GBookmarkFile *g_bookmark_file_new(void) ;
extern void g_bookmark_file_free(GBookmarkFile *bookmark ) ;
extern gboolean g_bookmark_file_load_from_file(GBookmarkFile *bookmark ,
                                               gchar const   *filename ,
                                               GError **error ) ;
extern gboolean g_bookmark_file_load_from_data(GBookmarkFile *bookmark ,
                                               gchar const   *data ,
                                               gsize length , GError **error ) ;
extern gboolean g_bookmark_file_load_from_data_dirs(GBookmarkFile *bookmark ,
                                                    gchar const   *file ,
                                                    gchar **full_path ,
                                                    GError **error ) ;
extern gchar *g_bookmark_file_to_data(GBookmarkFile *bookmark , gsize *length ,
                                      GError **error )  __attribute__((__malloc__)) ;
extern gboolean g_bookmark_file_to_file(GBookmarkFile *bookmark ,
                                        gchar const   *filename ,
                                        GError **error ) ;
extern void g_bookmark_file_set_title(GBookmarkFile *bookmark ,
                                      gchar const   *uri , gchar const   *title ) ;
extern gchar *g_bookmark_file_get_title(GBookmarkFile *bookmark ,
                                        gchar const   *uri , GError **error )  __attribute__((__malloc__)) ;
extern void g_bookmark_file_set_description(GBookmarkFile *bookmark ,
                                            gchar const   *uri ,
                                            gchar const   *description ) ;
extern gchar *g_bookmark_file_get_description(GBookmarkFile *bookmark ,
                                              gchar const   *uri ,
                                              GError **error )  __attribute__((__malloc__)) ;
extern void g_bookmark_file_set_mime_type(GBookmarkFile *bookmark ,
                                          gchar const   *uri ,
                                          gchar const   *mime_type ) ;
extern gchar *g_bookmark_file_get_mime_type(GBookmarkFile *bookmark ,
                                            gchar const   *uri , GError **error )  __attribute__((__malloc__)) ;
extern void g_bookmark_file_set_groups(GBookmarkFile *bookmark ,
                                       gchar const   *uri ,
                                       gchar const   **groups , gsize length ) ;
extern void g_bookmark_file_add_group(GBookmarkFile *bookmark ,
                                      gchar const   *uri , gchar const   *group ) ;
extern gboolean g_bookmark_file_has_group(GBookmarkFile *bookmark ,
                                          gchar const   *uri ,
                                          gchar const   *group , GError **error ) ;
extern gchar **g_bookmark_file_get_groups(GBookmarkFile *bookmark ,
                                          gchar const   *uri , gsize *length ,
                                          GError **error )  __attribute__((__malloc__)) ;
extern void g_bookmark_file_add_application(GBookmarkFile *bookmark ,
                                            gchar const   *uri ,
                                            gchar const   *name ,
                                            gchar const   *exec ) ;
extern gboolean g_bookmark_file_has_application(GBookmarkFile *bookmark ,
                                                gchar const   *uri ,
                                                gchar const   *name ,
                                                GError **error ) ;
extern gchar **g_bookmark_file_get_applications(GBookmarkFile *bookmark ,
                                                gchar const   *uri ,
                                                gsize *length , GError **error )  __attribute__((__malloc__)) ;
extern gboolean g_bookmark_file_set_app_info(GBookmarkFile *bookmark ,
                                             gchar const   *uri ,
                                             gchar const   *name ,
                                             gchar const   *exec , gint count ,
                                             time_t stamp , GError **error ) ;
extern gboolean g_bookmark_file_get_app_info(GBookmarkFile *bookmark ,
                                             gchar const   *uri ,
                                             gchar const   *name ,
                                             gchar **exec , guint *count ,
                                             time_t *stamp , GError **error ) ;
extern void g_bookmark_file_set_is_private(GBookmarkFile *bookmark ,
                                           gchar const   *uri ,
                                           gboolean is_private ) ;
extern gboolean g_bookmark_file_get_is_private(GBookmarkFile *bookmark ,
                                               gchar const   *uri ,
                                               GError **error ) ;
extern void g_bookmark_file_set_icon(GBookmarkFile *bookmark ,
                                     gchar const   *uri , gchar const   *href ,
                                     gchar const   *mime_type ) ;
extern gboolean g_bookmark_file_get_icon(GBookmarkFile *bookmark ,
                                         gchar const   *uri , gchar **href ,
                                         gchar **mime_type , GError **error ) ;
extern void g_bookmark_file_set_added(GBookmarkFile *bookmark ,
                                      gchar const   *uri , time_t added ) ;
extern time_t g_bookmark_file_get_added(GBookmarkFile *bookmark ,
                                        gchar const   *uri , GError **error ) ;
extern void g_bookmark_file_set_modified(GBookmarkFile *bookmark ,
                                         gchar const   *uri , time_t modified ) ;
extern time_t g_bookmark_file_get_modified(GBookmarkFile *bookmark ,
                                           gchar const   *uri , GError **error ) ;
extern void g_bookmark_file_set_visited(GBookmarkFile *bookmark ,
                                        gchar const   *uri , time_t visited ) ;
extern time_t g_bookmark_file_get_visited(GBookmarkFile *bookmark ,
                                          gchar const   *uri , GError **error ) ;
extern gboolean g_bookmark_file_has_item(GBookmarkFile *bookmark ,
                                         gchar const   *uri ) ;
extern gint g_bookmark_file_get_size(GBookmarkFile *bookmark ) ;
extern gchar **g_bookmark_file_get_uris(GBookmarkFile *bookmark , gsize *length )  __attribute__((__malloc__)) ;
extern gboolean g_bookmark_file_remove_group(GBookmarkFile *bookmark ,
                                             gchar const   *uri ,
                                             gchar const   *group ,
                                             GError **error ) ;
extern gboolean g_bookmark_file_remove_application(GBookmarkFile *bookmark ,
                                                   gchar const   *uri ,
                                                   gchar const   *name ,
                                                   GError **error ) ;
extern gboolean g_bookmark_file_remove_item(GBookmarkFile *bookmark ,
                                            gchar const   *uri , GError **error ) ;
extern gboolean g_bookmark_file_move_item(GBookmarkFile *bookmark ,
                                          gchar const   *old_uri ,
                                          gchar const   *new_uri ,
                                          GError **error ) ;
extern gpointer g_slice_alloc(gsize block_size )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern gpointer g_slice_alloc0(gsize block_size )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern gpointer g_slice_copy(gsize block_size , gconstpointer mem_block )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern void g_slice_free1(gsize block_size , gpointer mem_block ) ;
extern void g_slice_free_chain_with_offset(gsize block_size ,
                                           gpointer mem_chain ,
                                           gsize next_offset ) ;
extern void g_slice_set_config(GSliceConfig ckey , gint64 value ) ;
extern gint64 g_slice_get_config(GSliceConfig ckey ) ;
extern gint64 *g_slice_get_config_state(GSliceConfig ckey , gint64 address ,
                                        guint *n_values ) ;
extern void g_free(gpointer mem ) ;
extern gpointer g_malloc(gsize n_bytes )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern gpointer g_malloc0(gsize n_bytes )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern gpointer ( __attribute__((__warn_unused_result__)) g_realloc)(gpointer mem ,
                                                                     gsize n_bytes ) ;
extern gpointer g_try_malloc(gsize n_bytes )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern gpointer g_try_malloc0(gsize n_bytes )  __attribute__((__malloc__,
__alloc_size__(1))) ;
extern gpointer ( __attribute__((__warn_unused_result__)) g_try_realloc)(gpointer mem ,
                                                                         gsize n_bytes ) ;
extern gpointer g_malloc_n(gsize n_blocks , gsize n_block_bytes )  __attribute__((__malloc__,
__alloc_size__(1,2))) ;
extern gpointer g_malloc0_n(gsize n_blocks , gsize n_block_bytes )  __attribute__((__malloc__,
__alloc_size__(1,2))) ;
extern gpointer ( __attribute__((__warn_unused_result__)) g_realloc_n)(gpointer mem ,
                                                                       gsize n_blocks ,
                                                                       gsize n_block_bytes ) ;
extern gpointer g_try_malloc_n(gsize n_blocks , gsize n_block_bytes )  __attribute__((__malloc__,
__alloc_size__(1,2))) ;
extern gpointer g_try_malloc0_n(gsize n_blocks , gsize n_block_bytes )  __attribute__((__malloc__,
__alloc_size__(1,2))) ;
extern gpointer ( __attribute__((__warn_unused_result__)) g_try_realloc_n)(gpointer mem ,
                                                                           gsize n_blocks ,
                                                                           gsize n_block_bytes ) ;
extern void g_mem_set_vtable(GMemVTable *vtable ) ;
extern gboolean g_mem_is_system_malloc(void) ;
extern gboolean g_mem_gc_friendly ;
extern GMemVTable *glib_mem_profiler_table ;
extern void g_mem_profile(void) ;
extern GMemChunk *g_mem_chunk_new(gchar const   *name , gint atom_size ,
                                  gsize area_size , gint type ) ;
extern void g_mem_chunk_destroy(GMemChunk *mem_chunk ) ;
extern gpointer g_mem_chunk_alloc(GMemChunk *mem_chunk ) ;
extern gpointer g_mem_chunk_alloc0(GMemChunk *mem_chunk ) ;
extern void g_mem_chunk_free(GMemChunk *mem_chunk , gpointer mem ) ;
extern void g_mem_chunk_clean(GMemChunk *mem_chunk ) ;
extern void g_mem_chunk_reset(GMemChunk *mem_chunk ) ;
extern void g_mem_chunk_print(GMemChunk *mem_chunk ) ;
extern void g_mem_chunk_info(void) ;
extern void g_blow_chunks(void) ;
extern GAllocator *g_allocator_new(gchar const   *name , guint n_preallocs ) ;
extern void g_allocator_free(GAllocator *allocator ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_alloc)(void) ;
extern void g_list_free(GList *list ) ;
extern void g_list_free_1(GList *list ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_append)(GList *list ,
                                                                       gpointer data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_prepend)(GList *list ,
                                                                        gpointer data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_insert)(GList *list ,
                                                                       gpointer data ,
                                                                       gint position ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_insert_sorted)(GList *list ,
                                                                              gpointer data ,
                                                                              gint (*func)(gconstpointer a ,
                                                                                           gconstpointer b ) ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_insert_sorted_with_data)(GList *list ,
                                                                                        gpointer data ,
                                                                                        gint (*func)(gconstpointer a ,
                                                                                                     gconstpointer b ,
                                                                                                     gpointer user_data ) ,
                                                                                        gpointer user_data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_insert_before)(GList *list ,
                                                                              GList *sibling ,
                                                                              gpointer data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_concat)(GList *list1 ,
                                                                       GList *list2 ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_remove)(GList *list ,
                                                                       gconstpointer data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_remove_all)(GList *list ,
                                                                           gconstpointer data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_remove_link)(GList *list ,
                                                                            GList *llink ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_delete_link)(GList *list ,
                                                                            GList *link_ ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_reverse)(GList *list ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_copy)(GList *list ) ;
extern GList *g_list_nth(GList *list , guint n ) ;
extern GList *g_list_nth_prev(GList *list , guint n ) ;
extern GList *g_list_find(GList *list , gconstpointer data ) ;
extern GList *g_list_find_custom(GList *list , gconstpointer data ,
                                 gint (*func)(gconstpointer a , gconstpointer b ) ) ;
extern gint g_list_position(GList *list , GList *llink ) ;
extern gint g_list_index(GList *list , gconstpointer data ) ;
extern GList *g_list_last(GList *list ) ;
extern GList *g_list_first(GList *list ) ;
extern guint g_list_length(GList *list ) ;
extern void g_list_foreach(GList *list , void (*func)(gpointer data ,
                                                      gpointer user_data ) ,
                           gpointer user_data ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_sort)(GList *list ,
                                                                     gint (*compare_func)(gconstpointer a ,
                                                                                          gconstpointer b ) ) ;
extern GList *( __attribute__((__warn_unused_result__)) g_list_sort_with_data)(GList *list ,
                                                                               gint (*compare_func)(gconstpointer a ,
                                                                                                    gconstpointer b ,
                                                                                                    gpointer user_data ) ,
                                                                               gpointer user_data ) ;
extern gpointer g_list_nth_data(GList *list , guint n ) ;
extern void g_list_push_allocator(gpointer allocator ) ;
extern void g_list_pop_allocator(void) ;
extern GCache *g_cache_new(gpointer (*value_new_func)(gpointer key ) ,
                           void (*value_destroy_func)(gpointer value ) ,
                           gpointer (*key_dup_func)(gpointer value ) ,
                           void (*key_destroy_func)(gpointer value ) ,
                           guint (*hash_key_func)(gconstpointer key ) ,
                           guint (*hash_value_func)(gconstpointer key ) ,
                           gboolean (*key_equal_func)(gconstpointer a ,
                                                      gconstpointer b ) ) ;
extern void g_cache_destroy(GCache *cache ) ;
extern gpointer g_cache_insert(GCache *cache , gpointer key ) ;
extern void g_cache_remove(GCache *cache , gconstpointer value ) ;
extern void g_cache_key_foreach(GCache *cache ,
                                void (*func)(gpointer key , gpointer value ,
                                             gpointer user_data ) ,
                                gpointer user_data ) ;
extern void g_cache_value_foreach(GCache *cache ,
                                  void (*func)(gpointer key , gpointer value ,
                                               gpointer user_data ) ,
                                  gpointer user_data ) ;
extern gssize g_checksum_type_get_length(GChecksumType checksum_type ) ;
extern GChecksum *g_checksum_new(GChecksumType checksum_type ) ;
extern void g_checksum_reset(GChecksum *checksum ) ;
extern GChecksum *g_checksum_copy(GChecksum const   *checksum ) ;
extern void g_checksum_free(GChecksum *checksum ) ;
extern void g_checksum_update(GChecksum *checksum , guchar const   *data ,
                              gssize length ) ;
extern gchar const   *g_checksum_get_string(GChecksum *checksum ) ;
extern void g_checksum_get_digest(GChecksum *checksum , guint8 *buffer ,
                                  gsize *digest_len ) ;
extern gchar *g_compute_checksum_for_data(GChecksumType checksum_type ,
                                          guchar const   *data , gsize length ) ;
extern gchar *g_compute_checksum_for_string(GChecksumType checksum_type ,
                                            gchar const   *str , gssize length ) ;
extern GCompletion *g_completion_new(gchar *(*func)(gpointer  ) ) ;
extern void g_completion_add_items(GCompletion *cmp , GList *items ) ;
extern void g_completion_remove_items(GCompletion *cmp , GList *items ) ;
extern void g_completion_clear_items(GCompletion *cmp ) ;
extern GList *g_completion_complete(GCompletion *cmp , gchar const   *prefix ,
                                    gchar **new_prefix ) ;
extern GList *g_completion_complete_utf8(GCompletion *cmp ,
                                         gchar const   *prefix ,
                                         gchar **new_prefix ) ;
extern void g_completion_set_compare(GCompletion *cmp ,
                                     gint (*strncmp_func)(gchar const   *s1 ,
                                                          gchar const   *s2 ,
                                                          gsize n ) ) ;
extern void g_completion_free(GCompletion *cmp ) ;
extern GQuark g_convert_error_quark(void) ;
extern GIConv g_iconv_open(gchar const   *to_codeset ,
                           gchar const   *from_codeset ) ;
extern gsize g_iconv(GIConv converter , gchar **inbuf , gsize *inbytes_left ,
                     gchar **outbuf , gsize *outbytes_left ) ;
extern gint g_iconv_close(GIConv converter ) ;
extern gchar *g_convert(gchar const   *str , gssize len ,
                        gchar const   *to_codeset ,
                        gchar const   *from_codeset , gsize *bytes_read ,
                        gsize *bytes_written , GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_convert_with_iconv(gchar const   *str , gssize len ,
                                   GIConv converter , gsize *bytes_read ,
                                   gsize *bytes_written , GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_convert_with_fallback(gchar const   *str , gssize len ,
                                      gchar const   *to_codeset ,
                                      gchar const   *from_codeset ,
                                      gchar const   *fallback ,
                                      gsize *bytes_read , gsize *bytes_written ,
                                      GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_locale_to_utf8(gchar const   *opsysstring , gssize len ,
                               gsize *bytes_read , gsize *bytes_written ,
                               GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_locale_from_utf8(gchar const   *utf8string , gssize len ,
                                 gsize *bytes_read , gsize *bytes_written ,
                                 GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_filename_to_utf8(gchar const   *opsysstring , gssize len ,
                                 gsize *bytes_read , gsize *bytes_written ,
                                 GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_filename_from_utf8(gchar const   *utf8string , gssize len ,
                                   gsize *bytes_read , gsize *bytes_written ,
                                   GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_filename_from_uri(gchar const   *uri , gchar **hostname ,
                                  GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_filename_to_uri(gchar const   *filename ,
                                gchar const   *hostname , GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_filename_display_name(gchar const   *filename )  __attribute__((__malloc__)) ;
extern gboolean g_get_filename_charsets(gchar const   ***charsets ) ;
extern gchar *g_filename_display_basename(gchar const   *filename )  __attribute__((__malloc__)) ;
extern gchar **g_uri_list_extract_uris(gchar const   *uri_list )  __attribute__((__malloc__)) ;
extern void g_datalist_init(GData **datalist ) ;
extern void g_datalist_clear(GData **datalist ) ;
extern gpointer g_datalist_id_get_data(GData **datalist , GQuark key_id ) ;
extern void g_datalist_id_set_data_full(GData **datalist , GQuark key_id ,
                                        gpointer data ,
                                        void (*destroy_func)(gpointer data ) ) ;
extern gpointer g_datalist_id_remove_no_notify(GData **datalist , GQuark key_id ) ;
extern void g_datalist_foreach(GData **datalist ,
                               void (*func)(GQuark key_id , gpointer data ,
                                            gpointer user_data ) ,
                               gpointer user_data ) ;
extern void g_datalist_set_flags(GData **datalist , guint flags ) ;
extern void g_datalist_unset_flags(GData **datalist , guint flags ) ;
extern guint g_datalist_get_flags(GData **datalist ) ;
extern void g_dataset_destroy(gconstpointer dataset_location ) ;
extern gpointer g_dataset_id_get_data(gconstpointer dataset_location ,
                                      GQuark key_id ) ;
extern void g_dataset_id_set_data_full(gconstpointer dataset_location ,
                                       GQuark key_id , gpointer data ,
                                       void (*destroy_func)(gpointer data ) ) ;
extern gpointer g_dataset_id_remove_no_notify(gconstpointer dataset_location ,
                                              GQuark key_id ) ;
extern void g_dataset_foreach(gconstpointer dataset_location ,
                              void (*func)(GQuark key_id , gpointer data ,
                                           gpointer user_data ) ,
                              gpointer user_data ) ;
extern GDate *g_date_new(void) ;
extern GDate *g_date_new_dmy(GDateDay day , GDateMonth month , GDateYear year ) ;
extern GDate *g_date_new_julian(guint32 julian_day ) ;
extern void g_date_free(GDate *date ) ;
extern gboolean g_date_valid(GDate const   *date ) ;
extern gboolean g_date_valid_day(GDateDay day )  __attribute__((__const__)) ;
extern gboolean g_date_valid_month(GDateMonth month )  __attribute__((__const__)) ;
extern gboolean g_date_valid_year(GDateYear year )  __attribute__((__const__)) ;
extern gboolean g_date_valid_weekday(GDateWeekday weekday )  __attribute__((__const__)) ;
extern gboolean g_date_valid_julian(guint32 julian_date )  __attribute__((__const__)) ;
extern gboolean g_date_valid_dmy(GDateDay day , GDateMonth month ,
                                 GDateYear year )  __attribute__((__const__)) ;
extern GDateWeekday g_date_get_weekday(GDate const   *date ) ;
extern GDateMonth g_date_get_month(GDate const   *date ) ;
extern GDateYear g_date_get_year(GDate const   *date ) ;
extern GDateDay g_date_get_day(GDate const   *date ) ;
extern guint32 g_date_get_julian(GDate const   *date ) ;
extern guint g_date_get_day_of_year(GDate const   *date ) ;
extern guint g_date_get_monday_week_of_year(GDate const   *date ) ;
extern guint g_date_get_sunday_week_of_year(GDate const   *date ) ;
extern guint g_date_get_iso8601_week_of_year(GDate const   *date ) ;
extern void g_date_clear(GDate *date , guint n_dates ) ;
extern void g_date_set_parse(GDate *date , gchar const   *str ) ;
extern void g_date_set_time_t(GDate *date , time_t timet ) ;
extern void g_date_set_time_val(GDate *date , GTimeVal *timeval ) ;
extern void g_date_set_time(GDate *date , GTime time_ ) ;
extern void g_date_set_month(GDate *date , GDateMonth month ) ;
extern void g_date_set_day(GDate *date , GDateDay day ) ;
extern void g_date_set_year(GDate *date , GDateYear year ) ;
extern void g_date_set_dmy(GDate *date , GDateDay day , GDateMonth month ,
                           GDateYear y ) ;
extern void g_date_set_julian(GDate *date , guint32 julian_date ) ;
extern gboolean g_date_is_first_of_month(GDate const   *date ) ;
extern gboolean g_date_is_last_of_month(GDate const   *date ) ;
extern void g_date_add_days(GDate *date , guint n_days ) ;
extern void g_date_subtract_days(GDate *date , guint n_days ) ;
extern void g_date_add_months(GDate *date , guint n_months ) ;
extern void g_date_subtract_months(GDate *date , guint n_months ) ;
extern void g_date_add_years(GDate *date , guint n_years ) ;
extern void g_date_subtract_years(GDate *date , guint n_years ) ;
extern gboolean g_date_is_leap_year(GDateYear year )  __attribute__((__const__)) ;
extern guint8 g_date_get_days_in_month(GDateMonth month , GDateYear year )  __attribute__((__const__)) ;
extern guint8 g_date_get_monday_weeks_in_year(GDateYear year )  __attribute__((__const__)) ;
extern guint8 g_date_get_sunday_weeks_in_year(GDateYear year )  __attribute__((__const__)) ;
extern gint g_date_days_between(GDate const   *date1 , GDate const   *date2 ) ;
extern gint g_date_compare(GDate const   *lhs , GDate const   *rhs ) ;
extern void g_date_to_struct_tm(GDate const   *date , struct tm *tm ) ;
extern void g_date_clamp(GDate *date , GDate const   *min_date ,
                         GDate const   *max_date ) ;
extern void g_date_order(GDate *date1 , GDate *date2 ) ;
extern gsize g_date_strftime(gchar *s , gsize slen , gchar const   *format ,
                             GDate const   *date ) ;
extern GDir *g_dir_open(gchar const   *path , guint flags , GError **error ) ;
extern gchar const   *g_dir_read_name(GDir *dir ) ;
extern void g_dir_rewind(GDir *dir ) ;
extern void g_dir_close(GDir *dir ) ;
extern GQuark g_file_error_quark(void) ;
extern GFileError g_file_error_from_errno(gint err_no ) ;
extern gboolean g_file_test(gchar const   *filename , GFileTest test ) ;
extern gboolean g_file_get_contents(gchar const   *filename , gchar **contents ,
                                    gsize *length , GError **error ) ;
extern gboolean g_file_set_contents(gchar const   *filename ,
                                    gchar const   *contents , gssize length ,
                                    GError **error ) ;
extern gchar *g_file_read_link(gchar const   *filename , GError **error ) ;
extern gint g_mkstemp(gchar *tmpl ) ;
extern gint g_mkstemp_full(gchar *tmpl , int flags , int mode ) ;
extern gint g_file_open_tmp(gchar const   *tmpl , gchar **name_used ,
                            GError **error ) ;
extern char *g_format_size_for_display(goffset size ) ;
extern gchar *g_build_path(gchar const   *separator ,
                           gchar const   *first_element  , ...)  __attribute__((__sentinel__,
__malloc__)) ;
extern gchar *g_build_pathv(gchar const   *separator , gchar **args )  __attribute__((__malloc__)) ;
extern gchar *g_build_filename(gchar const   *first_element  , ...)  __attribute__((__sentinel__,
__malloc__)) ;
extern gchar *g_build_filenamev(gchar **args )  __attribute__((__malloc__)) ;
extern int g_mkdir_with_parents(gchar const   *pathname , int mode ) ;
extern GHashTable *g_hash_table_new(guint (*hash_func)(gconstpointer key ) ,
                                    gboolean (*key_equal_func)(gconstpointer a ,
                                                               gconstpointer b ) ) ;
extern GHashTable *g_hash_table_new_full(guint (*hash_func)(gconstpointer key ) ,
                                         gboolean (*key_equal_func)(gconstpointer a ,
                                                                    gconstpointer b ) ,
                                         void (*key_destroy_func)(gpointer data ) ,
                                         void (*value_destroy_func)(gpointer data ) ) ;
extern void g_hash_table_destroy(GHashTable *hash_table ) ;
extern void g_hash_table_insert(GHashTable *hash_table , gpointer key ,
                                gpointer value ) ;
extern void g_hash_table_replace(GHashTable *hash_table , gpointer key ,
                                 gpointer value ) ;
extern gboolean g_hash_table_remove(GHashTable *hash_table , gconstpointer key ) ;
extern void g_hash_table_remove_all(GHashTable *hash_table ) ;
extern gboolean g_hash_table_steal(GHashTable *hash_table , gconstpointer key ) ;
extern void g_hash_table_steal_all(GHashTable *hash_table ) ;
extern gpointer g_hash_table_lookup(GHashTable *hash_table , gconstpointer key ) ;
extern gboolean g_hash_table_lookup_extended(GHashTable *hash_table ,
                                             gconstpointer lookup_key ,
                                             gpointer *orig_key ,
                                             gpointer *value ) ;
extern void g_hash_table_foreach(GHashTable *hash_table ,
                                 void (*func)(gpointer key , gpointer value ,
                                              gpointer user_data ) ,
                                 gpointer user_data ) ;
extern gpointer g_hash_table_find(GHashTable *hash_table ,
                                  gboolean (*predicate)(gpointer key ,
                                                        gpointer value ,
                                                        gpointer user_data ) ,
                                  gpointer user_data ) ;
extern guint g_hash_table_foreach_remove(GHashTable *hash_table ,
                                         gboolean (*func)(gpointer key ,
                                                          gpointer value ,
                                                          gpointer user_data ) ,
                                         gpointer user_data ) ;
extern guint g_hash_table_foreach_steal(GHashTable *hash_table ,
                                        gboolean (*func)(gpointer key ,
                                                         gpointer value ,
                                                         gpointer user_data ) ,
                                        gpointer user_data ) ;
extern guint g_hash_table_size(GHashTable *hash_table ) ;
extern GList *g_hash_table_get_keys(GHashTable *hash_table ) ;
extern GList *g_hash_table_get_values(GHashTable *hash_table ) ;
extern void g_hash_table_iter_init(GHashTableIter *iter ,
                                   GHashTable *hash_table ) ;
extern gboolean g_hash_table_iter_next(GHashTableIter *iter , gpointer *key ,
                                       gpointer *value ) ;
extern GHashTable *g_hash_table_iter_get_hash_table(GHashTableIter *iter ) ;
extern void g_hash_table_iter_remove(GHashTableIter *iter ) ;
extern void g_hash_table_iter_steal(GHashTableIter *iter ) ;
extern GHashTable *g_hash_table_ref(GHashTable *hash_table ) ;
extern void g_hash_table_unref(GHashTable *hash_table ) ;
extern gboolean g_str_equal(gconstpointer v1 , gconstpointer v2 ) ;
extern guint g_str_hash(gconstpointer v ) ;
extern gboolean g_int_equal(gconstpointer v1 , gconstpointer v2 ) ;
extern guint g_int_hash(gconstpointer v ) ;
extern gboolean g_int64_equal(gconstpointer v1 , gconstpointer v2 ) ;
extern guint g_int64_hash(gconstpointer v ) ;
extern gboolean g_double_equal(gconstpointer v1 , gconstpointer v2 ) ;
extern guint g_double_hash(gconstpointer v ) ;
extern guint g_direct_hash(gconstpointer v )  __attribute__((__const__)) ;
extern gboolean g_direct_equal(gconstpointer v1 , gconstpointer v2 )  __attribute__((__const__)) ;
extern void g_hook_list_init(GHookList *hook_list , guint hook_size ) ;
extern void g_hook_list_clear(GHookList *hook_list ) ;
extern GHook *g_hook_alloc(GHookList *hook_list ) ;
extern void g_hook_free(GHookList *hook_list , GHook *hook ) ;
extern GHook *g_hook_ref(GHookList *hook_list , GHook *hook ) ;
extern void g_hook_unref(GHookList *hook_list , GHook *hook ) ;
extern gboolean g_hook_destroy(GHookList *hook_list , gulong hook_id ) ;
extern void g_hook_destroy_link(GHookList *hook_list , GHook *hook ) ;
extern void g_hook_prepend(GHookList *hook_list , GHook *hook ) ;
extern void g_hook_insert_before(GHookList *hook_list , GHook *sibling ,
                                 GHook *hook ) ;
extern void g_hook_insert_sorted(GHookList *hook_list , GHook *hook ,
                                 gint (*func)(GHook *new_hook , GHook *sibling ) ) ;
extern GHook *g_hook_get(GHookList *hook_list , gulong hook_id ) ;
extern GHook *g_hook_find(GHookList *hook_list , gboolean need_valids ,
                          gboolean (*func)(GHook *hook , gpointer data ) ,
                          gpointer data ) ;
extern GHook *g_hook_find_data(GHookList *hook_list , gboolean need_valids ,
                               gpointer data ) ;
extern GHook *g_hook_find_func(GHookList *hook_list , gboolean need_valids ,
                               gpointer func ) ;
extern GHook *g_hook_find_func_data(GHookList *hook_list ,
                                    gboolean need_valids , gpointer func ,
                                    gpointer data ) ;
extern GHook *g_hook_first_valid(GHookList *hook_list , gboolean may_be_in_call ) ;
extern GHook *g_hook_next_valid(GHookList *hook_list , GHook *hook ,
                                gboolean may_be_in_call ) ;
extern gint g_hook_compare_ids(GHook *new_hook , GHook *sibling ) ;
extern void g_hook_list_invoke(GHookList *hook_list , gboolean may_recurse ) ;
extern void g_hook_list_invoke_check(GHookList *hook_list ,
                                     gboolean may_recurse ) ;
extern void g_hook_list_marshal(GHookList *hook_list , gboolean may_recurse ,
                                void (*marshaller)(GHook *hook ,
                                                   gpointer marshal_data ) ,
                                gpointer marshal_data ) ;
extern void g_hook_list_marshal_check(GHookList *hook_list ,
                                      gboolean may_recurse ,
                                      gboolean (*marshaller)(GHook *hook ,
                                                             gpointer marshal_data ) ,
                                      gpointer marshal_data ) ;
extern gboolean g_hostname_is_non_ascii(gchar const   *hostname ) ;
extern gboolean g_hostname_is_ascii_encoded(gchar const   *hostname ) ;
extern gboolean g_hostname_is_ip_address(gchar const   *hostname ) ;
extern gchar *g_hostname_to_ascii(gchar const   *hostname ) ;
extern gchar *g_hostname_to_unicode(gchar const   *hostname ) ;
extern gint g_poll(GPollFD *fds , guint nfds , gint timeout ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_alloc)(void) ;
extern void g_slist_free(GSList *list ) ;
extern void g_slist_free_1(GSList *list ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_append)(GSList *list ,
                                                                         gpointer data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_prepend)(GSList *list ,
                                                                          gpointer data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_insert)(GSList *list ,
                                                                         gpointer data ,
                                                                         gint position ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_insert_sorted)(GSList *list ,
                                                                                gpointer data ,
                                                                                gint (*func)(gconstpointer a ,
                                                                                             gconstpointer b ) ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_insert_sorted_with_data)(GSList *list ,
                                                                                          gpointer data ,
                                                                                          gint (*func)(gconstpointer a ,
                                                                                                       gconstpointer b ,
                                                                                                       gpointer user_data ) ,
                                                                                          gpointer user_data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_insert_before)(GSList *slist ,
                                                                                GSList *sibling ,
                                                                                gpointer data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_concat)(GSList *list1 ,
                                                                         GSList *list2 ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_remove)(GSList *list ,
                                                                         gconstpointer data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_remove_all)(GSList *list ,
                                                                             gconstpointer data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_remove_link)(GSList *list ,
                                                                              GSList *link_ ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_delete_link)(GSList *list ,
                                                                              GSList *link_ ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_reverse)(GSList *list ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_copy)(GSList *list ) ;
extern GSList *g_slist_nth(GSList *list , guint n ) ;
extern GSList *g_slist_find(GSList *list , gconstpointer data ) ;
extern GSList *g_slist_find_custom(GSList *list , gconstpointer data ,
                                   gint (*func)(gconstpointer a ,
                                                gconstpointer b ) ) ;
extern gint g_slist_position(GSList *list , GSList *llink ) ;
extern gint g_slist_index(GSList *list , gconstpointer data ) ;
extern GSList *g_slist_last(GSList *list ) ;
extern guint g_slist_length(GSList *list ) ;
extern void g_slist_foreach(GSList *list , void (*func)(gpointer data ,
                                                        gpointer user_data ) ,
                            gpointer user_data ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_sort)(GSList *list ,
                                                                       gint (*compare_func)(gconstpointer a ,
                                                                                            gconstpointer b ) ) ;
extern GSList *( __attribute__((__warn_unused_result__)) g_slist_sort_with_data)(GSList *list ,
                                                                                 gint (*compare_func)(gconstpointer a ,
                                                                                                      gconstpointer b ,
                                                                                                      gpointer user_data ) ,
                                                                                 gpointer user_data ) ;
extern gpointer g_slist_nth_data(GSList *list , guint n ) ;
extern void g_slist_push_allocator(gpointer dummy ) ;
extern void g_slist_pop_allocator(void) ;
extern GMainContext *g_main_context_new(void) ;
extern GMainContext *g_main_context_ref(GMainContext *context ) ;
extern void g_main_context_unref(GMainContext *context ) ;
extern GMainContext *g_main_context_default(void) ;
extern gboolean g_main_context_iteration(GMainContext *context ,
                                         gboolean may_block ) ;
extern gboolean g_main_context_pending(GMainContext *context ) ;
extern GSource *g_main_context_find_source_by_id(GMainContext *context ,
                                                 guint source_id ) ;
extern GSource *g_main_context_find_source_by_user_data(GMainContext *context ,
                                                        gpointer user_data ) ;
extern GSource *g_main_context_find_source_by_funcs_user_data(GMainContext *context ,
                                                              GSourceFuncs *funcs ,
                                                              gpointer user_data ) ;
extern void g_main_context_wakeup(GMainContext *context ) ;
extern gboolean g_main_context_acquire(GMainContext *context ) ;
extern void g_main_context_release(GMainContext *context ) ;
extern gboolean g_main_context_is_owner(GMainContext *context ) ;
extern gboolean g_main_context_wait(GMainContext *context , GCond *cond ,
                                    GMutex *mutex ) ;
extern gboolean g_main_context_prepare(GMainContext *context , gint *priority ) ;
extern gint g_main_context_query(GMainContext *context , gint max_priority ,
                                 gint *timeout_ , GPollFD *fds , gint n_fds ) ;
extern gint g_main_context_check(GMainContext *context , gint max_priority ,
                                 GPollFD *fds , gint n_fds ) ;
extern void g_main_context_dispatch(GMainContext *context ) ;
extern void g_main_context_set_poll_func(GMainContext *context ,
                                         gint (*func)(GPollFD *ufds ,
                                                      guint nfsd ,
                                                      gint timeout_ ) ) ;
extern GPollFunc g_main_context_get_poll_func(GMainContext *context ) ;
extern void g_main_context_add_poll(GMainContext *context , GPollFD *fd ,
                                    gint priority ) ;
extern void g_main_context_remove_poll(GMainContext *context , GPollFD *fd ) ;
extern gint g_main_depth(void) ;
extern GSource *g_main_current_source(void) ;
extern void g_main_context_push_thread_default(GMainContext *context ) ;
extern void g_main_context_pop_thread_default(GMainContext *context ) ;
extern GMainContext *g_main_context_get_thread_default(void) ;
extern GMainLoop *g_main_loop_new(GMainContext *context , gboolean is_running ) ;
extern void g_main_loop_run(GMainLoop *loop ) ;
extern void g_main_loop_quit(GMainLoop *loop ) ;
extern GMainLoop *g_main_loop_ref(GMainLoop *loop ) ;
extern void g_main_loop_unref(GMainLoop *loop ) ;
extern gboolean g_main_loop_is_running(GMainLoop *loop ) ;
extern GMainContext *g_main_loop_get_context(GMainLoop *loop ) ;
extern GSource *g_source_new(GSourceFuncs *source_funcs , guint struct_size ) ;
extern GSource *g_source_ref(GSource *source ) ;
extern void g_source_unref(GSource *source ) ;
extern guint g_source_attach(GSource *source , GMainContext *context ) ;
extern void g_source_destroy(GSource *source ) ;
extern void g_source_set_priority(GSource *source , gint priority ) ;
extern gint g_source_get_priority(GSource *source ) ;
extern void g_source_set_can_recurse(GSource *source , gboolean can_recurse ) ;
extern gboolean g_source_get_can_recurse(GSource *source ) ;
extern guint g_source_get_id(GSource *source ) ;
extern GMainContext *g_source_get_context(GSource *source ) ;
extern void g_source_set_callback(GSource *source ,
                                  gboolean (*func)(gpointer data ) ,
                                  gpointer data ,
                                  void (*notify)(gpointer data ) ) ;
extern void g_source_set_funcs(GSource *source , GSourceFuncs *funcs ) ;
extern gboolean g_source_is_destroyed(GSource *source ) ;
extern void g_source_set_callback_indirect(GSource *source ,
                                           gpointer callback_data ,
                                           GSourceCallbackFuncs *callback_funcs ) ;
extern void g_source_add_poll(GSource *source , GPollFD *fd ) ;
extern void g_source_remove_poll(GSource *source , GPollFD *fd ) ;
extern void g_source_get_current_time(GSource *source , GTimeVal *timeval ) ;
extern GSource *g_idle_source_new(void) ;
extern GSource *g_child_watch_source_new(GPid pid ) ;
extern GSource *g_timeout_source_new(guint interval ) ;
extern GSource *g_timeout_source_new_seconds(guint interval ) ;
extern void g_get_current_time(GTimeVal *result ) ;
extern gboolean g_source_remove(guint tag ) ;
extern gboolean g_source_remove_by_user_data(gpointer user_data ) ;
extern gboolean g_source_remove_by_funcs_user_data(GSourceFuncs *funcs ,
                                                   gpointer user_data ) ;
extern guint g_timeout_add_full(gint priority , guint interval ,
                                gboolean (*function)(gpointer data ) ,
                                gpointer data , void (*notify)(gpointer data ) ) ;
extern guint g_timeout_add(guint interval ,
                           gboolean (*function)(gpointer data ) , gpointer data ) ;
extern guint g_timeout_add_seconds_full(gint priority , guint interval ,
                                        gboolean (*function)(gpointer data ) ,
                                        gpointer data ,
                                        void (*notify)(gpointer data ) ) ;
extern guint g_timeout_add_seconds(guint interval ,
                                   gboolean (*function)(gpointer data ) ,
                                   gpointer data ) ;
extern guint g_child_watch_add_full(gint priority , GPid pid ,
                                    void (*function)(GPid pid , gint status ,
                                                     gpointer data ) ,
                                    gpointer data ,
                                    void (*notify)(gpointer data ) ) ;
extern guint g_child_watch_add(GPid pid , void (*function)(GPid pid ,
                                                           gint status ,
                                                           gpointer data ) ,
                               gpointer data ) ;
extern guint g_idle_add(gboolean (*function)(gpointer data ) , gpointer data ) ;
extern guint g_idle_add_full(gint priority ,
                             gboolean (*function)(gpointer data ) ,
                             gpointer data , void (*notify)(gpointer data ) ) ;
extern gboolean g_idle_remove_by_data(gpointer data ) ;
extern GSourceFuncs g_timeout_funcs ;
extern GSourceFuncs g_child_watch_funcs ;
extern GSourceFuncs g_idle_funcs ;
extern gboolean g_get_charset(char const   **charset ) ;
extern gboolean g_unichar_isalnum(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isalpha(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_iscntrl(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isdigit(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isgraph(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_islower(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isprint(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_ispunct(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isspace(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isupper(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isxdigit(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_istitle(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_isdefined(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_iswide(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_iswide_cjk(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_iszerowidth(gunichar c )  __attribute__((__const__)) ;
extern gboolean g_unichar_ismark(gunichar c )  __attribute__((__const__)) ;
extern gunichar g_unichar_toupper(gunichar c )  __attribute__((__const__)) ;
extern gunichar g_unichar_tolower(gunichar c )  __attribute__((__const__)) ;
extern gunichar g_unichar_totitle(gunichar c )  __attribute__((__const__)) ;
extern gint g_unichar_digit_value(gunichar c )  __attribute__((__const__)) ;
extern gint g_unichar_xdigit_value(gunichar c )  __attribute__((__const__)) ;
extern GUnicodeType g_unichar_type(gunichar c )  __attribute__((__const__)) ;
extern GUnicodeBreakType g_unichar_break_type(gunichar c )  __attribute__((__const__)) ;
extern gint g_unichar_combining_class(gunichar uc )  __attribute__((__const__)) ;
extern void g_unicode_canonical_ordering(gunichar *string , gsize len ) ;
extern gunichar *g_unicode_canonical_decomposition(gunichar ch ,
                                                   gsize *result_len )  __attribute__((__malloc__)) ;
extern gchar const   * const  g_utf8_skip ;
extern gunichar g_utf8_get_char(gchar const   *p )  __attribute__((__pure__)) ;
extern gunichar g_utf8_get_char_validated(gchar const   *p , gssize max_len )  __attribute__((__pure__)) ;
extern gchar *g_utf8_offset_to_pointer(gchar const   *str , glong offset )  __attribute__((__pure__)) ;
extern glong g_utf8_pointer_to_offset(gchar const   *str , gchar const   *pos )  __attribute__((__pure__)) ;
extern gchar *g_utf8_prev_char(gchar const   *p )  __attribute__((__pure__)) ;
extern gchar *g_utf8_find_next_char(gchar const   *p , gchar const   *end )  __attribute__((__pure__)) ;
extern gchar *g_utf8_find_prev_char(gchar const   *str , gchar const   *p )  __attribute__((__pure__)) ;
extern glong g_utf8_strlen(gchar const   *p , gssize max )  __attribute__((__pure__)) ;
extern gchar *g_utf8_strncpy(gchar *dest , gchar const   *src , gsize n ) ;
extern gchar *g_utf8_strchr(gchar const   *p , gssize len , gunichar c ) ;
extern gchar *g_utf8_strrchr(gchar const   *p , gssize len , gunichar c ) ;
extern gchar *g_utf8_strreverse(gchar const   *str , gssize len ) ;
extern gunichar2 *g_utf8_to_utf16(gchar const   *str , glong len ,
                                  glong *items_read , glong *items_written ,
                                  GError **error )  __attribute__((__malloc__)) ;
extern gunichar *g_utf8_to_ucs4(gchar const   *str , glong len ,
                                glong *items_read , glong *items_written ,
                                GError **error )  __attribute__((__malloc__)) ;
extern gunichar *g_utf8_to_ucs4_fast(gchar const   *str , glong len ,
                                     glong *items_written )  __attribute__((__malloc__)) ;
extern gunichar *g_utf16_to_ucs4(gunichar2 const   *str , glong len ,
                                 glong *items_read , glong *items_written ,
                                 GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_utf16_to_utf8(gunichar2 const   *str , glong len ,
                              glong *items_read , glong *items_written ,
                              GError **error )  __attribute__((__malloc__)) ;
extern gunichar2 *g_ucs4_to_utf16(gunichar const   *str , glong len ,
                                  glong *items_read , glong *items_written ,
                                  GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_ucs4_to_utf8(gunichar const   *str , glong len ,
                             glong *items_read , glong *items_written ,
                             GError **error )  __attribute__((__malloc__)) ;
extern gint g_unichar_to_utf8(gunichar c , gchar *outbuf ) ;
extern gboolean g_utf8_validate(gchar const   *str , gssize max_len ,
                                gchar const   **end ) ;
extern gboolean g_unichar_validate(gunichar ch )  __attribute__((__const__)) ;
extern gchar *g_utf8_strup(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gchar *g_utf8_strdown(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gchar *g_utf8_casefold(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gchar *g_utf8_normalize(gchar const   *str , gssize len ,
                               GNormalizeMode mode )  __attribute__((__malloc__)) ;
extern gint g_utf8_collate(gchar const   *str1 , gchar const   *str2 )  __attribute__((__pure__)) ;
extern gchar *g_utf8_collate_key(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gchar *g_utf8_collate_key_for_filename(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gboolean g_unichar_get_mirror_char(gunichar ch , gunichar *mirrored_ch ) ;
extern GUnicodeScript g_unichar_get_script(gunichar ch )  __attribute__((__const__)) ;
extern gchar *_g_utf8_make_valid(gchar const   *name ) ;
extern GStringChunk *g_string_chunk_new(gsize size ) ;
extern void g_string_chunk_free(GStringChunk *chunk ) ;
extern void g_string_chunk_clear(GStringChunk *chunk ) ;
extern gchar *g_string_chunk_insert(GStringChunk *chunk , gchar const   *string ) ;
extern gchar *g_string_chunk_insert_len(GStringChunk *chunk ,
                                        gchar const   *string , gssize len ) ;
extern gchar *g_string_chunk_insert_const(GStringChunk *chunk ,
                                          gchar const   *string ) ;
extern GString *g_string_new(gchar const   *init ) ;
extern GString *g_string_new_len(gchar const   *init , gssize len ) ;
extern GString *g_string_sized_new(gsize dfl_size ) ;
extern gchar *g_string_free(GString *string , gboolean free_segment ) ;
extern gboolean g_string_equal(GString const   *v , GString const   *v2 ) ;
extern guint g_string_hash(GString const   *str ) ;
extern GString *g_string_assign(GString *string , gchar const   *rval ) ;
extern GString *g_string_truncate(GString *string , gsize len ) ;
extern GString *g_string_set_size(GString *string , gsize len ) ;
extern GString *g_string_insert_len(GString *string , gssize pos ,
                                    gchar const   *val , gssize len ) ;
extern GString *g_string_append(GString *string , gchar const   *val ) ;
extern GString *g_string_append_len(GString *string , gchar const   *val ,
                                    gssize len ) ;
extern GString *g_string_append_c(GString *string , gchar c ) ;
extern GString *g_string_append_unichar(GString *string , gunichar wc ) ;
extern GString *g_string_prepend(GString *string , gchar const   *val ) ;
extern GString *g_string_prepend_c(GString *string , gchar c ) ;
extern GString *g_string_prepend_unichar(GString *string , gunichar wc ) ;
extern GString *g_string_prepend_len(GString *string , gchar const   *val ,
                                     gssize len ) ;
extern GString *g_string_insert(GString *string , gssize pos ,
                                gchar const   *val ) ;
extern GString *g_string_insert_c(GString *string , gssize pos , gchar c ) ;
extern GString *g_string_insert_unichar(GString *string , gssize pos ,
                                        gunichar wc ) ;
extern GString *g_string_overwrite(GString *string , gsize pos ,
                                   gchar const   *val ) ;
extern GString *g_string_overwrite_len(GString *string , gsize pos ,
                                       gchar const   *val , gssize len ) ;
extern GString *g_string_erase(GString *string , gssize pos , gssize len ) ;
extern GString *g_string_ascii_down(GString *string ) ;
extern GString *g_string_ascii_up(GString *string ) ;
extern void g_string_vprintf(GString *string , gchar const   *format ,
                             va_list args ) ;
extern void ( /* format attribute */  g_string_printf)(GString *string ,
                                                       gchar const   *format 
                                                       , ...) ;
extern void g_string_append_vprintf(GString *string , gchar const   *format ,
                                    va_list args ) ;
extern void ( /* format attribute */  g_string_append_printf)(GString *string ,
                                                              gchar const   *format 
                                                              , ...) ;
extern GString *g_string_append_uri_escaped(GString *string ,
                                            char const   *unescaped ,
                                            char const   *reserved_chars_allowed ,
                                            gboolean allow_utf8 ) ;
__inline static GString *g_string_append_c_inline(GString *gstring , gchar c ) 
{ 
  gsize tmp ;

  {
  if (gstring->len + 1U < gstring->allocated_len) {
    tmp = gstring->len;
    (gstring->len) ++;
    *(gstring->str + tmp) = c;
    *(gstring->str + gstring->len) = (gchar )0;
  } else {
    g_string_insert_c(gstring, -1, c);
  }
  return (gstring);
}
}
extern GString *g_string_down(GString *string ) ;
extern GString *g_string_up(GString *string ) ;
extern void g_io_channel_init(GIOChannel *channel ) ;
extern GIOChannel *g_io_channel_ref(GIOChannel *channel ) ;
extern void g_io_channel_unref(GIOChannel *channel ) ;
extern GIOError g_io_channel_read(GIOChannel *channel , gchar *buf ,
                                  gsize count , gsize *bytes_read ) ;
extern GIOError g_io_channel_write(GIOChannel *channel , gchar const   *buf ,
                                   gsize count , gsize *bytes_written ) ;
extern GIOError g_io_channel_seek(GIOChannel *channel , gint64 offset ,
                                  GSeekType type ) ;
extern void g_io_channel_close(GIOChannel *channel ) ;
extern GIOStatus g_io_channel_shutdown(GIOChannel *channel , gboolean flush ,
                                       GError **err ) ;
extern guint g_io_add_watch_full(GIOChannel *channel , gint priority ,
                                 GIOCondition condition ,
                                 gboolean (*func)(GIOChannel *source ,
                                                  GIOCondition condition ,
                                                  gpointer data ) ,
                                 gpointer user_data ,
                                 void (*notify)(gpointer data ) ) ;
extern GSource *g_io_create_watch(GIOChannel *channel , GIOCondition condition ) ;
extern guint g_io_add_watch(GIOChannel *channel , GIOCondition condition ,
                            gboolean (*func)(GIOChannel *source ,
                                             GIOCondition condition ,
                                             gpointer data ) ,
                            gpointer user_data ) ;
extern void g_io_channel_set_buffer_size(GIOChannel *channel , gsize size ) ;
extern gsize g_io_channel_get_buffer_size(GIOChannel *channel ) ;
extern GIOCondition g_io_channel_get_buffer_condition(GIOChannel *channel ) ;
extern GIOStatus g_io_channel_set_flags(GIOChannel *channel , GIOFlags flags ,
                                        GError **error ) ;
extern GIOFlags g_io_channel_get_flags(GIOChannel *channel ) ;
extern void g_io_channel_set_line_term(GIOChannel *channel ,
                                       gchar const   *line_term , gint length ) ;
extern gchar const   *g_io_channel_get_line_term(GIOChannel *channel ,
                                                 gint *length ) ;
extern void g_io_channel_set_buffered(GIOChannel *channel , gboolean buffered ) ;
extern gboolean g_io_channel_get_buffered(GIOChannel *channel ) ;
extern GIOStatus g_io_channel_set_encoding(GIOChannel *channel ,
                                           gchar const   *encoding ,
                                           GError **error ) ;
extern gchar const   *g_io_channel_get_encoding(GIOChannel *channel ) ;
extern void g_io_channel_set_close_on_unref(GIOChannel *channel ,
                                            gboolean do_close ) ;
extern gboolean g_io_channel_get_close_on_unref(GIOChannel *channel ) ;
extern GIOStatus g_io_channel_flush(GIOChannel *channel , GError **error ) ;
extern GIOStatus g_io_channel_read_line(GIOChannel *channel ,
                                        gchar **str_return , gsize *length ,
                                        gsize *terminator_pos , GError **error ) ;
extern GIOStatus g_io_channel_read_line_string(GIOChannel *channel ,
                                               GString *buffer ,
                                               gsize *terminator_pos ,
                                               GError **error ) ;
extern GIOStatus g_io_channel_read_to_end(GIOChannel *channel ,
                                          gchar **str_return , gsize *length ,
                                          GError **error ) ;
extern GIOStatus g_io_channel_read_chars(GIOChannel *channel , gchar *buf ,
                                         gsize count , gsize *bytes_read ,
                                         GError **error ) ;
extern GIOStatus g_io_channel_read_unichar(GIOChannel *channel ,
                                           gunichar *thechar , GError **error ) ;
extern GIOStatus g_io_channel_write_chars(GIOChannel *channel ,
                                          gchar const   *buf , gssize count ,
                                          gsize *bytes_written , GError **error ) ;
extern GIOStatus g_io_channel_write_unichar(GIOChannel *channel ,
                                            gunichar thechar , GError **error ) ;
extern GIOStatus g_io_channel_seek_position(GIOChannel *channel ,
                                            gint64 offset , GSeekType type ,
                                            GError **error ) ;
extern GIOChannel *g_io_channel_new_file(gchar const   *filename ,
                                         gchar const   *mode , GError **error ) ;
extern GQuark g_io_channel_error_quark(void) ;
extern GIOChannelError g_io_channel_error_from_errno(gint en ) ;
extern GIOChannel *g_io_channel_unix_new(int fd ) ;
extern gint g_io_channel_unix_get_fd(GIOChannel *channel ) ;
extern GSourceFuncs g_io_watch_funcs ;
extern GQuark g_key_file_error_quark(void) ;
extern GKeyFile *g_key_file_new(void) ;
extern void g_key_file_free(GKeyFile *key_file ) ;
extern void g_key_file_set_list_separator(GKeyFile *key_file , gchar separator ) ;
extern gboolean g_key_file_load_from_file(GKeyFile *key_file ,
                                          gchar const   *file ,
                                          GKeyFileFlags flags , GError **error ) ;
extern gboolean g_key_file_load_from_data(GKeyFile *key_file ,
                                          gchar const   *data , gsize length ,
                                          GKeyFileFlags flags , GError **error ) ;
extern gboolean g_key_file_load_from_dirs(GKeyFile *key_file ,
                                          gchar const   *file ,
                                          gchar const   **search_dirs ,
                                          gchar **full_path ,
                                          GKeyFileFlags flags , GError **error ) ;
extern gboolean g_key_file_load_from_data_dirs(GKeyFile *key_file ,
                                               gchar const   *file ,
                                               gchar **full_path ,
                                               GKeyFileFlags flags ,
                                               GError **error ) ;
extern gchar *g_key_file_to_data(GKeyFile *key_file , gsize *length ,
                                 GError **error )  __attribute__((__malloc__)) ;
extern gchar *g_key_file_get_start_group(GKeyFile *key_file )  __attribute__((__malloc__)) ;
extern gchar **g_key_file_get_groups(GKeyFile *key_file , gsize *length )  __attribute__((__malloc__)) ;
extern gchar **g_key_file_get_keys(GKeyFile *key_file ,
                                   gchar const   *group_name , gsize *length ,
                                   GError **error )  __attribute__((__malloc__)) ;
extern gboolean g_key_file_has_group(GKeyFile *key_file ,
                                     gchar const   *group_name ) ;
extern gboolean g_key_file_has_key(GKeyFile *key_file ,
                                   gchar const   *group_name ,
                                   gchar const   *key , GError **error ) ;
extern gchar *g_key_file_get_value(GKeyFile *key_file ,
                                   gchar const   *group_name ,
                                   gchar const   *key , GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_value(GKeyFile *key_file ,
                                 gchar const   *group_name ,
                                 gchar const   *key , gchar const   *value ) ;
extern gchar *g_key_file_get_string(GKeyFile *key_file ,
                                    gchar const   *group_name ,
                                    gchar const   *key , GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_string(GKeyFile *key_file ,
                                  gchar const   *group_name ,
                                  gchar const   *key , gchar const   *string ) ;
extern gchar *g_key_file_get_locale_string(GKeyFile *key_file ,
                                           gchar const   *group_name ,
                                           gchar const   *key ,
                                           gchar const   *locale ,
                                           GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_locale_string(GKeyFile *key_file ,
                                         gchar const   *group_name ,
                                         gchar const   *key ,
                                         gchar const   *locale ,
                                         gchar const   *string ) ;
extern gboolean g_key_file_get_boolean(GKeyFile *key_file ,
                                       gchar const   *group_name ,
                                       gchar const   *key , GError **error ) ;
extern void g_key_file_set_boolean(GKeyFile *key_file ,
                                   gchar const   *group_name ,
                                   gchar const   *key , gboolean value ) ;
extern gint g_key_file_get_integer(GKeyFile *key_file ,
                                   gchar const   *group_name ,
                                   gchar const   *key , GError **error ) ;
extern void g_key_file_set_integer(GKeyFile *key_file ,
                                   gchar const   *group_name ,
                                   gchar const   *key , gint value ) ;
extern gdouble g_key_file_get_double(GKeyFile *key_file ,
                                     gchar const   *group_name ,
                                     gchar const   *key , GError **error ) ;
extern void g_key_file_set_double(GKeyFile *key_file ,
                                  gchar const   *group_name ,
                                  gchar const   *key , gdouble value ) ;
extern gchar **g_key_file_get_string_list(GKeyFile *key_file ,
                                          gchar const   *group_name ,
                                          gchar const   *key , gsize *length ,
                                          GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_string_list(GKeyFile *key_file ,
                                       gchar const   *group_name ,
                                       gchar const   *key ,
                                       gchar const   * const  *list ,
                                       gsize length ) ;
extern gchar **g_key_file_get_locale_string_list(GKeyFile *key_file ,
                                                 gchar const   *group_name ,
                                                 gchar const   *key ,
                                                 gchar const   *locale ,
                                                 gsize *length , GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_locale_string_list(GKeyFile *key_file ,
                                              gchar const   *group_name ,
                                              gchar const   *key ,
                                              gchar const   *locale ,
                                              gchar const   * const  *list ,
                                              gsize length ) ;
extern gboolean *g_key_file_get_boolean_list(GKeyFile *key_file ,
                                             gchar const   *group_name ,
                                             gchar const   *key ,
                                             gsize *length , GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_boolean_list(GKeyFile *key_file ,
                                        gchar const   *group_name ,
                                        gchar const   *key , gboolean *list ,
                                        gsize length ) ;
extern gint *g_key_file_get_integer_list(GKeyFile *key_file ,
                                         gchar const   *group_name ,
                                         gchar const   *key , gsize *length ,
                                         GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_double_list(GKeyFile *key_file ,
                                       gchar const   *group_name ,
                                       gchar const   *key , gdouble *list ,
                                       gsize length ) ;
extern gdouble *g_key_file_get_double_list(GKeyFile *key_file ,
                                           gchar const   *group_name ,
                                           gchar const   *key , gsize *length ,
                                           GError **error )  __attribute__((__malloc__)) ;
extern void g_key_file_set_integer_list(GKeyFile *key_file ,
                                        gchar const   *group_name ,
                                        gchar const   *key , gint *list ,
                                        gsize length ) ;
extern gboolean g_key_file_set_comment(GKeyFile *key_file ,
                                       gchar const   *group_name ,
                                       gchar const   *key ,
                                       gchar const   *comment , GError **error ) ;
extern gchar *g_key_file_get_comment(GKeyFile *key_file ,
                                     gchar const   *group_name ,
                                     gchar const   *key , GError **error )  __attribute__((__malloc__)) ;
extern gboolean g_key_file_remove_comment(GKeyFile *key_file ,
                                          gchar const   *group_name ,
                                          gchar const   *key , GError **error ) ;
extern gboolean g_key_file_remove_key(GKeyFile *key_file ,
                                      gchar const   *group_name ,
                                      gchar const   *key , GError **error ) ;
extern gboolean g_key_file_remove_group(GKeyFile *key_file ,
                                        gchar const   *group_name ,
                                        GError **error ) ;
extern GMappedFile *g_mapped_file_new(gchar const   *filename ,
                                      gboolean writable , GError **error )  __attribute__((__malloc__)) ;
extern gsize g_mapped_file_get_length(GMappedFile *file ) ;
extern gchar *g_mapped_file_get_contents(GMappedFile *file ) ;
extern GMappedFile *g_mapped_file_ref(GMappedFile *file ) ;
extern void g_mapped_file_unref(GMappedFile *file ) ;
extern void g_mapped_file_free(GMappedFile *file ) ;
extern GQuark g_markup_error_quark(void) ;
extern GMarkupParseContext *g_markup_parse_context_new(GMarkupParser const   *parser ,
                                                       GMarkupParseFlags flags ,
                                                       gpointer user_data ,
                                                       void (*user_data_dnotify)(gpointer data ) ) ;
extern void g_markup_parse_context_free(GMarkupParseContext *context ) ;
extern gboolean g_markup_parse_context_parse(GMarkupParseContext *context ,
                                             gchar const   *text ,
                                             gssize text_len , GError **error ) ;
extern void g_markup_parse_context_push(GMarkupParseContext *context ,
                                        GMarkupParser *parser ,
                                        gpointer user_data ) ;
extern gpointer g_markup_parse_context_pop(GMarkupParseContext *context ) ;
extern gboolean g_markup_parse_context_end_parse(GMarkupParseContext *context ,
                                                 GError **error ) ;
extern gchar const   *g_markup_parse_context_get_element(GMarkupParseContext *context ) ;
extern GSList const   *g_markup_parse_context_get_element_stack(GMarkupParseContext *context ) ;
extern void g_markup_parse_context_get_position(GMarkupParseContext *context ,
                                                gint *line_number ,
                                                gint *char_number ) ;
extern gpointer g_markup_parse_context_get_user_data(GMarkupParseContext *context ) ;
extern gchar *g_markup_escape_text(gchar const   *text , gssize length ) ;
extern gchar *( /* format attribute */  g_markup_printf_escaped)(char const   *format 
                                                                 , ...) ;
extern gchar *g_markup_vprintf_escaped(char const   *format , va_list args ) ;
extern gboolean g_markup_collect_attributes(gchar const   *element_name ,
                                            gchar const   **attribute_names ,
                                            gchar const   **attribute_values ,
                                            GError **error ,
                                            GMarkupCollectType first_type ,
                                            gchar const   *first_attr  , ...) ;
extern gsize g_printf_string_upper_bound(gchar const   *format , va_list args ) ;
extern guint g_log_set_handler(gchar const   *log_domain ,
                               GLogLevelFlags log_levels ,
                               void (*log_func)(gchar const   *log_domain ,
                                                GLogLevelFlags log_level ,
                                                gchar const   *message ,
                                                gpointer user_data ) ,
                               gpointer user_data ) ;
extern void g_log_remove_handler(gchar const   *log_domain , guint handler_id ) ;
extern void g_log_default_handler(gchar const   *log_domain ,
                                  GLogLevelFlags log_level ,
                                  gchar const   *message , gpointer unused_data ) ;
extern GLogFunc g_log_set_default_handler(void (*log_func)(gchar const   *log_domain ,
                                                           GLogLevelFlags log_level ,
                                                           gchar const   *message ,
                                                           gpointer user_data ) ,
                                          gpointer user_data ) ;
extern void ( /* format attribute */  g_log)(gchar const   *log_domain ,
                                             GLogLevelFlags log_level ,
                                             gchar const   *format  , ...) ;
extern void g_logv(gchar const   *log_domain , GLogLevelFlags log_level ,
                   gchar const   *format , va_list args ) ;
extern GLogLevelFlags g_log_set_fatal_mask(gchar const   *log_domain ,
                                           GLogLevelFlags fatal_mask ) ;
extern GLogLevelFlags g_log_set_always_fatal(GLogLevelFlags fatal_mask ) ;
extern void __attribute__((__visibility__("hidden")))  _g_log_fallback_handler(gchar const   *log_domain ,
                                                                               GLogLevelFlags log_level ,
                                                                               gchar const   *message ,
                                                                               gpointer unused_data ) ;
extern void g_return_if_fail_warning(char const   *log_domain ,
                                     char const   *pretty_function ,
                                     char const   *expression ) ;
extern void g_warn_message(char const   *domain , char const   *file ,
                           int line , char const   *func ,
                           char const   *warnexpr ) ;
extern  __attribute__((__noreturn__)) void g_assert_warning(char const   *log_domain ,
                                                            char const   *file ,
                                                            int const   line ,
                                                            char const   *pretty_function ,
                                                            char const   *expression ) ;
extern void ( /* format attribute */  g_print)(gchar const   *format  , ...) ;
extern GPrintFunc g_set_print_handler(void (*func)(gchar const   *string ) ) ;
extern void ( /* format attribute */  g_printerr)(gchar const   *format  , ...) ;
extern GPrintFunc g_set_printerr_handler(void (*func)(gchar const   *string ) ) ;
extern GNode *g_node_new(gpointer data ) ;
extern void g_node_destroy(GNode *root ) ;
extern void g_node_unlink(GNode *node ) ;
extern GNode *g_node_copy_deep(GNode *node ,
                               gpointer (*copy_func)(gconstpointer src ,
                                                     gpointer data ) ,
                               gpointer data ) ;
extern GNode *g_node_copy(GNode *node ) ;
extern GNode *g_node_insert(GNode *parent , gint position , GNode *node ) ;
extern GNode *g_node_insert_before(GNode *parent , GNode *sibling , GNode *node ) ;
extern GNode *g_node_insert_after(GNode *parent , GNode *sibling , GNode *node ) ;
extern GNode *g_node_prepend(GNode *parent , GNode *node ) ;
extern guint g_node_n_nodes(GNode *root , GTraverseFlags flags ) ;
extern GNode *g_node_get_root(GNode *node ) ;
extern gboolean g_node_is_ancestor(GNode *node , GNode *descendant ) ;
extern guint g_node_depth(GNode *node ) ;
extern GNode *g_node_find(GNode *root , GTraverseType order ,
                          GTraverseFlags flags , gpointer data ) ;
extern void g_node_traverse(GNode *root , GTraverseType order ,
                            GTraverseFlags flags , gint max_depth ,
                            gboolean (*func)(GNode *node , gpointer data ) ,
                            gpointer data ) ;
extern guint g_node_max_height(GNode *root ) ;
extern void g_node_children_foreach(GNode *node , GTraverseFlags flags ,
                                    void (*func)(GNode *node , gpointer data ) ,
                                    gpointer data ) ;
extern void g_node_reverse_children(GNode *node ) ;
extern guint g_node_n_children(GNode *node ) ;
extern GNode *g_node_nth_child(GNode *node , guint n ) ;
extern GNode *g_node_last_child(GNode *node ) ;
extern GNode *g_node_find_child(GNode *node , GTraverseFlags flags ,
                                gpointer data ) ;
extern gint g_node_child_position(GNode *node , GNode *child ) ;
extern gint g_node_child_index(GNode *node , gpointer data ) ;
extern GNode *g_node_first_sibling(GNode *node ) ;
extern GNode *g_node_last_sibling(GNode *node ) ;
extern void g_node_push_allocator(gpointer dummy ) ;
extern void g_node_pop_allocator(void) ;
extern GQuark g_option_error_quark(void) ;
extern GOptionContext *g_option_context_new(gchar const   *parameter_string ) ;
extern void g_option_context_set_summary(GOptionContext *context ,
                                         gchar const   *summary ) ;
extern gchar const   *g_option_context_get_summary(GOptionContext *context ) ;
extern void g_option_context_set_description(GOptionContext *context ,
                                             gchar const   *description ) ;
extern gchar const   *g_option_context_get_description(GOptionContext *context ) ;
extern void g_option_context_free(GOptionContext *context ) ;
extern void g_option_context_set_help_enabled(GOptionContext *context ,
                                              gboolean help_enabled ) ;
extern gboolean g_option_context_get_help_enabled(GOptionContext *context ) ;
extern void g_option_context_set_ignore_unknown_options(GOptionContext *context ,
                                                        gboolean ignore_unknown ) ;
extern gboolean g_option_context_get_ignore_unknown_options(GOptionContext *context ) ;
extern void g_option_context_add_main_entries(GOptionContext *context ,
                                              GOptionEntry const   *entries ,
                                              gchar const   *translation_domain ) ;
extern gboolean g_option_context_parse(GOptionContext *context , gint *argc ,
                                       gchar ***argv , GError **error ) ;
extern void g_option_context_set_translate_func(GOptionContext *context ,
                                                gchar const   *(*func)(gchar const   *str ,
                                                                       gpointer data ) ,
                                                gpointer data ,
                                                void (*destroy_notify)(gpointer data ) ) ;
extern void g_option_context_set_translation_domain(GOptionContext *context ,
                                                    gchar const   *domain ) ;
extern void g_option_context_add_group(GOptionContext *context ,
                                       GOptionGroup *group ) ;
extern void g_option_context_set_main_group(GOptionContext *context ,
                                            GOptionGroup *group ) ;
extern GOptionGroup *g_option_context_get_main_group(GOptionContext *context ) ;
extern gchar *g_option_context_get_help(GOptionContext *context ,
                                        gboolean main_help ,
                                        GOptionGroup *group ) ;
extern GOptionGroup *g_option_group_new(gchar const   *name ,
                                        gchar const   *description ,
                                        gchar const   *help_description ,
                                        gpointer user_data ,
                                        void (*destroy)(gpointer data ) ) ;
extern void g_option_group_set_parse_hooks(GOptionGroup *group ,
                                           gboolean (*pre_parse_func)(GOptionContext *context ,
                                                                      GOptionGroup *group ,
                                                                      gpointer data ,
                                                                      GError **error ) ,
                                           gboolean (*post_parse_func)(GOptionContext *context ,
                                                                       GOptionGroup *group ,
                                                                       gpointer data ,
                                                                       GError **error ) ) ;
extern void g_option_group_set_error_hook(GOptionGroup *group ,
                                          void (*error_func)(GOptionContext *context ,
                                                             GOptionGroup *group ,
                                                             gpointer data ,
                                                             GError **error ) ) ;
extern void g_option_group_free(GOptionGroup *group ) ;
extern void g_option_group_add_entries(GOptionGroup *group ,
                                       GOptionEntry const   *entries ) ;
extern void g_option_group_set_translate_func(GOptionGroup *group ,
                                              gchar const   *(*func)(gchar const   *str ,
                                                                     gpointer data ) ,
                                              gpointer data ,
                                              void (*destroy_notify)(gpointer data ) ) ;
extern void g_option_group_set_translation_domain(GOptionGroup *group ,
                                                  gchar const   *domain ) ;
extern GPatternSpec *g_pattern_spec_new(gchar const   *pattern ) ;
extern void g_pattern_spec_free(GPatternSpec *pspec ) ;
extern gboolean g_pattern_spec_equal(GPatternSpec *pspec1 ,
                                     GPatternSpec *pspec2 ) ;
extern gboolean g_pattern_match(GPatternSpec *pspec , guint string_length ,
                                gchar const   *string ,
                                gchar const   *string_reversed ) ;
extern gboolean g_pattern_match_string(GPatternSpec *pspec ,
                                       gchar const   *string ) ;
extern gboolean g_pattern_match_simple(gchar const   *pattern ,
                                       gchar const   *string ) ;
extern guint g_spaced_primes_closest(guint num )  __attribute__((__const__)) ;
extern void g_qsort_with_data(gconstpointer pbase , gint total_elems ,
                              gsize size ,
                              gint (*compare_func)(gconstpointer a ,
                                                   gconstpointer b ,
                                                   gpointer user_data ) ,
                              gpointer user_data ) ;
extern GQueue *g_queue_new(void) ;
extern void g_queue_free(GQueue *queue ) ;
extern void g_queue_init(GQueue *queue ) ;
extern void g_queue_clear(GQueue *queue ) ;
extern gboolean g_queue_is_empty(GQueue *queue ) ;
extern guint g_queue_get_length(GQueue *queue ) ;
extern void g_queue_reverse(GQueue *queue ) ;
extern GQueue *g_queue_copy(GQueue *queue ) ;
extern void g_queue_foreach(GQueue *queue , void (*func)(gpointer data ,
                                                         gpointer user_data ) ,
                            gpointer user_data ) ;
extern GList *g_queue_find(GQueue *queue , gconstpointer data ) ;
extern GList *g_queue_find_custom(GQueue *queue , gconstpointer data ,
                                  gint (*func)(gconstpointer a ,
                                               gconstpointer b ) ) ;
extern void g_queue_sort(GQueue *queue ,
                         gint (*compare_func)(gconstpointer a ,
                                              gconstpointer b ,
                                              gpointer user_data ) ,
                         gpointer user_data ) ;
extern void g_queue_push_head(GQueue *queue , gpointer data ) ;
extern void g_queue_push_tail(GQueue *queue , gpointer data ) ;
extern void g_queue_push_nth(GQueue *queue , gpointer data , gint n ) ;
extern gpointer g_queue_pop_head(GQueue *queue ) ;
extern gpointer g_queue_pop_tail(GQueue *queue ) ;
extern gpointer g_queue_pop_nth(GQueue *queue , guint n ) ;
extern gpointer g_queue_peek_head(GQueue *queue ) ;
extern gpointer g_queue_peek_tail(GQueue *queue ) ;
extern gpointer g_queue_peek_nth(GQueue *queue , guint n ) ;
extern gint g_queue_index(GQueue *queue , gconstpointer data ) ;
extern void g_queue_remove(GQueue *queue , gconstpointer data ) ;
extern void g_queue_remove_all(GQueue *queue , gconstpointer data ) ;
extern void g_queue_insert_before(GQueue *queue , GList *sibling ,
                                  gpointer data ) ;
extern void g_queue_insert_after(GQueue *queue , GList *sibling , gpointer data ) ;
extern void g_queue_insert_sorted(GQueue *queue , gpointer data ,
                                  gint (*func)(gconstpointer a ,
                                               gconstpointer b ,
                                               gpointer user_data ) ,
                                  gpointer user_data ) ;
extern void g_queue_push_head_link(GQueue *queue , GList *link_ ) ;
extern void g_queue_push_tail_link(GQueue *queue , GList *link_ ) ;
extern void g_queue_push_nth_link(GQueue *queue , gint n , GList *link_ ) ;
extern GList *g_queue_pop_head_link(GQueue *queue ) ;
extern GList *g_queue_pop_tail_link(GQueue *queue ) ;
extern GList *g_queue_pop_nth_link(GQueue *queue , guint n ) ;
extern GList *g_queue_peek_head_link(GQueue *queue ) ;
extern GList *g_queue_peek_tail_link(GQueue *queue ) ;
extern GList *g_queue_peek_nth_link(GQueue *queue , guint n ) ;
extern gint g_queue_link_index(GQueue *queue , GList *link_ ) ;
extern void g_queue_unlink(GQueue *queue , GList *link_ ) ;
extern void g_queue_delete_link(GQueue *queue , GList *link_ ) ;
extern GRand *g_rand_new_with_seed(guint32 seed ) ;
extern GRand *g_rand_new_with_seed_array(guint32 const   *seed ,
                                         guint seed_length ) ;
extern GRand *g_rand_new(void) ;
extern void g_rand_free(GRand *rand_ ) ;
extern GRand *g_rand_copy(GRand *rand_ ) ;
extern void g_rand_set_seed(GRand *rand_ , guint32 seed ) ;
extern void g_rand_set_seed_array(GRand *rand_ , guint32 const   *seed ,
                                  guint seed_length ) ;
extern guint32 g_rand_int(GRand *rand_ ) ;
extern gint32 g_rand_int_range(GRand *rand_ , gint32 begin , gint32 end ) ;
extern gdouble g_rand_double(GRand *rand_ ) ;
extern gdouble g_rand_double_range(GRand *rand_ , gdouble begin , gdouble end ) ;
extern void g_random_set_seed(guint32 seed ) ;
extern guint32 g_random_int(void) ;
extern gint32 g_random_int_range(gint32 begin , gint32 end ) ;
extern gdouble g_random_double(void) ;
extern gdouble g_random_double_range(gdouble begin , gdouble end ) ;
extern GRelation *g_relation_new(gint fields ) ;
extern void g_relation_destroy(GRelation *relation ) ;
extern void g_relation_index(GRelation *relation , gint field ,
                             guint (*hash_func)(gconstpointer key ) ,
                             gboolean (*key_equal_func)(gconstpointer a ,
                                                        gconstpointer b ) ) ;
extern void g_relation_insert(GRelation *relation  , ...) ;
extern gint g_relation_delete(GRelation *relation , gconstpointer key ,
                              gint field ) ;
extern GTuples *g_relation_select(GRelation *relation , gconstpointer key ,
                                  gint field ) ;
extern gint g_relation_count(GRelation *relation , gconstpointer key ,
                             gint field ) ;
extern gboolean g_relation_exists(GRelation *relation  , ...) ;
extern void g_relation_print(GRelation *relation ) ;
extern void g_tuples_destroy(GTuples *tuples ) ;
extern gpointer g_tuples_index(GTuples *tuples , gint index_ , gint field ) ;
extern GQuark g_regex_error_quark(void) ;
extern GRegex *g_regex_new(gchar const   *pattern ,
                           GRegexCompileFlags compile_options ,
                           GRegexMatchFlags match_options , GError **error ) ;
extern GRegex *g_regex_ref(GRegex *regex ) ;
extern void g_regex_unref(GRegex *regex ) ;
extern gchar const   *g_regex_get_pattern(GRegex const   *regex ) ;
extern gint g_regex_get_max_backref(GRegex const   *regex ) ;
extern gint g_regex_get_capture_count(GRegex const   *regex ) ;
extern gint g_regex_get_string_number(GRegex const   *regex ,
                                      gchar const   *name ) ;
extern gchar *g_regex_escape_string(gchar const   *string , gint length ) ;
extern gboolean g_regex_match_simple(gchar const   *pattern ,
                                     gchar const   *string ,
                                     GRegexCompileFlags compile_options ,
                                     GRegexMatchFlags match_options ) ;
extern gboolean g_regex_match(GRegex const   *regex , gchar const   *string ,
                              GRegexMatchFlags match_options ,
                              GMatchInfo **match_info ) ;
extern gboolean g_regex_match_full(GRegex const   *regex ,
                                   gchar const   *string , gssize string_len ,
                                   gint start_position ,
                                   GRegexMatchFlags match_options ,
                                   GMatchInfo **match_info , GError **error ) ;
extern gboolean g_regex_match_all(GRegex const   *regex ,
                                  gchar const   *string ,
                                  GRegexMatchFlags match_options ,
                                  GMatchInfo **match_info ) ;
extern gboolean g_regex_match_all_full(GRegex const   *regex ,
                                       gchar const   *string ,
                                       gssize string_len , gint start_position ,
                                       GRegexMatchFlags match_options ,
                                       GMatchInfo **match_info , GError **error ) ;
extern gchar **g_regex_split_simple(gchar const   *pattern ,
                                    gchar const   *string ,
                                    GRegexCompileFlags compile_options ,
                                    GRegexMatchFlags match_options ) ;
extern gchar **g_regex_split(GRegex const   *regex , gchar const   *string ,
                             GRegexMatchFlags match_options ) ;
extern gchar **g_regex_split_full(GRegex const   *regex ,
                                  gchar const   *string , gssize string_len ,
                                  gint start_position ,
                                  GRegexMatchFlags match_options ,
                                  gint max_tokens , GError **error ) ;
extern gchar *g_regex_replace(GRegex const   *regex , gchar const   *string ,
                              gssize string_len , gint start_position ,
                              gchar const   *replacement ,
                              GRegexMatchFlags match_options , GError **error ) ;
extern gchar *g_regex_replace_literal(GRegex const   *regex ,
                                      gchar const   *string ,
                                      gssize string_len , gint start_position ,
                                      gchar const   *replacement ,
                                      GRegexMatchFlags match_options ,
                                      GError **error ) ;
extern gchar *g_regex_replace_eval(GRegex const   *regex ,
                                   gchar const   *string , gssize string_len ,
                                   gint start_position ,
                                   GRegexMatchFlags match_options ,
                                   gboolean (*eval)(GMatchInfo const   *match_info ,
                                                    GString *result ,
                                                    gpointer user_data ) ,
                                   gpointer user_data , GError **error ) ;
extern gboolean g_regex_check_replacement(gchar const   *replacement ,
                                          gboolean *has_references ,
                                          GError **error ) ;
extern GRegex *g_match_info_get_regex(GMatchInfo const   *match_info ) ;
extern gchar const   *g_match_info_get_string(GMatchInfo const   *match_info ) ;
extern void g_match_info_free(GMatchInfo *match_info ) ;
extern gboolean g_match_info_next(GMatchInfo *match_info , GError **error ) ;
extern gboolean g_match_info_matches(GMatchInfo const   *match_info ) ;
extern gint g_match_info_get_match_count(GMatchInfo const   *match_info ) ;
extern gboolean g_match_info_is_partial_match(GMatchInfo const   *match_info ) ;
extern gchar *g_match_info_expand_references(GMatchInfo const   *match_info ,
                                             gchar const   *string_to_expand ,
                                             GError **error ) ;
extern gchar *g_match_info_fetch(GMatchInfo const   *match_info ,
                                 gint match_num ) ;
extern gboolean g_match_info_fetch_pos(GMatchInfo const   *match_info ,
                                       gint match_num , gint *start_pos ,
                                       gint *end_pos ) ;
extern gchar *g_match_info_fetch_named(GMatchInfo const   *match_info ,
                                       gchar const   *name ) ;
extern gboolean g_match_info_fetch_named_pos(GMatchInfo const   *match_info ,
                                             gchar const   *name ,
                                             gint *start_pos , gint *end_pos ) ;
extern gchar **g_match_info_fetch_all(GMatchInfo const   *match_info ) ;
extern GScanner *g_scanner_new(GScannerConfig const   *config_templ ) ;
extern void g_scanner_destroy(GScanner *scanner ) ;
extern void g_scanner_input_file(GScanner *scanner , gint input_fd ) ;
extern void g_scanner_sync_file_offset(GScanner *scanner ) ;
extern void g_scanner_input_text(GScanner *scanner , gchar const   *text ,
                                 guint text_len ) ;
extern GTokenType g_scanner_get_next_token(GScanner *scanner ) ;
extern GTokenType g_scanner_peek_next_token(GScanner *scanner ) ;
extern GTokenType g_scanner_cur_token(GScanner *scanner ) ;
extern GTokenValue g_scanner_cur_value(GScanner *scanner ) ;
extern guint g_scanner_cur_line(GScanner *scanner ) ;
extern guint g_scanner_cur_position(GScanner *scanner ) ;
extern gboolean g_scanner_eof(GScanner *scanner ) ;
extern guint g_scanner_set_scope(GScanner *scanner , guint scope_id ) ;
extern void g_scanner_scope_add_symbol(GScanner *scanner , guint scope_id ,
                                       gchar const   *symbol , gpointer value ) ;
extern void g_scanner_scope_remove_symbol(GScanner *scanner , guint scope_id ,
                                          gchar const   *symbol ) ;
extern gpointer g_scanner_scope_lookup_symbol(GScanner *scanner ,
                                              guint scope_id ,
                                              gchar const   *symbol ) ;
extern void g_scanner_scope_foreach_symbol(GScanner *scanner , guint scope_id ,
                                           void (*func)(gpointer key ,
                                                        gpointer value ,
                                                        gpointer user_data ) ,
                                           gpointer user_data ) ;
extern gpointer g_scanner_lookup_symbol(GScanner *scanner ,
                                        gchar const   *symbol ) ;
extern void g_scanner_unexp_token(GScanner *scanner ,
                                  GTokenType expected_token ,
                                  gchar const   *identifier_spec ,
                                  gchar const   *symbol_spec ,
                                  gchar const   *symbol_name ,
                                  gchar const   *message , gint is_error ) ;
extern void ( /* format attribute */  g_scanner_error)(GScanner *scanner ,
                                                       gchar const   *format 
                                                       , ...) ;
extern void ( /* format attribute */  g_scanner_warn)(GScanner *scanner ,
                                                      gchar const   *format 
                                                      , ...) ;
extern GSequence *g_sequence_new(void (*data_destroy)(gpointer data ) ) ;
extern void g_sequence_free(GSequence *seq ) ;
extern gint g_sequence_get_length(GSequence *seq ) ;
extern void g_sequence_foreach(GSequence *seq ,
                               void (*func)(gpointer data , gpointer user_data ) ,
                               gpointer user_data ) ;
extern void g_sequence_foreach_range(GSequenceIter *begin , GSequenceIter *end ,
                                     void (*func)(gpointer data ,
                                                  gpointer user_data ) ,
                                     gpointer user_data ) ;
extern void g_sequence_sort(GSequence *seq ,
                            gint (*cmp_func)(gconstpointer a ,
                                             gconstpointer b ,
                                             gpointer user_data ) ,
                            gpointer cmp_data ) ;
extern void g_sequence_sort_iter(GSequence *seq ,
                                 gint (*cmp_func)(GSequenceIter *a ,
                                                  GSequenceIter *b ,
                                                  gpointer data ) ,
                                 gpointer cmp_data ) ;
extern GSequenceIter *g_sequence_get_begin_iter(GSequence *seq ) ;
extern GSequenceIter *g_sequence_get_end_iter(GSequence *seq ) ;
extern GSequenceIter *g_sequence_get_iter_at_pos(GSequence *seq , gint pos ) ;
extern GSequenceIter *g_sequence_append(GSequence *seq , gpointer data ) ;
extern GSequenceIter *g_sequence_prepend(GSequence *seq , gpointer data ) ;
extern GSequenceIter *g_sequence_insert_before(GSequenceIter *iter ,
                                               gpointer data ) ;
extern void g_sequence_move(GSequenceIter *src , GSequenceIter *dest ) ;
extern void g_sequence_swap(GSequenceIter *a , GSequenceIter *b ) ;
extern GSequenceIter *g_sequence_insert_sorted(GSequence *seq , gpointer data ,
                                               gint (*cmp_func)(gconstpointer a ,
                                                                gconstpointer b ,
                                                                gpointer user_data ) ,
                                               gpointer cmp_data ) ;
extern GSequenceIter *g_sequence_insert_sorted_iter(GSequence *seq ,
                                                    gpointer data ,
                                                    gint (*iter_cmp)(GSequenceIter *a ,
                                                                     GSequenceIter *b ,
                                                                     gpointer data ) ,
                                                    gpointer cmp_data ) ;
extern void g_sequence_sort_changed(GSequenceIter *iter ,
                                    gint (*cmp_func)(gconstpointer a ,
                                                     gconstpointer b ,
                                                     gpointer user_data ) ,
                                    gpointer cmp_data ) ;
extern void g_sequence_sort_changed_iter(GSequenceIter *iter ,
                                         gint (*iter_cmp)(GSequenceIter *a ,
                                                          GSequenceIter *b ,
                                                          gpointer data ) ,
                                         gpointer cmp_data ) ;
extern void g_sequence_remove(GSequenceIter *iter ) ;
extern void g_sequence_remove_range(GSequenceIter *begin , GSequenceIter *end ) ;
extern void g_sequence_move_range(GSequenceIter *dest , GSequenceIter *begin ,
                                  GSequenceIter *end ) ;
extern GSequenceIter *g_sequence_search(GSequence *seq , gpointer data ,
                                        gint (*cmp_func)(gconstpointer a ,
                                                         gconstpointer b ,
                                                         gpointer user_data ) ,
                                        gpointer cmp_data ) ;
extern GSequenceIter *g_sequence_search_iter(GSequence *seq , gpointer data ,
                                             gint (*iter_cmp)(GSequenceIter *a ,
                                                              GSequenceIter *b ,
                                                              gpointer data ) ,
                                             gpointer cmp_data ) ;
extern gpointer g_sequence_get(GSequenceIter *iter ) ;
extern void g_sequence_set(GSequenceIter *iter , gpointer data ) ;
extern gboolean g_sequence_iter_is_begin(GSequenceIter *iter ) ;
extern gboolean g_sequence_iter_is_end(GSequenceIter *iter ) ;
extern GSequenceIter *g_sequence_iter_next(GSequenceIter *iter ) ;
extern GSequenceIter *g_sequence_iter_prev(GSequenceIter *iter ) ;
extern gint g_sequence_iter_get_position(GSequenceIter *iter ) ;
extern GSequenceIter *g_sequence_iter_move(GSequenceIter *iter , gint delta ) ;
extern GSequence *g_sequence_iter_get_sequence(GSequenceIter *iter ) ;
extern gint g_sequence_iter_compare(GSequenceIter *a , GSequenceIter *b ) ;
extern GSequenceIter *g_sequence_range_get_midpoint(GSequenceIter *begin ,
                                                    GSequenceIter *end ) ;
extern GQuark g_shell_error_quark(void) ;
extern gchar *g_shell_quote(gchar const   *unquoted_string ) ;
extern gchar *g_shell_unquote(gchar const   *quoted_string , GError **error ) ;
extern gboolean g_shell_parse_argv(gchar const   *command_line , gint *argcp ,
                                   gchar ***argvp , GError **error ) ;
extern GQuark g_spawn_error_quark(void) ;
extern gboolean g_spawn_async(gchar const   *working_directory , gchar **argv ,
                              gchar **envp , GSpawnFlags flags ,
                              void (*child_setup)(gpointer user_data ) ,
                              gpointer user_data , GPid *child_pid ,
                              GError **error ) ;
extern gboolean g_spawn_async_with_pipes(gchar const   *working_directory ,
                                         gchar **argv , gchar **envp ,
                                         GSpawnFlags flags ,
                                         void (*child_setup)(gpointer user_data ) ,
                                         gpointer user_data , GPid *child_pid ,
                                         gint *standard_input ,
                                         gint *standard_output ,
                                         gint *standard_error , GError **error ) ;
extern gboolean g_spawn_sync(gchar const   *working_directory , gchar **argv ,
                             gchar **envp , GSpawnFlags flags ,
                             void (*child_setup)(gpointer user_data ) ,
                             gpointer user_data , gchar **standard_output ,
                             gchar **standard_error , gint *exit_status ,
                             GError **error ) ;
extern gboolean g_spawn_command_line_sync(gchar const   *command_line ,
                                          gchar **standard_output ,
                                          gchar **standard_error ,
                                          gint *exit_status , GError **error ) ;
extern gboolean g_spawn_command_line_async(gchar const   *command_line ,
                                           GError **error ) ;
extern void g_spawn_close_pid(GPid pid ) ;
extern guint16 const   * const  g_ascii_table ;
extern gchar g_ascii_tolower(gchar c )  __attribute__((__const__)) ;
extern gchar g_ascii_toupper(gchar c )  __attribute__((__const__)) ;
extern gint g_ascii_digit_value(gchar c )  __attribute__((__const__)) ;
extern gint g_ascii_xdigit_value(gchar c )  __attribute__((__const__)) ;
extern gchar *g_strdelimit(gchar *string , gchar const   *delimiters ,
                           gchar new_delimiter ) ;
extern gchar *g_strcanon(gchar *string , gchar const   *valid_chars ,
                         gchar substitutor ) ;
extern gchar const   *g_strerror(gint errnum )  __attribute__((__const__)) ;
extern gchar const   *g_strsignal(gint signum )  __attribute__((__const__)) ;
extern gchar *g_strreverse(gchar *string ) ;
extern gsize g_strlcpy(gchar *dest , gchar const   *src , gsize dest_size ) ;
extern gsize g_strlcat(gchar *dest , gchar const   *src , gsize dest_size ) ;
extern gchar *g_strstr_len(gchar const   *haystack , gssize haystack_len ,
                           gchar const   *needle ) ;
extern gchar *g_strrstr(gchar const   *haystack , gchar const   *needle ) ;
extern gchar *g_strrstr_len(gchar const   *haystack , gssize haystack_len ,
                            gchar const   *needle ) ;
extern gboolean g_str_has_suffix(gchar const   *str , gchar const   *suffix ) ;
extern gboolean g_str_has_prefix(gchar const   *str , gchar const   *prefix ) ;
extern gdouble g_strtod(gchar const   *nptr , gchar **endptr ) ;
extern gdouble g_ascii_strtod(gchar const   *nptr , gchar **endptr ) ;
extern guint64 g_ascii_strtoull(gchar const   *nptr , gchar **endptr ,
                                guint base ) ;
extern gint64 g_ascii_strtoll(gchar const   *nptr , gchar **endptr , guint base ) ;
extern gchar *g_ascii_dtostr(gchar *buffer , gint buf_len , gdouble d ) ;
extern gchar *g_ascii_formatd(gchar *buffer , gint buf_len ,
                              gchar const   *format , gdouble d ) ;
extern gchar *g_strchug(gchar *string ) ;
extern gchar *g_strchomp(gchar *string ) ;
extern gint g_ascii_strcasecmp(gchar const   *s1 , gchar const   *s2 ) ;
extern gint g_ascii_strncasecmp(gchar const   *s1 , gchar const   *s2 , gsize n ) ;
extern gchar *g_ascii_strdown(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gchar *g_ascii_strup(gchar const   *str , gssize len )  __attribute__((__malloc__)) ;
extern gint g_strcasecmp(gchar const   *s1 , gchar const   *s2 ) ;
extern gint g_strncasecmp(gchar const   *s1 , gchar const   *s2 , guint n ) ;
extern gchar *g_strdown(gchar *string ) ;
extern gchar *g_strup(gchar *string ) ;
extern gchar *g_strdup(gchar const   *str )  __attribute__((__malloc__)) ;
extern gchar *( /* format attribute */  g_strdup_printf)(gchar const   *format 
                                                         , ...)  __attribute__((__malloc__)) ;
extern gchar *g_strdup_vprintf(gchar const   *format , va_list args )  __attribute__((__malloc__)) ;
extern gchar *g_strndup(gchar const   *str , gsize n )  __attribute__((__malloc__)) ;
extern gchar *g_strnfill(gsize length , gchar fill_char )  __attribute__((__malloc__)) ;
extern gchar *g_strconcat(gchar const   *string1  , ...)  __attribute__((__sentinel__,
__malloc__)) ;
extern gchar *g_strjoin(gchar const   *separator  , ...)  __attribute__((__sentinel__,
__malloc__)) ;
extern gchar *g_strcompress(gchar const   *source )  __attribute__((__malloc__)) ;
extern gchar *g_strescape(gchar const   *source , gchar const   *exceptions )  __attribute__((__malloc__)) ;
extern gpointer g_memdup(gconstpointer mem , guint byte_size )  __attribute__((__malloc__,
__alloc_size__(2))) ;
extern gchar **g_strsplit(gchar const   *string , gchar const   *delimiter ,
                          gint max_tokens )  __attribute__((__malloc__)) ;
extern gchar **g_strsplit_set(gchar const   *string ,
                              gchar const   *delimiters , gint max_tokens )  __attribute__((__malloc__)) ;
extern gchar *g_strjoinv(gchar const   *separator , gchar **str_array )  __attribute__((__malloc__)) ;
extern void g_strfreev(gchar **str_array ) ;
extern gchar **g_strdupv(gchar **str_array )  __attribute__((__malloc__)) ;
extern guint g_strv_length(gchar **str_array ) ;
extern gchar *g_stpcpy(gchar *dest , char const   *src ) ;
extern gchar const   *g_strip_context(gchar const   *msgid ,
                                      gchar const   *msgval )  __attribute__((__format_arg__(1))) ;
extern gchar const   *g_dgettext(gchar const   *domain , gchar const   *msgid )  __attribute__((__format_arg__(2))) ;
extern gchar const   *g_dngettext(gchar const   *domain , gchar const   *msgid ,
                                  gchar const   *msgid_plural , gulong n )  __attribute__((__format_arg__(3))) ;
extern gchar const   *g_dpgettext(gchar const   *domain ,
                                  gchar const   *msgctxtid , gsize msgidoffset )  __attribute__((__format_arg__(2))) ;
extern gchar const   *g_dpgettext2(gchar const   *domain ,
                                   gchar const   *context ,
                                   gchar const   *msgid )  __attribute__((__format_arg__(3))) ;
extern int g_strcmp0(char const   *str1 , char const   *str2 ) ;
extern void ( /* format attribute */  g_test_minimized_result)(double minimized_quantity ,
                                                               char const   *format 
                                                               , ...) ;
extern void ( /* format attribute */  g_test_maximized_result)(double maximized_quantity ,
                                                               char const   *format 
                                                               , ...) ;
extern void g_test_init(int *argc , char ***argv  , ...) ;
extern int g_test_run(void) ;
extern void g_test_add_func(char const   *testpath , void (*test_func)(void) ) ;
extern void g_test_add_data_func(char const   *testpath ,
                                 gconstpointer test_data ,
                                 void (*test_func)(gconstpointer  ) ) ;
extern void ( /* format attribute */  g_test_message)(char const   *format 
                                                      , ...) ;
extern void g_test_bug_base(char const   *uri_pattern ) ;
extern void g_test_bug(char const   *bug_uri_snippet ) ;
extern void g_test_timer_start(void) ;
extern double g_test_timer_elapsed(void) ;
extern double g_test_timer_last(void) ;
extern void g_test_queue_free(gpointer gfree_pointer ) ;
extern void g_test_queue_destroy(void (*destroy_func)(gpointer data ) ,
                                 gpointer destroy_data ) ;
extern gboolean g_test_trap_fork(guint64 usec_timeout ,
                                 GTestTrapFlags test_trap_flags ) ;
extern gboolean g_test_trap_has_passed(void) ;
extern gboolean g_test_trap_reached_timeout(void) ;
extern gint32 g_test_rand_int(void) ;
extern gint32 g_test_rand_int_range(gint32 begin , gint32 end ) ;
extern double g_test_rand_double(void) ;
extern double g_test_rand_double_range(double range_start , double range_end ) ;
extern GTestCase *g_test_create_case(char const   *test_name , gsize data_size ,
                                     gconstpointer test_data ,
                                     void (*data_setup)(void) ,
                                     void (*data_test)(void) ,
                                     void (*data_teardown)(void) ) ;
extern GTestSuite *g_test_create_suite(char const   *suite_name ) ;
extern GTestSuite *g_test_get_root(void) ;
extern void g_test_suite_add(GTestSuite *suite , GTestCase *test_case ) ;
extern void g_test_suite_add_suite(GTestSuite *suite , GTestSuite *nestedsuite ) ;
extern int g_test_run_suite(GTestSuite *suite ) ;
extern void g_test_trap_assertions(char const   *domain , char const   *file ,
                                   int line , char const   *func ,
                                   guint64 assertion_flags ,
                                   char const   *pattern ) ;
extern  __attribute__((__noreturn__)) void g_assertion_message(char const   *domain ,
                                                               char const   *file ,
                                                               int line ,
                                                               char const   *func ,
                                                               char const   *message ) ;
extern  __attribute__((__noreturn__)) void g_assertion_message_expr(char const   *domain ,
                                                                    char const   *file ,
                                                                    int line ,
                                                                    char const   *func ,
                                                                    char const   *expr ) ;
extern  __attribute__((__noreturn__)) void g_assertion_message_cmpstr(char const   *domain ,
                                                                      char const   *file ,
                                                                      int line ,
                                                                      char const   *func ,
                                                                      char const   *expr ,
                                                                      char const   *arg1 ,
                                                                      char const   *cmp ,
                                                                      char const   *arg2 ) ;
extern  __attribute__((__noreturn__)) void g_assertion_message_cmpnum(char const   *domain ,
                                                                      char const   *file ,
                                                                      int line ,
                                                                      char const   *func ,
                                                                      char const   *expr ,
                                                                      long double arg1 ,
                                                                      char const   *cmp ,
                                                                      long double arg2 ,
                                                                      char numtype ) ;
extern  __attribute__((__noreturn__)) void g_assertion_message_error(char const   *domain ,
                                                                     char const   *file ,
                                                                     int line ,
                                                                     char const   *func ,
                                                                     char const   *expr ,
                                                                     GError *error ,
                                                                     GQuark error_domain ,
                                                                     int error_code ) ;
extern void g_test_add_vtable(char const   *testpath , gsize data_size ,
                              gconstpointer test_data ,
                              void (*data_setup)(void) ,
                              void (*data_test)(void) ,
                              void (*data_teardown)(void) ) ;
extern GTestConfig const   * const  g_test_config_vars ;
extern char const   *g_test_log_type_name(GTestLogType log_type ) ;
extern GTestLogBuffer *g_test_log_buffer_new(void) ;
extern void g_test_log_buffer_free(GTestLogBuffer *tbuffer ) ;
extern void g_test_log_buffer_push(GTestLogBuffer *tbuffer , guint n_bytes ,
                                   guint8 const   *bytes ) ;
extern GTestLogMsg *g_test_log_buffer_pop(GTestLogBuffer *tbuffer ) ;
extern void g_test_log_msg_free(GTestLogMsg *tmsg ) ;
extern void g_test_log_set_fatal_handler(gboolean (*log_func)(gchar const   *log_domain ,
                                                              GLogLevelFlags log_level ,
                                                              gchar const   *message ,
                                                              gpointer user_data ) ,
                                         gpointer user_data ) ;
extern GThreadPool *g_thread_pool_new(void (*func)(gpointer data ,
                                                   gpointer user_data ) ,
                                      gpointer user_data , gint max_threads ,
                                      gboolean exclusive , GError **error ) ;
extern void g_thread_pool_push(GThreadPool *pool , gpointer data ,
                               GError **error ) ;
extern void g_thread_pool_set_max_threads(GThreadPool *pool , gint max_threads ,
                                          GError **error ) ;
extern gint g_thread_pool_get_max_threads(GThreadPool *pool ) ;
extern guint g_thread_pool_get_num_threads(GThreadPool *pool ) ;
extern guint g_thread_pool_unprocessed(GThreadPool *pool ) ;
extern void g_thread_pool_free(GThreadPool *pool , gboolean immediate ,
                               gboolean wait_ ) ;
extern void g_thread_pool_set_max_unused_threads(gint max_threads ) ;
extern gint g_thread_pool_get_max_unused_threads(void) ;
extern guint g_thread_pool_get_num_unused_threads(void) ;
extern void g_thread_pool_stop_unused_threads(void) ;
extern void g_thread_pool_set_sort_function(GThreadPool *pool ,
                                            gint (*func)(gconstpointer a ,
                                                         gconstpointer b ,
                                                         gpointer user_data ) ,
                                            gpointer user_data ) ;
extern void g_thread_pool_set_max_idle_time(guint interval ) ;
extern guint g_thread_pool_get_max_idle_time(void) ;
extern GTimer *g_timer_new(void) ;
extern void g_timer_destroy(GTimer *timer ) ;
extern void g_timer_start(GTimer *timer ) ;
extern void g_timer_stop(GTimer *timer ) ;
extern void g_timer_reset(GTimer *timer ) ;
extern void g_timer_continue(GTimer *timer ) ;
extern gdouble g_timer_elapsed(GTimer *timer , gulong *microseconds ) ;
extern void g_usleep(gulong microseconds ) ;
extern void g_time_val_add(GTimeVal *time_ , glong microseconds ) ;
extern gboolean g_time_val_from_iso8601(gchar const   *iso_date ,
                                        GTimeVal *time_ ) ;
extern gchar *g_time_val_to_iso8601(GTimeVal *time_ )  __attribute__((__malloc__)) ;
extern GTree *g_tree_new(gint (*key_compare_func)(gconstpointer a ,
                                                  gconstpointer b ) ) ;
extern GTree *g_tree_new_with_data(gint (*key_compare_func)(gconstpointer a ,
                                                            gconstpointer b ,
                                                            gpointer user_data ) ,
                                   gpointer key_compare_data ) ;
extern GTree *g_tree_new_full(gint (*key_compare_func)(gconstpointer a ,
                                                       gconstpointer b ,
                                                       gpointer user_data ) ,
                              gpointer key_compare_data ,
                              void (*key_destroy_func)(gpointer data ) ,
                              void (*value_destroy_func)(gpointer data ) ) ;
extern GTree *g_tree_ref(GTree *tree ) ;
extern void g_tree_unref(GTree *tree ) ;
extern void g_tree_destroy(GTree *tree ) ;
extern void g_tree_insert(GTree *tree , gpointer key , gpointer value ) ;
extern void g_tree_replace(GTree *tree , gpointer key , gpointer value ) ;
extern gboolean g_tree_remove(GTree *tree , gconstpointer key ) ;
extern gboolean g_tree_steal(GTree *tree , gconstpointer key ) ;
extern gpointer g_tree_lookup(GTree *tree , gconstpointer key ) ;
extern gboolean g_tree_lookup_extended(GTree *tree , gconstpointer lookup_key ,
                                       gpointer *orig_key , gpointer *value ) ;
extern void g_tree_foreach(GTree *tree , gboolean (*func)(gpointer key ,
                                                          gpointer value ,
                                                          gpointer data ) ,
                           gpointer user_data ) ;
extern void g_tree_traverse(GTree *tree ,
                            gboolean (*traverse_func)(gpointer key ,
                                                      gpointer value ,
                                                      gpointer data ) ,
                            GTraverseType traverse_type , gpointer user_data ) ;
extern gpointer g_tree_search(GTree *tree ,
                              gint (*search_func)(gconstpointer a ,
                                                  gconstpointer b ) ,
                              gconstpointer user_data ) ;
extern gint g_tree_height(GTree *tree ) ;
extern gint g_tree_nnodes(GTree *tree ) ;
extern char *g_uri_unescape_string(char const   *escaped_string ,
                                   char const   *illegal_characters ) ;
extern char *g_uri_unescape_segment(char const   *escaped_string ,
                                    char const   *escaped_string_end ,
                                    char const   *illegal_characters ) ;
extern char *g_uri_parse_scheme(char const   *uri ) ;
extern char *g_uri_escape_string(char const   *unescaped ,
                                 char const   *reserved_chars_allowed ,
                                 gboolean allow_utf8 ) ;
extern gboolean g_variant_type_string_is_valid(gchar const   *type_string ) ;
extern gboolean g_variant_type_string_scan(gchar const   *string ,
                                           gchar const   *limit ,
                                           gchar const   **endptr ) ;
extern void g_variant_type_free(GVariantType *type ) ;
extern GVariantType *g_variant_type_copy(GVariantType const   *type ) ;
extern GVariantType *g_variant_type_new(gchar const   *type_string ) ;
extern gsize g_variant_type_get_string_length(GVariantType const   *type ) ;
extern gchar const   *g_variant_type_peek_string(GVariantType const   *type ) ;
extern gchar *g_variant_type_dup_string(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_definite(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_container(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_basic(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_maybe(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_array(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_tuple(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_dict_entry(GVariantType const   *type ) ;
extern gboolean g_variant_type_is_variant(GVariantType const   *type ) ;
extern guint g_variant_type_hash(gconstpointer type ) ;
extern gboolean g_variant_type_equal(gconstpointer type1 , gconstpointer type2 ) ;
extern gboolean g_variant_type_is_subtype_of(GVariantType const   *type ,
                                             GVariantType const   *supertype ) ;
extern GVariantType const   *g_variant_type_element(GVariantType const   *type ) ;
extern GVariantType const   *g_variant_type_first(GVariantType const   *type ) ;
extern GVariantType const   *g_variant_type_next(GVariantType const   *type ) ;
extern gsize g_variant_type_n_items(GVariantType const   *type ) ;
extern GVariantType const   *g_variant_type_key(GVariantType const   *type ) ;
extern GVariantType const   *g_variant_type_value(GVariantType const   *type ) ;
extern GVariantType *g_variant_type_new_array(GVariantType const   *element ) ;
extern GVariantType *g_variant_type_new_maybe(GVariantType const   *element ) ;
extern GVariantType *g_variant_type_new_tuple(GVariantType const   * const  *items ,
                                              gint length ) ;
extern GVariantType *g_variant_type_new_dict_entry(GVariantType const   *key ,
                                                   GVariantType const   *value ) ;
extern GVariantType const   *g_variant_type_checked_(gchar const   * ) ;
extern void g_variant_unref(GVariant *value ) ;
extern GVariant *g_variant_ref(GVariant *value ) ;
extern GVariant *g_variant_ref_sink(GVariant *value ) ;
extern GVariantType const   *g_variant_get_type(GVariant *value ) ;
extern gchar const   *g_variant_get_type_string(GVariant *value ) ;
extern gboolean g_variant_is_of_type(GVariant *value ,
                                     GVariantType const   *type ) ;
extern gboolean g_variant_is_container(GVariant *value ) ;
extern GVariantClass g_variant_classify(GVariant *value ) ;
extern GVariant *g_variant_new_boolean(gboolean boolean ) ;
extern GVariant *g_variant_new_byte(guchar byte ) ;
extern GVariant *g_variant_new_int16(gint16 int16 ) ;
extern GVariant *g_variant_new_uint16(guint16 uint16 ) ;
extern GVariant *g_variant_new_int32(gint32 int32 ) ;
extern GVariant *g_variant_new_uint32(guint32 uint32 ) ;
extern GVariant *g_variant_new_int64(gint64 int64 ) ;
extern GVariant *g_variant_new_uint64(guint64 uint64 ) ;
extern GVariant *g_variant_new_handle(gint32 handle ) ;
extern GVariant *g_variant_new_double(gdouble floating ) ;
extern GVariant *g_variant_new_string(gchar const   *string ) ;
extern GVariant *g_variant_new_object_path(gchar const   *object_path ) ;
extern gboolean g_variant_is_object_path(gchar const   *string ) ;
extern GVariant *g_variant_new_signature(gchar const   *signature ) ;
extern gboolean g_variant_is_signature(gchar const   *string ) ;
extern GVariant *g_variant_new_variant(GVariant *value ) ;
extern GVariant *g_variant_new_strv(gchar const   * const  *strv ,
                                    gssize length ) ;
extern gboolean g_variant_get_boolean(GVariant *value ) ;
extern guchar g_variant_get_byte(GVariant *value ) ;
extern gint16 g_variant_get_int16(GVariant *value ) ;
extern guint16 g_variant_get_uint16(GVariant *value ) ;
extern gint32 g_variant_get_int32(GVariant *value ) ;
extern guint32 g_variant_get_uint32(GVariant *value ) ;
extern gint64 g_variant_get_int64(GVariant *value ) ;
extern guint64 g_variant_get_uint64(GVariant *value ) ;
extern gint32 g_variant_get_handle(GVariant *value ) ;
extern gdouble g_variant_get_double(GVariant *value ) ;
extern GVariant *g_variant_get_variant(GVariant *value ) ;
extern gchar const   *g_variant_get_string(GVariant *value , gsize *length ) ;
extern gchar *g_variant_dup_string(GVariant *value , gsize *length ) ;
extern gchar const   **g_variant_get_strv(GVariant *value , gsize *length ) ;
extern gchar **g_variant_dup_strv(GVariant *value , gsize *length ) ;
extern GVariant *g_variant_new_maybe(GVariantType const   *child_type ,
                                     GVariant *child ) ;
extern GVariant *g_variant_new_array(GVariantType const   *child_type ,
                                     GVariant * const  *children ,
                                     gsize n_children ) ;
extern GVariant *g_variant_new_tuple(GVariant * const  *children ,
                                     gsize n_children ) ;
extern GVariant *g_variant_new_dict_entry(GVariant *key , GVariant *value ) ;
extern GVariant *g_variant_get_maybe(GVariant *value ) ;
extern gsize g_variant_n_children(GVariant *value ) ;
extern void g_variant_get_child(GVariant *value , gsize index_ ,
                                gchar const   *format_string  , ...) ;
extern GVariant *g_variant_get_child_value(GVariant *value , gsize index_ ) ;
extern gconstpointer g_variant_get_fixed_array(GVariant *value ,
                                               gsize *n_elements ,
                                               gsize element_size ) ;
extern gsize g_variant_get_size(GVariant *value ) ;
extern gconstpointer g_variant_get_data(GVariant *value ) ;
extern void g_variant_store(GVariant *value , gpointer data ) ;
extern gchar *g_variant_print(GVariant *value , gboolean type_annotate ) ;
extern GString *g_variant_print_string(GVariant *value , GString *string ,
                                       gboolean type_annotate ) ;
extern guint g_variant_hash(gconstpointer value ) ;
extern gboolean g_variant_equal(gconstpointer one , gconstpointer two ) ;
extern GVariant *g_variant_get_normal_form(GVariant *value ) ;
extern gboolean g_variant_is_normal_form(GVariant *value ) ;
extern GVariant *g_variant_byteswap(GVariant *value ) ;
extern GVariant *g_variant_new_from_data(GVariantType const   *type ,
                                         gconstpointer data , gsize size ,
                                         gboolean trusted ,
                                         void (*notify)(gpointer data ) ,
                                         gpointer user_data ) ;
extern GVariantIter *g_variant_iter_new(GVariant *value ) ;
extern gsize g_variant_iter_init(GVariantIter *iter , GVariant *value ) ;
extern GVariantIter *g_variant_iter_copy(GVariantIter *iter ) ;
extern gsize g_variant_iter_n_children(GVariantIter *iter ) ;
extern void g_variant_iter_free(GVariantIter *iter ) ;
extern GVariant *g_variant_iter_next_value(GVariantIter *iter ) ;
extern gboolean g_variant_iter_next(GVariantIter *iter ,
                                    gchar const   *format_string  , ...) ;
extern gboolean g_variant_iter_loop(GVariantIter *iter ,
                                    gchar const   *format_string  , ...) ;
extern GQuark g_variant_parser_get_error_quark(void) ;
extern GVariantBuilder *g_variant_builder_new(GVariantType const   *type ) ;
extern void g_variant_builder_unref(GVariantBuilder *builder ) ;
extern GVariantBuilder *g_variant_builder_ref(GVariantBuilder *builder ) ;
extern void g_variant_builder_init(GVariantBuilder *builder ,
                                   GVariantType const   *type ) ;
extern GVariant *g_variant_builder_end(GVariantBuilder *builder ) ;
extern void g_variant_builder_clear(GVariantBuilder *builder ) ;
extern void g_variant_builder_open(GVariantBuilder *builder ,
                                   GVariantType const   *type ) ;
extern void g_variant_builder_close(GVariantBuilder *builder ) ;
extern void g_variant_builder_add_value(GVariantBuilder *builder ,
                                        GVariant *value ) ;
extern void g_variant_builder_add(GVariantBuilder *builder ,
                                  gchar const   *format_string  , ...) ;
extern GVariant *g_variant_new(gchar const   *format_string  , ...) ;
extern void g_variant_get(GVariant *value , gchar const   *format_string  , ...) ;
extern GVariant *g_variant_new_va(gchar const   *format_string ,
                                  gchar const   **endptr , va_list *app ) ;
extern void g_variant_get_va(GVariant *value , gchar const   *format_string ,
                             gchar const   **endptr , va_list *app ) ;
extern GVariant *g_variant_parse(GVariantType const   *type ,
                                 gchar const   *text , gchar const   *limit ,
                                 gchar const   **endptr , GError **error ) ;
extern GVariant *g_variant_new_parsed(gchar const   *format  , ...) ;
extern GVariant *g_variant_new_parsed_va(gchar const   *format , va_list *app ) ;
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
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
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
extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t preadv(int __fd , struct iovec  const  *__iovec , int __count ,
                      __off64_t __offset )  __asm__("preadv64")  ;
extern ssize_t pwritev(int __fd , struct iovec  const  *__iovec , int __count ,
                       __off64_t __offset )  __asm__("pwritev64")  ;
__inline extern  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
__inline extern  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
__inline extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                              struct cmsghdr *__cmsg ) 
{ 


  {
  if (__cmsg->cmsg_len < sizeof(struct cmsghdr )) {
    return ((struct cmsghdr *)0);
  } else {

  }
  __cmsg = (struct cmsghdr *)((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U)));
  if ((unsigned int )((unsigned char *)(__cmsg + 1)) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
    return ((struct cmsghdr *)0);
  } else
  if ((unsigned int )((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U))) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
    return ((struct cmsghdr *)0);
  } else {

  }
  return (__cmsg);
}
}
extern int recvmmsg(int __fd , struct mmsghdr *__vmessages ,
                    unsigned int __vlen , int __flags ,
                    struct timespec  const  *__tmo ) ;
extern  __attribute__((__nothrow__)) int socket(int __domain , int __type ,
                                                int __protocol ) ;
extern  __attribute__((__nothrow__)) int socketpair(int __domain , int __type ,
                                                    int __protocol , int *__fds ) ;
extern  __attribute__((__nothrow__)) int bind(int __fd ,
                                              struct sockaddr  const  *__addr ,
                                              socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int getsockname(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
extern int connect(int __fd , struct sockaddr  const  *__addr , socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int getpeername(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) ;
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
extern ssize_t sendto(int __fd , void const   *__buf , size_t __n ,
                      int __flags , struct sockaddr  const  *__addr ,
                      socklen_t __addr_len ) ;
extern ssize_t recvfrom(int __fd , void * __restrict  __buf , size_t __n ,
                        int __flags , struct sockaddr * __restrict  __addr ,
                        socklen_t * __restrict  __addr_len ) ;
extern ssize_t sendmsg(int __fd , struct msghdr  const  *__message ,
                       int __flags ) ;
extern ssize_t recvmsg(int __fd , struct msghdr *__message , int __flags ) ;
extern  __attribute__((__nothrow__)) int getsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void * __restrict  __optval ,
                                                    socklen_t * __restrict  __optlen ) ;
extern  __attribute__((__nothrow__)) int setsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void const   *__optval ,
                                                    socklen_t __optlen ) ;
extern  __attribute__((__nothrow__)) int listen(int __fd , int __n ) ;
extern int accept(int __fd , struct sockaddr * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;
extern  __attribute__((__nothrow__)) int shutdown(int __fd , int __how ) ;
extern  __attribute__((__nothrow__)) int sockatmark(int __fd ) ;
extern  __attribute__((__nothrow__)) int isfdtype(int __fd , int __fdtype ) ;
extern struct in6_addr  const  in6addr_any ;
extern struct in6_addr  const  in6addr_loopback ;
extern  __attribute__((__nothrow__)) uint32_t ntohl(uint32_t __netlong )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) uint16_t ntohs(uint16_t __netshort )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) uint32_t htonl(uint32_t __hostlong )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) uint16_t htons(uint16_t __hostshort )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int bindresvport(int __sockfd ,
                                                      struct sockaddr_in *__sock_in ) ;
extern  __attribute__((__nothrow__)) int bindresvport6(int __sockfd ,
                                                       struct sockaddr_in6 *__sock_in ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_addr(char const   *__cp ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_lnaof(struct in_addr __in ) ;
extern  __attribute__((__nothrow__)) struct in_addr inet_makeaddr(in_addr_t __net ,
                                                                  in_addr_t __host ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_netof(struct in_addr __in ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_network(char const   *__cp ) ;
extern  __attribute__((__nothrow__)) char *inet_ntoa(struct in_addr __in ) ;
extern  __attribute__((__nothrow__)) int inet_pton(int __af ,
                                                   char const   * __restrict  __cp ,
                                                   void * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char const   *inet_ntop(int __af ,
                                                             void const   * __restrict  __cp ,
                                                             char * __restrict  __buf ,
                                                             socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int inet_aton(char const   *__cp ,
                                                   struct in_addr *__inp ) ;
extern  __attribute__((__nothrow__)) char *inet_neta(in_addr_t __net ,
                                                     char *__buf , size_t __len ) ;
extern  __attribute__((__nothrow__)) char *inet_net_ntop(int __af ,
                                                         void const   *__cp ,
                                                         int __bits ,
                                                         char *__buf ,
                                                         size_t __len ) ;
extern  __attribute__((__nothrow__)) int inet_net_pton(int __af ,
                                                       char const   *__cp ,
                                                       void *__buf ,
                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) unsigned int inet_nsap_addr(char const   *__cp ,
                                                                 unsigned char *__buf ,
                                                                 int __len ) ;
extern  __attribute__((__nothrow__)) char *inet_nsap_ntoa(int __len ,
                                                          unsigned char const   *__cp ,
                                                          char *__buf ) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc ,
                                                     char * const  *___argv ,
                                                     char const   *__shortopts ,
                                                     struct option  const  *__longopts ,
                                                     int *__longind ) ;
extern  __attribute__((__nothrow__)) int getopt_long_only(int ___argc ,
                                                          char * const  *___argv ,
                                                          char const   *__shortopts ,
                                                          struct option  const  *__longopts ,
                                                          int *__longind ) ;
extern  __attribute__((__nothrow__)) void setrpcent(int __stayopen ) ;
extern  __attribute__((__nothrow__)) void endrpcent(void) ;
extern  __attribute__((__nothrow__)) struct rpcent *getrpcbyname(char const   *__name ) ;
extern  __attribute__((__nothrow__)) struct rpcent *getrpcbynumber(int __number ) ;
extern  __attribute__((__nothrow__)) struct rpcent *getrpcent(void) ;
extern  __attribute__((__nothrow__)) int getrpcbyname_r(char const   *__name ,
                                                        struct rpcent *__result_buf ,
                                                        char *__buffer ,
                                                        size_t __buflen ,
                                                        struct rpcent **__result ) ;
extern  __attribute__((__nothrow__)) int getrpcbynumber_r(int __number ,
                                                          struct rpcent *__result_buf ,
                                                          char *__buffer ,
                                                          size_t __buflen ,
                                                          struct rpcent **__result ) ;
extern  __attribute__((__nothrow__)) int getrpcent_r(struct rpcent *__result_buf ,
                                                     char *__buffer ,
                                                     size_t __buflen ,
                                                     struct rpcent **__result ) ;
extern  __attribute__((__nothrow__)) int *__h_errno_location(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) void herror(char const   *__str ) ;
extern  __attribute__((__nothrow__)) char const   *hstrerror(int __err_num ) ;
extern void sethostent(int __stay_open ) ;
extern void endhostent(void) ;
extern struct hostent *gethostent(void) ;
extern struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len ,
                                     int __type ) ;
extern struct hostent *gethostbyname(char const   *__name ) ;
extern struct hostent *gethostbyname2(char const   *__name , int __af ) ;
extern int gethostent_r(struct hostent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct hostent ** __restrict  __result ,
                        int * __restrict  __h_errnop ) ;
extern int gethostbyaddr_r(void const   * __restrict  __addr ,
                           __socklen_t __len , int __type ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
extern int gethostbyname_r(char const   * __restrict  __name ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
extern int gethostbyname2_r(char const   * __restrict  __name , int __af ,
                            struct hostent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct hostent ** __restrict  __result ,
                            int * __restrict  __h_errnop ) ;
extern void setnetent(int __stay_open ) ;
extern void endnetent(void) ;
extern struct netent *getnetent(void) ;
extern struct netent *getnetbyaddr(uint32_t __net , int __type ) ;
extern struct netent *getnetbyname(char const   *__name ) ;
extern int getnetent_r(struct netent * __restrict  __result_buf ,
                       char * __restrict  __buf , size_t __buflen ,
                       struct netent ** __restrict  __result ,
                       int * __restrict  __h_errnop ) ;
extern int getnetbyaddr_r(uint32_t __net , int __type ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;
extern int getnetbyname_r(char const   * __restrict  __name ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;
extern void setservent(int __stay_open ) ;
extern void endservent(void) ;
extern struct servent *getservent(void) ;
extern struct servent *getservbyname(char const   *__name ,
                                     char const   *__proto ) ;
extern struct servent *getservbyport(int __port , char const   *__proto ) ;
extern int getservent_r(struct servent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct servent ** __restrict  __result ) ;
extern int getservbyname_r(char const   * __restrict  __name ,
                           char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;
extern int getservbyport_r(int __port , char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;
extern void setprotoent(int __stay_open ) ;
extern void endprotoent(void) ;
extern struct protoent *getprotoent(void) ;
extern struct protoent *getprotobyname(char const   *__name ) ;
extern struct protoent *getprotobynumber(int __proto ) ;
extern int getprotoent_r(struct protoent * __restrict  __result_buf ,
                         char * __restrict  __buf , size_t __buflen ,
                         struct protoent ** __restrict  __result ) ;
extern int getprotobyname_r(char const   * __restrict  __name ,
                            struct protoent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct protoent ** __restrict  __result ) ;
extern int getprotobynumber_r(int __proto ,
                              struct protoent * __restrict  __result_buf ,
                              char * __restrict  __buf , size_t __buflen ,
                              struct protoent ** __restrict  __result ) ;
extern int setnetgrent(char const   *__netgroup ) ;
extern void endnetgrent(void) ;
extern int getnetgrent(char ** __restrict  __hostp ,
                       char ** __restrict  __userp ,
                       char ** __restrict  __domainp ) ;
extern int innetgr(char const   *__netgroup , char const   *__host ,
                   char const   *__user , char const   *__domain ) ;
extern int getnetgrent_r(char ** __restrict  __hostp ,
                         char ** __restrict  __userp ,
                         char ** __restrict  __domainp ,
                         char * __restrict  __buffer , size_t __buflen ) ;
extern int rcmd(char ** __restrict  __ahost , unsigned short __rport ,
                char const   * __restrict  __locuser ,
                char const   * __restrict  __remuser ,
                char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;
extern int rcmd_af(char ** __restrict  __ahost , unsigned short __rport ,
                   char const   * __restrict  __locuser ,
                   char const   * __restrict  __remuser ,
                   char const   * __restrict  __cmd , int * __restrict  __fd2p ,
                   sa_family_t __af ) ;
extern int rexec(char ** __restrict  __ahost , int __rport ,
                 char const   * __restrict  __name ,
                 char const   * __restrict  __pass ,
                 char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;
extern int rexec_af(char ** __restrict  __ahost , int __rport ,
                    char const   * __restrict  __name ,
                    char const   * __restrict  __pass ,
                    char const   * __restrict  __cmd ,
                    int * __restrict  __fd2p , sa_family_t __af ) ;
extern int ruserok(char const   *__rhost , int __suser ,
                   char const   *__remuser , char const   *__locuser ) ;
extern int ruserok_af(char const   *__rhost , int __suser ,
                      char const   *__remuser , char const   *__locuser ,
                      sa_family_t __af ) ;
extern int iruserok(uint32_t __raddr , int __suser , char const   *__remuser ,
                    char const   *__locuser ) ;
extern int iruserok_af(void const   *__raddr , int __suser ,
                       char const   *__remuser , char const   *__locuser ,
                       sa_family_t __af ) ;
extern int rresvport(int *__alport ) ;
extern int rresvport_af(int *__alport , sa_family_t __af ) ;
extern int getaddrinfo(char const   * __restrict  __name ,
                       char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req ,
                       struct addrinfo ** __restrict  __pai ) ;
extern  __attribute__((__nothrow__)) void freeaddrinfo(struct addrinfo *__ai ) ;
extern  __attribute__((__nothrow__)) char const   *gai_strerror(int __ecode ) ;
extern int getnameinfo(struct sockaddr  const  * __restrict  __sa ,
                       socklen_t __salen , char * __restrict  __host ,
                       socklen_t __hostlen , char * __restrict  __serv ,
                       socklen_t __servlen , unsigned int __flags ) ;
extern void guids_init(void) ;
extern void guids_add_guid(e_guid_t *guid , gchar const   *name ) ;
extern gchar const   *guids_get_guid_name(e_guid_t *guid ) ;
extern gchar const   *guids_resolve_guid_to_str(e_guid_t *guid ) ;
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
extern void except_setup_clean(struct except_stacknode * ,
                               struct except_cleanup * , void (*)(void * ) ,
                               void * ) ;
extern void except_setup_try(struct except_stacknode * , struct except_catch * ,
                             except_id_t const   * , size_t  ) ;
extern struct except_stacknode *except_pop(void) ;
extern int except_init(void) ;
extern void except_deinit(void) ;
extern  __attribute__((__noreturn__)) void except_rethrow(except_t * ) ;
extern  __attribute__((__noreturn__)) void except_throw(long  , long  ,
                                                        char const   * ) ;
extern  __attribute__((__noreturn__)) void except_throwd(long  , long  ,
                                                         char const   * ,
                                                         void * ) ;
extern  __attribute__((__noreturn__)) void except_throwf(long  , long  ,
                                                         char const   *  , ...) ;
extern void (*except_unhandled_catcher(void (*)(except_t * ) ))(except_t * ) ;
extern unsigned long except_code(except_t * ) ;
extern unsigned long except_group(except_t * ) ;
extern char const   *except_message(except_t * ) ;
extern void *except_data(except_t * ) ;
extern void *except_take_data(except_t * ) ;
extern void except_set_allocator(void *(*)(size_t  ) , void (*)(void * ) ) ;
extern void *except_alloc(size_t  ) ;
extern void except_free(void * ) ;
extern void tvbuff_init(void) ;
extern void tvbuff_cleanup(void) ;
extern tvbuff_t *tvb_new(tvbuff_type  ) ;
extern void tvb_free(tvbuff_t * ) ;
extern void tvb_free_chain(tvbuff_t * ) ;
extern guint tvb_increment_usage_count(tvbuff_t * , guint const   count ) ;
extern guint tvb_decrement_usage_count(tvbuff_t * , guint const   count ) ;
extern void tvb_set_free_cb(tvbuff_t * , void (* const  )(void * ) ) ;
extern void tvb_set_child_real_data_tvbuff(tvbuff_t *parent , tvbuff_t *child ) ;
extern tvbuff_t *tvb_new_child_real_data(tvbuff_t *parent ,
                                         guint8 const   *data ,
                                         guint const   length ,
                                         gint const   reported_length ) ;
extern void tvb_set_real_data(tvbuff_t * , guint8 const   *data ,
                              guint const   length ,
                              gint const   reported_length ) ;
extern tvbuff_t *tvb_new_real_data(guint8 const   *data , guint const   length ,
                                   gint const   reported_length ) ;
extern void tvb_set_subset(tvbuff_t *tvb , tvbuff_t *backing ,
                           gint const   backing_offset ,
                           gint const   backing_length ,
                           gint const   reported_length ) ;
extern tvbuff_t *tvb_new_subset(tvbuff_t *backing ,
                                gint const   backing_offset ,
                                gint const   backing_length ,
                                gint const   reported_length ) ;
extern tvbuff_t *tvb_new_subset_remaining(tvbuff_t *backing ,
                                          gint const   backing_offset ) ;
extern void tvb_composite_append(tvbuff_t *tvb , tvbuff_t *member ) ;
extern void tvb_composite_prepend(tvbuff_t *tvb , tvbuff_t *member ) ;
extern tvbuff_t *tvb_new_composite(void) ;
extern void tvb_composite_finalize(tvbuff_t *tvb ) ;
extern guint tvb_length(tvbuff_t const   * ) ;
extern gint tvb_length_remaining(tvbuff_t const   * , gint const   offset ) ;
extern guint tvb_ensure_length_remaining(tvbuff_t const   * ,
                                         gint const   offset ) ;
extern gboolean tvb_bytes_exist(tvbuff_t const   * , gint const   offset ,
                                gint const   length ) ;
extern void tvb_ensure_bytes_exist(tvbuff_t const   *tvb , gint const   offset ,
                                   gint const   length ) ;
extern gboolean tvb_offset_exists(tvbuff_t const   * , gint const   offset ) ;
extern guint tvb_reported_length(tvbuff_t const   * ) ;
extern gint tvb_reported_length_remaining(tvbuff_t const   *tvb ,
                                          gint const   offset ) ;
extern void tvb_set_reported_length(tvbuff_t * , guint const    ) ;
extern guint tvb_offset_from_real_beginning(tvbuff_t const   *tvb ) ;
extern guint8 tvb_get_guint8(tvbuff_t * , gint const   offset ) ;
extern guint16 tvb_get_ntohs(tvbuff_t * , gint const   offset ) ;
extern guint32 tvb_get_ntoh24(tvbuff_t * , gint const   offset ) ;
extern guint32 tvb_get_ntohl(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_ntoh40(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_ntoh48(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_ntoh56(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_ntoh64(tvbuff_t * , gint const   offset ) ;
extern gfloat tvb_get_ntohieee_float(tvbuff_t * , gint const   offset ) ;
extern gdouble tvb_get_ntohieee_double(tvbuff_t * , gint const   offset ) ;
extern guint16 tvb_get_letohs(tvbuff_t * , gint const   offset ) ;
extern guint32 tvb_get_letoh24(tvbuff_t * , gint const   offset ) ;
extern guint32 tvb_get_letohl(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_letoh40(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_letoh48(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_letoh56(tvbuff_t * , gint const   offset ) ;
extern guint64 tvb_get_letoh64(tvbuff_t * , gint const   offset ) ;
extern gfloat tvb_get_letohieee_float(tvbuff_t * , gint const   offset ) ;
extern gdouble tvb_get_letohieee_double(tvbuff_t * , gint const   offset ) ;
extern guint32 tvb_get_ipv4(tvbuff_t * , gint const   offset ) ;
extern void tvb_get_ipv6(tvbuff_t * , gint const   offset ,
                         struct e_in6_addr *addr ) ;
extern void tvb_get_ntohguid(tvbuff_t *tvb , gint const   offset ,
                             e_guid_t *guid ) ;
extern void tvb_get_letohguid(tvbuff_t *tvb , gint const   offset ,
                              e_guid_t *guid ) ;
extern void tvb_get_guid(tvbuff_t *tvb , gint const   offset , e_guid_t *guid ,
                         guint const   representation ) ;
extern guint8 tvb_get_bits8(tvbuff_t *tvb , gint bit_offset ,
                            gint const   no_of_bits ) ;
extern guint16 tvb_get_bits16(tvbuff_t *tvb , gint bit_offset ,
                              gint const   no_of_bits ,
                              gboolean const   little_endian ) ;
extern guint32 tvb_get_bits32(tvbuff_t *tvb , gint bit_offset ,
                              gint const   no_of_bits ,
                              gboolean const   little_endian ) ;
extern guint64 tvb_get_bits64(tvbuff_t *tvb , gint bit_offset ,
                              gint const   no_of_bits ,
                              gboolean const   little_endian ) ;
extern guint32 tvb_get_bits(tvbuff_t *tvb , gint const   bit_offset ,
                            gint const   no_of_bits ,
                            gboolean const   little_endian ) ;
extern void tvb_get_bits_buf(tvbuff_t *tvb , gint bit_offset , gint no_of_bits ,
                             guint8 *buf , gboolean lsb0 ) ;
extern guint8 *ep_tvb_get_bits(tvbuff_t *tvb , gint bit_offset ,
                               gint no_of_bits , gboolean lsb0 ) ;
extern void *tvb_memcpy(tvbuff_t * , void *target , gint const   offset ,
                        size_t length ) ;
extern void *tvb_memdup(tvbuff_t * , gint const   offset , size_t length ) ;
extern void *ep_tvb_memdup(tvbuff_t *tvb , gint const   offset , size_t length ) ;
extern guint8 const   *tvb_get_ptr(tvbuff_t * , gint const   offset ,
                                   gint const   length ) ;
extern gint tvb_find_guint8(tvbuff_t * , gint const   offset ,
                            gint const   maxlength , guint8 const   needle ) ;
extern gint tvb_pbrk_guint8(tvbuff_t * , gint const   offset ,
                            gint const   maxlength , guint8 const   *needles ,
                            guchar *found_needle ) ;
extern guint tvb_strsize(tvbuff_t *tvb , gint const   offset ) ;
extern gint tvb_strnlen(tvbuff_t * , gint const   offset ,
                        guint const   maxlength ) ;
extern char *tvb_fake_unicode(tvbuff_t *tvb , int offset , int const   len ,
                              gboolean const   little_endian ) ;
extern char *tvb_get_ephemeral_faked_unicode(tvbuff_t *tvb , int offset ,
                                             int const   len ,
                                             gboolean const   little_endian ) ;
extern gchar *tvb_format_text(tvbuff_t *tvb , gint const   offset ,
                              gint const   size ) ;
extern gchar *tvb_format_text_wsp(tvbuff_t *tvb , gint const   offset ,
                                  gint const   size ) ;
extern gchar *tvb_format_stringzpad(tvbuff_t *tvb , gint const   offset ,
                                    gint const   size ) ;
extern gchar *tvb_format_stringzpad_wsp(tvbuff_t *tvb , gint const   offset ,
                                        gint const   size ) ;
extern guint8 *tvb_get_string(tvbuff_t *tvb , gint const   offset ,
                              gint const   length ) ;
extern gchar *tvb_get_unicode_string(tvbuff_t *tvb , gint const   offset ,
                                     gint length , guint const   encoding ) ;
extern guint8 *tvb_get_ephemeral_string(tvbuff_t *tvb , gint const   offset ,
                                        gint const   length ) ;
extern gchar *tvb_get_ephemeral_unicode_string(tvbuff_t *tvb ,
                                               gint const   offset ,
                                               gint length ,
                                               guint const   encoding ) ;
extern guint8 *tvb_get_seasonal_string(tvbuff_t *tvb , gint const   offset ,
                                       gint const   length ) ;
extern guint8 *tvb_get_stringz(tvbuff_t *tvb , gint const   offset ,
                               gint *lengthp ) ;
extern guint8 const   *tvb_get_const_stringz(tvbuff_t *tvb ,
                                             gint const   offset ,
                                             gint *lengthp ) ;
extern guint8 *tvb_get_ephemeral_stringz(tvbuff_t *tvb , gint const   offset ,
                                         gint *lengthp ) ;
extern gchar *tvb_get_ephemeral_unicode_stringz(tvbuff_t *tvb ,
                                                gint const   offset ,
                                                gint *lengthp ,
                                                guint const   encoding ) ;
extern guint8 *tvb_get_seasonal_stringz(tvbuff_t *tvb , gint const   offset ,
                                        gint *lengthp ) ;
extern gint tvb_get_nstringz(tvbuff_t *tvb , gint const   offset ,
                             guint const   bufsize , guint8 *buffer ) ;
extern gint tvb_get_nstringz0(tvbuff_t *tvb , gint const   offset ,
                              guint const   bufsize , guint8 *buffer ) ;
extern gint tvb_find_line_end(tvbuff_t *tvb , gint const   offset , int len ,
                              gint *next_offset , gboolean const   desegment ) ;
extern gint tvb_find_line_end_unquoted(tvbuff_t *tvb , gint const   offset ,
                                       int len , gint *next_offset ) ;
extern gint tvb_skip_wsp(tvbuff_t *tvb , gint const   offset ,
                         gint const   maxlength ) ;
extern gint tvb_skip_wsp_return(tvbuff_t *tvb , gint const   offset ) ;
extern gint tvb_strneql(tvbuff_t *tvb , gint const   offset ,
                        gchar const   *str , size_t const   size ) ;
extern gint tvb_strncaseeql(tvbuff_t *tvb , gint const   offset ,
                            gchar const   *str , size_t const   size ) ;
extern gint tvb_memeql(tvbuff_t *tvb , gint const   offset ,
                       guint8 const   *str , size_t size ) ;
extern gchar *tvb_bytes_to_str_punct(tvbuff_t *tvb , gint const   offset ,
                                     gint const   len , gchar const   punct ) ;
extern gchar *tvb_bytes_to_str(tvbuff_t *tvb , gint const   offset ,
                               gint const   len ) ;
extern gchar *tvb_bcd_dig_to_ep_str(tvbuff_t *tvb , gint const   offset ,
                                    gint const   len , dgt_set_t *dgt ,
                                    gboolean skip_first ) ;
extern gint tvb_find_tvb(tvbuff_t *haystack_tvb , tvbuff_t *needle_tvb ,
                         gint const   haystack_offset ) ;
extern tvbuff_t *tvb_uncompress(tvbuff_t *tvb , int const   offset ,
                                int comprlen ) ;
extern tvbuff_t *tvb_child_uncompress(tvbuff_t *parent , tvbuff_t *tvb ,
                                      int const   offset , int comprlen ) ;
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
extern struct wtap *wtap_open_offline(char const   *filename , int *err ,
                                      gchar **err_info , gboolean do_random ) ;
extern void wtap_cleareof(wtap *wth ) ;
extern void wtap_set_cb_new_ipv4(wtap *wth ,
                                 void (*add_new_ipv4)(guint const   addr ,
                                                      gchar const   *name ) ) ;
extern void wtap_set_cb_new_ipv6(wtap *wth ,
                                 void (*add_new_ipv6)(void const   *addrp ,
                                                      gchar const   *name ) ) ;
extern gboolean wtap_read(wtap *wth , int *err , gchar **err_info ,
                          gint64 *data_offset ) ;
extern gboolean wtap_seek_read(wtap *wth , gint64 seek_off ,
                               union wtap_pseudo_header *pseudo_header ,
                               guint8 *pd , int len , int *err ,
                               gchar **err_info ) ;
extern struct wtap_pkthdr *wtap_phdr(wtap *wth ) ;
extern union wtap_pseudo_header *wtap_pseudoheader(wtap *wth ) ;
extern guint8 *wtap_buf_ptr(wtap *wth ) ;
extern gint64 wtap_read_so_far(wtap *wth ) ;
extern gint64 wtap_file_size(wtap *wth , int *err ) ;
extern int wtap_snapshot_length(wtap *wth ) ;
extern int wtap_file_type(wtap *wth ) ;
extern int wtap_file_encap(wtap *wth ) ;
extern int wtap_file_tsprecision(wtap *wth ) ;
extern void wtap_sequential_close(wtap *wth ) ;
extern void wtap_close(wtap *wth ) ;
extern gboolean wtap_dump_can_open(int filetype ) ;
extern gboolean wtap_dump_can_write_encap(int filetype , int encap ) ;
extern gboolean wtap_dump_can_compress(int filetype ) ;
extern gboolean wtap_dump_has_name_resolution(int filetype ) ;
extern wtap_dumper *wtap_dump_open(char const   *filename , int filetype ,
                                   int encap , int snaplen ,
                                   gboolean compressed , int *err ) ;
extern wtap_dumper *wtap_dump_fdopen(int fd , int filetype , int encap ,
                                     int snaplen , gboolean compressed ,
                                     int *err ) ;
extern gboolean wtap_dump(wtap_dumper * , struct wtap_pkthdr  const  * ,
                          union wtap_pseudo_header  const  *pseudo_header ,
                          guchar const   * , int *err ) ;
extern void wtap_dump_flush(wtap_dumper * ) ;
extern gint64 wtap_get_bytes_dumped(wtap_dumper * ) ;
extern void wtap_set_bytes_dumped(wtap_dumper *wdh , gint64 bytes_dumped ) ;
extern gboolean wtap_dump_set_addrinfo_list(wtap_dumper *wdh ,
                                            struct addrinfo *addrinfo_list ) ;
extern gboolean wtap_dump_close(wtap_dumper * , int * ) ;
extern char const   *wtap_file_type_string(int filetype ) ;
extern char const   *wtap_file_type_short_string(int filetype ) ;
extern int wtap_short_string_to_file_type(char const   *short_name ) ;
extern char const   *wtap_file_extensions_string(int filetype ) ;
extern char const   *wtap_file_extension_default_string(int filetype ) ;
extern char const   *wtap_encap_string(int encap ) ;
extern char const   *wtap_encap_short_string(int encap ) ;
extern int wtap_short_string_to_encap(char const   *short_name ) ;
extern char const   *wtap_strerror(int err ) ;
extern int wtap_get_num_encap_types(void) ;
extern int wtap_get_num_file_types(void) ;
extern void wtap_register_open_routine(int (*)(struct wtap * , int * , char ** ) ,
                                       gboolean has_magic ) ;
extern int wtap_register_file_type(struct file_type_info  const  *fi ) ;
extern int wtap_register_encap_type(char *name , char *short_name ) ;
extern void nstime_set_zero(nstime_t *nstime ) ;
extern gboolean nstime_is_zero(nstime_t *nstime ) ;
extern void nstime_set_unset(nstime_t *nstime ) ;
extern gboolean nstime_is_unset(nstime_t *nstime ) ;
extern void nstime_delta(nstime_t *delta , nstime_t const   *b ,
                         nstime_t const   *a ) ;
extern void nstime_sum(nstime_t *sum , nstime_t const   *b ,
                       nstime_t const   *a ) ;
extern void nstime_diff(nstime_t *diff , nstime_t const   *b ,
                        nstime_t const   *a ) ;
extern int nstime_cmp(nstime_t const   *a , nstime_t const   *b ) ;
extern double nstime_to_msec(nstime_t const   *nstime ) ;
extern double nstime_to_sec(nstime_t const   *nstime ) ;
extern double wtap_nstime_to_sec(struct wtap_nstime  const  *nstime ) ;
extern void p_add_proto_data(frame_data *fd , int proto , void *proto_data ) ;
extern void *p_get_proto_data(frame_data *fd , int proto ) ;
extern void p_remove_proto_data(frame_data *fd , int proto ) ;
extern gint frame_data_compare(frame_data const   *fdata1 ,
                               frame_data const   *fdata2 , int field ) ;
extern void frame_data_cleanup(frame_data *fdata ) ;
extern void frame_data_init(frame_data *fdata , guint32 num ,
                            struct wtap_pkthdr  const  *phdr , gint64 offset ,
                            guint32 cum_bytes ) ;
extern void frame_data_set_before_dissect(frame_data *fdata ,
                                          nstime_t *elapsed_time ,
                                          nstime_t *first_ts ,
                                          nstime_t *prev_dis_ts ,
                                          nstime_t *prev_cap_ts ) ;
extern void frame_data_set_after_dissect(frame_data *fdata ,
                                         guint32 *cum_bytes ,
                                         nstime_t *prev_dis_ts ) ;
extern range_t *range_empty(void) ;
extern convert_ret_t range_convert_str(range_t **range , gchar const   *es ,
                                       guint32 max_value ) ;
extern convert_ret_t range_convert_str_work(range_t **range ,
                                            gchar const   *es ,
                                            guint32 max_value ,
                                            gboolean err_on_max ) ;
extern gboolean value_is_in_range(range_t *range , guint32 val ) ;
extern gboolean ranges_are_equal(range_t *a , range_t *b ) ;
extern void range_foreach(range_t *range , void (*callback)(guint32 val ) ) ;
extern char *range_convert_range(range_t *range ) ;
extern range_t *range_copy(range_t *src ) ;
extern guint32 curr_selected_frame ;
extern void packet_range_init(packet_range_t *range ) ;
extern convert_ret_t packet_range_check(packet_range_t *range ) ;
extern void packet_range_process_init(packet_range_t *range ) ;
extern gboolean packet_range_process_all(packet_range_t *range ) ;
extern range_process_e packet_range_process_packet(packet_range_t *range ,
                                                   frame_data *fdata ) ;
extern void packet_range_convert_str(packet_range_t *range , gchar const   *es ) ;
extern void register_all_protocols(void (*cb)(register_action_e action ,
                                              char const   *message ,
                                              gpointer client_data ) ,
                                   gpointer client_data ) ;
extern void register_all_protocol_handoffs(void (*cb)(register_action_e action ,
                                                      char const   *message ,
                                                      gpointer client_data ) ,
                                           gpointer client_data ) ;
extern void register_all_tap_listeners(void) ;
extern gulong register_count(void) ;
extern void epan_init(void (*register_all_protocols_func)(void (*cb)(register_action_e action ,
                                                                     char const   *message ,
                                                                     gpointer client_data ) ,
                                                          gpointer client_data ) ,
                      void (*register_all_handoffs_func)(void (*cb)(register_action_e action ,
                                                                    char const   *message ,
                                                                    gpointer client_data ) ,
                                                         gpointer client_data ) ,
                      void (*cb)(register_action_e action ,
                                 char const   *message , gpointer client_data ) ,
                      void *client_data ,
                      void (*report_failure_fcn_p)(char const   * , va_list  ) ,
                      void (*report_open_failure_fcn_p)(char const   * , int  ,
                                                        gboolean  ) ,
                      void (*report_read_failure_fcn_p)(char const   * , int  ) ,
                      void (*report_write_failure_fcn_p)(char const   * , int  ) ) ;
extern void epan_cleanup(void) ;
extern void epan_conversation_init(void) ;
extern void epan_conversation_cleanup(void) ;
extern void epan_circuit_init(void) ;
extern void epan_circuit_cleanup(void) ;
extern epan_t *epan_new(void) ;
extern void epan_free(epan_t * ) ;
extern gchar *epan_get_version(void) ;
extern epan_dissect_t *epan_dissect_init(epan_dissect_t *edt ,
                                         gboolean const   create_proto_tree ,
                                         gboolean const   proto_tree_visible ) ;
extern epan_dissect_t *epan_dissect_new(gboolean const   create_proto_tree ,
                                        gboolean const   proto_tree_visible ) ;
extern void epan_dissect_fake_protocols(epan_dissect_t *edt ,
                                        gboolean const   fake_protocols ) ;
extern void epan_dissect_run(epan_dissect_t *edt , void *pseudo_header ,
                             guint8 const   *data , frame_data *fd ,
                             column_info *cinfo ) ;
extern void epan_dissect_prime_dfilter(epan_dissect_t *edt ,
                                       dfilter_t const   *dfcode ) ;
extern void epan_dissect_fill_in_columns(epan_dissect_t *edt ,
                                         gboolean const   fill_col_exprs ,
                                         gboolean const   fill_fd_colums ) ;
extern void epan_dissect_cleanup(epan_dissect_t *edt ) ;
extern void epan_dissect_free(epan_dissect_t *edt ) ;
extern gchar const   *epan_custom_set(epan_dissect_t *edt , int id ,
                                      gint occurrence , gchar *result ,
                                      gchar *expr , int const   size ) ;
extern void epan_get_compiled_version_info(GString *str ) ;
extern void epan_get_runtime_version_info(GString *str ) ;
extern ipv4_addr *ipv4_addr_new(void) ;
extern void ipv4_addr_free(ipv4_addr *ipv4 ) ;
extern void ipv4_addr_set_host_order_addr(ipv4_addr *ipv4 ,
                                          guint32 const   new_addr ) ;
extern void ipv4_addr_set_net_order_addr(ipv4_addr *ipv4 ,
                                         guint32 const   new_addr ) ;
extern void ipv4_addr_set_netmask_bits(ipv4_addr *ipv4 ,
                                       guint const   new_nmask_bits ) ;
extern guint32 ipv4_get_net_order_addr(ipv4_addr *ipv4 ) ;
extern guint32 ipv4_get_host_order_addr(ipv4_addr *ipv4 ) ;
extern void ipv4_addr_str_buf(ipv4_addr const   *ipv4 , gchar *buf ) ;
extern gboolean ipv4_addr_eq(ipv4_addr *a , ipv4_addr *b ) ;
extern gboolean ipv4_addr_gt(ipv4_addr *a , ipv4_addr *b ) ;
extern gboolean ipv4_addr_ge(ipv4_addr *a , ipv4_addr *b ) ;
extern gboolean ipv4_addr_lt(ipv4_addr *a , ipv4_addr *b ) ;
extern gboolean ipv4_addr_le(ipv4_addr *a , ipv4_addr *b ) ;
extern void emem_init(void) ;
extern void *ep_alloc(size_t size )  __attribute__((__malloc__)) ;
extern void *ep_alloc0(size_t size )  __attribute__((__malloc__)) ;
extern gchar *ep_strdup(gchar const   *src )  __attribute__((__malloc__)) ;
extern gchar *ep_strndup(gchar const   *src , size_t len )  __attribute__((__malloc__)) ;
extern void *ep_memdup(void const   *src , size_t len )  __attribute__((__malloc__)) ;
extern gchar *ep_strdup_vprintf(gchar const   *fmt , va_list ap )  __attribute__((__malloc__)) ;
extern gchar *( /* format attribute */  ep_strdup_printf)(gchar const   *fmt 
                                                          , ...)  __attribute__((__malloc__)) ;
extern gchar *ep_strconcat(gchar const   *string  , ...)  __attribute__((__sentinel__,
__malloc__)) ;
extern gchar **ep_strsplit(gchar const   *string , gchar const   *delimiter ,
                           int max_tokens ) ;
extern void ep_free_all(void) ;
extern ep_stack_t ep_stack_new(void)  __attribute__((__malloc__)) ;
extern void *ep_stack_push(ep_stack_t stack , void *item ) ;
extern void *ep_stack_pop(ep_stack_t stack ) ;
extern void *se_alloc(size_t size )  __attribute__((__malloc__)) ;
extern void *se_alloc0(size_t size )  __attribute__((__malloc__)) ;
extern gchar *se_strdup(gchar const   *src )  __attribute__((__malloc__)) ;
extern gchar *se_strndup(gchar const   *src , size_t len )  __attribute__((__malloc__)) ;
extern void *se_memdup(void const   *src , size_t len )  __attribute__((__malloc__)) ;
extern gchar *se_strdup_vprintf(gchar const   *fmt , va_list ap )  __attribute__((__malloc__)) ;
extern gchar *( /* format attribute */  se_strdup_printf)(gchar const   *fmt 
                                                          , ...)  __attribute__((__malloc__)) ;
extern void se_free_all(void) ;
extern void *sl_alloc(struct ws_memory_slab *mem_chunk ) ;
extern void *sl_alloc0(struct ws_memory_slab *mem_chunk ) ;
extern void sl_free(struct ws_memory_slab *mem_chunk , gpointer ptr ) ;
extern void sl_free_all(struct ws_memory_slab *mem_chunk ) ;
extern emem_tree_t *se_tree_create(int type , char const   *name )  __attribute__((__malloc__)) ;
extern emem_tree_t *se_tree_create_non_persistent(int type , char const   *name )  __attribute__((__malloc__)) ;
extern emem_tree_t *pe_tree_create(int type , char const   *name )  __attribute__((__malloc__)) ;
extern void emem_tree_insert32(emem_tree_t *se_tree , guint32 key , void *data ) ;
extern void *emem_tree_lookup32(emem_tree_t *se_tree , guint32 key ) ;
extern void *emem_tree_lookup32_le(emem_tree_t *se_tree , guint32 key ) ;
extern void emem_tree_insert32_array(emem_tree_t *se_tree ,
                                     emem_tree_key_t *key , void *data ) ;
extern void *emem_tree_lookup32_array(emem_tree_t *se_tree ,
                                      emem_tree_key_t *key ) ;
extern void *emem_tree_lookup32_array_le(emem_tree_t *se_tree ,
                                         emem_tree_key_t *key ) ;
extern void emem_tree_insert_string(emem_tree_t *h , gchar const   *k ,
                                    void *v , guint32 flags ) ;
extern void *emem_tree_lookup_string(emem_tree_t *h , gchar const   *k ,
                                     guint32 flags ) ;
extern gboolean emem_tree_foreach(emem_tree_t *emem_tree ,
                                  gboolean (*callback)(void *value ,
                                                       void *userdata ) ,
                                  void *user_data ) ;
extern emem_strbuf_t *ep_strbuf_new(gchar const   *init )  __attribute__((__malloc__)) ;
extern emem_strbuf_t *ep_strbuf_new_label(gchar const   *init )  __attribute__((__malloc__)) ;
extern emem_strbuf_t *ep_strbuf_sized_new(gsize alloc_len , gsize max_alloc_len )  __attribute__((__malloc__)) ;
extern void ep_strbuf_append_vprintf(emem_strbuf_t *strbuf ,
                                     gchar const   *format , va_list ap ) ;
extern void ( /* format attribute */  ep_strbuf_printf)(emem_strbuf_t *strbuf ,
                                                        gchar const   *format 
                                                        , ...) ;
extern void ( /* format attribute */  ep_strbuf_append_printf)(emem_strbuf_t *strbuf ,
                                                               gchar const   *format 
                                                               , ...) ;
extern emem_strbuf_t *ep_strbuf_append(emem_strbuf_t *strbuf ,
                                       gchar const   *str ) ;
extern emem_strbuf_t *ep_strbuf_append_c(emem_strbuf_t *strbuf ,
                                         gchar const   c ) ;
extern emem_strbuf_t *ep_strbuf_truncate(emem_strbuf_t *strbuf , gsize len ) ;
extern void emem_print_tree(emem_tree_t *emem_tree ) ;
extern gboolean ep_verify_pointer(void const   *ptr ) ;
extern gboolean se_verify_pointer(void const   *ptr ) ;
extern void ftypes_initialize(void) ;
extern char const   *ftype_name(ftenum_t ftype ) ;
extern char const   *ftype_pretty_name(ftenum_t ftype ) ;
extern int ftype_length(ftenum_t ftype ) ;
extern gboolean ftype_can_slice(enum ftenum ftype ) ;
extern gboolean ftype_can_eq(enum ftenum ftype ) ;
extern gboolean ftype_can_ne(enum ftenum ftype ) ;
extern gboolean ftype_can_gt(enum ftenum ftype ) ;
extern gboolean ftype_can_ge(enum ftenum ftype ) ;
extern gboolean ftype_can_lt(enum ftenum ftype ) ;
extern gboolean ftype_can_le(enum ftenum ftype ) ;
extern gboolean ftype_can_bitwise_and(enum ftenum ftype ) ;
extern gboolean ftype_can_contains(enum ftenum ftype ) ;
extern gboolean ftype_can_matches(enum ftenum ftype ) ;
extern drange_node *drange_node_new(void) ;
extern void drange_node_free(drange_node *drnode ) ;
extern void drange_node_free_list(GSList *list ) ;
extern gint drange_node_get_start_offset(drange_node *drnode ) ;
extern gint drange_node_get_length(drange_node *drnode ) ;
extern gint drange_node_get_end_offset(drange_node *drnode ) ;
extern drange_node_end_t drange_node_get_ending(drange_node *drnode ) ;
extern void drange_node_set_start_offset(drange_node *drnode , gint offset ) ;
extern void drange_node_set_length(drange_node *drnode , gint length ) ;
extern void drange_node_set_end_offset(drange_node *drnode , gint offset ) ;
extern void drange_node_set_to_the_end(drange_node *drnode ) ;
extern drange *drange_new(void) ;
extern drange *drange_new_from_list(GSList *list ) ;
extern void drange_free(drange *dr ) ;
extern gboolean drange_has_total_length(drange *dr ) ;
extern gint drange_get_total_length(drange *dr ) ;
extern gint drange_get_min_start_offset(drange *dr ) ;
extern gint drange_get_max_start_offset(drange *dr ) ;
extern void drange_append_drange_node(drange *dr , drange_node *drnode ) ;
extern void drange_prepend_drange_node(drange *dr , drange_node *drnode ) ;
extern void drange_foreach_drange_node(drange *dr ,
                                       void (*func)(gpointer data ,
                                                    gpointer user_data ) ,
                                       gpointer funcdata ) ;
extern fvalue_t *fvalue_new(ftenum_t ftype ) ;
extern void fvalue_init(fvalue_t *fv , ftenum_t ftype ) ;
extern struct ws_memory_slab fvalue_t_slab ;
extern fvalue_t *fvalue_from_unparsed(ftenum_t ftype , char *s ,
                                      gboolean allow_partial_value ,
                                      void (*logfunc)(char const   *  , ...) ) ;
extern fvalue_t *fvalue_from_string(ftenum_t ftype , char *s ,
                                    void (*logfunc)(char const   *  , ...) ) ;
extern int fvalue_string_repr_len(fvalue_t *fv , ftrepr_t rtype ) ;
extern char *fvalue_to_string_repr(fvalue_t *fv , ftrepr_t rtype , char *buf ) ;
extern ftype_t *fvalue_ftype(fvalue_t *fv ) ;
extern char const   *fvalue_type_name(fvalue_t *fv ) ;
extern void fvalue_set(fvalue_t *fv , gpointer value , gboolean already_copied ) ;
extern void fvalue_set_uinteger(fvalue_t *fv , guint32 value ) ;
extern void fvalue_set_sinteger(fvalue_t *fv , gint32 value ) ;
extern void fvalue_set_integer64(fvalue_t *fv , guint64 value ) ;
extern void fvalue_set_floating(fvalue_t *fv , gdouble value ) ;
extern gpointer fvalue_get(fvalue_t *fv ) ;
extern guint32 fvalue_get_uinteger(fvalue_t *fv ) ;
extern gint32 fvalue_get_sinteger(fvalue_t *fv ) ;
extern guint64 fvalue_get_integer64(fvalue_t *fv ) ;
extern double fvalue_get_floating(fvalue_t *fv ) ;
extern gboolean fvalue_eq(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_ne(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_gt(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_ge(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_lt(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_le(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_bitwise_and(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_contains(fvalue_t *a , fvalue_t *b ) ;
extern gboolean fvalue_matches(fvalue_t *a , fvalue_t *b ) ;
extern guint fvalue_length(fvalue_t *fv ) ;
extern fvalue_t *fvalue_slice(fvalue_t *fv , drange *dr ) ;
extern int hf_text_only ;
extern gboolean proto_tree_traverse_post_order(proto_tree *tree ,
                                               gboolean (*func)(proto_node * ,
                                                                gpointer  ) ,
                                               gpointer data ) ;
extern void proto_tree_children_foreach(proto_tree *tree ,
                                        void (*func)(proto_node * , gpointer  ) ,
                                        gpointer data ) ;
extern void proto_init(void (*register_all_protocols_func)(void (*cb)(register_action_e action ,
                                                                      char const   *message ,
                                                                      gpointer client_data ) ,
                                                           gpointer client_data ) ,
                       void (*register_all_handoffs_func)(void (*cb)(register_action_e action ,
                                                                     char const   *message ,
                                                                     gpointer client_data ) ,
                                                          gpointer client_data ) ,
                       void (*cb)(register_action_e action ,
                                  char const   *message , gpointer client_data ) ,
                       void *client_data ) ;
extern void proto_cleanup(void) ;
extern gboolean proto_field_is_referenced(proto_tree *tree , int proto_id ) ;
extern proto_tree *( __attribute__((__warn_unused_result__)) proto_item_add_subtree)(proto_item *ti ,
                                                                                     gint const   idx ) ;
extern proto_tree *proto_item_get_subtree(proto_item const   *ti ) ;
extern proto_item *proto_item_get_parent(proto_item const   *ti ) ;
extern proto_item *proto_item_get_parent_nth(proto_item *ti , int gen ) ;
extern void ( /* format attribute */  proto_item_set_text)(proto_item *ti ,
                                                           char const   *format 
                                                           , ...) ;
extern void ( /* format attribute */  proto_item_append_text)(proto_item *ti ,
                                                              char const   *format 
                                                              , ...) ;
extern void ( /* format attribute */  proto_item_prepend_text)(proto_item *ti ,
                                                               char const   *format 
                                                               , ...) ;
extern void proto_item_set_len(proto_item *ti , gint const   length ) ;
extern void proto_item_set_end(proto_item *ti , tvbuff_t *tvb , gint end ) ;
extern int proto_item_get_len(proto_item const   *ti ) ;
extern gboolean proto_item_set_expert_flags(proto_item *ti , int const   group ,
                                            guint const   severity ) ;
extern proto_tree *proto_tree_create_root(void) ;
extern void proto_tree_free(proto_tree *tree ) ;
extern gboolean proto_tree_set_visible(proto_tree *tree , gboolean visible ) ;
extern void proto_tree_set_fake_protocols(proto_tree *tree ,
                                          gboolean fake_protocols ) ;
extern void proto_tree_prime_hfid(proto_tree *tree , int const   hfid ) ;
extern proto_item *proto_tree_get_parent(proto_tree const   *tree ) ;
extern proto_tree *proto_tree_get_root(proto_tree *tree ) ;
extern void proto_tree_move_item(proto_tree *tree , proto_item *fixed_item ,
                                 proto_item *item_to_move ) ;
extern void proto_tree_set_appendix(proto_tree *tree , tvbuff_t *tvb ,
                                    gint start , gint const   length ) ;
extern proto_item *proto_tree_add_item(proto_tree *tree , int const   hfindex ,
                                       tvbuff_t *tvb , gint const   start ,
                                       gint length , guint const   encoding ) ;
extern proto_item *( /* format attribute */  proto_tree_add_text)(proto_tree *tree ,
                                                                  tvbuff_t *tvb ,
                                                                  gint start ,
                                                                  gint length ,
                                                                  char const   *format 
                                                                  , ...) ;
extern proto_item *proto_tree_add_text_valist(proto_tree *tree , tvbuff_t *tvb ,
                                              gint start , gint length ,
                                              char const   *format , va_list ap ) ;
extern proto_item *( /* format attribute */  proto_tree_add_none_format)(proto_tree *tree ,
                                                                         int const   hfindex ,
                                                                         tvbuff_t *tvb ,
                                                                         gint const   start ,
                                                                         gint length ,
                                                                         char const   *format 
                                                                         , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_protocol_format)(proto_tree *tree ,
                                                                             int hfindex ,
                                                                             tvbuff_t *tvb ,
                                                                             gint start ,
                                                                             gint length ,
                                                                             char const   *format 
                                                                             , ...) ;
extern proto_item *proto_tree_add_bytes(proto_tree *tree , int hfindex ,
                                        tvbuff_t *tvb , gint start ,
                                        gint length , guint8 const   *start_ptr ) ;
extern proto_item *( /* format attribute */  proto_tree_add_bytes_format_value)(proto_tree *tree ,
                                                                                int hfindex ,
                                                                                tvbuff_t *tvb ,
                                                                                gint start ,
                                                                                gint length ,
                                                                                guint8 const   *start_ptr ,
                                                                                char const   *format 
                                                                                , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_bytes_format)(proto_tree *tree ,
                                                                          int hfindex ,
                                                                          tvbuff_t *tvb ,
                                                                          gint start ,
                                                                          gint length ,
                                                                          guint8 const   *start_ptr ,
                                                                          char const   *format 
                                                                          , ...) ;
extern proto_item *proto_tree_add_time(proto_tree *tree , int hfindex ,
                                       tvbuff_t *tvb , gint start ,
                                       gint length , nstime_t *value_ptr ) ;
extern proto_item *( /* format attribute */  proto_tree_add_time_format_value)(proto_tree *tree ,
                                                                               int hfindex ,
                                                                               tvbuff_t *tvb ,
                                                                               gint start ,
                                                                               gint length ,
                                                                               nstime_t *value_ptr ,
                                                                               char const   *format 
                                                                               , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_time_format)(proto_tree *tree ,
                                                                         int hfindex ,
                                                                         tvbuff_t *tvb ,
                                                                         gint start ,
                                                                         gint length ,
                                                                         nstime_t *value_ptr ,
                                                                         char const   *format 
                                                                         , ...) ;
extern proto_item *proto_tree_add_ipxnet(proto_tree *tree , int hfindex ,
                                         tvbuff_t *tvb , gint start ,
                                         gint length , guint32 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_ipxnet_format_value)(proto_tree *tree ,
                                                                                 int hfindex ,
                                                                                 tvbuff_t *tvb ,
                                                                                 gint start ,
                                                                                 gint length ,
                                                                                 guint32 value ,
                                                                                 char const   *format 
                                                                                 , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_ipxnet_format)(proto_tree *tree ,
                                                                           int hfindex ,
                                                                           tvbuff_t *tvb ,
                                                                           gint start ,
                                                                           gint length ,
                                                                           guint32 value ,
                                                                           char const   *format 
                                                                           , ...) ;
extern proto_item *proto_tree_add_ipv4(proto_tree *tree , int hfindex ,
                                       tvbuff_t *tvb , gint start ,
                                       gint length , guint32 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_ipv4_format_value)(proto_tree *tree ,
                                                                               int hfindex ,
                                                                               tvbuff_t *tvb ,
                                                                               gint start ,
                                                                               gint length ,
                                                                               guint32 value ,
                                                                               char const   *format 
                                                                               , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_ipv4_format)(proto_tree *tree ,
                                                                         int hfindex ,
                                                                         tvbuff_t *tvb ,
                                                                         gint start ,
                                                                         gint length ,
                                                                         guint32 value ,
                                                                         char const   *format 
                                                                         , ...) ;
extern proto_item *proto_tree_add_ipv6(proto_tree *tree , int hfindex ,
                                       tvbuff_t *tvb , gint start ,
                                       gint length , guint8 const   *value_ptr ) ;
extern proto_item *( /* format attribute */  proto_tree_add_ipv6_format_value)(proto_tree *tree ,
                                                                               int hfindex ,
                                                                               tvbuff_t *tvb ,
                                                                               gint start ,
                                                                               gint length ,
                                                                               guint8 const   *value_ptr ,
                                                                               char const   *format 
                                                                               , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_ipv6_format)(proto_tree *tree ,
                                                                         int hfindex ,
                                                                         tvbuff_t *tvb ,
                                                                         gint start ,
                                                                         gint length ,
                                                                         guint8 const   *value_ptr ,
                                                                         char const   *format 
                                                                         , ...) ;
extern proto_item *proto_tree_add_ether(proto_tree *tree , int hfindex ,
                                        tvbuff_t *tvb , gint start ,
                                        gint length , guint8 const   *value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_ether_format_value)(proto_tree *tree ,
                                                                                int hfindex ,
                                                                                tvbuff_t *tvb ,
                                                                                gint start ,
                                                                                gint length ,
                                                                                guint8 const   *value ,
                                                                                char const   *format 
                                                                                , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_ether_format)(proto_tree *tree ,
                                                                          int hfindex ,
                                                                          tvbuff_t *tvb ,
                                                                          gint start ,
                                                                          gint length ,
                                                                          guint8 const   *value ,
                                                                          char const   *format 
                                                                          , ...) ;
extern proto_item *proto_tree_add_guid(proto_tree *tree , int hfindex ,
                                       tvbuff_t *tvb , gint start ,
                                       gint length ,
                                       e_guid_t const   *value_ptr ) ;
extern proto_item *( /* format attribute */  proto_tree_add_guid_format_value)(proto_tree *tree ,
                                                                               int hfindex ,
                                                                               tvbuff_t *tvb ,
                                                                               gint start ,
                                                                               gint length ,
                                                                               e_guid_t const   *value_ptr ,
                                                                               char const   *format 
                                                                               , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_guid_format)(proto_tree *tree ,
                                                                         int hfindex ,
                                                                         tvbuff_t *tvb ,
                                                                         gint start ,
                                                                         gint length ,
                                                                         e_guid_t const   *value_ptr ,
                                                                         char const   *format 
                                                                         , ...) ;
extern proto_item *proto_tree_add_oid(proto_tree *tree , int hfindex ,
                                      tvbuff_t *tvb , gint start , gint length ,
                                      guint8 const   *value_ptr ) ;
extern proto_item *( /* format attribute */  proto_tree_add_oid_format_value)(proto_tree *tree ,
                                                                              int hfindex ,
                                                                              tvbuff_t *tvb ,
                                                                              gint start ,
                                                                              gint length ,
                                                                              guint8 const   *value_ptr ,
                                                                              char const   *format 
                                                                              , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_oid_format)(proto_tree *tree ,
                                                                        int hfindex ,
                                                                        tvbuff_t *tvb ,
                                                                        gint start ,
                                                                        gint length ,
                                                                        guint8 const   *value_ptr ,
                                                                        char const   *format 
                                                                        , ...) ;
extern proto_item *proto_tree_add_string(proto_tree *tree , int hfindex ,
                                         tvbuff_t *tvb , gint start ,
                                         gint length , char const   *value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_string_format_value)(proto_tree *tree ,
                                                                                 int hfindex ,
                                                                                 tvbuff_t *tvb ,
                                                                                 gint start ,
                                                                                 gint length ,
                                                                                 char const   *value ,
                                                                                 char const   *format 
                                                                                 , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_string_format)(proto_tree *tree ,
                                                                           int hfindex ,
                                                                           tvbuff_t *tvb ,
                                                                           gint start ,
                                                                           gint length ,
                                                                           char const   *value ,
                                                                           char const   *format 
                                                                           , ...) ;
extern proto_item *proto_tree_add_boolean(proto_tree *tree , int hfindex ,
                                          tvbuff_t *tvb , gint start ,
                                          gint length , guint32 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_boolean_format_value)(proto_tree *tree ,
                                                                                  int hfindex ,
                                                                                  tvbuff_t *tvb ,
                                                                                  gint start ,
                                                                                  gint length ,
                                                                                  guint32 value ,
                                                                                  char const   *format 
                                                                                  , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_boolean_format)(proto_tree *tree ,
                                                                            int hfindex ,
                                                                            tvbuff_t *tvb ,
                                                                            gint start ,
                                                                            gint length ,
                                                                            guint32 value ,
                                                                            char const   *format 
                                                                            , ...) ;
extern proto_item *proto_tree_add_float(proto_tree *tree , int hfindex ,
                                        tvbuff_t *tvb , gint start ,
                                        gint length , float value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_float_format_value)(proto_tree *tree ,
                                                                                int hfindex ,
                                                                                tvbuff_t *tvb ,
                                                                                gint start ,
                                                                                gint length ,
                                                                                float value ,
                                                                                char const   *format 
                                                                                , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_float_format)(proto_tree *tree ,
                                                                          int hfindex ,
                                                                          tvbuff_t *tvb ,
                                                                          gint start ,
                                                                          gint length ,
                                                                          float value ,
                                                                          char const   *format 
                                                                          , ...) ;
extern proto_item *proto_tree_add_double(proto_tree *tree , int hfindex ,
                                         tvbuff_t *tvb , gint start ,
                                         gint length , double value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_double_format_value)(proto_tree *tree ,
                                                                                 int hfindex ,
                                                                                 tvbuff_t *tvb ,
                                                                                 gint start ,
                                                                                 gint length ,
                                                                                 double value ,
                                                                                 char const   *format 
                                                                                 , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_double_format)(proto_tree *tree ,
                                                                           int hfindex ,
                                                                           tvbuff_t *tvb ,
                                                                           gint start ,
                                                                           gint length ,
                                                                           double value ,
                                                                           char const   *format 
                                                                           , ...) ;
extern proto_item *proto_tree_add_uint(proto_tree *tree , int hfindex ,
                                       tvbuff_t *tvb , gint start ,
                                       gint length , guint32 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_uint_format_value)(proto_tree *tree ,
                                                                               int hfindex ,
                                                                               tvbuff_t *tvb ,
                                                                               gint start ,
                                                                               gint length ,
                                                                               guint32 value ,
                                                                               char const   *format 
                                                                               , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_uint_format)(proto_tree *tree ,
                                                                         int hfindex ,
                                                                         tvbuff_t *tvb ,
                                                                         gint start ,
                                                                         gint length ,
                                                                         guint32 value ,
                                                                         char const   *format 
                                                                         , ...) ;
extern proto_item *proto_tree_add_uint64(proto_tree *tree , int hfindex ,
                                         tvbuff_t *tvb , gint start ,
                                         gint length , guint64 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_uint64_format_value)(proto_tree *tree ,
                                                                                 int hfindex ,
                                                                                 tvbuff_t *tvb ,
                                                                                 gint start ,
                                                                                 gint length ,
                                                                                 guint64 value ,
                                                                                 char const   *format 
                                                                                 , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_uint64_format)(proto_tree *tree ,
                                                                           int hfindex ,
                                                                           tvbuff_t *tvb ,
                                                                           gint start ,
                                                                           gint length ,
                                                                           guint64 value ,
                                                                           char const   *format 
                                                                           , ...) ;
extern proto_item *proto_tree_add_int(proto_tree *tree , int hfindex ,
                                      tvbuff_t *tvb , gint start , gint length ,
                                      gint32 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_int_format_value)(proto_tree *tree ,
                                                                              int hfindex ,
                                                                              tvbuff_t *tvb ,
                                                                              gint start ,
                                                                              gint length ,
                                                                              gint32 value ,
                                                                              char const   *format 
                                                                              , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_int_format)(proto_tree *tree ,
                                                                        int hfindex ,
                                                                        tvbuff_t *tvb ,
                                                                        gint start ,
                                                                        gint length ,
                                                                        gint32 value ,
                                                                        char const   *format 
                                                                        , ...) ;
extern proto_item *proto_tree_add_int64(proto_tree *tree , int hfindex ,
                                        tvbuff_t *tvb , gint start ,
                                        gint length , gint64 value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_int64_format_value)(proto_tree *tree ,
                                                                                int hfindex ,
                                                                                tvbuff_t *tvb ,
                                                                                gint start ,
                                                                                gint length ,
                                                                                gint64 value ,
                                                                                char const   *format 
                                                                                , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_int64_format)(proto_tree *tree ,
                                                                          int hfindex ,
                                                                          tvbuff_t *tvb ,
                                                                          gint start ,
                                                                          gint length ,
                                                                          gint64 value ,
                                                                          char const   *format 
                                                                          , ...) ;
extern proto_item *proto_tree_add_eui64(proto_tree *tree , int hfindex ,
                                        tvbuff_t *tvb , gint start ,
                                        gint length , guint64 const   value ) ;
extern proto_item *( /* format attribute */  proto_tree_add_eui64_format_value)(proto_tree *tree ,
                                                                                int hfindex ,
                                                                                tvbuff_t *tvb ,
                                                                                gint start ,
                                                                                gint length ,
                                                                                guint64 const   value ,
                                                                                char const   *format 
                                                                                , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_eui64_format)(proto_tree *tree ,
                                                                          int hfindex ,
                                                                          tvbuff_t *tvb ,
                                                                          gint start ,
                                                                          gint length ,
                                                                          guint64 const   value ,
                                                                          char const   *format 
                                                                          , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_debug_text)(proto_tree *tree ,
                                                                        char const   *format 
                                                                        , ...) ;
extern void proto_item_append_string(proto_item *pi , char const   *str ) ;
extern void proto_item_fill_label(field_info *fi , gchar *label_str ) ;
extern int proto_register_protocol(char const   *name ,
                                   char const   *short_name ,
                                   char const   *filter_name ) ;
extern void proto_mark_private(int const   proto_id ) ;
extern gboolean proto_is_private(int const   proto_id ) ;
extern void proto_register_prefix(char const   *prefix ,
                                  void (*initializer)(char const   *match ) ) ;
extern void proto_initialize_all_prefixes(void) ;
extern void proto_register_field_array(int const   parent ,
                                       hf_register_info *hf ,
                                       int const   num_records ) ;
extern void proto_register_subtree_array(gint * const  *indices ,
                                         int const   num_indices ) ;
extern int proto_registrar_n(void) ;
extern char const   *proto_registrar_get_name(int const   n ) ;
extern char const   *proto_registrar_get_abbrev(int const   n ) ;
extern header_field_info *proto_registrar_get_nth(guint hfindex ) ;
extern header_field_info *proto_registrar_get_byname(char const   *field_name ) ;
extern int proto_registrar_get_ftype(int const   n ) ;
extern int proto_registrar_get_parent(int const   n ) ;
extern gboolean proto_registrar_is_protocol(int const   n ) ;
extern gint proto_registrar_get_length(int const   n ) ;
extern int proto_get_first_protocol(void **cookie ) ;
extern int proto_get_next_protocol(void **cookie ) ;
extern header_field_info *proto_get_first_protocol_field(int const   proto_id ,
                                                         void **cookle ) ;
extern header_field_info *proto_get_next_protocol_field(void **cookle ) ;
extern int proto_get_id_by_filter_name(gchar const   *filter_name ) ;
extern gboolean proto_can_toggle_protocol(int const   proto_id ) ;
extern protocol_t *find_protocol_by_id(int const   proto_id ) ;
extern char const   *proto_get_protocol_name(int const   proto_id ) ;
extern int proto_get_id(protocol_t const   *protocol ) ;
extern char const   *proto_get_protocol_short_name(protocol_t const   *protocol ) ;
extern char const   *proto_get_protocol_long_name(protocol_t const   *protocol ) ;
extern gboolean proto_is_protocol_enabled(protocol_t const   *protocol ) ;
extern char const   *proto_get_protocol_filter_name(int const   proto_id ) ;
extern void proto_set_decoding(int const   proto_id , gboolean const   enabled ) ;
extern void proto_enable_all(void) ;
extern void proto_set_cant_toggle(int const   proto_id ) ;
extern gboolean proto_check_for_protocol_or_field(proto_tree const   *tree ,
                                                  int const   id ) ;
extern GPtrArray *proto_get_finfo_ptr_array(proto_tree const   *tree ,
                                            int const   hfindex ) ;
extern gboolean proto_tracking_interesting_fields(proto_tree const   *tree ) ;
extern GPtrArray *proto_find_finfo(proto_tree *tree , int const   hfindex ) ;
extern GPtrArray *proto_all_finfos(proto_tree *tree ) ;
extern void proto_registrar_dump_protocols(void) ;
extern void proto_registrar_dump_values(void) ;
extern void proto_registrar_dump_fields(int const   format ) ;
extern gboolean *tree_is_expanded ;
extern int num_tree_types ;
extern int hfinfo_bitwidth(header_field_info const   *hfinfo ) ;
extern gboolean proto_can_match_selected(field_info *finfo ,
                                         epan_dissect_t *edt ) ;
extern char *proto_construct_match_selected_string(field_info *finfo ,
                                                   epan_dissect_t *edt ) ;
extern field_info *proto_find_field_from_offset(proto_tree *tree ,
                                                guint offset , tvbuff_t *tvb ) ;
extern proto_item *proto_tree_add_bitmask(proto_tree *tree , tvbuff_t *tvb ,
                                          guint const   offset ,
                                          int const   hf_hdr ,
                                          gint const   ett ,
                                          int const   **fields ,
                                          gboolean const   little_endian ) ;
extern proto_item *proto_tree_add_bitmask_text(proto_tree *tree ,
                                               tvbuff_t *tvb ,
                                               guint const   offset ,
                                               guint const   len ,
                                               char const   *name ,
                                               char const   *fallback ,
                                               gint const   ett ,
                                               int const   **fields ,
                                               gboolean const   little_endian ,
                                               int const   flags ) ;
extern proto_item *proto_tree_add_bits_item(proto_tree *tree ,
                                            int const   hf_index ,
                                            tvbuff_t *tvb ,
                                            gint const   bit_offset ,
                                            gint const   no_of_bits ,
                                            gboolean const   little_endian ) ;
extern proto_item *proto_tree_add_bits_ret_val(proto_tree *tree ,
                                               int const   hf_index ,
                                               tvbuff_t *tvb ,
                                               gint const   bit_offset ,
                                               gint const   no_of_bits ,
                                               guint64 *return_value ,
                                               gboolean const   little_endian ) ;
extern proto_item *( /* format attribute */  proto_tree_add_uint_bits_format_value)(proto_tree *tree ,
                                                                                    int const   hf_index ,
                                                                                    tvbuff_t *tvb ,
                                                                                    gint const   bit_offset ,
                                                                                    gint const   no_of_bits ,
                                                                                    guint32 value ,
                                                                                    char const   *format 
                                                                                    , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_boolean_bits_format_value)(proto_tree *tree ,
                                                                                       int const   hf_index ,
                                                                                       tvbuff_t *tvb ,
                                                                                       gint const   bit_offset ,
                                                                                       gint const   no_of_bits ,
                                                                                       guint32 value ,
                                                                                       char const   *format 
                                                                                       , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_int_bits_format_value)(proto_tree *tree ,
                                                                                   int const   hf_index ,
                                                                                   tvbuff_t *tvb ,
                                                                                   gint const   bit_offset ,
                                                                                   gint const   no_of_bits ,
                                                                                   gint32 value ,
                                                                                   char const   *format 
                                                                                   , ...) ;
extern proto_item *( /* format attribute */  proto_tree_add_float_bits_format_value)(proto_tree *tree ,
                                                                                     int const   hf_index ,
                                                                                     tvbuff_t *tvb ,
                                                                                     gint const   bit_offset ,
                                                                                     gint const   no_of_bits ,
                                                                                     float value ,
                                                                                     char const   *format 
                                                                                     , ...) ;
extern guchar proto_check_field_name(gchar const   *field_name ) ;
extern gchar const   *proto_custom_set(proto_tree *tree , int const   field_id ,
                                       gint occurrence , gchar *result ,
                                       gchar *expr , int const   size ) ;
extern void dfilter_init(void) ;
extern void dfilter_cleanup(void) ;
extern gboolean dfilter_compile(gchar const   *text , dfilter_t **dfp ) ;
extern void dfilter_free(dfilter_t *df ) ;
extern gchar const   *dfilter_error_msg ;
extern gboolean dfilter_apply_edt(dfilter_t *df , epan_dissect_t *edt ) ;
extern gboolean dfilter_apply(dfilter_t *df , proto_tree *tree ) ;
extern void dfilter_prime_proto_tree(dfilter_t const   *df , proto_tree *tree ) ;
extern GPtrArray *dfilter_deprecated_tokens(dfilter_t *df ) ;
extern void dfilter_dump(dfilter_t *df ) ;
extern gchar *ep_address_to_str(address const   * ) ;
extern gchar *se_address_to_str(address const   * ) ;
extern void address_to_str_buf(address const   *addr , gchar *buf , int buf_len ) ;
extern gchar *bytestring_to_str(guint8 const   * , guint32 const    ,
                                char const    ) ;
extern gchar *ether_to_str(guint8 const   * ) ;
extern gchar *tvb_ether_to_str(tvbuff_t *tvb , gint const   offset ) ;
extern gchar const   *ip_to_str(guint8 const   * ) ;
extern gchar const   *tvb_ip_to_str(tvbuff_t *tvb , gint const   offset ) ;
extern void ip_to_str_buf(guint8 const   *ad , gchar *buf , int const   buf_len ) ;
extern gchar *fc_to_str(guint8 const   * ) ;
extern gchar *fcwwn_to_str(guint8 const   * ) ;
extern gchar *tvb_fc_to_str(tvbuff_t *tvb , gint const   offset ) ;
extern gchar *tvb_fcwwn_to_str(tvbuff_t *tvb , gint const   offset ) ;
extern gchar *ip6_to_str(struct e_in6_addr  const  * ) ;
extern gchar *tvb_ip6_to_str(tvbuff_t *tvb , gint const   offset ) ;
extern void ip6_to_str_buf(struct e_in6_addr  const  * , gchar * ) ;
extern gchar *ipx_addr_to_str(guint32 const    , guint8 const   * ) ;
extern gchar *ipxnet_to_string(guint8 const   *ad ) ;
extern gchar *ipxnet_to_str_punct(guint32 const   ad , char const   punct ) ;
extern gchar *tvb_vines_addr_to_str(tvbuff_t *tvb , gint const   offset ) ;
extern gchar *eui64_to_str(guint64 const   ad ) ;
extern gchar *tvb_eui64_to_str(tvbuff_t *tvb , gint const   offset ,
                               guint const   encoding ) ;
extern gchar *time_secs_to_str(gint32 const   time_val ) ;
extern gchar *time_secs_to_str_unsigned(guint32 const    ) ;
extern gchar *time_msecs_to_str(gint32 time_val ) ;
extern gchar *abs_time_to_str(nstime_t const   * ,
                              absolute_time_display_e const   fmt ,
                              gboolean show_zone ) ;
extern gchar *abs_time_secs_to_str(time_t const    ,
                                   absolute_time_display_e const   fmt ,
                                   gboolean show_zone ) ;
extern void display_signed_time(gchar * , int  , gint32 const    , gint32  ,
                                to_str_time_res_t const    ) ;
extern void display_epoch_time(gchar * , int  , time_t const    , gint32  ,
                               to_str_time_res_t const    ) ;
extern gchar *guint32_to_str(guint32 const   u ) ;
extern void guint32_to_str_buf(guint32 u , gchar *buf , int buf_len ) ;
extern gchar *rel_time_to_str(nstime_t const   * ) ;
extern gchar *rel_time_to_secs_str(nstime_t const   * ) ;
extern gchar *guid_to_str(e_guid_t const   * ) ;
extern gchar *guid_to_str_buf(e_guid_t const   * , gchar * , int  ) ;
extern char *decode_bits_in_field(gint const   bit_offset ,
                                  gint const   no_of_bits ,
                                  guint64 const   value ) ;
extern char *other_decode_bitfield_value(char *buf , guint32 const   val ,
                                         guint32 const   mask ,
                                         int const   width ) ;
extern char *decode_bitfield_value(char *buf , guint32 const   val ,
                                   guint32 const   mask , int const   width ) ;
extern char const   *decode_boolean_bitfield(guint32 const   val ,
                                             guint32 const   mask ,
                                             int const   width ,
                                             char const   *truedesc ,
                                             char const   *falsedesc ) ;
extern char const   *decode_numeric_bitfield(guint32 const   val ,
                                             guint32 const   mask ,
                                             int const   width ,
                                             char const   *fmt ) ;
extern gchar const   *match_strval_idx(guint32 const   val ,
                                       value_string const   *vs , gint *idx ) ;
extern gchar const   *match_strval(guint32 const   val ,
                                   value_string const   *vs ) ;
extern gchar const   *val_to_str(guint32 const   val ,
                                 value_string const   *vs , char const   *fmt ) ;
extern gchar const   *val_to_str_const(guint32 const   val ,
                                       value_string const   *vs ,
                                       char const   *unknown_str ) ;
extern gchar const   *match_strstr_idx(gchar const   *val ,
                                       string_string const   *vs , gint *idx ) ;
extern gchar const   *match_strstr(gchar const   *val ,
                                   string_string const   *vs ) ;
extern gchar const   *str_to_str(gchar const   *val ,
                                 string_string const   *vs , char const   *fmt ) ;
extern gboolean value_string_ext_validate(value_string_ext const   *vse ) ;
extern gchar const   *value_string_ext_match_type_str(value_string_ext const   *vse ) ;
extern value_string const   *_match_strval_ext_init(guint32 const   val ,
                                                    value_string_ext const   *vse ) ;
extern value_string_ext *value_string_ext_new(value_string *vs ,
                                              guint vs_tot_num_entries ,
                                              gchar *vs_name ) ;
extern gchar const   *match_strval_ext(guint32 const   val ,
                                       value_string_ext const   *vse ) ;
extern gchar const   *match_strval_idx_ext(guint32 const   val ,
                                           value_string_ext *vse , gint *idx ) ;
extern gchar const   *val_to_str_ext(guint32 const   val ,
                                     value_string_ext const   *vs ,
                                     char const   *fmt ) ;
extern gchar const   *val_to_str_ext_const(guint32 const   val ,
                                           value_string_ext const   *vs ,
                                           char const   *unknown_str ) ;
extern char const   *decode_enumerated_bitfield(guint32 const   val ,
                                                guint32 const   mask ,
                                                int const   width ,
                                                value_string const   *tab ,
                                                char const   *fmt ) ;
extern char const   *decode_enumerated_bitfield_shifted(guint32 const   val ,
                                                        guint32 const   mask ,
                                                        int const   width ,
                                                        value_string const   *tab ,
                                                        char const   *fmt ) ;
extern gchar const   *rval_to_str(guint32 const   val ,
                                  range_string const   *rs , char const   *fmt ) ;
extern gchar const   *match_strrval_idx(guint32 const   val ,
                                        range_string const   *rs , gint *idx ) ;
extern gchar const   *match_strrval(guint32 const   val ,
                                    range_string const   *rs ) ;
extern void col_setup(column_info *cinfo , gint const   num_cols ) ;
extern void col_init(column_info *cinfo ) ;
extern void col_set_fmt_time(frame_data const   *fd , column_info *cinfo ,
                             gint const   fmt , gint const   col ) ;
extern void col_fill_in_frame_data(frame_data const   *fd , column_info *cinfo ,
                                   gint const   col ,
                                   gboolean const   fill_col_exprs ) ;
extern void col_fill_in(packet_info *pinfo , gboolean const   fill_col_exprs ,
                        gboolean const   fill_fd_colums ) ;
extern void col_fill_in_error(column_info *cinfo , frame_data *fdata ,
                              gboolean const   fill_col_exprs ,
                              gboolean const   fill_fd_colums ) ;
extern gboolean col_get_writable(column_info *cinfo ) ;
extern void col_set_writable(column_info *cinfo , gboolean const   writable ) ;
extern gint check_col(column_info *cinfo , gint const   col ) ;
extern void col_set_fence(column_info *cinfo , gint const   col ) ;
extern void col_clear(column_info *cinfo , gint const   col ) ;
extern void col_set_str(column_info *cinfo , gint const   col ,
                        gchar const   *str ) ;
extern void col_add_str(column_info *cinfo , gint const   col ,
                        gchar const   *str ) ;
extern void ( /* format attribute */  col_add_fstr)(column_info *cinfo ,
                                                    gint const   col ,
                                                    gchar const   *format  , ...) ;
extern void col_custom_set_edt(epan_dissect_t *edt , column_info *cinfo ) ;
extern void col_custom_prime_edt(epan_dissect_t *edt , column_info *cinfo ) ;
extern gboolean have_custom_cols(column_info *cinfo ) ;
extern gboolean col_has_time_fmt(column_info *cinfo , gint const   col ) ;
extern gboolean col_based_on_frame_data(column_info *cinfo , gint const   col ) ;
extern void col_append_str(column_info *cinfo , gint const   col ,
                           gchar const   *str ) ;
extern void ( /* format attribute */  col_append_fstr)(column_info *cinfo ,
                                                       gint const   col ,
                                                       gchar const   *format 
                                                       , ...) ;
extern void ( /* format attribute */  col_prepend_fstr)(column_info *cinfo ,
                                                        gint const   col ,
                                                        gchar const   *format 
                                                        , ...) ;
extern void ( /* format attribute */  col_prepend_fence_fstr)(column_info *cinfo ,
                                                              gint const   col ,
                                                              gchar const   *format 
                                                              , ...) ;
extern void col_append_sep_str(column_info *cinfo , gint const   col ,
                               gchar const   *sep , gchar const   *str ) ;
extern void ( /* format attribute */  col_append_sep_fstr)(column_info *cinfo ,
                                                           gint const   col ,
                                                           gchar const   *sep ,
                                                           gchar const   *format 
                                                           , ...) ;
extern void col_set_time(column_info *cinfo , int const   col ,
                         nstime_t const   *ts , char *fieldname ) ;
extern true_false_string const   tfs_true_false ;
extern true_false_string const   tfs_yes_no ;
extern true_false_string const   tfs_set_notset ;
extern true_false_string const   tfs_enabled_disabled ;
extern true_false_string const   tfs_ok_error ;
extern true_false_string const   tfs_error_ok ;
extern true_false_string const   tfs_success_fail ;
extern true_false_string const   tfs_fail_success ;
extern true_false_string const   tfs_on_off ;
extern true_false_string const   tfs_ack_nack ;
extern true_false_string const   tfs_odd_even ;
extern true_false_string const   tfs_allow_block ;
extern true_false_string const   tfs_restricted_allowed ;
extern true_false_string const   tfs_accept_reject ;
extern true_false_string const   tfs_more_nomore ;
extern true_false_string const   tfs_present_absent ;
extern true_false_string const   tfs_present_not_present ;
extern true_false_string const   tfs_active_inactive ;
extern true_false_string const   tfs_found_not_found ;
extern true_false_string const   tfs_command_response ;
extern true_false_string const   tfs_capable_not_capable ;
extern true_false_string const   tfs_supported_not_supported ;
extern true_false_string const   tfs_used_notused ;
extern true_false_string const   tfs_high_low ;
extern true_false_string const   tfs_pressed_not_pressed ;
extern true_false_string const   tfs_implemented_not_implemented ;
extern true_false_string const   tfs_requested_not_requested ;
extern true_false_string const   tfs_reliable_not_reliable ;
extern true_false_string const   tfs_allowed_not_allowed ;
extern true_false_string const   tfs_accepted_not_accepted ;
extern true_false_string const   tfs_detected_not_detected ;
extern void packet_init(void) ;
extern void packet_cleanup(void) ;
extern dissector_handle_t dtbl_entry_get_handle(dtbl_entry_t *dtbl_entry ) ;
extern dissector_handle_t dtbl_entry_get_initial_handle(dtbl_entry_t *entry ) ;
extern void dissector_table_foreach_changed(char const   *name ,
                                            void (*func)(gchar const   *table_name ,
                                                         ftenum_t selector_type ,
                                                         gpointer key ,
                                                         gpointer value ,
                                                         gpointer user_data ) ,
                                            gpointer user_data ) ;
extern void dissector_table_foreach(char const   *name ,
                                    void (*func)(gchar const   *table_name ,
                                                 ftenum_t selector_type ,
                                                 gpointer key , gpointer value ,
                                                 gpointer user_data ) ,
                                    gpointer user_data ) ;
extern void dissector_all_tables_foreach_changed(void (*func)(gchar const   *table_name ,
                                                              ftenum_t selector_type ,
                                                              gpointer key ,
                                                              gpointer value ,
                                                              gpointer user_data ) ,
                                                 gpointer user_data ) ;
extern void dissector_table_foreach_handle(char const   *name ,
                                           void (*func)(gchar const   *table_name ,
                                                        gpointer value ,
                                                        gpointer user_data ) ,
                                           gpointer user_data ) ;
extern void dissector_all_tables_foreach_table(void (*func)(gchar const   *table_name ,
                                                            gchar const   *ui_name ,
                                                            gpointer user_data ) ,
                                               gpointer user_data ) ;
extern dissector_table_t register_dissector_table(char const   *name ,
                                                  char const   *ui_name ,
                                                  ftenum_t const   type ,
                                                  int const   base ) ;
extern dissector_table_t find_dissector_table(char const   *name ) ;
extern char const   *get_dissector_table_ui_name(char const   *name ) ;
extern ftenum_t get_dissector_table_selector_type(char const   *name ) ;
extern int get_dissector_table_base(char const   *name ) ;
extern void dissector_add_uint(char const   *abbrev , guint32 const   pattern ,
                               dissector_handle_t handle ) ;
extern void dissector_delete_uint(char const   *name , guint32 const   pattern ,
                                  dissector_handle_t handle ) ;
extern void dissector_change_uint(char const   *abbrev ,
                                  guint32 const   pattern ,
                                  dissector_handle_t handle ) ;
extern void dissector_reset_uint(char const   *name , guint32 const   pattern ) ;
extern gboolean dissector_try_uint(dissector_table_t sub_dissectors ,
                                   guint32 const   uint_val , tvbuff_t *tvb ,
                                   packet_info *pinfo , proto_tree *tree ) ;
extern gboolean dissector_try_uint_new(dissector_table_t sub_dissectors ,
                                       guint32 const   uint_val ,
                                       tvbuff_t *tvb , packet_info *pinfo ,
                                       proto_tree *tree ,
                                       gboolean const   add_proto_name ) ;
extern dissector_handle_t dissector_get_uint_handle(dissector_table_t const   sub_dissectors ,
                                                    guint32 const   uint_val ) ;
extern void dissector_add_string(char const   *name , gchar const   *pattern ,
                                 dissector_handle_t handle ) ;
extern void dissector_delete_string(char const   *name ,
                                    gchar const   *pattern ,
                                    dissector_handle_t handle ) ;
extern void dissector_change_string(char const   *name ,
                                    gchar const   *pattern ,
                                    dissector_handle_t handle ) ;
extern void dissector_reset_string(char const   *name , gchar const   *pattern ) ;
extern gboolean dissector_try_string(dissector_table_t sub_dissectors ,
                                     gchar const   *string , tvbuff_t *tvb ,
                                     packet_info *pinfo , proto_tree *tree ) ;
extern dissector_handle_t dissector_get_string_handle(dissector_table_t sub_dissectors ,
                                                      gchar const   *string ) ;
extern void dissector_add_handle(char const   *name , dissector_handle_t handle ) ;
extern void register_heur_dissector_list(char const   *name ,
                                         heur_dissector_list_t *list ) ;
extern gboolean dissector_try_heuristic(heur_dissector_list_t sub_dissectors ,
                                        tvbuff_t *tvb , packet_info *pinfo ,
                                        proto_tree *tree ) ;
extern void heur_dissector_add(char const   *name ,
                               gboolean (*dissector)(tvbuff_t *tvb ,
                                                     packet_info *pinfo ,
                                                     proto_tree *tree ) ,
                               int const   proto ) ;
extern void heur_dissector_delete(char const   *name ,
                                  gboolean (*dissector)(tvbuff_t *tvb ,
                                                        packet_info *pinfo ,
                                                        proto_tree *tree ) ,
                                  int const   proto ) ;
extern void register_dissector(char const   *name ,
                               void (*dissector)(tvbuff_t * , packet_info * ,
                                                 proto_tree * ) ,
                               int const   proto ) ;
extern void new_register_dissector(char const   *name ,
                                   int (*dissector)(tvbuff_t * , packet_info * ,
                                                    proto_tree * ) ,
                                   int const   proto ) ;
extern char const   *dissector_handle_get_long_name(dissector_handle_t const   handle ) ;
extern char const   *dissector_handle_get_short_name(dissector_handle_t const   handle ) ;
extern int dissector_handle_get_protocol_index(dissector_handle_t const   handle ) ;
extern dissector_handle_t find_dissector(char const   *name ) ;
extern dissector_handle_t create_dissector_handle(void (*dissector)(tvbuff_t * ,
                                                                    packet_info * ,
                                                                    proto_tree * ) ,
                                                  int const   proto ) ;
extern dissector_handle_t new_create_dissector_handle(int (*dissector)(tvbuff_t * ,
                                                                       packet_info * ,
                                                                       proto_tree * ) ,
                                                      int const   proto ) ;
extern int call_dissector(dissector_handle_t handle , tvbuff_t *tvb ,
                          packet_info *pinfo , proto_tree *tree ) ;
extern int call_dissector_only(dissector_handle_t handle , tvbuff_t *tvb ,
                               packet_info *pinfo , proto_tree *tree ) ;
extern void dissect_init(void) ;
extern void dissect_cleanup(void) ;
extern void set_actual_length(tvbuff_t *tvb , guint const   specified_len ) ;
extern void register_init_routine(void (*func)(void) ) ;
extern void init_dissection(void) ;
extern void cleanup_dissection(void) ;
extern void register_postseq_cleanup_routine(void (*func)(void) ) ;
extern void postseq_cleanup_all_protocols(void) ;
extern void register_final_registration_routine(void (*func)(void) ) ;
extern void final_registration_all_protocols(void) ;
extern void add_new_data_source(packet_info *pinfo , tvbuff_t *tvb ,
                                char const   *name ) ;
extern char const   *get_data_source_name(data_source *src ) ;
extern void free_data_sources(packet_info *pinfo ) ;
extern void dissect_packet(epan_dissect_t *edt ,
                           union wtap_pseudo_header *pseudo_header ,
                           guchar const   *pd , frame_data *fd ,
                           column_info *cinfo ) ;
extern void capture_ethertype(guint16 etype , guchar const   *pd , int offset ,
                              int len , packet_counts *ld ) ;
extern void ethertype(guint16 etype , tvbuff_t *tvb ,
                      int offset_after_ethertype , packet_info *pinfo ,
                      proto_tree *tree , proto_tree *fh_tree , int etype_id ,
                      int trailer_id , int fcs_len ) ;
extern void dissector_dump_decodes(void) ;
extern void register_postdissector(dissector_handle_t  ) ;
extern gboolean have_postdissector(void) ;
extern void call_all_postdissectors(tvbuff_t *tvb , packet_info *pinfo ,
                                    proto_tree *tree ) ;
extern print_stream_t *print_stream_text_new(int to_file , char const   *dest ) ;
extern print_stream_t *print_stream_text_stdio_new(FILE *fh ) ;
extern print_stream_t *print_stream_ps_new(int to_file , char const   *dest ) ;
extern print_stream_t *print_stream_ps_stdio_new(FILE *fh ) ;
extern gboolean print_preamble(print_stream_t *self , gchar *filename ) ;
extern gboolean print_line(print_stream_t *self , int indent ,
                           char const   *line ) ;
extern gboolean print_bookmark(print_stream_t *self , gchar const   *name ,
                               gchar const   *title ) ;
extern gboolean new_page(print_stream_t *self ) ;
extern gboolean print_finale(print_stream_t *self ) ;
extern gboolean destroy_print_stream(print_stream_t *self ) ;
extern output_fields_t *output_fields_new(void) ;
extern void output_fields_free(output_fields_t *info ) ;
extern void output_fields_add(output_fields_t *info , gchar const   *field ) ;
extern gsize output_fields_num_fields(output_fields_t *info ) ;
extern gboolean output_fields_set_option(output_fields_t *info , gchar *option ) ;
extern void output_fields_list_options(FILE *fh ) ;
extern GHashTable *output_only_tables ;
extern gboolean proto_tree_print(print_args_t *print_args ,
                                 epan_dissect_t *edt , print_stream_t *stream ) ;
extern gboolean print_hex_data(print_stream_t *stream , epan_dissect_t *edt ) ;
extern void write_pdml_preamble(FILE *fh ) ;
extern void proto_tree_write_pdml(epan_dissect_t *edt , FILE *fh ) ;
extern void write_pdml_finale(FILE *fh ) ;
extern void write_psml_preamble(FILE *fh ) ;
extern void proto_tree_write_psml(epan_dissect_t *edt , FILE *fh ) ;
extern void write_psml_finale(FILE *fh ) ;
extern void write_csv_preamble(FILE *fh ) ;
extern void proto_tree_write_csv(epan_dissect_t *edt , FILE *fh ) ;
extern void write_csv_finale(FILE *fh ) ;
extern void write_carrays_preamble(FILE *fh ) ;
extern void proto_tree_write_carrays(guint8 const   *pd , guint32 len ,
                                     guint32 num , FILE *fh ) ;
extern void write_carrays_finale(FILE *fh ) ;
extern void write_fields_preamble(output_fields_t *fields , FILE *fh ) ;
extern void proto_tree_write_fields(output_fields_t *fields ,
                                    epan_dissect_t *edt , FILE *fh ) ;
extern void write_fields_finale(output_fields_t *fields , FILE *fh ) ;
extern gchar const   *get_node_field_value(field_info *fi , epan_dissect_t *edt ) ;
extern frame_data_sequence *new_frame_data_sequence(void) ;
extern frame_data *frame_data_sequence_add(frame_data_sequence *fds ,
                                           frame_data *fdata ) ;
extern frame_data *frame_data_sequence_find(frame_data_sequence *fds ,
                                            guint32 num ) ;
extern void free_frame_data_sequence(frame_data_sequence *fds ) ;
extern void cap_file_init(capture_file *cf ) ;
extern void cf_callback_add(void (*func)(gint event , gpointer data ,
                                         gpointer user_data ) ,
                            gpointer user_data ) ;
extern void cf_callback_remove(void (*func)(gint event , gpointer data ,
                                            gpointer user_data ) ) ;
extern cf_status_t cf_open(capture_file *cf , char const   *fname ,
                           gboolean is_tempfile , int *err ) ;
extern void cf_close(capture_file *cf ) ;
extern void cf_reload(capture_file *cf ) ;
extern cf_read_status_t cf_read(capture_file *cf , gboolean from_save ) ;
extern gboolean cf_read_frame_r(capture_file *cf , frame_data *fdata ,
                                union wtap_pseudo_header *pseudo_header ,
                                guint8 *pd ) ;
extern gboolean cf_read_frame(capture_file *cf , frame_data *fdata ) ;
extern cf_status_t cf_start_tail(capture_file *cf , char const   *fname ,
                                 gboolean is_tempfile , int *err ) ;
extern cf_read_status_t cf_continue_tail(capture_file *cf ,
                                         int volatile   to_read , int *err ) ;
extern void cf_fake_continue_tail(capture_file *cf ) ;
extern cf_read_status_t cf_finish_tail(capture_file *cf , int *err ) ;
extern gboolean cf_can_save_as(capture_file *cf ) ;
extern cf_status_t cf_save(capture_file *cf , char const   *fname ,
                           packet_range_t *range , guint save_format ,
                           gboolean compressed ) ;
extern gchar const   *cf_get_display_name(capture_file *cf ) ;
extern void cf_set_tempfile_source(capture_file *cf , gchar *source ) ;
extern gchar const   *cf_get_tempfile_source(capture_file *cf ) ;
extern int cf_get_packet_count(capture_file *cf ) ;
extern void cf_set_packet_count(capture_file *cf , int packet_count ) ;
extern gboolean cf_is_tempfile(capture_file *cf ) ;
extern void cf_set_tempfile(capture_file *cf , gboolean is_tempfile ) ;
extern void cf_set_drops_known(capture_file *cf , gboolean drops_known ) ;
extern void cf_set_drops(capture_file *cf , guint32 drops ) ;
extern gboolean cf_get_drops_known(capture_file *cf ) ;
extern guint32 cf_get_drops(capture_file *cf ) ;
extern void cf_set_rfcode(capture_file *cf , dfilter_t *rfcode ) ;
extern cf_status_t cf_filter_packets(capture_file *cf , gchar *dfilter ,
                                     gboolean force ) ;
extern void cf_reftime_packets(capture_file *cf ) ;
extern gulong cf_get_computed_elapsed(void) ;
extern void cf_redissect_packets(capture_file *cf ) ;
extern cf_read_status_t cf_retap_packets(capture_file *cf ) ;
extern void cf_timestamp_auto_precision(capture_file *cf ) ;
extern cf_print_status_t cf_print_packets(capture_file *cf ,
                                          print_args_t *print_args ) ;
extern cf_print_status_t cf_write_pdml_packets(capture_file *cf ,
                                               print_args_t *print_args ) ;
extern cf_print_status_t cf_write_psml_packets(capture_file *cf ,
                                               print_args_t *print_args ) ;
extern cf_print_status_t cf_write_csv_packets(capture_file *cf ,
                                              print_args_t *print_args ) ;
extern cf_print_status_t cf_write_carrays_packets(capture_file *cf ,
                                                  print_args_t *print_args ) ;
extern gboolean cf_find_packet_protocol_tree(capture_file *cf ,
                                             char const   *string ,
                                             search_direction dir ) ;
extern gboolean cf_find_string_protocol_tree(capture_file *cf ,
                                             proto_tree *tree ,
                                             match_data *mdata ) ;
extern gboolean cf_find_packet_summary_line(capture_file *cf ,
                                            char const   *string ,
                                            search_direction dir ) ;
extern gboolean cf_find_packet_data(capture_file *cf , guint8 const   *string ,
                                    size_t string_size , search_direction dir ) ;
extern gboolean cf_find_packet_dfilter(capture_file *cf , dfilter_t *sfcode ,
                                       search_direction dir ) ;
extern gboolean cf_find_packet_dfilter_string(capture_file *cf ,
                                              char const   *filter ,
                                              search_direction dir ) ;
extern gboolean cf_find_packet_marked(capture_file *cf , search_direction dir ) ;
extern gboolean cf_find_packet_time_reference(capture_file *cf ,
                                              search_direction dir ) ;
extern gboolean cf_goto_top_frame(void) ;
extern gboolean cf_goto_bottom_frame(void) ;
extern gboolean cf_goto_frame(capture_file *cf , guint row ) ;
extern gboolean cf_goto_framenum(capture_file *cf ) ;
extern void cf_select_packet(capture_file *cf , int row ) ;
extern void cf_unselect_packet(capture_file *cf ) ;
extern void cf_unselect_field(capture_file *cf ) ;
extern void cf_mark_frame(capture_file *cf , frame_data *frame ) ;
extern void cf_unmark_frame(capture_file *cf , frame_data *frame ) ;
extern void cf_ignore_frame(capture_file *cf , frame_data *frame ) ;
extern void cf_unignore_frame(capture_file *cf , frame_data *frame ) ;
extern cf_status_t cf_merge_files(char **out_filename , int in_file_count ,
                                  char * const  *in_filenames , int file_type ,
                                  gboolean do_append ) ;
extern void read_keytab_file(char const   * ) ;
extern int ringbuf_init(char const   *capture_name , guint num_files ,
                        gboolean group_read_access ) ;
extern gchar const   *ringbuf_current_filename(void) ;
extern FILE *ringbuf_init_libpcap_fdopen(int *err ) ;
extern gboolean ringbuf_switch_file(FILE **pdh , gchar **save_file ,
                                    int *save_file_fd , int *err ) ;
extern gboolean ringbuf_libpcap_dump_close(gchar **save_file , int *err ) ;
extern void ringbuf_free(void) ;
extern void ringbuf_error_cleanup(void) ;
extern int get_natural_int(char const   *string , char const   *name ) ;
extern int get_positive_int(char const   *string , char const   *name ) ;
void vfprintf_stderr(char const   *fmt , va_list ap ) ;
void ( /* format attribute */  fprintf_stderr)(char const   *fmt  , ...) ;
void ( /* format attribute */  cmdarg_err)(char const   *fmt  , ...) ;
void ( /* format attribute */  cmdarg_err_cont)(char const   *fmt  , ...) ;
extern gchar const   *wireshark_svnversion ;
extern void get_compiled_version_info(GString *str ,
                                      void (*prepend_info)(GString * ) ,
                                      void (*append_info)(GString * ) ) ;
extern void get_runtime_version_info(GString *str ,
                                     void (*additional_info)(GString * ) ) ;
extern char const   *get_copyright_info(void) ;
extern int bpf_validate(struct bpf_insn  const  *f , int len ) ;
extern u_int bpf_filter(struct bpf_insn  const  * , u_char const   * , u_int  ,
                        u_int  ) ;
extern char *pcap_lookupdev(char * ) ;
extern int pcap_lookupnet(char const   * , bpf_u_int32 * , bpf_u_int32 * ,
                          char * ) ;
extern pcap_t *pcap_create(char const   * , char * ) ;
extern int pcap_set_snaplen(pcap_t * , int  ) ;
extern int pcap_set_promisc(pcap_t * , int  ) ;
extern int pcap_can_set_rfmon(pcap_t * ) ;
extern int pcap_set_rfmon(pcap_t * , int  ) ;
extern int pcap_set_timeout(pcap_t * , int  ) ;
extern int pcap_set_buffer_size(pcap_t * , int  ) ;
extern int pcap_activate(pcap_t * ) ;
extern pcap_t *pcap_open_live(char const   * , int  , int  , int  , char * ) ;
extern pcap_t *pcap_open_dead(int  , int  ) ;
extern pcap_t *pcap_open_offline(char const   * , char * ) ;
extern pcap_t *pcap_fopen_offline(FILE * , char * ) ;
extern void pcap_close(pcap_t * ) ;
extern int pcap_loop(pcap_t * , int  ,
                     void (*)(u_char * , struct pcap_pkthdr  const  * ,
                              u_char const   * ) , u_char * ) ;
extern int pcap_dispatch(pcap_t * , int  ,
                         void (*)(u_char * , struct pcap_pkthdr  const  * ,
                                  u_char const   * ) , u_char * ) ;
extern u_char const   *pcap_next(pcap_t * , struct pcap_pkthdr * ) ;
extern int pcap_next_ex(pcap_t * , struct pcap_pkthdr ** , u_char const   ** ) ;
extern void pcap_breakloop(pcap_t * ) ;
extern int pcap_stats(pcap_t * , struct pcap_stat * ) ;
extern int pcap_setfilter(pcap_t * , struct bpf_program * ) ;
extern int pcap_setdirection(pcap_t * , pcap_direction_t  ) ;
extern int pcap_getnonblock(pcap_t * , char * ) ;
extern int pcap_setnonblock(pcap_t * , int  , char * ) ;
extern int pcap_inject(pcap_t * , void const   * , size_t  ) ;
extern int pcap_sendpacket(pcap_t * , u_char const   * , int  ) ;
extern char const   *pcap_statustostr(int  ) ;
extern char const   *pcap_strerror(int  ) ;
extern char *pcap_geterr(pcap_t * ) ;
extern void pcap_perror(pcap_t * , char * ) ;
extern int pcap_compile(pcap_t * , struct bpf_program * , char const   * ,
                        int  , bpf_u_int32  ) ;
extern int pcap_compile_nopcap(int  , int  , struct bpf_program * ,
                               char const   * , int  , bpf_u_int32  ) ;
extern void pcap_freecode(struct bpf_program * ) ;
extern int pcap_offline_filter(struct bpf_program * ,
                               struct pcap_pkthdr  const  * , u_char const   * ) ;
extern int pcap_datalink(pcap_t * ) ;
extern int pcap_datalink_ext(pcap_t * ) ;
extern int pcap_list_datalinks(pcap_t * , int ** ) ;
extern int pcap_set_datalink(pcap_t * , int  ) ;
extern void pcap_free_datalinks(int * ) ;
extern int pcap_datalink_name_to_val(char const   * ) ;
extern char const   *pcap_datalink_val_to_name(int  ) ;
extern char const   *pcap_datalink_val_to_description(int  ) ;
extern int pcap_snapshot(pcap_t * ) ;
extern int pcap_is_swapped(pcap_t * ) ;
extern int pcap_major_version(pcap_t * ) ;
extern int pcap_minor_version(pcap_t * ) ;
extern FILE *pcap_file(pcap_t * ) ;
extern int pcap_fileno(pcap_t * ) ;
extern pcap_dumper_t *pcap_dump_open(pcap_t * , char const   * ) ;
extern pcap_dumper_t *pcap_dump_fopen(pcap_t * , FILE *fp ) ;
extern FILE *pcap_dump_file(pcap_dumper_t * ) ;
extern long pcap_dump_ftell(pcap_dumper_t * ) ;
extern int pcap_dump_flush(pcap_dumper_t * ) ;
extern void pcap_dump_close(pcap_dumper_t * ) ;
extern void pcap_dump(u_char * , struct pcap_pkthdr  const  * ,
                      u_char const   * ) ;
extern int pcap_findalldevs(pcap_if_t ** , char * ) ;
extern void pcap_freealldevs(pcap_if_t * ) ;
extern char const   *pcap_lib_version(void) ;
extern char *bpf_image(struct bpf_insn  const  * , int  ) ;
extern void bpf_dump(struct bpf_program  const  * , int  ) ;
extern int pcap_get_selectable_fd(pcap_t * ) ;
extern GList *get_interface_list(int *err , char **err_str ) ;
extern char const   *linktype_val_to_name(int dlt ) ;
extern int linktype_name_to_val(char const   *linktype ) ;
extern void get_compiled_pcap_version(GString *str ) ;
extern void get_runtime_pcap_version(GString *str ) ;
extern FILE *libpcap_fdopen(int fd , int *err ) ;
extern gboolean libpcap_write_file_header(FILE *fp , int linktype ,
                                          int snaplen , long *bytes_written ,
                                          int *err ) ;
extern gboolean libpcap_write_packet(FILE *fp ,
                                     struct pcap_pkthdr  const  *phdr ,
                                     u_char const   *pd , long *bytes_written ,
                                     int *err ) ;
extern gboolean libpcap_write_session_header_block(FILE *fp , char *appname ,
                                                   long *bytes_written ,
                                                   int *err ) ;
extern gboolean libpcap_write_interface_description_block(FILE *fp ,
                                                          char *name ,
                                                          char *filter ,
                                                          int link_type ,
                                                          int snap_len ,
                                                          long *bytes_written ,
                                                          int *err ) ;
extern gboolean libpcap_write_interface_statistics_block(FILE *fp ,
                                                         guint32 interface_id ,
                                                         pcap_t *pd ,
                                                         long *bytes_written ,
                                                         int *err ) ;
extern gboolean libpcap_write_enhanced_packet_block(FILE *fp ,
                                                    struct pcap_pkthdr  const  *phdr ,
                                                    guint32 interface_id ,
                                                    u_char const   *pd ,
                                                    long *bytes_written ,
                                                    int *err ) ;
extern gboolean libpcap_dump_flush(FILE *pd , int *err ) ;
extern gboolean libpcap_dump_close(FILE *pd , int *err ) ;
extern void init_process_policies(void) ;
extern gboolean started_with_special_privs(void) ;
extern gboolean running_with_special_privs(void) ;
extern void relinquish_special_privs_perm(void) ;
extern gchar *get_cur_username(void) ;
extern gchar *get_cur_groupname(void) ;
extern int pipe_write_header(int pipe_fd , char indicator , int length ) ;
extern void pipe_write_block(int pipe_fd , char indicator , char const   *msg ) ;
extern void sync_pipe_errmsg_to_parent(int pipe_fd , char const   *error_msg ,
                                       char const   *secondary_error_msg ) ;
GList *capture_interface_list(int *err , char **err_str ) ;
extern void free_interface_list(GList *if_list ) ;
extern if_capabilities_t *capture_get_if_capabilities(char const   *devname ,
                                                      gboolean monitor_mode ,
                                                      char **err_str ) ;
extern void free_if_capabilities(if_capabilities_t *caps ) ;
extern void capture_opts_init(capture_options *capture_opts , void *cf ) ;
extern int capture_opts_add_opt(capture_options *capture_opts , int opt ,
                                char const   *optarg , gboolean *start_capture ) ;
extern void capture_opts_log(char const   *log_domain ,
                             GLogLevelFlags log_level ,
                             capture_options *capture_opts ) ;
extern void capture_opts_print_if_capabilities(if_capabilities_t *caps ,
                                               char *name ,
                                               gboolean monitor_mode ) ;
extern void capture_opts_print_interfaces(GList *if_list ) ;
extern void capture_opts_trim_snaplen(capture_options *capture_opts ,
                                      int snaplen_min ) ;
extern void capture_opts_trim_ring_num_files(capture_options *capture_opts ) ;
extern gboolean capture_opts_trim_iface(capture_options *capture_opts ,
                                        char const   *capture_device ) ;
extern gboolean sync_pipe_start(capture_options *capture_opts ) ;
extern void sync_pipe_stop(capture_options *capture_opts ) ;
extern void sync_pipe_kill(int fork_child ) ;
extern int sync_interface_list_open(gchar **data , gchar **primary_msg ,
                                    gchar **secondary_msg ) ;
extern int sync_if_capabilities_open(gchar const   *ifname ,
                                     gboolean monitor_mode , gchar **data ,
                                     gchar **primary_msg ,
                                     gchar **secondary_msg ) ;
extern int sync_interface_stats_open(int *read_fd , int *fork_child ,
                                     gchar **msg ) ;
extern int sync_interface_stats_close(int *read_fd , int *fork_child ,
                                      gchar **msg ) ;
extern int sync_pipe_gets_nonblock(int pipe_fd , char *bytes , int max ) ;
extern condition *cnd_new(char const   *  , ...) ;
extern void cnd_delete(condition * ) ;
extern gboolean cnd_eval(condition *  , ...) ;
extern void cnd_reset(condition * ) ;
extern gboolean cnd_register_class(char const   * ,
                                   condition *(*)(condition * , va_list  ) ,
                                   void (*)(condition * ) ,
                                   gboolean (*)(condition * , va_list  ) ,
                                   void (*)(condition * ) ) ;
extern void cnd_unregister_class(char const   * ) ;
extern void *cnd_get_user_data(condition * ) ;
extern void cnd_set_user_data(condition * , void * ) ;
extern void init_capture_stop_conditions(void) ;
extern void cleanup_capture_stop_conditions(void) ;
extern char const   *CND_CLASS_TIMEOUT ;
extern char const   *CND_CLASS_CAPTURESIZE ;
extern int create_tempfile(char **namebuf , char const   *pfx ) ;
extern char const   *create_tempdir(char **namebuf , char const   *pfx ) ;
extern int libpcap_open(wtap *wth , int *err , gchar **err_info ) ;
extern gboolean libpcap_dump_open(wtap_dumper *wdh , int *err ) ;
extern int libpcap_dump_can_write_encap(int encap ) ;
static GAsyncQueue *pcap_queue  ;
static gint64 pcap_queue_bytes  ;
static gint64 pcap_queue_packets  ;
static gint64 pcap_queue_byte_limit  =    (gint64 )1000000;
static gint64 pcap_queue_packet_limit  =    (gint64 )1;
static gboolean capture_child  =    0;
static void capture_loop_stop(void) ;
static char const   please_report[104]  = 
  {      (char const   )'P',      (char const   )'l',      (char const   )'e',      (char const   )'a', 
        (char const   )'s',      (char const   )'e',      (char const   )' ',      (char const   )'r', 
        (char const   )'e',      (char const   )'p',      (char const   )'o',      (char const   )'r', 
        (char const   )'t',      (char const   )' ',      (char const   )'t',      (char const   )'h', 
        (char const   )'i',      (char const   )'s',      (char const   )' ',      (char const   )'t', 
        (char const   )'o',      (char const   )' ',      (char const   )'t',      (char const   )'h', 
        (char const   )'e',      (char const   )' ',      (char const   )'W',      (char const   )'i', 
        (char const   )'r',      (char const   )'e',      (char const   )'s',      (char const   )'h', 
        (char const   )'a',      (char const   )'r',      (char const   )'k',      (char const   )' ', 
        (char const   )'d',      (char const   )'e',      (char const   )'v',      (char const   )'e', 
        (char const   )'l',      (char const   )'o',      (char const   )'p',      (char const   )'e', 
        (char const   )'r',      (char const   )'s',      (char const   )'.',      (char const   )'\n', 
        (char const   )'(',      (char const   )'T',      (char const   )'h',      (char const   )'i', 
        (char const   )'s',      (char const   )' ',      (char const   )'i',      (char const   )'s', 
        (char const   )' ',      (char const   )'n',      (char const   )'o',      (char const   )'t', 
        (char const   )' ',      (char const   )'a',      (char const   )' ',      (char const   )'c', 
        (char const   )'r',      (char const   )'a',      (char const   )'s',      (char const   )'h', 
        (char const   )';',      (char const   )' ',      (char const   )'p',      (char const   )'l', 
        (char const   )'e',      (char const   )'a',      (char const   )'s',      (char const   )'e', 
        (char const   )' ',      (char const   )'d',      (char const   )'o',      (char const   )' ', 
        (char const   )'n',      (char const   )'o',      (char const   )'t',      (char const   )' ', 
        (char const   )'r',      (char const   )'e',      (char const   )'p',      (char const   )'o', 
        (char const   )'r',      (char const   )'t',      (char const   )' ',      (char const   )'i', 
        (char const   )'t',      (char const   )' ',      (char const   )'a',      (char const   )'s', 
        (char const   )' ',      (char const   )'s',      (char const   )'u',      (char const   )'c', 
        (char const   )'h',      (char const   )'.',      (char const   )')',      (char const   )'\000'};
static loop_data global_ld  ;
static char const   *cap_pipe_err_str  ;
static void console_log_handler(char const   *log_domain ,
                                GLogLevelFlags log_level ,
                                char const   *message ,
                                gpointer user_data  __attribute__((__unused__)) ) ;
static capture_options global_capture_opts  ;
static gboolean quiet  =    0;
static gboolean use_threads  =    0;
static void capture_loop_write_packet_cb(u_char *user ,
                                         struct pcap_pkthdr  const  *phdr ,
                                         u_char const   *pd ) ;
static void capture_loop_queue_packet_cb(u_char *user ,
                                         struct pcap_pkthdr  const  *phdr ,
                                         u_char const   *pd ) ;
static void capture_loop_get_errmsg(char *errmsg , int errmsglen ,
                                    char const   *fname , int err ,
                                    gboolean is_close ) ;
static  __attribute__((__noreturn__)) void exit_main(int status ) ;
static void report_new_capture_file(char const   *filename ) ;
static void report_packet_count(int packet_count ) ;
static void report_packet_drops(guint32 received , guint32 drops , gchar *name ) ;
static void report_capture_error(char const   *error_msg ,
                                 char const   *secondary_error_msg ) ;
static void report_cfilter_error(char const   *cfilter , char const   *errmsg ) ;
static void print_usage(gboolean print_ver ) 
{ 
  FILE *output ;

  {
  if (print_ver) {
    output = stdout;
    fprintf((FILE */* __restrict  */)output,
            (char const   */* __restrict  */)"Dumpcap 1.7.0%s\nCapture network packets and dump them into a libpcap file.\nSee http://www.wireshark.org for more information.\n",
            wireshark_svnversion);
  } else {
    output = stderr;
  }
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"\nUsage: dumpcap [options] ...\n");
  fprintf((FILE */* __restrict  */)output, (char const   */* __restrict  */)"\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"Capture interface:\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -i <interface>           name or idx of interface (def: first non-loopback)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -f <capture filter>      packet filter in libpcap filter syntax\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -s <snaplen>             packet snapshot length (def: 65535)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -p                       don\'t capture in promiscuous mode\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -I                       capture in monitor mode, if available\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -B <buffer size>         size of kernel buffer (def: 1MB)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -y <link type>           link layer type (def: first appropriate)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -D                       print list of interfaces and exit\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -L                       print list of link-layer types of iface and exit\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -d                       print generated BPF code for capture filter\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -S                       print statistics for each interface once every second\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -M                       for -D, -L, and -S, produce machine-readable output\n");
  fprintf((FILE */* __restrict  */)output, (char const   */* __restrict  */)"\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"Stop conditions:\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -c <packet count>        stop after n packets (def: infinite)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -a <autostop cond.> ...  duration:NUM - stop after NUM seconds\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"                           filesize:NUM - stop this file after NUM KB\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"                              files:NUM - stop after NUM files\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"Output (files):\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -w <filename>            name of file to save (def: tempfile)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -g                       enable group read access on the output file(s)\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -b <ringbuffer opt.> ... duration:NUM - switch to next file after NUM secs\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"                           filesize:NUM - switch to next file after NUM KB\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"                              files:NUM - ringbuffer: replace after NUM files\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -n                       use pcapng format instead of pcap\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"Miscellaneous:\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -t                       use a separate thread per interface\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -q                       don\'t report packet capture counts\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -v                       print version information and exit\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"  -h                       display this help and exit\n");
  fprintf((FILE */* __restrict  */)output, (char const   */* __restrict  */)"\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"Example: dumpcap -i eth0 -a duration:60 -w output.pcap\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"\"Capture network packets from interface eth0 until 60s passed into output.pcap\"\n");
  fprintf((FILE */* __restrict  */)output, (char const   */* __restrict  */)"\n");
  fprintf((FILE */* __restrict  */)output,
          (char const   */* __restrict  */)"Use Ctrl-C to stop capturing at any time.\n");
  return;
}
}
static void show_version(GString *comp_info_str , GString *runtime_info_str ) 
{ 
  char const   *tmp ;

  {
  tmp = get_copyright_info();
  printf((char const   */* __restrict  */)"Dumpcap 1.7.0%s\n\n%s\n%s\n%s\nSee http://www.wireshark.org for more information.\n",
         wireshark_svnversion, tmp, comp_info_str->str, runtime_info_str->str);
  return;
}
}
void vfprintf_stderr(char const   *fmt , va_list ap ) 
{ 


  {
  vfprintf((FILE */* __restrict  */)stderr,
           (char const   */* __restrict  */)fmt, ap);
  return;
}
}
void ( /* format attribute */  fprintf_stderr)(char const   *fmt  , ...) 
{ 
  va_list ap ;

  {
  __builtin_va_start(ap, fmt);
  vfprintf_stderr(fmt, ap);
  __builtin_va_end(ap);
  return;
}
}
void ( /* format attribute */  cmdarg_err)(char const   *fmt  , ...) 
{ 
  va_list ap ;
  gchar *msg ;

  {
  if (capture_child) {
    __builtin_va_start(ap, fmt);
    msg = g_strdup_vprintf(fmt, ap);
    sync_pipe_errmsg_to_parent(2, (char const   *)msg, "");
    g_free((gpointer )msg);
    __builtin_va_end(ap);
  } else {
    __builtin_va_start(ap, fmt);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"dumpcap: ");
    vfprintf((FILE */* __restrict  */)stderr,
             (char const   */* __restrict  */)fmt, ap);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\n");
    __builtin_va_end(ap);
  }
  return;
}
}
void ( /* format attribute */  cmdarg_err_cont)(char const   *fmt  , ...) 
{ 
  va_list ap ;
  gchar *msg ;

  {
  if (capture_child) {
    __builtin_va_start(ap, fmt);
    msg = g_strdup_vprintf(fmt, ap);
    sync_pipe_errmsg_to_parent(2, (char const   *)msg, "");
    g_free((gpointer )msg);
    __builtin_va_end(ap);
  } else {
    __builtin_va_start(ap, fmt);
    vfprintf((FILE */* __restrict  */)stderr,
             (char const   */* __restrict  */)fmt, ap);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\n");
    __builtin_va_end(ap);
  }
  return;
}
}
static pcap_t *open_capture_device(interface_options *interface_opts ,
                                   char (*open_err_str)[256] ) 
{ 
  pcap_t *pcap_h ;
  int err ;
  char *tmp ;
  char const   *tmp___0 ;

  {
  (*open_err_str)[0] = (char )'\000';
  pcap_h = pcap_create((char const   *)interface_opts->name, *open_err_str);
  if ((unsigned int )pcap_h != (unsigned int )((void *)0)) {
    pcap_set_snaplen(pcap_h, interface_opts->snaplen);
    pcap_set_promisc(pcap_h, interface_opts->promisc_mode);
    pcap_set_timeout(pcap_h, 250);
    if (interface_opts->buffer_size > 1) {
      pcap_set_buffer_size(pcap_h, (interface_opts->buffer_size * 1024) * 1024);
    } else {

    }
    if (interface_opts->monitor_mode) {
      pcap_set_rfmon(pcap_h, 1);
    } else {

    }
    err = pcap_activate(pcap_h);
    if (err < 0) {
      if (err == -1) {
        tmp = pcap_geterr(pcap_h);
        g_strlcpy(*open_err_str, (gchar const   *)tmp, sizeof(*open_err_str));
      } else {
        tmp___0 = pcap_statustostr(err);
        g_strlcpy(*open_err_str, tmp___0, sizeof(*open_err_str));
      }
      pcap_close(pcap_h);
      pcap_h = (pcap_t *)((void *)0);
    } else {

    }
  } else {

  }
  relinquish_special_privs_perm();
  return (pcap_h);
}
}
static void get_capture_device_open_failure_messages(char const   *open_err_str ,
                                                     char const   *iface  __attribute__((__unused__)) ,
                                                     char *errmsg ,
                                                     size_t errmsg_len ,
                                                     char *secondary_errmsg ,
                                                     size_t secondary_errmsg_len ) ;
static char const   ppamsg[20]  = 
  {      (char const   )'c',      (char const   )'a',      (char const   )'n',      (char const   )'\'', 
        (char const   )'t',      (char const   )' ',      (char const   )'f',      (char const   )'i', 
        (char const   )'n',      (char const   )'d',      (char const   )' ',      (char const   )'P', 
        (char const   )'P',      (char const   )'A',      (char const   )' ',      (char const   )'f', 
        (char const   )'o',      (char const   )'r',      (char const   )' ',      (char const   )'\000'};
static void get_capture_device_open_failure_messages(char const   *open_err_str ,
                                                     char const   *iface  __attribute__((__unused__)) ,
                                                     char *errmsg ,
                                                     size_t errmsg_len ,
                                                     char *secondary_errmsg ,
                                                     size_t secondary_errmsg_len ) 
{ 
  char const   *libpcap_warn ;
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

  {
  if (0) {
    if (0) {
      __s1_len = strlen(open_err_str);
      __s2_len = strlen(ppamsg);
      if (! ((size_t )((void const   *)(open_err_str + 1)) - (size_t )((void const   *)open_err_str) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(ppamsg + 1)) - (size_t )((void const   *)(ppamsg)) == 1U)) {
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
        tmp___2 = __builtin_strcmp(open_err_str, ppamsg);
        tmp___6 = tmp___2;
      } else {
        tmp___5 = __builtin_strcmp(open_err_str, ppamsg);
        tmp___6 = tmp___5;
      }
    } else {
      tmp___5 = __builtin_strcmp(open_err_str, ppamsg);
      tmp___6 = tmp___5;
    }
    tmp___9 = tmp___6;
  } else {
    tmp___8 = strncmp(open_err_str, ppamsg, sizeof(ppamsg) - 1U);
    tmp___9 = tmp___8;
  }
  if (tmp___9 == 0) {
    libpcap_warn = "\n\nYou are running (T)Wireshark with a version of the libpcap library\nthat doesn\'t handle HP-UX network devices well; this means that\n(T)Wireshark may not be able to capture packets.\n\nTo fix this, you should install libpcap 0.6.2, or a later version\nof libpcap, rather than libpcap 0.4 or 0.5.x.  It is available in\npackaged binary form from the Software Porting And Archive Centre\nfor HP-UX; the Centre is at http://hpux.connect.org.uk/ - the page\nat the URL lists a number of mirror sites.";
  } else {
    libpcap_warn = "";
  }
  g_snprintf(errmsg, (gulong )errmsg_len,
             "The capture session could not be initiated (%s).", open_err_str);
  g_snprintf(secondary_errmsg, (gulong )secondary_errmsg_len,
             "Please check to make sure you have sufficient permissions, and that you have the proper interface or pipe specified.%s",
             libpcap_warn);
  return;
}
}
static gboolean set_pcap_linktype(pcap_t *pcap_h , int linktype ,
                                  char *name  __attribute__((__unused__)) ,
                                  char *errmsg , size_t errmsg_len ,
                                  char *secondary_errmsg ,
                                  size_t secondary_errmsg_len ) 
{ 
  char *set_linktype_err_str ;
  int tmp ;
  char *tmp___0 ;

  {
  if (linktype == -1) {
    return (1);
  } else {

  }
  tmp = pcap_set_datalink(pcap_h, linktype);
  if (tmp == 0) {
    return (1);
  } else {

  }
  set_linktype_err_str = pcap_geterr(pcap_h);
  g_snprintf(errmsg, (gulong )errmsg_len, "Unable to set data link type (%s).",
             set_linktype_err_str);
  tmp___0 = strstr((char const   *)set_linktype_err_str,
                   "is not one of the DLTs supported by this device");
  if ((unsigned int )tmp___0 == (unsigned int )((void *)0)) {
    g_snprintf(secondary_errmsg, (gulong )secondary_errmsg_len, please_report);
  } else {
    *(secondary_errmsg + 0) = (char )'\000';
  }
  return (0);
}
}
static gboolean compile_capture_filter(char const   *iface , pcap_t *pcap_h ,
                                       struct bpf_program *fcode ,
                                       char *cfilter ) 
{ 
  bpf_u_int32 netnum ;
  bpf_u_int32 netmask ;
  gchar lookup_net_err_str[256] ;
  int tmp ;
  int tmp___0 ;

  {
  tmp = pcap_lookupnet(iface, & netnum, & netmask, lookup_net_err_str);
  if (tmp < 0) {
    netmask = (bpf_u_int32 )0;
  } else {

  }
  tmp___0 = pcap_compile(pcap_h, fcode, (char const   *)cfilter, 1, netmask);
  if (tmp___0 < 0) {
    return (0);
  } else {

  }
  return (1);
}
}
static gboolean show_filter_code(capture_options *capture_opts ) 
{ 
  interface_options interface_opts ;
  pcap_t *pcap_h ;
  gchar open_err_str[256] ;
  char errmsg[4097] ;
  char secondary_errmsg[4097] ;
  struct bpf_program fcode ;
  struct bpf_insn *insn ;
  u_int i ;
  guint j ;
  gboolean tmp ;
  gboolean tmp___0 ;
  char *tmp___1 ;

  {
  j = (guint )0;
  while (j < (capture_opts->ifaces)->len) {
    interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + j);
    pcap_h = open_capture_device(& interface_opts, & open_err_str);
    if ((unsigned int )pcap_h == (unsigned int )((void *)0)) {
      get_capture_device_open_failure_messages((char const   *)(open_err_str),
                                               (char const   *)interface_opts.name,
                                               errmsg, sizeof(errmsg),
                                               secondary_errmsg,
                                               sizeof(secondary_errmsg));
      report_capture_error((char const   *)(errmsg),
                           (char const   *)(secondary_errmsg));
      return (0);
    } else {

    }
    tmp = set_pcap_linktype(pcap_h, interface_opts.linktype,
                            interface_opts.name, errmsg, sizeof(errmsg),
                            secondary_errmsg, sizeof(secondary_errmsg));
    if (tmp) {

    } else {
      pcap_close(pcap_h);
      report_capture_error((char const   *)(errmsg),
                           (char const   *)(secondary_errmsg));
      return (0);
    }
    tmp___0 = compile_capture_filter((char const   *)interface_opts.name,
                                     pcap_h, & fcode, interface_opts.cfilter);
    if (tmp___0) {

    } else {
      pcap_close(pcap_h);
      report_cfilter_error((char const   *)interface_opts.cfilter,
                           (char const   *)(errmsg));
      return (0);
    }
    pcap_close(pcap_h);
    insn = fcode.bf_insns;
    i = (u_int )0;
    while (i < fcode.bf_len) {
      tmp___1 = bpf_image((struct bpf_insn  const  *)insn, (int )i);
      printf((char const   */* __restrict  */)"%s\n", tmp___1);
      insn ++;
      i ++;
    }
    j ++;
  }
  if (capture_child) {
    pipe_write_block(2, (char )'S', (char const   *)((void *)0));
  } else {

  }
  return (1);
}
}
GList *capture_interface_list(int *err , char **err_str ) 
{ 
  GList *tmp ;

  {
  tmp = get_interface_list(err, err_str);
  return (tmp);
}
}
static int get_pcap_linktype(pcap_t *pch ,
                             char const   *devname  __attribute__((__unused__)) ) 
{ 
  int linktype ;

  {
  linktype = pcap_datalink(pch);
  return (linktype);
}
}
static data_link_info_t *create_data_link_info(int dlt ) 
{ 
  data_link_info_t *data_link_info ;
  char const   *text ;
  gpointer tmp ;

  {
  tmp = g_malloc(sizeof(data_link_info_t ));
  data_link_info = (data_link_info_t *)tmp;
  data_link_info->dlt = dlt;
  text = pcap_datalink_val_to_name(dlt);
  if ((unsigned int )text != (unsigned int )((void *)0)) {
    data_link_info->name = g_strdup(text);
  } else {
    data_link_info->name = g_strdup_printf("DLT %d", dlt);
  }
  text = pcap_datalink_val_to_description(dlt);
  if ((unsigned int )text != (unsigned int )((void *)0)) {
    data_link_info->description = g_strdup(text);
  } else {
    data_link_info->description = (char *)((void *)0);
  }
  return (data_link_info);
}
}
static if_capabilities_t *get_if_capabilities(char const   *devname ,
                                              gboolean monitor_mode ,
                                              char **err_str ) 
{ 
  if_capabilities_t *caps ;
  char errbuf[256] ;
  pcap_t *pch ;
  int status ;
  int deflt ;
  int *linktypes ;
  int i ;
  int nlt ;
  data_link_info_t *data_link_info ;
  gpointer tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;

  {
  tmp = g_malloc(sizeof(*caps));
  caps = (if_capabilities_t *)tmp;
  pch = pcap_create(devname, errbuf);
  if ((unsigned int )pch == (unsigned int )((void *)0)) {
    if ((unsigned int )err_str != (unsigned int )((void *)0)) {
      *err_str = g_strdup((gchar const   *)(errbuf));
    } else {

    }
    g_free((gpointer )caps);
    return ((if_capabilities_t *)((void *)0));
  } else {

  }
  status = pcap_can_set_rfmon(pch);
  if (status < 0) {
    if (status == -1) {
      tmp___0 = pcap_geterr(pch);
      *err_str = g_strdup_printf("pcap_can_set_rfmon() failed: %s", tmp___0);
    } else {
      tmp___1 = pcap_statustostr(status);
      *err_str = g_strdup(tmp___1);
    }
    pcap_close(pch);
    g_free((gpointer )caps);
    return ((if_capabilities_t *)((void *)0));
  } else {

  }
  if (status == 0) {
    caps->can_set_rfmon = 0;
  } else
  if (status == 1) {
    caps->can_set_rfmon = 1;
    if (monitor_mode) {
      pcap_set_rfmon(pch, 1);
    } else {

    }
  } else {
    if ((unsigned int )err_str != (unsigned int )((void *)0)) {
      *err_str = g_strdup_printf("pcap_can_set_rfmon() returned %d", status);
    } else {

    }
    pcap_close(pch);
    g_free((gpointer )caps);
    return ((if_capabilities_t *)((void *)0));
  }
  status = pcap_activate(pch);
  if (status < 0) {
    if ((unsigned int )err_str != (unsigned int )((void *)0)) {
      if (status == -1) {
        tmp___2 = pcap_geterr(pch);
        *err_str = g_strdup_printf("pcap_activate() failed: %s", tmp___2);
      } else {
        tmp___3 = pcap_statustostr(status);
        *err_str = g_strdup(tmp___3);
      }
    } else {

    }
    pcap_close(pch);
    g_free((gpointer )caps);
    return ((if_capabilities_t *)((void *)0));
  } else {

  }
  deflt = get_pcap_linktype(pch, devname);
  nlt = pcap_list_datalinks(pch, & linktypes);
  if (nlt == 0) {
    goto _L;
  } else
  if ((unsigned int )linktypes == (unsigned int )((void *)0)) {
    _L: /* CIL Label */ 
    pcap_close(pch);
    if ((unsigned int )err_str != (unsigned int )((void *)0)) {
      *err_str = (char *)((void *)0);
    } else {

    }
    return ((if_capabilities_t *)((void *)0));
  } else {

  }
  caps->data_link_types = (GList *)((void *)0);
  i = 0;
  while (i < nlt) {
    data_link_info = create_data_link_info(*(linktypes + i));
    if (*(linktypes + i) == deflt) {
      caps->data_link_types = g_list_prepend(caps->data_link_types,
                                             (gpointer )data_link_info);
    } else {
      caps->data_link_types = g_list_append(caps->data_link_types,
                                            (gpointer )data_link_info);
    }
    i ++;
  }
  pcap_free_datalinks(linktypes);
  pcap_close(pch);
  if ((unsigned int )err_str != (unsigned int )((void *)0)) {
    *err_str = (char *)((void *)0);
  } else {

  }
  return (caps);
}
}
static void print_machine_readable_interfaces(GList *if_list ) 
{ 
  int i ;
  GList *if_entry ;
  if_info_t *if_info ;
  GSList *addr ;
  if_addr_t *if_addr ;
  char addr_str[46] ;
  int tmp ;
  GSList *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;

  {
  if (capture_child) {
    pipe_write_block(2, (char )'S', (char const   *)((void *)0));
  } else {

  }
  i = 1;
  if_entry = g_list_first(if_list);
  while ((unsigned int )if_entry != (unsigned int )((void *)0)) {
    if_info = (if_info_t *)if_entry->data;
    tmp = i;
    i ++;
    printf((char const   */* __restrict  */)"%d. %s", tmp, if_info->name);
    if ((unsigned int )if_info->description != (unsigned int )((void *)0)) {
      printf((char const   */* __restrict  */)"\t%s\t", if_info->description);
    } else {
      printf((char const   */* __restrict  */)"\t\t");
    }
    addr = g_slist_nth(if_info->addrs, (guint )0);
    while ((unsigned int )addr != (unsigned int )((void *)0)) {
      tmp___0 = g_slist_nth(if_info->addrs, (guint )0);
      if ((unsigned int )addr != (unsigned int )tmp___0) {
        printf((char const   */* __restrict  */)",");
      } else {

      }
      if_addr = (if_addr_t *)addr->data;
      switch ((unsigned int )if_addr->ifat_type) {
      case 0U: 
      tmp___1 = inet_ntop(2,
                          (void const   */* __restrict  */)(& if_addr->addr.ip4_addr),
                          (char */* __restrict  */)(addr_str), (socklen_t )46);
      if (tmp___1) {
        printf((char const   */* __restrict  */)"%s", addr_str);
      } else {
        printf((char const   */* __restrict  */)"<unknown IPv4>");
      }
      break;
      case 1U: 
      tmp___2 = inet_ntop(10,
                          (void const   */* __restrict  */)(& if_addr->addr.ip6_addr),
                          (char */* __restrict  */)(addr_str), (socklen_t )46);
      if (tmp___2) {
        printf((char const   */* __restrict  */)"%s", addr_str);
      } else {
        printf((char const   */* __restrict  */)"<unknown IPv6>");
      }
      break;
      default: 
      printf((char const   */* __restrict  */)"<type unknown %u>",
             (unsigned int )if_addr->ifat_type);
      }
      if (addr) {
        addr = addr->next;
      } else {
        addr = (GSList *)((void *)0);
      }
    }
    if (if_info->loopback) {
      printf((char const   */* __restrict  */)"\tloopback");
    } else {
      printf((char const   */* __restrict  */)"\tnetwork");
    }
    printf((char const   */* __restrict  */)"\n");
    if (if_entry) {
      if_entry = if_entry->next;
    } else {
      if_entry = (GList *)((void *)0);
    }
  }
  return;
}
}
static void print_machine_readable_if_capabilities(if_capabilities_t *caps ) 
{ 
  GList *lt_entry ;
  data_link_info_t *data_link_info ;
  gchar const   *desc_str ;

  {
  if (capture_child) {
    pipe_write_block(2, (char )'S', (char const   *)((void *)0));
  } else {

  }
  if (caps->can_set_rfmon) {
    printf((char const   */* __restrict  */)"1\n");
  } else {
    printf((char const   */* __restrict  */)"0\n");
  }
  lt_entry = caps->data_link_types;
  while ((unsigned int )lt_entry != (unsigned int )((void *)0)) {
    data_link_info = (data_link_info_t *)lt_entry->data;
    if ((unsigned int )data_link_info->description != (unsigned int )((void *)0)) {
      desc_str = (gchar const   *)data_link_info->description;
    } else {
      desc_str = "(not supported)";
    }
    printf((char const   */* __restrict  */)"%d\t%s\t%s\n", data_link_info->dlt,
           data_link_info->name, desc_str);
    if (lt_entry) {
      lt_entry = lt_entry->next;
    } else {
      lt_entry = (GList *)((void *)0);
    }
  }
  return;
}
}
static int print_statistics_loop(gboolean machine_readable ) 
{ 
  GList *if_list ;
  GList *if_entry ;
  GList *stat_list ;
  GList *stat_entry ;
  if_info_t *if_info ;
  if_stat_t *if_stat ;
  int err ;
  gchar *err_str ;
  pcap_t *pch ;
  char errbuf[256] ;
  struct pcap_stat ps ;
  gpointer tmp ;

  {
  stat_list = (GList *)((void *)0);
  if_list = get_interface_list(& err, & err_str);
  if ((unsigned int )if_list == (unsigned int )((void *)0)) {
    switch (err) {
    case 1: 
    cmdarg_err("%s", err_str);
    g_free((gpointer )err_str);
    break;
    case 2: 
    cmdarg_err("There are no interfaces on which a capture can be done");
    break;
    }
    return (err);
  } else {

  }
  if_entry = g_list_first(if_list);
  while ((unsigned int )if_entry != (unsigned int )((void *)0)) {
    if_info = (if_info_t *)if_entry->data;
    pch = pcap_open_live((char const   *)if_info->name, 1, 0, 0, errbuf);
    if (pch) {
      tmp = g_malloc(sizeof(if_stat_t ));
      if_stat = (if_stat_t *)tmp;
      if_stat->name = g_strdup((gchar const   *)if_info->name);
      if_stat->pch = pch;
      stat_list = g_list_append(stat_list, (gpointer )if_stat);
    } else {

    }
    if (if_entry) {
      if_entry = if_entry->next;
    } else {
      if_entry = (GList *)((void *)0);
    }
  }
  if (! stat_list) {
    cmdarg_err("There are no interfaces on which a capture can be done");
    return (2);
  } else {

  }
  if (capture_child) {
    pipe_write_block(2, (char )'S', (char const   *)((void *)0));
  } else {

  }
  if (! machine_readable) {
    printf((char const   */* __restrict  */)"%-15s  %10s  %10s\n", "Interface",
           "Received", "Dropped");
  } else {

  }
  global_ld.go = 1;
  while (global_ld.go) {
    stat_entry = g_list_first(stat_list);
    while ((unsigned int )stat_entry != (unsigned int )((void *)0)) {
      if_stat = (if_stat_t *)stat_entry->data;
      pcap_stats(if_stat->pch, & ps);
      if (! machine_readable) {
        printf((char const   */* __restrict  */)"%-15s  %10u  %10u\n",
               if_stat->name, ps.ps_recv, ps.ps_drop);
      } else {
        printf((char const   */* __restrict  */)"%s\t%u\t%u\n", if_stat->name,
               ps.ps_recv, ps.ps_drop);
        fflush(stdout);
      }
      if (stat_entry) {
        stat_entry = stat_entry->next;
      } else {
        stat_entry = (GList *)((void *)0);
      }
    }
    sleep(1U);
  }
  stat_entry = g_list_first(stat_list);
  while ((unsigned int )stat_entry != (unsigned int )((void *)0)) {
    if_stat = (if_stat_t *)stat_entry->data;
    pcap_close(if_stat->pch);
    g_free((gpointer )if_stat->name);
    g_free((gpointer )if_stat);
    if (stat_entry) {
      stat_entry = stat_entry->next;
    } else {
      stat_entry = (GList *)((void *)0);
    }
  }
  g_list_free(stat_list);
  free_interface_list(if_list);
  return (0);
}
}
static void capture_cleanup_handler(int signum  __attribute__((__unused__)) ) 
{ 


  {
  capture_loop_stop();
  return;
}
}
static void report_capture_count(void) 
{ 


  {
  if (! capture_child) {
    if (quiet) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Packets captured: %u\n",
              global_ld.packet_count);
      fflush(stderr);
    } else {

    }
  } else {

  }
  return;
}
}
static  __attribute__((__noreturn__)) void exit_main(int status ) ;
static void exit_main(int status ) 
{ 


  {
  exit(status);
}
}
static void cap_pipe_adjust_header(gboolean byte_swapped ,
                                   struct pcap_hdr *hdr ,
                                   struct pcaprec_hdr *rechdr ) 
{ 
  guint32 temp ;

  {
  if (byte_swapped) {
    rechdr->ts_sec = ((((rechdr->ts_sec & 4278190080U) >> 24) | ((rechdr->ts_sec & 16711680U) >> 8)) | ((rechdr->ts_sec & 65280U) << 8)) | ((rechdr->ts_sec & 255U) << 24);
    rechdr->ts_usec = ((((rechdr->ts_usec & 4278190080U) >> 24) | ((rechdr->ts_usec & 16711680U) >> 8)) | ((rechdr->ts_usec & 65280U) << 8)) | ((rechdr->ts_usec & 255U) << 24);
    rechdr->incl_len = ((((rechdr->incl_len & 4278190080U) >> 24) | ((rechdr->incl_len & 16711680U) >> 8)) | ((rechdr->incl_len & 65280U) << 8)) | ((rechdr->incl_len & 255U) << 24);
    rechdr->orig_len = ((((rechdr->orig_len & 4278190080U) >> 24) | ((rechdr->orig_len & 16711680U) >> 8)) | ((rechdr->orig_len & 65280U) << 8)) | ((rechdr->orig_len & 255U) << 24);
  } else {

  }
  if ((int )hdr->version_major == 2) {
    if ((int )hdr->version_minor < 3) {
      temp = rechdr->orig_len;
      rechdr->orig_len = rechdr->incl_len;
      rechdr->incl_len = temp;
    } else
    if ((int )hdr->version_minor == 3) {
      if (rechdr->incl_len > rechdr->orig_len) {
        temp = rechdr->orig_len;
        rechdr->orig_len = rechdr->incl_len;
        rechdr->incl_len = temp;
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
static int cap_pipe_select(int pipe_fd ) 
{ 
  fd_set rfds ;
  struct timeval timeout ;
  int sel_ret ;
  int __d0 ;
  int __d1 ;
  int *tmp ;
  char *tmp___0 ;

  {
  cap_pipe_err_str = "Unknown error";
  while (1) {
    __asm__  volatile   ("cld; rep; stosl": "=c" (__d0), "=D" (__d1): "a" (0),
                         "0" (sizeof(fd_set ) / sizeof(__fd_mask )),
                         "1" (& rfds.__fds_bits[0]): "memory");
    break;
  }
  __asm__  volatile   ("btsl %1,%0": "=m" (rfds.__fds_bits[(unsigned int )pipe_fd / (8U * sizeof(unsigned long ))]): "r" ((unsigned int )pipe_fd % (8U * sizeof(unsigned long ))): "cc",
                       "memory");
  timeout.tv_sec = (__time_t )0;
  timeout.tv_usec = (__suseconds_t )250000;
  sel_ret = select(pipe_fd + 1, (fd_set */* __restrict  */)(& rfds),
                   (fd_set */* __restrict  */)((void *)0),
                   (fd_set */* __restrict  */)((void *)0),
                   (struct timeval */* __restrict  */)(& timeout));
  if (sel_ret < 0) {
    tmp = __errno_location();
    tmp___0 = strerror(*tmp);
    cap_pipe_err_str = (char const   *)tmp___0;
  } else {

  }
  return (sel_ret);
}
}
static void cap_pipe_open_live(char *pipename , pcap_options *pcap_opts ,
                               struct pcap_hdr *hdr , char *errmsg ,
                               int errmsgl ) 
{ 
  struct stat pipe_stat ;
  struct sockaddr_un sa ;
  int b ;
  int fd ;
  int sel_ret ;
  unsigned int bytes_read ;
  guint32 magic ;
  int *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  char *tmp___7 ;
  gsize tmp___8 ;
  int *tmp___9 ;
  char *tmp___10 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___14 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int *tmp___18 ;
  char *tmp___19 ;
  int *tmp___20 ;
  char *tmp___21 ;
  int *tmp___22 ;
  char *tmp___23 ;
  int *tmp___24 ;
  char *tmp___25 ;

  {
  magic = (guint32 )0;
  pcap_opts->cap_pipe_fd = -1;
  g_log("CaptureChild", (GLogLevelFlags )128, "cap_pipe_open_live: %s", pipename);
  if (0) {
    __s1_len = strlen((char const   *)pipename);
    __s2_len = strlen("-");
    if (! ((size_t )((void const   *)(pipename + 1)) - (size_t )((void const   *)pipename) == 1U)) {
      goto _L___0;
    } else
    if (__s1_len >= 4U) {
      _L___0: /* CIL Label */ 
      if (! ((size_t )((void const   *)("-" + 1)) - (size_t )((void const   *)"-") == 1U)) {
        tmp___17 = 1;
      } else
      if (__s2_len >= 4U) {
        tmp___17 = 1;
      } else {
        tmp___17 = 0;
      }
    } else {
      tmp___17 = 0;
    }
    if (tmp___17) {
      tmp___12 = __builtin_strcmp((char const   *)pipename, "-");
      tmp___16 = tmp___12;
    } else {
      tmp___15 = __builtin_strcmp((char const   *)pipename, "-");
      tmp___16 = tmp___15;
    }
  } else {
    tmp___15 = __builtin_strcmp((char const   *)pipename, "-");
    tmp___16 = tmp___15;
  }
  if (tmp___16 == 0) {
    fd = 0;
  } else {
    tmp___3 = stat((char const   */* __restrict  */)pipename,
                   (struct stat */* __restrict  */)(& pipe_stat));
    if (tmp___3 < 0) {
      tmp___1 = __errno_location();
      if (*tmp___1 == 2) {
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )3;
      } else {
        tmp___2 = __errno_location();
        if (*tmp___2 == 20) {
          pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )3;
        } else {
          tmp = __errno_location();
          tmp___0 = strerror(*tmp);
          g_snprintf(errmsg, (gulong )errmsgl,
                     "The capture session could not be initiated due to error getting information on pipe/socket: %s",
                     tmp___0);
          pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
        }
      }
      return;
    } else {

    }
    if ((pipe_stat.st_mode & 61440U) == 4096U) {
      fd = open((char const   *)pipename, 2048, 0);
      if (fd == -1) {
        tmp___4 = __errno_location();
        tmp___5 = strerror(*tmp___4);
        g_snprintf(errmsg, (gulong )errmsgl,
                   "The capture session could not be initiated due to error on pipe open: %s",
                   tmp___5);
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
        return;
      } else {

      }
    } else
    if ((pipe_stat.st_mode & 61440U) == 49152U) {
      fd = socket(1, 1, 0);
      if (fd == -1) {
        tmp___6 = __errno_location();
        tmp___7 = strerror(*tmp___6);
        g_snprintf(errmsg, (gulong )errmsgl,
                   "The capture session could not be initiated due to error on socket create: %s",
                   tmp___7);
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
        return;
      } else {

      }
      sa.sun_family = (sa_family_t )1;
      tmp___8 = g_strlcpy(sa.sun_path, (gchar const   *)pipename,
                          sizeof(sa.sun_path));
      if (tmp___8 > sizeof(sa.sun_path)) {
        g_snprintf(errmsg, (gulong )errmsgl,
                   "The capture session coud not be initiated due to error on socket connect: Path name too long");
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
        return;
      } else {

      }
      b = connect(fd, (struct sockaddr  const  *)((struct sockaddr *)(& sa)),
                  sizeof(sa));
      if (b == -1) {
        tmp___9 = __errno_location();
        tmp___10 = strerror(*tmp___9);
        g_snprintf(errmsg, (gulong )errmsgl,
                   "The capture session coud not be initiated due to error on socket connect: %s",
                   tmp___10);
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
        return;
      } else {

      }
    } else {
      if ((pipe_stat.st_mode & 61440U) == 8192U) {
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )3;
      } else {
        g_snprintf(errmsg, (gulong )errmsgl,
                   "The capture session could not be initiated because\n\"%s\" is neither an interface nor a socket nor a pipe",
                   pipename);
        pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
      }
      return;
    }
  }
  pcap_opts->from_cap_pipe = 1;
  bytes_read = 0U;
  while (bytes_read < sizeof(magic)) {
    sel_ret = cap_pipe_select(fd);
    if (sel_ret < 0) {
      tmp___18 = __errno_location();
      tmp___19 = strerror(*tmp___18);
      g_snprintf(errmsg, (gulong )errmsgl, "Unexpected error from select: %s",
                 tmp___19);
      goto error;
    } else
    if (sel_ret > 0) {
      b = read(fd, (void *)((char *)(& magic) + bytes_read),
               sizeof(magic) - bytes_read);
      if (b <= 0) {
        if (b == 0) {
          g_snprintf(errmsg, (gulong )errmsgl,
                     "End of file on pipe magic during open");
        } else {
          tmp___20 = __errno_location();
          tmp___21 = strerror(*tmp___20);
          g_snprintf(errmsg, (gulong )errmsgl,
                     "Error on pipe magic during open: %s", tmp___21);
        }
        goto error;
      } else {

      }
      bytes_read += (unsigned int )b;
    } else {

    }
  }
  switch (magic) {
  case 2712847316U: 
  pcap_opts->cap_pipe_byte_swapped = 0;
  pcap_opts->cap_pipe_modified = 0;
  break;
  case 2712849716U: 
  pcap_opts->cap_pipe_byte_swapped = 0;
  pcap_opts->cap_pipe_modified = 1;
  break;
  case 3569595041U: 
  pcap_opts->cap_pipe_byte_swapped = 1;
  pcap_opts->cap_pipe_modified = 0;
  break;
  case 885895841U: 
  pcap_opts->cap_pipe_byte_swapped = 1;
  pcap_opts->cap_pipe_modified = 1;
  break;
  default: 
  g_snprintf(errmsg, (gulong )errmsgl, "Unrecognized libpcap format");
  goto error;
  }
  bytes_read = 0U;
  while (bytes_read < sizeof(struct pcap_hdr )) {
    sel_ret = cap_pipe_select(fd);
    if (sel_ret < 0) {
      tmp___22 = __errno_location();
      tmp___23 = strerror(*tmp___22);
      g_snprintf(errmsg, (gulong )errmsgl, "Unexpected error from select: %s",
                 tmp___23);
      goto error;
    } else
    if (sel_ret > 0) {
      b = read(fd, (void *)((char *)hdr + bytes_read),
               sizeof(struct pcap_hdr ) - bytes_read);
      if (b <= 0) {
        if (b == 0) {
          g_snprintf(errmsg, (gulong )errmsgl,
                     "End of file on pipe header during open");
        } else {
          tmp___24 = __errno_location();
          tmp___25 = strerror(*tmp___24);
          g_snprintf(errmsg, (gulong )errmsgl,
                     "Error on pipe header during open: %s", tmp___25);
        }
        goto error;
      } else {

      }
      bytes_read += (unsigned int )b;
    } else {

    }
  }
  if (pcap_opts->cap_pipe_byte_swapped) {
    hdr->version_major = (guint16 )((((int )hdr->version_major & 65280) >> 8) | (((int )hdr->version_major & 255) << 8));
    hdr->version_minor = (guint16 )((((int )hdr->version_minor & 65280) >> 8) | (((int )hdr->version_minor & 255) << 8));
    hdr->snaplen = ((((hdr->snaplen & 4278190080U) >> 24) | ((hdr->snaplen & 16711680U) >> 8)) | ((hdr->snaplen & 65280U) << 8)) | ((hdr->snaplen & 255U) << 24);
    hdr->network = ((((hdr->network & 4278190080U) >> 24) | ((hdr->network & 16711680U) >> 8)) | ((hdr->network & 65280U) << 8)) | ((hdr->network & 255U) << 24);
  } else {

  }
  pcap_opts->linktype = (int )hdr->network;
  if ((int )hdr->version_major < 2) {
    g_snprintf(errmsg, (gulong )errmsgl, "Unable to read old libpcap format");
    goto error;
  } else {

  }
  pcap_opts->cap_pipe_state = (enum __anonenum_cap_pipe_state_168 )0;
  pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )0;
  pcap_opts->cap_pipe_fd = fd;
  return;
  error: 
  g_log("CaptureChild", (GLogLevelFlags )128, "cap_pipe_open_live: error %s",
        errmsg);
  pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
  close(fd);
  pcap_opts->cap_pipe_fd = -1;
  return;
}
}
static int cap_pipe_dispatch(loop_data *ld , pcap_options *pcap_opts ,
                             guchar *data , char *errmsg , int errmsgl ) 
{ 
  struct pcap_pkthdr phdr ;
  enum __anonenum_result_171 result ;
  int b ;
  int *tmp ;
  char *tmp___0 ;

  {
  switch ((unsigned int )pcap_opts->cap_pipe_state) {
  case 0U: 
  pcap_opts->cap_pipe_state = (enum __anonenum_cap_pipe_state_168 )1;
  if (pcap_opts->cap_pipe_modified) {
    pcap_opts->cap_pipe_bytes_to_read = (int )sizeof(struct pcaprec_modified_hdr );
  } else {
    pcap_opts->cap_pipe_bytes_to_read = (int )sizeof(struct pcaprec_hdr );
  }
  pcap_opts->cap_pipe_bytes_read = 0;
  case 1U: 
  b = read(pcap_opts->cap_pipe_fd,
           (void *)((char *)(& pcap_opts->cap_pipe_rechdr) + pcap_opts->cap_pipe_bytes_read),
           (size_t )(pcap_opts->cap_pipe_bytes_to_read - pcap_opts->cap_pipe_bytes_read));
  if (b <= 0) {
    if (b == 0) {
      result = (enum __anonenum_result_171 )2;
    } else {
      result = (enum __anonenum_result_171 )3;
    }
    break;
  } else {

  }
  pcap_opts->cap_pipe_bytes_read += b;
  if (pcap_opts->cap_pipe_bytes_read < pcap_opts->cap_pipe_bytes_to_read) {
    return (0);
  } else {

  }
  result = (enum __anonenum_result_171 )0;
  break;
  case 2U: 
  pcap_opts->cap_pipe_state = (enum __anonenum_cap_pipe_state_168 )3;
  pcap_opts->cap_pipe_bytes_to_read = (int )pcap_opts->cap_pipe_rechdr.hdr.incl_len;
  pcap_opts->cap_pipe_bytes_read = 0;
  case 3U: 
  b = read(pcap_opts->cap_pipe_fd,
           (void *)(data + pcap_opts->cap_pipe_bytes_read),
           (size_t )(pcap_opts->cap_pipe_bytes_to_read - pcap_opts->cap_pipe_bytes_read));
  if (b <= 0) {
    if (b == 0) {
      result = (enum __anonenum_result_171 )2;
    } else {
      result = (enum __anonenum_result_171 )3;
    }
    break;
  } else {

  }
  pcap_opts->cap_pipe_bytes_read += b;
  if (pcap_opts->cap_pipe_bytes_read < pcap_opts->cap_pipe_bytes_to_read) {
    return (0);
  } else {

  }
  result = (enum __anonenum_result_171 )1;
  break;
  default: 
  g_snprintf(errmsg, (gulong )errmsgl, "cap_pipe_dispatch: invalid state");
  result = (enum __anonenum_result_171 )4;
  }
  switch ((unsigned int )result) {
  case 0U: 
  cap_pipe_adjust_header(pcap_opts->cap_pipe_byte_swapped,
                         & pcap_opts->cap_pipe_hdr,
                         & pcap_opts->cap_pipe_rechdr.hdr);
  if (pcap_opts->cap_pipe_rechdr.hdr.incl_len > 65535U) {
    g_snprintf(errmsg, (gulong )errmsgl, "Frame %u too long (%d bytes)",
               ld->packet_count + 1, pcap_opts->cap_pipe_rechdr.hdr.incl_len);
    break;
  } else {

  }
  pcap_opts->cap_pipe_state = (enum __anonenum_cap_pipe_state_168 )2;
  return (0);
  case 1U: 
  phdr.ts.tv_sec = (__time_t )pcap_opts->cap_pipe_rechdr.hdr.ts_sec;
  phdr.ts.tv_usec = (__suseconds_t )pcap_opts->cap_pipe_rechdr.hdr.ts_usec;
  phdr.caplen = pcap_opts->cap_pipe_rechdr.hdr.incl_len;
  phdr.len = pcap_opts->cap_pipe_rechdr.hdr.orig_len;
  if (use_threads) {
    capture_loop_queue_packet_cb((u_char *)(& pcap_opts->interface_id),
                                 (struct pcap_pkthdr  const  *)(& phdr),
                                 (u_char const   *)data);
  } else {
    capture_loop_write_packet_cb((u_char *)(& pcap_opts->interface_id),
                                 (struct pcap_pkthdr  const  *)(& phdr),
                                 (u_char const   *)data);
  }
  pcap_opts->cap_pipe_state = (enum __anonenum_cap_pipe_state_168 )0;
  return (1);
  case 2U: 
  pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )1;
  return (-1);
  case 3U: 
  tmp = __errno_location();
  tmp___0 = strerror(*tmp);
  g_snprintf(errmsg, (gulong )errmsgl, "Error reading from pipe: %s", tmp___0);
  case 4U: 
  break;
  }
  pcap_opts->cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )2;
  return (-1);
}
}
static gboolean capture_loop_open_input(capture_options *capture_opts ,
                                        loop_data *ld , char *errmsg ,
                                        size_t errmsg_len ,
                                        char *secondary_errmsg ,
                                        size_t secondary_errmsg_len ) 
{ 
  gchar open_err_str[256] ;
  gchar *sync_msg_str ;
  interface_options interface_opts ;
  pcap_options pcap_opts ;
  guint i ;
  gboolean tmp ;

  {
  if (use_threads == 0) {
    if ((capture_opts->ifaces)->len > 1U) {
      g_snprintf(errmsg, (gulong )errmsg_len,
                 "Using threads is required for capturing on mulitple interfaces! Use the -t option.");
      return (0);
    } else {

    }
  } else {

  }
  i = (guint )0;
  while (i < (capture_opts->ifaces)->len) {
    interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + i);
    pcap_opts.pcap_h = (pcap_t *)((void *)0);
    pcap_opts.pcap_fd = -1;
    pcap_opts.pcap_err = 0;
    pcap_opts.interface_id = i;
    pcap_opts.tid = (GThread *)((void *)0);
    pcap_opts.snaplen = 0;
    pcap_opts.linktype = -1;
    pcap_opts.from_cap_pipe = 0;
    memset((void *)(& pcap_opts.cap_pipe_hdr), 0, sizeof(struct pcap_hdr ));
    memset((void *)(& pcap_opts.cap_pipe_rechdr), 0,
           sizeof(struct pcaprec_modified_hdr ));
    pcap_opts.cap_pipe_fd = -1;
    pcap_opts.cap_pipe_modified = 0;
    pcap_opts.cap_pipe_byte_swapped = 0;
    pcap_opts.cap_pipe_bytes_to_read = 0;
    pcap_opts.cap_pipe_bytes_read = 0;
    pcap_opts.cap_pipe_state = (enum __anonenum_cap_pipe_state_168 )0;
    pcap_opts.cap_pipe_err = (enum __anonenum_cap_pipe_err_169 )0;
    g_log("CaptureChild", (GLogLevelFlags )128, "capture_loop_open_input : %s",
          interface_opts.name);
    pcap_opts.pcap_h = open_capture_device(& interface_opts, & open_err_str);
    if ((unsigned int )pcap_opts.pcap_h != (unsigned int )((void *)0)) {
      tmp = set_pcap_linktype(pcap_opts.pcap_h, interface_opts.linktype,
                              interface_opts.name, errmsg, errmsg_len,
                              secondary_errmsg, secondary_errmsg_len);
      if (tmp) {

      } else {
        g_array_append_vals(ld->pcaps, (gconstpointer )(& pcap_opts), (guint )1);
        return (0);
      }
      pcap_opts.linktype = get_pcap_linktype(pcap_opts.pcap_h,
                                             (char const   *)interface_opts.name);
    } else {
      cap_pipe_open_live(interface_opts.name, & pcap_opts,
                         & pcap_opts.cap_pipe_hdr, errmsg, (int )errmsg_len);
      if (pcap_opts.cap_pipe_fd == -1) {
        if ((unsigned int )pcap_opts.cap_pipe_err == 3U) {
          get_capture_device_open_failure_messages((char const   *)(open_err_str),
                                                   (char const   *)interface_opts.name,
                                                   errmsg, errmsg_len,
                                                   secondary_errmsg,
                                                   secondary_errmsg_len);
        } else {

        }
        g_array_append_vals(ld->pcaps, (gconstpointer )(& pcap_opts), (guint )1);
        return (0);
      } else {
        open_err_str[0] = (gchar )'\000';
      }
    }
    if (! pcap_opts.from_cap_pipe) {
      pcap_opts.pcap_fd = pcap_get_selectable_fd(pcap_opts.pcap_h);
    } else {

    }
    if ((int )open_err_str[0] != 0) {
      sync_msg_str = g_strdup_printf("%s.", open_err_str);
      report_capture_error((char const   *)sync_msg_str, "");
      g_free((gpointer )sync_msg_str);
    } else {

    }
    capture_opts->ifaces = g_array_remove_index(capture_opts->ifaces, i);
    g_array_insert_vals(capture_opts->ifaces, i,
                        (gconstpointer )(& interface_opts), (guint )1);
    g_array_append_vals(ld->pcaps, (gconstpointer )(& pcap_opts), (guint )1);
    i ++;
  }
  return (1);
}
}
static void capture_loop_close_input(loop_data *ld ) 
{ 
  guint i ;
  pcap_options pcap_opts ;
  int _g_boolean_var_ ;
  long tmp ;

  {
  g_log("CaptureChild", (GLogLevelFlags )128, "capture_loop_close_input");
  i = (guint )0;
  while (i < (ld->pcaps)->len) {
    pcap_opts = *((pcap_options *)((void *)(ld->pcaps)->data) + i);
    if (pcap_opts.cap_pipe_fd >= 0) {
      while (1) {
        if (pcap_opts.from_cap_pipe) {
          _g_boolean_var_ = 1;
        } else {
          _g_boolean_var_ = 0;
        }
        tmp = __builtin_expect((long )_g_boolean_var_, 1L);
        if (tmp) {

        } else {
          g_assertion_message_expr((char const   *)((gchar *)0), "dumpcap.c",
                                   2409, "capture_loop_close_input",
                                   "pcap_opts.from_cap_pipe");
        }
        break;
      }
      close(pcap_opts.cap_pipe_fd);
      pcap_opts.cap_pipe_fd = -1;
    } else {

    }
    if ((unsigned int )pcap_opts.pcap_h != (unsigned int )((void *)0)) {
      g_log("CaptureChild", (GLogLevelFlags )128,
            "capture_loop_close_input: closing %p", pcap_opts.pcap_h);
      pcap_close(pcap_opts.pcap_h);
      pcap_opts.pcap_h = (pcap_t *)((void *)0);
    } else {

    }
    i ++;
  }
  ld->go = 0;
  return;
}
}
static initfilter_status_t capture_loop_init_filter(pcap_t *pcap_h ,
                                                    gboolean from_cap_pipe ,
                                                    gchar *name ,
                                                    gchar *cfilter ) 
{ 
  struct bpf_program fcode ;
  gboolean tmp ;
  int tmp___0 ;

  {
  g_log("CaptureChild", (GLogLevelFlags )128, "capture_loop_init_filter: %s",
        cfilter);
  if (cfilter) {
    if (! from_cap_pipe) {
      tmp = compile_capture_filter((char const   *)name, pcap_h, & fcode,
                                   cfilter);
      if (tmp) {

      } else {
        return ((initfilter_status_t )1);
      }
      tmp___0 = pcap_setfilter(pcap_h, & fcode);
      if (tmp___0 < 0) {
        pcap_freecode(& fcode);
        return ((initfilter_status_t )2);
      } else {

      }
      pcap_freecode(& fcode);
    } else {

    }
  } else {

  }
  return ((initfilter_status_t )0);
}
}
static gboolean capture_loop_init_output(capture_options *capture_opts ,
                                         loop_data *ld , char *errmsg ,
                                         int errmsg_len ) 
{ 
  int err ;
  guint i ;
  pcap_options pcap_opts ;
  interface_options interface_opts ;
  gboolean successful ;
  char appname[100] ;
  char *tmp ;

  {
  g_log("CaptureChild", (GLogLevelFlags )128, "capture_loop_init_output");
  if (capture_opts->use_pcapng == 0) {
    if ((capture_opts->ifaces)->len > 1U) {
      g_snprintf(errmsg, (gulong )errmsg_len,
                 "Using PCAPNG is required for capturing on mulitple interfaces! Use the -n option.");
      return (0);
    } else {

    }
  } else {

  }
  if (capture_opts->multi_files_on) {
    ld->pdh = ringbuf_init_libpcap_fdopen(& err);
  } else {
    ld->pdh = libpcap_fdopen(ld->save_file_fd, & err);
  }
  if (ld->pdh) {
    if (capture_opts->use_pcapng) {
      g_snprintf(appname, (gulong )sizeof(appname), "Dumpcap 1.7.0%s",
                 wireshark_svnversion);
      successful = libpcap_write_session_header_block(ld->pdh, appname,
                                                      & ld->bytes_written, & err);
      i = (guint )0;
      while (1) {
        if (successful) {
          if (i < (capture_opts->ifaces)->len) {

          } else {
            break;
          }
        } else {
          break;
        }
        interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + i);
        pcap_opts = *((pcap_options *)((void *)(ld->pcaps)->data) + i);
        if (pcap_opts.from_cap_pipe) {
          pcap_opts.snaplen = (int )pcap_opts.cap_pipe_hdr.snaplen;
        } else {
          pcap_opts.snaplen = pcap_snapshot(pcap_opts.pcap_h);
        }
        successful = libpcap_write_interface_description_block(ld->pdh,
                                                               interface_opts.name,
                                                               interface_opts.cfilter,
                                                               pcap_opts.linktype,
                                                               pcap_opts.snaplen,
                                                               & ld->bytes_written,
                                                               & err);
        i ++;
      }
    } else {
      interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + 0);
      pcap_opts = *((pcap_options *)((void *)(ld->pcaps)->data) + 0);
      if (pcap_opts.from_cap_pipe) {
        pcap_opts.snaplen = (int )pcap_opts.cap_pipe_hdr.snaplen;
      } else {
        pcap_opts.snaplen = pcap_snapshot(pcap_opts.pcap_h);
      }
      successful = libpcap_write_file_header(ld->pdh, pcap_opts.linktype,
                                             pcap_opts.snaplen,
                                             & ld->bytes_written, & err);
    }
    if (! successful) {
      fclose(ld->pdh);
      ld->pdh = (FILE *)((void *)0);
    } else {

    }
  } else {

  }
  if ((unsigned int )ld->pdh == (unsigned int )((void *)0)) {
    switch (err) {
    default: 
    if (err < 0) {
      g_snprintf(errmsg, (gulong )errmsg_len,
                 "The file to which the capture would be saved (\"%s\") could not be opened: Error %d.",
                 capture_opts->save_file, err);
    } else {
      tmp = strerror(err);
      g_snprintf(errmsg, (gulong )errmsg_len,
                 "The file to which the capture would be saved (\"%s\") could not be opened: %s.",
                 capture_opts->save_file, tmp);
    }
    break;
    }
    return (0);
  } else {

  }
  return (1);
}
}
static gboolean capture_loop_close_output(capture_options *capture_opts ,
                                          loop_data *ld , int *err_close ) 
{ 
  unsigned int i ;
  pcap_options pcap_opts ;
  gboolean tmp ;
  gboolean tmp___0 ;

  {
  g_log("CaptureChild", (GLogLevelFlags )128, "capture_loop_close_output");
  if (capture_opts->multi_files_on) {
    tmp = ringbuf_libpcap_dump_close(& capture_opts->save_file, err_close);
    return (tmp);
  } else {
    if (capture_opts->use_pcapng) {
      i = 0U;
      while (i < (global_ld.pcaps)->len) {
        pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
        if (! pcap_opts.from_cap_pipe) {
          libpcap_write_interface_statistics_block(ld->pdh, i, pcap_opts.pcap_h,
                                                   & ld->bytes_written,
                                                   err_close);
        } else {

        }
        i ++;
      }
    } else {

    }
    tmp___0 = libpcap_dump_close(ld->pdh, err_close);
    return (tmp___0);
  }
}
}
static int capture_loop_dispatch(loop_data *ld , char *errmsg , int errmsg_len ,
                                 pcap_options *pcap_opts ) 
{ 
  int inpkts ;
  gint packet_count_before ;
  guchar pcap_data[65535] ;
  int sel_ret ;
  int *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;

  {
  packet_count_before = ld->packet_count;
  if (pcap_opts->from_cap_pipe) {
    sel_ret = cap_pipe_select(pcap_opts->cap_pipe_fd);
    if (sel_ret <= 0) {
      if (sel_ret < 0) {
        tmp___1 = __errno_location();
        if (*tmp___1 != 4) {
          tmp = __errno_location();
          tmp___0 = strerror(*tmp);
          g_snprintf(errmsg, (gulong )errmsg_len,
                     "Unexpected error from select: %s", tmp___0);
          report_capture_error((char const   *)errmsg, please_report);
          ld->go = 0;
        } else {

        }
      } else {

      }
    } else {
      inpkts = cap_pipe_dispatch(ld, pcap_opts, pcap_data, errmsg, errmsg_len);
      if (inpkts < 0) {
        ld->go = 0;
      } else {

      }
    }
  } else
  if (pcap_opts->pcap_fd != -1) {
    sel_ret = cap_pipe_select(pcap_opts->pcap_fd);
    if (sel_ret > 0) {
      if (use_threads) {
        inpkts = pcap_dispatch(pcap_opts->pcap_h, 1,
                               & capture_loop_queue_packet_cb,
                               (u_char *)(& pcap_opts->interface_id));
      } else {
        inpkts = pcap_dispatch(pcap_opts->pcap_h, 1,
                               & capture_loop_write_packet_cb,
                               (u_char *)(& pcap_opts->interface_id));
      }
      if (inpkts < 0) {
        if (inpkts == -1) {
          pcap_opts->pcap_err = 1;
        } else {

        }
        ld->go = 0;
      } else {

      }
    } else
    if (sel_ret < 0) {
      tmp___4 = __errno_location();
      if (*tmp___4 != 4) {
        tmp___2 = __errno_location();
        tmp___3 = strerror(*tmp___2);
        g_snprintf(errmsg, (gulong )errmsg_len,
                   "Unexpected error from select: %s", tmp___3);
        report_capture_error((char const   *)errmsg, please_report);
        ld->go = 0;
      } else {

      }
    } else {

    }
  } else {
    if (use_threads) {
      inpkts = pcap_dispatch(pcap_opts->pcap_h, -1,
                             & capture_loop_queue_packet_cb,
                             (u_char *)(& pcap_opts->interface_id));
    } else {
      inpkts = pcap_dispatch(pcap_opts->pcap_h, -1,
                             & capture_loop_write_packet_cb,
                             (u_char *)(& pcap_opts->interface_id));
    }
    if (inpkts < 0) {
      if (inpkts == -1) {
        pcap_opts->pcap_err = 1;
      } else {

      }
      ld->go = 0;
    } else {

    }
  }
  return (ld->packet_count - packet_count_before);
}
}
static gboolean capture_loop_open_output(capture_options *capture_opts ,
                                         int *save_file_fd , char *errmsg ,
                                         int errmsg_len ) 
{ 
  char *tmpname ;
  gchar *capfile_name ;
  gchar *prefix ;
  gboolean is_tempfile ;
  char const   *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___3 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  guint32 tmp___7 ;
  gchar const   *tmp___8 ;
  int tmp___9 ;
  gchar const   *tmp___10 ;
  int *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  char *tmp___14 ;

  {
  if (capture_opts->save_file) {
    tmp = (char const   *)capture_opts->save_file;
  } else {
    tmp = "(not specified)";
  }
  g_log("CaptureChild", (GLogLevelFlags )128, "capture_loop_open_output: %s",
        tmp);
  if ((unsigned int )capture_opts->save_file != (unsigned int )((void *)0)) {
    capfile_name = g_strdup((gchar const   *)capture_opts->save_file);
    if (capture_opts->output_to_pipe == 1) {
      if (capture_opts->multi_files_on) {
        g_snprintf(errmsg, (gulong )errmsg_len,
                   "Ring buffer requested, but capture is being written to standard output or to a named pipe.");
        g_free((gpointer )capfile_name);
        return (0);
      } else {

      }
      if (0) {
        __s1_len = strlen((char const   *)capfile_name);
        __s2_len = strlen("-");
        if (! ((size_t )((void const   *)(capfile_name + 1)) - (size_t )((void const   *)capfile_name) == 1U)) {
          goto _L___0;
        } else
        if (__s1_len >= 4U) {
          _L___0: /* CIL Label */ 
          if (! ((size_t )((void const   *)("-" + 1)) - (size_t )((void const   *)"-") == 1U)) {
            tmp___6 = 1;
          } else
          if (__s2_len >= 4U) {
            tmp___6 = 1;
          } else {
            tmp___6 = 0;
          }
        } else {
          tmp___6 = 0;
        }
        if (tmp___6) {
          tmp___1 = __builtin_strcmp((char const   *)capfile_name, "-");
          tmp___5 = tmp___1;
        } else {
          tmp___4 = __builtin_strcmp((char const   *)capfile_name, "-");
          tmp___5 = tmp___4;
        }
      } else {
        tmp___4 = __builtin_strcmp((char const   *)capfile_name, "-");
        tmp___5 = tmp___4;
      }
      if (tmp___5 == 0) {
        *save_file_fd = 1;
      } else {

      }
    } else
    if (capture_opts->multi_files_on) {
      if (capture_opts->has_ring_num_files) {
        tmp___7 = capture_opts->ring_num_files;
      } else {
        tmp___7 = (guint32 )0;
      }
      *save_file_fd = ringbuf_init((char const   *)capfile_name, tmp___7,
                                   capture_opts->group_read_access);
      if (*save_file_fd != -1) {
        g_free((gpointer )capfile_name);
        tmp___8 = ringbuf_current_filename();
        capfile_name = g_strdup(tmp___8);
      } else {

      }
    } else {
      if (capture_opts->group_read_access) {
        tmp___9 = 416;
      } else {
        tmp___9 = 384;
      }
      *save_file_fd = open((char const   *)capfile_name, 578, tmp___9);
    }
    is_tempfile = 0;
  } else {
    tmp___10 = g_basename((gchar const   *)((interface_options *)((void *)(global_capture_opts.ifaces)->data) + ((global_capture_opts.ifaces)->len - 1U))->name);
    prefix = g_strconcat("wireshark_", tmp___10, (void *)0);
    *save_file_fd = create_tempfile(& tmpname, (char const   *)prefix);
    g_free((gpointer )prefix);
    capfile_name = g_strdup((gchar const   *)tmpname);
    is_tempfile = 1;
  }
  if (*save_file_fd == -1) {
    if (is_tempfile) {
      tmp___11 = __errno_location();
      tmp___12 = strerror(*tmp___11);
      g_snprintf(errmsg, (gulong )errmsg_len,
                 "The temporary file to which the capture would be saved (\"%s\") could not be opened: %s.",
                 capfile_name, tmp___12);
    } else {
      if (capture_opts->multi_files_on) {
        ringbuf_error_cleanup();
      } else {

      }
      tmp___13 = __errno_location();
      tmp___14 = strerror(*tmp___13);
      g_snprintf(errmsg, (gulong )errmsg_len,
                 "The file to which the capture would be saved (\"%s\") could not be opened: %s.",
                 capfile_name, tmp___14);
    }
    g_free((gpointer )capfile_name);
    return (0);
  } else {

  }
  if ((unsigned int )capture_opts->save_file != (unsigned int )((void *)0)) {
    g_free((gpointer )capture_opts->save_file);
  } else {

  }
  capture_opts->save_file = capfile_name;
  return (1);
}
}
static gboolean do_file_switch_or_stop(capture_options *capture_opts ,
                                       condition *cnd_autostop_files ,
                                       condition *cnd_autostop_size ,
                                       condition *cnd_file_duration ) 
{ 
  guint i ;
  pcap_options pcap_opts ;
  interface_options interface_opts ;
  gboolean successful ;
  gboolean tmp ;
  char appname[100] ;
  gboolean tmp___0 ;

  {
  if (capture_opts->multi_files_on) {
    if ((unsigned int )cnd_autostop_files != (unsigned int )((void *)0)) {
      (global_ld.autostop_files) ++;
      tmp = cnd_eval(cnd_autostop_files, global_ld.autostop_files);
      if (tmp) {
        global_ld.go = 0;
        return (0);
      } else {

      }
    } else {

    }
    tmp___0 = ringbuf_switch_file(& global_ld.pdh, & capture_opts->save_file,
                                  & global_ld.save_file_fd, & global_ld.err);
    if (tmp___0) {
      global_ld.bytes_written = 0L;
      if (capture_opts->use_pcapng) {
        g_snprintf(appname, (gulong )sizeof(appname), "Dumpcap 1.7.0%s",
                   wireshark_svnversion);
        successful = libpcap_write_session_header_block(global_ld.pdh, appname,
                                                        & global_ld.bytes_written,
                                                        & global_ld.err);
        i = (guint )0;
        while (1) {
          if (successful) {
            if (i < (capture_opts->ifaces)->len) {

            } else {
              break;
            }
          } else {
            break;
          }
          interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + i);
          pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
          successful = libpcap_write_interface_description_block(global_ld.pdh,
                                                                 interface_opts.name,
                                                                 interface_opts.cfilter,
                                                                 pcap_opts.linktype,
                                                                 pcap_opts.snaplen,
                                                                 & global_ld.bytes_written,
                                                                 & global_ld.err);
          i ++;
        }
      } else {
        interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + 0);
        pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + 0);
        successful = libpcap_write_file_header(global_ld.pdh,
                                               pcap_opts.linktype,
                                               pcap_opts.snaplen,
                                               & global_ld.bytes_written,
                                               & global_ld.err);
      }
      if (! successful) {
        fclose(global_ld.pdh);
        global_ld.pdh = (FILE *)((void *)0);
        global_ld.go = 0;
        return (0);
      } else {

      }
      if (cnd_autostop_size) {
        cnd_reset(cnd_autostop_size);
      } else {

      }
      if (cnd_file_duration) {
        cnd_reset(cnd_file_duration);
      } else {

      }
      libpcap_dump_flush(global_ld.pdh, (int *)((void *)0));
      if (! quiet) {
        report_packet_count(global_ld.inpkts_to_sync_pipe);
      } else {

      }
      global_ld.inpkts_to_sync_pipe = 0;
      report_new_capture_file((char const   *)capture_opts->save_file);
    } else {
      global_ld.go = 0;
      return (0);
    }
  } else {
    global_ld.go = 0;
    return (0);
  }
  return (1);
}
}
static void *pcap_read_handler(void *arg ) 
{ 
  pcap_options pcap_opts ;
  guint interface_id ;
  char errmsg[4097] ;

  {
  interface_id = *((guint *)arg);
  g_free(arg);
  pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + interface_id);
  g_log("CaptureChild", (GLogLevelFlags )64, "Started thread for interface %d.",
        interface_id);
  while (global_ld.go) {
    capture_loop_dispatch(& global_ld, errmsg, (int )sizeof(errmsg), & pcap_opts);
  }
  g_log("CaptureChild", (GLogLevelFlags )64, "Stopped thread for interface %d.",
        interface_id);
  g_thread_exit((void *)0);
  return ((void *)0);
}
}
static gboolean capture_loop_start(capture_options *capture_opts ,
                                   gboolean *stats_known ,
                                   struct pcap_stat *stats ) 
{ 
  struct timeval upd_time ;
  struct timeval cur_time ;
  int err_close ;
  int inpkts ;
  condition *cnd_file_duration ;
  condition *cnd_autostop_files ;
  condition *cnd_autostop_size ;
  condition *cnd_autostop_duration ;
  gboolean write_ok ;
  gboolean close_ok ;
  gboolean cfilter_error ;
  char errmsg[4097] ;
  char secondary_errmsg[4097] ;
  pcap_options pcap_opts ;
  interface_options interface_opts ;
  guint i ;
  gboolean tmp ;
  initfilter_status_t tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  gboolean tmp___3 ;
  gboolean tmp___4 ;
  gint *interface_id ;
  gpointer tmp___5 ;
  GTimeVal write_thread_time ;
  pcap_queue_element *queue_element ;
  gpointer tmp___6 ;
  gboolean tmp___7 ;
  gboolean tmp___8 ;
  gboolean tmp___9 ;
  gboolean tmp___10 ;
  gboolean tmp___11 ;
  pcap_queue_element *queue_element___0 ;
  gpointer tmp___12 ;
  char *cap_err_str ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___16 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___23 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
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
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___37 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___44 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  int _g_boolean_var_ ;
  long tmp___48 ;
  char *tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;

  {
  cnd_file_duration = (condition *)((void *)0);
  cnd_autostop_files = (condition *)((void *)0);
  cnd_autostop_size = (condition *)((void *)0);
  cnd_autostop_duration = (condition *)((void *)0);
  cfilter_error = 0;
  interface_opts = capture_opts->default_options;
  errmsg[0] = (char )'\000';
  secondary_errmsg[0] = (char )'\000';
  global_ld.go = 1;
  global_ld.packet_count = 0;
  global_ld.pcaps = g_array_new(0, 0, sizeof(pcap_options ));
  if (capture_opts->has_autostop_packets) {
    global_ld.packet_max = capture_opts->autostop_packets;
  } else {
    global_ld.packet_max = 0;
  }
  global_ld.inpkts_to_sync_pipe = 0;
  global_ld.err = 0;
  global_ld.pdh = (FILE *)((void *)0);
  global_ld.autostop_files = (guint32 )0;
  global_ld.save_file_fd = -1;
  *stats_known = 0;
  g_log("CaptureChild", (GLogLevelFlags )64, "Capture loop starting ...");
  capture_opts_log("CaptureChild", (GLogLevelFlags )128, capture_opts);
  tmp = capture_loop_open_input(capture_opts, & global_ld, errmsg,
                                sizeof(errmsg), secondary_errmsg,
                                sizeof(secondary_errmsg));
  if (tmp) {

  } else {
    goto error;
  }
  i = (guint )0;
  while (i < (capture_opts->ifaces)->len) {
    pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
    interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + i);
    tmp___0 = capture_loop_init_filter(pcap_opts.pcap_h,
                                       pcap_opts.from_cap_pipe,
                                       interface_opts.name,
                                       interface_opts.cfilter);
    switch ((unsigned int )tmp___0) {
    case 0U: 
    break;
    case 1U: 
    cfilter_error = 1;
    tmp___1 = pcap_geterr(pcap_opts.pcap_h);
    g_snprintf(errmsg, (gulong )sizeof(errmsg), "%s", tmp___1);
    goto error;
    case 2U: 
    tmp___2 = pcap_geterr(pcap_opts.pcap_h);
    g_snprintf(errmsg, (gulong )sizeof(errmsg), "Can\'t install filter (%s).",
               tmp___2);
    g_snprintf(secondary_errmsg, (gulong )sizeof(secondary_errmsg), "%s",
               please_report);
    goto error;
    }
    i ++;
  }
  if (capture_opts->saving_to_file) {
    tmp___3 = capture_loop_open_output(capture_opts, & global_ld.save_file_fd,
                                       errmsg, (int )sizeof(errmsg));
    if (tmp___3) {

    } else {
      goto error;
    }
    tmp___4 = capture_loop_init_output(capture_opts, & global_ld, errmsg,
                                       (int )sizeof(errmsg));
    if (tmp___4) {

    } else {
      goto error;
    }
    libpcap_dump_flush(global_ld.pdh, (int *)((void *)0));
    report_new_capture_file((char const   *)capture_opts->save_file);
  } else {

  }
  init_capture_stop_conditions();
  if (capture_opts->has_autostop_filesize) {
    cnd_autostop_size = cnd_new(CND_CLASS_CAPTURESIZE,
                                (long )capture_opts->autostop_filesize * 1024L);
  } else {

  }
  if (capture_opts->has_autostop_duration) {
    cnd_autostop_duration = cnd_new(CND_CLASS_TIMEOUT,
                                    capture_opts->autostop_duration);
  } else {

  }
  if (capture_opts->multi_files_on) {
    if (capture_opts->has_file_duration) {
      cnd_file_duration = cnd_new(CND_CLASS_TIMEOUT, capture_opts->file_duration);
    } else {

    }
    if (capture_opts->has_autostop_files) {
      cnd_autostop_files = cnd_new(CND_CLASS_CAPTURESIZE,
                                   capture_opts->autostop_files);
    } else {

    }
  } else {

  }
  gettimeofday((struct timeval */* __restrict  */)(& upd_time),
               (__timezone_ptr_t )((void *)0));
  g_log("CaptureChild", (GLogLevelFlags )64, "Capture loop running!");
  if (use_threads) {
    pcap_queue = g_async_queue_new();
    pcap_queue_bytes = (gint64 )0;
    pcap_queue_packets = (gint64 )0;
    i = (guint )0;
    while (i < (global_ld.pcaps)->len) {
      tmp___5 = g_malloc(sizeof(guint ));
      interface_id = (gint *)tmp___5;
      *interface_id = (gint )i;
      pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
      pcap_opts.tid = g_thread_create_full(& pcap_read_handler,
                                           (gpointer )interface_id, (gulong )0,
                                           1, 0, (GThreadPriority )1,
                                           (GError **)((void *)0));
      global_ld.pcaps = g_array_remove_index(global_ld.pcaps, i);
      g_array_insert_vals(global_ld.pcaps, i, (gconstpointer )(& pcap_opts),
                          (guint )1);
      i ++;
    }
  } else {

  }
  while (global_ld.go) {
    if (use_threads) {
      g_get_current_time(& write_thread_time);
      g_time_val_add(& write_thread_time, (glong )100000);
      g_async_queue_lock(pcap_queue);
      tmp___6 = g_async_queue_timed_pop_unlocked(pcap_queue, & write_thread_time);
      queue_element = (pcap_queue_element *)tmp___6;
      if (queue_element) {
        pcap_queue_bytes -= (gint64 )queue_element->phdr.caplen;
        pcap_queue_packets --;
      } else {

      }
      g_async_queue_unlock(pcap_queue);
      if (queue_element) {
        g_log("CaptureChild", (GLogLevelFlags )64,
              "Dequeued a packet of length %d captured on interface %d.",
              queue_element->phdr.caplen, queue_element->interface_id);
        capture_loop_write_packet_cb((u_char *)(& queue_element->interface_id),
                                     (struct pcap_pkthdr  const  *)(& queue_element->phdr),
                                     (u_char const   *)queue_element->pd);
        g_free((gpointer )queue_element->pd);
        g_free((gpointer )queue_element);
        inpkts = 1;
      } else {
        inpkts = 0;
      }
    } else {
      inpkts = capture_loop_dispatch(& global_ld, errmsg, (int )sizeof(errmsg),
                                     & pcap_opts);
    }
    if (inpkts > 0) {
      global_ld.inpkts_to_sync_pipe += inpkts;
      if ((unsigned int )cnd_autostop_size != (unsigned int )((void *)0)) {
        tmp___8 = cnd_eval(cnd_autostop_size, (guint32 )global_ld.bytes_written);
        if (tmp___8) {
          tmp___7 = do_file_switch_or_stop(capture_opts, cnd_autostop_files,
                                           cnd_autostop_size, cnd_file_duration);
          if (tmp___7) {

          } else {
            continue;
          }
        } else {

        }
      } else {

      }
      if (capture_opts->output_to_pipe) {
        libpcap_dump_flush(global_ld.pdh, (int *)((void *)0));
      } else {

      }
    } else {

    }
    gettimeofday((struct timeval */* __restrict  */)(& cur_time),
                 (__timezone_ptr_t )((void *)0));
    if (cur_time.tv_sec * 1000000L + cur_time.tv_usec > (upd_time.tv_sec * 1000000L + upd_time.tv_usec) + 500000L) {
      upd_time = cur_time;
      if (global_ld.inpkts_to_sync_pipe) {
        libpcap_dump_flush(global_ld.pdh, (int *)((void *)0));
        if (! quiet) {
          report_packet_count(global_ld.inpkts_to_sync_pipe);
        } else {

        }
        global_ld.inpkts_to_sync_pipe = 0;
      } else {

      }
      if ((unsigned int )cnd_autostop_duration != (unsigned int )((void *)0)) {
        tmp___9 = cnd_eval(cnd_autostop_duration);
        if (tmp___9) {
          global_ld.go = 0;
          continue;
        } else {

        }
      } else {

      }
      if ((unsigned int )cnd_file_duration != (unsigned int )((void *)0)) {
        tmp___11 = cnd_eval(cnd_file_duration);
        if (tmp___11) {
          tmp___10 = do_file_switch_or_stop(capture_opts, cnd_autostop_files,
                                            cnd_autostop_size, cnd_file_duration);
          if (tmp___10) {

          } else {
            continue;
          }
        } else {

        }
      } else {

      }
    } else {

    }
  }
  g_log("CaptureChild", (GLogLevelFlags )64, "Capture loop stopping ...");
  if (use_threads) {
    i = (guint )0;
    while (i < (global_ld.pcaps)->len) {
      pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
      g_log("CaptureChild", (GLogLevelFlags )64,
            "Waiting for thread of interface %u...", pcap_opts.interface_id);
      g_thread_join(pcap_opts.tid);
      g_log("CaptureChild", (GLogLevelFlags )64,
            "Thread of interface %u terminated.", pcap_opts.interface_id);
      i ++;
    }
    while (1) {
      g_async_queue_lock(pcap_queue);
      tmp___12 = g_async_queue_try_pop_unlocked(pcap_queue);
      queue_element___0 = (pcap_queue_element *)tmp___12;
      if (queue_element___0) {
        pcap_queue_bytes -= (gint64 )queue_element___0->phdr.caplen;
        pcap_queue_packets --;
      } else {

      }
      g_async_queue_unlock(pcap_queue);
      if ((unsigned int )queue_element___0 == (unsigned int )((void *)0)) {
        break;
      } else {

      }
      g_log("CaptureChild", (GLogLevelFlags )64,
            "Dequeued a packet of length %d captured on interface %d.",
            queue_element___0->phdr.caplen, queue_element___0->interface_id);
      capture_loop_write_packet_cb((u_char *)(& queue_element___0->interface_id),
                                   (struct pcap_pkthdr  const  *)(& queue_element___0->phdr),
                                   (u_char const   *)queue_element___0->pd);
      g_free((gpointer )queue_element___0->pd);
      g_free((gpointer )queue_element___0);
      (global_ld.inpkts_to_sync_pipe) ++;
      if (capture_opts->output_to_pipe) {
        libpcap_dump_flush(global_ld.pdh, (int *)((void *)0));
      } else {

      }
    }
  } else {

  }
  if ((unsigned int )cnd_file_duration != (unsigned int )((void *)0)) {
    cnd_delete(cnd_file_duration);
  } else {

  }
  if ((unsigned int )cnd_autostop_files != (unsigned int )((void *)0)) {
    cnd_delete(cnd_autostop_files);
  } else {

  }
  if ((unsigned int )cnd_autostop_size != (unsigned int )((void *)0)) {
    cnd_delete(cnd_autostop_size);
  } else {

  }
  if ((unsigned int )cnd_autostop_duration != (unsigned int )((void *)0)) {
    cnd_delete(cnd_autostop_duration);
  } else {

  }
  i = (guint )0;
  while (i < (capture_opts->ifaces)->len) {
    pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
    if (pcap_opts.pcap_err) {
      cap_err_str = pcap_geterr(pcap_opts.pcap_h);
      if (0) {
        __s1_len = strlen((char const   *)cap_err_str);
        __s2_len = strlen("recvfrom: Network is down");
        if (! ((size_t )((void const   *)(cap_err_str + 1)) - (size_t )((void const   *)cap_err_str) == 1U)) {
          goto _L___0;
        } else
        if (__s1_len >= 4U) {
          _L___0: /* CIL Label */ 
          if (! ((size_t )((void const   *)("recvfrom: Network is down" + 1)) - (size_t )((void const   *)"recvfrom: Network is down") == 1U)) {
            tmp___19 = 1;
          } else
          if (__s2_len >= 4U) {
            tmp___19 = 1;
          } else {
            tmp___19 = 0;
          }
        } else {
          tmp___19 = 0;
        }
        if (tmp___19) {
          tmp___14 = __builtin_strcmp((char const   *)cap_err_str,
                                      "recvfrom: Network is down");
          tmp___18 = tmp___14;
        } else {
          tmp___17 = __builtin_strcmp((char const   *)cap_err_str,
                                      "recvfrom: Network is down");
          tmp___18 = tmp___17;
        }
      } else {
        tmp___17 = __builtin_strcmp((char const   *)cap_err_str,
                                    "recvfrom: Network is down");
        tmp___18 = tmp___17;
      }
      if (tmp___18 == 0) {
        report_capture_error("The network adapter on which the capture was being done is no longer running; the capture has stopped.",
                             "");
      } else {
        if (0) {
          __s1_len___0 = strlen((char const   *)cap_err_str);
          __s2_len___0 = strlen("The interface went down");
          if (! ((size_t )((void const   *)(cap_err_str + 1)) - (size_t )((void const   *)cap_err_str) == 1U)) {
            goto _L___2;
          } else
          if (__s1_len___0 >= 4U) {
            _L___2: /* CIL Label */ 
            if (! ((size_t )((void const   *)("The interface went down" + 1)) - (size_t )((void const   *)"The interface went down") == 1U)) {
              tmp___26 = 1;
            } else
            if (__s2_len___0 >= 4U) {
              tmp___26 = 1;
            } else {
              tmp___26 = 0;
            }
          } else {
            tmp___26 = 0;
          }
          if (tmp___26) {
            tmp___21 = __builtin_strcmp((char const   *)cap_err_str,
                                        "The interface went down");
            tmp___25 = tmp___21;
          } else {
            tmp___24 = __builtin_strcmp((char const   *)cap_err_str,
                                        "The interface went down");
            tmp___25 = tmp___24;
          }
        } else {
          tmp___24 = __builtin_strcmp((char const   *)cap_err_str,
                                      "The interface went down");
          tmp___25 = tmp___24;
        }
        if (tmp___25 == 0) {
          report_capture_error("The network adapter on which the capture was being done is no longer running; the capture has stopped.",
                               "");
        } else {
          if (0) {
            __s1_len___1 = strlen((char const   *)cap_err_str);
            __s2_len___1 = strlen("read: Device not configured");
            if (! ((size_t )((void const   *)(cap_err_str + 1)) - (size_t )((void const   *)cap_err_str) == 1U)) {
              goto _L___4;
            } else
            if (__s1_len___1 >= 4U) {
              _L___4: /* CIL Label */ 
              if (! ((size_t )((void const   *)("read: Device not configured" + 1)) - (size_t )((void const   *)"read: Device not configured") == 1U)) {
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
              tmp___28 = __builtin_strcmp((char const   *)cap_err_str,
                                          "read: Device not configured");
              tmp___32 = tmp___28;
            } else {
              tmp___31 = __builtin_strcmp((char const   *)cap_err_str,
                                          "read: Device not configured");
              tmp___32 = tmp___31;
            }
          } else {
            tmp___31 = __builtin_strcmp((char const   *)cap_err_str,
                                        "read: Device not configured");
            tmp___32 = tmp___31;
          }
          if (tmp___32 == 0) {
            report_capture_error("The network adapter on which the capture was being done is no longer running; the capture has stopped.",
                                 "");
          } else {
            if (0) {
              __s1_len___2 = strlen((char const   *)cap_err_str);
              __s2_len___2 = strlen("read: I/O error");
              if (! ((size_t )((void const   *)(cap_err_str + 1)) - (size_t )((void const   *)cap_err_str) == 1U)) {
                goto _L___6;
              } else
              if (__s1_len___2 >= 4U) {
                _L___6: /* CIL Label */ 
                if (! ((size_t )((void const   *)("read: I/O error" + 1)) - (size_t )((void const   *)"read: I/O error") == 1U)) {
                  tmp___40 = 1;
                } else
                if (__s2_len___2 >= 4U) {
                  tmp___40 = 1;
                } else {
                  tmp___40 = 0;
                }
              } else {
                tmp___40 = 0;
              }
              if (tmp___40) {
                tmp___35 = __builtin_strcmp((char const   *)cap_err_str,
                                            "read: I/O error");
                tmp___39 = tmp___35;
              } else {
                tmp___38 = __builtin_strcmp((char const   *)cap_err_str,
                                            "read: I/O error");
                tmp___39 = tmp___38;
              }
            } else {
              tmp___38 = __builtin_strcmp((char const   *)cap_err_str,
                                          "read: I/O error");
              tmp___39 = tmp___38;
            }
            if (tmp___39 == 0) {
              report_capture_error("The network adapter on which the capture was being done is no longer running; the capture has stopped.",
                                   "");
            } else {
              if (0) {
                __s1_len___3 = strlen((char const   *)cap_err_str);
                __s2_len___3 = strlen("read error: PacketReceivePacket failed");
                if (! ((size_t )((void const   *)(cap_err_str + 1)) - (size_t )((void const   *)cap_err_str) == 1U)) {
                  goto _L___8;
                } else
                if (__s1_len___3 >= 4U) {
                  _L___8: /* CIL Label */ 
                  if (! ((size_t )((void const   *)("read error: PacketReceivePacket failed" + 1)) - (size_t )((void const   *)"read error: PacketReceivePacket failed") == 1U)) {
                    tmp___47 = 1;
                  } else
                  if (__s2_len___3 >= 4U) {
                    tmp___47 = 1;
                  } else {
                    tmp___47 = 0;
                  }
                } else {
                  tmp___47 = 0;
                }
                if (tmp___47) {
                  tmp___42 = __builtin_strcmp((char const   *)cap_err_str,
                                              "read error: PacketReceivePacket failed");
                  tmp___46 = tmp___42;
                } else {
                  tmp___45 = __builtin_strcmp((char const   *)cap_err_str,
                                              "read error: PacketReceivePacket failed");
                  tmp___46 = tmp___45;
                }
              } else {
                tmp___45 = __builtin_strcmp((char const   *)cap_err_str,
                                            "read error: PacketReceivePacket failed");
                tmp___46 = tmp___45;
              }
              if (tmp___46 == 0) {
                report_capture_error("The network adapter on which the capture was being done is no longer running; the capture has stopped.",
                                     "");
              } else {
                g_snprintf(errmsg, (gulong )sizeof(errmsg),
                           "Error while capturing packets: %s", cap_err_str);
                report_capture_error((char const   *)(errmsg), please_report);
              }
            }
          }
        }
      }
      break;
    } else
    if (pcap_opts.from_cap_pipe) {
      if ((unsigned int )pcap_opts.cap_pipe_err == 2U) {
        report_capture_error((char const   *)(errmsg), "");
        break;
      } else {

      }
    } else {

    }
    i ++;
  }
  if (global_ld.err == 0) {
    write_ok = 1;
  } else {
    capture_loop_get_errmsg(errmsg, (int )sizeof(errmsg),
                            (char const   *)capture_opts->save_file,
                            global_ld.err, 0);
    report_capture_error((char const   *)(errmsg), please_report);
    write_ok = 0;
  }
  if (capture_opts->saving_to_file) {
    close_ok = capture_loop_close_output(capture_opts, & global_ld, & err_close);
  } else {
    close_ok = 1;
  }
  if (global_ld.inpkts_to_sync_pipe) {
    if (! quiet) {
      report_packet_count(global_ld.inpkts_to_sync_pipe);
    } else {

    }
    global_ld.inpkts_to_sync_pipe = 0;
  } else {

  }
  if (! close_ok) {
    if (write_ok) {
      capture_loop_get_errmsg(errmsg, (int )sizeof(errmsg),
                              (char const   *)capture_opts->save_file,
                              err_close, 1);
      report_capture_error((char const   *)(errmsg), "");
    } else {

    }
  } else {

  }
  report_capture_count();
  i = (guint )0;
  while (i < (capture_opts->ifaces)->len) {
    pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
    interface_opts = *((interface_options *)((void *)(capture_opts->ifaces)->data) + i);
    if ((unsigned int )pcap_opts.pcap_h != (unsigned int )((void *)0)) {
      while (1) {
        if (! pcap_opts.from_cap_pipe) {
          _g_boolean_var_ = 1;
        } else {
          _g_boolean_var_ = 0;
        }
        tmp___48 = __builtin_expect((long )_g_boolean_var_, 1L);
        if (tmp___48) {

        } else {
          g_assertion_message_expr((char const   *)((gchar *)0), "dumpcap.c",
                                   3412, "capture_loop_start",
                                   "!pcap_opts.from_cap_pipe");
        }
        break;
      }
      tmp___50 = pcap_stats(pcap_opts.pcap_h, stats);
      if (tmp___50 >= 0) {
        *stats_known = 1;
        report_packet_drops(stats->ps_recv, stats->ps_drop, interface_opts.name);
      } else {
        tmp___49 = pcap_geterr(pcap_opts.pcap_h);
        g_snprintf(errmsg, (gulong )sizeof(errmsg),
                   "Can\'t get packet-drop statistics: %s", tmp___49);
        report_capture_error((char const   *)(errmsg), please_report);
      }
    } else {

    }
    i ++;
  }
  capture_loop_close_input(& global_ld);
  g_log("CaptureChild", (GLogLevelFlags )64, "Capture loop stopped!");
  if (write_ok) {
    if (close_ok) {
      tmp___51 = 1;
    } else {
      tmp___51 = 0;
    }
  } else {
    tmp___51 = 0;
  }
  return (tmp___51);
  error: 
  if (capture_opts->multi_files_on) {
    ringbuf_error_cleanup();
  } else {
    if (global_ld.save_file_fd != -1) {
      close(global_ld.save_file_fd);
    } else {

    }
    if ((unsigned int )capture_opts->save_file != (unsigned int )((void *)0)) {
      unlink((char const   *)capture_opts->save_file);
      g_free((gpointer )capture_opts->save_file);
    } else {

    }
  }
  capture_opts->save_file = (gchar *)((void *)0);
  if (cfilter_error) {
    report_cfilter_error((char const   *)interface_opts.cfilter,
                         (char const   *)(errmsg));
  } else {
    report_capture_error((char const   *)(errmsg),
                         (char const   *)(secondary_errmsg));
  }
  capture_loop_close_input(& global_ld);
  g_log("CaptureChild", (GLogLevelFlags )64, "Capture loop stopped with error");
  return (0);
}
}
static void capture_loop_stop(void) 
{ 
  guint i ;
  pcap_options pcap_opts ;

  {
  i = (guint )0;
  while (i < (global_ld.pcaps)->len) {
    pcap_opts = *((pcap_options *)((void *)(global_ld.pcaps)->data) + i);
    if ((unsigned int )pcap_opts.pcap_h != (unsigned int )((void *)0)) {
      pcap_breakloop(pcap_opts.pcap_h);
    } else {

    }
    i ++;
  }
  global_ld.go = 0;
  return;
}
}
static void capture_loop_get_errmsg(char *errmsg , int errmsglen ,
                                    char const   *fname , int err ,
                                    gboolean is_close ) 
{ 
  char *tmp ;
  char *tmp___0 ;

  {
  switch (err) {
  case 28: 
  g_snprintf(errmsg, (gulong )errmsglen,
             "Not all the packets could be written to the file to which the capture was being saved\n(\"%s\") because there is no space left on the file system\non which that file resides.",
             fname);
  break;
  case 122: 
  g_snprintf(errmsg, (gulong )errmsglen,
             "Not all the packets could be written to the file to which the capture was being saved\n(\"%s\") because you are too close to, or over, your disk quota\non the file system on which that file resides.",
             fname);
  break;
  default: 
  if (is_close) {
    tmp = strerror(err);
    g_snprintf(errmsg, (gulong )errmsglen,
               "The file to which the capture was being saved\n(\"%s\") could not be closed: %s.",
               fname, tmp);
  } else {
    tmp___0 = strerror(err);
    g_snprintf(errmsg, (gulong )errmsglen,
               "An error occurred while writing to the file to which the capture was being saved\n(\"%s\"): %s.",
               fname, tmp___0);
  }
  break;
  }
  return;
}
}
static void capture_loop_write_packet_cb(u_char *user ,
                                         struct pcap_pkthdr  const  *phdr ,
                                         u_char const   *pd ) 
{ 
  guint interface_id ;
  int err ;
  gboolean successful ;

  {
  interface_id = *((guint *)((void *)user));
  if (! global_ld.go) {
    return;
  } else {

  }
  if (global_ld.pdh) {
    if (global_capture_opts.use_pcapng) {
      successful = libpcap_write_enhanced_packet_block(global_ld.pdh, phdr,
                                                       interface_id, pd,
                                                       & global_ld.bytes_written,
                                                       & err);
    } else {
      successful = libpcap_write_packet(global_ld.pdh, phdr, pd,
                                        & global_ld.bytes_written, & err);
    }
    if (! successful) {
      global_ld.go = 0;
      global_ld.err = err;
    } else {
      g_log("CaptureChild", (GLogLevelFlags )64,
            "Wrote a packet of length %d captured on interface %u.",
            phdr->caplen, interface_id);
      (global_ld.packet_count) ++;
      if (global_ld.packet_max > 0) {
        if (global_ld.packet_count >= global_ld.packet_max) {
          global_ld.go = 0;
        } else {

        }
      } else {

      }
    }
  } else {

  }
  return;
}
}
static void capture_loop_queue_packet_cb(u_char *user ,
                                         struct pcap_pkthdr  const  *phdr ,
                                         u_char const   *pd ) 
{ 
  pcap_queue_element *queue_element ;
  guint interface_id ;
  gboolean limit_reached ;
  gpointer tmp ;
  gpointer tmp___0 ;

  {
  if (! global_ld.go) {
    return;
  } else {

  }
  interface_id = *((guint *)((void *)user));
  tmp = g_malloc(sizeof(pcap_queue_element ));
  queue_element = (pcap_queue_element *)tmp;
  if ((unsigned int )queue_element == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  queue_element->interface_id = interface_id;
  queue_element->phdr = (struct pcap_pkthdr )*phdr;
  tmp___0 = g_malloc((gsize )phdr->caplen);
  queue_element->pd = (u_char *)tmp___0;
  if ((unsigned int )queue_element->pd == (unsigned int )((void *)0)) {
    g_free((gpointer )queue_element);
    return;
  } else {

  }
  memcpy((void */* __restrict  */)queue_element->pd,
         (void const   */* __restrict  */)pd, (size_t )phdr->caplen);
  g_async_queue_lock(pcap_queue);
  if (pcap_queue_byte_limit > 0LL) {
    if (pcap_queue_bytes < pcap_queue_byte_limit) {
      if (pcap_queue_packet_limit > 0LL) {
        if (pcap_queue_packets < pcap_queue_packet_limit) {
          limit_reached = 0;
          g_async_queue_push_unlocked(pcap_queue, (gpointer )queue_element);
          pcap_queue_bytes += (gint64 )phdr->caplen;
          pcap_queue_packets ++;
        } else {
          limit_reached = 1;
        }
      } else {
        limit_reached = 1;
      }
    } else {
      limit_reached = 1;
    }
  } else {
    limit_reached = 1;
  }
  g_async_queue_unlock(pcap_queue);
  if (limit_reached) {
    g_free((gpointer )queue_element->pd);
    g_free((gpointer )queue_element);
    g_log("CaptureChild", (GLogLevelFlags )64,
          "Dropped a packet of length %d captured on interface %u.",
          phdr->caplen, interface_id);
  } else {
    g_log("CaptureChild", (GLogLevelFlags )64,
          "Queued a packet of length %d captured on interface %u.",
          phdr->caplen, interface_id);
  }
  g_log("CaptureChild", (GLogLevelFlags )64,
        "Queue size is now %lld bytes (%lld packets)", pcap_queue_bytes,
        pcap_queue_packets);
  return;
}
}
int main(int argc , char **argv ) 
{ 
  int opt ;
  gboolean arg_error ;
  struct sigaction action ;
  struct sigaction oldaction ;
  gboolean start_capture ;
  gboolean stats_known ;
  struct pcap_stat stats ;
  GLogLevelFlags log_flags ;
  gboolean list_interfaces ;
  gboolean list_link_layer_types ;
  gboolean print_bpf_code ;
  gboolean machine_readable ;
  gboolean print_statistics ;
  int status ;
  int run_once_args ;
  gint i ;
  guint j ;
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
  GString *comp_info_str ;
  GString *runtime_info_str ;
  GList *if_list ;
  int err ;
  gchar *err_str ;
  gboolean tmp___6 ;
  interface_options interface_opts ;
  if_capabilities_t *caps ;
  gchar *err_str___0 ;
  guint i___0 ;
  interface_options interface_opts___0 ;
  gboolean tmp___7 ;

  {
  arg_error = 0;
  start_capture = 1;
  list_interfaces = 0;
  list_link_layer_types = 0;
  print_bpf_code = 0;
  machine_readable = 0;
  print_statistics = 0;
  run_once_args = 0;
  i = 1;
  while (i < argc) {
    if (0) {
      __s1_len = strlen("-Z");
      __s2_len = strlen((char const   *)*(argv + i));
      if (! ((size_t )((void const   *)("-Z" + 1)) - (size_t )((void const   *)"-Z") == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(*(argv + i) + 1)) - (size_t )((void const   *)*(argv + i)) == 1U)) {
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
        tmp___0 = __builtin_strcmp("-Z", (char const   *)*(argv + i));
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp("-Z", (char const   *)*(argv + i));
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp("-Z", (char const   *)*(argv + i));
      tmp___4 = tmp___3;
    }
    if (tmp___4 == 0) {
      capture_child = 1;
      machine_readable = 1;
    } else {

    }
    i ++;
  }
  log_flags = (GLogLevelFlags )255;
  g_log_set_handler((gchar const   *)((void *)0), log_flags,
                    & console_log_handler, (void *)0);
  g_log_set_handler("Main", log_flags, & console_log_handler, (void *)0);
  g_log_set_handler("Capture", log_flags, & console_log_handler, (void *)0);
  g_log_set_handler("CaptureChild", log_flags, & console_log_handler, (void *)0);
  if (! g_threads_got_initialized) {
    g_thread_init((GThreadFunctions *)((void *)0));
  } else {

  }
  action.__sigaction_handler.sa_handler = & capture_cleanup_handler;
  action.sa_flags = 0;
  sigemptyset(& action.sa_mask);
  sigaction(15, (struct sigaction  const  */* __restrict  */)(& action),
            (struct sigaction */* __restrict  */)((void *)0));
  sigaction(2, (struct sigaction  const  */* __restrict  */)(& action),
            (struct sigaction */* __restrict  */)((void *)0));
  sigaction(13, (struct sigaction  const  */* __restrict  */)(& action),
            (struct sigaction */* __restrict  */)((void *)0));
  sigaction(1, (struct sigaction  const  */* __restrict  */)((void *)0),
            (struct sigaction */* __restrict  */)(& oldaction));
  if ((unsigned int )oldaction.__sigaction_handler.sa_handler == (unsigned int )((void (*)(int  ))0)) {
    sigaction(1, (struct sigaction  const  */* __restrict  */)(& action),
              (struct sigaction */* __restrict  */)((void *)0));
  } else {

  }
  init_process_policies();
  capture_opts_init(& global_capture_opts, (void *)0);
  global_capture_opts.snaplen = 65535;
  global_capture_opts.saving_to_file = 1;
  global_capture_opts.has_ring_num_files = 1;
  while (1) {
    opt = getopt(argc, (char * const  *)argv,
                 "a:b:B:c:dDf:ghi:ILMnpqSs:tvw:y:Z:");
    if (opt != -1) {

    } else {
      break;
    }
    switch (opt) {
    case 104: 
    print_usage(1);
    exit_main(0);
    break;
    case 118: 
    comp_info_str = g_string_new("Compiled ");
    get_compiled_version_info(comp_info_str, (void (*)(GString * ))((void *)0),
                              (void (*)(GString * ))((void *)0));
    runtime_info_str = g_string_new("Running ");
    get_runtime_version_info(runtime_info_str, (void (*)(GString * ))((void *)0));
    show_version(comp_info_str, runtime_info_str);
    g_string_free(comp_info_str, 1);
    g_string_free(runtime_info_str, 1);
    exit_main(0);
    break;
    case 73: 
    case 66: 
    case 121: 
    case 103: 
    case 119: 
    case 115: 
    case 112: 
    case 110: 
    case 105: 
    case 102: 
    case 99: 
    case 98: 
    case 97: 
    status = capture_opts_add_opt(& global_capture_opts, opt,
                                  (char const   *)optarg, & start_capture);
    if (status != 0) {
      exit_main(status);
    } else {

    }
    break;
    case 90: 
    capture_child = 1;
    break;
    case 113: 
    quiet = 1;
    break;
    case 116: 
    use_threads = 1;
    break;
    case 68: 
    list_interfaces = 1;
    run_once_args ++;
    break;
    case 76: 
    list_link_layer_types = 1;
    run_once_args ++;
    break;
    case 100: 
    print_bpf_code = 1;
    run_once_args ++;
    break;
    case 83: 
    print_statistics = 1;
    run_once_args ++;
    break;
    case 77: 
    machine_readable = 1;
    break;
    case 63: 
    default: 
    cmdarg_err("Invalid Option: %s", *(argv + (optind - 1)));
    arg_error = 1;
    break;
    }
  }
  argc -= optind;
  argv += optind;
  if (argc >= 1) {
    argc --;
    argv ++;
  } else {

  }
  if (argc != 0) {
    cmdarg_err("Invalid argument: %s", *(argv + 0));
    arg_error = 1;
  } else {

  }
  if (arg_error) {
    print_usage(0);
    exit_main(1);
  } else {

  }
  if (run_once_args > 1) {
    cmdarg_err("Only one of -D, -L, or -S may be supplied.");
    exit_main(1);
  } else
  if (run_once_args == 1) {
    if (global_capture_opts.multi_files_on) {
      cmdarg_err("Ring buffer requested, but a capture isn\'t being done.");
      exit_main(1);
    } else {

    }
  } else
  if (global_capture_opts.multi_files_on) {
    if ((unsigned int )global_capture_opts.save_file == (unsigned int )((void *)0)) {
      cmdarg_err("Ring buffer requested, but capture isn\'t being saved to a permanent file.");
      global_capture_opts.multi_files_on = 0;
    } else {

    }
    if (! global_capture_opts.has_autostop_filesize) {
      if (! global_capture_opts.has_file_duration) {
        cmdarg_err("Ring buffer requested, but no maximum capture file size or duration were specified.");
      } else {

      }
    } else {

    }
  } else {

  }
  if (list_interfaces) {
    if_list = capture_interface_list(& err, & err_str);
    if ((unsigned int )if_list == (unsigned int )((void *)0)) {
      switch (err) {
      case 1: 
      cmdarg_err("%s", err_str);
      g_free((gpointer )err_str);
      exit_main(2);
      break;
      case 2: 
      if (! machine_readable) {
        cmdarg_err("There are no interfaces on which a capture can be done");
        exit_main(2);
      } else {

      }
      break;
      }
    } else {

    }
    if (machine_readable) {
      print_machine_readable_interfaces(if_list);
    } else {
      capture_opts_print_interfaces(if_list);
    }
    free_interface_list(if_list);
    exit_main(0);
  } else {

  }
  if (print_statistics) {
    status = print_statistics_loop(machine_readable);
    exit_main(status);
  } else {

  }
  tmp___6 = capture_opts_trim_iface(& global_capture_opts,
                                    (char const   *)((void *)0));
  if (tmp___6 == 0) {
    exit_main(1);
  } else {

  }
  j = (guint )0;
  while (j < (global_capture_opts.ifaces)->len) {
    interface_opts = *((interface_options *)((void *)(global_capture_opts.ifaces)->data) + j);
    g_log("CaptureChild", (GLogLevelFlags )128, "Interface: %s",
          interface_opts.name);
    j ++;
  }
  if (list_link_layer_types) {
    i___0 = (guint )0;
    while (i___0 < (global_capture_opts.ifaces)->len) {
      interface_opts___0 = *((interface_options *)((void *)(global_capture_opts.ifaces)->data) + i___0);
      caps = get_if_capabilities((char const   *)interface_opts___0.name,
                                 interface_opts___0.monitor_mode, & err_str___0);
      if ((unsigned int )caps == (unsigned int )((void *)0)) {
        cmdarg_err("The capabilities of the capture device \"%s\" could not be obtained (%s).\nPlease check to make sure you have sufficient permissions, and that\nyou have the proper interface or pipe specified.",
                   interface_opts___0.name, err_str___0);
        g_free((gpointer )err_str___0);
        exit_main(2);
      } else {

      }
      if ((unsigned int )caps->data_link_types == (unsigned int )((void *)0)) {
        cmdarg_err("The capture device \"%s\" has no data link types.",
                   interface_opts___0.name);
        exit_main(2);
      } else {

      }
      if (machine_readable) {
        print_machine_readable_if_capabilities(caps);
      } else {
        capture_opts_print_if_capabilities(caps, interface_opts___0.name,
                                           interface_opts___0.monitor_mode);
      }
      free_if_capabilities(caps);
      i___0 ++;
    }
    exit_main(0);
  } else {

  }
  capture_opts_trim_snaplen(& global_capture_opts, 1);
  if (print_bpf_code) {
    show_filter_code(& global_capture_opts);
    exit_main(0);
  } else {

  }
  capture_opts_trim_ring_num_files(& global_capture_opts);
  tmp___7 = capture_loop_start(& global_capture_opts, & stats_known, & stats);
  if (tmp___7 == 1) {
    exit_main(0);
  } else {
    exit_main(1);
  }
  return (0);
}
}
static void console_log_handler(char const   *log_domain ,
                                GLogLevelFlags log_level ,
                                char const   *message ,
                                gpointer user_data  __attribute__((__unused__)) ) 
{ 
  time_t curr ;
  struct tm *today ;
  char const   *level ;
  gchar *msg ;
  char const   *tmp ;

  {
  time(& curr);
  today = localtime((time_t const   *)(& curr));
  switch ((int )log_level & -4) {
  case 4: 
  level = "Err ";
  break;
  case 8: 
  level = "Crit";
  break;
  case 16: 
  level = "Warn";
  break;
  case 32: 
  level = "Msg ";
  break;
  case 64: 
  level = "Info";
  break;
  case 128: 
  level = "Dbg ";
  break;
  default: 
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"unknown log_level %u\n",
          (int )log_level);
  level = (char const   *)((void *)0);
  while (1) {
    g_assertion_message((char const   *)((gchar *)0), "dumpcap.c", 4291,
                        "console_log_handler", (char const   *)((void *)0));
    break;
  }
  }
  if ((int )log_level & 32) {
    msg = g_strdup_printf("%s\n", message);
  } else {
    if ((unsigned int )log_domain != (unsigned int )((void *)0)) {
      tmp = log_domain;
    } else {
      tmp = "";
    }
    msg = g_strdup_printf("%02u:%02u:%02u %8s %s %s\n", today->tm_hour,
                          today->tm_min, today->tm_sec, tmp, level, message);
  }
  if (! (((int )log_level & -4) & -193)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s", msg);
    fflush(stderr);
    g_free((gpointer )msg);
    return;
  } else {

  }
  if (capture_child) {
    sync_pipe_errmsg_to_parent(2, (char const   *)msg, "");
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s", msg);
    fflush(stderr);
  }
  g_free((gpointer )msg);
  return;
}
}
static void report_packet_count(int packet_count ) ;
static int count  =    0;
static void report_packet_count(int packet_count ) 
{ 
  char tmp[22] ;

  {
  if (capture_child) {
    g_snprintf(tmp, (gulong )sizeof(tmp), "%d", packet_count);
    g_log("CaptureChild", (GLogLevelFlags )128, "Packets: %s", tmp);
    pipe_write_block(2, (char )'P', (char const   *)(tmp));
  } else {
    count += packet_count;
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\rPackets: %u ", count);
    fflush(stderr);
  }
  return;
}
}
static void report_new_capture_file(char const   *filename ) 
{ 


  {
  if (capture_child) {
    g_log("CaptureChild", (GLogLevelFlags )128, "File: %s", filename);
    pipe_write_block(2, (char )'F', filename);
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"File: %s\n", filename);
    fflush(stderr);
  }
  return;
}
}
static void report_cfilter_error(char const   *cfilter , char const   *errmsg ) 
{ 


  {
  if (capture_child) {
    g_log("CaptureChild", (GLogLevelFlags )128, "Capture filter error: %s",
          errmsg);
    pipe_write_block(2, (char )'B', errmsg);
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Invalid capture filter: \"%s\"!\n\nThat string isn\'t a valid capture filter (%s).\nSee the User\'s Guide for a description of the capture filter syntax.\n",
            cfilter, errmsg);
  }
  return;
}
}
static void report_capture_error(char const   *error_msg ,
                                 char const   *secondary_error_msg ) 
{ 


  {
  if (capture_child) {
    g_log("CaptureChild", (GLogLevelFlags )128, "Primary Error: %s", error_msg);
    g_log("CaptureChild", (GLogLevelFlags )128, "Secondary Error: %s",
          secondary_error_msg);
    sync_pipe_errmsg_to_parent(2, error_msg, secondary_error_msg);
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s\n", error_msg);
    if ((int const   )*(secondary_error_msg + 0) != 0) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s\n", secondary_error_msg);
    } else {

    }
  }
  return;
}
}
static void report_packet_drops(guint32 received , guint32 drops , gchar *name ) 
{ 
  char tmp1[22] ;
  char tmp2[22] ;

  {
  g_snprintf(tmp1, (gulong )sizeof(tmp1), "%u", received);
  g_snprintf(tmp2, (gulong )sizeof(tmp2), "%u", drops);
  if (capture_child) {
    g_log("CaptureChild", (GLogLevelFlags )128,
          "Packets captured/dropped on interface %s: %s/%s", name, tmp1, tmp2);
    pipe_write_block(2, (char )'D', (char const   *)(tmp2));
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Packets captured/dropped on interface %s: %s/%s\n",
            name, tmp1, tmp2);
    fflush(stderr);
  }
  return;
}
}
