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
typedef int ptrdiff_t;
typedef long wchar_t;
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
union __anonunion_static_mutex_6 {
   char pad[24] ;
   double dummy_double ;
   void *dummy_pointer ;
   long dummy_long ;
};
struct _GStaticMutex {
   struct _GMutex *runtime_mutex ;
   union __anonunion_static_mutex_6 static_mutex ;
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
struct __anonstruct_mpn_7 {
   guint mantissa : 23 ;
   guint biased_exponent : 8 ;
   guint sign : 1 ;
};
union _GFloatIEEE754 {
   gfloat v_float ;
   struct __anonstruct_mpn_7 mpn ;
};
struct __anonstruct_mpn_8 {
   guint mantissa_low : 32 ;
   guint mantissa_high : 20 ;
   guint biased_exponent : 11 ;
   guint sign : 1 ;
};
union _GDoubleIEEE754 {
   gdouble v_double ;
   struct __anonstruct_mpn_8 mpn ;
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
enum __anonenum_GUserDirectory_9 {
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
typedef enum __anonenum_GUserDirectory_9 GUserDirectory;
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
enum __anonenum_GThreadError_10 {
    G_THREAD_ERROR_AGAIN = 0
} ;
typedef enum __anonenum_GThreadError_10 GThreadError;
typedef gpointer (*GThreadFunc)(gpointer data );
enum __anonenum_GThreadPriority_11 {
    G_THREAD_PRIORITY_LOW = 0,
    G_THREAD_PRIORITY_NORMAL = 1,
    G_THREAD_PRIORITY_HIGH = 2,
    G_THREAD_PRIORITY_URGENT = 3
} ;
typedef enum __anonenum_GThreadPriority_11 GThreadPriority;
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
enum __anonenum_GOnceStatus_12 {
    G_ONCE_STATUS_NOTCALLED = 0,
    G_ONCE_STATUS_PROGRESS = 1,
    G_ONCE_STATUS_READY = 2
} ;
typedef enum __anonenum_GOnceStatus_12 GOnceStatus;
struct _GOnce;
typedef struct _GOnce GOnce;
struct _GOnce {
   GOnceStatus volatile   status ;
   gpointer volatile   retval ;
};
struct _GAsyncQueue;
typedef struct _GAsyncQueue GAsyncQueue;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_13 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_13 __sigset_t;
typedef __sig_atomic_t sig_atomic_t;
typedef __sigset_t sigset_t;
typedef __pid_t pid_t;
typedef __uid_t uid_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_15 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_16 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_17 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_18 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_19 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_20 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_14 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_15 _kill ;
   struct __anonstruct__timer_16 _timer ;
   struct __anonstruct__rt_17 _rt ;
   struct __anonstruct__sigchld_18 _sigchld ;
   struct __anonstruct__sigfault_19 _sigfault ;
   struct __anonstruct__sigpoll_20 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_14 _sifields ;
};
typedef struct siginfo siginfo_t;
enum __anonenum_21 {
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
enum __anonenum_22 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_23 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_24 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_25 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_26 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_27 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_28 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_30 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_29 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_30 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_29 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_31 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
typedef void (*__sighandler_t)(int  );
typedef void (*sig_t)(int  );
union __anonunion___sigaction_handler_32 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_32 __sigaction_handler ;
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
struct __anonstruct___kernel_fd_set_33 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___kernel_fd_set_33 __kernel_fd_set;
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
struct __anonstruct___kernel_fsid_t_34 {
   int val[2] ;
};
typedef struct __anonstruct___kernel_fsid_t_34 __kernel_fsid_t;
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
union __anonunion____missing_field_name_35 {
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
   union __anonunion____missing_field_name_35 __annonCompField1 ;
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
enum __anonenum_36 {
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
struct __anonstruct_mcontext_t_37 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_37 mcontext_t;
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
typedef struct ucontext ucontext_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_38 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_38 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_40 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_40 __annonCompField2 ;
};
union __anonunion_pthread_mutex_t_39 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_39 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_41 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_41 pthread_mutexattr_t;
struct __anonstruct___data_43 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_42 {
   struct __anonstruct___data_43 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_42 pthread_cond_t;
union __anonunion_pthread_condattr_t_44 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_44 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_46 {
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
union __anonunion_pthread_rwlock_t_45 {
   struct __anonstruct___data_46 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_45 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_47 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_47 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_48 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_48 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_49 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_49 pthread_barrierattr_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
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
enum __anonenum_GBookmarkFileError_50 {
    G_BOOKMARK_FILE_ERROR_INVALID_URI = 0,
    G_BOOKMARK_FILE_ERROR_INVALID_VALUE = 1,
    G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED = 2,
    G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND = 3,
    G_BOOKMARK_FILE_ERROR_READ = 4,
    G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING = 5,
    G_BOOKMARK_FILE_ERROR_WRITE = 6,
    G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND = 7
} ;
typedef enum __anonenum_GBookmarkFileError_50 GBookmarkFileError;
struct _GBookmarkFile;
typedef struct _GBookmarkFile GBookmarkFile;
enum __anonenum_GSliceConfig_51 {
    G_SLICE_CONFIG_ALWAYS_MALLOC = 1,
    G_SLICE_CONFIG_BYPASS_MAGAZINES = 2,
    G_SLICE_CONFIG_WORKING_SET_MSECS = 3,
    G_SLICE_CONFIG_COLOR_INCREMENT = 4,
    G_SLICE_CONFIG_CHUNK_SIZES = 5,
    G_SLICE_CONFIG_CONTENTION_COUNTER = 6
} ;
typedef enum __anonenum_GSliceConfig_51 GSliceConfig;
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
enum __anonenum_GChecksumType_52 {
    G_CHECKSUM_MD5 = 0,
    G_CHECKSUM_SHA1 = 1,
    G_CHECKSUM_SHA256 = 2
} ;
typedef enum __anonenum_GChecksumType_52 GChecksumType;
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
enum __anonenum_GConvertError_53 {
    G_CONVERT_ERROR_NO_CONVERSION = 0,
    G_CONVERT_ERROR_ILLEGAL_SEQUENCE = 1,
    G_CONVERT_ERROR_FAILED = 2,
    G_CONVERT_ERROR_PARTIAL_INPUT = 3,
    G_CONVERT_ERROR_BAD_URI = 4,
    G_CONVERT_ERROR_NOT_ABSOLUTE_PATH = 5
} ;
typedef enum __anonenum_GConvertError_53 GConvertError;
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
enum __anonenum_GDateDMY_54 {
    G_DATE_DAY = 0,
    G_DATE_MONTH = 1,
    G_DATE_YEAR = 2
} ;
typedef enum __anonenum_GDateDMY_54 GDateDMY;
enum __anonenum_GDateWeekday_55 {
    G_DATE_BAD_WEEKDAY = 0,
    G_DATE_MONDAY = 1,
    G_DATE_TUESDAY = 2,
    G_DATE_WEDNESDAY = 3,
    G_DATE_THURSDAY = 4,
    G_DATE_FRIDAY = 5,
    G_DATE_SATURDAY = 6,
    G_DATE_SUNDAY = 7
} ;
typedef enum __anonenum_GDateWeekday_55 GDateWeekday;
enum __anonenum_GDateMonth_56 {
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
typedef enum __anonenum_GDateMonth_56 GDateMonth;
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
enum __anonenum_GFileError_57 {
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
typedef enum __anonenum_GFileError_57 GFileError;
enum __anonenum_GFileTest_58 {
    G_FILE_TEST_IS_REGULAR = 1,
    G_FILE_TEST_IS_SYMLINK = 2,
    G_FILE_TEST_IS_DIR = 4,
    G_FILE_TEST_IS_EXECUTABLE = 8,
    G_FILE_TEST_EXISTS = 16
} ;
typedef enum __anonenum_GFileTest_58 GFileTest;
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
enum __anonenum_GHookFlagMask_59 {
    G_HOOK_FLAG_ACTIVE = 1,
    G_HOOK_FLAG_IN_CALL = 2,
    G_HOOK_FLAG_MASK = 15
} ;
typedef enum __anonenum_GHookFlagMask_59 GHookFlagMask;
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
enum __anonenum_GUnicodeType_60 {
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
typedef enum __anonenum_GUnicodeType_60 GUnicodeType;
enum __anonenum_GUnicodeBreakType_61 {
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
typedef enum __anonenum_GUnicodeBreakType_61 GUnicodeBreakType;
enum __anonenum_GUnicodeScript_62 {
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
typedef enum __anonenum_GUnicodeScript_62 GUnicodeScript;
enum __anonenum_GNormalizeMode_63 {
    G_NORMALIZE_DEFAULT = 0,
    G_NORMALIZE_NFD = 0,
    G_NORMALIZE_DEFAULT_COMPOSE = 1,
    G_NORMALIZE_NFC = 1,
    G_NORMALIZE_ALL = 2,
    G_NORMALIZE_NFKD = 2,
    G_NORMALIZE_ALL_COMPOSE = 3,
    G_NORMALIZE_NFKC = 3
} ;
typedef enum __anonenum_GNormalizeMode_63 GNormalizeMode;
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
enum __anonenum_GIOError_64 {
    G_IO_ERROR_NONE = 0,
    G_IO_ERROR_AGAIN = 1,
    G_IO_ERROR_INVAL = 2,
    G_IO_ERROR_UNKNOWN = 3
} ;
typedef enum __anonenum_GIOError_64 GIOError;
enum __anonenum_GIOChannelError_65 {
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
typedef enum __anonenum_GIOChannelError_65 GIOChannelError;
enum __anonenum_GIOStatus_66 {
    G_IO_STATUS_ERROR = 0,
    G_IO_STATUS_NORMAL = 1,
    G_IO_STATUS_EOF = 2,
    G_IO_STATUS_AGAIN = 3
} ;
typedef enum __anonenum_GIOStatus_66 GIOStatus;
enum __anonenum_GSeekType_67 {
    G_SEEK_CUR = 0,
    G_SEEK_SET = 1,
    G_SEEK_END = 2
} ;
typedef enum __anonenum_GSeekType_67 GSeekType;
enum __anonenum_GIOCondition_68 {
    G_IO_IN = 1,
    G_IO_OUT = 4,
    G_IO_PRI = 2,
    G_IO_ERR = 8,
    G_IO_HUP = 16,
    G_IO_NVAL = 32
} ;
typedef enum __anonenum_GIOCondition_68 GIOCondition;
enum __anonenum_GIOFlags_69 {
    G_IO_FLAG_APPEND = 1,
    G_IO_FLAG_NONBLOCK = 2,
    G_IO_FLAG_IS_READABLE = 4,
    G_IO_FLAG_IS_WRITEABLE = 8,
    G_IO_FLAG_IS_SEEKABLE = 16,
    G_IO_FLAG_MASK = 31,
    G_IO_FLAG_GET_MASK = 31,
    G_IO_FLAG_SET_MASK = 3
} ;
typedef enum __anonenum_GIOFlags_69 GIOFlags;
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
enum __anonenum_GKeyFileError_70 {
    G_KEY_FILE_ERROR_UNKNOWN_ENCODING = 0,
    G_KEY_FILE_ERROR_PARSE = 1,
    G_KEY_FILE_ERROR_NOT_FOUND = 2,
    G_KEY_FILE_ERROR_KEY_NOT_FOUND = 3,
    G_KEY_FILE_ERROR_GROUP_NOT_FOUND = 4,
    G_KEY_FILE_ERROR_INVALID_VALUE = 5
} ;
typedef enum __anonenum_GKeyFileError_70 GKeyFileError;
struct _GKeyFile;
typedef struct _GKeyFile GKeyFile;
enum __anonenum_GKeyFileFlags_71 {
    G_KEY_FILE_NONE = 0,
    G_KEY_FILE_KEEP_COMMENTS = 1,
    G_KEY_FILE_KEEP_TRANSLATIONS = 2
} ;
typedef enum __anonenum_GKeyFileFlags_71 GKeyFileFlags;
struct _GMappedFile;
typedef struct _GMappedFile GMappedFile;
enum __anonenum_GMarkupError_72 {
    G_MARKUP_ERROR_BAD_UTF8 = 0,
    G_MARKUP_ERROR_EMPTY = 1,
    G_MARKUP_ERROR_PARSE = 2,
    G_MARKUP_ERROR_UNKNOWN_ELEMENT = 3,
    G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE = 4,
    G_MARKUP_ERROR_INVALID_CONTENT = 5,
    G_MARKUP_ERROR_MISSING_ATTRIBUTE = 6
} ;
typedef enum __anonenum_GMarkupError_72 GMarkupError;
enum __anonenum_GMarkupParseFlags_73 {
    G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1,
    G_MARKUP_TREAT_CDATA_AS_TEXT = 2,
    G_MARKUP_PREFIX_ERROR_POSITION = 4
} ;
typedef enum __anonenum_GMarkupParseFlags_73 GMarkupParseFlags;
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
enum __anonenum_GMarkupCollectType_74 {
    G_MARKUP_COLLECT_INVALID = 0,
    G_MARKUP_COLLECT_STRING = 1,
    G_MARKUP_COLLECT_STRDUP = 2,
    G_MARKUP_COLLECT_BOOLEAN = 3,
    G_MARKUP_COLLECT_TRISTATE = 4,
    G_MARKUP_COLLECT_OPTIONAL = 65536
} ;
typedef enum __anonenum_GMarkupCollectType_74 GMarkupCollectType;
enum __anonenum_GLogLevelFlags_75 {
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
typedef enum __anonenum_GLogLevelFlags_75 GLogLevelFlags;
typedef void (*GLogFunc)(gchar const   *log_domain , GLogLevelFlags log_level ,
                         gchar const   *message , gpointer user_data );
typedef void (*GPrintFunc)(gchar const   *string );
struct _GNode;
typedef struct _GNode GNode;
enum __anonenum_GTraverseFlags_76 {
    G_TRAVERSE_LEAVES = 1,
    G_TRAVERSE_NON_LEAVES = 2,
    G_TRAVERSE_ALL = 3,
    G_TRAVERSE_MASK = 3,
    G_TRAVERSE_LEAFS = 1,
    G_TRAVERSE_NON_LEAFS = 2
} ;
typedef enum __anonenum_GTraverseFlags_76 GTraverseFlags;
enum __anonenum_GTraverseType_77 {
    G_IN_ORDER = 0,
    G_PRE_ORDER = 1,
    G_POST_ORDER = 2,
    G_LEVEL_ORDER = 3
} ;
typedef enum __anonenum_GTraverseType_77 GTraverseType;
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
enum __anonenum_GOptionFlags_78 {
    G_OPTION_FLAG_HIDDEN = 1,
    G_OPTION_FLAG_IN_MAIN = 2,
    G_OPTION_FLAG_REVERSE = 4,
    G_OPTION_FLAG_NO_ARG = 8,
    G_OPTION_FLAG_FILENAME = 16,
    G_OPTION_FLAG_OPTIONAL_ARG = 32,
    G_OPTION_FLAG_NOALIAS = 64
} ;
typedef enum __anonenum_GOptionFlags_78 GOptionFlags;
enum __anonenum_GOptionArg_79 {
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
typedef enum __anonenum_GOptionArg_79 GOptionArg;
typedef gboolean (*GOptionArgFunc)(gchar const   *option_name ,
                                   gchar const   *value , gpointer data ,
                                   GError **error );
typedef gboolean (*GOptionParseFunc)(GOptionContext *context ,
                                     GOptionGroup *group , gpointer data ,
                                     GError **error );
typedef void (*GOptionErrorFunc)(GOptionContext *context , GOptionGroup *group ,
                                 gpointer data , GError **error );
enum __anonenum_GOptionError_80 {
    G_OPTION_ERROR_UNKNOWN_OPTION = 0,
    G_OPTION_ERROR_BAD_VALUE = 1,
    G_OPTION_ERROR_FAILED = 2
} ;
typedef enum __anonenum_GOptionError_80 GOptionError;
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
enum __anonenum_GRegexError_81 {
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
typedef enum __anonenum_GRegexError_81 GRegexError;
enum __anonenum_GRegexCompileFlags_82 {
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
typedef enum __anonenum_GRegexCompileFlags_82 GRegexCompileFlags;
enum __anonenum_GRegexMatchFlags_83 {
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
typedef enum __anonenum_GRegexMatchFlags_83 GRegexMatchFlags;
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
enum __anonenum_GErrorType_84 {
    G_ERR_UNKNOWN = 0,
    G_ERR_UNEXP_EOF = 1,
    G_ERR_UNEXP_EOF_IN_STRING = 2,
    G_ERR_UNEXP_EOF_IN_COMMENT = 3,
    G_ERR_NON_DIGIT_IN_CONST = 4,
    G_ERR_DIGIT_RADIX = 5,
    G_ERR_FLOAT_RADIX = 6,
    G_ERR_FLOAT_MALFORMED = 7
} ;
typedef enum __anonenum_GErrorType_84 GErrorType;
enum __anonenum_GTokenType_85 {
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
typedef enum __anonenum_GTokenType_85 GTokenType;
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
enum __anonenum_GShellError_86 {
    G_SHELL_ERROR_BAD_QUOTING = 0,
    G_SHELL_ERROR_EMPTY_STRING = 1,
    G_SHELL_ERROR_FAILED = 2
} ;
typedef enum __anonenum_GShellError_86 GShellError;
enum __anonenum_GSpawnError_87 {
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
typedef enum __anonenum_GSpawnError_87 GSpawnError;
typedef void (*GSpawnChildSetupFunc)(gpointer user_data );
enum __anonenum_GSpawnFlags_88 {
    G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1,
    G_SPAWN_DO_NOT_REAP_CHILD = 2,
    G_SPAWN_SEARCH_PATH = 4,
    G_SPAWN_STDOUT_TO_DEV_NULL = 8,
    G_SPAWN_STDERR_TO_DEV_NULL = 16,
    G_SPAWN_CHILD_INHERITS_STDIN = 32,
    G_SPAWN_FILE_AND_ARGV_ZERO = 64
} ;
typedef enum __anonenum_GSpawnFlags_88 GSpawnFlags;
enum __anonenum_GAsciiType_89 {
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
typedef enum __anonenum_GAsciiType_89 GAsciiType;
struct GTestCase;
typedef struct GTestCase GTestCase;
struct GTestSuite;
typedef struct GTestSuite GTestSuite;
enum __anonenum_GTestTrapFlags_90 {
    G_TEST_TRAP_SILENCE_STDOUT = 128,
    G_TEST_TRAP_SILENCE_STDERR = 256,
    G_TEST_TRAP_INHERIT_STDIN = 512
} ;
typedef enum __anonenum_GTestTrapFlags_90 GTestTrapFlags;
struct __anonstruct_GTestConfig_91 {
   gboolean test_initialized ;
   gboolean test_quick ;
   gboolean test_perf ;
   gboolean test_verbose ;
   gboolean test_quiet ;
};
typedef struct __anonstruct_GTestConfig_91 GTestConfig;
enum __anonenum_GTestLogType_92 {
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
typedef enum __anonenum_GTestLogType_92 GTestLogType;
struct __anonstruct_GTestLogMsg_93 {
   GTestLogType log_type ;
   guint n_strings ;
   gchar **strings ;
   guint n_nums ;
   long double *nums ;
};
typedef struct __anonstruct_GTestLogMsg_93 GTestLogMsg;
struct __anonstruct_GTestLogBuffer_94 {
   GString *data ;
   GSList *msgs ;
};
typedef struct __anonstruct_GTestLogBuffer_94 GTestLogBuffer;
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
enum __anonenum_GVariantClass_95 {
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
typedef enum __anonenum_GVariantClass_95 GVariantClass;
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
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef __suseconds_t suseconds_t;
typedef long __fd_mask;
struct __anonstruct_fd_set_96 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_96 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
enum __anonenum_handler_t_97 {
    HANDLER_UNSET = 0,
    HANDLER_GO_ON = 1,
    HANDLER_FINISHED = 2,
    HANDLER_COMEBACK = 3,
    HANDLER_WAIT_FOR_EVENT = 4,
    HANDLER_ERROR = 5,
    HANDLER_WAIT_FOR_FD = 6
} ;
typedef enum __anonenum_handler_t_97 handler_t;
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
typedef long __gwchar_t;
struct __anonstruct_imaxdiv_t_98 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_imaxdiv_t_98 imaxdiv_t;
struct __anonstruct___wait_terminated_99 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_100 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_99 __wait_terminated ;
   struct __anonstruct___wait_stopped_100 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_101 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_101  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_102 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_102 div_t;
struct __anonstruct_ldiv_t_103 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_103 ldiv_t;
struct __anonstruct_lldiv_t_104 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_104 lldiv_t;
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
struct __anonstruct_buffer_105 {
   char *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_105 buffer;
typedef void (*buffer_ptr_free_t)(void *p );
struct __anonstruct_buffer_ptr_106 {
   void **ptr ;
   size_t size ;
   size_t used ;
   void (*free)(void *p ) ;
};
typedef struct __anonstruct_buffer_ptr_106 buffer_ptr;
struct __anonstruct_buffer_array_107 {
   buffer **ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_array_107 buffer_array;
struct __anonstruct_read_buffer_108 {
   char *ptr ;
   size_t offset ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_read_buffer_108 read_buffer;
enum __anonenum_buffer_encoding_t_109 {
    ENCODING_UNSET = 0,
    ENCODING_REL_URI = 1,
    ENCODING_REL_URI_PART = 2,
    ENCODING_HTML = 3,
    ENCODING_MINIMAL_XML = 4,
    ENCODING_HEX = 5
} ;
typedef enum __anonenum_buffer_encoding_t_109 buffer_encoding_t;
struct __anonstruct_buffer_pool_110 {
   buffer **ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_pool_110 buffer_pool;
struct real_pcre;
struct real_pcre;
typedef struct real_pcre pcre;
struct pcre_extra {
   unsigned long flags ;
   void *study_data ;
   unsigned long match_limit ;
   void *callout_data ;
   unsigned char const   *tables ;
   unsigned long match_limit_recursion ;
};
typedef struct pcre_extra pcre_extra;
struct pcre_callout_block {
   int version ;
   int callout_number ;
   int *offset_vector ;
   char const   *subject ;
   int subject_length ;
   int start_match ;
   int current_position ;
   int capture_top ;
   int capture_last ;
   void *callout_data ;
   int pattern_position ;
   int next_item_length ;
};
typedef struct pcre_callout_block pcre_callout_block;
enum __anonenum_data_type_t_111 {
    TYPE_UNSET = 0,
    TYPE_STRING = 1,
    TYPE_COUNT = 2,
    TYPE_ARRAY = 3,
    TYPE_INTEGER = 4,
    TYPE_FASTCGI = 5,
    TYPE_CONFIG = 6
} ;
typedef enum __anonenum_data_type_t_111 data_type_t;
struct data_unset {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
};
typedef struct data_unset data_unset;
struct __anonstruct_array_112 {
   data_unset **data ;
   size_t *sorted ;
   size_t used ;
   size_t size ;
   size_t unique_ndx ;
   size_t next_power_of_2 ;
   int is_weakref ;
};
typedef struct __anonstruct_array_112 array;
struct __anonstruct_data_count_113 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   int count ;
};
typedef struct __anonstruct_data_count_113 data_count;
struct __anonstruct_data_string_114 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   buffer *value ;
};
typedef struct __anonstruct_data_string_114 data_string;
struct __anonstruct_data_array_115 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   array *value ;
};
typedef struct __anonstruct_data_array_115 data_array;
enum __anonenum_config_cond_t_116 {
    CONFIG_COND_UNSET = 0,
    CONFIG_COND_EQ = 1,
    CONFIG_COND_MATCH = 2,
    CONFIG_COND_NE = 3,
    CONFIG_COND_NOMATCH = 4
} ;
typedef enum __anonenum_config_cond_t_116 config_cond_t;
enum __anonenum_comp_key_t_117 {
    COMP_UNSET = 0,
    COMP_SERVER_SOCKET = 1,
    COMP_HTTP_URL = 2,
    COMP_HTTP_HOST = 3,
    COMP_HTTP_REFERER = 4,
    COMP_HTTP_USER_AGENT = 5,
    COMP_HTTP_COOKIE = 6,
    COMP_HTTP_REMOTE_IP = 7,
    COMP_HTTP_QUERY_STRING = 8,
    COMP_HTTP_REQUEST_METHOD = 9,
    COMP_PHYSICAL_PATH = 10,
    COMP_LAST_ELEMENT = 11
} ;
typedef enum __anonenum_comp_key_t_117 comp_key_t;
struct _data_config;
typedef struct _data_config data_config;
struct _data_config {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   array *value ;
   buffer *comp_key ;
   comp_key_t comp ;
   config_cond_t cond ;
   buffer *op ;
   int context_ndx ;
   array *childs ;
   data_config *parent ;
   data_config *prev ;
   data_config *next ;
   buffer *string ;
   pcre *regex ;
   pcre_extra *regex_study ;
};
struct __anonstruct_data_integer_118 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   int value ;
};
typedef struct __anonstruct_data_integer_118 data_integer;
enum __anonenum_type_119 {
    UNUSED_CHUNK = 0,
    MEM_CHUNK = 1,
    FILE_CHUNK = 2
} ;
struct __anonstruct_mmap_121 {
   char *start ;
   size_t length ;
   off_t offset ;
};
struct __anonstruct_copy_122 {
   int fd ;
   off_t length ;
   off_t offset ;
};
struct __anonstruct_file_120 {
   buffer *name ;
   off_t start ;
   off_t length ;
   int fd ;
   struct __anonstruct_mmap_121 mmap ;
   int is_temp ;
   struct __anonstruct_copy_122 copy ;
};
struct __anonstruct_async_123 {
   off_t written ;
   int ret_val ;
};
struct chunk {
   enum __anonenum_type_119 type ;
   buffer *mem ;
   struct __anonstruct_file_120 file ;
   off_t offset ;
   struct __anonstruct_async_123 async ;
   struct chunk *next ;
};
typedef struct chunk chunk;
struct __anonstruct_chunkqueue_124 {
   chunk *first ;
   chunk *last ;
   chunk *unused ;
   size_t unused_chunks ;
   array *tempdirs ;
   int is_closed ;
   off_t bytes_in ;
   off_t bytes_out ;
};
typedef struct __anonstruct_chunkqueue_124 chunkqueue;
struct filter {
   struct filter *prev ;
   struct filter *next ;
   int id ;
   chunkqueue *cq ;
};
typedef struct filter filter;
struct __anonstruct_filter_chain_125 {
   filter *first ;
   filter *last ;
};
typedef struct __anonstruct_filter_chain_125 filter_chain;
enum __anonenum_http_method_t_126 {
    HTTP_METHOD_UNSET = -1,
    HTTP_METHOD_GET = 0,
    HTTP_METHOD_POST = 1,
    HTTP_METHOD_HEAD = 2,
    HTTP_METHOD_OPTIONS = 3,
    HTTP_METHOD_PROPFIND = 4,
    HTTP_METHOD_MKCOL = 5,
    HTTP_METHOD_PUT = 6,
    HTTP_METHOD_DELETE = 7,
    HTTP_METHOD_COPY = 8,
    HTTP_METHOD_MOVE = 9,
    HTTP_METHOD_PROPPATCH = 10,
    HTTP_METHOD_REPORT = 11,
    HTTP_METHOD_CHECKOUT = 12,
    HTTP_METHOD_CHECKIN = 13,
    HTTP_METHOD_VERSION_CONTROL = 14,
    HTTP_METHOD_UNCHECKOUT = 15,
    HTTP_METHOD_MKACTIVITY = 16,
    HTTP_METHOD_MERGE = 17,
    HTTP_METHOD_LOCK = 18,
    HTTP_METHOD_UNLOCK = 19,
    HTTP_METHOD_LABEL = 20,
    HTTP_METHOD_CONNECT = 21
} ;
typedef enum __anonenum_http_method_t_126 http_method_t;
enum __anonenum_http_version_t_127 {
    HTTP_VERSION_UNSET = -1,
    HTTP_VERSION_1_0 = 0,
    HTTP_VERSION_1_1 = 1
} ;
typedef enum __anonenum_http_version_t_127 http_version_t;
struct __anonstruct_keyvalue_128 {
   int key ;
   char *value ;
};
typedef struct __anonstruct_keyvalue_128 keyvalue;
struct __anonstruct_s_keyvalue_129 {
   char *key ;
   char *value ;
};
typedef struct __anonstruct_s_keyvalue_129 s_keyvalue;
struct __anonstruct_pcre_keyvalue_130 {
   pcre *key ;
   pcre_extra *key_extra ;
   buffer *value ;
};
typedef struct __anonstruct_pcre_keyvalue_130 pcre_keyvalue;
enum __anonenum_httpauth_type_131 {
    HTTP_AUTH_BASIC = 0,
    HTTP_AUTH_DIGEST = 1
} ;
typedef enum __anonenum_httpauth_type_131 httpauth_type;
struct __anonstruct_httpauth_keyvalue_132 {
   char *key ;
   char *realm ;
   httpauth_type type ;
};
typedef struct __anonstruct_httpauth_keyvalue_132 httpauth_keyvalue;
struct __anonstruct_keyvalue_buffer_133 {
   keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_keyvalue_buffer_133 keyvalue_buffer;
struct __anonstruct_s_keyvalue_buffer_134 {
   s_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_s_keyvalue_buffer_134 s_keyvalue_buffer;
struct __anonstruct_httpauth_keyvalue_buffer_135 {
   httpauth_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_httpauth_keyvalue_buffer_135 httpauth_keyvalue_buffer;
struct __anonstruct_pcre_keyvalue_buffer_136 {
   pcre_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_pcre_keyvalue_buffer_136 pcre_keyvalue_buffer;
struct __anonstruct_bitset_137 {
   size_t *bits ;
   size_t nbits ;
};
typedef struct __anonstruct_bitset_137 bitset;
struct stack_st {
   int num ;
   char **data ;
   int sorted ;
   int num_alloc ;
   int (*comp)(void const   * , void const   * ) ;
};
typedef struct stack_st _STACK;
typedef char *OPENSSL_STRING;
typedef char const   *OPENSSL_CSTRING;
struct stack_st_OPENSSL_STRING {
   _STACK stack ;
};
typedef void *OPENSSL_BLOCK;
struct stack_st_OPENSSL_BLOCK {
   _STACK stack ;
};
struct asn1_string_st;
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef int ASN1_BOOLEAN;
typedef int ASN1_NULL;
struct asn1_pctx_st;
typedef struct asn1_pctx_st ASN1_PCTX;
struct bignum_st;
typedef struct bignum_st BIGNUM;
struct bignum_ctx;
typedef struct bignum_ctx BN_CTX;
struct bn_blinding_st;
typedef struct bn_blinding_st BN_BLINDING;
struct bn_mont_ctx_st;
typedef struct bn_mont_ctx_st BN_MONT_CTX;
struct bn_recp_ctx_st;
typedef struct bn_recp_ctx_st BN_RECP_CTX;
struct bn_gencb_st;
typedef struct bn_gencb_st BN_GENCB;
struct buf_mem_st;
typedef struct buf_mem_st BUF_MEM;
struct evp_cipher_st;
typedef struct evp_cipher_st EVP_CIPHER;
struct evp_cipher_ctx_st;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
struct env_md_st;
typedef struct env_md_st EVP_MD;
struct env_md_ctx_st;
typedef struct env_md_ctx_st EVP_MD_CTX;
struct evp_pkey_st;
typedef struct evp_pkey_st EVP_PKEY;
struct evp_pkey_asn1_method_st;
typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;
struct evp_pkey_method_st;
typedef struct evp_pkey_method_st EVP_PKEY_METHOD;
struct evp_pkey_ctx_st;
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;
struct dh_st;
typedef struct dh_st DH;
struct dh_method;
typedef struct dh_method DH_METHOD;
struct dsa_st;
typedef struct dsa_st DSA;
struct dsa_method;
typedef struct dsa_method DSA_METHOD;
struct rsa_st;
typedef struct rsa_st RSA;
struct rsa_meth_st;
typedef struct rsa_meth_st RSA_METHOD;
struct rand_meth_st;
typedef struct rand_meth_st RAND_METHOD;
struct ecdh_method;
typedef struct ecdh_method ECDH_METHOD;
struct ecdsa_method;
typedef struct ecdsa_method ECDSA_METHOD;
struct x509_st;
typedef struct x509_st X509;
struct X509_algor_st;
typedef struct X509_algor_st X509_ALGOR;
struct X509_crl_st;
typedef struct X509_crl_st X509_CRL;
struct x509_crl_method_st;
typedef struct x509_crl_method_st X509_CRL_METHOD;
struct x509_revoked_st;
typedef struct x509_revoked_st X509_REVOKED;
struct X509_name_st;
typedef struct X509_name_st X509_NAME;
struct X509_pubkey_st;
typedef struct X509_pubkey_st X509_PUBKEY;
struct x509_store_st;
typedef struct x509_store_st X509_STORE;
struct x509_store_ctx_st;
typedef struct x509_store_ctx_st X509_STORE_CTX;
struct pkcs8_priv_key_info_st;
typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;
struct v3_ext_ctx;
typedef struct v3_ext_ctx X509V3_CTX;
struct conf_st;
typedef struct conf_st CONF;
struct store_st;
typedef struct store_st STORE;
struct store_method_st;
typedef struct store_method_st STORE_METHOD;
struct ui_st;
typedef struct ui_st UI;
struct ui_method_st;
typedef struct ui_method_st UI_METHOD;
struct st_ERR_FNS;
typedef struct st_ERR_FNS ERR_FNS;
struct engine_st;
typedef struct engine_st ENGINE;
struct ssl_st;
typedef struct ssl_st SSL;
struct ssl_ctx_st;
typedef struct ssl_ctx_st SSL_CTX;
struct X509_POLICY_NODE_st;
typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;
struct X509_POLICY_LEVEL_st;
typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;
struct X509_POLICY_TREE_st;
typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;
struct X509_POLICY_CACHE_st;
typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;
struct AUTHORITY_KEYID_st;
typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;
struct DIST_POINT_st;
typedef struct DIST_POINT_st DIST_POINT;
struct ISSUING_DIST_POINT_st;
typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;
struct NAME_CONSTRAINTS_st;
typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;
struct crypto_ex_data_st;
typedef struct crypto_ex_data_st CRYPTO_EX_DATA;
typedef int CRYPTO_EX_new(void *parent , void *ptr , CRYPTO_EX_DATA *ad ,
                          int idx , long argl , void *argp );
typedef void CRYPTO_EX_free(void *parent , void *ptr , CRYPTO_EX_DATA *ad ,
                            int idx , long argl , void *argp );
typedef int CRYPTO_EX_dup(CRYPTO_EX_DATA *to , CRYPTO_EX_DATA *from ,
                          void *from_d , int idx , long argl , void *argp );
struct ocsp_req_ctx_st;
typedef struct ocsp_req_ctx_st OCSP_REQ_CTX;
struct ocsp_response_st;
typedef struct ocsp_response_st OCSP_RESPONSE;
struct ocsp_responder_id_st;
typedef struct ocsp_responder_id_st OCSP_RESPID;
struct openssl_item_st {
   int code ;
   void *value ;
   size_t value_size ;
   size_t *value_length ;
};
typedef struct openssl_item_st OPENSSL_ITEM;
struct CRYPTO_dynlock_value;
struct __anonstruct_CRYPTO_dynlock_138 {
   int references ;
   struct CRYPTO_dynlock_value *data ;
};
typedef struct __anonstruct_CRYPTO_dynlock_138 CRYPTO_dynlock;
struct bio_st;
typedef struct bio_st BIO_dummy;
struct stack_st_void;
struct crypto_ex_data_st {
   struct stack_st_void *sk ;
   int dummy ;
};
struct stack_st_void {
   _STACK stack ;
};
struct crypto_ex_data_func_st {
   long argl ;
   void *argp ;
   CRYPTO_EX_new *new_func ;
   CRYPTO_EX_free *free_func ;
   CRYPTO_EX_dup *dup_func ;
};
typedef struct crypto_ex_data_func_st CRYPTO_EX_DATA_FUNCS;
struct stack_st_CRYPTO_EX_DATA_FUNCS {
   _STACK stack ;
};
struct st_CRYPTO_EX_DATA_IMPL;
typedef struct st_CRYPTO_EX_DATA_IMPL CRYPTO_EX_DATA_IMPL;
struct crypto_threadid_st {
   void *ptr ;
   unsigned long val ;
};
typedef struct crypto_threadid_st CRYPTO_THREADID;
typedef void *CRYPTO_MEM_LEAK_CB(unsigned long  , char const   * , int  , int  ,
                                 void * );
struct comp_ctx_st;
typedef struct comp_ctx_st COMP_CTX;
struct comp_method_st {
   int type ;
   char const   *name ;
   int (*init)(COMP_CTX *ctx ) ;
   void (*finish)(COMP_CTX *ctx ) ;
   int (*compress)(COMP_CTX *ctx , unsigned char *out , unsigned int olen ,
                   unsigned char *in , unsigned int ilen ) ;
   int (*expand)(COMP_CTX *ctx , unsigned char *out , unsigned int olen ,
                 unsigned char *in , unsigned int ilen ) ;
   long (*ctrl)(void) ;
   long (*callback_ctrl)(void) ;
};
typedef struct comp_method_st COMP_METHOD;
struct comp_ctx_st {
   COMP_METHOD *meth ;
   unsigned long compress_in ;
   unsigned long compress_out ;
   unsigned long expand_in ;
   unsigned long expand_out ;
   CRYPTO_EX_DATA ex_data ;
};
typedef struct bio_st BIO;
typedef void bio_info_cb(struct bio_st * , int  , char const   * , int  ,
                         long  , long  );
struct bio_method_st {
   int type ;
   char const   *name ;
   int (*bwrite)(BIO * , char const   * , int  ) ;
   int (*bread)(BIO * , char * , int  ) ;
   int (*bputs)(BIO * , char const   * ) ;
   int (*bgets)(BIO * , char * , int  ) ;
   long (*ctrl)(BIO * , int  , long  , void * ) ;
   int (*create)(BIO * ) ;
   int (*destroy)(BIO * ) ;
   long (*callback_ctrl)(BIO * , int  , bio_info_cb * ) ;
};
typedef struct bio_method_st BIO_METHOD;
struct bio_st {
   BIO_METHOD *method ;
   long (*callback)(struct bio_st * , int  , char const   * , int  , long  ,
                    long  ) ;
   char *cb_arg ;
   int init ;
   int shutdown ;
   int flags ;
   int retry_reason ;
   int num ;
   void *ptr ;
   struct bio_st *next_bio ;
   struct bio_st *prev_bio ;
   int references ;
   unsigned long num_read ;
   unsigned long num_write ;
   CRYPTO_EX_DATA ex_data ;
};
struct stack_st_BIO {
   _STACK stack ;
};
struct bio_f_buffer_ctx_struct {
   int ibuf_size ;
   int obuf_size ;
   char *ibuf ;
   int ibuf_len ;
   int ibuf_off ;
   char *obuf ;
   int obuf_len ;
   int obuf_off ;
};
typedef struct bio_f_buffer_ctx_struct BIO_F_BUFFER_CTX;
typedef int asn1_ps_func(BIO *b , unsigned char **pbuf , int *plen , void *parg );
struct hostent;
struct buf_mem_st {
   size_t length ;
   char *data ;
   size_t max ;
};
struct dsa_st;
struct evp_pkey_st;
struct env_md_st;
struct evp_cipher_st;
struct evp_cipher_ctx_st;
struct bignum_st {
   unsigned int *d ;
   int top ;
   int dmax ;
   int neg ;
   int flags ;
};
struct bn_mont_ctx_st {
   int ri ;
   BIGNUM RR ;
   BIGNUM N ;
   BIGNUM Ni ;
   unsigned int n0[2] ;
   int flags ;
};
struct bn_recp_ctx_st {
   BIGNUM N ;
   BIGNUM Nr ;
   int num_bits ;
   int shift ;
   int flags ;
};
union __anonunion_cb_139 {
   void (*cb_1)(int  , int  , void * ) ;
   int (*cb_2)(int  , int  , BN_GENCB * ) ;
};
struct bn_gencb_st {
   unsigned int ver ;
   void *arg ;
   union __anonunion_cb_139 cb ;
};
struct X509_algor_st;
struct stack_st_X509_ALGOR {
   _STACK stack ;
};
struct asn1_ctx_st {
   unsigned char *p ;
   int eos ;
   int error ;
   int inf ;
   int tag ;
   int xclass ;
   long slen ;
   unsigned char *max ;
   unsigned char *q ;
   unsigned char **pp ;
   int line ;
};
typedef struct asn1_ctx_st ASN1_CTX;
struct asn1_const_ctx_st {
   unsigned char const   *p ;
   int eos ;
   int error ;
   int inf ;
   int tag ;
   int xclass ;
   long slen ;
   unsigned char const   *max ;
   unsigned char const   *q ;
   unsigned char const   **pp ;
   int line ;
};
typedef struct asn1_const_ctx_st ASN1_const_CTX;
struct asn1_object_st {
   char const   *sn ;
   char const   *ln ;
   int nid ;
   int length ;
   unsigned char const   *data ;
   int flags ;
};
typedef struct asn1_object_st ASN1_OBJECT;
struct asn1_string_st {
   int length ;
   int type ;
   unsigned char *data ;
   long flags ;
};
typedef struct asn1_string_st ASN1_STRING;
struct ASN1_ENCODING_st {
   unsigned char *enc ;
   long len ;
   int modified ;
};
typedef struct ASN1_ENCODING_st ASN1_ENCODING;
struct asn1_string_table_st {
   int nid ;
   long minsize ;
   long maxsize ;
   unsigned long mask ;
   unsigned long flags ;
};
typedef struct asn1_string_table_st ASN1_STRING_TABLE;
struct stack_st_ASN1_STRING_TABLE {
   _STACK stack ;
};
struct ASN1_TEMPLATE_st;
typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;
struct ASN1_ITEM_st;
typedef struct ASN1_ITEM_st ASN1_ITEM;
struct ASN1_TLC_st;
typedef struct ASN1_TLC_st ASN1_TLC;
struct ASN1_VALUE_st;
typedef struct ASN1_VALUE_st ASN1_VALUE;
typedef void *d2i_of_void(void ** , unsigned char const   ** , long  );
typedef int i2d_of_void(void * , unsigned char ** );
typedef ASN1_ITEM const   ASN1_ITEM_EXP;
struct stack_st_ASN1_INTEGER {
   _STACK stack ;
};
struct stack_st_ASN1_GENERALSTRING {
   _STACK stack ;
};
union __anonunion_value_140 {
   char *ptr ;
   ASN1_BOOLEAN boolean ;
   ASN1_STRING *asn1_string ;
   ASN1_OBJECT *object ;
   ASN1_INTEGER *integer ;
   ASN1_ENUMERATED *enumerated ;
   ASN1_BIT_STRING *bit_string ;
   ASN1_OCTET_STRING *octet_string ;
   ASN1_PRINTABLESTRING *printablestring ;
   ASN1_T61STRING *t61string ;
   ASN1_IA5STRING *ia5string ;
   ASN1_GENERALSTRING *generalstring ;
   ASN1_BMPSTRING *bmpstring ;
   ASN1_UNIVERSALSTRING *universalstring ;
   ASN1_UTCTIME *utctime ;
   ASN1_GENERALIZEDTIME *generalizedtime ;
   ASN1_VISIBLESTRING *visiblestring ;
   ASN1_UTF8STRING *utf8string ;
   ASN1_STRING *set ;
   ASN1_STRING *sequence ;
   ASN1_VALUE *asn1_value ;
};
struct asn1_type_st {
   int type ;
   union __anonunion_value_140 value ;
};
typedef struct asn1_type_st ASN1_TYPE;
struct stack_st_ASN1_TYPE {
   _STACK stack ;
};
typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;
struct NETSCAPE_X509_st {
   ASN1_OCTET_STRING *header ;
   X509 *cert ;
};
typedef struct NETSCAPE_X509_st NETSCAPE_X509;
struct BIT_STRING_BITNAME_st {
   int bitnum ;
   char const   *lname ;
   char const   *sname ;
};
typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME;
struct stack_st_ASN1_OBJECT {
   _STACK stack ;
};
struct obj_name_st {
   int type ;
   int alias ;
   char const   *name ;
   char const   *data ;
};
typedef struct obj_name_st OBJ_NAME;
union __anonunion_pkey_141 {
   char *ptr ;
   struct rsa_st *rsa ;
   struct dsa_st *dsa ;
   struct dh_st *dh ;
};
struct stack_st_X509_ATTRIBUTE;
struct evp_pkey_st {
   int type ;
   int save_type ;
   int references ;
   EVP_PKEY_ASN1_METHOD const   *ameth ;
   ENGINE *engine ;
   union __anonunion_pkey_141 pkey ;
   int save_parameters ;
   struct stack_st_X509_ATTRIBUTE *attributes ;
};
struct env_md_st {
   int type ;
   int pkey_type ;
   int md_size ;
   unsigned long flags ;
   int (*init)(EVP_MD_CTX *ctx ) ;
   int (*update)(EVP_MD_CTX *ctx , void const   *data , size_t count ) ;
   int (*final)(EVP_MD_CTX *ctx , unsigned char *md ) ;
   int (*copy)(EVP_MD_CTX *to , EVP_MD_CTX const   *from ) ;
   int (*cleanup)(EVP_MD_CTX *ctx ) ;
   int (*sign)(int type , unsigned char const   *m , unsigned int m_length ,
               unsigned char *sigret , unsigned int *siglen , void *key ) ;
   int (*verify)(int type , unsigned char const   *m , unsigned int m_length ,
                 unsigned char const   *sigbuf , unsigned int siglen ,
                 void *key ) ;
   int required_pkey_type[5] ;
   int block_size ;
   int ctx_size ;
   int (*md_ctrl)(EVP_MD_CTX *ctx , int cmd , int p1 , void *p2 ) ;
};
typedef int evp_sign_method(int type , unsigned char const   *m ,
                            unsigned int m_length , unsigned char *sigret ,
                            unsigned int *siglen , void *key );
typedef int evp_verify_method(int type , unsigned char const   *m ,
                              unsigned int m_length ,
                              unsigned char const   *sigbuf ,
                              unsigned int siglen , void *key );
struct env_md_ctx_st {
   EVP_MD const   *digest ;
   ENGINE *engine ;
   unsigned long flags ;
   void *md_data ;
   EVP_PKEY_CTX *pctx ;
   int (*update)(EVP_MD_CTX *ctx , void const   *data , size_t count ) ;
};
struct evp_cipher_st {
   int nid ;
   int block_size ;
   int key_len ;
   int iv_len ;
   unsigned long flags ;
   int (*init)(EVP_CIPHER_CTX *ctx , unsigned char const   *key ,
               unsigned char const   *iv , int enc ) ;
   int (*do_cipher)(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                    unsigned char const   *in , size_t inl ) ;
   int (*cleanup)(EVP_CIPHER_CTX * ) ;
   int ctx_size ;
   int (*set_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*get_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*ctrl)(EVP_CIPHER_CTX * , int type , int arg , void *ptr ) ;
   void *app_data ;
};
struct evp_cipher_info_st {
   EVP_CIPHER const   *cipher ;
   unsigned char iv[16] ;
};
typedef struct evp_cipher_info_st EVP_CIPHER_INFO;
struct evp_cipher_ctx_st {
   EVP_CIPHER const   *cipher ;
   ENGINE *engine ;
   int encrypt ;
   int buf_len ;
   unsigned char oiv[16] ;
   unsigned char iv[16] ;
   unsigned char buf[32] ;
   int num ;
   void *app_data ;
   int key_len ;
   unsigned long flags ;
   void *cipher_data ;
   int final_used ;
   int block_mask ;
   unsigned char final[32] ;
};
struct evp_Encode_Ctx_st {
   int num ;
   int length ;
   unsigned char enc_data[80] ;
   int line_num ;
   int expect_nl ;
};
typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;
typedef int EVP_PBE_KEYGEN(EVP_CIPHER_CTX *ctx , char const   *pass ,
                           int passlen , ASN1_TYPE *param ,
                           EVP_CIPHER const   *cipher , EVP_MD const   *md ,
                           int en_de );
struct rsa_st;
struct dsa_st;
struct dh_st;
typedef int EVP_PKEY_gen_cb(EVP_PKEY_CTX *ctx );
struct rsa_meth_st {
   char const   *name ;
   int (*rsa_pub_enc)(int flen , unsigned char const   *from ,
                      unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_pub_dec)(int flen , unsigned char const   *from ,
                      unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_priv_enc)(int flen , unsigned char const   *from ,
                       unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_priv_dec)(int flen , unsigned char const   *from ,
                       unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_mod_exp)(BIGNUM *r0 , BIGNUM const   *I , RSA *rsa , BN_CTX *ctx ) ;
   int (*bn_mod_exp)(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                     BIGNUM const   *m , BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(RSA *rsa ) ;
   int (*finish)(RSA *rsa ) ;
   int flags ;
   char *app_data ;
   int (*rsa_sign)(int type , unsigned char const   *m , unsigned int m_length ,
                   unsigned char *sigret , unsigned int *siglen ,
                   RSA const   *rsa ) ;
   int (*rsa_verify)(int dtype , unsigned char const   *m ,
                     unsigned int m_length , unsigned char const   *sigbuf ,
                     unsigned int siglen , RSA const   *rsa ) ;
   int (*rsa_keygen)(RSA *rsa , int bits , BIGNUM *e , BN_GENCB *cb ) ;
};
struct rsa_st {
   int pad ;
   long version ;
   RSA_METHOD const   *meth ;
   ENGINE *engine ;
   BIGNUM *n ;
   BIGNUM *e ;
   BIGNUM *d ;
   BIGNUM *p ;
   BIGNUM *q ;
   BIGNUM *dmp1 ;
   BIGNUM *dmq1 ;
   BIGNUM *iqmp ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
   int flags ;
   BN_MONT_CTX *_method_mod_n ;
   BN_MONT_CTX *_method_mod_p ;
   BN_MONT_CTX *_method_mod_q ;
   char *bignum_data ;
   BN_BLINDING *blinding ;
   BN_BLINDING *mt_blinding ;
};
struct dh_method {
   char const   *name ;
   int (*generate_key)(DH *dh ) ;
   int (*compute_key)(unsigned char *key , BIGNUM const   *pub_key , DH *dh ) ;
   int (*bn_mod_exp)(DH const   *dh , BIGNUM *r , BIGNUM const   *a ,
                     BIGNUM const   *p , BIGNUM const   *m , BN_CTX *ctx ,
                     BN_MONT_CTX *m_ctx ) ;
   int (*init)(DH *dh ) ;
   int (*finish)(DH *dh ) ;
   int flags ;
   char *app_data ;
   int (*generate_params)(DH *dh , int prime_len , int generator , BN_GENCB *cb ) ;
};
struct dh_st {
   int pad ;
   int version ;
   BIGNUM *p ;
   BIGNUM *g ;
   long length ;
   BIGNUM *pub_key ;
   BIGNUM *priv_key ;
   int flags ;
   BN_MONT_CTX *method_mont_p ;
   BIGNUM *q ;
   BIGNUM *j ;
   unsigned char *seed ;
   int seedlen ;
   BIGNUM *counter ;
   int references ;
   CRYPTO_EX_DATA ex_data ;
   DH_METHOD const   *meth ;
   ENGINE *engine ;
};
struct DSA_SIG_st {
   BIGNUM *r ;
   BIGNUM *s ;
};
typedef struct DSA_SIG_st DSA_SIG;
struct dsa_method {
   char const   *name ;
   DSA_SIG *(*dsa_do_sign)(unsigned char const   *dgst , int dlen , DSA *dsa ) ;
   int (*dsa_sign_setup)(DSA *dsa , BN_CTX *ctx_in , BIGNUM **kinvp ,
                         BIGNUM **rp ) ;
   int (*dsa_do_verify)(unsigned char const   *dgst , int dgst_len ,
                        DSA_SIG *sig , DSA *dsa ) ;
   int (*dsa_mod_exp)(DSA *dsa , BIGNUM *rr , BIGNUM *a1 , BIGNUM *p1 ,
                      BIGNUM *a2 , BIGNUM *p2 , BIGNUM *m , BN_CTX *ctx ,
                      BN_MONT_CTX *in_mont ) ;
   int (*bn_mod_exp)(DSA *dsa , BIGNUM *r , BIGNUM *a , BIGNUM const   *p ,
                     BIGNUM const   *m , BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(DSA *dsa ) ;
   int (*finish)(DSA *dsa ) ;
   int flags ;
   char *app_data ;
   int (*dsa_paramgen)(DSA *dsa , int bits , unsigned char const   *seed ,
                       int seed_len , int *counter_ret , unsigned long *h_ret ,
                       BN_GENCB *cb ) ;
   int (*dsa_keygen)(DSA *dsa ) ;
};
struct dsa_st {
   int pad ;
   long version ;
   int write_params ;
   BIGNUM *p ;
   BIGNUM *q ;
   BIGNUM *g ;
   BIGNUM *pub_key ;
   BIGNUM *priv_key ;
   BIGNUM *kinv ;
   BIGNUM *r ;
   int flags ;
   BN_MONT_CTX *method_mont_p ;
   int references ;
   CRYPTO_EX_DATA ex_data ;
   DSA_METHOD const   *meth ;
   ENGINE *engine ;
};
struct SHAstate_st {
   unsigned int h0 ;
   unsigned int h1 ;
   unsigned int h2 ;
   unsigned int h3 ;
   unsigned int h4 ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   unsigned int num ;
};
typedef struct SHAstate_st SHA_CTX;
struct SHA256state_st {
   unsigned int h[8] ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   unsigned int num ;
   unsigned int md_len ;
};
typedef struct SHA256state_st SHA256_CTX;
union __anonunion_u_142 {
   unsigned long long d[16] ;
   unsigned char p[128] ;
};
struct SHA512state_st {
   unsigned long long h[8] ;
   unsigned long long Nl ;
   unsigned long long Nh ;
   union __anonunion_u_142 u ;
   unsigned int num ;
   unsigned int md_len ;
};
typedef struct SHA512state_st SHA512_CTX;
struct X509_objects_st {
   int nid ;
   int (*a2i)(void) ;
   int (*i2a)(void) ;
};
typedef struct X509_objects_st X509_OBJECTS;
struct X509_algor_st {
   ASN1_OBJECT *algorithm ;
   ASN1_TYPE *parameter ;
};
typedef struct stack_st_X509_ALGOR X509_ALGORS;
struct X509_val_st {
   ASN1_TIME *notBefore ;
   ASN1_TIME *notAfter ;
};
typedef struct X509_val_st X509_VAL;
struct X509_pubkey_st {
   X509_ALGOR *algor ;
   ASN1_BIT_STRING *public_key ;
   EVP_PKEY *pkey ;
};
struct X509_sig_st {
   X509_ALGOR *algor ;
   ASN1_OCTET_STRING *digest ;
};
typedef struct X509_sig_st X509_SIG;
struct X509_name_entry_st {
   ASN1_OBJECT *object ;
   ASN1_STRING *value ;
   int set ;
   int size ;
};
typedef struct X509_name_entry_st X509_NAME_ENTRY;
struct stack_st_X509_NAME_ENTRY {
   _STACK stack ;
};
struct X509_name_st {
   struct stack_st_X509_NAME_ENTRY *entries ;
   int modified ;
   BUF_MEM *bytes ;
   unsigned char *canon_enc ;
   int canon_enclen ;
};
struct stack_st_X509_NAME {
   _STACK stack ;
};
struct X509_extension_st {
   ASN1_OBJECT *object ;
   ASN1_BOOLEAN critical ;
   ASN1_OCTET_STRING *value ;
};
typedef struct X509_extension_st X509_EXTENSION;
struct stack_st_X509_EXTENSION;
typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;
struct stack_st_X509_EXTENSION {
   _STACK stack ;
};
union __anonunion_value_143 {
   char *ptr ;
   struct stack_st_ASN1_TYPE *set ;
   ASN1_TYPE *single ;
};
struct x509_attributes_st {
   ASN1_OBJECT *object ;
   int single ;
   union __anonunion_value_143 value ;
};
typedef struct x509_attributes_st X509_ATTRIBUTE;
struct stack_st_X509_ATTRIBUTE {
   _STACK stack ;
};
struct X509_req_info_st {
   ASN1_ENCODING enc ;
   ASN1_INTEGER *version ;
   X509_NAME *subject ;
   X509_PUBKEY *pubkey ;
   struct stack_st_X509_ATTRIBUTE *attributes ;
};
typedef struct X509_req_info_st X509_REQ_INFO;
struct X509_req_st {
   X509_REQ_INFO *req_info ;
   X509_ALGOR *sig_alg ;
   ASN1_BIT_STRING *signature ;
   int references ;
};
typedef struct X509_req_st X509_REQ;
struct x509_cinf_st {
   ASN1_INTEGER *version ;
   ASN1_INTEGER *serialNumber ;
   X509_ALGOR *signature ;
   X509_NAME *issuer ;
   X509_VAL *validity ;
   X509_NAME *subject ;
   X509_PUBKEY *key ;
   ASN1_BIT_STRING *issuerUID ;
   ASN1_BIT_STRING *subjectUID ;
   struct stack_st_X509_EXTENSION *extensions ;
   ASN1_ENCODING enc ;
};
typedef struct x509_cinf_st X509_CINF;
struct x509_cert_aux_st {
   struct stack_st_ASN1_OBJECT *trust ;
   struct stack_st_ASN1_OBJECT *reject ;
   ASN1_UTF8STRING *alias ;
   ASN1_OCTET_STRING *keyid ;
   struct stack_st_X509_ALGOR *other ;
};
typedef struct x509_cert_aux_st X509_CERT_AUX;
struct stack_st_DIST_POINT;
struct stack_st_GENERAL_NAME;
struct stack_st_IPAddressFamily;
struct ASIdentifiers_st;
struct x509_st {
   X509_CINF *cert_info ;
   X509_ALGOR *sig_alg ;
   ASN1_BIT_STRING *signature ;
   int valid ;
   int references ;
   char *name ;
   CRYPTO_EX_DATA ex_data ;
   long ex_pathlen ;
   long ex_pcpathlen ;
   unsigned long ex_flags ;
   unsigned long ex_kusage ;
   unsigned long ex_xkusage ;
   unsigned long ex_nscert ;
   ASN1_OCTET_STRING *skid ;
   AUTHORITY_KEYID *akid ;
   X509_POLICY_CACHE *policy_cache ;
   struct stack_st_DIST_POINT *crldp ;
   struct stack_st_GENERAL_NAME *altname ;
   NAME_CONSTRAINTS *nc ;
   struct stack_st_IPAddressFamily *rfc3779_addr ;
   struct ASIdentifiers_st *rfc3779_asid ;
   unsigned char sha1_hash[20] ;
   X509_CERT_AUX *aux ;
};
struct stack_st_X509 {
   _STACK stack ;
};
struct x509_trust_st {
   int trust ;
   int flags ;
   int (*check_trust)(struct x509_trust_st * , X509 * , int  ) ;
   char *name ;
   int arg1 ;
   void *arg2 ;
};
typedef struct x509_trust_st X509_TRUST;
struct stack_st_X509_TRUST {
   _STACK stack ;
};
struct x509_cert_pair_st {
   X509 *forward ;
   X509 *reverse ;
};
typedef struct x509_cert_pair_st X509_CERT_PAIR;
struct x509_revoked_st {
   ASN1_INTEGER *serialNumber ;
   ASN1_TIME *revocationDate ;
   struct stack_st_X509_EXTENSION *extensions ;
   struct stack_st_GENERAL_NAME *issuer ;
   int reason ;
   int sequence ;
};
struct stack_st_X509_REVOKED {
   _STACK stack ;
};
struct X509_crl_info_st {
   ASN1_INTEGER *version ;
   X509_ALGOR *sig_alg ;
   X509_NAME *issuer ;
   ASN1_TIME *lastUpdate ;
   ASN1_TIME *nextUpdate ;
   struct stack_st_X509_REVOKED *revoked ;
   struct stack_st_X509_EXTENSION *extensions ;
   ASN1_ENCODING enc ;
};
typedef struct X509_crl_info_st X509_CRL_INFO;
struct stack_st_GENERAL_NAMES;
struct X509_crl_st {
   X509_CRL_INFO *crl ;
   X509_ALGOR *sig_alg ;
   ASN1_BIT_STRING *signature ;
   int references ;
   int flags ;
   AUTHORITY_KEYID *akid ;
   ISSUING_DIST_POINT *idp ;
   int idp_flags ;
   int idp_reasons ;
   ASN1_INTEGER *crl_number ;
   ASN1_INTEGER *base_crl_number ;
   unsigned char sha1_hash[20] ;
   struct stack_st_GENERAL_NAMES *issuers ;
   X509_CRL_METHOD const   *meth ;
   void *meth_data ;
};
struct stack_st_X509_CRL {
   _STACK stack ;
};
struct private_key_st {
   int version ;
   X509_ALGOR *enc_algor ;
   ASN1_OCTET_STRING *enc_pkey ;
   EVP_PKEY *dec_pkey ;
   int key_length ;
   char *key_data ;
   int key_free ;
   EVP_CIPHER_INFO cipher ;
   int references ;
};
typedef struct private_key_st X509_PKEY;
struct X509_info_st {
   X509 *x509 ;
   X509_CRL *crl ;
   X509_PKEY *x_pkey ;
   EVP_CIPHER_INFO enc_cipher ;
   int enc_len ;
   char *enc_data ;
   int references ;
};
typedef struct X509_info_st X509_INFO;
struct stack_st_X509_INFO {
   _STACK stack ;
};
struct Netscape_spkac_st {
   X509_PUBKEY *pubkey ;
   ASN1_IA5STRING *challenge ;
};
typedef struct Netscape_spkac_st NETSCAPE_SPKAC;
struct Netscape_spki_st {
   NETSCAPE_SPKAC *spkac ;
   X509_ALGOR *sig_algor ;
   ASN1_BIT_STRING *signature ;
};
typedef struct Netscape_spki_st NETSCAPE_SPKI;
struct Netscape_certificate_sequence {
   ASN1_OBJECT *type ;
   struct stack_st_X509 *certs ;
};
typedef struct Netscape_certificate_sequence NETSCAPE_CERT_SEQUENCE;
struct PBEPARAM_st {
   ASN1_OCTET_STRING *salt ;
   ASN1_INTEGER *iter ;
};
typedef struct PBEPARAM_st PBEPARAM;
struct PBE2PARAM_st {
   X509_ALGOR *keyfunc ;
   X509_ALGOR *encryption ;
};
typedef struct PBE2PARAM_st PBE2PARAM;
struct PBKDF2PARAM_st {
   ASN1_TYPE *salt ;
   ASN1_INTEGER *iter ;
   ASN1_INTEGER *keylength ;
   X509_ALGOR *prf ;
};
typedef struct PBKDF2PARAM_st PBKDF2PARAM;
struct pkcs8_priv_key_info_st {
   int broken ;
   ASN1_INTEGER *version ;
   X509_ALGOR *pkeyalg ;
   ASN1_TYPE *pkey ;
   struct stack_st_X509_ATTRIBUTE *attributes ;
};
struct lhash_node_st {
   void *data ;
   struct lhash_node_st *next ;
   unsigned long hash ;
};
typedef struct lhash_node_st LHASH_NODE;
typedef int (*LHASH_COMP_FN_TYPE)(void const   * , void const   * );
typedef unsigned long (*LHASH_HASH_FN_TYPE)(void const   * );
typedef void (*LHASH_DOALL_FN_TYPE)(void * );
typedef void (*LHASH_DOALL_ARG_FN_TYPE)(void * , void * );
struct lhash_st {
   LHASH_NODE **b ;
   int (*comp)(void const   * , void const   * ) ;
   unsigned long (*hash)(void const   * ) ;
   unsigned int num_nodes ;
   unsigned int num_alloc_nodes ;
   unsigned int p ;
   unsigned int pmax ;
   unsigned long up_load ;
   unsigned long down_load ;
   unsigned long num_items ;
   unsigned long num_expands ;
   unsigned long num_expand_reallocs ;
   unsigned long num_contracts ;
   unsigned long num_contract_reallocs ;
   unsigned long num_hash_calls ;
   unsigned long num_comp_calls ;
   unsigned long num_insert ;
   unsigned long num_replace ;
   unsigned long num_delete ;
   unsigned long num_no_delete ;
   unsigned long num_retrieve ;
   unsigned long num_retrieve_miss ;
   unsigned long num_hash_comps ;
   int error ;
};
typedef struct lhash_st _LHASH;
struct lhash_st_OPENSSL_STRING {
   int dummy ;
};
struct lhash_st_OPENSSL_CSTRING {
   int dummy ;
};
struct x509_file_st {
   int num_paths ;
   int num_alloced ;
   char **paths ;
   int *path_type ;
};
typedef struct x509_file_st X509_CERT_FILE_CTX;
union __anonunion_data_144 {
   char *ptr ;
   X509 *x509 ;
   X509_CRL *crl ;
   EVP_PKEY *pkey ;
};
struct x509_object_st {
   int type ;
   union __anonunion_data_144 data ;
};
typedef struct x509_object_st X509_OBJECT;
struct x509_lookup_st;
typedef struct x509_lookup_st X509_LOOKUP;
struct stack_st_X509_LOOKUP {
   _STACK stack ;
};
struct stack_st_X509_OBJECT {
   _STACK stack ;
};
struct x509_lookup_method_st {
   char const   *name ;
   int (*new_item)(X509_LOOKUP *ctx ) ;
   void (*free)(X509_LOOKUP *ctx ) ;
   int (*init)(X509_LOOKUP *ctx ) ;
   int (*shutdown)(X509_LOOKUP *ctx ) ;
   int (*ctrl)(X509_LOOKUP *ctx , int cmd , char const   *argc , long argl ,
               char **ret ) ;
   int (*get_by_subject)(X509_LOOKUP *ctx , int type , X509_NAME *name ,
                         X509_OBJECT *ret ) ;
   int (*get_by_issuer_serial)(X509_LOOKUP *ctx , int type , X509_NAME *name ,
                               ASN1_INTEGER *serial , X509_OBJECT *ret ) ;
   int (*get_by_fingerprint)(X509_LOOKUP *ctx , int type ,
                             unsigned char *bytes , int len , X509_OBJECT *ret ) ;
   int (*get_by_alias)(X509_LOOKUP *ctx , int type , char *str , int len ,
                       X509_OBJECT *ret ) ;
};
typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;
struct X509_VERIFY_PARAM_st {
   char *name ;
   time_t check_time ;
   unsigned long inh_flags ;
   unsigned long flags ;
   int purpose ;
   int trust ;
   int depth ;
   struct stack_st_ASN1_OBJECT *policies ;
};
typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;
struct stack_st_X509_VERIFY_PARAM {
   _STACK stack ;
};
struct x509_store_st {
   int cache ;
   struct stack_st_X509_OBJECT *objs ;
   struct stack_st_X509_LOOKUP *get_cert_methods ;
   X509_VERIFY_PARAM *param ;
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   int (*get_issuer)(X509 **issuer , X509_STORE_CTX *ctx , X509 *x ) ;
   int (*check_issued)(X509_STORE_CTX *ctx , X509 *x , X509 *issuer ) ;
   int (*check_revocation)(X509_STORE_CTX *ctx ) ;
   int (*get_crl)(X509_STORE_CTX *ctx , X509_CRL **crl , X509 *x ) ;
   int (*check_crl)(X509_STORE_CTX *ctx , X509_CRL *crl ) ;
   int (*cert_crl)(X509_STORE_CTX *ctx , X509_CRL *crl , X509 *x ) ;
   struct stack_st_X509 *(*lookup_certs)(X509_STORE_CTX *ctx , X509_NAME *nm ) ;
   struct stack_st_X509_CRL *(*lookup_crls)(X509_STORE_CTX *ctx , X509_NAME *nm ) ;
   int (*cleanup)(X509_STORE_CTX *ctx ) ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
};
struct x509_lookup_st {
   int init ;
   int skip ;
   X509_LOOKUP_METHOD *method ;
   char *method_data ;
   X509_STORE *store_ctx ;
};
struct x509_store_ctx_st {
   X509_STORE *ctx ;
   int current_method ;
   X509 *cert ;
   struct stack_st_X509 *untrusted ;
   struct stack_st_X509_CRL *crls ;
   X509_VERIFY_PARAM *param ;
   void *other_ctx ;
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   int (*get_issuer)(X509 **issuer , X509_STORE_CTX *ctx , X509 *x ) ;
   int (*check_issued)(X509_STORE_CTX *ctx , X509 *x , X509 *issuer ) ;
   int (*check_revocation)(X509_STORE_CTX *ctx ) ;
   int (*get_crl)(X509_STORE_CTX *ctx , X509_CRL **crl , X509 *x ) ;
   int (*check_crl)(X509_STORE_CTX *ctx , X509_CRL *crl ) ;
   int (*cert_crl)(X509_STORE_CTX *ctx , X509_CRL *crl , X509 *x ) ;
   int (*check_policy)(X509_STORE_CTX *ctx ) ;
   struct stack_st_X509 *(*lookup_certs)(X509_STORE_CTX *ctx , X509_NAME *nm ) ;
   struct stack_st_X509_CRL *(*lookup_crls)(X509_STORE_CTX *ctx , X509_NAME *nm ) ;
   int (*cleanup)(X509_STORE_CTX *ctx ) ;
   int valid ;
   int last_untrusted ;
   struct stack_st_X509 *chain ;
   X509_POLICY_TREE *tree ;
   int explicit_policy ;
   int error_depth ;
   int error ;
   X509 *current_cert ;
   X509 *current_issuer ;
   X509_CRL *current_crl ;
   int current_crl_score ;
   unsigned int current_reasons ;
   X509_STORE_CTX *parent ;
   CRYPTO_EX_DATA ex_data ;
};
struct stack_st_X509_POLICY_NODE;
struct stack_st_POLICYQUALINFO;
struct pkcs7_issuer_and_serial_st {
   X509_NAME *issuer ;
   ASN1_INTEGER *serial ;
};
typedef struct pkcs7_issuer_and_serial_st PKCS7_ISSUER_AND_SERIAL;
struct pkcs7_signer_info_st {
   ASN1_INTEGER *version ;
   PKCS7_ISSUER_AND_SERIAL *issuer_and_serial ;
   X509_ALGOR *digest_alg ;
   struct stack_st_X509_ATTRIBUTE *auth_attr ;
   X509_ALGOR *digest_enc_alg ;
   ASN1_OCTET_STRING *enc_digest ;
   struct stack_st_X509_ATTRIBUTE *unauth_attr ;
   EVP_PKEY *pkey ;
};
typedef struct pkcs7_signer_info_st PKCS7_SIGNER_INFO;
struct stack_st_PKCS7_SIGNER_INFO {
   _STACK stack ;
};
struct pkcs7_recip_info_st {
   ASN1_INTEGER *version ;
   PKCS7_ISSUER_AND_SERIAL *issuer_and_serial ;
   X509_ALGOR *key_enc_algor ;
   ASN1_OCTET_STRING *enc_key ;
   X509 *cert ;
};
typedef struct pkcs7_recip_info_st PKCS7_RECIP_INFO;
struct stack_st_PKCS7_RECIP_INFO {
   _STACK stack ;
};
struct pkcs7_st;
struct pkcs7_signed_st {
   ASN1_INTEGER *version ;
   struct stack_st_X509_ALGOR *md_algs ;
   struct stack_st_X509 *cert ;
   struct stack_st_X509_CRL *crl ;
   struct stack_st_PKCS7_SIGNER_INFO *signer_info ;
   struct pkcs7_st *contents ;
};
typedef struct pkcs7_signed_st PKCS7_SIGNED;
struct pkcs7_enc_content_st {
   ASN1_OBJECT *content_type ;
   X509_ALGOR *algorithm ;
   ASN1_OCTET_STRING *enc_data ;
   EVP_CIPHER const   *cipher ;
};
typedef struct pkcs7_enc_content_st PKCS7_ENC_CONTENT;
struct pkcs7_enveloped_st {
   ASN1_INTEGER *version ;
   struct stack_st_PKCS7_RECIP_INFO *recipientinfo ;
   PKCS7_ENC_CONTENT *enc_data ;
};
typedef struct pkcs7_enveloped_st PKCS7_ENVELOPE;
struct pkcs7_signedandenveloped_st {
   ASN1_INTEGER *version ;
   struct stack_st_X509_ALGOR *md_algs ;
   struct stack_st_X509 *cert ;
   struct stack_st_X509_CRL *crl ;
   struct stack_st_PKCS7_SIGNER_INFO *signer_info ;
   PKCS7_ENC_CONTENT *enc_data ;
   struct stack_st_PKCS7_RECIP_INFO *recipientinfo ;
};
typedef struct pkcs7_signedandenveloped_st PKCS7_SIGN_ENVELOPE;
struct pkcs7_digest_st {
   ASN1_INTEGER *version ;
   X509_ALGOR *md ;
   struct pkcs7_st *contents ;
   ASN1_OCTET_STRING *digest ;
};
typedef struct pkcs7_digest_st PKCS7_DIGEST;
struct pkcs7_encrypted_st {
   ASN1_INTEGER *version ;
   PKCS7_ENC_CONTENT *enc_data ;
};
typedef struct pkcs7_encrypted_st PKCS7_ENCRYPT;
union __anonunion_d_145 {
   char *ptr ;
   ASN1_OCTET_STRING *data ;
   PKCS7_SIGNED *sign ;
   PKCS7_ENVELOPE *enveloped ;
   PKCS7_SIGN_ENVELOPE *signed_and_enveloped ;
   PKCS7_DIGEST *digest ;
   PKCS7_ENCRYPT *encrypted ;
   ASN1_TYPE *other ;
};
struct pkcs7_st {
   unsigned char *asn1 ;
   long length ;
   int state ;
   int detached ;
   ASN1_OBJECT *type ;
   union __anonunion_d_145 d ;
};
typedef struct pkcs7_st PKCS7;
struct stack_st_PKCS7 {
   _STACK stack ;
};
struct PEM_Encode_Seal_st {
   EVP_ENCODE_CTX encode ;
   EVP_MD_CTX md ;
   EVP_CIPHER_CTX cipher ;
};
typedef struct PEM_Encode_Seal_st PEM_ENCODE_SEAL_CTX;
struct pem_recip_st {
   char *name ;
   X509_NAME *dn ;
   int cipher ;
   int key_enc ;
};
typedef struct pem_recip_st PEM_USER;
struct __anonstruct_proc_type_146 {
   int version ;
   int mode ;
};
struct __anonstruct_DEK_info_147 {
   int cipher ;
};
struct pem_ctx_st {
   int type ;
   struct __anonstruct_proc_type_146 proc_type ;
   char *domain ;
   struct __anonstruct_DEK_info_147 DEK_info ;
   PEM_USER *originator ;
   int num_recipient ;
   PEM_USER **recipient ;
   EVP_MD *md ;
   int md_enc ;
   int md_len ;
   char *md_data ;
   EVP_CIPHER *dec ;
   int key_len ;
   unsigned char *key ;
   int data_enc ;
   int data_len ;
   unsigned char *data ;
};
typedef struct pem_ctx_st PEM_CTX;
typedef int pem_password_cb(char *buf , int size , int rwflag , void *userdata );
struct hmac_ctx_st {
   EVP_MD const   *md ;
   EVP_MD_CTX md_ctx ;
   EVP_MD_CTX i_ctx ;
   EVP_MD_CTX o_ctx ;
   unsigned int key_length ;
   unsigned char key[128] ;
};
typedef struct hmac_ctx_st HMAC_CTX;
typedef struct ssl_st *ssl_crock_st;
struct tls_session_ticket_ext_st;
typedef struct tls_session_ticket_ext_st TLS_SESSION_TICKET_EXT;
struct ssl_cipher_st {
   int valid ;
   char const   *name ;
   unsigned long id ;
   unsigned long algorithm_mkey ;
   unsigned long algorithm_auth ;
   unsigned long algorithm_enc ;
   unsigned long algorithm_mac ;
   unsigned long algorithm_ssl ;
   unsigned long algo_strength ;
   unsigned long algorithm2 ;
   int strength_bits ;
   int alg_bits ;
};
typedef struct ssl_cipher_st SSL_CIPHER;
struct stack_st_SSL_CIPHER {
   _STACK stack ;
};
typedef int (*tls_session_ticket_ext_cb_fn)(SSL *s ,
                                            unsigned char const   *data ,
                                            int len , void *arg );
typedef int (*tls_session_secret_cb_fn)(SSL *s , void *secret ,
                                        int *secret_len ,
                                        struct stack_st_SSL_CIPHER *peer_ciphers ,
                                        SSL_CIPHER **cipher , void *arg );
struct ssl3_enc_method;
struct ssl_method_st {
   int version ;
   int (*ssl_new)(SSL *s ) ;
   void (*ssl_clear)(SSL *s ) ;
   void (*ssl_free)(SSL *s ) ;
   int (*ssl_accept)(SSL *s ) ;
   int (*ssl_connect)(SSL *s ) ;
   int (*ssl_read)(SSL *s , void *buf , int len ) ;
   int (*ssl_peek)(SSL *s , void *buf , int len ) ;
   int (*ssl_write)(SSL *s , void const   *buf , int len ) ;
   int (*ssl_shutdown)(SSL *s ) ;
   int (*ssl_renegotiate)(SSL *s ) ;
   int (*ssl_renegotiate_check)(SSL *s ) ;
   long (*ssl_get_message)(SSL *s , int st1 , int stn , int mt , long max ,
                           int *ok ) ;
   int (*ssl_read_bytes)(SSL *s , int type , unsigned char *buf , int len ,
                         int peek ) ;
   int (*ssl_write_bytes)(SSL *s , int type , void const   *buf_ , int len ) ;
   int (*ssl_dispatch_alert)(SSL *s ) ;
   long (*ssl_ctrl)(SSL *s , int cmd , long larg , void *parg ) ;
   long (*ssl_ctx_ctrl)(SSL_CTX *ctx , int cmd , long larg , void *parg ) ;
   SSL_CIPHER const   *(*get_cipher_by_char)(unsigned char const   *ptr ) ;
   int (*put_cipher_by_char)(SSL_CIPHER const   *cipher , unsigned char *ptr ) ;
   int (*ssl_pending)(SSL const   *s ) ;
   int (*num_ciphers)(void) ;
   SSL_CIPHER const   *(*get_cipher)(unsigned int ncipher ) ;
   struct ssl_method_st  const  *(*get_ssl_method)(int version ) ;
   long (*get_timeout)(void) ;
   struct ssl3_enc_method *ssl3_enc ;
   int (*ssl_version)(void) ;
   long (*ssl_callback_ctrl)(SSL *s , int cb_id , void (*fp)(void) ) ;
   long (*ssl_ctx_callback_ctrl)(SSL_CTX *s , int cb_id , void (*fp)(void) ) ;
};
typedef struct ssl_method_st SSL_METHOD;
struct sess_cert_st;
struct ssl_session_st {
   int ssl_version ;
   unsigned int key_arg_length ;
   unsigned char key_arg[8] ;
   int master_key_length ;
   unsigned char master_key[48] ;
   unsigned int session_id_length ;
   unsigned char session_id[32] ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   char *psk_identity_hint ;
   char *psk_identity ;
   int not_resumable ;
   struct sess_cert_st *sess_cert ;
   X509 *peer ;
   long verify_result ;
   int references ;
   long timeout ;
   long time ;
   unsigned int compress_meth ;
   SSL_CIPHER const   *cipher ;
   unsigned long cipher_id ;
   struct stack_st_SSL_CIPHER *ciphers ;
   CRYPTO_EX_DATA ex_data ;
   struct ssl_session_st *prev ;
   struct ssl_session_st *next ;
   char *tlsext_hostname ;
   unsigned char *tlsext_tick ;
   size_t tlsext_ticklen ;
   long tlsext_tick_lifetime_hint ;
};
typedef struct ssl_session_st SSL_SESSION;
typedef int (*GEN_SESSION_CB)(SSL const   *ssl , unsigned char *id ,
                              unsigned int *id_len );
struct ssl_comp_st {
   int id ;
   char const   *name ;
   COMP_METHOD *method ;
};
typedef struct ssl_comp_st SSL_COMP;
struct stack_st_SSL_COMP {
   _STACK stack ;
};
struct lhash_st_SSL_SESSION {
   int dummy ;
};
struct __anonstruct_stats_148 {
   int sess_connect ;
   int sess_connect_renegotiate ;
   int sess_connect_good ;
   int sess_accept ;
   int sess_accept_renegotiate ;
   int sess_accept_good ;
   int sess_miss ;
   int sess_timeout ;
   int sess_cache_full ;
   int sess_hit ;
   int sess_cb_hit ;
};
struct cert_st;
struct ssl3_buf_freelist_st;
struct ssl_ctx_st {
   SSL_METHOD const   *method ;
   struct stack_st_SSL_CIPHER *cipher_list ;
   struct stack_st_SSL_CIPHER *cipher_list_by_id ;
   struct x509_store_st *cert_store ;
   struct lhash_st_SSL_SESSION *sessions ;
   unsigned long session_cache_size ;
   struct ssl_session_st *session_cache_head ;
   struct ssl_session_st *session_cache_tail ;
   int session_cache_mode ;
   long session_timeout ;
   int (*new_session_cb)(struct ssl_st *ssl , SSL_SESSION *sess ) ;
   void (*remove_session_cb)(struct ssl_ctx_st *ctx , SSL_SESSION *sess ) ;
   SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl , unsigned char *data ,
                                  int len , int *copy ) ;
   struct __anonstruct_stats_148 stats ;
   int references ;
   int (*app_verify_callback)(X509_STORE_CTX * , void * ) ;
   void *app_verify_arg ;
   pem_password_cb *default_passwd_callback ;
   void *default_passwd_callback_userdata ;
   int (*client_cert_cb)(SSL *ssl , X509 **x509 , EVP_PKEY **pkey ) ;
   int (*app_gen_cookie_cb)(SSL *ssl , unsigned char *cookie ,
                            unsigned int *cookie_len ) ;
   int (*app_verify_cookie_cb)(SSL *ssl , unsigned char *cookie ,
                               unsigned int cookie_len ) ;
   CRYPTO_EX_DATA ex_data ;
   EVP_MD const   *rsa_md5 ;
   EVP_MD const   *md5 ;
   EVP_MD const   *sha1 ;
   struct stack_st_X509 *extra_certs ;
   struct stack_st_SSL_COMP *comp_methods ;
   void (*info_callback)(SSL const   *ssl , int type , int val ) ;
   struct stack_st_X509_NAME *client_CA ;
   unsigned long options ;
   unsigned long mode ;
   long max_cert_list ;
   struct cert_st *cert ;
   int read_ahead ;
   void (*msg_callback)(int write_p , int version , int content_type ,
                        void const   *buf , size_t len , SSL *ssl , void *arg ) ;
   void *msg_callback_arg ;
   int verify_mode ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   int (*default_verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   int (*generate_session_id)(SSL const   *ssl , unsigned char *id ,
                              unsigned int *id_len ) ;
   X509_VERIFY_PARAM *param ;
   int quiet_shutdown ;
   unsigned int max_send_fragment ;
   ENGINE *client_cert_engine ;
   int (*tlsext_servername_callback)(SSL * , int * , void * ) ;
   void *tlsext_servername_arg ;
   unsigned char tlsext_tick_key_name[16] ;
   unsigned char tlsext_tick_hmac_key[16] ;
   unsigned char tlsext_tick_aes_key[16] ;
   int (*tlsext_ticket_key_cb)(SSL *ssl , unsigned char *name ,
                               unsigned char *iv , EVP_CIPHER_CTX *ectx ,
                               HMAC_CTX *hctx , int enc ) ;
   int (*tlsext_status_cb)(SSL *ssl , void *arg ) ;
   void *tlsext_status_arg ;
   int (*tlsext_opaque_prf_input_callback)(SSL * , void *peerinput ,
                                           size_t len , void *arg ) ;
   void *tlsext_opaque_prf_input_callback_arg ;
   char *psk_identity_hint ;
   unsigned int (*psk_client_callback)(SSL *ssl , char const   *hint ,
                                       char *identity ,
                                       unsigned int max_identity_len ,
                                       unsigned char *psk ,
                                       unsigned int max_psk_len ) ;
   unsigned int (*psk_server_callback)(SSL *ssl , char const   *identity ,
                                       unsigned char *psk ,
                                       unsigned int max_psk_len ) ;
   unsigned int freelist_max_len ;
   struct ssl3_buf_freelist_st *wbuf_freelist ;
   struct ssl3_buf_freelist_st *rbuf_freelist ;
};
struct ssl2_state_st;
struct ssl3_state_st;
struct dtls1_state_st;
struct stack_st_OCSP_RESPID;
struct ssl_st {
   int version ;
   int type ;
   SSL_METHOD const   *method ;
   BIO *rbio ;
   BIO *wbio ;
   BIO *bbio ;
   int rwstate ;
   int in_handshake ;
   int (*handshake_func)(SSL * ) ;
   int server ;
   int new_session ;
   int quiet_shutdown ;
   int shutdown ;
   int state ;
   int rstate ;
   BUF_MEM *init_buf ;
   void *init_msg ;
   int init_num ;
   int init_off ;
   unsigned char *packet ;
   unsigned int packet_length ;
   struct ssl2_state_st *s2 ;
   struct ssl3_state_st *s3 ;
   struct dtls1_state_st *d1 ;
   int read_ahead ;
   void (*msg_callback)(int write_p , int version , int content_type ,
                        void const   *buf , size_t len , SSL *ssl , void *arg ) ;
   void *msg_callback_arg ;
   int hit ;
   X509_VERIFY_PARAM *param ;
   struct stack_st_SSL_CIPHER *cipher_list ;
   struct stack_st_SSL_CIPHER *cipher_list_by_id ;
   int mac_flags ;
   EVP_CIPHER_CTX *enc_read_ctx ;
   EVP_MD_CTX *read_hash ;
   COMP_CTX *expand ;
   EVP_CIPHER_CTX *enc_write_ctx ;
   EVP_MD_CTX *write_hash ;
   COMP_CTX *compress ;
   struct cert_st *cert ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   SSL_SESSION *session ;
   int (*generate_session_id)(SSL const   *ssl , unsigned char *id ,
                              unsigned int *id_len ) ;
   int verify_mode ;
   int (*verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   void (*info_callback)(SSL const   *ssl , int type , int val ) ;
   int error ;
   int error_code ;
   unsigned int (*psk_client_callback)(SSL *ssl , char const   *hint ,
                                       char *identity ,
                                       unsigned int max_identity_len ,
                                       unsigned char *psk ,
                                       unsigned int max_psk_len ) ;
   unsigned int (*psk_server_callback)(SSL *ssl , char const   *identity ,
                                       unsigned char *psk ,
                                       unsigned int max_psk_len ) ;
   SSL_CTX *ctx ;
   int debug ;
   long verify_result ;
   CRYPTO_EX_DATA ex_data ;
   struct stack_st_X509_NAME *client_CA ;
   int references ;
   unsigned long options ;
   unsigned long mode ;
   long max_cert_list ;
   int first_packet ;
   int client_version ;
   unsigned int max_send_fragment ;
   void (*tlsext_debug_cb)(SSL *s , int client_server , int type ,
                           unsigned char *data , int len , void *arg ) ;
   void *tlsext_debug_arg ;
   char *tlsext_hostname ;
   int servername_done ;
   int tlsext_status_type ;
   int tlsext_status_expected ;
   struct stack_st_OCSP_RESPID *tlsext_ocsp_ids ;
   X509_EXTENSIONS *tlsext_ocsp_exts ;
   unsigned char *tlsext_ocsp_resp ;
   int tlsext_ocsp_resplen ;
   int tlsext_ticket_expected ;
   void *tlsext_opaque_prf_input ;
   size_t tlsext_opaque_prf_input_len ;
   TLS_SESSION_TICKET_EXT *tlsext_session_ticket ;
   int (*tls_session_ticket_ext_cb)(SSL *s , unsigned char const   *data ,
                                    int len , void *arg ) ;
   void *tls_session_ticket_ext_cb_arg ;
   int (*tls_session_secret_cb)(SSL *s , void *secret , int *secret_len ,
                                struct stack_st_SSL_CIPHER *peer_ciphers ,
                                SSL_CIPHER **cipher , void *arg ) ;
   void *tls_session_secret_cb_arg ;
   SSL_CTX *initial_ctx ;
};
struct __anonstruct_tmp_149 {
   unsigned int conn_id_length ;
   unsigned int cert_type ;
   unsigned int cert_length ;
   unsigned int csl ;
   unsigned int clear ;
   unsigned int enc ;
   unsigned char ccl[32] ;
   unsigned int cipher_spec_length ;
   unsigned int session_id_length ;
   unsigned int clen ;
   unsigned int rlen ;
};
struct ssl2_state_st {
   int three_byte_header ;
   int clear_text ;
   int escape ;
   int ssl2_rollback ;
   unsigned int wnum ;
   int wpend_tot ;
   unsigned char const   *wpend_buf ;
   int wpend_off ;
   int wpend_len ;
   int wpend_ret ;
   int rbuf_left ;
   int rbuf_offs ;
   unsigned char *rbuf ;
   unsigned char *wbuf ;
   unsigned char *write_ptr ;
   unsigned int padding ;
   unsigned int rlength ;
   int ract_data_length ;
   unsigned int wlength ;
   int wact_data_length ;
   unsigned char *ract_data ;
   unsigned char *wact_data ;
   unsigned char *mac_data ;
   unsigned char *read_key ;
   unsigned char *write_key ;
   unsigned int challenge_length ;
   unsigned char challenge[32] ;
   unsigned int conn_id_length ;
   unsigned char conn_id[16] ;
   unsigned int key_material_length ;
   unsigned char key_material[48] ;
   unsigned long read_sequence ;
   unsigned long write_sequence ;
   struct __anonstruct_tmp_149 tmp ;
};
typedef struct ssl2_state_st SSL2_STATE;
struct ssl3_record_st {
   int type ;
   unsigned int length ;
   unsigned int off ;
   unsigned char *data ;
   unsigned char *input ;
   unsigned char *comp ;
   unsigned long epoch ;
   unsigned char seq_num[8] ;
};
typedef struct ssl3_record_st SSL3_RECORD;
struct ssl3_buffer_st {
   unsigned char *buf ;
   size_t len ;
   int offset ;
   int left ;
};
typedef struct ssl3_buffer_st SSL3_BUFFER;
struct __anonstruct_tmp_150 {
   unsigned char cert_verify_md[128] ;
   unsigned char finish_md[128] ;
   int finish_md_len ;
   unsigned char peer_finish_md[128] ;
   int peer_finish_md_len ;
   unsigned long message_size ;
   int message_type ;
   SSL_CIPHER const   *new_cipher ;
   DH *dh ;
   int next_state ;
   int reuse_message ;
   int cert_req ;
   int ctype_num ;
   char ctype[9] ;
   struct stack_st_X509_NAME *ca_names ;
   int use_rsa_tmp ;
   int key_block_length ;
   unsigned char *key_block ;
   EVP_CIPHER const   *new_sym_enc ;
   EVP_MD const   *new_hash ;
   int new_mac_pkey_type ;
   int new_mac_secret_size ;
   SSL_COMP const   *new_compression ;
   int cert_request ;
};
struct ssl3_state_st {
   long flags ;
   int delay_buf_pop_ret ;
   unsigned char read_sequence[8] ;
   int read_mac_secret_size ;
   unsigned char read_mac_secret[64] ;
   unsigned char write_sequence[8] ;
   int write_mac_secret_size ;
   unsigned char write_mac_secret[64] ;
   unsigned char server_random[32] ;
   unsigned char client_random[32] ;
   int need_empty_fragments ;
   int empty_fragment_done ;
   int init_extra ;
   SSL3_BUFFER rbuf ;
   SSL3_BUFFER wbuf ;
   SSL3_RECORD rrec ;
   SSL3_RECORD wrec ;
   unsigned char alert_fragment[2] ;
   unsigned int alert_fragment_len ;
   unsigned char handshake_fragment[4] ;
   unsigned int handshake_fragment_len ;
   unsigned int wnum ;
   int wpend_tot ;
   int wpend_type ;
   int wpend_ret ;
   unsigned char const   *wpend_buf ;
   BIO *handshake_buffer ;
   EVP_MD_CTX **handshake_dgst ;
   int change_cipher_spec ;
   int warn_alert ;
   int fatal_alert ;
   int alert_dispatch ;
   unsigned char send_alert[2] ;
   int renegotiate ;
   int total_renegotiations ;
   int num_renegotiations ;
   int in_read_app_data ;
   void *client_opaque_prf_input ;
   size_t client_opaque_prf_input_len ;
   void *server_opaque_prf_input ;
   size_t server_opaque_prf_input_len ;
   struct __anonstruct_tmp_150 tmp ;
   unsigned char previous_client_finished[64] ;
   unsigned char previous_client_finished_len ;
   unsigned char previous_server_finished[64] ;
   unsigned char previous_server_finished_len ;
   int send_connection_binding ;
};
typedef struct ssl3_state_st SSL3_STATE;
struct tls_session_ticket_ext_st {
   unsigned short length ;
   void *data ;
};
struct _pqueue;
typedef struct _pqueue *pqueue;
struct _pitem {
   unsigned char priority[8] ;
   void *data ;
   struct _pitem *next ;
};
typedef struct _pitem pitem;
typedef struct _pitem *piterator;
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
struct dtls1_bitmap_st {
   unsigned long map ;
   unsigned char max_seq_num[8] ;
};
typedef struct dtls1_bitmap_st DTLS1_BITMAP;
struct dtls1_retransmit_state {
   EVP_CIPHER_CTX *enc_write_ctx ;
   EVP_MD_CTX *write_hash ;
   COMP_CTX *compress ;
   SSL_SESSION *session ;
   unsigned short epoch ;
};
struct hm_header_st {
   unsigned char type ;
   unsigned long msg_len ;
   unsigned short seq ;
   unsigned long frag_off ;
   unsigned long frag_len ;
   unsigned int is_ccs ;
   struct dtls1_retransmit_state saved_retransmit_state ;
};
struct ccs_header_st {
   unsigned char type ;
   unsigned short seq ;
};
struct dtls1_timeout_st {
   unsigned int read_timeouts ;
   unsigned int write_timeouts ;
   unsigned int num_alerts ;
};
struct record_pqueue_st {
   unsigned short epoch ;
   pqueue q ;
};
typedef struct record_pqueue_st record_pqueue;
struct hm_fragment_st {
   struct hm_header_st msg_header ;
   unsigned char *fragment ;
   unsigned char *reassembly ;
};
typedef struct hm_fragment_st hm_fragment;
struct dtls1_state_st {
   unsigned int send_cookie ;
   unsigned char cookie[256] ;
   unsigned char rcvd_cookie[256] ;
   unsigned int cookie_len ;
   unsigned short r_epoch ;
   unsigned short w_epoch ;
   DTLS1_BITMAP bitmap ;
   DTLS1_BITMAP next_bitmap ;
   unsigned short handshake_write_seq ;
   unsigned short next_handshake_write_seq ;
   unsigned short handshake_read_seq ;
   unsigned char last_write_sequence[8] ;
   record_pqueue unprocessed_rcds ;
   record_pqueue processed_rcds ;
   pqueue buffered_messages ;
   pqueue sent_messages ;
   record_pqueue buffered_app_data ;
   unsigned int mtu ;
   struct hm_header_st w_msg_hdr ;
   struct hm_header_st r_msg_hdr ;
   struct dtls1_timeout_st timeout ;
   struct timeval next_timeout ;
   unsigned short timeout_duration ;
   unsigned char alert_fragment[2] ;
   unsigned int alert_fragment_len ;
   unsigned char handshake_fragment[12] ;
   unsigned int handshake_fragment_len ;
   unsigned int retransmitting ;
   unsigned int change_cipher_spec_ok ;
   unsigned int listen ;
};
typedef struct dtls1_state_st DTLS1_STATE;
struct dtls1_record_data_st {
   unsigned char *packet ;
   unsigned int packet_length ;
   SSL3_BUFFER rbuf ;
   SSL3_RECORD rrec ;
};
typedef struct dtls1_record_data_st DTLS1_RECORD_DATA;
enum __anonenum_iosocket_t_151 {
    IOSOCKET_TYPE_UNSET = 0,
    IOSOCKET_TYPE_SOCKET = 1,
    IOSOCKET_TYPE_PIPE = 2
} ;
typedef enum __anonenum_iosocket_t_151 iosocket_t;
struct __anonstruct_iosocket_152 {
   int fd ;
   int fde_ndx ;
   SSL *ssl ;
   iosocket_t type ;
};
typedef struct __anonstruct_iosocket_152 iosocket;
enum __anonenum_153 {
    EPOLL_CLOEXEC = 524288,
    EPOLL_NONBLOCK = 2048
} ;
enum EPOLL_EVENTS {
    EPOLLIN = 1,
    EPOLLPRI = 2,
    EPOLLOUT = 4,
    EPOLLRDNORM = 64,
    EPOLLRDBAND = 128,
    EPOLLWRNORM = 256,
    EPOLLWRBAND = 512,
    EPOLLMSG = 1024,
    EPOLLERR = 8,
    EPOLLHUP = 16,
    EPOLLRDHUP = 8192,
    EPOLLONESHOT = 1073741824,
    EPOLLET = (-0x7FFFFFFF-1)
} ;
union epoll_data {
   void *ptr ;
   int fd ;
   uint32_t u32 ;
   uint64_t u64 ;
};
typedef union epoll_data epoll_data_t;
struct epoll_event {
   uint32_t events ;
   epoll_data_t data ;
};
typedef unsigned long nfds_t;
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
typedef handler_t (*fdevent_handler)(void *srv , void *ctx , int revents );
enum __anonenum_fd_event_t_154 {
    FD_EVENT_TYPE_UNSET = -1,
    FD_EVENT_TYPE_CONNECTION = 0,
    FD_EVENT_TYPE_FCGI_CONNECTION = 1,
    FD_EVENT_TYPE_DIRWATCH = 2,
    FD_EVENT_TYPE_CGI_CONNECTION = 3
} ;
typedef enum __anonenum_fd_event_t_154 fd_event_t;
enum __anonenum_fdevent_handler_t_155 {
    FDEVENT_HANDLER_UNSET = 0,
    FDEVENT_HANDLER_SELECT = 1,
    FDEVENT_HANDLER_POLL = 2,
    FDEVENT_HANDLER_LINUX_RTSIG = 3,
    FDEVENT_HANDLER_LINUX_SYSEPOLL = 4,
    FDEVENT_HANDLER_SOLARIS_DEVPOLL = 5,
    FDEVENT_HANDLER_FREEBSD_KQUEUE = 6,
    FDEVENT_HANDLER_SOLARIS_PORT = 7
} ;
typedef enum __anonenum_fdevent_handler_t_155 fdevent_handler_t;
struct __anonstruct_fd_conn_156 {
   int fd ;
   void *conn ;
   fd_event_t fd_type ;
   int events ;
   int revents ;
};
typedef struct __anonstruct_fd_conn_156 fd_conn;
struct __anonstruct_fd_conn_buffer_157 {
   fd_conn **ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_fd_conn_buffer_157 fd_conn_buffer;
struct __anonstruct_fdevent_revent_158 {
   int fd ;
   int revents ;
   handler_t (*handler)(void *srv , void *ctx , int revents ) ;
   void *context ;
};
typedef struct __anonstruct_fdevent_revent_158 fdevent_revent;
struct __anonstruct_fdevent_revents_159 {
   fdevent_revent **ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_fdevent_revents_159 fdevent_revents;
struct _fdnode {
   handler_t (*handler)(void *srv , void *ctx , int revents ) ;
   void *ctx ;
   int fd ;
   struct _fdnode *prev ;
   struct _fdnode *next ;
};
typedef struct _fdnode fdnode;
struct __anonstruct_buffer_int_160 {
   int *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_int_160 buffer_int;
struct fdevents {
   fdevent_handler_t type ;
   fdnode **fdarray ;
   size_t maxfds ;
   int in_sigio ;
   int signum ;
   sigset_t sigset ;
   siginfo_t siginfo ;
   bitset *sigbset ;
   int epoll_fd ;
   struct epoll_event *epoll_events ;
   struct pollfd *pollfds ;
   size_t size ;
   size_t used ;
   buffer_int unused ;
   fd_set select_read ;
   fd_set select_write ;
   fd_set select_error ;
   fd_set select_set_read ;
   fd_set select_set_write ;
   fd_set select_set_error ;
   int select_max_fd ;
   int (*reset)(struct fdevents *ev ) ;
   void (*free)(struct fdevents *ev ) ;
   int (*event_add)(struct fdevents *ev , iosocket *sock , int events ) ;
   int (*event_del)(struct fdevents *ev , iosocket *sock ) ;
   int (*get_revents)(struct fdevents *ev , size_t event_count ,
                      fdevent_revents *revents ) ;
   int (*poll)(struct fdevents *ev , int timeout_ms ) ;
   int (*fcntl_set)(struct fdevents *ev , int fd ) ;
};
typedef struct fdevents fdevents;
typedef __socklen_t socklen_t;
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
enum __anonenum_161 {
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
enum __anonenum_162 {
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
enum __anonenum_163 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};
enum __anonenum_164 {
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
enum __anonenum_165 {
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
union __anonunion___in6_u_166 {
   uint8_t __u6_addr8[16] ;
   uint16_t __u6_addr16[8] ;
   uint32_t __u6_addr32[4] ;
};
struct in6_addr {
   union __anonunion___in6_u_166 __in6_u ;
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
struct tcphdr {
   u_int16_t source ;
   u_int16_t dest ;
   u_int32_t seq ;
   u_int32_t ack_seq ;
   u_int16_t res1 : 4 ;
   u_int16_t doff : 4 ;
   u_int16_t fin : 1 ;
   u_int16_t syn : 1 ;
   u_int16_t rst : 1 ;
   u_int16_t psh : 1 ;
   u_int16_t ack : 1 ;
   u_int16_t urg : 1 ;
   u_int16_t res2 : 2 ;
   u_int16_t window ;
   u_int16_t check ;
   u_int16_t urg_ptr ;
};
enum __anonenum_167 {
    TCP_ESTABLISHED = 1,
    TCP_SYN_SENT = 2,
    TCP_SYN_RECV = 3,
    TCP_FIN_WAIT1 = 4,
    TCP_FIN_WAIT2 = 5,
    TCP_TIME_WAIT = 6,
    TCP_CLOSE = 7,
    TCP_CLOSE_WAIT = 8,
    TCP_LAST_ACK = 9,
    TCP_LISTEN = 10,
    TCP_CLOSING = 11
} ;
enum tcp_ca_state {
    TCP_CA_Open = 0,
    TCP_CA_Disorder = 1,
    TCP_CA_CWR = 2,
    TCP_CA_Recovery = 3,
    TCP_CA_Loss = 4
} ;
struct tcp_info {
   u_int8_t tcpi_state ;
   u_int8_t tcpi_ca_state ;
   u_int8_t tcpi_retransmits ;
   u_int8_t tcpi_probes ;
   u_int8_t tcpi_backoff ;
   u_int8_t tcpi_options ;
   u_int8_t tcpi_snd_wscale : 4 ;
   u_int8_t tcpi_rcv_wscale : 4 ;
   u_int32_t tcpi_rto ;
   u_int32_t tcpi_ato ;
   u_int32_t tcpi_snd_mss ;
   u_int32_t tcpi_rcv_mss ;
   u_int32_t tcpi_unacked ;
   u_int32_t tcpi_sacked ;
   u_int32_t tcpi_lost ;
   u_int32_t tcpi_retrans ;
   u_int32_t tcpi_fackets ;
   u_int32_t tcpi_last_data_sent ;
   u_int32_t tcpi_last_ack_sent ;
   u_int32_t tcpi_last_data_recv ;
   u_int32_t tcpi_last_ack_recv ;
   u_int32_t tcpi_pmtu ;
   u_int32_t tcpi_rcv_ssthresh ;
   u_int32_t tcpi_rtt ;
   u_int32_t tcpi_rttvar ;
   u_int32_t tcpi_snd_ssthresh ;
   u_int32_t tcpi_snd_cwnd ;
   u_int32_t tcpi_advmss ;
   u_int32_t tcpi_reordering ;
   u_int32_t tcpi_rcv_rtt ;
   u_int32_t tcpi_rcv_space ;
   u_int32_t tcpi_total_retrans ;
};
struct tcp_md5sig {
   struct sockaddr_storage tcpm_addr ;
   u_int16_t __tcpm_pad1 ;
   u_int16_t tcpm_keylen ;
   u_int32_t __tcpm_pad2 ;
   u_int8_t tcpm_key[80] ;
};
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
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
union __anonunion_sock_addr_168 {
   struct sockaddr_in6 ipv6 ;
   struct sockaddr_in ipv4 ;
   struct sockaddr_un un ;
   struct sockaddr plain ;
};
typedef union __anonunion_sock_addr_168 sock_addr;
enum __anonenum_parse_status_t_169 {
    PARSE_UNSET = 0,
    PARSE_SUCCESS = 1,
    PARSE_ERROR = 2,
    PARSE_NEED_MORE = 3
} ;
typedef enum __anonenum_parse_status_t_169 parse_status_t;
struct __anonstruct_http_req_170 {
   int protocol ;
   int method ;
   buffer *uri_raw ;
   array *headers ;
};
typedef struct __anonstruct_http_req_170 http_req;
struct __anonstruct_http_req_ctx_t_171 {
   int ok ;
   buffer *errmsg ;
   http_req *req ;
   buffer_pool *unused_buffers ;
};
typedef struct __anonstruct_http_req_ctx_t_171 http_req_ctx_t;
struct timespec;
struct sockaddr;
struct iovec;
struct io_context;
typedef struct io_context *io_context_t;
enum io_iocb_cmd {
    IO_CMD_PREAD = 0,
    IO_CMD_PWRITE = 1,
    IO_CMD_FSYNC = 2,
    IO_CMD_FDSYNC = 3,
    IO_CMD_POLL = 5,
    IO_CMD_NOOP = 6,
    IO_CMD_PREADV = 7,
    IO_CMD_PWRITEV = 8
} ;
typedef enum io_iocb_cmd io_iocb_cmd_t;
struct io_iocb_poll {
   int events ;
   unsigned int __pad1 ;
};
struct io_iocb_sockaddr {
   struct sockaddr *addr ;
   int len ;
};
struct io_iocb_common {
   void *buf ;
   unsigned int __pad1 ;
   unsigned long nbytes ;
   unsigned int __pad2 ;
   long long offset ;
   long long __pad3 ;
   unsigned int flags ;
   unsigned int resfd ;
};
struct io_iocb_vector {
   struct iovec  const  *vec ;
   int nr ;
   long long offset ;
};
union __anonunion_u_172 {
   struct io_iocb_common c ;
   struct io_iocb_vector v ;
   struct io_iocb_poll poll ;
   struct io_iocb_sockaddr saddr ;
};
struct iocb {
   void *data ;
   unsigned int __pad1 ;
   unsigned int key ;
   unsigned int __pad2 ;
   short aio_lio_opcode ;
   short aio_reqprio ;
   int aio_fildes ;
   union __anonunion_u_172 u ;
};
struct io_event {
   void *data ;
   unsigned int __pad1 ;
   struct iocb *obj ;
   unsigned int __pad2 ;
   unsigned long res ;
   unsigned int __pad3 ;
   unsigned long res2 ;
   unsigned int __pad4 ;
};
typedef void (*io_callback_t)(io_context_t ctx , struct iocb *iocb , long res ,
                              long res2 );
enum __anonenum_connection_time_field_t_173 {
    TIME_CONNECTION_ACCEPT = 0,
    TIME_REQUEST_START = 1,
    TIME_BACKEND_CONNECT = 2,
    TIME_BACKEND_SEND_HEADER_START = 3,
    TIME_BACKEND_SEND_HEADER_END = 4,
    TIME_BACKEND_SEND_CONTENT_START = 5,
    TIME_BACKEND_SEND_CONTENT_END = 6,
    TIME_BACKEND_RECV_HEADER_START = 7,
    TIME_BACKEND_RECV_HEADER_END = 8,
    TIME_BACKEND_RECV_CONTENT_START = 9,
    TIME_BACKEND_RECV_CONTENT_END = 10,
    TIME_BACKEND_DISCONNECT = 11,
    TIME_SEND_HEADER_START = 12,
    TIME_SEND_HEADER_END = 13,
    TIME_SEND_CONTENT_START = 14,
    TIME_SEND_ASYNC_READ_QUEUED = 15,
    TIME_SEND_ASYNC_READ_START = 16,
    TIME_SEND_ASYNC_READ_END = 17,
    TIME_SEND_ASYNC_READ_END_QUEUED = 18,
    TIME_SEND_WRITE_START = 19,
    TIME_SEND_WRITE_END = 20,
    TIME_SEND_CONTENT_END = 21,
    TIME_REQUEST_END = 22,
    TIME_CONNECTION_CLOSE = 23,
    TIME_LAST_ELEMENT = 24
} ;
typedef enum __anonenum_connection_time_field_t_173 connection_time_field_t;
enum __anonenum_config_values_type_t_174 {
    T_CONFIG_UNSET = 0,
    T_CONFIG_STRING = 1,
    T_CONFIG_SHORT = 2,
    T_CONFIG_INT = 3,
    T_CONFIG_BOOLEAN = 4,
    T_CONFIG_ARRAY = 5,
    T_CONFIG_LOCAL = 6,
    T_CONFIG_DEPRECATED = 7,
    T_CONFIG_UNSUPPORTED = 8
} ;
typedef enum __anonenum_config_values_type_t_174 config_values_type_t;
enum __anonenum_config_scope_type_t_175 {
    T_CONFIG_SCOPE_UNSET = 0,
    T_CONFIG_SCOPE_SERVER = 1,
    T_CONFIG_SCOPE_CONNECTION = 2
} ;
typedef enum __anonenum_config_scope_type_t_175 config_scope_type_t;
struct __anonstruct_config_values_t_176 {
   char const   *key ;
   void *destination ;
   config_values_type_t type ;
   config_scope_type_t scope ;
};
typedef struct __anonstruct_config_values_t_176 config_values_t;
enum __anonenum_connection_type_177 {
    DIRECT = 0,
    EXTERNAL = 1
} ;
typedef enum __anonenum_connection_type_177 connection_type;
struct __anonstruct_request_handler_178 {
   char *key ;
   connection_type type ;
   char *value ;
};
typedef struct __anonstruct_request_handler_178 request_handler;
struct __anonstruct_fcgi_connections_179 {
   char *key ;
   char *host ;
   unsigned short port ;
   int used ;
   short factor ;
};
typedef struct __anonstruct_fcgi_connections_179 fcgi_connections;
struct __anonstruct_request_180 {
   buffer *request ;
   buffer *uri ;
   buffer *orig_uri ;
   http_method_t http_method ;
   http_version_t http_version ;
   buffer *http_host ;
   array *headers ;
   off_t content_length ;
   int accept_encoding ;
   buffer *pathinfo ;
};
typedef struct __anonstruct_request_180 request;
enum __anonenum_transfer_encoding_182 {
    HTTP_TRANSFER_ENCODING_IDENTITY = 0,
    HTTP_TRANSFER_ENCODING_CHUNKED = 1
} ;
struct __anonstruct_response_181 {
   off_t content_length ;
   int keep_alive ;
   array *headers ;
   enum __anonenum_transfer_encoding_182 transfer_encoding ;
};
typedef struct __anonstruct_response_181 response;
struct __anonstruct_request_uri_183 {
   buffer *scheme ;
   buffer *authority ;
   buffer *path ;
   buffer *path_raw ;
   buffer *query ;
};
typedef struct __anonstruct_request_uri_183 request_uri;
struct __anonstruct_physical_184 {
   buffer *path ;
   buffer *basedir ;
   buffer *doc_root ;
   buffer *rel_path ;
   buffer *etag ;
};
typedef struct __anonstruct_physical_184 physical;
enum __anonenum_state_186 {
    STAT_CACHE_ENTRY_UNSET = 0,
    STAT_CACHE_ENTRY_ASYNC_STAT = 1,
    STAT_CACHE_ENTRY_STAT_FINISHED = 2
} ;
struct __anonstruct_stat_cache_entry_185 {
   buffer *name ;
   buffer *etag ;
   struct stat st ;
   time_t stat_ts ;
   enum __anonenum_state_186 state ;
   char is_symlink ;
   buffer *content_type ;
};
typedef struct __anonstruct_stat_cache_entry_185 stat_cache_entry;
struct __anonstruct_stat_cache_187 {
   GHashTable *files ;
   GHashTable *dirs ;
   buffer *dir_name ;
   buffer *hash_key ;
};
typedef struct __anonstruct_stat_cache_187 stat_cache;
struct __anonstruct_specific_config_188 {
   array *mimetypes ;
   buffer *document_root ;
   buffer *server_name ;
   buffer *error_handler ;
   buffer *server_tag ;
   buffer *dirlist_encoding ;
   buffer *errorfile_prefix ;
   unsigned short max_keep_alive_requests ;
   unsigned short max_keep_alive_idle ;
   unsigned short max_read_idle ;
   unsigned short max_write_idle ;
   unsigned short max_connection_idle ;
   unsigned short use_xattr ;
   unsigned short follow_symlink ;
   unsigned short range_requests ;
   unsigned short log_file_not_found ;
   unsigned short log_request_header ;
   unsigned short log_request_handling ;
   unsigned short log_response_header ;
   unsigned short log_condition_handling ;
   unsigned short log_condition_cache_handling ;
   buffer *ssl_pemfile ;
   buffer *ssl_ca_file ;
   unsigned short use_ipv6 ;
   unsigned short is_ssl ;
   unsigned short allow_http11 ;
   unsigned short force_lowercase_filenames ;
   unsigned int max_request_size ;
   unsigned short kbytes_per_second ;
   unsigned short global_kbytes_per_second ;
   off_t global_bytes_per_second_cnt ;
   off_t *global_bytes_per_second_cnt_ptr ;
   SSL_CTX *ssl_ctx ;
};
typedef struct __anonstruct_specific_config_188 specific_config;
enum __anonenum_connection_state_t_189 {
    CON_STATE_CONNECT = 0,
    CON_STATE_REQUEST_START = 1,
    CON_STATE_READ_REQUEST_HEADER = 2,
    CON_STATE_VALIDATE_REQUEST_HEADER = 3,
    CON_STATE_HANDLE_REQUEST_HEADER = 4,
    CON_STATE_READ_REQUEST_CONTENT = 5,
    CON_STATE_HANDLE_RESPONSE_HEADER = 6,
    CON_STATE_WRITE_RESPONSE_HEADER = 7,
    CON_STATE_WRITE_RESPONSE_CONTENT = 8,
    CON_STATE_RESPONSE_END = 9,
    CON_STATE_ERROR = 10,
    CON_STATE_CLOSE = 11
} ;
typedef enum __anonenum_connection_state_t_189 connection_state_t;
enum __anonenum_cond_result_t_190 {
    COND_RESULT_UNSET = 0,
    COND_RESULT_FALSE = 1,
    COND_RESULT_TRUE = 2
} ;
typedef enum __anonenum_cond_result_t_190 cond_result_t;
struct __anonstruct_cond_cache_t_191 {
   cond_result_t result ;
   int patterncount ;
   int matches[30] ;
   buffer *comp_value ;
};
typedef struct __anonstruct_cond_cache_t_191 cond_cache_t;
struct __anonstruct_connection_192 {
   connection_state_t state ;
   time_t read_idle_ts ;
   time_t close_timeout_ts ;
   time_t write_request_ts ;
   time_t connection_start ;
   time_t request_start ;
   struct timeval start_tv ;
   size_t request_count ;
   size_t loops_per_request ;
   iosocket *sock ;
   int ndx ;
   int is_readable ;
   int is_writable ;
   int keep_alive ;
   int file_started ;
   chunkqueue *send ;
   chunkqueue *recv ;
   filter_chain *send_filters ;
   chunkqueue *send_raw ;
   chunkqueue *recv_raw ;
   int traffic_limit_reached ;
   off_t bytes_written ;
   off_t bytes_written_cur_second ;
   off_t bytes_read ;
   off_t bytes_header ;
   int http_status ;
   sock_addr dst_addr ;
   buffer *dst_addr_buf ;
   buffer *parse_request ;
   http_req *http_req ;
   request request ;
   request_uri uri ;
   physical physical ;
   response response ;
   size_t header_len ;
   buffer *authed_user ;
   array *environment ;
   int got_response ;
   int in_joblist ;
   connection_type mode ;
   void **plugin_ctx ;
   specific_config conf ;
   cond_cache_t *cond_cache ;
   buffer *server_name ;
   buffer *error_handler ;
   int error_handler_saved_status ;
   int in_error_handler ;
   void *srv_socket ;
   GTimeVal timestamps[24] ;
   int conditional_is_valid[11] ;
};
typedef struct __anonstruct_connection_192 connection;
struct __anonstruct_connections_193 {
   connection **ptr ;
   size_t size ;
   size_t used ;
};
typedef struct __anonstruct_connections_193 connections;
union __anonunion_addr_195 {
   struct in6_addr ipv6 ;
   struct in_addr ipv4 ;
};
struct __anonstruct_inet_ntop_cache_type_194 {
   int family ;
   union __anonunion_addr_195 addr ;
   char b2[47] ;
   time_t ts ;
};
typedef struct __anonstruct_inet_ntop_cache_type_194 inet_ntop_cache_type;
struct __anonstruct_realpath_cache_type_196 {
   buffer *uri ;
   time_t mtime ;
   int http_status ;
};
typedef struct __anonstruct_realpath_cache_type_196 realpath_cache_type;
struct __anonstruct_mtime_cache_type_197 {
   time_t mtime ;
   buffer *str ;
};
typedef struct __anonstruct_mtime_cache_type_197 mtime_cache_type;
struct __anonstruct_buffer_plugin_198 {
   void *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_plugin_198 buffer_plugin;
enum __anonenum_network_status_t_199 {
    NETWORK_STATUS_UNSET = 0,
    NETWORK_STATUS_SUCCESS = 1,
    NETWORK_STATUS_FATAL_ERROR = 2,
    NETWORK_STATUS_CONNECTION_CLOSE = 3,
    NETWORK_STATUS_WAIT_FOR_EVENT = 4,
    NETWORK_STATUS_WAIT_FOR_AIO_EVENT = 5,
    NETWORK_STATUS_WAIT_FOR_FD = 6,
    NETWORK_STATUS_INTERRUPTED = 7
} ;
typedef enum __anonenum_network_status_t_199 network_status_t;
enum __anonenum_stat_cache_engine_201 {
    STAT_CACHE_ENGINE_UNSET = 0,
    STAT_CACHE_ENGINE_NONE = 1,
    STAT_CACHE_ENGINE_SIMPLE = 2,
    STAT_CACHE_ENGINE_FAM = 3,
    STAT_CACHE_ENGINE_INOTIFY = 4
} ;
struct __anonstruct_server_config_200 {
   unsigned short port ;
   buffer *bindhost ;
   unsigned short dont_daemonize ;
   unsigned short daemonize_on_shutdown ;
   buffer *changeroot ;
   buffer *username ;
   buffer *groupname ;
   buffer *pid_file ;
   buffer *event_handler ;
   buffer *modules_dir ;
   buffer *network_backend ;
   array *modules ;
   array *upload_tempdirs ;
   unsigned short use_noatime ;
   unsigned short max_worker ;
   unsigned short max_fds ;
   unsigned short max_conns ;
   unsigned int max_request_size ;
   unsigned short log_request_header_on_error ;
   unsigned short log_state_handling ;
   unsigned short log_timing ;
   enum __anonenum_stat_cache_engine_201 stat_cache_engine ;
   unsigned short enable_cores ;
   buffer *errorlog_file ;
   unsigned short errorlog_use_syslog ;
   unsigned short max_stat_threads ;
   unsigned short max_read_threads ;
};
typedef struct __anonstruct_server_config_200 server_config;
enum __anonenum_network_backend_t_202 {
    NETWORK_BACKEND_UNSET = 0,
    NETWORK_BACKEND_WRITE = 1,
    NETWORK_BACKEND_WRITEV = 2,
    NETWORK_BACKEND_LINUX_SENDFILE = 3,
    NETWORK_BACKEND_LINUX_AIO_SENDFILE = 4,
    NETWORK_BACKEND_POSIX_AIO = 5,
    NETWORK_BACKEND_GTHREAD_AIO = 6,
    NETWORK_BACKEND_GTHREAD_SENDFILE = 7,
    NETWORK_BACKEND_FREEBSD_SENDFILE = 8,
    NETWORK_BACKEND_SOLARIS_SENDFILEV = 9,
    NETWORK_BACKEND_WIN32_SEND = 10,
    NETWORK_BACKEND_WIN32_TRANSMITFILE = 11
} ;
typedef enum __anonenum_network_backend_t_202 network_backend_t;
struct __anonstruct_server_socket_203 {
   sock_addr addr ;
   iosocket *sock ;
   buffer *ssl_pemfile ;
   buffer *ssl_ca_file ;
   unsigned short use_ipv6 ;
   unsigned short is_ssl ;
   buffer *srv_token ;
   SSL_CTX *ssl_ctx ;
};
typedef struct __anonstruct_server_socket_203 server_socket;
struct __anonstruct_server_socket_array_204 {
   server_socket **ptr ;
   size_t size ;
   size_t used ;
};
typedef struct __anonstruct_server_socket_array_204 server_socket_array;
struct server {
   server_socket_array srv_sockets ;
   fdevents *ev ;
   fdevents *ev_ins ;
   buffer_plugin plugins ;
   void *plugin_slots ;
   int con_opened ;
   int con_read ;
   int con_written ;
   int con_closed ;
   int ssl_is_init ;
   int max_fds ;
   int sockets_disabled ;
   size_t max_conns ;
   buffer *parse_full_path ;
   buffer *response_header ;
   buffer *response_range ;
   buffer *tmp_buf ;
   buffer *tmp_chunk_len ;
   buffer *empty_string ;
   buffer *cond_check_buf ;
   inet_ntop_cache_type inet_ntop_cache[4] ;
   mtime_cache_type mtime_cache[16] ;
   array *split_vals ;
   time_t cur_ts ;
   time_t last_generated_date_ts ;
   time_t last_generated_debug_ts ;
   time_t startup_ts ;
   buffer *ts_debug_str ;
   buffer *ts_date_str ;
   array *config ;
   array *config_touched ;
   array *config_context ;
   specific_config **config_storage ;
   server_config srvconf ;
   unsigned short config_deprecated ;
   unsigned short config_unsupported ;
   connections *conns ;
   connections *joblist ;
   connections *joblist_prev ;
   connections *fdwaitqueue ;
   stat_cache *stat_cache ;
   fdevent_handler_t event_handler ;
   network_status_t (*network_backend_write)(struct server *srv ,
                                             connection *con , iosocket *sock ,
                                             chunkqueue *cq ) ;
   network_status_t (*network_backend_read)(struct server *srv ,
                                            connection *con , iosocket *sock ,
                                            chunkqueue *cq ) ;
   network_status_t (*network_ssl_backend_write)(struct server *srv ,
                                                 connection *con ,
                                                 iosocket *sock ,
                                                 chunkqueue *cq ) ;
   network_status_t (*network_ssl_backend_read)(struct server *srv ,
                                                connection *con ,
                                                iosocket *sock , chunkqueue *cq ) ;
   uid_t uid ;
   gid_t gid ;
   io_context_t linux_io_ctx ;
   struct iocb *linux_io_iocbs ;
   GAsyncQueue *stat_queue ;
   GAsyncQueue *joblist_queue ;
   GAsyncQueue *aio_write_queue ;
   network_backend_t network_backend ;
   int is_shutdown ;
};
typedef struct server server;
enum __anonenum_config_var_t_205 {
    CONFIG_UNSET = 0,
    CONFIG_DOCUMENT_ROOT = 1
} ;
typedef enum __anonenum_config_var_t_205 config_var_t;
struct __anonstruct_config_t_206 {
   server *srv ;
   int ok ;
   array *all_configs ;
   buffer_ptr *configs_stack ;
   data_config *current ;
   buffer *basedir ;
};
typedef struct __anonstruct_config_t_206 config_t;
union __anonunion_YYMINORTYPE_207 {
   buffer *yy0 ;
   config_cond_t yy27 ;
   array *yy40 ;
   data_unset *yy41 ;
   buffer *yy43 ;
   data_config *yy78 ;
   int yy95 ;
};
typedef union __anonunion_YYMINORTYPE_207 YYMINORTYPE;
struct yyStackEntry {
   int stateno ;
   int major ;
   YYMINORTYPE minor ;
};
typedef struct yyStackEntry yyStackEntry;
struct yyParser {
   int yyidx ;
   int yyerrcnt ;
   config_t *ctx ;
   yyStackEntry yystack[100] ;
};
typedef struct yyParser yyParser;
struct __anonstruct_yyRuleInfo_208 {
   unsigned char lhs ;
   unsigned char nrhs ;
};
struct __anonstruct_comps_209 {
   comp_key_t comp ;
   char *comp_key ;
   size_t len ;
};
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
__inline extern int __attribute__((__gnu_inline__))  vprintf(char const   * __restrict  __fmt ,
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
__inline extern int __attribute__((__gnu_inline__))  getchar(void) ;
__inline extern int __attribute__((__gnu_inline__))  getc_unlocked(FILE *__fp ) ;
__inline extern int __attribute__((__gnu_inline__))  getchar_unlocked(void) ;
__inline extern int __attribute__((__gnu_inline__))  fgetc_unlocked(FILE *__fp ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putchar(int __c ) ;
__inline extern int __attribute__((__gnu_inline__))  fputc_unlocked(int __c ,
                                                                    FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putc_unlocked(int __c ,
                                                                   FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putchar_unlocked(int __c ) ;
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
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) ;
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
__inline extern int __attribute__((__gnu_inline__))  vprintf(char const   * __restrict  __fmt ,
                                                             __gnuc_va_list __arg ) 
{ 
  int tmp ;

  {
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  getchar(void) 
{ 
  int tmp ;

  {
  tmp = _IO_getc(stdin);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  fgetc_unlocked(FILE *__fp ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  getc_unlocked(FILE *__fp ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  getchar_unlocked(void) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  putchar(int __c ) 
{ 
  int tmp ;

  {
  tmp = _IO_putc(__c, stdout);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  fputc_unlocked(int __c ,
                                                                    FILE *__stream ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern int __attribute__((__gnu_inline__))  putc_unlocked(int __c ,
                                                                   FILE *__stream ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern int __attribute__((__gnu_inline__))  putchar_unlocked(int __c ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) 
{ 


  {
  return ((int __attribute__((__gnu_inline__))  )((__stream->_flags & 16) != 0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) 
{ 


  {
  return ((int __attribute__((__gnu_inline__))  )((__stream->_flags & 32) != 0));
}
}
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
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c1(char const   *__s ,
                                                                     int __reject ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c1(char const   *__s ,
                                                                     int __reject ) 
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
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c2(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c2(char const   *__s ,
                                                                     int __reject1 ,
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
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c3(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ,
                                                                     int __reject3 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c3(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ,
                                                                     int __reject3 ) 
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
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c1(char const   *__s ,
                                                                    int __accept ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c1(char const   *__s ,
                                                                    int __accept ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while ((int const   )*(__s + __result) == (int const   )__accept) {
    __result ++;
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c2(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c2(char const   *__s ,
                                                                    int __accept1 ,
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
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) 
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
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c2(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c2(char const   *__s ,
                                                                    int __accept1 ,
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
  return ((char __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) 
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
  return ((char __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strtok_r_1c(char *__s ,
                                                                     char __sep ,
                                                                     char **__nextp ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strtok_r_1c(char *__s ,
                                                                     char __sep ,
                                                                     char **__nextp ) 
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
  return ((char __attribute__((__gnu_inline__))  *)__result);
}
}
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_1c(char **__s ,
                                                                   char __reject ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_1c(char **__s ,
                                                                   char __reject ) 
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
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_2c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_2c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ) 
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
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_3c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ,
                                                                   char __reject3 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_3c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ,
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
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
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
__inline extern int __attribute__((__gnu_inline__))  __sigismember(__sigset_t const   *__set ,
                                                                   int __sig ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigaddset(__sigset_t *__set ,
                                                                 int __sig ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigdelset(__sigset_t *__set ,
                                                                 int __sig ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigismember(__sigset_t const   *__set ,
                                                                   int __sig ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  __sigaddset(__sigset_t *__set ,
                                                                 int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] |= __mask;
  return ((int __attribute__((__gnu_inline__))  )0);
}
}
__inline extern int __attribute__((__gnu_inline__))  __sigdelset(__sigset_t *__set ,
                                                                 int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] &= ~ __mask;
  return ((int __attribute__((__gnu_inline__))  )0);
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
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_major(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long __attribute__((__gnu_inline__))  gnu_dev_makedev(unsigned int __major ,
                                                                                                                  unsigned int __minor ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_major(unsigned long long __dev ) ;
__inline extern unsigned int __attribute__((__gnu_inline__))  gnu_dev_major(unsigned long long __dev ) 
{ 


  {
  return ((unsigned int __attribute__((__gnu_inline__))  )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) ;
__inline extern unsigned int __attribute__((__gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) 
{ 


  {
  return ((unsigned int __attribute__((__gnu_inline__))  )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long __attribute__((__gnu_inline__))  gnu_dev_makedev(unsigned int __major ,
                                                                                                                  unsigned int __minor ) ;
__inline extern unsigned long long __attribute__((__gnu_inline__))  gnu_dev_makedev(unsigned int __major ,
                                                                                    unsigned int __minor ) 
{ 


  {
  return ((unsigned long long __attribute__((__gnu_inline__))  )(((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32)));
}
}
extern  __attribute__((__nothrow__)) ssize_t sendfile(int __out_fd ,
                                                      int __in_fd ,
                                                      __off64_t *__offset ,
                                                      size_t __count )  __asm__("sendfile64")  ;
extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t preadv(int __fd , struct iovec  const  *__iovec , int __count ,
                      __off64_t __offset )  __asm__("preadv64")  ;
extern ssize_t pwritev(int __fd , struct iovec  const  *__iovec , int __count ,
                       __off64_t __offset )  __asm__("pwritev64")  ;
extern  __attribute__((__nothrow__)) void *mmap(void *__addr , size_t __len ,
                                                int __prot , int __flags ,
                                                int __fd , __off64_t __offset )  __asm__("mmap64")  ;
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
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                                                             struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                                                            struct stat *__statbuf )  __asm__("fstat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                                                                char const   * __restrict  __filename ,
                                                                                                                                struct stat * __restrict  __statbuf ,
                                                                                                                                int __flag )  __asm__("fstatat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
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
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                                                            __mode_t __mode ,
                                                                                                                            __dev_t __dev ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) mknodat)(int __fd ,
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
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                                                             struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                               struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __xstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                                                              struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                                struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __lxstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                                                            struct stat *__statbuf )  __asm__("fstat64")  ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                              struct stat *__statbuf ) 
{ 
  int tmp ;

  {
  tmp = __fxstat(3, __fd, __statbuf);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                                                                char const   * __restrict  __filename ,
                                                                                                                                struct stat * __restrict  __statbuf ,
                                                                                                                                int __flag )  __asm__("fstatat64")  ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                                  char const   * __restrict  __filename ,
                                                                                                  struct stat * __restrict  __statbuf ,
                                                                                                  int __flag ) 
{ 
  int tmp ;

  {
  tmp = __fxstatat(3, __fd, (char const   *)__filename,
                   (struct stat *)__statbuf, __flag);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                                                            __mode_t __mode ,
                                                                                                                            __dev_t __dev ) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                              __mode_t __mode ,
                                                                                              __dev_t __dev ) 
{ 
  int tmp ;

  {
  tmp = __xmknod(1, __path, __mode, & __dev);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) mknodat)(int __fd ,
                                                                                                                              char const   *__path ,
                                                                                                                              __mode_t __mode ,
                                                                                                                              __dev_t __dev ) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) mknodat)(int __fd ,
                                                                                                char const   *__path ,
                                                                                                __mode_t __mode ,
                                                                                                __dev_t __dev ) 
{ 
  int tmp ;

  {
  tmp = __xmknodat(1, __fd, __path, __mode, & __dev);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer ,
                                                       intmax_t __denom )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  strtoimax(char const   * __restrict  nptr ,
                                                                                                  char ** __restrict  endptr ,
                                                                                                  int base ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  strtoumax(char const   * __restrict  nptr ,
                                                                                                   char ** __restrict  endptr ,
                                                                                                   int base ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                                                  __gwchar_t ** __restrict  endptr ,
                                                                                                  int base ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                                                   __gwchar_t ** __restrict  endptr ,
                                                                                                   int base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) __strtoll_internal)(char const   * __restrict  __nptr ,
                                                                                                     char ** __restrict  __endptr ,
                                                                                                     int __base ,
                                                                                                     int __group ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  strtoimax(char const   * __restrict  nptr ,
                                                                                                  char ** __restrict  endptr ,
                                                                                                  int base ) ;
__inline extern intmax_t __attribute__((__gnu_inline__))  strtoimax(char const   * __restrict  nptr ,
                                                                    char ** __restrict  endptr ,
                                                                    int base ) 
{ 
  long long tmp ;

  {
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  return ((intmax_t __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) __strtoull_internal)(char const   * __restrict  __nptr ,
                                                                                                               char ** __restrict  __endptr ,
                                                                                                               int __base ,
                                                                                                               int __group ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  strtoumax(char const   * __restrict  nptr ,
                                                                                                   char ** __restrict  endptr ,
                                                                                                   int base ) ;
__inline extern uintmax_t __attribute__((__gnu_inline__))  strtoumax(char const   * __restrict  nptr ,
                                                                     char ** __restrict  endptr ,
                                                                     int base ) 
{ 
  unsigned long long tmp ;

  {
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  return ((uintmax_t __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) __wcstoll_internal)(__gwchar_t const   * __restrict  __nptr ,
                                                                                                     __gwchar_t ** __restrict  __endptr ,
                                                                                                     int __base ,
                                                                                                     int __group ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                                                  __gwchar_t ** __restrict  endptr ,
                                                                                                  int base ) ;
__inline extern intmax_t __attribute__((__gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                    __gwchar_t ** __restrict  endptr ,
                                                                    int base ) 
{ 
  long long tmp ;

  {
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  return ((intmax_t __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) __wcstoull_internal)(__gwchar_t const   * __restrict  __nptr ,
                                                                                                               __gwchar_t ** __restrict  __endptr ,
                                                                                                               int __base ,
                                                                                                               int __group ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                                                   __gwchar_t ** __restrict  endptr ,
                                                                                                   int base ) ;
__inline extern uintmax_t __attribute__((__gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                     __gwchar_t ** __restrict  endptr ,
                                                                     int base ) 
{ 
  unsigned long long tmp ;

  {
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  return ((uintmax_t __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
__inline extern  __attribute__((__nothrow__)) double __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
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
__inline extern  __attribute__((__nothrow__)) double __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern double __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr ) 
{ 
  double tmp ;

  {
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  return ((double __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((int __attribute__((__gnu_inline__))  )((int )tmp));
}
}
__inline extern  __attribute__((__nothrow__)) long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((long __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr ) 
{ 
  long long tmp ;

  {
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((long long __attribute__((__gnu_inline__))  )tmp);
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
extern buffer_ptr *buffer_ptr_init(void (*freer)(void *p ) ) ;
extern void buffer_ptr_free(buffer_ptr *b ) ;
extern void buffer_ptr_clear(buffer_ptr *b ) ;
extern void buffer_ptr_append(buffer_ptr *b , void *item ) ;
extern void *buffer_ptr_pop(buffer_ptr *b ) ;
extern void *buffer_ptr_top(buffer_ptr *b ) ;
extern buffer_array *buffer_array_init(void) ;
extern void buffer_array_free(buffer_array *b ) ;
extern void buffer_array_reset(buffer_array *b ) ;
extern buffer *buffer_array_append_get_buffer(buffer_array *b ) ;
extern buffer *buffer_init(void) ;
extern buffer *buffer_init_buffer(buffer *b ) ;
extern buffer *buffer_init_string(char const   *str ) ;
extern void buffer_free(buffer *b ) ;
extern void buffer_reset(buffer *b ) ;
extern int buffer_prepare_copy(buffer *b , size_t size ) ;
extern int buffer_prepare_append(buffer *b , size_t size ) ;
extern int buffer_copy_string(buffer *b , char const   *s ) ;
extern int buffer_copy_string_len(buffer *b , char const   *s , size_t s_len ) ;
extern int buffer_copy_string_buffer(buffer *b , buffer const   *src ) ;
extern int buffer_copy_string_hex(buffer *b , char const   *in , size_t in_len ) ;
extern int buffer_copy_long(buffer *b , long val ) ;
extern int buffer_copy_memory(buffer *b , char const   *s , size_t s_len ) ;
extern int buffer_append_string(buffer *b , char const   *s ) ;
extern int buffer_append_string_len(buffer *b , char const   *s , size_t s_len ) ;
extern int buffer_append_string_buffer(buffer *b , buffer const   *src ) ;
extern int buffer_append_string_lfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;
extern int buffer_append_string_rfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;
extern int buffer_append_long_hex(buffer *b , unsigned long len ) ;
extern int buffer_append_long(buffer *b , long val ) ;
extern int buffer_copy_off_t(buffer *b , off_t val ) ;
extern int buffer_append_off_t(buffer *b , off_t val ) ;
extern int buffer_append_memory(buffer *b , char const   *s , size_t s_len ) ;
extern char *buffer_search_string_len(buffer *b , char const   *needle ,
                                      size_t len ) ;
extern int buffer_is_empty(buffer *b ) ;
extern int buffer_is_equal(buffer *a , buffer *b ) ;
extern int buffer_is_equal_right_len(buffer *a , buffer *b , size_t len ) ;
extern int buffer_is_equal_string(buffer *a , char const   *s , size_t b_len ) ;
extern int buffer_caseless_compare(char const   *a , size_t a_len ,
                                   char const   *b , size_t b_len ) ;
extern int buffer_append_string_encoded(buffer *b , char const   *s ,
                                        size_t s_len ,
                                        buffer_encoding_t encoding ) ;
extern int buffer_urldecode_path(buffer *url ) ;
extern int buffer_urldecode_query(buffer *url ) ;
extern int buffer_path_simplify(buffer *dest , buffer *src ) ;
extern int buffer_to_lower(buffer *b ) ;
extern int buffer_to_upper(buffer *b ) ;
extern int ltostr(char *buf , long val ) ;
extern char hex2int(unsigned char c ) ;
extern char int2hex(char i ) ;
extern int light_isdigit(int c ) ;
extern int light_isxdigit(int c ) ;
extern int light_isalpha(int c ) ;
extern int light_isalnum(int c ) ;
extern int buffer_isdigit(buffer *b ) ;
extern int buffer_isxdigit(buffer *b ) ;
extern int buffer_isalpha(buffer *b ) ;
extern int buffer_isalnum(buffer *b ) ;
extern buffer_pool *buffer_pool_init() ;
extern void buffer_pool_free(buffer_pool * ) ;
extern buffer *buffer_pool_get(buffer_pool *bp ) ;
extern void buffer_pool_append(buffer_pool *bp , buffer * ) ;
extern void *(*pcre_malloc)(size_t  ) ;
extern void (*pcre_free)(void * ) ;
extern void *(*pcre_stack_malloc)(size_t  ) ;
extern void (*pcre_stack_free)(void * ) ;
extern int (*pcre_callout)(pcre_callout_block * ) ;
extern pcre *pcre_compile(char const   * , int  , char const   ** , int * ,
                          unsigned char const   * ) ;
extern pcre *pcre_compile2(char const   * , int  , int * , char const   ** ,
                           int * , unsigned char const   * ) ;
extern int pcre_config(int  , void * ) ;
extern int pcre_copy_named_substring(pcre const   * , char const   * , int * ,
                                     int  , char const   * , char * , int  ) ;
extern int pcre_copy_substring(char const   * , int * , int  , int  , char * ,
                               int  ) ;
extern int pcre_dfa_exec(pcre const   * , pcre_extra const   * ,
                         char const   * , int  , int  , int  , int * , int  ,
                         int * , int  ) ;
extern int pcre_exec(pcre const   * , pcre_extra const   * , char const   * ,
                     int  , int  , int  , int * , int  ) ;
extern void pcre_free_substring(char const   * ) ;
extern void pcre_free_substring_list(char const   ** ) ;
extern int pcre_fullinfo(pcre const   * , pcre_extra const   * , int  , void * ) ;
extern int pcre_get_named_substring(pcre const   * , char const   * , int * ,
                                    int  , char const   * , char const   ** ) ;
extern int pcre_get_stringnumber(pcre const   * , char const   * ) ;
extern int pcre_get_stringtable_entries(pcre const   * , char const   * ,
                                        char ** , char ** ) ;
extern int pcre_get_substring(char const   * , int * , int  , int  ,
                              char const   ** ) ;
extern int pcre_get_substring_list(char const   * , int * , int  ,
                                   char const   *** ) ;
extern int pcre_info(pcre const   * , int * , int * ) ;
extern unsigned char const   *pcre_maketables(void) ;
extern int pcre_refcount(pcre * , int  ) ;
extern pcre_extra *pcre_study(pcre const   * , int  , char const   ** ) ;
extern char const   *pcre_version(void) ;
extern data_count *data_count_init(void) ;
extern data_string *data_string_init(void) ;
extern data_string *data_response_init(void) ;
extern data_array *data_array_init(void) ;
extern data_config *data_config_init(void) ;
extern data_integer *data_integer_init(void) ;
extern array *array_init(void) ;
extern array *array_init_array(array *a ) ;
extern void array_free(array *a ) ;
extern void array_reset(array *a ) ;
extern int array_insert_unique(array *a , data_unset *str ) ;
extern data_unset *array_pop(array *a ) ;
extern int array_print(array *a , int depth ) ;
extern data_unset *array_get_unused_element(array *a , data_type_t t ) ;
extern data_unset *array_get_element(array *a , char const   *key ,
                                     size_t key_len ) ;
extern void array_set_key_value(array *hdrs , char const   *key ,
                                size_t key_len , char const   *value ,
                                size_t val_len ) ;
extern void array_append_key_value(array *hdrs , char const   *key ,
                                   size_t key_len , char const   *value ,
                                   size_t val_len ) ;
extern data_unset *array_replace(array *a , data_unset *du ) ;
extern int array_strcasecmp(char const   *a , size_t a_len , char const   *b ,
                            size_t b_len ) ;
extern void array_print_indent(int depth ) ;
extern size_t array_get_max_key_length(array *a ) ;
extern chunkqueue *chunkqueue_init(void) ;
extern int chunkqueue_set_tempdirs(chunkqueue *c , array *tempdirs ) ;
extern int chunkqueue_append_file(chunkqueue *c , buffer *fn , off_t offset ,
                                  off_t len ) ;
extern int chunkqueue_append_mem(chunkqueue *c , char const   *mem , size_t len ) ;
extern int chunkqueue_append_buffer(chunkqueue *c , buffer *mem ) ;
extern int chunkqueue_prepend_buffer(chunkqueue *c , buffer *mem ) ;
extern buffer *chunkqueue_get_append_buffer(chunkqueue *c ) ;
extern buffer *chunkqueue_get_prepend_buffer(chunkqueue *c ) ;
extern chunk *chunkqueue_get_append_tempfile(chunkqueue *cq ) ;
extern int chunkqueue_steal_tempfile(chunkqueue *cq , chunk *in ) ;
extern int chunkqueue_steal_chunk(chunkqueue *cq , chunk *c ) ;
extern int chunkqueue_steal_chunks_len(chunkqueue *cq , chunk *c ,
                                       size_t max_len ) ;
extern int chunkqueue_steal_all_chunks(chunkqueue *cq , chunkqueue *in ) ;
extern int chunkqueue_skip(chunkqueue *cq , off_t skip ) ;
extern void chunkqueue_remove_empty_last_chunk(chunkqueue *cq ) ;
extern int chunkqueue_remove_finished_chunks(chunkqueue *cq ) ;
extern off_t chunkqueue_length(chunkqueue *c ) ;
extern off_t chunkqueue_written(chunkqueue *c ) ;
extern void chunkqueue_free(chunkqueue *c ) ;
extern void chunkqueue_reset(chunkqueue *c ) ;
extern int chunkqueue_is_empty(chunkqueue *c ) ;
extern void chunkqueue_print(chunkqueue *cq ) ;
extern filter_chain *filter_chain_init(void) ;
extern void filter_chain_free(filter_chain *chain ) ;
extern void filter_chain_reset(filter_chain *chain ) ;
extern filter *filter_chain_create_filter(filter_chain *chain , int id ) ;
extern filter *filter_chain_get_filter(filter_chain *chain , int id ) ;
extern void filter_chain_remove_filter(filter_chain *chain , filter *fl ) ;
extern int filter_chain_copy_output(filter_chain *chain , chunkqueue *out ) ;
extern char const   *get_http_status_name(int i ) ;
extern char const   *get_http_version_name(int i ) ;
extern char const   *get_http_method_name(http_method_t i ) ;
extern char const   *get_http_status_body_name(int i ) ;
extern int get_http_version_key(char const   *s ) ;
extern http_method_t get_http_method_key(char const   *s ) ;
extern char const   *keyvalue_get_value(keyvalue *kv , int k ) ;
extern int keyvalue_get_key(keyvalue *kv , char const   *s ) ;
extern keyvalue_buffer *keyvalue_buffer_init(void) ;
extern int keyvalue_buffer_append(keyvalue_buffer *kvb , int k ,
                                  char const   *value ) ;
extern void keyvalue_buffer_free(keyvalue_buffer *kvb ) ;
extern s_keyvalue_buffer *s_keyvalue_buffer_init(void) ;
extern int s_keyvalue_buffer_append(s_keyvalue_buffer *kvb , char const   *key ,
                                    char const   *value ) ;
extern void s_keyvalue_buffer_free(s_keyvalue_buffer *kvb ) ;
extern httpauth_keyvalue_buffer *httpauth_keyvalue_buffer_init(void) ;
extern int httpauth_keyvalue_buffer_append(httpauth_keyvalue_buffer *kvb ,
                                           char const   *key ,
                                           char const   *realm ,
                                           httpauth_type type ) ;
extern void httpauth_keyvalue_buffer_free(httpauth_keyvalue_buffer *kvb ) ;
extern pcre_keyvalue_buffer *pcre_keyvalue_buffer_init(void) ;
extern int pcre_keyvalue_buffer_append(pcre_keyvalue_buffer *kvb ,
                                       char const   *key , char const   *value ) ;
extern void pcre_keyvalue_buffer_free(pcre_keyvalue_buffer *kvb ) ;
extern bitset *bitset_init(size_t nbits ) ;
extern void bitset_reset(bitset *set ) ;
extern void bitset_free(bitset *set ) ;
extern void bitset_clear_bit(bitset *set , size_t pos ) ;
extern void bitset_set_bit(bitset *set , size_t pos ) ;
extern int bitset_test_bit(bitset *set , size_t pos ) ;
extern int sk_num(_STACK const   * ) ;
extern void *sk_value(_STACK const   * , int  ) ;
extern void *sk_set(_STACK * , int  , void * ) ;
extern _STACK *sk_new(int (*cmp)(void const   * , void const   * ) ) ;
extern _STACK *sk_new_null(void) ;
extern void sk_free(_STACK * ) ;
extern void sk_pop_free(_STACK *st , void (*func)(void * ) ) ;
extern int sk_insert(_STACK *sk , void *data , int where ) ;
extern void *sk_delete(_STACK *st , int loc ) ;
extern void *sk_delete_ptr(_STACK *st , void *p ) ;
extern int sk_find(_STACK *st , void *data ) ;
extern int sk_find_ex(_STACK *st , void *data ) ;
extern int sk_push(_STACK *st , void *data ) ;
extern int sk_unshift(_STACK *st , void *data ) ;
extern void *sk_shift(_STACK *st ) ;
extern void *sk_pop(_STACK *st ) ;
extern void sk_zero(_STACK *st ) ;
extern int (*sk_set_cmp_func(_STACK *sk , int (*c)(void const   * ,
                                                   void const   * ) ))(void const   * ,
                                                                       void const   * ) ;
extern _STACK *sk_dup(_STACK *st ) ;
extern void sk_sort(_STACK *st ) ;
extern int sk_is_sorted(_STACK const   *st ) ;
extern int CRYPTO_mem_ctrl(int mode ) ;
extern int CRYPTO_is_mem_check_on(void) ;
extern char const   *SSLeay_version(int type ) ;
extern unsigned long SSLeay(void) ;
extern int OPENSSL_issetugid(void) ;
extern CRYPTO_EX_DATA_IMPL const   *CRYPTO_get_ex_data_implementation(void) ;
extern int CRYPTO_set_ex_data_implementation(CRYPTO_EX_DATA_IMPL const   *i ) ;
extern int CRYPTO_ex_data_new_class(void) ;
extern int CRYPTO_get_ex_new_index(int class_index , long argl , void *argp ,
                                   CRYPTO_EX_new *new_func ,
                                   CRYPTO_EX_dup *dup_func ,
                                   CRYPTO_EX_free *free_func ) ;
extern int CRYPTO_new_ex_data(int class_index , void *obj , CRYPTO_EX_DATA *ad ) ;
extern int CRYPTO_dup_ex_data(int class_index , CRYPTO_EX_DATA *to ,
                              CRYPTO_EX_DATA *from ) ;
extern void CRYPTO_free_ex_data(int class_index , void *obj ,
                                CRYPTO_EX_DATA *ad ) ;
extern int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad , int idx , void *val ) ;
extern void *CRYPTO_get_ex_data(CRYPTO_EX_DATA const   *ad , int idx ) ;
extern void CRYPTO_cleanup_all_ex_data(void) ;
extern int CRYPTO_get_new_lockid(char *name ) ;
extern int CRYPTO_num_locks(void) ;
extern void CRYPTO_lock(int mode , int type , char const   *file , int line ) ;
extern void CRYPTO_set_locking_callback(void (*func)(int mode , int type ,
                                                     char const   *file ,
                                                     int line ) ) ;
extern void (*CRYPTO_get_locking_callback(void))(int mode , int type ,
                                                 char const   *file , int line ) ;
extern void CRYPTO_set_add_lock_callback(int (*func)(int *num , int mount ,
                                                     int type ,
                                                     char const   *file ,
                                                     int line ) ) ;
extern int (*CRYPTO_get_add_lock_callback(void))(int *num , int mount ,
                                                 int type , char const   *file ,
                                                 int line ) ;
extern void CRYPTO_THREADID_set_numeric(CRYPTO_THREADID *id , unsigned long val ) ;
extern void CRYPTO_THREADID_set_pointer(CRYPTO_THREADID *id , void *ptr ) ;
extern int CRYPTO_THREADID_set_callback(void (*threadid_func)(CRYPTO_THREADID * ) ) ;
extern void (*CRYPTO_THREADID_get_callback(void))(CRYPTO_THREADID * ) ;
extern void CRYPTO_THREADID_current(CRYPTO_THREADID *id ) ;
extern int CRYPTO_THREADID_cmp(CRYPTO_THREADID const   *a ,
                               CRYPTO_THREADID const   *b ) ;
extern void CRYPTO_THREADID_cpy(CRYPTO_THREADID *dest ,
                                CRYPTO_THREADID const   *src ) ;
extern unsigned long CRYPTO_THREADID_hash(CRYPTO_THREADID const   *id ) ;
extern void CRYPTO_set_id_callback(unsigned long (*func)(void) ) ;
extern unsigned long (*CRYPTO_get_id_callback(void))(void) ;
extern unsigned long CRYPTO_thread_id(void) ;
extern char const   *CRYPTO_get_lock_name(int type ) ;
extern int CRYPTO_add_lock(int *pointer , int amount , int type ,
                           char const   *file , int line ) ;
extern int CRYPTO_get_new_dynlockid(void) ;
extern void CRYPTO_destroy_dynlockid(int i ) ;
extern struct CRYPTO_dynlock_value *CRYPTO_get_dynlock_value(int i ) ;
extern void CRYPTO_set_dynlock_create_callback(struct CRYPTO_dynlock_value *(*dyn_create_function)(char const   *file ,
                                                                                                   int line ) ) ;
extern void CRYPTO_set_dynlock_lock_callback(void (*dyn_lock_function)(int mode ,
                                                                       struct CRYPTO_dynlock_value *l ,
                                                                       char const   *file ,
                                                                       int line ) ) ;
extern void CRYPTO_set_dynlock_destroy_callback(void (*dyn_destroy_function)(struct CRYPTO_dynlock_value *l ,
                                                                             char const   *file ,
                                                                             int line ) ) ;
extern struct CRYPTO_dynlock_value *(*CRYPTO_get_dynlock_create_callback(void))(char const   *file ,
                                                                                int line ) ;
extern void (*CRYPTO_get_dynlock_lock_callback(void))(int mode ,
                                                      struct CRYPTO_dynlock_value *l ,
                                                      char const   *file ,
                                                      int line ) ;
extern void (*CRYPTO_get_dynlock_destroy_callback(void))(struct CRYPTO_dynlock_value *l ,
                                                         char const   *file ,
                                                         int line ) ;
extern int CRYPTO_set_mem_functions(void *(*m)(size_t  ) ,
                                    void *(*r)(void * , size_t  ) ,
                                    void (*f)(void * ) ) ;
extern int CRYPTO_set_locked_mem_functions(void *(*m)(size_t  ) ,
                                           void (*free_func)(void * ) ) ;
extern int CRYPTO_set_mem_ex_functions(void *(*m)(size_t  , char const   * ,
                                                  int  ) ,
                                       void *(*r)(void * , size_t  ,
                                                  char const   * , int  ) ,
                                       void (*f)(void * ) ) ;
extern int CRYPTO_set_locked_mem_ex_functions(void *(*m)(size_t  ,
                                                         char const   * , int  ) ,
                                              void (*free_func)(void * ) ) ;
extern int CRYPTO_set_mem_debug_functions(void (*m)(void * , int  ,
                                                    char const   * , int  ,
                                                    int  ) ,
                                          void (*r)(void * , void * , int  ,
                                                    char const   * , int  ,
                                                    int  ) ,
                                          void (*f)(void * , int  ) ,
                                          void (*so)(long  ) , long (*go)(void) ) ;
extern void CRYPTO_get_mem_functions(void *(**m)(size_t  ) ,
                                     void *(**r)(void * , size_t  ) ,
                                     void (**f)(void * ) ) ;
extern void CRYPTO_get_locked_mem_functions(void *(**m)(size_t  ) ,
                                            void (**f)(void * ) ) ;
extern void CRYPTO_get_mem_ex_functions(void *(**m)(size_t  , char const   * ,
                                                    int  ) ,
                                        void *(**r)(void * , size_t  ,
                                                    char const   * , int  ) ,
                                        void (**f)(void * ) ) ;
extern void CRYPTO_get_locked_mem_ex_functions(void *(**m)(size_t  ,
                                                           char const   * ,
                                                           int  ) ,
                                               void (**f)(void * ) ) ;
extern void CRYPTO_get_mem_debug_functions(void (**m)(void * , int  ,
                                                      char const   * , int  ,
                                                      int  ) ,
                                           void (**r)(void * , void * , int  ,
                                                      char const   * , int  ,
                                                      int  ) ,
                                           void (**f)(void * , int  ) ,
                                           void (**so)(long  ) ,
                                           long (**go)(void) ) ;
extern void *CRYPTO_malloc_locked(int num , char const   *file , int line ) ;
extern void CRYPTO_free_locked(void * ) ;
extern void *CRYPTO_malloc(int num , char const   *file , int line ) ;
extern char *CRYPTO_strdup(char const   *str , char const   *file , int line ) ;
extern void CRYPTO_free(void * ) ;
extern void *CRYPTO_realloc(void *addr , int num , char const   *file ,
                            int line ) ;
extern void *CRYPTO_realloc_clean(void *addr , int old_num , int num ,
                                  char const   *file , int line ) ;
extern void *CRYPTO_remalloc(void *addr , int num , char const   *file ,
                             int line ) ;
extern void OPENSSL_cleanse(void *ptr , size_t len ) ;
extern void CRYPTO_set_mem_debug_options(long bits ) ;
extern long CRYPTO_get_mem_debug_options(void) ;
extern int CRYPTO_push_info_(char const   *info , char const   *file , int line ) ;
extern int CRYPTO_pop_info(void) ;
extern int CRYPTO_remove_all_info(void) ;
extern void CRYPTO_dbg_malloc(void *addr , int num , char const   *file ,
                              int line , int before_p ) ;
extern void CRYPTO_dbg_realloc(void *addr1 , void *addr2 , int num ,
                               char const   *file , int line , int before_p ) ;
extern void CRYPTO_dbg_free(void *addr , int before_p ) ;
extern void CRYPTO_dbg_set_options(long bits ) ;
extern long CRYPTO_dbg_get_options(void) ;
extern void CRYPTO_mem_leaks_fp(FILE * ) ;
extern void CRYPTO_mem_leaks(struct bio_st *bio ) ;
extern void CRYPTO_mem_leaks_cb(CRYPTO_MEM_LEAK_CB *cb ) ;
extern void OpenSSLDie(char const   *file , int line , char const   *assertion ) ;
extern unsigned long *OPENSSL_ia32cap_loc(void) ;
extern int OPENSSL_isservice(void) ;
extern void ERR_load_CRYPTO_strings(void) ;
extern void OPENSSL_init_library(void) ;
extern COMP_CTX *COMP_CTX_new(COMP_METHOD *meth ) ;
extern void COMP_CTX_free(COMP_CTX *ctx ) ;
extern int COMP_compress_block(COMP_CTX *ctx , unsigned char *out , int olen ,
                               unsigned char *in , int ilen ) ;
extern int COMP_expand_block(COMP_CTX *ctx , unsigned char *out , int olen ,
                             unsigned char *in , int ilen ) ;
extern COMP_METHOD *COMP_rle(void) ;
extern COMP_METHOD *COMP_zlib(void) ;
extern void COMP_zlib_cleanup(void) ;
extern void ERR_load_COMP_strings(void) ;
extern void BIO_set_flags(BIO *b , int flags ) ;
extern int BIO_test_flags(BIO const   *b , int flags ) ;
extern void BIO_clear_flags(BIO *b , int flags ) ;
extern long (*BIO_get_callback(BIO const   *b ))(struct bio_st * , int  ,
                                                 char const   * , int  , long  ,
                                                 long  ) ;
extern void BIO_set_callback(BIO *b , long (*callback)(struct bio_st * , int  ,
                                                       char const   * , int  ,
                                                       long  , long  ) ) ;
extern char *BIO_get_callback_arg(BIO const   *b ) ;
extern void BIO_set_callback_arg(BIO *b , char *arg ) ;
extern char const   *BIO_method_name(BIO const   *b ) ;
extern int BIO_method_type(BIO const   *b ) ;
extern size_t BIO_ctrl_pending(BIO *b ) ;
extern size_t BIO_ctrl_wpending(BIO *b ) ;
extern size_t BIO_ctrl_get_write_guarantee(BIO *b ) ;
extern size_t BIO_ctrl_get_read_request(BIO *b ) ;
extern int BIO_ctrl_reset_read_request(BIO *b ) ;
extern int BIO_set_ex_data(BIO *bio , int idx , void *data ) ;
extern void *BIO_get_ex_data(BIO *bio , int idx ) ;
extern int BIO_get_ex_new_index(long argl , void *argp ,
                                CRYPTO_EX_new *new_func ,
                                CRYPTO_EX_dup *dup_func ,
                                CRYPTO_EX_free *free_func ) ;
extern unsigned long BIO_number_read(BIO *bio ) ;
extern unsigned long BIO_number_written(BIO *bio ) ;
extern int BIO_asn1_set_prefix(BIO *b , asn1_ps_func *prefix ,
                               asn1_ps_func *prefix_free ) ;
extern int BIO_asn1_get_prefix(BIO *b , asn1_ps_func **pprefix ,
                               asn1_ps_func **pprefix_free ) ;
extern int BIO_asn1_set_suffix(BIO *b , asn1_ps_func *suffix ,
                               asn1_ps_func *suffix_free ) ;
extern int BIO_asn1_get_suffix(BIO *b , asn1_ps_func **psuffix ,
                               asn1_ps_func **psuffix_free ) ;
extern BIO_METHOD *BIO_s_file(void) ;
extern BIO *BIO_new_file(char const   *filename , char const   *mode ) ;
extern BIO *BIO_new_fp(FILE *stream , int close_flag ) ;
extern BIO *BIO_new(BIO_METHOD *type ) ;
extern int BIO_set(BIO *a , BIO_METHOD *type ) ;
extern int BIO_free(BIO *a ) ;
extern void BIO_vfree(BIO *a ) ;
extern int BIO_read(BIO *b , void *data , int len ) ;
extern int BIO_gets(BIO *bp , char *buf , int size ) ;
extern int BIO_write(BIO *b , void const   *data , int len ) ;
extern int BIO_puts(BIO *bp , char const   *buf ) ;
extern int BIO_indent(BIO *b , int indent , int max ) ;
extern long BIO_ctrl(BIO *bp , int cmd , long larg , void *parg ) ;
extern long BIO_callback_ctrl(BIO *b , int cmd ,
                              void (*fp)(struct bio_st * , int  ,
                                         char const   * , int  , long  , long  ) ) ;
extern char *BIO_ptr_ctrl(BIO *bp , int cmd , long larg ) ;
extern long BIO_int_ctrl(BIO *bp , int cmd , long larg , int iarg ) ;
extern BIO *BIO_push(BIO *b , BIO *append ) ;
extern BIO *BIO_pop(BIO *b ) ;
extern void BIO_free_all(BIO *a ) ;
extern BIO *BIO_find_type(BIO *b , int bio_type ) ;
extern BIO *BIO_next(BIO *b ) ;
extern BIO *BIO_get_retry_BIO(BIO *bio , int *reason ) ;
extern int BIO_get_retry_reason(BIO *bio ) ;
extern BIO *BIO_dup_chain(BIO *in ) ;
extern int BIO_nread0(BIO *bio , char **buf ) ;
extern int BIO_nread(BIO *bio , char **buf , int num ) ;
extern int BIO_nwrite0(BIO *bio , char **buf ) ;
extern int BIO_nwrite(BIO *bio , char **buf , int num ) ;
extern long BIO_debug_callback(BIO *bio , int cmd , char const   *argp ,
                               int argi , long argl , long ret ) ;
extern BIO_METHOD *BIO_s_mem(void) ;
extern BIO *BIO_new_mem_buf(void *buf , int len ) ;
extern BIO_METHOD *BIO_s_socket(void) ;
extern BIO_METHOD *BIO_s_connect(void) ;
extern BIO_METHOD *BIO_s_accept(void) ;
extern BIO_METHOD *BIO_s_fd(void) ;
extern BIO_METHOD *BIO_s_log(void) ;
extern BIO_METHOD *BIO_s_bio(void) ;
extern BIO_METHOD *BIO_s_null(void) ;
extern BIO_METHOD *BIO_f_null(void) ;
extern BIO_METHOD *BIO_f_buffer(void) ;
extern BIO_METHOD *BIO_f_nbio_test(void) ;
extern BIO_METHOD *BIO_s_datagram(void) ;
extern int BIO_sock_should_retry(int i ) ;
extern int BIO_sock_non_fatal_error(int error ) ;
extern int BIO_dgram_non_fatal_error(int error ) ;
extern int BIO_fd_should_retry(int i ) ;
extern int BIO_fd_non_fatal_error(int error ) ;
extern int BIO_dump_cb(int (*cb)(void const   *data , size_t len , void *u ) ,
                       void *u , char const   *s , int len ) ;
extern int BIO_dump_indent_cb(int (*cb)(void const   *data , size_t len ,
                                        void *u ) , void *u , char const   *s ,
                              int len , int indent ) ;
extern int BIO_dump(BIO *b , char const   *bytes , int len ) ;
extern int BIO_dump_indent(BIO *b , char const   *bytes , int len , int indent ) ;
extern int BIO_dump_fp(FILE *fp , char const   *s , int len ) ;
extern int BIO_dump_indent_fp(FILE *fp , char const   *s , int len , int indent ) ;
extern struct hostent *BIO_gethostbyname(char const   *name ) ;
extern int BIO_sock_error(int sock ) ;
extern int BIO_socket_ioctl(int fd , long type , void *arg ) ;
extern int BIO_socket_nbio(int fd , int mode ) ;
extern int BIO_get_port(char const   *str , unsigned short *port_ptr ) ;
extern int BIO_get_host_ip(char const   *str , unsigned char *ip ) ;
extern int BIO_get_accept_socket(char *host_port , int mode ) ;
extern int BIO_accept(int sock , char **ip_port ) ;
extern int BIO_sock_init(void) ;
extern void BIO_sock_cleanup(void) ;
extern int BIO_set_tcp_ndelay(int sock , int turn_on ) ;
extern BIO *BIO_new_socket(int sock , int close_flag ) ;
extern BIO *BIO_new_dgram(int fd , int close_flag ) ;
extern BIO *BIO_new_fd(int fd , int close_flag ) ;
extern BIO *BIO_new_connect(char *host_port ) ;
extern BIO *BIO_new_accept(char *host_port ) ;
extern int BIO_new_bio_pair(BIO **bio1 , size_t writebuf1 , BIO **bio2 ,
                            size_t writebuf2 ) ;
extern void BIO_copy_next_retry(BIO *b ) ;
extern int ( /* format attribute */  BIO_printf)(BIO *bio ,
                                                 char const   *format  , ...) ;
extern int ( /* format attribute */  BIO_vprintf)(BIO *bio ,
                                                  char const   *format ,
                                                  va_list args ) ;
extern int ( /* format attribute */  BIO_snprintf)(char *buf , size_t n ,
                                                   char const   *format  , ...) ;
extern int ( /* format attribute */  BIO_vsnprintf)(char *buf , size_t n ,
                                                    char const   *format ,
                                                    va_list args ) ;
extern void ERR_load_BIO_strings(void) ;
extern BUF_MEM *BUF_MEM_new(void) ;
extern void BUF_MEM_free(BUF_MEM *a ) ;
extern int BUF_MEM_grow(BUF_MEM *str , size_t len ) ;
extern int BUF_MEM_grow_clean(BUF_MEM *str , size_t len ) ;
extern char *BUF_strdup(char const   *str ) ;
extern char *BUF_strndup(char const   *str , size_t siz ) ;
extern void *BUF_memdup(void const   *data , size_t siz ) ;
extern void BUF_reverse(unsigned char *out , unsigned char *in , size_t siz ) ;
extern size_t BUF_strlcpy(char *dst , char const   *src , size_t siz ) ;
extern size_t BUF_strlcat(char *dst , char const   *src , size_t siz ) ;
extern void ERR_load_BUF_strings(void) ;
extern int FIPS_mode_set(int onoff ) ;
extern int FIPS_mode(void) ;
extern void const   *FIPS_rand_check(void) ;
extern int FIPS_selftest_failed(void) ;
extern void FIPS_selftest_check(void) ;
extern void FIPS_corrupt_sha1(void) ;
extern int FIPS_selftest_sha1(void) ;
extern void FIPS_corrupt_aes(void) ;
extern int FIPS_selftest_aes(void) ;
extern void FIPS_corrupt_des(void) ;
extern int FIPS_selftest_des(void) ;
extern void FIPS_corrupt_rsa(void) ;
extern void FIPS_corrupt_rsa_keygen(void) ;
extern int FIPS_selftest_rsa(void) ;
extern void FIPS_corrupt_dsa(void) ;
extern void FIPS_corrupt_dsa_keygen(void) ;
extern int FIPS_selftest_dsa(void) ;
extern void FIPS_corrupt_rng(void) ;
extern void FIPS_rng_stick(void) ;
extern int FIPS_selftest_rng(void) ;
extern int FIPS_selftest_hmac(void) ;
extern int fips_pkey_signature_test(struct evp_pkey_st *pkey ,
                                    unsigned char const   *tbs , int tbslen ,
                                    unsigned char const   *kat ,
                                    unsigned int katlen ,
                                    struct env_md_st  const  *digest ,
                                    unsigned int md_flags ,
                                    char const   *fail_str ) ;
extern int fips_cipher_test(struct evp_cipher_ctx_st *ctx ,
                            struct evp_cipher_st  const  *cipher ,
                            unsigned char const   *key ,
                            unsigned char const   *iv ,
                            unsigned char const   *plaintext ,
                            unsigned char const   *ciphertext , int len ) ;
extern void ERR_load_FIPS_strings(void) ;
extern int BN_GENCB_call(BN_GENCB *cb , int a , int b ) ;
extern BIGNUM const   *BN_value_one(void) ;
extern char *BN_options(void) ;
extern BN_CTX *BN_CTX_new(void) ;
extern void BN_CTX_init(BN_CTX *c ) ;
extern void BN_CTX_free(BN_CTX *c ) ;
extern void BN_CTX_start(BN_CTX *ctx ) ;
extern BIGNUM *BN_CTX_get(BN_CTX *ctx ) ;
extern void BN_CTX_end(BN_CTX *ctx ) ;
extern int BN_rand(BIGNUM *rnd , int bits , int top , int bottom ) ;
extern int BN_pseudo_rand(BIGNUM *rnd , int bits , int top , int bottom ) ;
extern int BN_rand_range(BIGNUM *rnd , BIGNUM const   *range ) ;
extern int BN_pseudo_rand_range(BIGNUM *rnd , BIGNUM const   *range ) ;
extern int BN_num_bits(BIGNUM const   *a ) ;
extern int BN_num_bits_word(unsigned int  ) ;
extern BIGNUM *BN_new(void) ;
extern void BN_init(BIGNUM * ) ;
extern void BN_clear_free(BIGNUM *a ) ;
extern BIGNUM *BN_copy(BIGNUM *a , BIGNUM const   *b ) ;
extern void BN_swap(BIGNUM *a , BIGNUM *b ) ;
extern BIGNUM *BN_bin2bn(unsigned char const   *s , int len , BIGNUM *ret ) ;
extern int BN_bn2bin(BIGNUM const   *a , unsigned char *to ) ;
extern BIGNUM *BN_mpi2bn(unsigned char const   *s , int len , BIGNUM *ret ) ;
extern int BN_bn2mpi(BIGNUM const   *a , unsigned char *to ) ;
extern int BN_sub(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ) ;
extern int BN_usub(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ) ;
extern int BN_uadd(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ) ;
extern int BN_add(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ) ;
extern int BN_mul(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                  BN_CTX *ctx ) ;
extern int BN_sqr(BIGNUM *r , BIGNUM const   *a , BN_CTX *ctx ) ;
extern void BN_set_negative(BIGNUM *b , int n ) ;
extern int BN_div(BIGNUM *dv , BIGNUM *rem , BIGNUM const   *m ,
                  BIGNUM const   *d , BN_CTX *ctx ) ;
extern int BN_nnmod(BIGNUM *r , BIGNUM const   *m , BIGNUM const   *d ,
                    BN_CTX *ctx ) ;
extern int BN_mod_add(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                      BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_mod_add_quick(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                            BIGNUM const   *m ) ;
extern int BN_mod_sub(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                      BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_mod_sub_quick(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                            BIGNUM const   *m ) ;
extern int BN_mod_mul(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                      BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_mod_sqr(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *m ,
                      BN_CTX *ctx ) ;
extern int BN_mod_lshift1(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *m ,
                          BN_CTX *ctx ) ;
extern int BN_mod_lshift1_quick(BIGNUM *r , BIGNUM const   *a ,
                                BIGNUM const   *m ) ;
extern int BN_mod_lshift(BIGNUM *r , BIGNUM const   *a , int n ,
                         BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_mod_lshift_quick(BIGNUM *r , BIGNUM const   *a , int n ,
                               BIGNUM const   *m ) ;
extern unsigned int BN_mod_word(BIGNUM const   *a , unsigned int w ) ;
extern unsigned int BN_div_word(BIGNUM *a , unsigned int w ) ;
extern int BN_mul_word(BIGNUM *a , unsigned int w ) ;
extern int BN_add_word(BIGNUM *a , unsigned int w ) ;
extern int BN_sub_word(BIGNUM *a , unsigned int w ) ;
extern int BN_set_word(BIGNUM *a , unsigned int w ) ;
extern unsigned int BN_get_word(BIGNUM const   *a ) ;
extern int BN_cmp(BIGNUM const   *a , BIGNUM const   *b ) ;
extern void BN_free(BIGNUM *a ) ;
extern int BN_is_bit_set(BIGNUM const   *a , int n ) ;
extern int BN_lshift(BIGNUM *r , BIGNUM const   *a , int n ) ;
extern int BN_lshift1(BIGNUM *r , BIGNUM const   *a ) ;
extern int BN_exp(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                  BN_CTX *ctx ) ;
extern int BN_mod_exp(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                      BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_mod_exp_mont(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BIGNUM const   *m , BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
extern int BN_mod_exp_mont_consttime(BIGNUM *rr , BIGNUM const   *a ,
                                     BIGNUM const   *p , BIGNUM const   *m ,
                                     BN_CTX *ctx , BN_MONT_CTX *in_mont ) ;
extern int BN_mod_exp_mont_word(BIGNUM *r , unsigned int a , BIGNUM const   *p ,
                                BIGNUM const   *m , BN_CTX *ctx ,
                                BN_MONT_CTX *m_ctx ) ;
extern int BN_mod_exp2_mont(BIGNUM *r , BIGNUM const   *a1 ,
                            BIGNUM const   *p1 , BIGNUM const   *a2 ,
                            BIGNUM const   *p2 , BIGNUM const   *m ,
                            BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
extern int BN_mod_exp_simple(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                             BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_mask_bits(BIGNUM *a , int n ) ;
extern int BN_print_fp(FILE *fp , BIGNUM const   *a ) ;
extern int BN_print(BIO *fp , BIGNUM const   *a ) ;
extern int BN_reciprocal(BIGNUM *r , BIGNUM const   *m , int len , BN_CTX *ctx ) ;
extern int BN_rshift(BIGNUM *r , BIGNUM const   *a , int n ) ;
extern int BN_rshift1(BIGNUM *r , BIGNUM const   *a ) ;
extern void BN_clear(BIGNUM *a ) ;
extern BIGNUM *BN_dup(BIGNUM const   *a ) ;
extern int BN_ucmp(BIGNUM const   *a , BIGNUM const   *b ) ;
extern int BN_set_bit(BIGNUM *a , int n ) ;
extern int BN_clear_bit(BIGNUM *a , int n ) ;
extern char *BN_bn2hex(BIGNUM const   *a ) ;
extern char *BN_bn2dec(BIGNUM const   *a ) ;
extern int BN_hex2bn(BIGNUM **a , char const   *str ) ;
extern int BN_dec2bn(BIGNUM **a , char const   *str ) ;
extern int BN_asc2bn(BIGNUM **a , char const   *str ) ;
extern int BN_gcd(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                  BN_CTX *ctx ) ;
extern int BN_kronecker(BIGNUM const   *a , BIGNUM const   *b , BN_CTX *ctx ) ;
extern BIGNUM *BN_mod_inverse(BIGNUM *ret , BIGNUM const   *a ,
                              BIGNUM const   *n , BN_CTX *ctx ) ;
extern BIGNUM *BN_mod_sqrt(BIGNUM *ret , BIGNUM const   *a , BIGNUM const   *n ,
                           BN_CTX *ctx ) ;
extern BIGNUM *BN_generate_prime(BIGNUM *ret , int bits , int safe ,
                                 BIGNUM const   *add , BIGNUM const   *rem ,
                                 void (*callback)(int  , int  , void * ) ,
                                 void *cb_arg ) ;
extern int BN_is_prime(BIGNUM const   *p , int nchecks ,
                       void (*callback)(int  , int  , void * ) , BN_CTX *ctx ,
                       void *cb_arg ) ;
extern int BN_is_prime_fasttest(BIGNUM const   *p , int nchecks ,
                                void (*callback)(int  , int  , void * ) ,
                                BN_CTX *ctx , void *cb_arg ,
                                int do_trial_division ) ;
extern int BN_generate_prime_ex(BIGNUM *ret , int bits , int safe ,
                                BIGNUM const   *add , BIGNUM const   *rem ,
                                BN_GENCB *cb ) ;
extern int BN_is_prime_ex(BIGNUM const   *p , int nchecks , BN_CTX *ctx ,
                          BN_GENCB *cb ) ;
extern int BN_is_prime_fasttest_ex(BIGNUM const   *p , int nchecks ,
                                   BN_CTX *ctx , int do_trial_division ,
                                   BN_GENCB *cb ) ;
extern int BN_X931_generate_Xpq(BIGNUM *Xp , BIGNUM *Xq , int nbits ,
                                BN_CTX *ctx ) ;
extern int BN_X931_derive_prime_ex(BIGNUM *p , BIGNUM *p1 , BIGNUM *p2 ,
                                   BIGNUM const   *Xp , BIGNUM const   *Xp1 ,
                                   BIGNUM const   *Xp2 , BIGNUM const   *e ,
                                   BN_CTX *ctx , BN_GENCB *cb ) ;
extern int BN_X931_generate_prime_ex(BIGNUM *p , BIGNUM *p1 , BIGNUM *p2 ,
                                     BIGNUM *Xp1 , BIGNUM *Xp2 ,
                                     BIGNUM const   *Xp , BIGNUM const   *e ,
                                     BN_CTX *ctx , BN_GENCB *cb ) ;
extern BN_MONT_CTX *BN_MONT_CTX_new(void) ;
extern void BN_MONT_CTX_init(BN_MONT_CTX *ctx ) ;
extern int BN_mod_mul_montgomery(BIGNUM *r , BIGNUM const   *a ,
                                 BIGNUM const   *b , BN_MONT_CTX *mont ,
                                 BN_CTX *ctx ) ;
extern int BN_from_montgomery(BIGNUM *r , BIGNUM const   *a ,
                              BN_MONT_CTX *mont , BN_CTX *ctx ) ;
extern void BN_MONT_CTX_free(BN_MONT_CTX *mont ) ;
extern int BN_MONT_CTX_set(BN_MONT_CTX *mont , BIGNUM const   *mod ,
                           BN_CTX *ctx ) ;
extern BN_MONT_CTX *BN_MONT_CTX_copy(BN_MONT_CTX *to , BN_MONT_CTX *from ) ;
extern BN_MONT_CTX *BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont , int lock ,
                                           BIGNUM const   *mod , BN_CTX *ctx ) ;
extern BN_BLINDING *BN_BLINDING_new(BIGNUM const   *A , BIGNUM const   *Ai ,
                                    BIGNUM *mod ) ;
extern void BN_BLINDING_free(BN_BLINDING *b ) ;
extern int BN_BLINDING_update(BN_BLINDING *b , BN_CTX *ctx ) ;
extern int BN_BLINDING_convert(BIGNUM *n , BN_BLINDING *b , BN_CTX *ctx ) ;
extern int BN_BLINDING_invert(BIGNUM *n , BN_BLINDING *b , BN_CTX *ctx ) ;
extern int BN_BLINDING_convert_ex(BIGNUM *n , BIGNUM *r , BN_BLINDING *b ,
                                  BN_CTX * ) ;
extern int BN_BLINDING_invert_ex(BIGNUM *n , BIGNUM const   *r ,
                                 BN_BLINDING *b , BN_CTX * ) ;
extern unsigned long BN_BLINDING_get_thread_id(BN_BLINDING const   * ) ;
extern void BN_BLINDING_set_thread_id(BN_BLINDING * , unsigned long  ) ;
extern CRYPTO_THREADID *BN_BLINDING_thread_id(BN_BLINDING * ) ;
extern unsigned long BN_BLINDING_get_flags(BN_BLINDING const   * ) ;
extern void BN_BLINDING_set_flags(BN_BLINDING * , unsigned long  ) ;
extern BN_BLINDING *BN_BLINDING_create_param(BN_BLINDING *b ,
                                             BIGNUM const   *e , BIGNUM *m ,
                                             BN_CTX *ctx ,
                                             int (*bn_mod_exp)(BIGNUM *r ,
                                                               BIGNUM const   *a ,
                                                               BIGNUM const   *p ,
                                                               BIGNUM const   *m ,
                                                               BN_CTX *ctx ,
                                                               BN_MONT_CTX *m_ctx ) ,
                                             BN_MONT_CTX *m_ctx ) ;
extern void BN_set_params(int mul , int high , int low , int mont ) ;
extern int BN_get_params(int which ) ;
extern void BN_RECP_CTX_init(BN_RECP_CTX *recp ) ;
extern BN_RECP_CTX *BN_RECP_CTX_new(void) ;
extern void BN_RECP_CTX_free(BN_RECP_CTX *recp ) ;
extern int BN_RECP_CTX_set(BN_RECP_CTX *recp , BIGNUM const   *rdiv ,
                           BN_CTX *ctx ) ;
extern int BN_mod_mul_reciprocal(BIGNUM *r , BIGNUM const   *x ,
                                 BIGNUM const   *y , BN_RECP_CTX *recp ,
                                 BN_CTX *ctx ) ;
extern int BN_mod_exp_recp(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BIGNUM const   *m , BN_CTX *ctx ) ;
extern int BN_div_recp(BIGNUM *dv , BIGNUM *rem , BIGNUM const   *m ,
                       BN_RECP_CTX *recp , BN_CTX *ctx ) ;
extern int BN_GF2m_add(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ) ;
extern int BN_GF2m_mod(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ) ;
extern int BN_GF2m_mod_mul(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                           BIGNUM const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_sqr(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern int BN_GF2m_mod_inv(BIGNUM *r , BIGNUM const   *b , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern int BN_GF2m_mod_div(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                           BIGNUM const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_exp(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *b ,
                           BIGNUM const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_sqrt(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                            BN_CTX *ctx ) ;
extern int BN_GF2m_mod_solve_quad(BIGNUM *r , BIGNUM const   *a ,
                                  BIGNUM const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_arr(BIGNUM *r , BIGNUM const   *a , int const   *p ) ;
extern int BN_GF2m_mod_mul_arr(BIGNUM *r , BIGNUM const   *a ,
                               BIGNUM const   *b , int const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_sqr_arr(BIGNUM *r , BIGNUM const   *a , int const   *p ,
                               BN_CTX *ctx ) ;
extern int BN_GF2m_mod_inv_arr(BIGNUM *r , BIGNUM const   *b , int const   *p ,
                               BN_CTX *ctx ) ;
extern int BN_GF2m_mod_div_arr(BIGNUM *r , BIGNUM const   *a ,
                               BIGNUM const   *b , int const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_exp_arr(BIGNUM *r , BIGNUM const   *a ,
                               BIGNUM const   *b , int const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_mod_sqrt_arr(BIGNUM *r , BIGNUM const   *a , int const   *p ,
                                BN_CTX *ctx ) ;
extern int BN_GF2m_mod_solve_quad_arr(BIGNUM *r , BIGNUM const   *a ,
                                      int const   *p , BN_CTX *ctx ) ;
extern int BN_GF2m_poly2arr(BIGNUM const   *a , int *p , int max ) ;
extern int BN_GF2m_arr2poly(int const   *p , BIGNUM *a ) ;
extern int BN_nist_mod_192(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern int BN_nist_mod_224(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern int BN_nist_mod_256(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern int BN_nist_mod_384(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern int BN_nist_mod_521(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                           BN_CTX *ctx ) ;
extern BIGNUM const   *BN_get0_nist_prime_192(void) ;
extern BIGNUM const   *BN_get0_nist_prime_224(void) ;
extern BIGNUM const   *BN_get0_nist_prime_256(void) ;
extern BIGNUM const   *BN_get0_nist_prime_384(void) ;
extern BIGNUM const   *BN_get0_nist_prime_521(void) ;
extern BIGNUM *bn_expand2(BIGNUM *a , int words ) ;
extern BIGNUM *bn_dup_expand(BIGNUM const   *a , int words ) ;
extern unsigned int bn_mul_add_words(unsigned int *rp ,
                                     unsigned int const   *ap , int num ,
                                     unsigned int w ) ;
extern unsigned int bn_mul_words(unsigned int *rp , unsigned int const   *ap ,
                                 int num , unsigned int w ) ;
extern void bn_sqr_words(unsigned int *rp , unsigned int const   *ap , int num ) ;
extern unsigned int bn_div_words(unsigned int h , unsigned int l ,
                                 unsigned int d ) ;
extern unsigned int bn_add_words(unsigned int *rp , unsigned int const   *ap ,
                                 unsigned int const   *bp , int num ) ;
extern unsigned int bn_sub_words(unsigned int *rp , unsigned int const   *ap ,
                                 unsigned int const   *bp , int num ) ;
extern BIGNUM *get_rfc2409_prime_768(BIGNUM *bn ) ;
extern BIGNUM *get_rfc2409_prime_1024(BIGNUM *bn ) ;
extern BIGNUM *get_rfc3526_prime_1536(BIGNUM *bn ) ;
extern BIGNUM *get_rfc3526_prime_2048(BIGNUM *bn ) ;
extern BIGNUM *get_rfc3526_prime_3072(BIGNUM *bn ) ;
extern BIGNUM *get_rfc3526_prime_4096(BIGNUM *bn ) ;
extern BIGNUM *get_rfc3526_prime_6144(BIGNUM *bn ) ;
extern BIGNUM *get_rfc3526_prime_8192(BIGNUM *bn ) ;
extern int BN_bntest_rand(BIGNUM *rnd , int bits , int top , int bottom ) ;
extern void ERR_load_BN_strings(void) ;
extern ASN1_SEQUENCE_ANY *d2i_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY **a ,
                                                unsigned char const   **in ,
                                                long len ) ;
extern int i2d_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY const   *a ,
                                 unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_SEQUENCE_ANY_it ;
extern ASN1_SEQUENCE_ANY *d2i_ASN1_SET_ANY(ASN1_SEQUENCE_ANY **a ,
                                           unsigned char const   **in ,
                                           long len ) ;
extern int i2d_ASN1_SET_ANY(ASN1_SEQUENCE_ANY const   *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_SET_ANY_it ;
extern ASN1_TYPE *ASN1_TYPE_new(void) ;
extern void ASN1_TYPE_free(ASN1_TYPE *a ) ;
extern ASN1_TYPE *d2i_ASN1_TYPE(ASN1_TYPE **a , unsigned char const   **in ,
                                long len ) ;
extern int i2d_ASN1_TYPE(ASN1_TYPE *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_ANY_it ;
extern int ASN1_TYPE_get(ASN1_TYPE *a ) ;
extern void ASN1_TYPE_set(ASN1_TYPE *a , int type , void *value ) ;
extern int ASN1_TYPE_set1(ASN1_TYPE *a , int type , void const   *value ) ;
extern int ASN1_TYPE_cmp(ASN1_TYPE *a , ASN1_TYPE *b ) ;
extern ASN1_OBJECT *ASN1_OBJECT_new(void) ;
extern void ASN1_OBJECT_free(ASN1_OBJECT *a ) ;
extern int i2d_ASN1_OBJECT(ASN1_OBJECT *a , unsigned char **pp ) ;
extern ASN1_OBJECT *c2i_ASN1_OBJECT(ASN1_OBJECT **a ,
                                    unsigned char const   **pp , long length ) ;
extern ASN1_OBJECT *d2i_ASN1_OBJECT(ASN1_OBJECT **a ,
                                    unsigned char const   **pp , long length ) ;
extern ASN1_ITEM const   ASN1_OBJECT_it ;
extern ASN1_STRING *ASN1_STRING_new(void) ;
extern void ASN1_STRING_free(ASN1_STRING *a ) ;
extern int ASN1_STRING_copy(ASN1_STRING *dst , ASN1_STRING const   *str ) ;
extern ASN1_STRING *ASN1_STRING_dup(ASN1_STRING const   *a ) ;
extern ASN1_STRING *ASN1_STRING_type_new(int type ) ;
extern int ASN1_STRING_cmp(ASN1_STRING const   *a , ASN1_STRING const   *b ) ;
extern int ASN1_STRING_set(ASN1_STRING *str , void const   *data , int len ) ;
extern void ASN1_STRING_set0(ASN1_STRING *str , void *data , int len ) ;
extern int ASN1_STRING_length(ASN1_STRING const   *x ) ;
extern void ASN1_STRING_length_set(ASN1_STRING *x , int n ) ;
extern int ASN1_STRING_type(ASN1_STRING *x ) ;
extern unsigned char *ASN1_STRING_data(ASN1_STRING *x ) ;
extern ASN1_BIT_STRING *ASN1_BIT_STRING_new(void) ;
extern void ASN1_BIT_STRING_free(ASN1_BIT_STRING *a ) ;
extern ASN1_BIT_STRING *d2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a ,
                                            unsigned char const   **in ,
                                            long len ) ;
extern int i2d_ASN1_BIT_STRING(ASN1_BIT_STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_BIT_STRING_it ;
extern int i2c_ASN1_BIT_STRING(ASN1_BIT_STRING *a , unsigned char **pp ) ;
extern ASN1_BIT_STRING *c2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a ,
                                            unsigned char const   **pp ,
                                            long length ) ;
extern int ASN1_BIT_STRING_set(ASN1_BIT_STRING *a , unsigned char *d ,
                               int length ) ;
extern int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a , int n , int value ) ;
extern int ASN1_BIT_STRING_get_bit(ASN1_BIT_STRING *a , int n ) ;
extern int ASN1_BIT_STRING_check(ASN1_BIT_STRING *a , unsigned char *flags ,
                                 int flags_len ) ;
extern int ASN1_BIT_STRING_name_print(BIO *out , ASN1_BIT_STRING *bs ,
                                      BIT_STRING_BITNAME *tbl , int indent ) ;
extern int ASN1_BIT_STRING_num_asc(char *name , BIT_STRING_BITNAME *tbl ) ;
extern int ASN1_BIT_STRING_set_asc(ASN1_BIT_STRING *bs , char *name ,
                                   int value , BIT_STRING_BITNAME *tbl ) ;
extern int i2d_ASN1_BOOLEAN(int a , unsigned char **pp ) ;
extern int d2i_ASN1_BOOLEAN(int *a , unsigned char const   **pp , long length ) ;
extern ASN1_INTEGER *ASN1_INTEGER_new(void) ;
extern void ASN1_INTEGER_free(ASN1_INTEGER *a ) ;
extern ASN1_INTEGER *d2i_ASN1_INTEGER(ASN1_INTEGER **a ,
                                      unsigned char const   **in , long len ) ;
extern int i2d_ASN1_INTEGER(ASN1_INTEGER *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_INTEGER_it ;
extern int i2c_ASN1_INTEGER(ASN1_INTEGER *a , unsigned char **pp ) ;
extern ASN1_INTEGER *c2i_ASN1_INTEGER(ASN1_INTEGER **a ,
                                      unsigned char const   **pp , long length ) ;
extern ASN1_INTEGER *d2i_ASN1_UINTEGER(ASN1_INTEGER **a ,
                                       unsigned char const   **pp , long length ) ;
extern ASN1_INTEGER *ASN1_INTEGER_dup(ASN1_INTEGER const   *x ) ;
extern int ASN1_INTEGER_cmp(ASN1_INTEGER const   *x , ASN1_INTEGER const   *y ) ;
extern ASN1_ENUMERATED *ASN1_ENUMERATED_new(void) ;
extern void ASN1_ENUMERATED_free(ASN1_ENUMERATED *a ) ;
extern ASN1_ENUMERATED *d2i_ASN1_ENUMERATED(ASN1_ENUMERATED **a ,
                                            unsigned char const   **in ,
                                            long len ) ;
extern int i2d_ASN1_ENUMERATED(ASN1_ENUMERATED *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_ENUMERATED_it ;
extern int ASN1_UTCTIME_check(ASN1_UTCTIME *a ) ;
extern ASN1_UTCTIME *ASN1_UTCTIME_set(ASN1_UTCTIME *s , time_t t ) ;
extern ASN1_UTCTIME *ASN1_UTCTIME_adj(ASN1_UTCTIME *s , time_t t ,
                                      int offset_day , long offset_sec ) ;
extern int ASN1_UTCTIME_set_string(ASN1_UTCTIME *s , char const   *str ) ;
extern int ASN1_UTCTIME_cmp_time_t(ASN1_UTCTIME const   *s , time_t t ) ;
extern int ASN1_GENERALIZEDTIME_check(ASN1_GENERALIZEDTIME *a ) ;
extern ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_set(ASN1_GENERALIZEDTIME *s ,
                                                      time_t t ) ;
extern ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s ,
                                                      time_t t ,
                                                      int offset_day ,
                                                      long offset_sec ) ;
extern int ASN1_GENERALIZEDTIME_set_string(ASN1_GENERALIZEDTIME *s ,
                                           char const   *str ) ;
extern ASN1_OCTET_STRING *ASN1_OCTET_STRING_new(void) ;
extern void ASN1_OCTET_STRING_free(ASN1_OCTET_STRING *a ) ;
extern ASN1_OCTET_STRING *d2i_ASN1_OCTET_STRING(ASN1_OCTET_STRING **a ,
                                                unsigned char const   **in ,
                                                long len ) ;
extern int i2d_ASN1_OCTET_STRING(ASN1_OCTET_STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_OCTET_STRING_it ;
extern ASN1_OCTET_STRING *ASN1_OCTET_STRING_dup(ASN1_OCTET_STRING const   *a ) ;
extern int ASN1_OCTET_STRING_cmp(ASN1_OCTET_STRING const   *a ,
                                 ASN1_OCTET_STRING const   *b ) ;
extern int ASN1_OCTET_STRING_set(ASN1_OCTET_STRING *str ,
                                 unsigned char const   *data , int len ) ;
extern ASN1_VISIBLESTRING *ASN1_VISIBLESTRING_new(void) ;
extern void ASN1_VISIBLESTRING_free(ASN1_VISIBLESTRING *a ) ;
extern ASN1_VISIBLESTRING *d2i_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING **a ,
                                                  unsigned char const   **in ,
                                                  long len ) ;
extern int i2d_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_VISIBLESTRING_it ;
extern ASN1_UNIVERSALSTRING *ASN1_UNIVERSALSTRING_new(void) ;
extern void ASN1_UNIVERSALSTRING_free(ASN1_UNIVERSALSTRING *a ) ;
extern ASN1_UNIVERSALSTRING *d2i_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING **a ,
                                                      unsigned char const   **in ,
                                                      long len ) ;
extern int i2d_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING *a ,
                                    unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_UNIVERSALSTRING_it ;
extern ASN1_UTF8STRING *ASN1_UTF8STRING_new(void) ;
extern void ASN1_UTF8STRING_free(ASN1_UTF8STRING *a ) ;
extern ASN1_UTF8STRING *d2i_ASN1_UTF8STRING(ASN1_UTF8STRING **a ,
                                            unsigned char const   **in ,
                                            long len ) ;
extern int i2d_ASN1_UTF8STRING(ASN1_UTF8STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_UTF8STRING_it ;
extern ASN1_NULL *ASN1_NULL_new(void) ;
extern void ASN1_NULL_free(ASN1_NULL *a ) ;
extern ASN1_NULL *d2i_ASN1_NULL(ASN1_NULL **a , unsigned char const   **in ,
                                long len ) ;
extern int i2d_ASN1_NULL(ASN1_NULL *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_NULL_it ;
extern ASN1_BMPSTRING *ASN1_BMPSTRING_new(void) ;
extern void ASN1_BMPSTRING_free(ASN1_BMPSTRING *a ) ;
extern ASN1_BMPSTRING *d2i_ASN1_BMPSTRING(ASN1_BMPSTRING **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_ASN1_BMPSTRING(ASN1_BMPSTRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_BMPSTRING_it ;
extern int UTF8_getc(unsigned char const   *str , int len , unsigned long *val ) ;
extern int UTF8_putc(unsigned char *str , int len , unsigned long value ) ;
extern ASN1_STRING *ASN1_PRINTABLE_new(void) ;
extern void ASN1_PRINTABLE_free(ASN1_STRING *a ) ;
extern ASN1_STRING *d2i_ASN1_PRINTABLE(ASN1_STRING **a ,
                                       unsigned char const   **in , long len ) ;
extern int i2d_ASN1_PRINTABLE(ASN1_STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_PRINTABLE_it ;
extern ASN1_STRING *DIRECTORYSTRING_new(void) ;
extern void DIRECTORYSTRING_free(ASN1_STRING *a ) ;
extern ASN1_STRING *d2i_DIRECTORYSTRING(ASN1_STRING **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_DIRECTORYSTRING(ASN1_STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   DIRECTORYSTRING_it ;
extern ASN1_STRING *DISPLAYTEXT_new(void) ;
extern void DISPLAYTEXT_free(ASN1_STRING *a ) ;
extern ASN1_STRING *d2i_DISPLAYTEXT(ASN1_STRING **a ,
                                    unsigned char const   **in , long len ) ;
extern int i2d_DISPLAYTEXT(ASN1_STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   DISPLAYTEXT_it ;
extern ASN1_PRINTABLESTRING *ASN1_PRINTABLESTRING_new(void) ;
extern void ASN1_PRINTABLESTRING_free(ASN1_PRINTABLESTRING *a ) ;
extern ASN1_PRINTABLESTRING *d2i_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING **a ,
                                                      unsigned char const   **in ,
                                                      long len ) ;
extern int i2d_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING *a ,
                                    unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_PRINTABLESTRING_it ;
extern ASN1_T61STRING *ASN1_T61STRING_new(void) ;
extern void ASN1_T61STRING_free(ASN1_T61STRING *a ) ;
extern ASN1_T61STRING *d2i_ASN1_T61STRING(ASN1_T61STRING **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_ASN1_T61STRING(ASN1_T61STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_T61STRING_it ;
extern ASN1_IA5STRING *ASN1_IA5STRING_new(void) ;
extern void ASN1_IA5STRING_free(ASN1_IA5STRING *a ) ;
extern ASN1_IA5STRING *d2i_ASN1_IA5STRING(ASN1_IA5STRING **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_ASN1_IA5STRING(ASN1_IA5STRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_IA5STRING_it ;
extern ASN1_GENERALSTRING *ASN1_GENERALSTRING_new(void) ;
extern void ASN1_GENERALSTRING_free(ASN1_GENERALSTRING *a ) ;
extern ASN1_GENERALSTRING *d2i_ASN1_GENERALSTRING(ASN1_GENERALSTRING **a ,
                                                  unsigned char const   **in ,
                                                  long len ) ;
extern int i2d_ASN1_GENERALSTRING(ASN1_GENERALSTRING *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_GENERALSTRING_it ;
extern ASN1_UTCTIME *ASN1_UTCTIME_new(void) ;
extern void ASN1_UTCTIME_free(ASN1_UTCTIME *a ) ;
extern ASN1_UTCTIME *d2i_ASN1_UTCTIME(ASN1_UTCTIME **a ,
                                      unsigned char const   **in , long len ) ;
extern int i2d_ASN1_UTCTIME(ASN1_UTCTIME *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_UTCTIME_it ;
extern ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_new(void) ;
extern void ASN1_GENERALIZEDTIME_free(ASN1_GENERALIZEDTIME *a ) ;
extern ASN1_GENERALIZEDTIME *d2i_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME **a ,
                                                      unsigned char const   **in ,
                                                      long len ) ;
extern int i2d_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME *a ,
                                    unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_GENERALIZEDTIME_it ;
extern ASN1_TIME *ASN1_TIME_new(void) ;
extern void ASN1_TIME_free(ASN1_TIME *a ) ;
extern ASN1_TIME *d2i_ASN1_TIME(ASN1_TIME **a , unsigned char const   **in ,
                                long len ) ;
extern int i2d_ASN1_TIME(ASN1_TIME *a , unsigned char **out ) ;
extern ASN1_ITEM const   ASN1_TIME_it ;
extern ASN1_ITEM const   ASN1_OCTET_STRING_NDEF_it ;
extern ASN1_TIME *ASN1_TIME_set(ASN1_TIME *s , time_t t ) ;
extern ASN1_TIME *ASN1_TIME_adj(ASN1_TIME *s , time_t t , int offset_day ,
                                long offset_sec ) ;
extern int ASN1_TIME_check(ASN1_TIME *t ) ;
extern ASN1_GENERALIZEDTIME *ASN1_TIME_to_generalizedtime(ASN1_TIME *t ,
                                                          ASN1_GENERALIZEDTIME **out ) ;
extern int ASN1_TIME_set_string(ASN1_TIME *s , char const   *str ) ;
extern int i2d_ASN1_SET(struct stack_st_OPENSSL_BLOCK *a , unsigned char **pp ,
                        i2d_of_void *i2d , int ex_tag , int ex_class ,
                        int is_set ) ;
extern struct stack_st_OPENSSL_BLOCK *d2i_ASN1_SET(struct stack_st_OPENSSL_BLOCK **a ,
                                                   unsigned char const   **pp ,
                                                   long length ,
                                                   d2i_of_void *d2i ,
                                                   void (*free_func)(OPENSSL_BLOCK  ) ,
                                                   int ex_tag , int ex_class ) ;
extern int i2a_ASN1_INTEGER(BIO *bp , ASN1_INTEGER *a ) ;
extern int a2i_ASN1_INTEGER(BIO *bp , ASN1_INTEGER *bs , char *buf , int size ) ;
extern int i2a_ASN1_ENUMERATED(BIO *bp , ASN1_ENUMERATED *a ) ;
extern int a2i_ASN1_ENUMERATED(BIO *bp , ASN1_ENUMERATED *bs , char *buf ,
                               int size ) ;
extern int i2a_ASN1_OBJECT(BIO *bp , ASN1_OBJECT *a ) ;
extern int a2i_ASN1_STRING(BIO *bp , ASN1_STRING *bs , char *buf , int size ) ;
extern int i2a_ASN1_STRING(BIO *bp , ASN1_STRING *a , int type ) ;
extern int i2t_ASN1_OBJECT(char *buf , int buf_len , ASN1_OBJECT *a ) ;
extern int a2d_ASN1_OBJECT(unsigned char *out , int olen , char const   *buf ,
                           int num ) ;
extern ASN1_OBJECT *ASN1_OBJECT_create(int nid , unsigned char *data , int len ,
                                       char const   *sn , char const   *ln ) ;
extern int ASN1_INTEGER_set(ASN1_INTEGER *a , long v ) ;
extern long ASN1_INTEGER_get(ASN1_INTEGER const   *a ) ;
extern ASN1_INTEGER *BN_to_ASN1_INTEGER(BIGNUM const   *bn , ASN1_INTEGER *ai ) ;
extern BIGNUM *ASN1_INTEGER_to_BN(ASN1_INTEGER const   *ai , BIGNUM *bn ) ;
extern int ASN1_ENUMERATED_set(ASN1_ENUMERATED *a , long v ) ;
extern long ASN1_ENUMERATED_get(ASN1_ENUMERATED *a ) ;
extern ASN1_ENUMERATED *BN_to_ASN1_ENUMERATED(BIGNUM *bn , ASN1_ENUMERATED *ai ) ;
extern BIGNUM *ASN1_ENUMERATED_to_BN(ASN1_ENUMERATED *ai , BIGNUM *bn ) ;
extern int ASN1_PRINTABLE_type(unsigned char const   *s , int max ) ;
extern int i2d_ASN1_bytes(ASN1_STRING *a , unsigned char **pp , int tag ,
                          int xclass ) ;
extern ASN1_STRING *d2i_ASN1_bytes(ASN1_STRING **a ,
                                   unsigned char const   **pp , long length ,
                                   int Ptag , int Pclass ) ;
extern unsigned long ASN1_tag2bit(int tag ) ;
extern ASN1_STRING *d2i_ASN1_type_bytes(ASN1_STRING **a ,
                                        unsigned char const   **pp ,
                                        long length , int type ) ;
extern int asn1_Finish(ASN1_CTX *c ) ;
extern int asn1_const_Finish(ASN1_const_CTX *c ) ;
extern int ASN1_get_object(unsigned char const   **pp , long *plength ,
                           int *ptag , int *pclass , long omax ) ;
extern int ASN1_check_infinite_end(unsigned char **p , long len ) ;
extern int ASN1_const_check_infinite_end(unsigned char const   **p , long len ) ;
extern void ASN1_put_object(unsigned char **pp , int constructed , int length ,
                            int tag , int xclass ) ;
extern int ASN1_put_eoc(unsigned char **pp ) ;
extern int ASN1_object_size(int constructed , int length , int tag ) ;
extern void *ASN1_dup(i2d_of_void *i2d , d2i_of_void *d2i , void *x ) ;
extern void *ASN1_item_dup(ASN1_ITEM const   *it , void *x ) ;
extern void *ASN1_d2i_fp(void *(*xnew)(void) , d2i_of_void *d2i , FILE *in ,
                         void **x ) ;
extern void *ASN1_item_d2i_fp(ASN1_ITEM const   *it , FILE *in , void *x ) ;
extern int ASN1_i2d_fp(i2d_of_void *i2d , FILE *out , void *x ) ;
extern int ASN1_item_i2d_fp(ASN1_ITEM const   *it , FILE *out , void *x ) ;
extern int ASN1_STRING_print_ex_fp(FILE *fp , ASN1_STRING *str ,
                                   unsigned long flags ) ;
extern int ASN1_STRING_to_UTF8(unsigned char **out , ASN1_STRING *in ) ;
extern void *ASN1_d2i_bio(void *(*xnew)(void) , d2i_of_void *d2i , BIO *in ,
                          void **x ) ;
extern void *ASN1_item_d2i_bio(ASN1_ITEM const   *it , BIO *in , void *x ) ;
extern int ASN1_i2d_bio(i2d_of_void *i2d , BIO *out , unsigned char *x ) ;
extern int ASN1_item_i2d_bio(ASN1_ITEM const   *it , BIO *out , void *x ) ;
extern int ASN1_UTCTIME_print(BIO *fp , ASN1_UTCTIME const   *a ) ;
extern int ASN1_GENERALIZEDTIME_print(BIO *fp , ASN1_GENERALIZEDTIME const   *a ) ;
extern int ASN1_TIME_print(BIO *fp , ASN1_TIME const   *a ) ;
extern int ASN1_STRING_print(BIO *bp , ASN1_STRING const   *v ) ;
extern int ASN1_STRING_print_ex(BIO *out , ASN1_STRING *str ,
                                unsigned long flags ) ;
extern int ASN1_bn_print(BIO *bp , char const   *number , BIGNUM const   *num ,
                         unsigned char *buf , int off ) ;
extern int ASN1_parse(BIO *bp , unsigned char const   *pp , long len ,
                      int indent ) ;
extern int ASN1_parse_dump(BIO *bp , unsigned char const   *pp , long len ,
                           int indent , int dump ) ;
extern char const   *ASN1_tag2str(int tag ) ;
extern NETSCAPE_X509 *NETSCAPE_X509_new(void) ;
extern void NETSCAPE_X509_free(NETSCAPE_X509 *a ) ;
extern NETSCAPE_X509 *d2i_NETSCAPE_X509(NETSCAPE_X509 **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_NETSCAPE_X509(NETSCAPE_X509 *a , unsigned char **out ) ;
extern ASN1_ITEM const   NETSCAPE_X509_it ;
extern int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s ) ;
extern int ASN1_TYPE_set_octetstring(ASN1_TYPE *a , unsigned char *data ,
                                     int len ) ;
extern int ASN1_TYPE_get_octetstring(ASN1_TYPE *a , unsigned char *data ,
                                     int max_len ) ;
extern int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a , long num ,
                                         unsigned char *data , int len ) ;
extern int ASN1_TYPE_get_int_octetstring(ASN1_TYPE *a , long *num ,
                                         unsigned char *data , int max_len ) ;
extern struct stack_st_OPENSSL_BLOCK *ASN1_seq_unpack(unsigned char const   *buf ,
                                                      int len ,
                                                      d2i_of_void *d2i ,
                                                      void (*free_func)(OPENSSL_BLOCK  ) ) ;
extern unsigned char *ASN1_seq_pack(struct stack_st_OPENSSL_BLOCK *safes ,
                                    i2d_of_void *i2d , unsigned char **buf ,
                                    int *len ) ;
extern void *ASN1_unpack_string(ASN1_STRING *oct , d2i_of_void *d2i ) ;
extern void *ASN1_item_unpack(ASN1_STRING *oct , ASN1_ITEM const   *it ) ;
extern ASN1_STRING *ASN1_pack_string(void *obj , i2d_of_void *i2d ,
                                     ASN1_OCTET_STRING **oct ) ;
extern ASN1_STRING *ASN1_item_pack(void *obj , ASN1_ITEM const   *it ,
                                   ASN1_OCTET_STRING **oct ) ;
extern void ASN1_STRING_set_default_mask(unsigned long mask ) ;
extern int ASN1_STRING_set_default_mask_asc(char const   *p ) ;
extern unsigned long ASN1_STRING_get_default_mask(void) ;
extern int ASN1_mbstring_copy(ASN1_STRING **out , unsigned char const   *in ,
                              int len , int inform , unsigned long mask ) ;
extern int ASN1_mbstring_ncopy(ASN1_STRING **out , unsigned char const   *in ,
                               int len , int inform , unsigned long mask ,
                               long minsize , long maxsize ) ;
extern ASN1_STRING *ASN1_STRING_set_by_NID(ASN1_STRING **out ,
                                           unsigned char const   *in ,
                                           int inlen , int inform , int nid ) ;
extern ASN1_STRING_TABLE *ASN1_STRING_TABLE_get(int nid ) ;
extern int ASN1_STRING_TABLE_add(int  , long  , long  , unsigned long  ,
                                 unsigned long  ) ;
extern void ASN1_STRING_TABLE_cleanup(void) ;
extern ASN1_VALUE *ASN1_item_new(ASN1_ITEM const   *it ) ;
extern void ASN1_item_free(ASN1_VALUE *val , ASN1_ITEM const   *it ) ;
extern ASN1_VALUE *ASN1_item_d2i(ASN1_VALUE **val , unsigned char const   **in ,
                                 long len , ASN1_ITEM const   *it ) ;
extern int ASN1_item_i2d(ASN1_VALUE *val , unsigned char **out ,
                         ASN1_ITEM const   *it ) ;
extern int ASN1_item_ndef_i2d(ASN1_VALUE *val , unsigned char **out ,
                              ASN1_ITEM const   *it ) ;
extern void ASN1_add_oid_module(void) ;
extern ASN1_TYPE *ASN1_generate_nconf(char *str , CONF *nconf ) ;
extern ASN1_TYPE *ASN1_generate_v3(char *str , X509V3_CTX *cnf ) ;
extern int ASN1_item_print(BIO *out , ASN1_VALUE *ifld , int indent ,
                           ASN1_ITEM const   *it , ASN1_PCTX const   *pctx ) ;
extern ASN1_PCTX *ASN1_PCTX_new(void) ;
extern void ASN1_PCTX_free(ASN1_PCTX *p ) ;
extern unsigned long ASN1_PCTX_get_flags(ASN1_PCTX *p ) ;
extern void ASN1_PCTX_set_flags(ASN1_PCTX *p , unsigned long flags ) ;
extern unsigned long ASN1_PCTX_get_nm_flags(ASN1_PCTX *p ) ;
extern void ASN1_PCTX_set_nm_flags(ASN1_PCTX *p , unsigned long flags ) ;
extern unsigned long ASN1_PCTX_get_cert_flags(ASN1_PCTX *p ) ;
extern void ASN1_PCTX_set_cert_flags(ASN1_PCTX *p , unsigned long flags ) ;
extern unsigned long ASN1_PCTX_get_oid_flags(ASN1_PCTX *p ) ;
extern void ASN1_PCTX_set_oid_flags(ASN1_PCTX *p , unsigned long flags ) ;
extern unsigned long ASN1_PCTX_get_str_flags(ASN1_PCTX *p ) ;
extern void ASN1_PCTX_set_str_flags(ASN1_PCTX *p , unsigned long flags ) ;
extern BIO_METHOD *BIO_f_asn1(void) ;
extern BIO *BIO_new_NDEF(BIO *out , ASN1_VALUE *val , ASN1_ITEM const   *it ) ;
extern int i2d_ASN1_bio_stream(BIO *out , ASN1_VALUE *val , BIO *in ,
                               int flags , ASN1_ITEM const   *it ) ;
extern int PEM_write_bio_ASN1_stream(BIO *out , ASN1_VALUE *val , BIO *in ,
                                     int flags , char const   *hdr ,
                                     ASN1_ITEM const   *it ) ;
extern int SMIME_write_ASN1(BIO *bio , ASN1_VALUE *val , BIO *data , int flags ,
                            int ctype_nid , int econt_nid ,
                            struct stack_st_X509_ALGOR *mdalgs ,
                            ASN1_ITEM const   *it ) ;
extern ASN1_VALUE *SMIME_read_ASN1(BIO *bio , BIO **bcont ,
                                   ASN1_ITEM const   *it ) ;
extern int SMIME_crlf_copy(BIO *in , BIO *out , int flags ) ;
extern int SMIME_text(BIO *in , BIO *out ) ;
extern void ERR_load_ASN1_strings(void) ;
extern int OBJ_NAME_init(void) ;
extern int OBJ_NAME_new_index(unsigned long (*hash_func)(char const   * ) ,
                              int (*cmp_func)(char const   * , char const   * ) ,
                              void (*free_func)(char const   * , int  ,
                                                char const   * ) ) ;
extern char const   *OBJ_NAME_get(char const   *name , int type ) ;
extern int OBJ_NAME_add(char const   *name , int type , char const   *data ) ;
extern int OBJ_NAME_remove(char const   *name , int type ) ;
extern void OBJ_NAME_cleanup(int type ) ;
extern void OBJ_NAME_do_all(int type , void (*fn)(OBJ_NAME const   * ,
                                                  void *arg ) , void *arg ) ;
extern void OBJ_NAME_do_all_sorted(int type , void (*fn)(OBJ_NAME const   * ,
                                                         void *arg ) ,
                                   void *arg ) ;
extern ASN1_OBJECT *OBJ_dup(ASN1_OBJECT const   *o ) ;
extern ASN1_OBJECT *OBJ_nid2obj(int n ) ;
extern char const   *OBJ_nid2ln(int n ) ;
extern char const   *OBJ_nid2sn(int n ) ;
extern int OBJ_obj2nid(ASN1_OBJECT const   *o ) ;
extern ASN1_OBJECT *OBJ_txt2obj(char const   *s , int no_name ) ;
extern int OBJ_obj2txt(char *buf , int buf_len , ASN1_OBJECT const   *a ,
                       int no_name ) ;
extern int OBJ_txt2nid(char const   *s ) ;
extern int OBJ_ln2nid(char const   *s ) ;
extern int OBJ_sn2nid(char const   *s ) ;
extern int OBJ_cmp(ASN1_OBJECT const   *a , ASN1_OBJECT const   *b ) ;
extern void const   *OBJ_bsearch_(void const   *key , void const   *base ,
                                  int num , int size ,
                                  int (*cmp)(void const   * , void const   * ) ) ;
extern void const   *OBJ_bsearch_ex_(void const   *key , void const   *base ,
                                     int num , int size ,
                                     int (*cmp)(void const   * , void const   * ) ,
                                     int flags ) ;
extern int OBJ_new_nid(int num ) ;
extern int OBJ_add_object(ASN1_OBJECT const   *obj ) ;
extern int OBJ_create(char const   *oid , char const   *sn , char const   *ln ) ;
extern void OBJ_cleanup(void) ;
extern int OBJ_create_objects(BIO *in ) ;
extern int OBJ_find_sigid_algs(int signid , int *pdig_nid , int *ppkey_nid ) ;
extern int OBJ_find_sigid_by_algs(int *psignid , int dig_nid , int pkey_nid ) ;
extern int OBJ_add_sigid(int signid , int dig_id , int pkey_id ) ;
extern void OBJ_sigid_free(void) ;
extern int obj_cleanup_defer ;
extern void check_defer(int nid ) ;
extern void ERR_load_OBJ_strings(void) ;
extern int EVP_MD_type(EVP_MD const   *md ) ;
extern int EVP_MD_pkey_type(EVP_MD const   *md ) ;
extern int EVP_MD_size(EVP_MD const   *md ) ;
extern int EVP_MD_block_size(EVP_MD const   *md ) ;
extern unsigned long EVP_MD_flags(EVP_MD const   *md ) ;
extern EVP_MD const   *EVP_MD_CTX_md(EVP_MD_CTX const   *ctx ) ;
extern int EVP_CIPHER_nid(EVP_CIPHER const   *cipher ) ;
extern int EVP_CIPHER_block_size(EVP_CIPHER const   *cipher ) ;
extern int EVP_CIPHER_key_length(EVP_CIPHER const   *cipher ) ;
extern int EVP_CIPHER_iv_length(EVP_CIPHER const   *cipher ) ;
extern unsigned long EVP_CIPHER_flags(EVP_CIPHER const   *cipher ) ;
extern EVP_CIPHER const   *EVP_CIPHER_CTX_cipher(EVP_CIPHER_CTX const   *ctx ) ;
extern int EVP_CIPHER_CTX_nid(EVP_CIPHER_CTX const   *ctx ) ;
extern int EVP_CIPHER_CTX_block_size(EVP_CIPHER_CTX const   *ctx ) ;
extern int EVP_CIPHER_CTX_key_length(EVP_CIPHER_CTX const   *ctx ) ;
extern int EVP_CIPHER_CTX_iv_length(EVP_CIPHER_CTX const   *ctx ) ;
extern int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out , EVP_CIPHER_CTX const   *in ) ;
extern void *EVP_CIPHER_CTX_get_app_data(EVP_CIPHER_CTX const   *ctx ) ;
extern void EVP_CIPHER_CTX_set_app_data(EVP_CIPHER_CTX *ctx , void *data ) ;
extern unsigned long EVP_CIPHER_CTX_flags(EVP_CIPHER_CTX const   *ctx ) ;
extern int EVP_Cipher(EVP_CIPHER_CTX *c , unsigned char *out ,
                      unsigned char const   *in , unsigned int inl ) ;
extern void EVP_MD_CTX_init(EVP_MD_CTX *ctx ) ;
extern int EVP_MD_CTX_cleanup(EVP_MD_CTX *ctx ) ;
extern EVP_MD_CTX *EVP_MD_CTX_create(void) ;
extern void EVP_MD_CTX_destroy(EVP_MD_CTX *ctx ) ;
extern int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out , EVP_MD_CTX const   *in ) ;
extern void EVP_MD_CTX_set_flags(EVP_MD_CTX *ctx , int flags ) ;
extern void EVP_MD_CTX_clear_flags(EVP_MD_CTX *ctx , int flags ) ;
extern int EVP_MD_CTX_test_flags(EVP_MD_CTX const   *ctx , int flags ) ;
extern int EVP_DigestInit_ex(EVP_MD_CTX *ctx , EVP_MD const   *type ,
                             ENGINE *impl ) ;
extern int EVP_DigestUpdate(EVP_MD_CTX *ctx , void const   *d , size_t cnt ) ;
extern int EVP_DigestFinal_ex(EVP_MD_CTX *ctx , unsigned char *md ,
                              unsigned int *s ) ;
extern int EVP_Digest(void const   *data , size_t count , unsigned char *md ,
                      unsigned int *size , EVP_MD const   *type , ENGINE *impl ) ;
extern int EVP_MD_CTX_copy(EVP_MD_CTX *out , EVP_MD_CTX const   *in ) ;
extern int EVP_DigestInit(EVP_MD_CTX *ctx , EVP_MD const   *type ) ;
extern int EVP_DigestFinal(EVP_MD_CTX *ctx , unsigned char *md ,
                           unsigned int *s ) ;
extern int EVP_read_pw_string(char *buf , int length , char const   *prompt ,
                              int verify ) ;
extern int EVP_read_pw_string_min(char *buf , int minlen , int maxlen ,
                                  char const   *prompt , int verify ) ;
extern void EVP_set_pw_prompt(char const   *prompt ) ;
extern char *EVP_get_pw_prompt(void) ;
extern int EVP_BytesToKey(EVP_CIPHER const   *type , EVP_MD const   *md ,
                          unsigned char const   *salt ,
                          unsigned char const   *data , int datal , int count ,
                          unsigned char *key , unsigned char *iv ) ;
extern void EVP_CIPHER_CTX_set_flags(EVP_CIPHER_CTX *ctx , int flags ) ;
extern void EVP_CIPHER_CTX_clear_flags(EVP_CIPHER_CTX *ctx , int flags ) ;
extern int EVP_CIPHER_CTX_test_flags(EVP_CIPHER_CTX const   *ctx , int flags ) ;
extern int EVP_EncryptInit(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *cipher ,
                           unsigned char const   *key ,
                           unsigned char const   *iv ) ;
extern int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *cipher ,
                              ENGINE *impl , unsigned char const   *key ,
                              unsigned char const   *iv ) ;
extern int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                             int *outl , unsigned char const   *in , int inl ) ;
extern int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                               int *outl ) ;
extern int EVP_EncryptFinal(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                            int *outl ) ;
extern int EVP_DecryptInit(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *cipher ,
                           unsigned char const   *key ,
                           unsigned char const   *iv ) ;
extern int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *cipher ,
                              ENGINE *impl , unsigned char const   *key ,
                              unsigned char const   *iv ) ;
extern int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                             int *outl , unsigned char const   *in , int inl ) ;
extern int EVP_DecryptFinal(EVP_CIPHER_CTX *ctx , unsigned char *outm ,
                            int *outl ) ;
extern int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx , unsigned char *outm ,
                               int *outl ) ;
extern int EVP_CipherInit(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *cipher ,
                          unsigned char const   *key ,
                          unsigned char const   *iv , int enc ) ;
extern int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *cipher ,
                             ENGINE *impl , unsigned char const   *key ,
                             unsigned char const   *iv , int enc ) ;
extern int EVP_CipherUpdate(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                            int *outl , unsigned char const   *in , int inl ) ;
extern int EVP_CipherFinal(EVP_CIPHER_CTX *ctx , unsigned char *outm ,
                           int *outl ) ;
extern int EVP_CipherFinal_ex(EVP_CIPHER_CTX *ctx , unsigned char *outm ,
                              int *outl ) ;
extern int EVP_SignFinal(EVP_MD_CTX *ctx , unsigned char *md , unsigned int *s ,
                         EVP_PKEY *pkey ) ;
extern int EVP_VerifyFinal(EVP_MD_CTX *ctx , unsigned char const   *sigbuf ,
                           unsigned int siglen , EVP_PKEY *pkey ) ;
extern int EVP_DigestSignInit(EVP_MD_CTX *ctx , EVP_PKEY_CTX **pctx ,
                              EVP_MD const   *type , ENGINE *e , EVP_PKEY *pkey ) ;
extern int EVP_DigestSignFinal(EVP_MD_CTX *ctx , unsigned char *sigret ,
                               size_t *siglen ) ;
extern int EVP_DigestVerifyInit(EVP_MD_CTX *ctx , EVP_PKEY_CTX **pctx ,
                                EVP_MD const   *type , ENGINE *e ,
                                EVP_PKEY *pkey ) ;
extern int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx , unsigned char *sig ,
                                 size_t siglen ) ;
extern int EVP_OpenInit(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *type ,
                        unsigned char const   *ek , int ekl ,
                        unsigned char const   *iv , EVP_PKEY *priv ) ;
extern int EVP_OpenFinal(EVP_CIPHER_CTX *ctx , unsigned char *out , int *outl ) ;
extern int EVP_SealInit(EVP_CIPHER_CTX *ctx , EVP_CIPHER const   *type ,
                        unsigned char **ek , int *ekl , unsigned char *iv ,
                        EVP_PKEY **pubk , int npubk ) ;
extern int EVP_SealFinal(EVP_CIPHER_CTX *ctx , unsigned char *out , int *outl ) ;
extern void EVP_EncodeInit(EVP_ENCODE_CTX *ctx ) ;
extern void EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx , unsigned char *out ,
                             int *outl , unsigned char const   *in , int inl ) ;
extern void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx , unsigned char *out ,
                            int *outl ) ;
extern int EVP_EncodeBlock(unsigned char *t , unsigned char const   *f , int n ) ;
extern void EVP_DecodeInit(EVP_ENCODE_CTX *ctx ) ;
extern int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx , unsigned char *out ,
                            int *outl , unsigned char const   *in , int inl ) ;
extern int EVP_DecodeFinal(EVP_ENCODE_CTX *ctx , unsigned char *out , int *outl ) ;
extern int EVP_DecodeBlock(unsigned char *t , unsigned char const   *f , int n ) ;
extern void EVP_CIPHER_CTX_init(EVP_CIPHER_CTX *a ) ;
extern int EVP_CIPHER_CTX_cleanup(EVP_CIPHER_CTX *a ) ;
extern EVP_CIPHER_CTX *EVP_CIPHER_CTX_new(void) ;
extern void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *a ) ;
extern int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x , int keylen ) ;
extern int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c , int pad ) ;
extern int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx , int type , int arg ,
                               void *ptr ) ;
extern int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx , unsigned char *key ) ;
extern BIO_METHOD *BIO_f_md(void) ;
extern BIO_METHOD *BIO_f_base64(void) ;
extern BIO_METHOD *BIO_f_cipher(void) ;
extern BIO_METHOD *BIO_f_reliable(void) ;
extern void BIO_set_cipher(BIO *b , EVP_CIPHER const   *c ,
                           unsigned char const   *k , unsigned char const   *i ,
                           int enc ) ;
extern EVP_MD const   *EVP_md_null(void) ;
extern EVP_MD const   *EVP_md2(void) ;
extern EVP_MD const   *EVP_md4(void) ;
extern EVP_MD const   *EVP_md5(void) ;
extern EVP_MD const   *EVP_sha(void) ;
extern EVP_MD const   *EVP_sha1(void) ;
extern EVP_MD const   *EVP_dss(void) ;
extern EVP_MD const   *EVP_dss1(void) ;
extern EVP_MD const   *EVP_ecdsa(void) ;
extern EVP_MD const   *EVP_sha224(void) ;
extern EVP_MD const   *EVP_sha256(void) ;
extern EVP_MD const   *EVP_sha384(void) ;
extern EVP_MD const   *EVP_sha512(void) ;
extern EVP_MD const   *EVP_ripemd160(void) ;
extern EVP_MD const   *EVP_whirlpool(void) ;
extern EVP_CIPHER const   *EVP_enc_null(void) ;
extern EVP_CIPHER const   *EVP_des_ecb(void) ;
extern EVP_CIPHER const   *EVP_des_ede(void) ;
extern EVP_CIPHER const   *EVP_des_ede3(void) ;
extern EVP_CIPHER const   *EVP_des_ede_ecb(void) ;
extern EVP_CIPHER const   *EVP_des_ede3_ecb(void) ;
extern EVP_CIPHER const   *EVP_des_cfb64(void) ;
extern EVP_CIPHER const   *EVP_des_cfb1(void) ;
extern EVP_CIPHER const   *EVP_des_cfb8(void) ;
extern EVP_CIPHER const   *EVP_des_ede_cfb64(void) ;
extern EVP_CIPHER const   *EVP_des_ede3_cfb64(void) ;
extern EVP_CIPHER const   *EVP_des_ede3_cfb1(void) ;
extern EVP_CIPHER const   *EVP_des_ede3_cfb8(void) ;
extern EVP_CIPHER const   *EVP_des_ofb(void) ;
extern EVP_CIPHER const   *EVP_des_ede_ofb(void) ;
extern EVP_CIPHER const   *EVP_des_ede3_ofb(void) ;
extern EVP_CIPHER const   *EVP_des_cbc(void) ;
extern EVP_CIPHER const   *EVP_des_ede_cbc(void) ;
extern EVP_CIPHER const   *EVP_des_ede3_cbc(void) ;
extern EVP_CIPHER const   *EVP_desx_cbc(void) ;
extern EVP_CIPHER const   *EVP_rc4(void) ;
extern EVP_CIPHER const   *EVP_rc4_40(void) ;
extern EVP_CIPHER const   *EVP_rc2_ecb(void) ;
extern EVP_CIPHER const   *EVP_rc2_cbc(void) ;
extern EVP_CIPHER const   *EVP_rc2_40_cbc(void) ;
extern EVP_CIPHER const   *EVP_rc2_64_cbc(void) ;
extern EVP_CIPHER const   *EVP_rc2_cfb64(void) ;
extern EVP_CIPHER const   *EVP_rc2_ofb(void) ;
extern EVP_CIPHER const   *EVP_bf_ecb(void) ;
extern EVP_CIPHER const   *EVP_bf_cbc(void) ;
extern EVP_CIPHER const   *EVP_bf_cfb64(void) ;
extern EVP_CIPHER const   *EVP_bf_ofb(void) ;
extern EVP_CIPHER const   *EVP_cast5_ecb(void) ;
extern EVP_CIPHER const   *EVP_cast5_cbc(void) ;
extern EVP_CIPHER const   *EVP_cast5_cfb64(void) ;
extern EVP_CIPHER const   *EVP_cast5_ofb(void) ;
extern EVP_CIPHER const   *EVP_aes_128_ecb(void) ;
extern EVP_CIPHER const   *EVP_aes_128_cbc(void) ;
extern EVP_CIPHER const   *EVP_aes_128_cfb1(void) ;
extern EVP_CIPHER const   *EVP_aes_128_cfb8(void) ;
extern EVP_CIPHER const   *EVP_aes_128_cfb128(void) ;
extern EVP_CIPHER const   *EVP_aes_128_ofb(void) ;
extern EVP_CIPHER const   *EVP_aes_192_ecb(void) ;
extern EVP_CIPHER const   *EVP_aes_192_cbc(void) ;
extern EVP_CIPHER const   *EVP_aes_192_cfb1(void) ;
extern EVP_CIPHER const   *EVP_aes_192_cfb8(void) ;
extern EVP_CIPHER const   *EVP_aes_192_cfb128(void) ;
extern EVP_CIPHER const   *EVP_aes_192_ofb(void) ;
extern EVP_CIPHER const   *EVP_aes_256_ecb(void) ;
extern EVP_CIPHER const   *EVP_aes_256_cbc(void) ;
extern EVP_CIPHER const   *EVP_aes_256_cfb1(void) ;
extern EVP_CIPHER const   *EVP_aes_256_cfb8(void) ;
extern EVP_CIPHER const   *EVP_aes_256_cfb128(void) ;
extern EVP_CIPHER const   *EVP_aes_256_ofb(void) ;
extern EVP_CIPHER const   *EVP_camellia_128_ecb(void) ;
extern EVP_CIPHER const   *EVP_camellia_128_cbc(void) ;
extern EVP_CIPHER const   *EVP_camellia_128_cfb1(void) ;
extern EVP_CIPHER const   *EVP_camellia_128_cfb8(void) ;
extern EVP_CIPHER const   *EVP_camellia_128_cfb128(void) ;
extern EVP_CIPHER const   *EVP_camellia_128_ofb(void) ;
extern EVP_CIPHER const   *EVP_camellia_192_ecb(void) ;
extern EVP_CIPHER const   *EVP_camellia_192_cbc(void) ;
extern EVP_CIPHER const   *EVP_camellia_192_cfb1(void) ;
extern EVP_CIPHER const   *EVP_camellia_192_cfb8(void) ;
extern EVP_CIPHER const   *EVP_camellia_192_cfb128(void) ;
extern EVP_CIPHER const   *EVP_camellia_192_ofb(void) ;
extern EVP_CIPHER const   *EVP_camellia_256_ecb(void) ;
extern EVP_CIPHER const   *EVP_camellia_256_cbc(void) ;
extern EVP_CIPHER const   *EVP_camellia_256_cfb1(void) ;
extern EVP_CIPHER const   *EVP_camellia_256_cfb8(void) ;
extern EVP_CIPHER const   *EVP_camellia_256_cfb128(void) ;
extern EVP_CIPHER const   *EVP_camellia_256_ofb(void) ;
extern EVP_CIPHER const   *EVP_seed_ecb(void) ;
extern EVP_CIPHER const   *EVP_seed_cbc(void) ;
extern EVP_CIPHER const   *EVP_seed_cfb128(void) ;
extern EVP_CIPHER const   *EVP_seed_ofb(void) ;
extern void OPENSSL_add_all_algorithms_noconf(void) ;
extern void OPENSSL_add_all_algorithms_conf(void) ;
extern void OpenSSL_add_all_ciphers(void) ;
extern void OpenSSL_add_all_digests(void) ;
extern int EVP_add_cipher(EVP_CIPHER const   *cipher ) ;
extern int EVP_add_digest(EVP_MD const   *digest ) ;
extern EVP_CIPHER const   *EVP_get_cipherbyname(char const   *name ) ;
extern EVP_MD const   *EVP_get_digestbyname(char const   *name ) ;
extern void EVP_cleanup(void) ;
extern void EVP_CIPHER_do_all(void (*fn)(EVP_CIPHER const   *ciph ,
                                         char const   *from , char const   *to ,
                                         void *x ) , void *arg ) ;
extern void EVP_CIPHER_do_all_sorted(void (*fn)(EVP_CIPHER const   *ciph ,
                                                char const   *from ,
                                                char const   *to , void *x ) ,
                                     void *arg ) ;
extern void EVP_MD_do_all(void (*fn)(EVP_MD const   *ciph , char const   *from ,
                                     char const   *to , void *x ) , void *arg ) ;
extern void EVP_MD_do_all_sorted(void (*fn)(EVP_MD const   *ciph ,
                                            char const   *from ,
                                            char const   *to , void *x ) ,
                                 void *arg ) ;
extern int EVP_PKEY_decrypt_old(unsigned char *dec_key ,
                                unsigned char const   *enc_key ,
                                int enc_key_len , EVP_PKEY *private_key ) ;
extern int EVP_PKEY_encrypt_old(unsigned char *enc_key ,
                                unsigned char const   *key , int key_len ,
                                EVP_PKEY *pub_key ) ;
extern int EVP_PKEY_type(int type ) ;
extern int EVP_PKEY_id(EVP_PKEY const   *pkey ) ;
extern int EVP_PKEY_base_id(EVP_PKEY const   *pkey ) ;
extern int EVP_PKEY_bits(EVP_PKEY *pkey ) ;
extern int EVP_PKEY_size(EVP_PKEY *pkey ) ;
extern int EVP_PKEY_set_type(EVP_PKEY *pkey , int type ) ;
extern int EVP_PKEY_set_type_str(EVP_PKEY *pkey , char const   *str , int len ) ;
extern int EVP_PKEY_assign(EVP_PKEY *pkey , int type , void *key ) ;
extern void *EVP_PKEY_get0(EVP_PKEY *pkey ) ;
extern int EVP_PKEY_set1_RSA(EVP_PKEY *pkey , struct rsa_st *key ) ;
extern struct rsa_st *EVP_PKEY_get1_RSA(EVP_PKEY *pkey ) ;
extern int EVP_PKEY_set1_DSA(EVP_PKEY *pkey , struct dsa_st *key ) ;
extern struct dsa_st *EVP_PKEY_get1_DSA(EVP_PKEY *pkey ) ;
extern int EVP_PKEY_set1_DH(EVP_PKEY *pkey , struct dh_st *key ) ;
extern struct dh_st *EVP_PKEY_get1_DH(EVP_PKEY *pkey ) ;
extern EVP_PKEY *EVP_PKEY_new(void) ;
extern void EVP_PKEY_free(EVP_PKEY *pkey ) ;
extern EVP_PKEY *d2i_PublicKey(int type , EVP_PKEY **a ,
                               unsigned char const   **pp , long length ) ;
extern int i2d_PublicKey(EVP_PKEY *a , unsigned char **pp ) ;
extern EVP_PKEY *d2i_PrivateKey(int type , EVP_PKEY **a ,
                                unsigned char const   **pp , long length ) ;
extern EVP_PKEY *d2i_AutoPrivateKey(EVP_PKEY **a , unsigned char const   **pp ,
                                    long length ) ;
extern int i2d_PrivateKey(EVP_PKEY *a , unsigned char **pp ) ;
extern int EVP_PKEY_copy_parameters(EVP_PKEY *to , EVP_PKEY const   *from ) ;
extern int EVP_PKEY_missing_parameters(EVP_PKEY const   *pkey ) ;
extern int EVP_PKEY_save_parameters(EVP_PKEY *pkey , int mode ) ;
extern int EVP_PKEY_cmp_parameters(EVP_PKEY const   *a , EVP_PKEY const   *b ) ;
extern int EVP_PKEY_cmp(EVP_PKEY const   *a , EVP_PKEY const   *b ) ;
extern int EVP_PKEY_print_public(BIO *out , EVP_PKEY const   *pkey ,
                                 int indent , ASN1_PCTX *pctx ) ;
extern int EVP_PKEY_print_private(BIO *out , EVP_PKEY const   *pkey ,
                                  int indent , ASN1_PCTX *pctx ) ;
extern int EVP_PKEY_print_params(BIO *out , EVP_PKEY const   *pkey ,
                                 int indent , ASN1_PCTX *pctx ) ;
extern int EVP_PKEY_get_default_digest_nid(EVP_PKEY *pkey , int *pnid ) ;
extern int EVP_CIPHER_type(EVP_CIPHER const   *ctx ) ;
extern int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c , ASN1_TYPE *type ) ;
extern int EVP_CIPHER_asn1_to_param(EVP_CIPHER_CTX *c , ASN1_TYPE *type ) ;
extern int EVP_CIPHER_set_asn1_iv(EVP_CIPHER_CTX *c , ASN1_TYPE *type ) ;
extern int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c , ASN1_TYPE *type ) ;
extern int PKCS5_PBE_keyivgen(EVP_CIPHER_CTX *ctx , char const   *pass ,
                              int passlen , ASN1_TYPE *param ,
                              EVP_CIPHER const   *cipher , EVP_MD const   *md ,
                              int en_de ) ;
extern int PKCS5_PBKDF2_HMAC_SHA1(char const   *pass , int passlen ,
                                  unsigned char const   *salt , int saltlen ,
                                  int iter , int keylen , unsigned char *out ) ;
extern int PKCS5_PBKDF2_HMAC(char const   *pass , int passlen ,
                             unsigned char const   *salt , int saltlen ,
                             int iter , EVP_MD const   *digest , int keylen ,
                             unsigned char *out ) ;
extern int PKCS5_v2_PBE_keyivgen(EVP_CIPHER_CTX *ctx , char const   *pass ,
                                 int passlen , ASN1_TYPE *param ,
                                 EVP_CIPHER const   *cipher ,
                                 EVP_MD const   *md , int en_de ) ;
extern void PKCS5_PBE_add(void) ;
extern int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj , char const   *pass ,
                              int passlen , ASN1_TYPE *param ,
                              EVP_CIPHER_CTX *ctx , int en_de ) ;
extern int EVP_PBE_alg_add_type(int pbe_type , int pbe_nid , int cipher_nid ,
                                int md_nid , EVP_PBE_KEYGEN *keygen ) ;
extern int EVP_PBE_alg_add(int nid , EVP_CIPHER const   *cipher ,
                           EVP_MD const   *md , EVP_PBE_KEYGEN *keygen ) ;
extern int EVP_PBE_find(int type , int pbe_nid , int *pcnid , int *pmnid ,
                        EVP_PBE_KEYGEN **pkeygen ) ;
extern void EVP_PBE_cleanup(void) ;
extern int EVP_PKEY_asn1_get_count(void) ;
extern EVP_PKEY_ASN1_METHOD const   *EVP_PKEY_asn1_get0(int idx ) ;
extern EVP_PKEY_ASN1_METHOD const   *EVP_PKEY_asn1_find(ENGINE **pe , int type ) ;
extern EVP_PKEY_ASN1_METHOD const   *EVP_PKEY_asn1_find_str(ENGINE **pe ,
                                                            char const   *str ,
                                                            int len ) ;
extern int EVP_PKEY_asn1_add0(EVP_PKEY_ASN1_METHOD const   *ameth ) ;
extern int EVP_PKEY_asn1_add_alias(int to , int from ) ;
extern int EVP_PKEY_asn1_get0_info(int *ppkey_id , int *pkey_base_id ,
                                   int *ppkey_flags , char const   **pinfo ,
                                   char const   **ppem_str ,
                                   EVP_PKEY_ASN1_METHOD const   *ameth ) ;
extern EVP_PKEY_ASN1_METHOD const   *EVP_PKEY_get0_asn1(EVP_PKEY *pkey ) ;
extern EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_new(int id , int flags ,
                                               char const   *pem_str ,
                                               char const   *info ) ;
extern void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst ,
                               EVP_PKEY_ASN1_METHOD const   *src ) ;
extern void EVP_PKEY_asn1_free(EVP_PKEY_ASN1_METHOD *ameth ) ;
extern void EVP_PKEY_asn1_set_public(EVP_PKEY_ASN1_METHOD *ameth ,
                                     int (*pub_decode)(EVP_PKEY *pk ,
                                                       X509_PUBKEY *pub ) ,
                                     int (*pub_encode)(X509_PUBKEY *pub ,
                                                       EVP_PKEY const   *pk ) ,
                                     int (*pub_cmp)(EVP_PKEY const   *a ,
                                                    EVP_PKEY const   *b ) ,
                                     int (*pub_print)(BIO *out ,
                                                      EVP_PKEY const   *pkey ,
                                                      int indent ,
                                                      ASN1_PCTX *pctx ) ,
                                     int (*pkey_size)(EVP_PKEY const   *pk ) ,
                                     int (*pkey_bits)(EVP_PKEY const   *pk ) ) ;
extern void EVP_PKEY_asn1_set_private(EVP_PKEY_ASN1_METHOD *ameth ,
                                      int (*priv_decode)(EVP_PKEY *pk ,
                                                         PKCS8_PRIV_KEY_INFO *p8inf ) ,
                                      int (*priv_encode)(PKCS8_PRIV_KEY_INFO *p8 ,
                                                         EVP_PKEY const   *pk ) ,
                                      int (*priv_print)(BIO *out ,
                                                        EVP_PKEY const   *pkey ,
                                                        int indent ,
                                                        ASN1_PCTX *pctx ) ) ;
extern void EVP_PKEY_asn1_set_param(EVP_PKEY_ASN1_METHOD *ameth ,
                                    int (*param_decode)(EVP_PKEY *pkey ,
                                                        unsigned char const   **pder ,
                                                        int derlen ) ,
                                    int (*param_encode)(EVP_PKEY const   *pkey ,
                                                        unsigned char **pder ) ,
                                    int (*param_missing)(EVP_PKEY const   *pk ) ,
                                    int (*param_copy)(EVP_PKEY *to ,
                                                      EVP_PKEY const   *from ) ,
                                    int (*param_cmp)(EVP_PKEY const   *a ,
                                                     EVP_PKEY const   *b ) ,
                                    int (*param_print)(BIO *out ,
                                                       EVP_PKEY const   *pkey ,
                                                       int indent ,
                                                       ASN1_PCTX *pctx ) ) ;
extern void EVP_PKEY_asn1_set_free(EVP_PKEY_ASN1_METHOD *ameth ,
                                   void (*pkey_free)(EVP_PKEY *pkey ) ) ;
extern void EVP_PKEY_asn1_set_ctrl(EVP_PKEY_ASN1_METHOD *ameth ,
                                   int (*pkey_ctrl)(EVP_PKEY *pkey , int op ,
                                                    long arg1 , void *arg2 ) ) ;
extern EVP_PKEY_METHOD const   *EVP_PKEY_meth_find(int type ) ;
extern EVP_PKEY_METHOD *EVP_PKEY_meth_new(int id , int flags ) ;
extern void EVP_PKEY_meth_free(EVP_PKEY_METHOD *pmeth ) ;
extern int EVP_PKEY_meth_add0(EVP_PKEY_METHOD const   *pmeth ) ;
extern EVP_PKEY_CTX *EVP_PKEY_CTX_new(EVP_PKEY *pkey , ENGINE *e ) ;
extern EVP_PKEY_CTX *EVP_PKEY_CTX_new_id(int id , ENGINE *e ) ;
extern EVP_PKEY_CTX *EVP_PKEY_CTX_dup(EVP_PKEY_CTX *ctx ) ;
extern void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_CTX_ctrl(EVP_PKEY_CTX *ctx , int keytype , int optype ,
                             int cmd , int p1 , void *p2 ) ;
extern int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx , char const   *type ,
                                 char const   *value ) ;
extern int EVP_PKEY_CTX_get_operation(EVP_PKEY_CTX *ctx ) ;
extern void EVP_PKEY_CTX_set0_keygen_info(EVP_PKEY_CTX *ctx , int *dat ,
                                          int datlen ) ;
extern EVP_PKEY *EVP_PKEY_new_mac_key(int type , ENGINE *e ,
                                      unsigned char *key , int keylen ) ;
extern void EVP_PKEY_CTX_set_data(EVP_PKEY_CTX *ctx , void *data ) ;
extern void *EVP_PKEY_CTX_get_data(EVP_PKEY_CTX *ctx ) ;
extern EVP_PKEY *EVP_PKEY_CTX_get0_pkey(EVP_PKEY_CTX *ctx ) ;
extern EVP_PKEY *EVP_PKEY_CTX_get0_peerkey(EVP_PKEY_CTX *ctx ) ;
extern void EVP_PKEY_CTX_set_app_data(EVP_PKEY_CTX *ctx , void *data ) ;
extern void *EVP_PKEY_CTX_get_app_data(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_sign_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_sign(EVP_PKEY_CTX *ctx , unsigned char *sig ,
                         size_t *siglen , unsigned char const   *tbs ,
                         size_t tbslen ) ;
extern int EVP_PKEY_verify_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_verify(EVP_PKEY_CTX *ctx , unsigned char const   *sig ,
                           size_t siglen , unsigned char const   *tbs ,
                           size_t tbslen ) ;
extern int EVP_PKEY_verify_recover_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_verify_recover(EVP_PKEY_CTX *ctx , unsigned char *rout ,
                                   size_t *routlen ,
                                   unsigned char const   *sig , size_t siglen ) ;
extern int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx , unsigned char *out ,
                            size_t *outlen , unsigned char const   *in ,
                            size_t inlen ) ;
extern int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx , unsigned char *out ,
                            size_t *outlen , unsigned char const   *in ,
                            size_t inlen ) ;
extern int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx , EVP_PKEY *peer ) ;
extern int EVP_PKEY_derive(EVP_PKEY_CTX *ctx , unsigned char *key ,
                           size_t *keylen ) ;
extern int EVP_PKEY_paramgen_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_paramgen(EVP_PKEY_CTX *ctx , EVP_PKEY **ppkey ) ;
extern int EVP_PKEY_keygen_init(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx , EVP_PKEY **ppkey ) ;
extern void EVP_PKEY_CTX_set_cb(EVP_PKEY_CTX *ctx , EVP_PKEY_gen_cb *cb ) ;
extern EVP_PKEY_gen_cb *EVP_PKEY_CTX_get_cb(EVP_PKEY_CTX *ctx ) ;
extern int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx , int idx ) ;
extern void EVP_PKEY_meth_set_init(EVP_PKEY_METHOD *pmeth ,
                                   int (*init)(EVP_PKEY_CTX *ctx ) ) ;
extern void EVP_PKEY_meth_set_copy(EVP_PKEY_METHOD *pmeth ,
                                   int (*copy)(EVP_PKEY_CTX *dst ,
                                               EVP_PKEY_CTX *src ) ) ;
extern void EVP_PKEY_meth_set_cleanup(EVP_PKEY_METHOD *pmeth ,
                                      void (*cleanup)(EVP_PKEY_CTX *ctx ) ) ;
extern void EVP_PKEY_meth_set_paramgen(EVP_PKEY_METHOD *pmeth ,
                                       int (*paramgen_init)(EVP_PKEY_CTX *ctx ) ,
                                       int (*paramgen)(EVP_PKEY_CTX *ctx ,
                                                       EVP_PKEY *pkey ) ) ;
extern void EVP_PKEY_meth_set_keygen(EVP_PKEY_METHOD *pmeth ,
                                     int (*keygen_init)(EVP_PKEY_CTX *ctx ) ,
                                     int (*keygen)(EVP_PKEY_CTX *ctx ,
                                                   EVP_PKEY *pkey ) ) ;
extern void EVP_PKEY_meth_set_sign(EVP_PKEY_METHOD *pmeth ,
                                   int (*sign_init)(EVP_PKEY_CTX *ctx ) ,
                                   int (*sign)(EVP_PKEY_CTX *ctx ,
                                               unsigned char *sig ,
                                               size_t *siglen ,
                                               unsigned char const   *tbs ,
                                               size_t tbslen ) ) ;
extern void EVP_PKEY_meth_set_verify(EVP_PKEY_METHOD *pmeth ,
                                     int (*verify_init)(EVP_PKEY_CTX *ctx ) ,
                                     int (*verify)(EVP_PKEY_CTX *ctx ,
                                                   unsigned char const   *sig ,
                                                   size_t siglen ,
                                                   unsigned char const   *tbs ,
                                                   size_t tbslen ) ) ;
extern void EVP_PKEY_meth_set_verify_recover(EVP_PKEY_METHOD *pmeth ,
                                             int (*verify_recover_init)(EVP_PKEY_CTX *ctx ) ,
                                             int (*verify_recover)(EVP_PKEY_CTX *ctx ,
                                                                   unsigned char *sig ,
                                                                   size_t *siglen ,
                                                                   unsigned char const   *tbs ,
                                                                   size_t tbslen ) ) ;
extern void EVP_PKEY_meth_set_signctx(EVP_PKEY_METHOD *pmeth ,
                                      int (*signctx_init)(EVP_PKEY_CTX *ctx ,
                                                          EVP_MD_CTX *mctx ) ,
                                      int (*signctx)(EVP_PKEY_CTX *ctx ,
                                                     unsigned char *sig ,
                                                     size_t *siglen ,
                                                     EVP_MD_CTX *mctx ) ) ;
extern void EVP_PKEY_meth_set_verifyctx(EVP_PKEY_METHOD *pmeth ,
                                        int (*verifyctx_init)(EVP_PKEY_CTX *ctx ,
                                                              EVP_MD_CTX *mctx ) ,
                                        int (*verifyctx)(EVP_PKEY_CTX *ctx ,
                                                         unsigned char const   *sig ,
                                                         int siglen ,
                                                         EVP_MD_CTX *mctx ) ) ;
extern void EVP_PKEY_meth_set_encrypt(EVP_PKEY_METHOD *pmeth ,
                                      int (*encrypt_init)(EVP_PKEY_CTX *ctx ) ,
                                      int (*encryptfn)(EVP_PKEY_CTX *ctx ,
                                                       unsigned char *out ,
                                                       size_t *outlen ,
                                                       unsigned char const   *in ,
                                                       size_t inlen ) ) ;
extern void EVP_PKEY_meth_set_decrypt(EVP_PKEY_METHOD *pmeth ,
                                      int (*decrypt_init)(EVP_PKEY_CTX *ctx ) ,
                                      int (*decrypt)(EVP_PKEY_CTX *ctx ,
                                                     unsigned char *out ,
                                                     size_t *outlen ,
                                                     unsigned char const   *in ,
                                                     size_t inlen ) ) ;
extern void EVP_PKEY_meth_set_derive(EVP_PKEY_METHOD *pmeth ,
                                     int (*derive_init)(EVP_PKEY_CTX *ctx ) ,
                                     int (*derive)(EVP_PKEY_CTX *ctx ,
                                                   unsigned char *key ,
                                                   size_t *keylen ) ) ;
extern void EVP_PKEY_meth_set_ctrl(EVP_PKEY_METHOD *pmeth ,
                                   int (*ctrl)(EVP_PKEY_CTX *ctx , int type ,
                                               int p1 , void *p2 ) ,
                                   int (*ctrl_str)(EVP_PKEY_CTX *ctx ,
                                                   char const   *type ,
                                                   char const   *value ) ) ;
extern void ERR_load_EVP_strings(void) ;
extern RSA *RSA_new(void) ;
extern RSA *RSA_new_method(ENGINE *engine ) ;
extern int RSA_size(RSA const   * ) ;
extern RSA *RSA_generate_key(int bits , unsigned long e ,
                             void (*callback)(int  , int  , void * ) ,
                             void *cb_arg ) ;
extern int RSA_generate_key_ex(RSA *rsa , int bits , BIGNUM *e , BN_GENCB *cb ) ;
extern int RSA_X931_derive_ex(RSA *rsa , BIGNUM *p1 , BIGNUM *p2 , BIGNUM *q1 ,
                              BIGNUM *q2 , BIGNUM const   *Xp1 ,
                              BIGNUM const   *Xp2 , BIGNUM const   *Xp ,
                              BIGNUM const   *Xq1 , BIGNUM const   *Xq2 ,
                              BIGNUM const   *Xq , BIGNUM const   *e ,
                              BN_GENCB *cb ) ;
extern int RSA_X931_generate_key_ex(RSA *rsa , int bits , BIGNUM const   *e ,
                                    BN_GENCB *cb ) ;
extern int RSA_check_key(RSA const   * ) ;
extern int RSA_public_encrypt(int flen , unsigned char const   *from ,
                              unsigned char *to , RSA *rsa , int padding ) ;
extern int RSA_private_encrypt(int flen , unsigned char const   *from ,
                               unsigned char *to , RSA *rsa , int padding ) ;
extern int RSA_public_decrypt(int flen , unsigned char const   *from ,
                              unsigned char *to , RSA *rsa , int padding ) ;
extern int RSA_private_decrypt(int flen , unsigned char const   *from ,
                               unsigned char *to , RSA *rsa , int padding ) ;
extern void RSA_free(RSA *r ) ;
extern int RSA_up_ref(RSA *r ) ;
extern int RSA_flags(RSA const   *r ) ;
extern void RSA_set_default_method(RSA_METHOD const   *meth ) ;
extern RSA_METHOD const   *RSA_get_default_method(void) ;
extern RSA_METHOD const   *RSA_get_method(RSA const   *rsa ) ;
extern int RSA_set_method(RSA *rsa , RSA_METHOD const   *meth ) ;
extern int RSA_memory_lock(RSA *r ) ;
extern RSA_METHOD const   *RSA_PKCS1_SSLeay(void) ;
extern RSA_METHOD const   *RSA_null_method(void) ;
extern RSA *d2i_RSAPublicKey(RSA **a , unsigned char const   **in , long len ) ;
extern int i2d_RSAPublicKey(RSA const   *a , unsigned char **out ) ;
extern ASN1_ITEM const   RSAPublicKey_it ;
extern RSA *d2i_RSAPrivateKey(RSA **a , unsigned char const   **in , long len ) ;
extern int i2d_RSAPrivateKey(RSA const   *a , unsigned char **out ) ;
extern ASN1_ITEM const   RSAPrivateKey_it ;
extern int RSA_print_fp(FILE *fp , RSA const   *r , int offset ) ;
extern int RSA_print(BIO *bp , RSA const   *r , int offset ) ;
extern int i2d_RSA_NET(RSA const   *a , unsigned char **pp ,
                       int (*cb)(char *buf , int len , char const   *prompt ,
                                 int verify ) , int sgckey ) ;
extern RSA *d2i_RSA_NET(RSA **a , unsigned char const   **pp , long length ,
                        int (*cb)(char *buf , int len , char const   *prompt ,
                                  int verify ) , int sgckey ) ;
extern int i2d_Netscape_RSA(RSA const   *a , unsigned char **pp ,
                            int (*cb)(char *buf , int len ,
                                      char const   *prompt , int verify ) ) ;
extern RSA *d2i_Netscape_RSA(RSA **a , unsigned char const   **pp ,
                             long length , int (*cb)(char *buf , int len ,
                                                     char const   *prompt ,
                                                     int verify ) ) ;
extern int RSA_sign(int type , unsigned char const   *m ,
                    unsigned int m_length , unsigned char *sigret ,
                    unsigned int *siglen , RSA *rsa ) ;
extern int RSA_verify(int type , unsigned char const   *m ,
                      unsigned int m_length , unsigned char const   *sigbuf ,
                      unsigned int siglen , RSA *rsa ) ;
extern int RSA_sign_ASN1_OCTET_STRING(int type , unsigned char const   *m ,
                                      unsigned int m_length ,
                                      unsigned char *sigret ,
                                      unsigned int *siglen , RSA *rsa ) ;
extern int RSA_verify_ASN1_OCTET_STRING(int type , unsigned char const   *m ,
                                        unsigned int m_length ,
                                        unsigned char *sigbuf ,
                                        unsigned int siglen , RSA *rsa ) ;
extern int RSA_blinding_on(RSA *rsa , BN_CTX *ctx ) ;
extern void RSA_blinding_off(RSA *rsa ) ;
extern BN_BLINDING *RSA_setup_blinding(RSA *rsa , BN_CTX *ctx ) ;
extern int RSA_padding_add_PKCS1_type_1(unsigned char *to , int tlen ,
                                        unsigned char const   *f , int fl ) ;
extern int RSA_padding_check_PKCS1_type_1(unsigned char *to , int tlen ,
                                          unsigned char const   *f , int fl ,
                                          int rsa_len ) ;
extern int RSA_padding_add_PKCS1_type_2(unsigned char *to , int tlen ,
                                        unsigned char const   *f , int fl ) ;
extern int RSA_padding_check_PKCS1_type_2(unsigned char *to , int tlen ,
                                          unsigned char const   *f , int fl ,
                                          int rsa_len ) ;
extern int PKCS1_MGF1(unsigned char *mask , long len ,
                      unsigned char const   *seed , long seedlen ,
                      EVP_MD const   *dgst ) ;
extern int RSA_padding_add_PKCS1_OAEP(unsigned char *to , int tlen ,
                                      unsigned char const   *f , int fl ,
                                      unsigned char const   *p , int pl ) ;
extern int RSA_padding_check_PKCS1_OAEP(unsigned char *to , int tlen ,
                                        unsigned char const   *f , int fl ,
                                        int rsa_len , unsigned char const   *p ,
                                        int pl ) ;
extern int RSA_padding_add_SSLv23(unsigned char *to , int tlen ,
                                  unsigned char const   *f , int fl ) ;
extern int RSA_padding_check_SSLv23(unsigned char *to , int tlen ,
                                    unsigned char const   *f , int fl ,
                                    int rsa_len ) ;
extern int RSA_padding_add_none(unsigned char *to , int tlen ,
                                unsigned char const   *f , int fl ) ;
extern int RSA_padding_check_none(unsigned char *to , int tlen ,
                                  unsigned char const   *f , int fl ,
                                  int rsa_len ) ;
extern int RSA_padding_add_X931(unsigned char *to , int tlen ,
                                unsigned char const   *f , int fl ) ;
extern int RSA_padding_check_X931(unsigned char *to , int tlen ,
                                  unsigned char const   *f , int fl ,
                                  int rsa_len ) ;
extern int RSA_X931_hash_id(int nid ) ;
extern int RSA_verify_PKCS1_PSS(RSA *rsa , unsigned char const   *mHash ,
                                EVP_MD const   *Hash ,
                                unsigned char const   *EM , int sLen ) ;
extern int RSA_padding_add_PKCS1_PSS(RSA *rsa , unsigned char *EM ,
                                     unsigned char const   *mHash ,
                                     EVP_MD const   *Hash , int sLen ) ;
extern int RSA_get_ex_new_index(long argl , void *argp ,
                                CRYPTO_EX_new *new_func ,
                                CRYPTO_EX_dup *dup_func ,
                                CRYPTO_EX_free *free_func ) ;
extern int RSA_set_ex_data(RSA *r , int idx , void *arg ) ;
extern void *RSA_get_ex_data(RSA const   *r , int idx ) ;
extern RSA *RSAPublicKey_dup(RSA *rsa ) ;
extern RSA *RSAPrivateKey_dup(RSA *rsa ) ;
extern void ERR_load_RSA_strings(void) ;
extern DH *DHparams_dup(DH * ) ;
extern DH_METHOD const   *DH_OpenSSL(void) ;
extern void DH_set_default_method(DH_METHOD const   *meth ) ;
extern DH_METHOD const   *DH_get_default_method(void) ;
extern int DH_set_method(DH *dh , DH_METHOD const   *meth ) ;
extern DH *DH_new_method(ENGINE *engine ) ;
extern DH *DH_new(void) ;
extern void DH_free(DH *dh ) ;
extern int DH_up_ref(DH *dh ) ;
extern int DH_size(DH const   *dh ) ;
extern int DH_get_ex_new_index(long argl , void *argp ,
                               CRYPTO_EX_new *new_func ,
                               CRYPTO_EX_dup *dup_func ,
                               CRYPTO_EX_free *free_func ) ;
extern int DH_set_ex_data(DH *d , int idx , void *arg ) ;
extern void *DH_get_ex_data(DH *d , int idx ) ;
extern DH *DH_generate_parameters(int prime_len , int generator ,
                                  void (*callback)(int  , int  , void * ) ,
                                  void *cb_arg ) ;
extern int DH_generate_parameters_ex(DH *dh , int prime_len , int generator ,
                                     BN_GENCB *cb ) ;
extern int DH_check(DH const   *dh , int *codes ) ;
extern int DH_check_pub_key(DH const   *dh , BIGNUM const   *pub_key ,
                            int *codes ) ;
extern int DH_generate_key(DH *dh ) ;
extern int DH_compute_key(unsigned char *key , BIGNUM const   *pub_key , DH *dh ) ;
extern DH *d2i_DHparams(DH **a , unsigned char const   **pp , long length ) ;
extern int i2d_DHparams(DH const   *a , unsigned char **pp ) ;
extern int DHparams_print_fp(FILE *fp , DH const   *x ) ;
extern int DHparams_print(BIO *bp , DH const   *x ) ;
extern void ERR_load_DH_strings(void) ;
extern DSA *DSAparams_dup(DSA *x ) ;
extern DSA_SIG *DSA_SIG_new(void) ;
extern void DSA_SIG_free(DSA_SIG *a ) ;
extern int i2d_DSA_SIG(DSA_SIG const   *a , unsigned char **pp ) ;
extern DSA_SIG *d2i_DSA_SIG(DSA_SIG **v , unsigned char const   **pp ,
                            long length ) ;
extern DSA_SIG *DSA_do_sign(unsigned char const   *dgst , int dlen , DSA *dsa ) ;
extern int DSA_do_verify(unsigned char const   *dgst , int dgst_len ,
                         DSA_SIG *sig , DSA *dsa ) ;
extern DSA_METHOD const   *DSA_OpenSSL(void) ;
extern void DSA_set_default_method(DSA_METHOD const   * ) ;
extern DSA_METHOD const   *DSA_get_default_method(void) ;
extern int DSA_set_method(DSA *dsa , DSA_METHOD const   * ) ;
extern DSA *DSA_new(void) ;
extern DSA *DSA_new_method(ENGINE *engine ) ;
extern void DSA_free(DSA *r ) ;
extern int DSA_up_ref(DSA *r ) ;
extern int DSA_size(DSA const   * ) ;
extern int DSA_sign_setup(DSA *dsa , BN_CTX *ctx_in , BIGNUM **kinvp ,
                          BIGNUM **rp ) ;
extern int DSA_sign(int type , unsigned char const   *dgst , int dlen ,
                    unsigned char *sig , unsigned int *siglen , DSA *dsa ) ;
extern int DSA_verify(int type , unsigned char const   *dgst , int dgst_len ,
                      unsigned char const   *sigbuf , int siglen , DSA *dsa ) ;
extern int DSA_get_ex_new_index(long argl , void *argp ,
                                CRYPTO_EX_new *new_func ,
                                CRYPTO_EX_dup *dup_func ,
                                CRYPTO_EX_free *free_func ) ;
extern int DSA_set_ex_data(DSA *d , int idx , void *arg ) ;
extern void *DSA_get_ex_data(DSA *d , int idx ) ;
extern DSA *d2i_DSAPublicKey(DSA **a , unsigned char const   **pp , long length ) ;
extern DSA *d2i_DSAPrivateKey(DSA **a , unsigned char const   **pp ,
                              long length ) ;
extern DSA *d2i_DSAparams(DSA **a , unsigned char const   **pp , long length ) ;
extern DSA *DSA_generate_parameters(int bits , unsigned char *seed ,
                                    int seed_len , int *counter_ret ,
                                    unsigned long *h_ret ,
                                    void (*callback)(int  , int  , void * ) ,
                                    void *cb_arg ) ;
extern int DSA_generate_parameters_ex(DSA *dsa , int bits ,
                                      unsigned char const   *seed ,
                                      int seed_len , int *counter_ret ,
                                      unsigned long *h_ret , BN_GENCB *cb ) ;
extern int DSA_generate_key(DSA *a ) ;
extern int i2d_DSAPublicKey(DSA const   *a , unsigned char **pp ) ;
extern int i2d_DSAPrivateKey(DSA const   *a , unsigned char **pp ) ;
extern int i2d_DSAparams(DSA const   *a , unsigned char **pp ) ;
extern int DSAparams_print(BIO *bp , DSA const   *x ) ;
extern int DSA_print(BIO *bp , DSA const   *x , int off ) ;
extern int DSAparams_print_fp(FILE *fp , DSA const   *x ) ;
extern int DSA_print_fp(FILE *bp , DSA const   *x , int off ) ;
extern DH *DSA_dup_DH(DSA const   *r ) ;
extern void ERR_load_DSA_strings(void) ;
extern int private_SHA_Init(SHA_CTX *c ) ;
extern int SHA_Init(SHA_CTX *c ) ;
extern int SHA_Update(SHA_CTX *c , void const   *data , size_t len ) ;
extern int SHA_Final(unsigned char *md , SHA_CTX *c ) ;
extern unsigned char *SHA(unsigned char const   *d , size_t n ,
                          unsigned char *md ) ;
extern void SHA_Transform(SHA_CTX *c , unsigned char const   *data ) ;
extern int SHA1_Init(SHA_CTX *c ) ;
extern int SHA1_Update(SHA_CTX *c , void const   *data , size_t len ) ;
extern int SHA1_Final(unsigned char *md , SHA_CTX *c ) ;
extern unsigned char *SHA1(unsigned char const   *d , size_t n ,
                           unsigned char *md ) ;
extern void SHA1_Transform(SHA_CTX *c , unsigned char const   *data ) ;
extern int SHA224_Init(SHA256_CTX *c ) ;
extern int SHA224_Update(SHA256_CTX *c , void const   *data , size_t len ) ;
extern int SHA224_Final(unsigned char *md , SHA256_CTX *c ) ;
extern unsigned char *SHA224(unsigned char const   *d , size_t n ,
                             unsigned char *md ) ;
extern int SHA256_Init(SHA256_CTX *c ) ;
extern int SHA256_Update(SHA256_CTX *c , void const   *data , size_t len ) ;
extern int SHA256_Final(unsigned char *md , SHA256_CTX *c ) ;
extern unsigned char *SHA256(unsigned char const   *d , size_t n ,
                             unsigned char *md ) ;
extern void SHA256_Transform(SHA256_CTX *c , unsigned char const   *data ) ;
extern int SHA384_Init(SHA512_CTX *c ) ;
extern int SHA384_Update(SHA512_CTX *c , void const   *data , size_t len ) ;
extern int SHA384_Final(unsigned char *md , SHA512_CTX *c ) ;
extern unsigned char *SHA384(unsigned char const   *d , size_t n ,
                             unsigned char *md ) ;
extern int SHA512_Init(SHA512_CTX *c ) ;
extern int SHA512_Update(SHA512_CTX *c , void const   *data , size_t len ) ;
extern int SHA512_Final(unsigned char *md , SHA512_CTX *c ) ;
extern unsigned char *SHA512(unsigned char const   *d , size_t n ,
                             unsigned char *md ) ;
extern void SHA512_Transform(SHA512_CTX *c , unsigned char const   *data ) ;
extern _LHASH *lh_new(unsigned long (*h)(void const   * ) ,
                      int (*c)(void const   * , void const   * ) ) ;
extern void lh_free(_LHASH *lh ) ;
extern void *lh_insert(_LHASH *lh , void *data ) ;
extern void *lh_delete(_LHASH *lh , void const   *data ) ;
extern void *lh_retrieve(_LHASH *lh , void const   *data ) ;
extern void lh_doall(_LHASH *lh , void (*func)(void * ) ) ;
extern void lh_doall_arg(_LHASH *lh , void (*func)(void * , void * ) ,
                         void *arg ) ;
extern unsigned long lh_strhash(char const   *c ) ;
extern unsigned long lh_num_items(_LHASH const   *lh ) ;
extern void lh_stats(_LHASH const   *lh , FILE *out ) ;
extern void lh_node_stats(_LHASH const   *lh , FILE *out ) ;
extern void lh_node_usage_stats(_LHASH const   *lh , FILE *out ) ;
extern void lh_stats_bio(_LHASH const   *lh , BIO *out ) ;
extern void lh_node_stats_bio(_LHASH const   *lh , BIO *out ) ;
extern void lh_node_usage_stats_bio(_LHASH const   *lh , BIO *out ) ;
extern int X509_STORE_set_depth(X509_STORE *store , int depth ) ;
extern void X509_STORE_CTX_set_depth(X509_STORE_CTX *ctx , int depth ) ;
extern int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT *h ,
                                      int type , X509_NAME *name ) ;
extern X509_OBJECT *X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT *h ,
                                                    int type , X509_NAME *name ) ;
extern X509_OBJECT *X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT *h ,
                                               X509_OBJECT *x ) ;
extern void X509_OBJECT_up_ref_count(X509_OBJECT *a ) ;
extern void X509_OBJECT_free_contents(X509_OBJECT *a ) ;
extern X509_STORE *X509_STORE_new(void) ;
extern void X509_STORE_free(X509_STORE *v ) ;
extern struct stack_st_X509 *X509_STORE_get1_certs(X509_STORE_CTX *st ,
                                                   X509_NAME *nm ) ;
extern struct stack_st_X509_CRL *X509_STORE_get1_crls(X509_STORE_CTX *st ,
                                                      X509_NAME *nm ) ;
extern int X509_STORE_set_flags(X509_STORE *ctx , unsigned long flags ) ;
extern int X509_STORE_set_purpose(X509_STORE *ctx , int purpose ) ;
extern int X509_STORE_set_trust(X509_STORE *ctx , int trust ) ;
extern int X509_STORE_set1_param(X509_STORE *ctx , X509_VERIFY_PARAM *pm ) ;
extern void X509_STORE_set_verify_cb(X509_STORE *ctx ,
                                     int (*verify_cb)(int  , X509_STORE_CTX * ) ) ;
extern X509_STORE_CTX *X509_STORE_CTX_new(void) ;
extern int X509_STORE_CTX_get1_issuer(X509 **issuer , X509_STORE_CTX *ctx ,
                                      X509 *x ) ;
extern void X509_STORE_CTX_free(X509_STORE_CTX *ctx ) ;
extern int X509_STORE_CTX_init(X509_STORE_CTX *ctx , X509_STORE *store ,
                               X509 *x509 , struct stack_st_X509 *chain ) ;
extern void X509_STORE_CTX_trusted_stack(X509_STORE_CTX *ctx ,
                                         struct stack_st_X509 *sk ) ;
extern void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx ) ;
extern X509_LOOKUP *X509_STORE_add_lookup(X509_STORE *v , X509_LOOKUP_METHOD *m ) ;
extern X509_LOOKUP_METHOD *X509_LOOKUP_hash_dir(void) ;
extern X509_LOOKUP_METHOD *X509_LOOKUP_file(void) ;
extern int X509_STORE_add_cert(X509_STORE *ctx , X509 *x ) ;
extern int X509_STORE_add_crl(X509_STORE *ctx , X509_CRL *x ) ;
extern int X509_STORE_get_by_subject(X509_STORE_CTX *vs , int type ,
                                     X509_NAME *name , X509_OBJECT *ret ) ;
extern int X509_LOOKUP_ctrl(X509_LOOKUP *ctx , int cmd , char const   *argc ,
                            long argl , char **ret ) ;
extern int X509_load_cert_file(X509_LOOKUP *ctx , char const   *file , int type ) ;
extern int X509_load_crl_file(X509_LOOKUP *ctx , char const   *file , int type ) ;
extern int X509_load_cert_crl_file(X509_LOOKUP *ctx , char const   *file ,
                                   int type ) ;
extern X509_LOOKUP *X509_LOOKUP_new(X509_LOOKUP_METHOD *method ) ;
extern void X509_LOOKUP_free(X509_LOOKUP *ctx ) ;
extern int X509_LOOKUP_init(X509_LOOKUP *ctx ) ;
extern int X509_LOOKUP_by_subject(X509_LOOKUP *ctx , int type ,
                                  X509_NAME *name , X509_OBJECT *ret ) ;
extern int X509_LOOKUP_by_issuer_serial(X509_LOOKUP *ctx , int type ,
                                        X509_NAME *name , ASN1_INTEGER *serial ,
                                        X509_OBJECT *ret ) ;
extern int X509_LOOKUP_by_fingerprint(X509_LOOKUP *ctx , int type ,
                                      unsigned char *bytes , int len ,
                                      X509_OBJECT *ret ) ;
extern int X509_LOOKUP_by_alias(X509_LOOKUP *ctx , int type , char *str ,
                                int len , X509_OBJECT *ret ) ;
extern int X509_LOOKUP_shutdown(X509_LOOKUP *ctx ) ;
extern int X509_STORE_load_locations(X509_STORE *ctx , char const   *file ,
                                     char const   *dir ) ;
extern int X509_STORE_set_default_paths(X509_STORE *ctx ) ;
extern int X509_STORE_CTX_get_ex_new_index(long argl , void *argp ,
                                           CRYPTO_EX_new *new_func ,
                                           CRYPTO_EX_dup *dup_func ,
                                           CRYPTO_EX_free *free_func ) ;
extern int X509_STORE_CTX_set_ex_data(X509_STORE_CTX *ctx , int idx ,
                                      void *data ) ;
extern void *X509_STORE_CTX_get_ex_data(X509_STORE_CTX *ctx , int idx ) ;
extern int X509_STORE_CTX_get_error(X509_STORE_CTX *ctx ) ;
extern void X509_STORE_CTX_set_error(X509_STORE_CTX *ctx , int s ) ;
extern int X509_STORE_CTX_get_error_depth(X509_STORE_CTX *ctx ) ;
extern X509 *X509_STORE_CTX_get_current_cert(X509_STORE_CTX *ctx ) ;
extern X509 *X509_STORE_CTX_get0_current_issuer(X509_STORE_CTX *ctx ) ;
extern X509_CRL *X509_STORE_CTX_get0_current_crl(X509_STORE_CTX *ctx ) ;
extern X509_STORE_CTX *X509_STORE_CTX_get0_parent_ctx(X509_STORE_CTX *ctx ) ;
extern struct stack_st_X509 *X509_STORE_CTX_get_chain(X509_STORE_CTX *ctx ) ;
extern struct stack_st_X509 *X509_STORE_CTX_get1_chain(X509_STORE_CTX *ctx ) ;
extern void X509_STORE_CTX_set_cert(X509_STORE_CTX *c , X509 *x ) ;
extern void X509_STORE_CTX_set_chain(X509_STORE_CTX *c ,
                                     struct stack_st_X509 *sk ) ;
extern void X509_STORE_CTX_set0_crls(X509_STORE_CTX *c ,
                                     struct stack_st_X509_CRL *sk ) ;
extern int X509_STORE_CTX_set_purpose(X509_STORE_CTX *ctx , int purpose ) ;
extern int X509_STORE_CTX_set_trust(X509_STORE_CTX *ctx , int trust ) ;
extern int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx ,
                                          int def_purpose , int purpose ,
                                          int trust ) ;
extern void X509_STORE_CTX_set_flags(X509_STORE_CTX *ctx , unsigned long flags ) ;
extern void X509_STORE_CTX_set_time(X509_STORE_CTX *ctx , unsigned long flags ,
                                    time_t t ) ;
extern void X509_STORE_CTX_set_verify_cb(X509_STORE_CTX *ctx ,
                                         int (*verify_cb)(int  ,
                                                          X509_STORE_CTX * ) ) ;
extern X509_POLICY_TREE *X509_STORE_CTX_get0_policy_tree(X509_STORE_CTX *ctx ) ;
extern int X509_STORE_CTX_get_explicit_policy(X509_STORE_CTX *ctx ) ;
extern X509_VERIFY_PARAM *X509_STORE_CTX_get0_param(X509_STORE_CTX *ctx ) ;
extern void X509_STORE_CTX_set0_param(X509_STORE_CTX *ctx ,
                                      X509_VERIFY_PARAM *param ) ;
extern int X509_STORE_CTX_set_default(X509_STORE_CTX *ctx , char const   *name ) ;
extern X509_VERIFY_PARAM *X509_VERIFY_PARAM_new(void) ;
extern void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param ) ;
extern int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to ,
                                     X509_VERIFY_PARAM const   *from ) ;
extern int X509_VERIFY_PARAM_set1(X509_VERIFY_PARAM *to ,
                                  X509_VERIFY_PARAM const   *from ) ;
extern int X509_VERIFY_PARAM_set1_name(X509_VERIFY_PARAM *param ,
                                       char const   *name ) ;
extern int X509_VERIFY_PARAM_set_flags(X509_VERIFY_PARAM *param ,
                                       unsigned long flags ) ;
extern int X509_VERIFY_PARAM_clear_flags(X509_VERIFY_PARAM *param ,
                                         unsigned long flags ) ;
extern unsigned long X509_VERIFY_PARAM_get_flags(X509_VERIFY_PARAM *param ) ;
extern int X509_VERIFY_PARAM_set_purpose(X509_VERIFY_PARAM *param , int purpose ) ;
extern int X509_VERIFY_PARAM_set_trust(X509_VERIFY_PARAM *param , int trust ) ;
extern void X509_VERIFY_PARAM_set_depth(X509_VERIFY_PARAM *param , int depth ) ;
extern void X509_VERIFY_PARAM_set_time(X509_VERIFY_PARAM *param , time_t t ) ;
extern int X509_VERIFY_PARAM_add0_policy(X509_VERIFY_PARAM *param ,
                                         ASN1_OBJECT *policy ) ;
extern int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param ,
                                           struct stack_st_ASN1_OBJECT *policies ) ;
extern int X509_VERIFY_PARAM_get_depth(X509_VERIFY_PARAM const   *param ) ;
extern int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param ) ;
extern X509_VERIFY_PARAM const   *X509_VERIFY_PARAM_lookup(char const   *name ) ;
extern void X509_VERIFY_PARAM_table_cleanup(void) ;
extern int X509_policy_check(X509_POLICY_TREE **ptree , int *pexplicit_policy ,
                             struct stack_st_X509 *certs ,
                             struct stack_st_ASN1_OBJECT *policy_oids ,
                             unsigned int flags ) ;
extern void X509_policy_tree_free(X509_POLICY_TREE *tree ) ;
extern int X509_policy_tree_level_count(X509_POLICY_TREE const   *tree ) ;
extern X509_POLICY_LEVEL *X509_policy_tree_get0_level(X509_POLICY_TREE const   *tree ,
                                                      int i ) ;
extern struct stack_st_X509_POLICY_NODE *X509_policy_tree_get0_policies(X509_POLICY_TREE const   *tree ) ;
extern struct stack_st_X509_POLICY_NODE *X509_policy_tree_get0_user_policies(X509_POLICY_TREE const   *tree ) ;
extern int X509_policy_level_node_count(X509_POLICY_LEVEL *level ) ;
extern X509_POLICY_NODE *X509_policy_level_get0_node(X509_POLICY_LEVEL *level ,
                                                     int i ) ;
extern ASN1_OBJECT const   *X509_policy_node_get0_policy(X509_POLICY_NODE const   *node ) ;
extern struct stack_st_POLICYQUALINFO *X509_policy_node_get0_qualifiers(X509_POLICY_NODE const   *node ) ;
extern X509_POLICY_NODE const   *X509_policy_node_get0_parent(X509_POLICY_NODE const   *node ) ;
extern PKCS7_ISSUER_AND_SERIAL *PKCS7_ISSUER_AND_SERIAL_new(void) ;
extern void PKCS7_ISSUER_AND_SERIAL_free(PKCS7_ISSUER_AND_SERIAL *a ) ;
extern PKCS7_ISSUER_AND_SERIAL *d2i_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL **a ,
                                                            unsigned char const   **in ,
                                                            long len ) ;
extern int i2d_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL *a ,
                                       unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_ISSUER_AND_SERIAL_it ;
extern int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data ,
                                          EVP_MD const   *type ,
                                          unsigned char *md , unsigned int *len ) ;
extern PKCS7 *d2i_PKCS7_fp(FILE *fp , PKCS7 **p7 ) ;
extern int i2d_PKCS7_fp(FILE *fp , PKCS7 *p7 ) ;
extern PKCS7 *PKCS7_dup(PKCS7 *p7 ) ;
extern PKCS7 *d2i_PKCS7_bio(BIO *bp , PKCS7 **p7 ) ;
extern int i2d_PKCS7_bio(BIO *bp , PKCS7 *p7 ) ;
extern int i2d_PKCS7_bio_stream(BIO *out , PKCS7 *p7 , BIO *in , int flags ) ;
extern int PEM_write_bio_PKCS7_stream(BIO *out , PKCS7 *p7 , BIO *in ,
                                      int flags ) ;
extern PKCS7_SIGNER_INFO *PKCS7_SIGNER_INFO_new(void) ;
extern void PKCS7_SIGNER_INFO_free(PKCS7_SIGNER_INFO *a ) ;
extern PKCS7_SIGNER_INFO *d2i_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO **a ,
                                                unsigned char const   **in ,
                                                long len ) ;
extern int i2d_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_SIGNER_INFO_it ;
extern PKCS7_RECIP_INFO *PKCS7_RECIP_INFO_new(void) ;
extern void PKCS7_RECIP_INFO_free(PKCS7_RECIP_INFO *a ) ;
extern PKCS7_RECIP_INFO *d2i_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO **a ,
                                              unsigned char const   **in ,
                                              long len ) ;
extern int i2d_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_RECIP_INFO_it ;
extern PKCS7_SIGNED *PKCS7_SIGNED_new(void) ;
extern void PKCS7_SIGNED_free(PKCS7_SIGNED *a ) ;
extern PKCS7_SIGNED *d2i_PKCS7_SIGNED(PKCS7_SIGNED **a ,
                                      unsigned char const   **in , long len ) ;
extern int i2d_PKCS7_SIGNED(PKCS7_SIGNED *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_SIGNED_it ;
extern PKCS7_ENC_CONTENT *PKCS7_ENC_CONTENT_new(void) ;
extern void PKCS7_ENC_CONTENT_free(PKCS7_ENC_CONTENT *a ) ;
extern PKCS7_ENC_CONTENT *d2i_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT **a ,
                                                unsigned char const   **in ,
                                                long len ) ;
extern int i2d_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_ENC_CONTENT_it ;
extern PKCS7_ENVELOPE *PKCS7_ENVELOPE_new(void) ;
extern void PKCS7_ENVELOPE_free(PKCS7_ENVELOPE *a ) ;
extern PKCS7_ENVELOPE *d2i_PKCS7_ENVELOPE(PKCS7_ENVELOPE **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_PKCS7_ENVELOPE(PKCS7_ENVELOPE *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_ENVELOPE_it ;
extern PKCS7_SIGN_ENVELOPE *PKCS7_SIGN_ENVELOPE_new(void) ;
extern void PKCS7_SIGN_ENVELOPE_free(PKCS7_SIGN_ENVELOPE *a ) ;
extern PKCS7_SIGN_ENVELOPE *d2i_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE **a ,
                                                    unsigned char const   **in ,
                                                    long len ) ;
extern int i2d_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_SIGN_ENVELOPE_it ;
extern PKCS7_DIGEST *PKCS7_DIGEST_new(void) ;
extern void PKCS7_DIGEST_free(PKCS7_DIGEST *a ) ;
extern PKCS7_DIGEST *d2i_PKCS7_DIGEST(PKCS7_DIGEST **a ,
                                      unsigned char const   **in , long len ) ;
extern int i2d_PKCS7_DIGEST(PKCS7_DIGEST *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_DIGEST_it ;
extern PKCS7_ENCRYPT *PKCS7_ENCRYPT_new(void) ;
extern void PKCS7_ENCRYPT_free(PKCS7_ENCRYPT *a ) ;
extern PKCS7_ENCRYPT *d2i_PKCS7_ENCRYPT(PKCS7_ENCRYPT **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_PKCS7_ENCRYPT(PKCS7_ENCRYPT *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_ENCRYPT_it ;
extern PKCS7 *PKCS7_new(void) ;
extern void PKCS7_free(PKCS7 *a ) ;
extern PKCS7 *d2i_PKCS7(PKCS7 **a , unsigned char const   **in , long len ) ;
extern int i2d_PKCS7(PKCS7 *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS7_it ;
extern ASN1_ITEM const   PKCS7_ATTR_SIGN_it ;
extern ASN1_ITEM const   PKCS7_ATTR_VERIFY_it ;
extern int i2d_PKCS7_NDEF(PKCS7 *a , unsigned char **out ) ;
extern int PKCS7_print_ctx(BIO *out , PKCS7 *x , int indent ,
                           ASN1_PCTX const   *pctx ) ;
extern long PKCS7_ctrl(PKCS7 *p7 , int cmd , long larg , char *parg ) ;
extern int PKCS7_set_type(PKCS7 *p7 , int type ) ;
extern int PKCS7_set0_type_other(PKCS7 *p7 , int type , ASN1_TYPE *other ) ;
extern int PKCS7_set_content(PKCS7 *p7 , PKCS7 *p7_data ) ;
extern int PKCS7_SIGNER_INFO_set(PKCS7_SIGNER_INFO *p7i , X509 *x509 ,
                                 EVP_PKEY *pkey , EVP_MD const   *dgst ) ;
extern int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si ) ;
extern int PKCS7_add_signer(PKCS7 *p7 , PKCS7_SIGNER_INFO *p7i ) ;
extern int PKCS7_add_certificate(PKCS7 *p7 , X509 *x509 ) ;
extern int PKCS7_add_crl(PKCS7 *p7 , X509_CRL *x509 ) ;
extern int PKCS7_content_new(PKCS7 *p7 , int nid ) ;
extern int PKCS7_dataVerify(X509_STORE *cert_store , X509_STORE_CTX *ctx ,
                            BIO *bio , PKCS7 *p7 , PKCS7_SIGNER_INFO *si ) ;
extern int PKCS7_signatureVerify(BIO *bio , PKCS7 *p7 , PKCS7_SIGNER_INFO *si ,
                                 X509 *x509 ) ;
extern BIO *PKCS7_dataInit(PKCS7 *p7 , BIO *bio ) ;
extern int PKCS7_dataFinal(PKCS7 *p7 , BIO *bio ) ;
extern BIO *PKCS7_dataDecode(PKCS7 *p7 , EVP_PKEY *pkey , BIO *in_bio ,
                             X509 *pcert ) ;
extern PKCS7_SIGNER_INFO *PKCS7_add_signature(PKCS7 *p7 , X509 *x509 ,
                                              EVP_PKEY *pkey ,
                                              EVP_MD const   *dgst ) ;
extern X509 *PKCS7_cert_from_signer_info(PKCS7 *p7 , PKCS7_SIGNER_INFO *si ) ;
extern int PKCS7_set_digest(PKCS7 *p7 , EVP_MD const   *md ) ;
extern struct stack_st_PKCS7_SIGNER_INFO *PKCS7_get_signer_info(PKCS7 *p7 ) ;
extern PKCS7_RECIP_INFO *PKCS7_add_recipient(PKCS7 *p7 , X509 *x509 ) ;
extern void PKCS7_SIGNER_INFO_get0_algs(PKCS7_SIGNER_INFO *si , EVP_PKEY **pk ,
                                        X509_ALGOR **pdig , X509_ALGOR **psig ) ;
extern void PKCS7_RECIP_INFO_get0_alg(PKCS7_RECIP_INFO *ri , X509_ALGOR **penc ) ;
extern int PKCS7_add_recipient_info(PKCS7 *p7 , PKCS7_RECIP_INFO *ri ) ;
extern int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i , X509 *x509 ) ;
extern int PKCS7_set_cipher(PKCS7 *p7 , EVP_CIPHER const   *cipher ) ;
extern int PKCS7_stream(unsigned char ***boundary , PKCS7 *p7 ) ;
extern PKCS7_ISSUER_AND_SERIAL *PKCS7_get_issuer_and_serial(PKCS7 *p7 , int idx ) ;
extern ASN1_OCTET_STRING *PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE *sk ) ;
extern int PKCS7_add_signed_attribute(PKCS7_SIGNER_INFO *p7si , int nid ,
                                      int type , void *data ) ;
extern int PKCS7_add_attribute(PKCS7_SIGNER_INFO *p7si , int nid , int atrtype ,
                               void *value ) ;
extern ASN1_TYPE *PKCS7_get_attribute(PKCS7_SIGNER_INFO *si , int nid ) ;
extern ASN1_TYPE *PKCS7_get_signed_attribute(PKCS7_SIGNER_INFO *si , int nid ) ;
extern int PKCS7_set_signed_attributes(PKCS7_SIGNER_INFO *p7si ,
                                       struct stack_st_X509_ATTRIBUTE *sk ) ;
extern int PKCS7_set_attributes(PKCS7_SIGNER_INFO *p7si ,
                                struct stack_st_X509_ATTRIBUTE *sk ) ;
extern PKCS7 *PKCS7_sign(X509 *signcert , EVP_PKEY *pkey ,
                         struct stack_st_X509 *certs , BIO *data , int flags ) ;
extern PKCS7_SIGNER_INFO *PKCS7_sign_add_signer(PKCS7 *p7 , X509 *signcert ,
                                                EVP_PKEY *pkey ,
                                                EVP_MD const   *md , int flags ) ;
extern int PKCS7_final(PKCS7 *p7 , BIO *data , int flags ) ;
extern int PKCS7_verify(PKCS7 *p7 , struct stack_st_X509 *certs ,
                        X509_STORE *store , BIO *indata , BIO *out , int flags ) ;
extern struct stack_st_X509 *PKCS7_get0_signers(PKCS7 *p7 ,
                                                struct stack_st_X509 *certs ,
                                                int flags ) ;
extern PKCS7 *PKCS7_encrypt(struct stack_st_X509 *certs , BIO *in ,
                            EVP_CIPHER const   *cipher , int flags ) ;
extern int PKCS7_decrypt(PKCS7 *p7 , EVP_PKEY *pkey , X509 *cert , BIO *data ,
                         int flags ) ;
extern int PKCS7_add_attrib_smimecap(PKCS7_SIGNER_INFO *si ,
                                     struct stack_st_X509_ALGOR *cap ) ;
extern struct stack_st_X509_ALGOR *PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si ) ;
extern int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR *sk , int nid ,
                                 int arg ) ;
extern int PKCS7_add_attrib_content_type(PKCS7_SIGNER_INFO *si ,
                                         ASN1_OBJECT *coid ) ;
extern int PKCS7_add0_attrib_signing_time(PKCS7_SIGNER_INFO *si , ASN1_TIME *t ) ;
extern int PKCS7_add1_attrib_digest(PKCS7_SIGNER_INFO *si ,
                                    unsigned char const   *md , int mdlen ) ;
extern int SMIME_write_PKCS7(BIO *bio , PKCS7 *p7 , BIO *data , int flags ) ;
extern PKCS7 *SMIME_read_PKCS7(BIO *bio , BIO **bcont ) ;
extern BIO *BIO_new_PKCS7(BIO *out , PKCS7 *p7 ) ;
extern void ERR_load_PKCS7_strings(void) ;
extern void X509_CRL_set_default_method(X509_CRL_METHOD const   *meth ) ;
extern X509_CRL_METHOD *X509_CRL_METHOD_new(int (*crl_init)(X509_CRL *crl ) ,
                                            int (*crl_free)(X509_CRL *crl ) ,
                                            int (*crl_lookup)(X509_CRL *crl ,
                                                              X509_REVOKED **ret ,
                                                              ASN1_INTEGER *ser ,
                                                              X509_NAME *issuer ) ,
                                            int (*crl_verify)(X509_CRL *crl ,
                                                              EVP_PKEY *pk ) ) ;
extern void X509_CRL_METHOD_free(X509_CRL_METHOD *m ) ;
extern void X509_CRL_set_meth_data(X509_CRL *crl , void *dat ) ;
extern void *X509_CRL_get_meth_data(X509_CRL *crl ) ;
extern char const   *X509_verify_cert_error_string(long n ) ;
extern int X509_verify(X509 *a , EVP_PKEY *r ) ;
extern int X509_REQ_verify(X509_REQ *a , EVP_PKEY *r ) ;
extern int X509_CRL_verify(X509_CRL *a , EVP_PKEY *r ) ;
extern int NETSCAPE_SPKI_verify(NETSCAPE_SPKI *a , EVP_PKEY *r ) ;
extern NETSCAPE_SPKI *NETSCAPE_SPKI_b64_decode(char const   *str , int len ) ;
extern char *NETSCAPE_SPKI_b64_encode(NETSCAPE_SPKI *x ) ;
extern EVP_PKEY *NETSCAPE_SPKI_get_pubkey(NETSCAPE_SPKI *x ) ;
extern int NETSCAPE_SPKI_set_pubkey(NETSCAPE_SPKI *x , EVP_PKEY *pkey ) ;
extern int NETSCAPE_SPKI_print(BIO *out , NETSCAPE_SPKI *spki ) ;
extern int X509_signature_print(BIO *bp , X509_ALGOR *alg , ASN1_STRING *sig ) ;
extern int X509_sign(X509 *x , EVP_PKEY *pkey , EVP_MD const   *md ) ;
extern int X509_REQ_sign(X509_REQ *x , EVP_PKEY *pkey , EVP_MD const   *md ) ;
extern int X509_CRL_sign(X509_CRL *x , EVP_PKEY *pkey , EVP_MD const   *md ) ;
extern int NETSCAPE_SPKI_sign(NETSCAPE_SPKI *x , EVP_PKEY *pkey ,
                              EVP_MD const   *md ) ;
extern int X509_pubkey_digest(X509 const   *data , EVP_MD const   *type ,
                              unsigned char *md , unsigned int *len ) ;
extern int X509_digest(X509 const   *data , EVP_MD const   *type ,
                       unsigned char *md , unsigned int *len ) ;
extern int X509_CRL_digest(X509_CRL const   *data , EVP_MD const   *type ,
                           unsigned char *md , unsigned int *len ) ;
extern int X509_REQ_digest(X509_REQ const   *data , EVP_MD const   *type ,
                           unsigned char *md , unsigned int *len ) ;
extern int X509_NAME_digest(X509_NAME const   *data , EVP_MD const   *type ,
                            unsigned char *md , unsigned int *len ) ;
extern X509 *d2i_X509_fp(FILE *fp , X509 **x509 ) ;
extern int i2d_X509_fp(FILE *fp , X509 *x509 ) ;
extern X509_CRL *d2i_X509_CRL_fp(FILE *fp , X509_CRL **crl ) ;
extern int i2d_X509_CRL_fp(FILE *fp , X509_CRL *crl ) ;
extern X509_REQ *d2i_X509_REQ_fp(FILE *fp , X509_REQ **req ) ;
extern int i2d_X509_REQ_fp(FILE *fp , X509_REQ *req ) ;
extern RSA *d2i_RSAPrivateKey_fp(FILE *fp , RSA **rsa ) ;
extern int i2d_RSAPrivateKey_fp(FILE *fp , RSA *rsa ) ;
extern RSA *d2i_RSAPublicKey_fp(FILE *fp , RSA **rsa ) ;
extern int i2d_RSAPublicKey_fp(FILE *fp , RSA *rsa ) ;
extern RSA *d2i_RSA_PUBKEY_fp(FILE *fp , RSA **rsa ) ;
extern int i2d_RSA_PUBKEY_fp(FILE *fp , RSA *rsa ) ;
extern DSA *d2i_DSA_PUBKEY_fp(FILE *fp , DSA **dsa ) ;
extern int i2d_DSA_PUBKEY_fp(FILE *fp , DSA *dsa ) ;
extern DSA *d2i_DSAPrivateKey_fp(FILE *fp , DSA **dsa ) ;
extern int i2d_DSAPrivateKey_fp(FILE *fp , DSA *dsa ) ;
extern X509_SIG *d2i_PKCS8_fp(FILE *fp , X509_SIG **p8 ) ;
extern int i2d_PKCS8_fp(FILE *fp , X509_SIG *p8 ) ;
extern PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_fp(FILE *fp ,
                                                       PKCS8_PRIV_KEY_INFO **p8inf ) ;
extern int i2d_PKCS8_PRIV_KEY_INFO_fp(FILE *fp , PKCS8_PRIV_KEY_INFO *p8inf ) ;
extern int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp , EVP_PKEY *key ) ;
extern int i2d_PrivateKey_fp(FILE *fp , EVP_PKEY *pkey ) ;
extern EVP_PKEY *d2i_PrivateKey_fp(FILE *fp , EVP_PKEY **a ) ;
extern int i2d_PUBKEY_fp(FILE *fp , EVP_PKEY *pkey ) ;
extern EVP_PKEY *d2i_PUBKEY_fp(FILE *fp , EVP_PKEY **a ) ;
extern X509 *d2i_X509_bio(BIO *bp , X509 **x509 ) ;
extern int i2d_X509_bio(BIO *bp , X509 *x509 ) ;
extern X509_CRL *d2i_X509_CRL_bio(BIO *bp , X509_CRL **crl ) ;
extern int i2d_X509_CRL_bio(BIO *bp , X509_CRL *crl ) ;
extern X509_REQ *d2i_X509_REQ_bio(BIO *bp , X509_REQ **req ) ;
extern int i2d_X509_REQ_bio(BIO *bp , X509_REQ *req ) ;
extern RSA *d2i_RSAPrivateKey_bio(BIO *bp , RSA **rsa ) ;
extern int i2d_RSAPrivateKey_bio(BIO *bp , RSA *rsa ) ;
extern RSA *d2i_RSAPublicKey_bio(BIO *bp , RSA **rsa ) ;
extern int i2d_RSAPublicKey_bio(BIO *bp , RSA *rsa ) ;
extern RSA *d2i_RSA_PUBKEY_bio(BIO *bp , RSA **rsa ) ;
extern int i2d_RSA_PUBKEY_bio(BIO *bp , RSA *rsa ) ;
extern DSA *d2i_DSA_PUBKEY_bio(BIO *bp , DSA **dsa ) ;
extern int i2d_DSA_PUBKEY_bio(BIO *bp , DSA *dsa ) ;
extern DSA *d2i_DSAPrivateKey_bio(BIO *bp , DSA **dsa ) ;
extern int i2d_DSAPrivateKey_bio(BIO *bp , DSA *dsa ) ;
extern X509_SIG *d2i_PKCS8_bio(BIO *bp , X509_SIG **p8 ) ;
extern int i2d_PKCS8_bio(BIO *bp , X509_SIG *p8 ) ;
extern PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_bio(BIO *bp ,
                                                        PKCS8_PRIV_KEY_INFO **p8inf ) ;
extern int i2d_PKCS8_PRIV_KEY_INFO_bio(BIO *bp , PKCS8_PRIV_KEY_INFO *p8inf ) ;
extern int i2d_PKCS8PrivateKeyInfo_bio(BIO *bp , EVP_PKEY *key ) ;
extern int i2d_PrivateKey_bio(BIO *bp , EVP_PKEY *pkey ) ;
extern EVP_PKEY *d2i_PrivateKey_bio(BIO *bp , EVP_PKEY **a ) ;
extern int i2d_PUBKEY_bio(BIO *bp , EVP_PKEY *pkey ) ;
extern EVP_PKEY *d2i_PUBKEY_bio(BIO *bp , EVP_PKEY **a ) ;
extern X509 *X509_dup(X509 *x509 ) ;
extern X509_ATTRIBUTE *X509_ATTRIBUTE_dup(X509_ATTRIBUTE *xa ) ;
extern X509_EXTENSION *X509_EXTENSION_dup(X509_EXTENSION *ex ) ;
extern X509_CRL *X509_CRL_dup(X509_CRL *crl ) ;
extern X509_REQ *X509_REQ_dup(X509_REQ *req ) ;
extern X509_ALGOR *X509_ALGOR_dup(X509_ALGOR *xn ) ;
extern int X509_ALGOR_set0(X509_ALGOR *alg , ASN1_OBJECT *aobj , int ptype ,
                           void *pval ) ;
extern void X509_ALGOR_get0(ASN1_OBJECT **paobj , int *pptype , void **ppval ,
                            X509_ALGOR *algor ) ;
extern X509_NAME *X509_NAME_dup(X509_NAME *xn ) ;
extern X509_NAME_ENTRY *X509_NAME_ENTRY_dup(X509_NAME_ENTRY *ne ) ;
extern int X509_cmp_time(ASN1_TIME const   *s , time_t *t ) ;
extern int X509_cmp_current_time(ASN1_TIME const   *s ) ;
extern ASN1_TIME *X509_time_adj(ASN1_TIME *s , long adj , time_t *t ) ;
extern ASN1_TIME *X509_time_adj_ex(ASN1_TIME *s , int offset_day ,
                                   long offset_sec , time_t *t ) ;
extern ASN1_TIME *X509_gmtime_adj(ASN1_TIME *s , long adj ) ;
extern char const   *X509_get_default_cert_area(void) ;
extern char const   *X509_get_default_cert_dir(void) ;
extern char const   *X509_get_default_cert_file(void) ;
extern char const   *X509_get_default_cert_dir_env(void) ;
extern char const   *X509_get_default_cert_file_env(void) ;
extern char const   *X509_get_default_private_dir(void) ;
extern X509_REQ *X509_to_X509_REQ(X509 *x , EVP_PKEY *pkey , EVP_MD const   *md ) ;
extern X509 *X509_REQ_to_X509(X509_REQ *r , int days , EVP_PKEY *pkey ) ;
extern X509_ALGOR *X509_ALGOR_new(void) ;
extern void X509_ALGOR_free(X509_ALGOR *a ) ;
extern X509_ALGOR *d2i_X509_ALGOR(X509_ALGOR **a , unsigned char const   **in ,
                                  long len ) ;
extern int i2d_X509_ALGOR(X509_ALGOR *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_ALGOR_it ;
extern X509_ALGORS *d2i_X509_ALGORS(X509_ALGORS **a ,
                                    unsigned char const   **in , long len ) ;
extern int i2d_X509_ALGORS(X509_ALGORS *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_ALGORS_it ;
extern X509_VAL *X509_VAL_new(void) ;
extern void X509_VAL_free(X509_VAL *a ) ;
extern X509_VAL *d2i_X509_VAL(X509_VAL **a , unsigned char const   **in ,
                              long len ) ;
extern int i2d_X509_VAL(X509_VAL *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_VAL_it ;
extern X509_PUBKEY *X509_PUBKEY_new(void) ;
extern void X509_PUBKEY_free(X509_PUBKEY *a ) ;
extern X509_PUBKEY *d2i_X509_PUBKEY(X509_PUBKEY **a ,
                                    unsigned char const   **in , long len ) ;
extern int i2d_X509_PUBKEY(X509_PUBKEY *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_PUBKEY_it ;
extern int X509_PUBKEY_set(X509_PUBKEY **x , EVP_PKEY *pkey ) ;
extern EVP_PKEY *X509_PUBKEY_get(X509_PUBKEY *key ) ;
extern int X509_get_pubkey_parameters(EVP_PKEY *pkey ,
                                      struct stack_st_X509 *chain ) ;
extern int i2d_PUBKEY(EVP_PKEY *a , unsigned char **pp ) ;
extern EVP_PKEY *d2i_PUBKEY(EVP_PKEY **a , unsigned char const   **pp ,
                            long length ) ;
extern int i2d_RSA_PUBKEY(RSA *a , unsigned char **pp ) ;
extern RSA *d2i_RSA_PUBKEY(RSA **a , unsigned char const   **pp , long length ) ;
extern int i2d_DSA_PUBKEY(DSA *a , unsigned char **pp ) ;
extern DSA *d2i_DSA_PUBKEY(DSA **a , unsigned char const   **pp , long length ) ;
extern X509_SIG *X509_SIG_new(void) ;
extern void X509_SIG_free(X509_SIG *a ) ;
extern X509_SIG *d2i_X509_SIG(X509_SIG **a , unsigned char const   **in ,
                              long len ) ;
extern int i2d_X509_SIG(X509_SIG *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_SIG_it ;
extern X509_REQ_INFO *X509_REQ_INFO_new(void) ;
extern void X509_REQ_INFO_free(X509_REQ_INFO *a ) ;
extern X509_REQ_INFO *d2i_X509_REQ_INFO(X509_REQ_INFO **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_X509_REQ_INFO(X509_REQ_INFO *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_REQ_INFO_it ;
extern X509_REQ *X509_REQ_new(void) ;
extern void X509_REQ_free(X509_REQ *a ) ;
extern X509_REQ *d2i_X509_REQ(X509_REQ **a , unsigned char const   **in ,
                              long len ) ;
extern int i2d_X509_REQ(X509_REQ *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_REQ_it ;
extern X509_ATTRIBUTE *X509_ATTRIBUTE_new(void) ;
extern void X509_ATTRIBUTE_free(X509_ATTRIBUTE *a ) ;
extern X509_ATTRIBUTE *d2i_X509_ATTRIBUTE(X509_ATTRIBUTE **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_X509_ATTRIBUTE(X509_ATTRIBUTE *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_ATTRIBUTE_it ;
extern X509_ATTRIBUTE *X509_ATTRIBUTE_create(int nid , int atrtype ,
                                             void *value ) ;
extern X509_EXTENSION *X509_EXTENSION_new(void) ;
extern void X509_EXTENSION_free(X509_EXTENSION *a ) ;
extern X509_EXTENSION *d2i_X509_EXTENSION(X509_EXTENSION **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_X509_EXTENSION(X509_EXTENSION *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_EXTENSION_it ;
extern X509_EXTENSIONS *d2i_X509_EXTENSIONS(X509_EXTENSIONS **a ,
                                            unsigned char const   **in ,
                                            long len ) ;
extern int i2d_X509_EXTENSIONS(X509_EXTENSIONS *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_EXTENSIONS_it ;
extern X509_NAME_ENTRY *X509_NAME_ENTRY_new(void) ;
extern void X509_NAME_ENTRY_free(X509_NAME_ENTRY *a ) ;
extern X509_NAME_ENTRY *d2i_X509_NAME_ENTRY(X509_NAME_ENTRY **a ,
                                            unsigned char const   **in ,
                                            long len ) ;
extern int i2d_X509_NAME_ENTRY(X509_NAME_ENTRY *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_NAME_ENTRY_it ;
extern X509_NAME *X509_NAME_new(void) ;
extern void X509_NAME_free(X509_NAME *a ) ;
extern X509_NAME *d2i_X509_NAME(X509_NAME **a , unsigned char const   **in ,
                                long len ) ;
extern int i2d_X509_NAME(X509_NAME *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_NAME_it ;
extern int X509_NAME_set(X509_NAME **xn , X509_NAME *name ) ;
extern X509_CINF *X509_CINF_new(void) ;
extern void X509_CINF_free(X509_CINF *a ) ;
extern X509_CINF *d2i_X509_CINF(X509_CINF **a , unsigned char const   **in ,
                                long len ) ;
extern int i2d_X509_CINF(X509_CINF *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_CINF_it ;
extern X509 *X509_new(void) ;
extern void X509_free(X509 *a ) ;
extern X509 *d2i_X509(X509 **a , unsigned char const   **in , long len ) ;
extern int i2d_X509(X509 *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_it ;
extern X509_CERT_AUX *X509_CERT_AUX_new(void) ;
extern void X509_CERT_AUX_free(X509_CERT_AUX *a ) ;
extern X509_CERT_AUX *d2i_X509_CERT_AUX(X509_CERT_AUX **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_X509_CERT_AUX(X509_CERT_AUX *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_CERT_AUX_it ;
extern X509_CERT_PAIR *X509_CERT_PAIR_new(void) ;
extern void X509_CERT_PAIR_free(X509_CERT_PAIR *a ) ;
extern X509_CERT_PAIR *d2i_X509_CERT_PAIR(X509_CERT_PAIR **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_X509_CERT_PAIR(X509_CERT_PAIR *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_CERT_PAIR_it ;
extern int X509_get_ex_new_index(long argl , void *argp ,
                                 CRYPTO_EX_new *new_func ,
                                 CRYPTO_EX_dup *dup_func ,
                                 CRYPTO_EX_free *free_func ) ;
extern int X509_set_ex_data(X509 *r , int idx , void *arg ) ;
extern void *X509_get_ex_data(X509 *r , int idx ) ;
extern int i2d_X509_AUX(X509 *a , unsigned char **pp ) ;
extern X509 *d2i_X509_AUX(X509 **a , unsigned char const   **pp , long length ) ;
extern int X509_alias_set1(X509 *x , unsigned char *name , int len ) ;
extern int X509_keyid_set1(X509 *x , unsigned char *id , int len ) ;
extern unsigned char *X509_alias_get0(X509 *x , int *len ) ;
extern unsigned char *X509_keyid_get0(X509 *x , int *len ) ;
extern int (*X509_TRUST_set_default(int (*trust)(int  , X509 * , int  ) ))(int  ,
                                                                           X509 * ,
                                                                           int  ) ;
extern int X509_TRUST_set(int *t , int trust ) ;
extern int X509_add1_trust_object(X509 *x , ASN1_OBJECT *obj ) ;
extern int X509_add1_reject_object(X509 *x , ASN1_OBJECT *obj ) ;
extern void X509_trust_clear(X509 *x ) ;
extern void X509_reject_clear(X509 *x ) ;
extern X509_REVOKED *X509_REVOKED_new(void) ;
extern void X509_REVOKED_free(X509_REVOKED *a ) ;
extern X509_REVOKED *d2i_X509_REVOKED(X509_REVOKED **a ,
                                      unsigned char const   **in , long len ) ;
extern int i2d_X509_REVOKED(X509_REVOKED *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_REVOKED_it ;
extern X509_CRL_INFO *X509_CRL_INFO_new(void) ;
extern void X509_CRL_INFO_free(X509_CRL_INFO *a ) ;
extern X509_CRL_INFO *d2i_X509_CRL_INFO(X509_CRL_INFO **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_X509_CRL_INFO(X509_CRL_INFO *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_CRL_INFO_it ;
extern X509_CRL *X509_CRL_new(void) ;
extern void X509_CRL_free(X509_CRL *a ) ;
extern X509_CRL *d2i_X509_CRL(X509_CRL **a , unsigned char const   **in ,
                              long len ) ;
extern int i2d_X509_CRL(X509_CRL *a , unsigned char **out ) ;
extern ASN1_ITEM const   X509_CRL_it ;
extern int X509_CRL_add0_revoked(X509_CRL *crl , X509_REVOKED *rev ) ;
extern int X509_CRL_get0_by_serial(X509_CRL *crl , X509_REVOKED **ret ,
                                   ASN1_INTEGER *serial ) ;
extern int X509_CRL_get0_by_cert(X509_CRL *crl , X509_REVOKED **ret , X509 *x ) ;
extern X509_PKEY *X509_PKEY_new(void) ;
extern void X509_PKEY_free(X509_PKEY *a ) ;
extern int i2d_X509_PKEY(X509_PKEY *a , unsigned char **pp ) ;
extern X509_PKEY *d2i_X509_PKEY(X509_PKEY **a , unsigned char const   **pp ,
                                long length ) ;
extern NETSCAPE_SPKI *NETSCAPE_SPKI_new(void) ;
extern void NETSCAPE_SPKI_free(NETSCAPE_SPKI *a ) ;
extern NETSCAPE_SPKI *d2i_NETSCAPE_SPKI(NETSCAPE_SPKI **a ,
                                        unsigned char const   **in , long len ) ;
extern int i2d_NETSCAPE_SPKI(NETSCAPE_SPKI *a , unsigned char **out ) ;
extern ASN1_ITEM const   NETSCAPE_SPKI_it ;
extern NETSCAPE_SPKAC *NETSCAPE_SPKAC_new(void) ;
extern void NETSCAPE_SPKAC_free(NETSCAPE_SPKAC *a ) ;
extern NETSCAPE_SPKAC *d2i_NETSCAPE_SPKAC(NETSCAPE_SPKAC **a ,
                                          unsigned char const   **in , long len ) ;
extern int i2d_NETSCAPE_SPKAC(NETSCAPE_SPKAC *a , unsigned char **out ) ;
extern ASN1_ITEM const   NETSCAPE_SPKAC_it ;
extern NETSCAPE_CERT_SEQUENCE *NETSCAPE_CERT_SEQUENCE_new(void) ;
extern void NETSCAPE_CERT_SEQUENCE_free(NETSCAPE_CERT_SEQUENCE *a ) ;
extern NETSCAPE_CERT_SEQUENCE *d2i_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE **a ,
                                                          unsigned char const   **in ,
                                                          long len ) ;
extern int i2d_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE *a ,
                                      unsigned char **out ) ;
extern ASN1_ITEM const   NETSCAPE_CERT_SEQUENCE_it ;
extern X509_INFO *X509_INFO_new(void) ;
extern void X509_INFO_free(X509_INFO *a ) ;
extern char *X509_NAME_oneline(X509_NAME *a , char *buf , int size ) ;
extern int ASN1_verify(i2d_of_void *i2d , X509_ALGOR *algor1 ,
                       ASN1_BIT_STRING *signature , char *data , EVP_PKEY *pkey ) ;
extern int ASN1_digest(i2d_of_void *i2d , EVP_MD const   *type , char *data ,
                       unsigned char *md , unsigned int *len ) ;
extern int ASN1_sign(i2d_of_void *i2d , X509_ALGOR *algor1 ,
                     X509_ALGOR *algor2 , ASN1_BIT_STRING *signature ,
                     char *data , EVP_PKEY *pkey , EVP_MD const   *type ) ;
extern int ASN1_item_digest(ASN1_ITEM const   *it , EVP_MD const   *type ,
                            void *data , unsigned char *md , unsigned int *len ) ;
extern int ASN1_item_verify(ASN1_ITEM const   *it , X509_ALGOR *algor1 ,
                            ASN1_BIT_STRING *signature , void *data ,
                            EVP_PKEY *pkey ) ;
extern int ASN1_item_sign(ASN1_ITEM const   *it , X509_ALGOR *algor1 ,
                          X509_ALGOR *algor2 , ASN1_BIT_STRING *signature ,
                          void *data , EVP_PKEY *pkey , EVP_MD const   *type ) ;
extern int X509_set_version(X509 *x , long version ) ;
extern int X509_set_serialNumber(X509 *x , ASN1_INTEGER *serial ) ;
extern ASN1_INTEGER *X509_get_serialNumber(X509 *x ) ;
extern int X509_set_issuer_name(X509 *x , X509_NAME *name ) ;
extern X509_NAME *X509_get_issuer_name(X509 *a ) ;
extern int X509_set_subject_name(X509 *x , X509_NAME *name ) ;
extern X509_NAME *X509_get_subject_name(X509 *a ) ;
extern int X509_set_notBefore(X509 *x , ASN1_TIME const   *tm ) ;
extern int X509_set_notAfter(X509 *x , ASN1_TIME const   *tm ) ;
extern int X509_set_pubkey(X509 *x , EVP_PKEY *pkey ) ;
extern EVP_PKEY *X509_get_pubkey(X509 *x ) ;
extern ASN1_BIT_STRING *X509_get0_pubkey_bitstr(X509 const   *x ) ;
extern int X509_certificate_type(X509 *x , EVP_PKEY *pubkey ) ;
extern int X509_REQ_set_version(X509_REQ *x , long version ) ;
extern int X509_REQ_set_subject_name(X509_REQ *req , X509_NAME *name ) ;
extern int X509_REQ_set_pubkey(X509_REQ *x , EVP_PKEY *pkey ) ;
extern EVP_PKEY *X509_REQ_get_pubkey(X509_REQ *req ) ;
extern int X509_REQ_extension_nid(int nid ) ;
extern int *X509_REQ_get_extension_nids(void) ;
extern void X509_REQ_set_extension_nids(int *nids ) ;
extern struct stack_st_X509_EXTENSION *X509_REQ_get_extensions(X509_REQ *req ) ;
extern int X509_REQ_add_extensions_nid(X509_REQ *req ,
                                       struct stack_st_X509_EXTENSION *exts ,
                                       int nid ) ;
extern int X509_REQ_add_extensions(X509_REQ *req ,
                                   struct stack_st_X509_EXTENSION *exts ) ;
extern int X509_REQ_get_attr_count(X509_REQ const   *req ) ;
extern int X509_REQ_get_attr_by_NID(X509_REQ const   *req , int nid ,
                                    int lastpos ) ;
extern int X509_REQ_get_attr_by_OBJ(X509_REQ const   *req , ASN1_OBJECT *obj ,
                                    int lastpos ) ;
extern X509_ATTRIBUTE *X509_REQ_get_attr(X509_REQ const   *req , int loc ) ;
extern X509_ATTRIBUTE *X509_REQ_delete_attr(X509_REQ *req , int loc ) ;
extern int X509_REQ_add1_attr(X509_REQ *req , X509_ATTRIBUTE *attr ) ;
extern int X509_REQ_add1_attr_by_OBJ(X509_REQ *req , ASN1_OBJECT const   *obj ,
                                     int type , unsigned char const   *bytes ,
                                     int len ) ;
extern int X509_REQ_add1_attr_by_NID(X509_REQ *req , int nid , int type ,
                                     unsigned char const   *bytes , int len ) ;
extern int X509_REQ_add1_attr_by_txt(X509_REQ *req , char const   *attrname ,
                                     int type , unsigned char const   *bytes ,
                                     int len ) ;
extern int X509_CRL_set_version(X509_CRL *x , long version ) ;
extern int X509_CRL_set_issuer_name(X509_CRL *x , X509_NAME *name ) ;
extern int X509_CRL_set_lastUpdate(X509_CRL *x , ASN1_TIME const   *tm ) ;
extern int X509_CRL_set_nextUpdate(X509_CRL *x , ASN1_TIME const   *tm ) ;
extern int X509_CRL_sort(X509_CRL *crl ) ;
extern int X509_REVOKED_set_serialNumber(X509_REVOKED *x , ASN1_INTEGER *serial ) ;
extern int X509_REVOKED_set_revocationDate(X509_REVOKED *r , ASN1_TIME *tm ) ;
extern int X509_REQ_check_private_key(X509_REQ *x509 , EVP_PKEY *pkey ) ;
extern int X509_check_private_key(X509 *x509 , EVP_PKEY *pkey ) ;
extern int X509_issuer_and_serial_cmp(X509 const   *a , X509 const   *b ) ;
extern unsigned long X509_issuer_and_serial_hash(X509 *a ) ;
extern int X509_issuer_name_cmp(X509 const   *a , X509 const   *b ) ;
extern unsigned long X509_issuer_name_hash(X509 *a ) ;
extern int X509_subject_name_cmp(X509 const   *a , X509 const   *b ) ;
extern unsigned long X509_subject_name_hash(X509 *x ) ;
extern unsigned long X509_issuer_name_hash_old(X509 *a ) ;
extern unsigned long X509_subject_name_hash_old(X509 *x ) ;
extern int X509_cmp(X509 const   *a , X509 const   *b ) ;
extern int X509_NAME_cmp(X509_NAME const   *a , X509_NAME const   *b ) ;
extern unsigned long X509_NAME_hash(X509_NAME *x ) ;
extern unsigned long X509_NAME_hash_old(X509_NAME *x ) ;
extern int X509_CRL_cmp(X509_CRL const   *a , X509_CRL const   *b ) ;
extern int X509_CRL_match(X509_CRL const   *a , X509_CRL const   *b ) ;
extern int X509_print_ex_fp(FILE *bp , X509 *x , unsigned long nmflag ,
                            unsigned long cflag ) ;
extern int X509_print_fp(FILE *bp , X509 *x ) ;
extern int X509_CRL_print_fp(FILE *bp , X509_CRL *x ) ;
extern int X509_REQ_print_fp(FILE *bp , X509_REQ *req ) ;
extern int X509_NAME_print_ex_fp(FILE *fp , X509_NAME *nm , int indent ,
                                 unsigned long flags ) ;
extern int X509_NAME_print(BIO *bp , X509_NAME *name , int obase ) ;
extern int X509_NAME_print_ex(BIO *out , X509_NAME *nm , int indent ,
                              unsigned long flags ) ;
extern int X509_print_ex(BIO *bp , X509 *x , unsigned long nmflag ,
                         unsigned long cflag ) ;
extern int X509_print(BIO *bp , X509 *x ) ;
extern int X509_ocspid_print(BIO *bp , X509 *x ) ;
extern int X509_CERT_AUX_print(BIO *bp , X509_CERT_AUX *x , int indent ) ;
extern int X509_CRL_print(BIO *bp , X509_CRL *x ) ;
extern int X509_REQ_print_ex(BIO *bp , X509_REQ *x , unsigned long nmflag ,
                             unsigned long cflag ) ;
extern int X509_REQ_print(BIO *bp , X509_REQ *req ) ;
extern int X509_NAME_entry_count(X509_NAME *name ) ;
extern int X509_NAME_get_text_by_NID(X509_NAME *name , int nid , char *buf ,
                                     int len ) ;
extern int X509_NAME_get_text_by_OBJ(X509_NAME *name , ASN1_OBJECT *obj ,
                                     char *buf , int len ) ;
extern int X509_NAME_get_index_by_NID(X509_NAME *name , int nid , int lastpos ) ;
extern int X509_NAME_get_index_by_OBJ(X509_NAME *name , ASN1_OBJECT *obj ,
                                      int lastpos ) ;
extern X509_NAME_ENTRY *X509_NAME_get_entry(X509_NAME *name , int loc ) ;
extern X509_NAME_ENTRY *X509_NAME_delete_entry(X509_NAME *name , int loc ) ;
extern int X509_NAME_add_entry(X509_NAME *name , X509_NAME_ENTRY *ne , int loc ,
                               int set ) ;
extern int X509_NAME_add_entry_by_OBJ(X509_NAME *name , ASN1_OBJECT *obj ,
                                      int type , unsigned char *bytes ,
                                      int len , int loc , int set ) ;
extern int X509_NAME_add_entry_by_NID(X509_NAME *name , int nid , int type ,
                                      unsigned char *bytes , int len , int loc ,
                                      int set ) ;
extern X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_txt(X509_NAME_ENTRY **ne ,
                                                      char const   *field ,
                                                      int type ,
                                                      unsigned char const   *bytes ,
                                                      int len ) ;
extern X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_NID(X509_NAME_ENTRY **ne ,
                                                      int nid , int type ,
                                                      unsigned char *bytes ,
                                                      int len ) ;
extern int X509_NAME_add_entry_by_txt(X509_NAME *name , char const   *field ,
                                      int type , unsigned char const   *bytes ,
                                      int len , int loc , int set ) ;
extern X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_OBJ(X509_NAME_ENTRY **ne ,
                                                      ASN1_OBJECT *obj ,
                                                      int type ,
                                                      unsigned char const   *bytes ,
                                                      int len ) ;
extern int X509_NAME_ENTRY_set_object(X509_NAME_ENTRY *ne , ASN1_OBJECT *obj ) ;
extern int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne , int type ,
                                    unsigned char const   *bytes , int len ) ;
extern ASN1_OBJECT *X509_NAME_ENTRY_get_object(X509_NAME_ENTRY *ne ) ;
extern ASN1_STRING *X509_NAME_ENTRY_get_data(X509_NAME_ENTRY *ne ) ;
extern int X509v3_get_ext_count(struct stack_st_X509_EXTENSION  const  *x ) ;
extern int X509v3_get_ext_by_NID(struct stack_st_X509_EXTENSION  const  *x ,
                                 int nid , int lastpos ) ;
extern int X509v3_get_ext_by_OBJ(struct stack_st_X509_EXTENSION  const  *x ,
                                 ASN1_OBJECT *obj , int lastpos ) ;
extern int X509v3_get_ext_by_critical(struct stack_st_X509_EXTENSION  const  *x ,
                                      int crit , int lastpos ) ;
extern X509_EXTENSION *X509v3_get_ext(struct stack_st_X509_EXTENSION  const  *x ,
                                      int loc ) ;
extern X509_EXTENSION *X509v3_delete_ext(struct stack_st_X509_EXTENSION *x ,
                                         int loc ) ;
extern struct stack_st_X509_EXTENSION *X509v3_add_ext(struct stack_st_X509_EXTENSION **x ,
                                                      X509_EXTENSION *ex ,
                                                      int loc ) ;
extern int X509_get_ext_count(X509 *x ) ;
extern int X509_get_ext_by_NID(X509 *x , int nid , int lastpos ) ;
extern int X509_get_ext_by_OBJ(X509 *x , ASN1_OBJECT *obj , int lastpos ) ;
extern int X509_get_ext_by_critical(X509 *x , int crit , int lastpos ) ;
extern X509_EXTENSION *X509_get_ext(X509 *x , int loc ) ;
extern X509_EXTENSION *X509_delete_ext(X509 *x , int loc ) ;
extern int X509_add_ext(X509 *x , X509_EXTENSION *ex , int loc ) ;
extern void *X509_get_ext_d2i(X509 *x , int nid , int *crit , int *idx ) ;
extern int X509_add1_ext_i2d(X509 *x , int nid , void *value , int crit ,
                             unsigned long flags ) ;
extern int X509_CRL_get_ext_count(X509_CRL *x ) ;
extern int X509_CRL_get_ext_by_NID(X509_CRL *x , int nid , int lastpos ) ;
extern int X509_CRL_get_ext_by_OBJ(X509_CRL *x , ASN1_OBJECT *obj , int lastpos ) ;
extern int X509_CRL_get_ext_by_critical(X509_CRL *x , int crit , int lastpos ) ;
extern X509_EXTENSION *X509_CRL_get_ext(X509_CRL *x , int loc ) ;
extern X509_EXTENSION *X509_CRL_delete_ext(X509_CRL *x , int loc ) ;
extern int X509_CRL_add_ext(X509_CRL *x , X509_EXTENSION *ex , int loc ) ;
extern void *X509_CRL_get_ext_d2i(X509_CRL *x , int nid , int *crit , int *idx ) ;
extern int X509_CRL_add1_ext_i2d(X509_CRL *x , int nid , void *value ,
                                 int crit , unsigned long flags ) ;
extern int X509_REVOKED_get_ext_count(X509_REVOKED *x ) ;
extern int X509_REVOKED_get_ext_by_NID(X509_REVOKED *x , int nid , int lastpos ) ;
extern int X509_REVOKED_get_ext_by_OBJ(X509_REVOKED *x , ASN1_OBJECT *obj ,
                                       int lastpos ) ;
extern int X509_REVOKED_get_ext_by_critical(X509_REVOKED *x , int crit ,
                                            int lastpos ) ;
extern X509_EXTENSION *X509_REVOKED_get_ext(X509_REVOKED *x , int loc ) ;
extern X509_EXTENSION *X509_REVOKED_delete_ext(X509_REVOKED *x , int loc ) ;
extern int X509_REVOKED_add_ext(X509_REVOKED *x , X509_EXTENSION *ex , int loc ) ;
extern void *X509_REVOKED_get_ext_d2i(X509_REVOKED *x , int nid , int *crit ,
                                      int *idx ) ;
extern int X509_REVOKED_add1_ext_i2d(X509_REVOKED *x , int nid , void *value ,
                                     int crit , unsigned long flags ) ;
extern X509_EXTENSION *X509_EXTENSION_create_by_NID(X509_EXTENSION **ex ,
                                                    int nid , int crit ,
                                                    ASN1_OCTET_STRING *data ) ;
extern X509_EXTENSION *X509_EXTENSION_create_by_OBJ(X509_EXTENSION **ex ,
                                                    ASN1_OBJECT *obj ,
                                                    int crit ,
                                                    ASN1_OCTET_STRING *data ) ;
extern int X509_EXTENSION_set_object(X509_EXTENSION *ex , ASN1_OBJECT *obj ) ;
extern int X509_EXTENSION_set_critical(X509_EXTENSION *ex , int crit ) ;
extern int X509_EXTENSION_set_data(X509_EXTENSION *ex , ASN1_OCTET_STRING *data ) ;
extern ASN1_OBJECT *X509_EXTENSION_get_object(X509_EXTENSION *ex ) ;
extern ASN1_OCTET_STRING *X509_EXTENSION_get_data(X509_EXTENSION *ne ) ;
extern int X509_EXTENSION_get_critical(X509_EXTENSION *ex ) ;
extern int X509at_get_attr_count(struct stack_st_X509_ATTRIBUTE  const  *x ) ;
extern int X509at_get_attr_by_NID(struct stack_st_X509_ATTRIBUTE  const  *x ,
                                  int nid , int lastpos ) ;
extern int X509at_get_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE  const  *sk ,
                                  ASN1_OBJECT *obj , int lastpos ) ;
extern X509_ATTRIBUTE *X509at_get_attr(struct stack_st_X509_ATTRIBUTE  const  *x ,
                                       int loc ) ;
extern X509_ATTRIBUTE *X509at_delete_attr(struct stack_st_X509_ATTRIBUTE *x ,
                                          int loc ) ;
extern struct stack_st_X509_ATTRIBUTE *X509at_add1_attr(struct stack_st_X509_ATTRIBUTE **x ,
                                                        X509_ATTRIBUTE *attr ) ;
extern struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE **x ,
                                                               ASN1_OBJECT const   *obj ,
                                                               int type ,
                                                               unsigned char const   *bytes ,
                                                               int len ) ;
extern struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE **x ,
                                                               int nid ,
                                                               int type ,
                                                               unsigned char const   *bytes ,
                                                               int len ) ;
extern struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE **x ,
                                                               char const   *attrname ,
                                                               int type ,
                                                               unsigned char const   *bytes ,
                                                               int len ) ;
extern void *X509at_get0_data_by_OBJ(struct stack_st_X509_ATTRIBUTE *x ,
                                     ASN1_OBJECT *obj , int lastpos , int type ) ;
extern X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_NID(X509_ATTRIBUTE **attr ,
                                                    int nid , int atrtype ,
                                                    void const   *data ,
                                                    int len ) ;
extern X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_OBJ(X509_ATTRIBUTE **attr ,
                                                    ASN1_OBJECT const   *obj ,
                                                    int atrtype ,
                                                    void const   *data ,
                                                    int len ) ;
extern X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_txt(X509_ATTRIBUTE **attr ,
                                                    char const   *atrname ,
                                                    int type ,
                                                    unsigned char const   *bytes ,
                                                    int len ) ;
extern int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr ,
                                      ASN1_OBJECT const   *obj ) ;
extern int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr , int attrtype ,
                                    void const   *data , int len ) ;
extern void *X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr , int idx ,
                                      int atrtype , void *data ) ;
extern int X509_ATTRIBUTE_count(X509_ATTRIBUTE *attr ) ;
extern ASN1_OBJECT *X509_ATTRIBUTE_get0_object(X509_ATTRIBUTE *attr ) ;
extern ASN1_TYPE *X509_ATTRIBUTE_get0_type(X509_ATTRIBUTE *attr , int idx ) ;
extern int EVP_PKEY_get_attr_count(EVP_PKEY const   *key ) ;
extern int EVP_PKEY_get_attr_by_NID(EVP_PKEY const   *key , int nid ,
                                    int lastpos ) ;
extern int EVP_PKEY_get_attr_by_OBJ(EVP_PKEY const   *key , ASN1_OBJECT *obj ,
                                    int lastpos ) ;
extern X509_ATTRIBUTE *EVP_PKEY_get_attr(EVP_PKEY const   *key , int loc ) ;
extern X509_ATTRIBUTE *EVP_PKEY_delete_attr(EVP_PKEY *key , int loc ) ;
extern int EVP_PKEY_add1_attr(EVP_PKEY *key , X509_ATTRIBUTE *attr ) ;
extern int EVP_PKEY_add1_attr_by_OBJ(EVP_PKEY *key , ASN1_OBJECT const   *obj ,
                                     int type , unsigned char const   *bytes ,
                                     int len ) ;
extern int EVP_PKEY_add1_attr_by_NID(EVP_PKEY *key , int nid , int type ,
                                     unsigned char const   *bytes , int len ) ;
extern int EVP_PKEY_add1_attr_by_txt(EVP_PKEY *key , char const   *attrname ,
                                     int type , unsigned char const   *bytes ,
                                     int len ) ;
extern int X509_verify_cert(X509_STORE_CTX *ctx ) ;
extern X509 *X509_find_by_issuer_and_serial(struct stack_st_X509 *sk ,
                                            X509_NAME *name ,
                                            ASN1_INTEGER *serial ) ;
extern X509 *X509_find_by_subject(struct stack_st_X509 *sk , X509_NAME *name ) ;
extern PBEPARAM *PBEPARAM_new(void) ;
extern void PBEPARAM_free(PBEPARAM *a ) ;
extern PBEPARAM *d2i_PBEPARAM(PBEPARAM **a , unsigned char const   **in ,
                              long len ) ;
extern int i2d_PBEPARAM(PBEPARAM *a , unsigned char **out ) ;
extern ASN1_ITEM const   PBEPARAM_it ;
extern PBE2PARAM *PBE2PARAM_new(void) ;
extern void PBE2PARAM_free(PBE2PARAM *a ) ;
extern PBE2PARAM *d2i_PBE2PARAM(PBE2PARAM **a , unsigned char const   **in ,
                                long len ) ;
extern int i2d_PBE2PARAM(PBE2PARAM *a , unsigned char **out ) ;
extern ASN1_ITEM const   PBE2PARAM_it ;
extern PBKDF2PARAM *PBKDF2PARAM_new(void) ;
extern void PBKDF2PARAM_free(PBKDF2PARAM *a ) ;
extern PBKDF2PARAM *d2i_PBKDF2PARAM(PBKDF2PARAM **a ,
                                    unsigned char const   **in , long len ) ;
extern int i2d_PBKDF2PARAM(PBKDF2PARAM *a , unsigned char **out ) ;
extern ASN1_ITEM const   PBKDF2PARAM_it ;
extern int PKCS5_pbe_set0_algor(X509_ALGOR *algor , int alg , int iter ,
                                unsigned char const   *salt , int saltlen ) ;
extern X509_ALGOR *PKCS5_pbe_set(int alg , int iter ,
                                 unsigned char const   *salt , int saltlen ) ;
extern X509_ALGOR *PKCS5_pbe2_set(EVP_CIPHER const   *cipher , int iter ,
                                  unsigned char *salt , int saltlen ) ;
extern X509_ALGOR *PKCS5_pbe2_set_iv(EVP_CIPHER const   *cipher , int iter ,
                                     unsigned char *salt , int saltlen ,
                                     unsigned char *aiv , int prf_nid ) ;
extern PKCS8_PRIV_KEY_INFO *PKCS8_PRIV_KEY_INFO_new(void) ;
extern void PKCS8_PRIV_KEY_INFO_free(PKCS8_PRIV_KEY_INFO *a ) ;
extern PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO **a ,
                                                    unsigned char const   **in ,
                                                    long len ) ;
extern int i2d_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO *a , unsigned char **out ) ;
extern ASN1_ITEM const   PKCS8_PRIV_KEY_INFO_it ;
extern EVP_PKEY *EVP_PKCS82PKEY(PKCS8_PRIV_KEY_INFO *p8 ) ;
extern PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8(EVP_PKEY *pkey ) ;
extern PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8_broken(EVP_PKEY *pkey , int broken ) ;
extern PKCS8_PRIV_KEY_INFO *PKCS8_set_broken(PKCS8_PRIV_KEY_INFO *p8 ,
                                             int broken ) ;
extern int PKCS8_pkey_set0(PKCS8_PRIV_KEY_INFO *priv , ASN1_OBJECT *aobj ,
                           int version , int ptype , void *pval ,
                           unsigned char *penc , int penclen ) ;
extern int PKCS8_pkey_get0(ASN1_OBJECT **ppkalg , unsigned char const   **pk ,
                           int *ppklen , X509_ALGOR **pa ,
                           PKCS8_PRIV_KEY_INFO *p8 ) ;
extern int X509_PUBKEY_set0_param(X509_PUBKEY *pub , ASN1_OBJECT *aobj ,
                                  int ptype , void *pval , unsigned char *penc ,
                                  int penclen ) ;
extern int X509_PUBKEY_get0_param(ASN1_OBJECT **ppkalg ,
                                  unsigned char const   **pk , int *ppklen ,
                                  X509_ALGOR **pa , X509_PUBKEY *pub ) ;
extern int X509_check_trust(X509 *x , int id , int flags ) ;
extern int X509_TRUST_get_count(void) ;
extern X509_TRUST *X509_TRUST_get0(int idx ) ;
extern int X509_TRUST_get_by_id(int id ) ;
extern int X509_TRUST_add(int id , int flags , int (*ck)(X509_TRUST * , X509 * ,
                                                         int  ) , char *name ,
                          int arg1 , void *arg2 ) ;
extern void X509_TRUST_cleanup(void) ;
extern int X509_TRUST_get_flags(X509_TRUST *xp ) ;
extern char *X509_TRUST_get0_name(X509_TRUST *xp ) ;
extern int X509_TRUST_get_trust(X509_TRUST *xp ) ;
extern void ERR_load_X509_strings(void) ;
extern int PEM_get_EVP_CIPHER_INFO(char *header , EVP_CIPHER_INFO *cipher ) ;
extern int PEM_do_header(EVP_CIPHER_INFO *cipher , unsigned char *data ,
                         long *len , pem_password_cb *callback , void *u ) ;
extern int PEM_read_bio(BIO *bp , char **name , char **header ,
                        unsigned char **data , long *len ) ;
extern int PEM_write_bio(BIO *bp , char const   *name , char *hdr ,
                         unsigned char *data , long len ) ;
extern int PEM_bytes_read_bio(unsigned char **pdata , long *plen , char **pnm ,
                              char const   *name , BIO *bp ,
                              pem_password_cb *cb , void *u ) ;
extern void *PEM_ASN1_read_bio(d2i_of_void *d2i , char const   *name , BIO *bp ,
                               void **x , pem_password_cb *cb , void *u ) ;
extern int PEM_ASN1_write_bio(i2d_of_void *i2d , char const   *name , BIO *bp ,
                              void *x , EVP_CIPHER const   *enc ,
                              unsigned char *kstr , int klen ,
                              pem_password_cb *cb , void *u ) ;
extern struct stack_st_X509_INFO *PEM_X509_INFO_read_bio(BIO *bp ,
                                                         struct stack_st_X509_INFO *sk ,
                                                         pem_password_cb *cb ,
                                                         void *u ) ;
extern int PEM_X509_INFO_write_bio(BIO *bp , X509_INFO *xi , EVP_CIPHER *enc ,
                                   unsigned char *kstr , int klen ,
                                   pem_password_cb *cd , void *u ) ;
extern int PEM_read(FILE *fp , char **name , char **header ,
                    unsigned char **data , long *len ) ;
extern int PEM_write(FILE *fp , char *name , char *hdr , unsigned char *data ,
                     long len ) ;
extern void *PEM_ASN1_read(d2i_of_void *d2i , char const   *name , FILE *fp ,
                           void **x , pem_password_cb *cb , void *u ) ;
extern int PEM_ASN1_write(i2d_of_void *i2d , char const   *name , FILE *fp ,
                          void *x , EVP_CIPHER const   *enc ,
                          unsigned char *kstr , int klen ,
                          pem_password_cb *callback , void *u ) ;
extern struct stack_st_X509_INFO *PEM_X509_INFO_read(FILE *fp ,
                                                     struct stack_st_X509_INFO *sk ,
                                                     pem_password_cb *cb ,
                                                     void *u ) ;
extern int PEM_SealInit(PEM_ENCODE_SEAL_CTX *ctx , EVP_CIPHER *type ,
                        EVP_MD *md_type , unsigned char **ek , int *ekl ,
                        unsigned char *iv , EVP_PKEY **pubk , int npubk ) ;
extern void PEM_SealUpdate(PEM_ENCODE_SEAL_CTX *ctx , unsigned char *out ,
                           int *outl , unsigned char *in , int inl ) ;
extern int PEM_SealFinal(PEM_ENCODE_SEAL_CTX *ctx , unsigned char *sig ,
                         int *sigl , unsigned char *out , int *outl ,
                         EVP_PKEY *priv ) ;
extern void PEM_SignInit(EVP_MD_CTX *ctx , EVP_MD *type ) ;
extern void PEM_SignUpdate(EVP_MD_CTX *ctx , unsigned char *d ,
                           unsigned int cnt ) ;
extern int PEM_SignFinal(EVP_MD_CTX *ctx , unsigned char *sigret ,
                         unsigned int *siglen , EVP_PKEY *pkey ) ;
extern int PEM_def_callback(char *buf , int num , int w , void *key ) ;
extern void PEM_proc_type(char *buf , int type ) ;
extern void PEM_dek_info(char *buf , char const   *type , int len , char *str ) ;
extern X509 *PEM_read_bio_X509(BIO *bp , X509 **x , pem_password_cb *cb ,
                               void *u ) ;
extern X509 *PEM_read_X509(FILE *fp , X509 **x , pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_X509(BIO *bp , X509 *x ) ;
extern int PEM_write_X509(FILE *fp , X509 *x ) ;
extern X509 *PEM_read_bio_X509_AUX(BIO *bp , X509 **x , pem_password_cb *cb ,
                                   void *u ) ;
extern X509 *PEM_read_X509_AUX(FILE *fp , X509 **x , pem_password_cb *cb ,
                               void *u ) ;
extern int PEM_write_bio_X509_AUX(BIO *bp , X509 *x ) ;
extern int PEM_write_X509_AUX(FILE *fp , X509 *x ) ;
extern X509_CERT_PAIR *PEM_read_bio_X509_CERT_PAIR(BIO *bp ,
                                                   X509_CERT_PAIR **x ,
                                                   pem_password_cb *cb ,
                                                   void *u ) ;
extern X509_CERT_PAIR *PEM_read_X509_CERT_PAIR(FILE *fp , X509_CERT_PAIR **x ,
                                               pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_X509_CERT_PAIR(BIO *bp , X509_CERT_PAIR *x ) ;
extern int PEM_write_X509_CERT_PAIR(FILE *fp , X509_CERT_PAIR *x ) ;
extern X509_REQ *PEM_read_bio_X509_REQ(BIO *bp , X509_REQ **x ,
                                       pem_password_cb *cb , void *u ) ;
extern X509_REQ *PEM_read_X509_REQ(FILE *fp , X509_REQ **x ,
                                   pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_X509_REQ(BIO *bp , X509_REQ *x ) ;
extern int PEM_write_X509_REQ(FILE *fp , X509_REQ *x ) ;
extern int PEM_write_bio_X509_REQ_NEW(BIO *bp , X509_REQ *x ) ;
extern int PEM_write_X509_REQ_NEW(FILE *fp , X509_REQ *x ) ;
extern X509_CRL *PEM_read_bio_X509_CRL(BIO *bp , X509_CRL **x ,
                                       pem_password_cb *cb , void *u ) ;
extern X509_CRL *PEM_read_X509_CRL(FILE *fp , X509_CRL **x ,
                                   pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_X509_CRL(BIO *bp , X509_CRL *x ) ;
extern int PEM_write_X509_CRL(FILE *fp , X509_CRL *x ) ;
extern PKCS7 *PEM_read_bio_PKCS7(BIO *bp , PKCS7 **x , pem_password_cb *cb ,
                                 void *u ) ;
extern PKCS7 *PEM_read_PKCS7(FILE *fp , PKCS7 **x , pem_password_cb *cb ,
                             void *u ) ;
extern int PEM_write_bio_PKCS7(BIO *bp , PKCS7 *x ) ;
extern int PEM_write_PKCS7(FILE *fp , PKCS7 *x ) ;
extern NETSCAPE_CERT_SEQUENCE *PEM_read_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp ,
                                                                   NETSCAPE_CERT_SEQUENCE **x ,
                                                                   pem_password_cb *cb ,
                                                                   void *u ) ;
extern NETSCAPE_CERT_SEQUENCE *PEM_read_NETSCAPE_CERT_SEQUENCE(FILE *fp ,
                                                               NETSCAPE_CERT_SEQUENCE **x ,
                                                               pem_password_cb *cb ,
                                                               void *u ) ;
extern int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp ,
                                                NETSCAPE_CERT_SEQUENCE *x ) ;
extern int PEM_write_NETSCAPE_CERT_SEQUENCE(FILE *fp ,
                                            NETSCAPE_CERT_SEQUENCE *x ) ;
extern X509_SIG *PEM_read_bio_PKCS8(BIO *bp , X509_SIG **x ,
                                    pem_password_cb *cb , void *u ) ;
extern X509_SIG *PEM_read_PKCS8(FILE *fp , X509_SIG **x , pem_password_cb *cb ,
                                void *u ) ;
extern int PEM_write_bio_PKCS8(BIO *bp , X509_SIG *x ) ;
extern int PEM_write_PKCS8(FILE *fp , X509_SIG *x ) ;
extern PKCS8_PRIV_KEY_INFO *PEM_read_bio_PKCS8_PRIV_KEY_INFO(BIO *bp ,
                                                             PKCS8_PRIV_KEY_INFO **x ,
                                                             pem_password_cb *cb ,
                                                             void *u ) ;
extern PKCS8_PRIV_KEY_INFO *PEM_read_PKCS8_PRIV_KEY_INFO(FILE *fp ,
                                                         PKCS8_PRIV_KEY_INFO **x ,
                                                         pem_password_cb *cb ,
                                                         void *u ) ;
extern int PEM_write_bio_PKCS8_PRIV_KEY_INFO(BIO *bp , PKCS8_PRIV_KEY_INFO *x ) ;
extern int PEM_write_PKCS8_PRIV_KEY_INFO(FILE *fp , PKCS8_PRIV_KEY_INFO *x ) ;
extern RSA *PEM_read_bio_RSAPrivateKey(BIO *bp , RSA **x , pem_password_cb *cb ,
                                       void *u ) ;
extern RSA *PEM_read_RSAPrivateKey(FILE *fp , RSA **x , pem_password_cb *cb ,
                                   void *u ) ;
extern int PEM_write_bio_RSAPrivateKey(BIO *bp , RSA *x ,
                                       EVP_CIPHER const   *enc ,
                                       unsigned char *kstr , int klen ,
                                       pem_password_cb *cb , void *u ) ;
extern int PEM_write_RSAPrivateKey(FILE *fp , RSA *x , EVP_CIPHER const   *enc ,
                                   unsigned char *kstr , int klen ,
                                   pem_password_cb *cb , void *u ) ;
extern RSA *PEM_read_bio_RSAPublicKey(BIO *bp , RSA **x , pem_password_cb *cb ,
                                      void *u ) ;
extern RSA *PEM_read_RSAPublicKey(FILE *fp , RSA **x , pem_password_cb *cb ,
                                  void *u ) ;
extern int PEM_write_bio_RSAPublicKey(BIO *bp , RSA const   *x ) ;
extern int PEM_write_RSAPublicKey(FILE *fp , RSA const   *x ) ;
extern RSA *PEM_read_bio_RSA_PUBKEY(BIO *bp , RSA **x , pem_password_cb *cb ,
                                    void *u ) ;
extern RSA *PEM_read_RSA_PUBKEY(FILE *fp , RSA **x , pem_password_cb *cb ,
                                void *u ) ;
extern int PEM_write_bio_RSA_PUBKEY(BIO *bp , RSA *x ) ;
extern int PEM_write_RSA_PUBKEY(FILE *fp , RSA *x ) ;
extern DSA *PEM_read_bio_DSAPrivateKey(BIO *bp , DSA **x , pem_password_cb *cb ,
                                       void *u ) ;
extern DSA *PEM_read_DSAPrivateKey(FILE *fp , DSA **x , pem_password_cb *cb ,
                                   void *u ) ;
extern int PEM_write_bio_DSAPrivateKey(BIO *bp , DSA *x ,
                                       EVP_CIPHER const   *enc ,
                                       unsigned char *kstr , int klen ,
                                       pem_password_cb *cb , void *u ) ;
extern int PEM_write_DSAPrivateKey(FILE *fp , DSA *x , EVP_CIPHER const   *enc ,
                                   unsigned char *kstr , int klen ,
                                   pem_password_cb *cb , void *u ) ;
extern DSA *PEM_read_bio_DSA_PUBKEY(BIO *bp , DSA **x , pem_password_cb *cb ,
                                    void *u ) ;
extern DSA *PEM_read_DSA_PUBKEY(FILE *fp , DSA **x , pem_password_cb *cb ,
                                void *u ) ;
extern int PEM_write_bio_DSA_PUBKEY(BIO *bp , DSA *x ) ;
extern int PEM_write_DSA_PUBKEY(FILE *fp , DSA *x ) ;
extern DSA *PEM_read_bio_DSAparams(BIO *bp , DSA **x , pem_password_cb *cb ,
                                   void *u ) ;
extern DSA *PEM_read_DSAparams(FILE *fp , DSA **x , pem_password_cb *cb ,
                               void *u ) ;
extern int PEM_write_bio_DSAparams(BIO *bp , DSA const   *x ) ;
extern int PEM_write_DSAparams(FILE *fp , DSA const   *x ) ;
extern DH *PEM_read_bio_DHparams(BIO *bp , DH **x , pem_password_cb *cb ,
                                 void *u ) ;
extern DH *PEM_read_DHparams(FILE *fp , DH **x , pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_DHparams(BIO *bp , DH const   *x ) ;
extern int PEM_write_DHparams(FILE *fp , DH const   *x ) ;
extern EVP_PKEY *PEM_read_bio_PrivateKey(BIO *bp , EVP_PKEY **x ,
                                         pem_password_cb *cb , void *u ) ;
extern EVP_PKEY *PEM_read_PrivateKey(FILE *fp , EVP_PKEY **x ,
                                     pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_PrivateKey(BIO *bp , EVP_PKEY *x ,
                                    EVP_CIPHER const   *enc ,
                                    unsigned char *kstr , int klen ,
                                    pem_password_cb *cb , void *u ) ;
extern int PEM_write_PrivateKey(FILE *fp , EVP_PKEY *x ,
                                EVP_CIPHER const   *enc , unsigned char *kstr ,
                                int klen , pem_password_cb *cb , void *u ) ;
extern EVP_PKEY *PEM_read_bio_PUBKEY(BIO *bp , EVP_PKEY **x ,
                                     pem_password_cb *cb , void *u ) ;
extern EVP_PKEY *PEM_read_PUBKEY(FILE *fp , EVP_PKEY **x , pem_password_cb *cb ,
                                 void *u ) ;
extern int PEM_write_bio_PUBKEY(BIO *bp , EVP_PKEY *x ) ;
extern int PEM_write_PUBKEY(FILE *fp , EVP_PKEY *x ) ;
extern int PEM_write_bio_PKCS8PrivateKey_nid(BIO *bp , EVP_PKEY *x , int nid ,
                                             char *kstr , int klen ,
                                             pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_PKCS8PrivateKey(BIO * , EVP_PKEY * ,
                                         EVP_CIPHER const   * , char * , int  ,
                                         pem_password_cb * , void * ) ;
extern int i2d_PKCS8PrivateKey_bio(BIO *bp , EVP_PKEY *x ,
                                   EVP_CIPHER const   *enc , char *kstr ,
                                   int klen , pem_password_cb *cb , void *u ) ;
extern int i2d_PKCS8PrivateKey_nid_bio(BIO *bp , EVP_PKEY *x , int nid ,
                                       char *kstr , int klen ,
                                       pem_password_cb *cb , void *u ) ;
extern EVP_PKEY *d2i_PKCS8PrivateKey_bio(BIO *bp , EVP_PKEY **x ,
                                         pem_password_cb *cb , void *u ) ;
extern int i2d_PKCS8PrivateKey_fp(FILE *fp , EVP_PKEY *x ,
                                  EVP_CIPHER const   *enc , char *kstr ,
                                  int klen , pem_password_cb *cb , void *u ) ;
extern int i2d_PKCS8PrivateKey_nid_fp(FILE *fp , EVP_PKEY *x , int nid ,
                                      char *kstr , int klen ,
                                      pem_password_cb *cb , void *u ) ;
extern int PEM_write_PKCS8PrivateKey_nid(FILE *fp , EVP_PKEY *x , int nid ,
                                         char *kstr , int klen ,
                                         pem_password_cb *cb , void *u ) ;
extern EVP_PKEY *d2i_PKCS8PrivateKey_fp(FILE *fp , EVP_PKEY **x ,
                                        pem_password_cb *cb , void *u ) ;
extern int PEM_write_PKCS8PrivateKey(FILE *fp , EVP_PKEY *x ,
                                     EVP_CIPHER const   *enc , char *kstr ,
                                     int klen , pem_password_cb *cd , void *u ) ;
extern EVP_PKEY *PEM_read_bio_Parameters(BIO *bp , EVP_PKEY **x ) ;
extern int PEM_write_bio_Parameters(BIO *bp , EVP_PKEY *x ) ;
extern EVP_PKEY *b2i_PrivateKey(unsigned char const   **in , long length ) ;
extern EVP_PKEY *b2i_PublicKey(unsigned char const   **in , long length ) ;
extern EVP_PKEY *b2i_PrivateKey_bio(BIO *in ) ;
extern EVP_PKEY *b2i_PublicKey_bio(BIO *in ) ;
extern int i2b_PrivateKey_bio(BIO *out , EVP_PKEY *pk ) ;
extern int i2b_PublicKey_bio(BIO *out , EVP_PKEY *pk ) ;
extern EVP_PKEY *b2i_PVK_bio(BIO *in , pem_password_cb *cb , void *u ) ;
extern int i2b_PVK_bio(BIO *out , EVP_PKEY *pk , int enclevel ,
                       pem_password_cb *cb , void *u ) ;
extern void ERR_load_PEM_strings(void) ;
extern void HMAC_CTX_init(HMAC_CTX *ctx ) ;
extern void HMAC_CTX_cleanup(HMAC_CTX *ctx ) ;
extern int HMAC_Init(HMAC_CTX *ctx , void const   *key , int len ,
                     EVP_MD const   *md ) ;
extern int HMAC_Init_ex(HMAC_CTX *ctx , void const   *key , int len ,
                        EVP_MD const   *md , ENGINE *impl ) ;
extern int HMAC_Update(HMAC_CTX *ctx , unsigned char const   *data , size_t len ) ;
extern int HMAC_Final(HMAC_CTX *ctx , unsigned char *md , unsigned int *len ) ;
extern unsigned char *HMAC(EVP_MD const   *evp_md , void const   *key ,
                           int key_len , unsigned char const   *d , size_t n ,
                           unsigned char *md , unsigned int *md_len ) ;
extern int HMAC_CTX_copy(HMAC_CTX *dctx , HMAC_CTX *sctx ) ;
extern void HMAC_CTX_set_flags(HMAC_CTX *ctx , unsigned long flags ) ;
extern void SSL_CTX_set_msg_callback(SSL_CTX *ctx ,
                                     void (*cb)(int write_p , int version ,
                                                int content_type ,
                                                void const   *buf , size_t len ,
                                                SSL *ssl , void *arg ) ) ;
extern void SSL_set_msg_callback(SSL *ssl , void (*cb)(int write_p ,
                                                       int version ,
                                                       int content_type ,
                                                       void const   *buf ,
                                                       size_t len , SSL *ssl ,
                                                       void *arg ) ) ;
extern struct lhash_st_SSL_SESSION *SSL_CTX_sessions(SSL_CTX *ctx ) ;
extern void SSL_CTX_sess_set_new_cb(SSL_CTX *ctx ,
                                    int (*new_session_cb)(struct ssl_st *ssl ,
                                                          SSL_SESSION *sess ) ) ;
extern int (*SSL_CTX_sess_get_new_cb(SSL_CTX *ctx ))(struct ssl_st *ssl ,
                                                     SSL_SESSION *sess ) ;
extern void SSL_CTX_sess_set_remove_cb(SSL_CTX *ctx ,
                                       void (*remove_session_cb)(struct ssl_ctx_st *ctx ,
                                                                 SSL_SESSION *sess ) ) ;
extern void (*SSL_CTX_sess_get_remove_cb(SSL_CTX *ctx ))(struct ssl_ctx_st *ctx ,
                                                         SSL_SESSION *sess ) ;
extern void SSL_CTX_sess_set_get_cb(SSL_CTX *ctx ,
                                    SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl ,
                                                                   unsigned char *data ,
                                                                   int len ,
                                                                   int *copy ) ) ;
extern SSL_SESSION *(*SSL_CTX_sess_get_get_cb(SSL_CTX *ctx ))(struct ssl_st *ssl ,
                                                              unsigned char *Data ,
                                                              int len ,
                                                              int *copy ) ;
extern void SSL_CTX_set_info_callback(SSL_CTX *ctx ,
                                      void (*cb)(SSL const   *ssl , int type ,
                                                 int val ) ) ;
extern void (*SSL_CTX_get_info_callback(SSL_CTX *ctx ))(SSL const   *ssl ,
                                                        int type , int val ) ;
extern void SSL_CTX_set_client_cert_cb(SSL_CTX *ctx ,
                                       int (*client_cert_cb)(SSL *ssl ,
                                                             X509 **x509 ,
                                                             EVP_PKEY **pkey ) ) ;
extern int (*SSL_CTX_get_client_cert_cb(SSL_CTX *ctx ))(SSL *ssl , X509 **x509 ,
                                                        EVP_PKEY **pkey ) ;
extern int SSL_CTX_set_client_cert_engine(SSL_CTX *ctx , ENGINE *e ) ;
extern void SSL_CTX_set_cookie_generate_cb(SSL_CTX *ctx ,
                                           int (*app_gen_cookie_cb)(SSL *ssl ,
                                                                    unsigned char *cookie ,
                                                                    unsigned int *cookie_len ) ) ;
extern void SSL_CTX_set_cookie_verify_cb(SSL_CTX *ctx ,
                                         int (*app_verify_cookie_cb)(SSL *ssl ,
                                                                     unsigned char *cookie ,
                                                                     unsigned int cookie_len ) ) ;
extern void SSL_CTX_set_psk_client_callback(SSL_CTX *ctx ,
                                            unsigned int (*psk_client_callback)(SSL *ssl ,
                                                                                char const   *hint ,
                                                                                char *identity ,
                                                                                unsigned int max_identity_len ,
                                                                                unsigned char *psk ,
                                                                                unsigned int max_psk_len ) ) ;
extern void SSL_set_psk_client_callback(SSL *ssl ,
                                        unsigned int (*psk_client_callback)(SSL *ssl ,
                                                                            char const   *hint ,
                                                                            char *identity ,
                                                                            unsigned int max_identity_len ,
                                                                            unsigned char *psk ,
                                                                            unsigned int max_psk_len ) ) ;
extern void SSL_CTX_set_psk_server_callback(SSL_CTX *ctx ,
                                            unsigned int (*psk_server_callback)(SSL *ssl ,
                                                                                char const   *identity ,
                                                                                unsigned char *psk ,
                                                                                unsigned int max_psk_len ) ) ;
extern void SSL_set_psk_server_callback(SSL *ssl ,
                                        unsigned int (*psk_server_callback)(SSL *ssl ,
                                                                            char const   *identity ,
                                                                            unsigned char *psk ,
                                                                            unsigned int max_psk_len ) ) ;
extern int SSL_CTX_use_psk_identity_hint(SSL_CTX *ctx ,
                                         char const   *identity_hint ) ;
extern int SSL_use_psk_identity_hint(SSL *s , char const   *identity_hint ) ;
extern char const   *SSL_get_psk_identity_hint(SSL const   *s ) ;
extern char const   *SSL_get_psk_identity(SSL const   *s ) ;
extern char const   *SSL_get_servername(SSL const   *s , int const   type ) ;
extern int SSL_get_servername_type(SSL const   *s ) ;
extern pitem *pitem_new(unsigned char *prio64be , void *data ) ;
extern void pitem_free(pitem *item ) ;
extern pqueue pqueue_new(void) ;
extern void pqueue_free(pqueue pq ) ;
extern pitem *pqueue_insert(pqueue pq , pitem *item ) ;
extern pitem *pqueue_peek(pqueue pq ) ;
extern pitem *pqueue_pop(pqueue pq ) ;
extern pitem *pqueue_find(pqueue pq , unsigned char *prio64be ) ;
extern pitem *pqueue_iterator(pqueue pq ) ;
extern pitem *pqueue_next(piterator *iter ) ;
extern void pqueue_print(pqueue pq ) ;
extern int pqueue_size(pqueue pq ) ;
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
extern size_t SSL_get_finished(SSL const   *s , void *buf , size_t count ) ;
extern size_t SSL_get_peer_finished(SSL const   *s , void *buf , size_t count ) ;
extern SSL_SESSION *PEM_read_bio_SSL_SESSION(BIO *bp , SSL_SESSION **x ,
                                             pem_password_cb *cb , void *u ) ;
extern SSL_SESSION *PEM_read_SSL_SESSION(FILE *fp , SSL_SESSION **x ,
                                         pem_password_cb *cb , void *u ) ;
extern int PEM_write_bio_SSL_SESSION(BIO *bp , SSL_SESSION *x ) ;
extern int PEM_write_SSL_SESSION(FILE *fp , SSL_SESSION *x ) ;
extern BIO_METHOD *BIO_f_ssl(void) ;
extern BIO *BIO_new_ssl(SSL_CTX *ctx , int client ) ;
extern BIO *BIO_new_ssl_connect(SSL_CTX *ctx ) ;
extern BIO *BIO_new_buffer_ssl_connect(SSL_CTX *ctx ) ;
extern int BIO_ssl_copy_session_id(BIO *to , BIO *from ) ;
extern void BIO_ssl_shutdown(BIO *ssl_bio ) ;
extern int SSL_CTX_set_cipher_list(SSL_CTX * , char const   *str ) ;
extern SSL_CTX *SSL_CTX_new(SSL_METHOD const   *meth ) ;
extern void SSL_CTX_free(SSL_CTX * ) ;
extern long SSL_CTX_set_timeout(SSL_CTX *ctx , long t ) ;
extern long SSL_CTX_get_timeout(SSL_CTX const   *ctx ) ;
extern X509_STORE *SSL_CTX_get_cert_store(SSL_CTX const   * ) ;
extern void SSL_CTX_set_cert_store(SSL_CTX * , X509_STORE * ) ;
extern int SSL_want(SSL const   *s ) ;
extern int SSL_clear(SSL *s ) ;
extern void SSL_CTX_flush_sessions(SSL_CTX *ctx , long tm ) ;
extern SSL_CIPHER const   *SSL_get_current_cipher(SSL const   *s ) ;
extern int SSL_CIPHER_get_bits(SSL_CIPHER const   *c , int *alg_bits ) ;
extern char *SSL_CIPHER_get_version(SSL_CIPHER const   *c ) ;
extern char const   *SSL_CIPHER_get_name(SSL_CIPHER const   *c ) ;
extern int SSL_get_fd(SSL const   *s ) ;
extern int SSL_get_rfd(SSL const   *s ) ;
extern int SSL_get_wfd(SSL const   *s ) ;
extern char const   *SSL_get_cipher_list(SSL const   *s , int n ) ;
extern char *SSL_get_shared_ciphers(SSL const   *s , char *buf , int len ) ;
extern int SSL_get_read_ahead(SSL const   *s ) ;
extern int SSL_pending(SSL const   *s ) ;
extern int SSL_set_fd(SSL *s , int fd ) ;
extern int SSL_set_rfd(SSL *s , int fd ) ;
extern int SSL_set_wfd(SSL *s , int fd ) ;
extern void SSL_set_bio(SSL *s , BIO *rbio , BIO *wbio ) ;
extern BIO *SSL_get_rbio(SSL const   *s ) ;
extern BIO *SSL_get_wbio(SSL const   *s ) ;
extern int SSL_set_cipher_list(SSL *s , char const   *str ) ;
extern void SSL_set_read_ahead(SSL *s , int yes ) ;
extern int SSL_get_verify_mode(SSL const   *s ) ;
extern int SSL_get_verify_depth(SSL const   *s ) ;
extern int (*SSL_get_verify_callback(SSL const   *s ))(int  , X509_STORE_CTX * ) ;
extern void SSL_set_verify(SSL *s , int mode ,
                           int (*callback)(int ok , X509_STORE_CTX *ctx ) ) ;
extern void SSL_set_verify_depth(SSL *s , int depth ) ;
extern int SSL_use_RSAPrivateKey(SSL *ssl , RSA *rsa ) ;
extern int SSL_use_RSAPrivateKey_ASN1(SSL *ssl , unsigned char *d , long len ) ;
extern int SSL_use_PrivateKey(SSL *ssl , EVP_PKEY *pkey ) ;
extern int SSL_use_PrivateKey_ASN1(int pk , SSL *ssl ,
                                   unsigned char const   *d , long len ) ;
extern int SSL_use_certificate(SSL *ssl , X509 *x ) ;
extern int SSL_use_certificate_ASN1(SSL *ssl , unsigned char const   *d ,
                                    int len ) ;
extern int SSL_use_RSAPrivateKey_file(SSL *ssl , char const   *file , int type ) ;
extern int SSL_use_PrivateKey_file(SSL *ssl , char const   *file , int type ) ;
extern int SSL_use_certificate_file(SSL *ssl , char const   *file , int type ) ;
extern int SSL_CTX_use_RSAPrivateKey_file(SSL_CTX *ctx , char const   *file ,
                                          int type ) ;
extern int SSL_CTX_use_PrivateKey_file(SSL_CTX *ctx , char const   *file ,
                                       int type ) ;
extern int SSL_CTX_use_certificate_file(SSL_CTX *ctx , char const   *file ,
                                        int type ) ;
extern int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx , char const   *file ) ;
extern struct stack_st_X509_NAME *SSL_load_client_CA_file(char const   *file ) ;
extern int SSL_add_file_cert_subjects_to_stack(struct stack_st_X509_NAME *stackCAs ,
                                               char const   *file ) ;
extern int SSL_add_dir_cert_subjects_to_stack(struct stack_st_X509_NAME *stackCAs ,
                                              char const   *dir ) ;
extern void SSL_load_error_strings(void) ;
extern char const   *SSL_state_string(SSL const   *s ) ;
extern char const   *SSL_rstate_string(SSL const   *s ) ;
extern char const   *SSL_state_string_long(SSL const   *s ) ;
extern char const   *SSL_rstate_string_long(SSL const   *s ) ;
extern long SSL_SESSION_get_time(SSL_SESSION const   *s ) ;
extern long SSL_SESSION_set_time(SSL_SESSION *s , long t ) ;
extern long SSL_SESSION_get_timeout(SSL_SESSION const   *s ) ;
extern long SSL_SESSION_set_timeout(SSL_SESSION *s , long t ) ;
extern void SSL_copy_session_id(SSL *to , SSL const   *from ) ;
extern SSL_SESSION *SSL_SESSION_new(void) ;
extern unsigned char const   *SSL_SESSION_get_id(SSL_SESSION const   *s ,
                                                 unsigned int *len ) ;
extern int SSL_SESSION_print_fp(FILE *fp , SSL_SESSION const   *ses ) ;
extern int SSL_SESSION_print(BIO *fp , SSL_SESSION const   *ses ) ;
extern void SSL_SESSION_free(SSL_SESSION *ses ) ;
extern int i2d_SSL_SESSION(SSL_SESSION *in , unsigned char **pp ) ;
extern int SSL_set_session(SSL *to , SSL_SESSION *session ) ;
extern int SSL_CTX_add_session(SSL_CTX *s , SSL_SESSION *c ) ;
extern int SSL_CTX_remove_session(SSL_CTX * , SSL_SESSION *c ) ;
extern int SSL_CTX_set_generate_session_id(SSL_CTX * ,
                                           int (*)(SSL const   *ssl ,
                                                   unsigned char *id ,
                                                   unsigned int *id_len ) ) ;
extern int SSL_set_generate_session_id(SSL * , int (*)(SSL const   *ssl ,
                                                       unsigned char *id ,
                                                       unsigned int *id_len ) ) ;
extern int SSL_has_matching_session_id(SSL const   *ssl ,
                                       unsigned char const   *id ,
                                       unsigned int id_len ) ;
extern SSL_SESSION *d2i_SSL_SESSION(SSL_SESSION **a ,
                                    unsigned char const   **pp , long length ) ;
extern X509 *SSL_get_peer_certificate(SSL const   *s ) ;
extern struct stack_st_X509 *SSL_get_peer_cert_chain(SSL const   *s ) ;
extern int SSL_CTX_get_verify_mode(SSL_CTX const   *ctx ) ;
extern int SSL_CTX_get_verify_depth(SSL_CTX const   *ctx ) ;
extern int (*SSL_CTX_get_verify_callback(SSL_CTX const   *ctx ))(int  ,
                                                                 X509_STORE_CTX * ) ;
extern void SSL_CTX_set_verify(SSL_CTX *ctx , int mode ,
                               int (*callback)(int  , X509_STORE_CTX * ) ) ;
extern void SSL_CTX_set_verify_depth(SSL_CTX *ctx , int depth ) ;
extern void SSL_CTX_set_cert_verify_callback(SSL_CTX *ctx ,
                                             int (*cb)(X509_STORE_CTX * ,
                                                       void * ) , void *arg ) ;
extern int SSL_CTX_use_RSAPrivateKey(SSL_CTX *ctx , RSA *rsa ) ;
extern int SSL_CTX_use_RSAPrivateKey_ASN1(SSL_CTX *ctx ,
                                          unsigned char const   *d , long len ) ;
extern int SSL_CTX_use_PrivateKey(SSL_CTX *ctx , EVP_PKEY *pkey ) ;
extern int SSL_CTX_use_PrivateKey_ASN1(int pk , SSL_CTX *ctx ,
                                       unsigned char const   *d , long len ) ;
extern int SSL_CTX_use_certificate(SSL_CTX *ctx , X509 *x ) ;
extern int SSL_CTX_use_certificate_ASN1(SSL_CTX *ctx , int len ,
                                        unsigned char const   *d ) ;
extern void SSL_CTX_set_default_passwd_cb(SSL_CTX *ctx , pem_password_cb *cb ) ;
extern void SSL_CTX_set_default_passwd_cb_userdata(SSL_CTX *ctx , void *u ) ;
extern int SSL_CTX_check_private_key(SSL_CTX const   *ctx ) ;
extern int SSL_check_private_key(SSL const   *ctx ) ;
extern int SSL_CTX_set_session_id_context(SSL_CTX *ctx ,
                                          unsigned char const   *sid_ctx ,
                                          unsigned int sid_ctx_len ) ;
extern SSL *SSL_new(SSL_CTX *ctx ) ;
extern int SSL_set_session_id_context(SSL *ssl ,
                                      unsigned char const   *sid_ctx ,
                                      unsigned int sid_ctx_len ) ;
extern int SSL_CTX_set_purpose(SSL_CTX *s , int purpose ) ;
extern int SSL_set_purpose(SSL *s , int purpose ) ;
extern int SSL_CTX_set_trust(SSL_CTX *s , int trust ) ;
extern int SSL_set_trust(SSL *s , int trust ) ;
extern int SSL_CTX_set1_param(SSL_CTX *ctx , X509_VERIFY_PARAM *vpm ) ;
extern int SSL_set1_param(SSL *ssl , X509_VERIFY_PARAM *vpm ) ;
extern void SSL_free(SSL *ssl ) ;
extern int SSL_accept(SSL *ssl ) ;
extern int SSL_connect(SSL *ssl ) ;
extern int SSL_read(SSL *ssl , void *buf , int num ) ;
extern int SSL_peek(SSL *ssl , void *buf , int num ) ;
extern int SSL_write(SSL *ssl , void const   *buf , int num ) ;
extern long SSL_ctrl(SSL *ssl , int cmd , long larg , void *parg ) ;
extern long SSL_callback_ctrl(SSL * , int  , void (*)(void) ) ;
extern long SSL_CTX_ctrl(SSL_CTX *ctx , int cmd , long larg , void *parg ) ;
extern long SSL_CTX_callback_ctrl(SSL_CTX * , int  , void (*)(void) ) ;
extern int SSL_get_error(SSL const   *s , int ret_code ) ;
extern char const   *SSL_get_version(SSL const   *s ) ;
extern int SSL_CTX_set_ssl_version(SSL_CTX *ctx , SSL_METHOD const   *meth ) ;
extern SSL_METHOD const   *SSLv2_method(void) ;
extern SSL_METHOD const   *SSLv2_server_method(void) ;
extern SSL_METHOD const   *SSLv2_client_method(void) ;
extern SSL_METHOD const   *SSLv3_method(void) ;
extern SSL_METHOD const   *SSLv3_server_method(void) ;
extern SSL_METHOD const   *SSLv3_client_method(void) ;
extern SSL_METHOD const   *SSLv23_method(void) ;
extern SSL_METHOD const   *SSLv23_server_method(void) ;
extern SSL_METHOD const   *SSLv23_client_method(void) ;
extern SSL_METHOD const   *TLSv1_method(void) ;
extern SSL_METHOD const   *TLSv1_server_method(void) ;
extern SSL_METHOD const   *TLSv1_client_method(void) ;
extern SSL_METHOD const   *DTLSv1_method(void) ;
extern SSL_METHOD const   *DTLSv1_server_method(void) ;
extern SSL_METHOD const   *DTLSv1_client_method(void) ;
extern struct stack_st_SSL_CIPHER *SSL_get_ciphers(SSL const   *s ) ;
extern int SSL_do_handshake(SSL *s ) ;
extern int SSL_renegotiate(SSL *s ) ;
extern int SSL_renegotiate_pending(SSL *s ) ;
extern int SSL_shutdown(SSL *s ) ;
extern SSL_METHOD const   *SSL_get_ssl_method(SSL *s ) ;
extern int SSL_set_ssl_method(SSL *s , SSL_METHOD const   *method ) ;
extern char const   *SSL_alert_type_string_long(int value ) ;
extern char const   *SSL_alert_type_string(int value ) ;
extern char const   *SSL_alert_desc_string_long(int value ) ;
extern char const   *SSL_alert_desc_string(int value ) ;
extern void SSL_set_client_CA_list(SSL *s ,
                                   struct stack_st_X509_NAME *name_list ) ;
extern void SSL_CTX_set_client_CA_list(SSL_CTX *ctx ,
                                       struct stack_st_X509_NAME *name_list ) ;
extern struct stack_st_X509_NAME *SSL_get_client_CA_list(SSL const   *s ) ;
extern struct stack_st_X509_NAME *SSL_CTX_get_client_CA_list(SSL_CTX const   *s ) ;
extern int SSL_add_client_CA(SSL *ssl , X509 *x ) ;
extern int SSL_CTX_add_client_CA(SSL_CTX *ctx , X509 *x ) ;
extern void SSL_set_connect_state(SSL *s ) ;
extern void SSL_set_accept_state(SSL *s ) ;
extern long SSL_get_default_timeout(SSL const   *s ) ;
extern int SSL_library_init(void) ;
extern char *SSL_CIPHER_description(SSL_CIPHER const   * , char *buf , int size ) ;
extern struct stack_st_X509_NAME *SSL_dup_CA_list(struct stack_st_X509_NAME *sk ) ;
extern SSL *SSL_dup(SSL *ssl ) ;
extern X509 *SSL_get_certificate(SSL const   *ssl ) ;
extern struct evp_pkey_st *SSL_get_privatekey(SSL *ssl ) ;
extern void SSL_CTX_set_quiet_shutdown(SSL_CTX *ctx , int mode ) ;
extern int SSL_CTX_get_quiet_shutdown(SSL_CTX const   *ctx ) ;
extern void SSL_set_quiet_shutdown(SSL *ssl , int mode ) ;
extern int SSL_get_quiet_shutdown(SSL const   *ssl ) ;
extern void SSL_set_shutdown(SSL *ssl , int mode ) ;
extern int SSL_get_shutdown(SSL const   *ssl ) ;
extern int SSL_version(SSL const   *ssl ) ;
extern int SSL_CTX_set_default_verify_paths(SSL_CTX *ctx ) ;
extern int SSL_CTX_load_verify_locations(SSL_CTX *ctx , char const   *CAfile ,
                                         char const   *CApath ) ;
extern SSL_SESSION *SSL_get_session(SSL const   *ssl ) ;
extern SSL_SESSION *SSL_get1_session(SSL *ssl ) ;
extern SSL_CTX *SSL_get_SSL_CTX(SSL const   *ssl ) ;
extern SSL_CTX *SSL_set_SSL_CTX(SSL *ssl , SSL_CTX *ctx ) ;
extern void SSL_set_info_callback(SSL *ssl , void (*cb)(SSL const   *ssl ,
                                                        int type , int val ) ) ;
extern void (*SSL_get_info_callback(SSL const   *ssl ))(SSL const   *ssl ,
                                                        int type , int val ) ;
extern int SSL_state(SSL const   *ssl ) ;
extern void SSL_set_verify_result(SSL *ssl , long v ) ;
extern long SSL_get_verify_result(SSL const   *ssl ) ;
extern int SSL_set_ex_data(SSL *ssl , int idx , void *data ) ;
extern void *SSL_get_ex_data(SSL const   *ssl , int idx ) ;
extern int SSL_get_ex_new_index(long argl , void *argp ,
                                CRYPTO_EX_new *new_func ,
                                CRYPTO_EX_dup *dup_func ,
                                CRYPTO_EX_free *free_func ) ;
extern int SSL_SESSION_set_ex_data(SSL_SESSION *ss , int idx , void *data ) ;
extern void *SSL_SESSION_get_ex_data(SSL_SESSION const   *ss , int idx ) ;
extern int SSL_SESSION_get_ex_new_index(long argl , void *argp ,
                                        CRYPTO_EX_new *new_func ,
                                        CRYPTO_EX_dup *dup_func ,
                                        CRYPTO_EX_free *free_func ) ;
extern int SSL_CTX_set_ex_data(SSL_CTX *ssl , int idx , void *data ) ;
extern void *SSL_CTX_get_ex_data(SSL_CTX const   *ssl , int idx ) ;
extern int SSL_CTX_get_ex_new_index(long argl , void *argp ,
                                    CRYPTO_EX_new *new_func ,
                                    CRYPTO_EX_dup *dup_func ,
                                    CRYPTO_EX_free *free_func ) ;
extern int SSL_get_ex_data_X509_STORE_CTX_idx(void) ;
extern void SSL_CTX_set_tmp_rsa_callback(SSL_CTX *ctx ,
                                         RSA *(*cb)(SSL *ssl , int is_export ,
                                                    int keylength ) ) ;
extern void SSL_set_tmp_rsa_callback(SSL *ssl , RSA *(*cb)(SSL *ssl ,
                                                           int is_export ,
                                                           int keylength ) ) ;
extern void SSL_CTX_set_tmp_dh_callback(SSL_CTX *ctx ,
                                        DH *(*dh)(SSL *ssl , int is_export ,
                                                  int keylength ) ) ;
extern void SSL_set_tmp_dh_callback(SSL *ssl , DH *(*dh)(SSL *ssl ,
                                                         int is_export ,
                                                         int keylength ) ) ;
extern COMP_METHOD const   *SSL_get_current_compression(SSL *s ) ;
extern COMP_METHOD const   *SSL_get_current_expansion(SSL *s ) ;
extern char const   *SSL_COMP_get_name(COMP_METHOD const   *comp ) ;
extern struct stack_st_SSL_COMP *SSL_COMP_get_compression_methods(void) ;
extern int SSL_COMP_add_compression_method(int id , COMP_METHOD *cm ) ;
extern int SSL_set_session_ticket_ext(SSL *s , void *ext_data , int ext_len ) ;
extern int SSL_set_session_ticket_ext_cb(SSL *s ,
                                         int (*cb)(SSL *s ,
                                                   unsigned char const   *data ,
                                                   int len , void *arg ) ,
                                         void *arg ) ;
extern int SSL_set_session_secret_cb(SSL *s ,
                                     int (*tls_session_secret_cb)(SSL *s ,
                                                                  void *secret ,
                                                                  int *secret_len ,
                                                                  struct stack_st_SSL_CIPHER *peer_ciphers ,
                                                                  SSL_CIPHER **cipher ,
                                                                  void *arg ) ,
                                     void *arg ) ;
extern void ERR_load_SSL_strings(void) ;
extern iosocket *iosocket_init(void) ;
extern void iosocket_free(iosocket *sock ) ;
extern  __attribute__((__nothrow__)) int epoll_create(int __size ) ;
extern  __attribute__((__nothrow__)) int epoll_create1(int __flags ) ;
extern  __attribute__((__nothrow__)) int epoll_ctl(int __epfd , int __op ,
                                                   int __fd ,
                                                   struct epoll_event *__event ) ;
extern int epoll_wait(int __epfd , struct epoll_event *__events ,
                      int __maxevents , int __timeout ) ;
extern int epoll_pwait(int __epfd , struct epoll_event *__events ,
                       int __maxevents , int __timeout ,
                       __sigset_t const   *__ss ) ;
extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;
extern fdevents *fdevent_init(size_t maxfds , fdevent_handler_t type ) ;
extern int fdevent_reset(fdevents *ev ) ;
extern void fdevent_free(fdevents *ev ) ;
extern int fdevent_poll(fdevents *ev , int timeout_ms ) ;
extern int fdevent_get_revents(fdevents *ev , size_t event_count ,
                               fdevent_revents *revents ) ;
extern int fdevent_register(fdevents *ev , iosocket *sock ,
                            handler_t (*handler)(void *srv , void *ctx ,
                                                 int revents ) , void *ctx ) ;
extern int fdevent_unregister(fdevents *ev , iosocket *sock ) ;
extern int fdevent_event_add(fdevents *ev , iosocket *sock , int events ) ;
extern int fdevent_event_del(fdevents *ev , iosocket *sock ) ;
extern int fdevent_fcntl_set(fdevents *ev , iosocket *sock ) ;
extern fdevent_revents *fdevent_revents_init(void) ;
extern void fdevent_revents_reset(fdevent_revents *revents ) ;
extern void fdevent_revents_add(fdevent_revents *revents , int fd , int events ) ;
extern void fdevent_revents_free(fdevent_revents *revents ) ;
extern fdevent_revent *fdevent_revent_init(void) ;
extern void fdevent_revent_free(fdevent_revent *revent ) ;
extern int fdevent_select_init(fdevents *ev ) ;
extern int fdevent_poll_init(fdevents *ev ) ;
extern int fdevent_linux_rtsig_init(fdevents *ev ) ;
extern int fdevent_linux_sysepoll_init(fdevents *ev ) ;
extern int fdevent_solaris_devpoll_init(fdevents *ev ) ;
extern int fdevent_freebsd_kqueue_init(fdevents *ev ) ;
__inline extern  __attribute__((__nothrow__)) struct cmsghdr  __attribute__((__gnu_inline__)) *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                                                             struct cmsghdr *__cmsg ) ;
__inline extern  __attribute__((__nothrow__)) struct cmsghdr  __attribute__((__gnu_inline__)) *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                                                             struct cmsghdr *__cmsg ) ;
__inline extern struct cmsghdr  __attribute__((__gnu_inline__)) *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                               struct cmsghdr *__cmsg ) 
{ 


  {
  if (__cmsg->cmsg_len < sizeof(struct cmsghdr )) {
    return ((struct cmsghdr  __attribute__((__gnu_inline__)) *)0);
  } else {

  }
  __cmsg = (struct cmsghdr *)((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U)));
  if ((unsigned int )((unsigned char *)(__cmsg + 1)) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
    return ((struct cmsghdr  __attribute__((__gnu_inline__)) *)0);
  } else
  if ((unsigned int )((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U))) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
    return ((struct cmsghdr  __attribute__((__gnu_inline__)) *)0);
  } else {

  }
  return ((struct cmsghdr  __attribute__((__gnu_inline__)) *)__cmsg);
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
extern  __attribute__((__nothrow__)) int ioctl(int __fd ,
                                               unsigned long __request  , ...) ;
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
extern http_req *http_request_init(void) ;
extern void http_request_free(http_req *req ) ;
extern void http_request_reset(http_req *req ) ;
extern parse_status_t http_request_parse_cq(chunkqueue *cq ,
                                            http_req *http_request ) ;
extern int io_queue_init(int maxevents , io_context_t *ctxp ) ;
extern int io_queue_release(io_context_t ctx ) ;
extern int io_queue_run(io_context_t ctx ) ;
extern int io_setup(int maxevents , io_context_t *ctxp ) ;
extern int io_destroy(io_context_t ctx ) ;
extern int io_submit(io_context_t ctx , long nr , struct iocb **ios ) ;
extern int io_cancel(io_context_t ctx , struct iocb *iocb ,
                     struct io_event *evt ) ;
extern int io_getevents(io_context_t ctx_id , long min_nr , long nr ,
                        struct io_event *events , struct timespec *timeout ) ;
__inline static void io_set_callback(struct iocb *iocb ,
                                     void (*cb)(io_context_t ctx ,
                                                struct iocb *iocb , long res ,
                                                long res2 ) ) 
{ 


  {
  iocb->data = (void *)cb;
  return;
}
}
__inline static void io_prep_pread(struct iocb *iocb , int fd , void *buf ,
                                   size_t count , long long offset ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)0;
  iocb->aio_reqprio = (short)0;
  iocb->u.c.buf = buf;
  iocb->u.c.nbytes = (unsigned long )count;
  iocb->u.c.offset = offset;
  return;
}
}
__inline static void io_prep_pwrite(struct iocb *iocb , int fd , void *buf ,
                                    size_t count , long long offset ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)1;
  iocb->aio_reqprio = (short)0;
  iocb->u.c.buf = buf;
  iocb->u.c.nbytes = (unsigned long )count;
  iocb->u.c.offset = offset;
  return;
}
}
__inline static void io_prep_preadv(struct iocb *iocb , int fd ,
                                    struct iovec  const  *iov , int iovcnt ,
                                    long long offset ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)7;
  iocb->aio_reqprio = (short)0;
  iocb->u.c.buf = (void *)iov;
  iocb->u.c.nbytes = (unsigned long )iovcnt;
  iocb->u.c.offset = offset;
  return;
}
}
__inline static void io_prep_pwritev(struct iocb *iocb , int fd ,
                                     struct iovec  const  *iov , int iovcnt ,
                                     long long offset ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)8;
  iocb->aio_reqprio = (short)0;
  iocb->u.c.buf = (void *)iov;
  iocb->u.c.nbytes = (unsigned long )iovcnt;
  iocb->u.c.offset = offset;
  return;
}
}
__inline static void io_prep_poll(struct iocb *iocb , int fd , int events ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)5;
  iocb->aio_reqprio = (short)0;
  iocb->u.poll.events = events;
  return;
}
}
__inline static int io_poll(io_context_t ctx , struct iocb *iocb ,
                            void (*cb)(io_context_t ctx , struct iocb *iocb ,
                                       long res , long res2 ) , int fd ,
                            int events ) 
{ 
  int tmp ;

  {
  io_prep_poll(iocb, fd, events);
  io_set_callback(iocb, cb);
  tmp = io_submit(ctx, 1L, & iocb);
  return (tmp);
}
}
__inline static void io_prep_fsync(struct iocb *iocb , int fd ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)2;
  iocb->aio_reqprio = (short)0;
  return;
}
}
__inline static int io_fsync(io_context_t ctx , struct iocb *iocb ,
                             void (*cb)(io_context_t ctx , struct iocb *iocb ,
                                        long res , long res2 ) , int fd ) 
{ 
  int tmp ;

  {
  io_prep_fsync(iocb, fd);
  io_set_callback(iocb, cb);
  tmp = io_submit(ctx, 1L, & iocb);
  return (tmp);
}
}
__inline static void io_prep_fdsync(struct iocb *iocb , int fd ) 
{ 


  {
  memset((void *)iocb, 0, sizeof(*iocb));
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (short)3;
  iocb->aio_reqprio = (short)0;
  return;
}
}
__inline static int io_fdsync(io_context_t ctx , struct iocb *iocb ,
                              void (*cb)(io_context_t ctx , struct iocb *iocb ,
                                         long res , long res2 ) , int fd ) 
{ 
  int tmp ;

  {
  io_prep_fdsync(iocb, fd);
  io_set_callback(iocb, cb);
  tmp = io_submit(ctx, 1L, & iocb);
  return (tmp);
}
}
__inline static void io_set_eventfd(struct iocb *iocb , int eventfd ) 
{ 


  {
  iocb->u.c.flags |= 1U;
  iocb->u.c.resfd = (unsigned int )eventfd;
  return;
}
}
extern char **environ ;
extern int server_out_of_fds(server *srv , connection *con ) ;
extern int config_read(server *srv , char const   *fn ) ;
extern int config_set_defaults(server *srv ) ;
extern buffer *config_get_value_buffer(server *srv , connection *con ,
                                       config_var_t field ) ;
void *configparserAlloc(void *(*mallocProc)(size_t  ) ) ;
void configparserFree(void *p , void (*freeProc)(void * ) ) ;
void configparser(void *yyp , int yymajor , buffer *yyminor , config_t *ctx ) ;
extern int config_parse_file(server *srv , config_t *context , char const   *fn ) ;
extern int config_parse_cmd(server *srv , config_t *context , char const   *cmd ) ;
data_unset *configparser_merge_data(data_unset *op1 , data_unset const   *op2 ) ;
extern void config_cond_cache_reset(server *srv , connection *con ) ;
static void configparser_push(config_t *ctx , data_config *dc , int isnew ) 
{ 


  {
  if (isnew) {
    dc->context_ndx = (int )(ctx->all_configs)->used;
    if (dc->context_ndx > (ctx->current)->context_ndx) {

    } else {
      __assert_fail("dc->context_ndx > ctx->current->context_ndx",
                    "./configparser.y", 19U, "configparser_push");
    }
    array_insert_unique(ctx->all_configs, (data_unset *)dc);
    dc->parent = ctx->current;
    array_insert_unique((dc->parent)->childs, (data_unset *)dc);
  } else {

  }
  buffer_ptr_append(ctx->configs_stack, (void *)ctx->current);
  ctx->current = dc;
  return;
}
}
static data_config *configparser_pop(config_t *ctx ) 
{ 
  data_config *old ;
  void *tmp ;

  {
  old = ctx->current;
  tmp = buffer_ptr_pop(ctx->configs_stack);
  ctx->current = (data_config *)tmp;
  return (old);
}
}
static data_unset *configparser_get_variable(config_t *ctx ,
                                             buffer const   *key ) 
{ 
  data_unset *du ;
  data_config *dc ;
  struct data_unset *tmp ;
  size_t tmp___0 ;

  {
  dc = ctx->current;
  while (dc) {
    if (key->used) {
      tmp___0 = key->used - 1U;
    } else {
      tmp___0 = (size_t const   )0;
    }
    du = array_get_element(dc->value, (char const   *)key->ptr, (size_t )tmp___0);
    if ((unsigned int )((void *)0) != (unsigned int )du) {
      tmp = (*(du->copy))((struct data_unset  const  *)du);
      return (tmp);
    } else {

    }
    dc = dc->parent;
  }
  return ((data_unset *)((void *)0));
}
}
data_unset *configparser_merge_data(data_unset *op1 , data_unset const   *op2 ) 
{ 
  data_string *ds ;
  data_string *ds___0 ;
  data_string *tmp ;
  array *dst ;
  array *src ;
  data_unset *du ;
  size_t i ;
  struct data_unset *tmp___0 ;

  {
  if ((unsigned int )op1->type != (unsigned int )op2->type) {
    if ((unsigned int )op1->type == 1U) {
      if ((unsigned int const   )op2->type == 4U) {
        ds = (data_string *)op1;
        buffer_append_long(ds->value, (long )((data_integer *)op2)->value);
        return (op1);
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if ((unsigned int )op1->type == 4U) {
      if ((unsigned int const   )op2->type == 1U) {
        tmp = data_string_init();
        ds___0 = tmp;
        buffer_append_long(ds___0->value, (long )((data_integer *)op1)->value);
        buffer_append_string_buffer(ds___0->value,
                                    (buffer const   *)((data_string *)op2)->value);
        (*(op1->free))(op1);
        return ((data_unset *)ds___0);
      } else {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"data type mismatch, cannot be merge\n");
        (*(op1->free))(op1);
        return ((data_unset *)((void *)0));
      }
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"data type mismatch, cannot be merge\n");
      (*(op1->free))(op1);
      return ((data_unset *)((void *)0));
    }
  } else {

  }
  switch ((unsigned int )op1->type) {
  case 1U: 
  buffer_append_string_buffer(((data_string *)op1)->value,
                              (buffer const   *)((data_string *)op2)->value);
  break;
  case 4U: 
  ((data_integer *)op1)->value += ((data_integer *)op2)->value;
  break;
  case 3U: 
  dst = ((data_array *)op1)->value;
  src = ((data_array *)op2)->value;
  i = (size_t )0;
  while (i < src->used) {
    du = *(src->data + i);
    if (du) {
      tmp___0 = (*(du->copy))((struct data_unset  const  *)du);
      array_insert_unique(dst, tmp___0);
    } else {

    }
    i ++;
  }
  break;
  default: 
  __assert_fail("0", "./configparser.y", 98U, "configparser_merge_data");
  break;
  }
  return (op1);
}
}
static unsigned char yy_action[128]  = 
  {      (unsigned char)2,      (unsigned char)3,      (unsigned char)4,      (unsigned char)5, 
        (unsigned char)13,      (unsigned char)14,      (unsigned char)63,      (unsigned char)15, 
        (unsigned char)7,      (unsigned char)45,      (unsigned char)20,      (unsigned char)88, 
        (unsigned char)16,      (unsigned char)46,      (unsigned char)28,      (unsigned char)49, 
        (unsigned char)41,      (unsigned char)10,      (unsigned char)40,      (unsigned char)25, 
        (unsigned char)22,      (unsigned char)50,      (unsigned char)46,      (unsigned char)8, 
        (unsigned char)15,      (unsigned char)104,      (unsigned char)1,      (unsigned char)20, 
        (unsigned char)28,      (unsigned char)18,      (unsigned char)58,      (unsigned char)60, 
        (unsigned char)6,      (unsigned char)25,      (unsigned char)22,      (unsigned char)40, 
        (unsigned char)47,      (unsigned char)62,      (unsigned char)11,      (unsigned char)46, 
        (unsigned char)20,      (unsigned char)9,      (unsigned char)23,      (unsigned char)24, 
        (unsigned char)26,      (unsigned char)29,      (unsigned char)89,      (unsigned char)58, 
        (unsigned char)60,      (unsigned char)10,      (unsigned char)17,      (unsigned char)38, 
        (unsigned char)28,      (unsigned char)27,      (unsigned char)37,      (unsigned char)19, 
        (unsigned char)30,      (unsigned char)25,      (unsigned char)22,      (unsigned char)34, 
        (unsigned char)15,      (unsigned char)100,      (unsigned char)20,      (unsigned char)20, 
        (unsigned char)23,      (unsigned char)24,      (unsigned char)26,      (unsigned char)12, 
        (unsigned char)19,      (unsigned char)31,      (unsigned char)32,      (unsigned char)40, 
        (unsigned char)19,      (unsigned char)44,      (unsigned char)43,      (unsigned char)46, 
        (unsigned char)95,      (unsigned char)35,      (unsigned char)90,      (unsigned char)89, 
        (unsigned char)28,      (unsigned char)49,      (unsigned char)42,      (unsigned char)58, 
        (unsigned char)60,      (unsigned char)25,      (unsigned char)22,      (unsigned char)59, 
        (unsigned char)28,      (unsigned char)27,      (unsigned char)33,      (unsigned char)48, 
        (unsigned char)52,      (unsigned char)25,      (unsigned char)22,      (unsigned char)34, 
        (unsigned char)28,      (unsigned char)49,      (unsigned char)51,      (unsigned char)28, 
        (unsigned char)36,      (unsigned char)25,      (unsigned char)22,      (unsigned char)61, 
        (unsigned char)25,      (unsigned char)22,      (unsigned char)89,      (unsigned char)28, 
        (unsigned char)39,      (unsigned char)89,      (unsigned char)89,      (unsigned char)89, 
        (unsigned char)25,      (unsigned char)22,      (unsigned char)54,      (unsigned char)55, 
        (unsigned char)56,      (unsigned char)57,      (unsigned char)89,      (unsigned char)28, 
        (unsigned char)53,      (unsigned char)21,      (unsigned char)89,      (unsigned char)89, 
        (unsigned char)25,      (unsigned char)22,      (unsigned char)25,      (unsigned char)22};
static unsigned char yy_lookahead[128]  = 
  {      (unsigned char)29,      (unsigned char)30,      (unsigned char)31,      (unsigned char)32, 
        (unsigned char)33,      (unsigned char)34,      (unsigned char)0,      (unsigned char)1, 
        (unsigned char)44,      (unsigned char)38,      (unsigned char)4,      (unsigned char)15, 
        (unsigned char)41,      (unsigned char)16,      (unsigned char)35,      (unsigned char)36, 
        (unsigned char)45,      (unsigned char)46,      (unsigned char)12,      (unsigned char)40, 
        (unsigned char)41,      (unsigned char)42,      (unsigned char)16,      (unsigned char)15, 
        (unsigned char)1,      (unsigned char)27,      (unsigned char)28,      (unsigned char)4, 
        (unsigned char)35,      (unsigned char)36,      (unsigned char)24,      (unsigned char)25, 
        (unsigned char)1,      (unsigned char)40,      (unsigned char)41,      (unsigned char)12, 
        (unsigned char)17,      (unsigned char)14,      (unsigned char)13,      (unsigned char)16, 
        (unsigned char)4,      (unsigned char)38,      (unsigned char)6,      (unsigned char)7, 
        (unsigned char)8,      (unsigned char)9,      (unsigned char)15,      (unsigned char)24, 
        (unsigned char)25,      (unsigned char)46,      (unsigned char)2,      (unsigned char)3, 
        (unsigned char)35,      (unsigned char)36,      (unsigned char)37,      (unsigned char)5, 
        (unsigned char)39,      (unsigned char)40,      (unsigned char)41,      (unsigned char)42, 
        (unsigned char)1,      (unsigned char)11,      (unsigned char)4,      (unsigned char)4, 
        (unsigned char)6,      (unsigned char)7,      (unsigned char)8,      (unsigned char)28, 
        (unsigned char)5,      (unsigned char)9,      (unsigned char)10,      (unsigned char)12, 
        (unsigned char)5,      (unsigned char)14,      (unsigned char)28,      (unsigned char)16, 
        (unsigned char)13,      (unsigned char)11,      (unsigned char)13,      (unsigned char)47, 
        (unsigned char)35,      (unsigned char)36,      (unsigned char)13,      (unsigned char)24, 
        (unsigned char)25,      (unsigned char)40,      (unsigned char)41,      (unsigned char)42, 
        (unsigned char)35,      (unsigned char)36,      (unsigned char)37,      (unsigned char)18, 
        (unsigned char)43,      (unsigned char)40,      (unsigned char)41,      (unsigned char)42, 
        (unsigned char)35,      (unsigned char)36,      (unsigned char)19,      (unsigned char)35, 
        (unsigned char)36,      (unsigned char)40,      (unsigned char)41,      (unsigned char)42, 
        (unsigned char)40,      (unsigned char)41,      (unsigned char)47,      (unsigned char)35, 
        (unsigned char)36,      (unsigned char)47,      (unsigned char)47,      (unsigned char)47, 
        (unsigned char)40,      (unsigned char)41,      (unsigned char)20,      (unsigned char)21, 
        (unsigned char)22,      (unsigned char)23,      (unsigned char)47,      (unsigned char)35, 
        (unsigned char)36,      (unsigned char)35,      (unsigned char)47,      (unsigned char)47, 
        (unsigned char)40,      (unsigned char)41,      (unsigned char)40,      (unsigned char)41};
static signed char yy_shift_ofst[63]  = 
  {      (signed char)-5,      (signed char)6,      (signed char)-5,      (signed char)-5, 
        (signed char)-5,      (signed char)31,      (signed char)-4,      (signed char)8, 
        (signed char)-3,      (signed char)-5,      (signed char)25,      (signed char)-5, 
        (signed char)23,      (signed char)-5,      (signed char)-5,      (signed char)-5, 
        (signed char)48,      (signed char)58,      (signed char)67,      (signed char)58, 
        (signed char)-5,      (signed char)-5,      (signed char)-5,      (signed char)-5, 
        (signed char)-5,      (signed char)-5,      (signed char)36,      (signed char)50, 
        (signed char)-5,      (signed char)-5,      (signed char)60,      (signed char)-5, 
        (signed char)58,      (signed char)-5,      (signed char)66,      (signed char)58, 
        (signed char)67,      (signed char)-5,      (signed char)58,      (signed char)67, 
        (signed char)65,      (signed char)69,      (signed char)-5,      (signed char)59, 
        (signed char)-5,      (signed char)-5,      (signed char)19,      (signed char)73, 
        (signed char)58,      (signed char)67,      (signed char)79,      (signed char)94, 
        (signed char)58,      (signed char)63,      (signed char)-5,      (signed char)-5, 
        (signed char)-5,      (signed char)-5,      (signed char)58,      (signed char)-5, 
        (signed char)58,      (signed char)-5,      (signed char)-5};
static signed char yy_reduce_ofst[63]  = 
  {      (signed char)-2,      (signed char)-29,      (signed char)-37,      (signed char)-37, 
        (signed char)-37,      (signed char)-36,      (signed char)-37,      (signed char)-37, 
        (signed char)3,      (signed char)-37,      (signed char)-37,      (signed char)39, 
        (signed char)-29,      (signed char)-37,      (signed char)-37,      (signed char)-37, 
        (signed char)-37,      (signed char)-7,      (signed char)-37,      (signed char)86, 
        (signed char)-37,      (signed char)-37,      (signed char)-37,      (signed char)-37, 
        (signed char)-37,      (signed char)-37,      (signed char)17,      (signed char)-37, 
        (signed char)-37,      (signed char)-37,      (signed char)-37,      (signed char)-37, 
        (signed char)53,      (signed char)-37,      (signed char)-37,      (signed char)64, 
        (signed char)-37,      (signed char)-37,      (signed char)72,      (signed char)-37, 
        (signed char)-37,      (signed char)-37,      (signed char)46,      (signed char)-29, 
        (signed char)-37,      (signed char)-37,      (signed char)-37,      (signed char)-37, 
        (signed char)-21,      (signed char)-37,      (signed char)-37,      (signed char)49, 
        (signed char)84,      (signed char)-37,      (signed char)-37,      (signed char)-37, 
        (signed char)-37,      (signed char)-37,      (signed char)45,      (signed char)-37, 
        (signed char)61,      (signed char)-37,      (signed char)-37};
static unsigned char yy_default[63]  = 
  {      (unsigned char)65,      (unsigned char)103,      (unsigned char)64,      (unsigned char)66, 
        (unsigned char)67,      (unsigned char)103,      (unsigned char)68,      (unsigned char)103, 
        (unsigned char)103,      (unsigned char)92,      (unsigned char)103,      (unsigned char)65, 
        (unsigned char)103,      (unsigned char)69,      (unsigned char)70,      (unsigned char)71, 
        (unsigned char)103,      (unsigned char)103,      (unsigned char)72,      (unsigned char)103, 
        (unsigned char)74,      (unsigned char)75,      (unsigned char)77,      (unsigned char)78, 
        (unsigned char)79,      (unsigned char)80,      (unsigned char)103,      (unsigned char)86, 
        (unsigned char)76,      (unsigned char)81,      (unsigned char)103,      (unsigned char)82, 
        (unsigned char)84,      (unsigned char)83,      (unsigned char)103,      (unsigned char)103, 
        (unsigned char)87,      (unsigned char)85,      (unsigned char)103,      (unsigned char)73, 
        (unsigned char)103,      (unsigned char)103,      (unsigned char)65,      (unsigned char)103, 
        (unsigned char)91,      (unsigned char)93,      (unsigned char)103,      (unsigned char)103, 
        (unsigned char)103,      (unsigned char)100,      (unsigned char)103,      (unsigned char)103, 
        (unsigned char)103,      (unsigned char)103,      (unsigned char)96,      (unsigned char)97, 
        (unsigned char)98,      (unsigned char)99,      (unsigned char)103,      (unsigned char)101, 
        (unsigned char)103,      (unsigned char)102,      (unsigned char)94};
static FILE *yyTraceFILE  =    (FILE *)0;
static char *yyTracePrompt  =    (char *)0;
void configparserTrace(FILE *TraceFILE , char *zTracePrompt ) 
{ 


  {
  yyTraceFILE = TraceFILE;
  yyTracePrompt = zTracePrompt;
  if ((unsigned int )yyTraceFILE == (unsigned int )((FILE *)0)) {
    yyTracePrompt = (char *)0;
  } else
  if ((unsigned int )yyTracePrompt == (unsigned int )((char *)0)) {
    yyTraceFILE = (FILE *)0;
  } else {

  }
  return;
}
}
static char const   *yyTokenName[47]  = 
  {      "$",      "EOL",      "ASSIGN",      "APPEND", 
        "LKEY",      "PLUS",      "STRING",      "INTEGER", 
        "LPARAN",      "RPARAN",      "COMMA",      "ARRAY_ASSIGN", 
        "GLOBAL",      "LCURLY",      "RCURLY",      "ELSE", 
        "DOLLAR",      "SRVVARNAME",      "LBRACKET",      "RBRACKET", 
        "EQ",      "MATCH",      "NE",      "NOMATCH", 
        "INCLUDE",      "INCLUDE_SHELL",      "error",      "input", 
        "metalines",      "metaline",      "varline",      "global", 
        "condlines",      "include",      "include_shell",      "value", 
        "expression",      "aelement",      "condline",      "aelements", 
        "array",      "key",      "stringop",      "cond", 
        "eols",      "globalstart",      "context"};
static char const   *yyRuleName[40]  = 
  {      "input ::= metalines",      "metalines ::= metalines metaline",      "metalines ::=",      "metaline ::= varline", 
        "metaline ::= global",      "metaline ::= condlines EOL",      "metaline ::= include",      "metaline ::= include_shell", 
        "metaline ::= EOL",      "varline ::= key ASSIGN expression",      "varline ::= key APPEND expression",      "key ::= LKEY", 
        "expression ::= expression PLUS value",      "expression ::= value",      "value ::= key",      "value ::= STRING", 
        "value ::= INTEGER",      "value ::= array",      "array ::= LPARAN RPARAN",      "array ::= LPARAN aelements RPARAN", 
        "aelements ::= aelements COMMA aelement",      "aelements ::= aelements COMMA",      "aelements ::= aelement",      "aelement ::= expression", 
        "aelement ::= stringop ARRAY_ASSIGN expression",      "eols ::= EOL",      "eols ::=",      "globalstart ::= GLOBAL", 
        "global ::= globalstart LCURLY metalines RCURLY",      "condlines ::= condlines eols ELSE condline",      "condlines ::= condline",      "condline ::= context LCURLY metalines RCURLY", 
        "context ::= DOLLAR SRVVARNAME LBRACKET stringop RBRACKET cond expression",      "cond ::= EQ",      "cond ::= MATCH",      "cond ::= NE", 
        "cond ::= NOMATCH",      "stringop ::= expression",      "include ::= INCLUDE stringop",      "include_shell ::= INCLUDE_SHELL stringop"};
char const   *configparserTokenName(int tokenType ) 
{ 


  {
  if (tokenType > 0) {
    if ((unsigned int )tokenType < sizeof(yyTokenName) / sizeof(yyTokenName[0])) {
      return (yyTokenName[tokenType]);
    } else {
      return ("Unknown");
    }
  } else {
    return ("Unknown");
  }
}
}
void *configparserAlloc(void *(*mallocProc)(size_t  ) ) 
{ 
  yyParser *pParser ;
  void *tmp ;

  {
  tmp = (*mallocProc)(sizeof(yyParser ));
  pParser = (yyParser *)tmp;
  if (pParser) {
    pParser->yyidx = -1;
  } else {

  }
  return ((void *)pParser);
}
}
static void yy_destructor(unsigned char yymajor , YYMINORTYPE *yypminor ) 
{ 


  {
  switch ((int )yymajor) {
  case 25: 
  case 24: 
  case 23: 
  case 22: 
  case 21: 
  case 20: 
  case 19: 
  case 18: 
  case 17: 
  case 16: 
  case 15: 
  case 14: 
  case 13: 
  case 12: 
  case 11: 
  case 10: 
  case 9: 
  case 8: 
  case 7: 
  case 6: 
  case 5: 
  case 4: 
  case 3: 
  case 2: 
  case 1: 
  buffer_free(yypminor->yy0);
  break;
  case 35: 
  (*((yypminor->yy41)->free))(yypminor->yy41);
  break;
  case 36: 
  (*((yypminor->yy41)->free))(yypminor->yy41);
  break;
  case 37: 
  (*((yypminor->yy41)->free))(yypminor->yy41);
  break;
  case 39: 
  array_free(yypminor->yy40);
  break;
  case 40: 
  array_free(yypminor->yy40);
  break;
  case 41: 
  buffer_free(yypminor->yy43);
  break;
  case 42: 
  buffer_free(yypminor->yy43);
  break;
  default: 
  break;
  }
  return;
}
}
static int yy_pop_parser_stack(yyParser *pParser ) 
{ 
  unsigned char yymajor ;
  yyStackEntry *yytos ;

  {
  yytos = & pParser->yystack[pParser->yyidx];
  if (pParser->yyidx < 0) {
    return (0);
  } else {

  }
  if (yyTraceFILE) {
    if (pParser->yyidx >= 0) {
      fprintf((FILE */* __restrict  */)yyTraceFILE,
              (char const   */* __restrict  */)"%sPopping %s\n", yyTracePrompt,
              yyTokenName[yytos->major]);
    } else {

    }
  } else {

  }
  yymajor = (unsigned char )yytos->major;
  yy_destructor(yymajor, & yytos->minor);
  (pParser->yyidx) --;
  return ((int )yymajor);
}
}
void configparserFree(void *p , void (*freeProc)(void * ) ) 
{ 
  yyParser *pParser ;

  {
  pParser = (yyParser *)p;
  if ((unsigned int )pParser == (unsigned int )((yyParser *)0)) {
    return;
  } else {

  }
  while (pParser->yyidx >= 0) {
    yy_pop_parser_stack(pParser);
  }
  (*freeProc)((void *)pParser);
  return;
}
}
static int yy_find_shift_action(yyParser *pParser , int iLookAhead ) 
{ 
  int i ;
  int stateno ;

  {
  stateno = pParser->yystack[pParser->yyidx].stateno;
  i = (int )yy_shift_ofst[stateno];
  if (i == -5) {
    return ((int )yy_default[stateno]);
  } else {

  }
  if (iLookAhead == 48) {
    return (105);
  } else {

  }
  i += iLookAhead;
  if (i < 0) {
    return ((int )yy_default[stateno]);
  } else
  if ((unsigned int )i >= sizeof(yy_action) / sizeof(yy_action[0])) {
    return ((int )yy_default[stateno]);
  } else
  if ((int )yy_lookahead[i] != iLookAhead) {
    return ((int )yy_default[stateno]);
  } else {
    return ((int )yy_action[i]);
  }
}
}
static int yy_find_reduce_action(yyParser *pParser , int iLookAhead ) 
{ 
  int i ;
  int stateno ;

  {
  stateno = pParser->yystack[pParser->yyidx].stateno;
  i = (int )yy_reduce_ofst[stateno];
  if (i == -37) {
    return ((int )yy_default[stateno]);
  } else {

  }
  if (iLookAhead == 48) {
    return (105);
  } else {

  }
  i += iLookAhead;
  if (i < 0) {
    return ((int )yy_default[stateno]);
  } else
  if ((unsigned int )i >= sizeof(yy_action) / sizeof(yy_action[0])) {
    return ((int )yy_default[stateno]);
  } else
  if ((int )yy_lookahead[i] != iLookAhead) {
    return ((int )yy_default[stateno]);
  } else {
    return ((int )yy_action[i]);
  }
}
}
static void yy_shift(yyParser *yypParser , int yyNewState , int yyMajor ,
                     YYMINORTYPE *yypMinor ) 
{ 
  yyStackEntry *yytos ;
  config_t *ctx ;
  int i ;

  {
  (yypParser->yyidx) ++;
  if (yypParser->yyidx >= 100) {
    ctx = yypParser->ctx;
    (yypParser->yyidx) --;
    if (yyTraceFILE) {
      fprintf((FILE */* __restrict  */)yyTraceFILE,
              (char const   */* __restrict  */)"%sStack Overflow!\n",
              yyTracePrompt);
    } else {

    }
    while (yypParser->yyidx >= 0) {
      yy_pop_parser_stack(yypParser);
    }
    yypParser->ctx = ctx;
    return;
  } else {

  }
  yytos = & yypParser->yystack[yypParser->yyidx];
  yytos->stateno = yyNewState;
  yytos->major = yyMajor;
  yytos->minor = *yypMinor;
  if (yyTraceFILE) {
    if (yypParser->yyidx > 0) {
      fprintf((FILE */* __restrict  */)yyTraceFILE,
              (char const   */* __restrict  */)"%sShift %d\n", yyTracePrompt,
              yyNewState);
      fprintf((FILE */* __restrict  */)yyTraceFILE,
              (char const   */* __restrict  */)"%sStack:", yyTracePrompt);
      i = 1;
      while (i <= yypParser->yyidx) {
        fprintf((FILE */* __restrict  */)yyTraceFILE,
                (char const   */* __restrict  */)" %s",
                yyTokenName[yypParser->yystack[i].major]);
        i ++;
      }
      fprintf((FILE */* __restrict  */)yyTraceFILE,
              (char const   */* __restrict  */)"\n");
    } else {

    }
  } else {

  }
  return;
}
}
static struct __anonstruct_yyRuleInfo_208 yyRuleInfo[40]  = 
  {      {(unsigned char)27, (unsigned char)1}, 
        {(unsigned char)28, (unsigned char)2}, 
        {(unsigned char)28, (unsigned char)0}, 
        {(unsigned char)29, (unsigned char)1}, 
        {(unsigned char)29, (unsigned char)1}, 
        {(unsigned char)29, (unsigned char)2}, 
        {(unsigned char)29, (unsigned char)1}, 
        {(unsigned char)29, (unsigned char)1}, 
        {(unsigned char)29, (unsigned char)1}, 
        {(unsigned char)30, (unsigned char)3}, 
        {(unsigned char)30, (unsigned char)3}, 
        {(unsigned char)41, (unsigned char)1}, 
        {(unsigned char)36, (unsigned char)3}, 
        {(unsigned char)36, (unsigned char)1}, 
        {(unsigned char)35, (unsigned char)1}, 
        {(unsigned char)35, (unsigned char)1}, 
        {(unsigned char)35, (unsigned char)1}, 
        {(unsigned char)35, (unsigned char)1}, 
        {(unsigned char)40, (unsigned char)2}, 
        {(unsigned char)40, (unsigned char)3}, 
        {(unsigned char)39, (unsigned char)3}, 
        {(unsigned char)39, (unsigned char)2}, 
        {(unsigned char)39, (unsigned char)1}, 
        {(unsigned char)37, (unsigned char)1}, 
        {(unsigned char)37, (unsigned char)3}, 
        {(unsigned char)44, (unsigned char)1}, 
        {(unsigned char)44, (unsigned char)0}, 
        {(unsigned char)45, (unsigned char)1}, 
        {(unsigned char)31, (unsigned char)4}, 
        {(unsigned char)32, (unsigned char)4}, 
        {(unsigned char)32, (unsigned char)1}, 
        {(unsigned char)38, (unsigned char)4}, 
        {(unsigned char)46, (unsigned char)7}, 
        {(unsigned char)43, (unsigned char)1}, 
        {(unsigned char)43, (unsigned char)1}, 
        {(unsigned char)43, (unsigned char)1}, 
        {(unsigned char)43, (unsigned char)1}, 
        {(unsigned char)42, (unsigned char)1}, 
        {(unsigned char)33, (unsigned char)2}, 
        {(unsigned char)34, (unsigned char)2}};
static void yy_accept(yyParser *yypParser ) ;
static void yy_reduce(yyParser *yypParser , int yyruleno ) 
{ 
  int yygoto ;
  int yyact ;
  YYMINORTYPE yygotominor ;
  yyStackEntry *yymsp ;
  int yysize ;
  config_t *ctx ;
  size_t tmp ;
  data_unset *tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___6 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  size_t tmp___12 ;
  size_t tmp___13 ;
  array *vars ;
  data_unset *du ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___20 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  size_t tmp___26 ;
  size_t tmp___27 ;
  void *tmp___28 ;
  char *tmp___29 ;
  char *env ;
  data_string *ds ;
  size_t tmp___30 ;
  size_t tmp___31 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___35 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  size_t tmp___41 ;
  size_t tmp___42 ;
  data_string *tmp___43 ;
  data_string *tmp___44 ;
  data_integer *tmp___45 ;
  long tmp___46 ;
  data_array *tmp___47 ;
  int tmp___48 ;
  size_t tmp___49 ;
  data_unset *tmp___50 ;
  data_config *dc ;
  data_unset *tmp___51 ;
  data_config *cur ;
  data_config *cur___0 ;
  data_config *dc___0 ;
  buffer *b ;
  buffer *rvalue ;
  buffer *op ;
  struct __anonstruct_comps_209 comps[14] ;
  size_t i ;
  int tmp___52 ;
  char const   *errptr ;
  int erroff ;
  pcre_extra *tmp___53 ;
  pcre *tmp___54 ;
  size_t tmp___55 ;
  data_unset *tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;

  {
  ctx = yypParser->ctx;
  yymsp = & yypParser->yystack[yypParser->yyidx];
  if (yyTraceFILE) {
    if (yyruleno >= 0) {
      if ((unsigned int )yyruleno < sizeof(yyRuleName) / sizeof(yyRuleName[0])) {
        fprintf((FILE */* __restrict  */)yyTraceFILE,
                (char const   */* __restrict  */)"%sReduce [%s].\n",
                yyTracePrompt, yyRuleName[yyruleno]);
      } else {

      }
    } else {

    }
  } else {

  }
  switch (yyruleno) {
  case 0: 
  break;
  case 1: 
  break;
  case 2: 
  break;
  case 3: 
  break;
  case 4: 
  break;
  case 5: 
  (yymsp + -1)->minor.yy78 = (data_config *)((void *)0);
  yy_destructor((unsigned char)1, & (yymsp + 0)->minor);
  break;
  case 6: 
  break;
  case 7: 
  break;
  case 8: 
  yy_destructor((unsigned char)1, & (yymsp + 0)->minor);
  break;
  case 9: 
  buffer_copy_string_buffer(((yymsp + 0)->minor.yy41)->key,
                            (buffer const   *)(yymsp + -2)->minor.yy43);
  if (0) {
    if (0) {
      __s1_len = strlen((char const   *)((yymsp + -2)->minor.yy43)->ptr);
      __s2_len = strlen("env.");
      if (! ((size_t )((void const   *)(((yymsp + -2)->minor.yy43)->ptr + 1)) - (size_t )((void const   *)((yymsp + -2)->minor.yy43)->ptr) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)("env." + 1)) - (size_t )((void const   *)"env.") == 1U)) {
          tmp___9 = 1;
        } else
        if (__s2_len >= 4U) {
          tmp___9 = 1;
        } else {
          tmp___9 = 0;
        }
      } else {
        tmp___9 = 0;
      }
      if (tmp___9) {
        tmp___4 = __builtin_strcmp((char const   *)((yymsp + -2)->minor.yy43)->ptr,
                                   "env.");
        tmp___8 = tmp___4;
      } else {
        tmp___7 = __builtin_strcmp((char const   *)((yymsp + -2)->minor.yy43)->ptr,
                                   "env.");
        tmp___8 = tmp___7;
      }
    } else {
      tmp___7 = __builtin_strcmp((char const   *)((yymsp + -2)->minor.yy43)->ptr,
                                 "env.");
      tmp___8 = tmp___7;
    }
    tmp___11 = tmp___8;
  } else {
    tmp___10 = strncmp((char const   *)((yymsp + -2)->minor.yy43)->ptr, "env.",
                       sizeof("env.") - 1U);
    tmp___11 = tmp___10;
  }
  if (tmp___11 == 0) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Setting env variable is not supported in conditional %d %s: %s\n",
            (ctx->current)->context_ndx, ((ctx->current)->key)->ptr,
            ((yymsp + -2)->minor.yy43)->ptr);
    ctx->ok = 0;
  } else {
    if ((((yymsp + 0)->minor.yy41)->key)->used) {
      tmp = (((yymsp + 0)->minor.yy41)->key)->used - 1U;
    } else {
      tmp = (size_t )0;
    }
    tmp___0 = array_get_element((ctx->current)->value,
                                (char const   *)(((yymsp + 0)->minor.yy41)->key)->ptr,
                                tmp);
    if ((unsigned int )((void *)0) == (unsigned int )tmp___0) {
      array_insert_unique((ctx->current)->value, (yymsp + 0)->minor.yy41);
      (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Duplicate config variable in conditional %d %s: %s\n",
              (ctx->current)->context_ndx, ((ctx->current)->key)->ptr,
              (((yymsp + 0)->minor.yy41)->key)->ptr);
      ctx->ok = 0;
      (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
      (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
    }
  }
  buffer_free((yymsp + -2)->minor.yy43);
  (yymsp + -2)->minor.yy43 = (buffer *)((void *)0);
  yy_destructor((unsigned char)2, & (yymsp + -1)->minor);
  break;
  case 10: 
  vars = (ctx->current)->value;
  if (0) {
    if (0) {
      __s1_len___0 = strlen((char const   *)((yymsp + -2)->minor.yy43)->ptr);
      __s2_len___0 = strlen("env.");
      if (! ((size_t )((void const   *)(((yymsp + -2)->minor.yy43)->ptr + 1)) - (size_t )((void const   *)((yymsp + -2)->minor.yy43)->ptr) == 1U)) {
        goto _L___2;
      } else
      if (__s1_len___0 >= 4U) {
        _L___2: /* CIL Label */ 
        if (! ((size_t )((void const   *)("env." + 1)) - (size_t )((void const   *)"env.") == 1U)) {
          tmp___23 = 1;
        } else
        if (__s2_len___0 >= 4U) {
          tmp___23 = 1;
        } else {
          tmp___23 = 0;
        }
      } else {
        tmp___23 = 0;
      }
      if (tmp___23) {
        tmp___18 = __builtin_strcmp((char const   *)((yymsp + -2)->minor.yy43)->ptr,
                                    "env.");
        tmp___22 = tmp___18;
      } else {
        tmp___21 = __builtin_strcmp((char const   *)((yymsp + -2)->minor.yy43)->ptr,
                                    "env.");
        tmp___22 = tmp___21;
      }
    } else {
      tmp___21 = __builtin_strcmp((char const   *)((yymsp + -2)->minor.yy43)->ptr,
                                  "env.");
      tmp___22 = tmp___21;
    }
    tmp___25 = tmp___22;
  } else {
    tmp___24 = strncmp((char const   *)((yymsp + -2)->minor.yy43)->ptr, "env.",
                       sizeof("env.") - 1U);
    tmp___25 = tmp___24;
  }
  if (tmp___25 == 0) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Appending env variable is not supported in conditional %d %s: %s\n",
            (ctx->current)->context_ndx, ((ctx->current)->key)->ptr,
            ((yymsp + -2)->minor.yy43)->ptr);
    ctx->ok = 0;
  } else {
    if (((yymsp + -2)->minor.yy43)->used) {
      tmp___14 = ((yymsp + -2)->minor.yy43)->used - 1U;
    } else {
      tmp___14 = (size_t )0;
    }
    du = array_get_element(vars,
                           (char const   *)((yymsp + -2)->minor.yy43)->ptr,
                           tmp___14);
    if ((unsigned int )((void *)0) != (unsigned int )du) {
      du = configparser_merge_data(du,
                                   (data_unset const   *)(yymsp + 0)->minor.yy41);
      if ((unsigned int )((void *)0) == (unsigned int )du) {
        ctx->ok = 0;
      } else {
        buffer_copy_string_buffer(du->key,
                                  (buffer const   *)(yymsp + -2)->minor.yy43);
        array_replace(vars, du);
      }
      (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
    } else {
      du = configparser_get_variable(ctx,
                                     (buffer const   *)(yymsp + -2)->minor.yy43);
      if ((unsigned int )((void *)0) != (unsigned int )du) {
        du = configparser_merge_data(du,
                                     (data_unset const   *)(yymsp + 0)->minor.yy41);
        if ((unsigned int )((void *)0) == (unsigned int )du) {
          ctx->ok = 0;
        } else {
          buffer_copy_string_buffer(du->key,
                                    (buffer const   *)(yymsp + -2)->minor.yy43);
          array_insert_unique((ctx->current)->value, du);
        }
        (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
      } else {
        buffer_copy_string_buffer(((yymsp + 0)->minor.yy41)->key,
                                  (buffer const   *)(yymsp + -2)->minor.yy43);
        array_insert_unique((ctx->current)->value, (yymsp + 0)->minor.yy41);
      }
    }
  }
  buffer_free((yymsp + -2)->minor.yy43);
  (yymsp + -2)->minor.yy43 = (buffer *)((void *)0);
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  yy_destructor((unsigned char)3, & (yymsp + -1)->minor);
  break;
  case 11: 
  tmp___29 = __builtin_strchr(((yymsp + 0)->minor.yy0)->ptr, '.');
  if ((unsigned int )tmp___29 == (unsigned int )((void *)0)) {
    yygotominor.yy43 = buffer_init_string("var.");
    buffer_append_string_buffer(yygotominor.yy43,
                                (buffer const   *)(yymsp + 0)->minor.yy0);
    buffer_free((yymsp + 0)->minor.yy0);
    (yymsp + 0)->minor.yy0 = (buffer *)((void *)0);
  } else {
    yygotominor.yy43 = (yymsp + 0)->minor.yy0;
    (yymsp + 0)->minor.yy0 = (buffer *)((void *)0);
  }
  break;
  case 12: 
  yygotominor.yy41 = configparser_merge_data((yymsp + -2)->minor.yy41,
                                             (data_unset const   *)(yymsp + 0)->minor.yy41);
  if ((unsigned int )((void *)0) == (unsigned int )yygotominor.yy41) {
    ctx->ok = 0;
  } else {

  }
  (yymsp + -2)->minor.yy41 = (data_unset *)((void *)0);
  (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  yy_destructor((unsigned char)5, & (yymsp + -1)->minor);
  break;
  case 13: 
  yygotominor.yy41 = (yymsp + 0)->minor.yy41;
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  break;
  case 14: 
  if (0) {
    if (0) {
      __s1_len___1 = strlen((char const   *)((yymsp + 0)->minor.yy43)->ptr);
      __s2_len___1 = strlen("env.");
      if (! ((size_t )((void const   *)(((yymsp + 0)->minor.yy43)->ptr + 1)) - (size_t )((void const   *)((yymsp + 0)->minor.yy43)->ptr) == 1U)) {
        goto _L___4;
      } else
      if (__s1_len___1 >= 4U) {
        _L___4: /* CIL Label */ 
        if (! ((size_t )((void const   *)("env." + 1)) - (size_t )((void const   *)"env.") == 1U)) {
          tmp___38 = 1;
        } else
        if (__s2_len___1 >= 4U) {
          tmp___38 = 1;
        } else {
          tmp___38 = 0;
        }
      } else {
        tmp___38 = 0;
      }
      if (tmp___38) {
        tmp___33 = __builtin_strcmp((char const   *)((yymsp + 0)->minor.yy43)->ptr,
                                    "env.");
        tmp___37 = tmp___33;
      } else {
        tmp___36 = __builtin_strcmp((char const   *)((yymsp + 0)->minor.yy43)->ptr,
                                    "env.");
        tmp___37 = tmp___36;
      }
    } else {
      tmp___36 = __builtin_strcmp((char const   *)((yymsp + 0)->minor.yy43)->ptr,
                                  "env.");
      tmp___37 = tmp___36;
    }
    tmp___40 = tmp___37;
  } else {
    tmp___39 = strncmp((char const   *)((yymsp + 0)->minor.yy43)->ptr, "env.",
                       sizeof("env.") - 1U);
    tmp___40 = tmp___39;
  }
  if (tmp___40 == 0) {
    env = getenv((char const   *)(((yymsp + 0)->minor.yy43)->ptr + 4));
    if ((unsigned int )((void *)0) != (unsigned int )env) {
      ds = data_string_init();
      buffer_append_string(ds->value, (char const   *)env);
      yygotominor.yy41 = (data_unset *)ds;
    } else {
      yygotominor.yy41 = (data_unset *)((void *)0);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Undefined env variable: %s\n",
              ((yymsp + 0)->minor.yy43)->ptr + 4);
      ctx->ok = 0;
    }
  } else {
    yygotominor.yy41 = configparser_get_variable(ctx,
                                                 (buffer const   *)(yymsp + 0)->minor.yy43);
    if ((unsigned int )((void *)0) == (unsigned int )yygotominor.yy41) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Undefined config variable: %s\n",
              ((yymsp + 0)->minor.yy43)->ptr);
      ctx->ok = 0;
    } else {

    }
  }
  if (! yygotominor.yy41) {
    tmp___43 = data_string_init();
    yygotominor.yy41 = (data_unset *)tmp___43;
  } else {

  }
  buffer_free((yymsp + 0)->minor.yy43);
  (yymsp + 0)->minor.yy43 = (buffer *)((void *)0);
  break;
  case 15: 
  tmp___44 = data_string_init();
  yygotominor.yy41 = (data_unset *)tmp___44;
  buffer_copy_string_buffer(((data_string *)yygotominor.yy41)->value,
                            (buffer const   *)(yymsp + 0)->minor.yy0);
  buffer_free((yymsp + 0)->minor.yy0);
  (yymsp + 0)->minor.yy0 = (buffer *)((void *)0);
  break;
  case 16: 
  tmp___45 = data_integer_init();
  yygotominor.yy41 = (data_unset *)tmp___45;
  tmp___46 = strtol((char const   */* __restrict  */)((yymsp + 0)->minor.yy0)->ptr,
                    (char **/* __restrict  */)((void *)0), 10);
  ((data_integer *)yygotominor.yy41)->value = (int )tmp___46;
  buffer_free((yymsp + 0)->minor.yy0);
  (yymsp + 0)->minor.yy0 = (buffer *)((void *)0);
  break;
  case 17: 
  tmp___47 = data_array_init();
  yygotominor.yy41 = (data_unset *)tmp___47;
  array_free(((data_array *)yygotominor.yy41)->value);
  ((data_array *)yygotominor.yy41)->value = (yymsp + 0)->minor.yy40;
  (yymsp + 0)->minor.yy40 = (array *)((void *)0);
  break;
  case 18: 
  yygotominor.yy40 = array_init();
  yy_destructor((unsigned char)8, & (yymsp + -1)->minor);
  yy_destructor((unsigned char)9, & (yymsp + 0)->minor);
  break;
  case 19: 
  yygotominor.yy40 = (yymsp + -1)->minor.yy40;
  (yymsp + -1)->minor.yy40 = (array *)((void *)0);
  yy_destructor((unsigned char)8, & (yymsp + -2)->minor);
  yy_destructor((unsigned char)9, & (yymsp + 0)->minor);
  break;
  case 20: 
  tmp___48 = buffer_is_empty(((yymsp + 0)->minor.yy41)->key);
  if (tmp___48) {
    array_insert_unique((yymsp + -2)->minor.yy40, (yymsp + 0)->minor.yy41);
    (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  } else {
    if ((((yymsp + 0)->minor.yy41)->key)->used) {
      tmp___49 = (((yymsp + 0)->minor.yy41)->key)->used - 1U;
    } else {
      tmp___49 = (size_t )0;
    }
    tmp___50 = array_get_element((yymsp + -2)->minor.yy40,
                                 (char const   *)(((yymsp + 0)->minor.yy41)->key)->ptr,
                                 tmp___49);
    if ((unsigned int )((void *)0) == (unsigned int )tmp___50) {
      array_insert_unique((yymsp + -2)->minor.yy40, (yymsp + 0)->minor.yy41);
      (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Duplicate array-key: %s\n",
              (((yymsp + 0)->minor.yy41)->key)->ptr);
      ctx->ok = 0;
      (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
      (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
    }
  }
  yygotominor.yy40 = (yymsp + -2)->minor.yy40;
  (yymsp + -2)->minor.yy40 = (array *)((void *)0);
  yy_destructor((unsigned char)10, & (yymsp + -1)->minor);
  break;
  case 21: 
  yygotominor.yy40 = (yymsp + -1)->minor.yy40;
  (yymsp + -1)->minor.yy40 = (array *)((void *)0);
  yy_destructor((unsigned char)10, & (yymsp + 0)->minor);
  break;
  case 22: 
  yygotominor.yy40 = array_init();
  array_insert_unique(yygotominor.yy40, (yymsp + 0)->minor.yy41);
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  break;
  case 23: 
  yygotominor.yy41 = (yymsp + 0)->minor.yy41;
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  break;
  case 24: 
  buffer_copy_string_buffer(((yymsp + 0)->minor.yy41)->key,
                            (buffer const   *)(yymsp + -2)->minor.yy43);
  buffer_free((yymsp + -2)->minor.yy43);
  (yymsp + -2)->minor.yy43 = (buffer *)((void *)0);
  yygotominor.yy41 = (yymsp + 0)->minor.yy41;
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  yy_destructor((unsigned char)11, & (yymsp + -1)->minor);
  break;
  case 25: 
  yy_destructor((unsigned char)1, & (yymsp + 0)->minor);
  break;
  case 26: 
  break;
  case 27: 
  tmp___51 = array_get_element((ctx->srv)->config_context, "global",
                               sizeof("global") - 1U);
  dc = (data_config *)tmp___51;
  if (dc) {

  } else {
    __assert_fail("dc", "./configparser.y", 334U, "yy_reduce");
  }
  configparser_push(ctx, dc, 0);
  yy_destructor((unsigned char)12, & (yymsp + 0)->minor);
  break;
  case 28: 
  cur = ctx->current;
  configparser_pop(ctx);
  if (cur) {
    if (ctx->current) {

    } else {
      __assert_fail("cur && ctx->current", "./configparser.y", 344U, "yy_reduce");
    }
  } else {
    __assert_fail("cur && ctx->current", "./configparser.y", 344U, "yy_reduce");
  }
  yygotominor.yy78 = cur;
  yy_destructor((unsigned char)13, & (yymsp + -2)->minor);
  yy_destructor((unsigned char)14, & (yymsp + 0)->minor);
  break;
  case 29: 
  if (((yymsp + -3)->minor.yy78)->context_ndx < ((yymsp + 0)->minor.yy78)->context_ndx) {

  } else {
    __assert_fail("yymsp[-3].minor.yy78->context_ndx < yymsp[0].minor.yy78->context_ndx",
                  "./configparser.y", 350U, "yy_reduce");
  }
  ((yymsp + 0)->minor.yy78)->prev = (yymsp + -3)->minor.yy78;
  ((yymsp + -3)->minor.yy78)->next = (yymsp + 0)->minor.yy78;
  yygotominor.yy78 = (yymsp + 0)->minor.yy78;
  (yymsp + -3)->minor.yy78 = (data_config *)((void *)0);
  (yymsp + 0)->minor.yy78 = (data_config *)((void *)0);
  yy_destructor((unsigned char)15, & (yymsp + -1)->minor);
  break;
  case 30: 
  yygotominor.yy78 = (yymsp + 0)->minor.yy78;
  (yymsp + 0)->minor.yy78 = (data_config *)((void *)0);
  break;
  case 31: 
  cur___0 = ctx->current;
  configparser_pop(ctx);
  if (cur___0) {
    if (ctx->current) {

    } else {
      __assert_fail("cur && ctx->current", "./configparser.y", 369U, "yy_reduce");
    }
  } else {
    __assert_fail("cur && ctx->current", "./configparser.y", 369U, "yy_reduce");
  }
  yygotominor.yy78 = cur___0;
  yy_destructor((unsigned char)13, & (yymsp + -2)->minor);
  yy_destructor((unsigned char)14, & (yymsp + 0)->minor);
  break;
  case 32: 
  if (ctx->ok) {
    if ((unsigned int )((yymsp + 0)->minor.yy41)->type != 1U) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"rvalue must be string");
      ctx->ok = 0;
    } else {

    }
  } else {

  }
  switch ((unsigned int )(yymsp + -1)->minor.yy27) {
  case 3U: 
  op = buffer_init_string("!=");
  break;
  case 1U: 
  op = buffer_init_string("==");
  break;
  case 4U: 
  op = buffer_init_string("!~");
  break;
  case 2U: 
  op = buffer_init_string("=~");
  break;
  default: 
  __assert_fail("0", "./configparser.y", 397U, "yy_reduce");
  return;
  }
  b = buffer_init();
  buffer_copy_string_buffer(b, (buffer const   *)(ctx->current)->key);
  buffer_append_string(b, "/");
  buffer_append_string_buffer(b, (buffer const   *)(yymsp + -5)->minor.yy0);
  buffer_append_string_buffer(b, (buffer const   *)(yymsp + -3)->minor.yy43);
  buffer_append_string_buffer(b, (buffer const   *)op);
  rvalue = ((data_string *)(yymsp + 0)->minor.yy41)->value;
  buffer_append_string_buffer(b, (buffer const   *)rvalue);
  if (b->used) {
    tmp___55 = b->used - 1U;
  } else {
    tmp___55 = (size_t )0;
  }
  tmp___56 = array_get_element(ctx->all_configs, (char const   *)b->ptr,
                               tmp___55);
  dc___0 = (data_config *)tmp___56;
  if ((unsigned int )((void *)0) != (unsigned int )dc___0) {
    configparser_push(ctx, dc___0, 0);
  } else {
    comps[0].comp = (comp_key_t )1;
    comps[0].comp_key = (char *)"SERVER[\"socket\"]";
    comps[0].len = sizeof("SERVER[\"socket\"]") - 1U;
    comps[1].comp = (comp_key_t )2;
    comps[1].comp_key = (char *)"HTTP[\"url\"]";
    comps[1].len = sizeof("HTTP[\"url\"]") - 1U;
    comps[2].comp = (comp_key_t )3;
    comps[2].comp_key = (char *)"HTTP[\"host\"]";
    comps[2].len = sizeof("HTTP[\"host\"]") - 1U;
    comps[3].comp = (comp_key_t )4;
    comps[3].comp_key = (char *)"HTTP[\"referer\"]";
    comps[3].len = sizeof("HTTP[\"referer\"]") - 1U;
    comps[4].comp = (comp_key_t )5;
    comps[4].comp_key = (char *)"HTTP[\"useragent\"]";
    comps[4].len = sizeof("HTTP[\"useragent\"]") - 1U;
    comps[5].comp = (comp_key_t )5;
    comps[5].comp_key = (char *)"HTTP[\"user-agent\"]";
    comps[5].len = sizeof("HTTP[\"user-agent\"]") - 1U;
    comps[6].comp = (comp_key_t )6;
    comps[6].comp_key = (char *)"HTTP[\"cookie\"]";
    comps[6].len = sizeof("HTTP[\"cookie\"]") - 1U;
    comps[7].comp = (comp_key_t )7;
    comps[7].comp_key = (char *)"HTTP[\"remoteip\"]";
    comps[7].len = sizeof("HTTP[\"remoteip\"]") - 1U;
    comps[8].comp = (comp_key_t )7;
    comps[8].comp_key = (char *)"HTTP[\"remote-ip\"]";
    comps[8].len = sizeof("HTTP[\"remote-ip\"]") - 1U;
    comps[9].comp = (comp_key_t )8;
    comps[9].comp_key = (char *)"HTTP[\"querystring\"]";
    comps[9].len = sizeof("HTTP[\"querystring\"]") - 1U;
    comps[10].comp = (comp_key_t )8;
    comps[10].comp_key = (char *)"HTTP[\"query-string\"]";
    comps[10].len = sizeof("HTTP[\"query-string\"]") - 1U;
    comps[11].comp = (comp_key_t )9;
    comps[11].comp_key = (char *)"HTTP[\"request-method\"]";
    comps[11].len = sizeof("HTTP[\"request-method\"]") - 1U;
    comps[12].comp = (comp_key_t )10;
    comps[12].comp_key = (char *)"PHYSICAL[\"path\"]";
    comps[12].len = sizeof("PHYSICAL[\"path\"]") - 1U;
    comps[13].comp = (comp_key_t )0;
    comps[13].comp_key = (char *)((void *)0);
    comps[13].len = (size_t )0;
    dc___0 = data_config_init();
    buffer_copy_string_buffer(dc___0->key, (buffer const   *)b);
    buffer_copy_string_buffer(dc___0->op, (buffer const   *)op);
    buffer_copy_string_buffer(dc___0->comp_key,
                              (buffer const   *)(yymsp + -5)->minor.yy0);
    buffer_append_string_len(dc___0->comp_key, "[\"", sizeof("[\"") - 1U);
    buffer_append_string_buffer(dc___0->comp_key,
                                (buffer const   *)(yymsp + -3)->minor.yy43);
    buffer_append_string_len(dc___0->comp_key, "\"]", sizeof("\"]") - 1U);
    dc___0->cond = (yymsp + -1)->minor.yy27;
    i = (size_t )0;
    while (comps[i].comp_key) {
      tmp___52 = buffer_is_equal_string(dc___0->comp_key,
                                        (char const   *)comps[i].comp_key,
                                        comps[i].len);
      if (tmp___52) {
        dc___0->comp = comps[i].comp;
        break;
      } else {

      }
      i ++;
    }
    if (0U == (unsigned int )dc___0->comp) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"error comp_key %s",
              (dc___0->comp_key)->ptr);
      ctx->ok = 0;
    } else {

    }
    switch ((unsigned int )(yymsp + -1)->minor.yy27) {
    case 1U: 
    case 3U: 
    dc___0->string = buffer_init_buffer(rvalue);
    break;
    case 2U: 
    case 4U: 
    tmp___54 = pcre_compile((char const   *)rvalue->ptr, 0, & errptr, & erroff,
                            (unsigned char const   *)((void *)0));
    dc___0->regex = tmp___54;
    if ((unsigned int )((void *)0) == (unsigned int )tmp___54) {
      dc___0->string = buffer_init_string(errptr);
      dc___0->cond = (config_cond_t )0;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"parsing regex failed: %s -> %s at offset %d\n",
              rvalue->ptr, errptr, erroff);
      ctx->ok = 0;
    } else {
      tmp___53 = pcre_study((pcre const   *)dc___0->regex, 0, & errptr);
      dc___0->regex_study = tmp___53;
      if ((unsigned int )((void *)0) == (unsigned int )tmp___53) {
        if ((unsigned int )errptr != (unsigned int )((void *)0)) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"studying regex failed: %s -> %s\n",
                  rvalue->ptr, errptr);
          ctx->ok = 0;
        } else {
          dc___0->string = buffer_init_buffer(rvalue);
        }
      } else {
        dc___0->string = buffer_init_buffer(rvalue);
      }
    }
    break;
    default: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"unknown condition for $%s[%s]\n",
            ((yymsp + -5)->minor.yy0)->ptr, ((yymsp + -3)->minor.yy43)->ptr);
    ctx->ok = 0;
    break;
    }
    configparser_push(ctx, dc___0, 1);
  }
  buffer_free(b);
  buffer_free(op);
  buffer_free((yymsp + -5)->minor.yy0);
  (yymsp + -5)->minor.yy0 = (buffer *)((void *)0);
  buffer_free((yymsp + -3)->minor.yy43);
  (yymsp + -3)->minor.yy43 = (buffer *)((void *)0);
  (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  yy_destructor((unsigned char)16, & (yymsp + -6)->minor);
  yy_destructor((unsigned char)18, & (yymsp + -4)->minor);
  yy_destructor((unsigned char)19, & (yymsp + -2)->minor);
  break;
  case 33: 
  yygotominor.yy27 = (config_cond_t )1;
  yy_destructor((unsigned char)20, & (yymsp + 0)->minor);
  break;
  case 34: 
  yygotominor.yy27 = (config_cond_t )2;
  yy_destructor((unsigned char)21, & (yymsp + 0)->minor);
  break;
  case 35: 
  yygotominor.yy27 = (config_cond_t )3;
  yy_destructor((unsigned char)22, & (yymsp + 0)->minor);
  break;
  case 36: 
  yygotominor.yy27 = (config_cond_t )4;
  yy_destructor((unsigned char)23, & (yymsp + 0)->minor);
  break;
  case 37: 
  yygotominor.yy43 = (buffer *)((void *)0);
  if (ctx->ok) {
    if ((unsigned int )((yymsp + 0)->minor.yy41)->type == 1U) {
      yygotominor.yy43 = buffer_init_buffer(((data_string *)(yymsp + 0)->minor.yy41)->value);
    } else
    if ((unsigned int )((yymsp + 0)->minor.yy41)->type == 4U) {
      yygotominor.yy43 = buffer_init();
      buffer_copy_long(yygotominor.yy43,
                       (long )((data_integer *)(yymsp + 0)->minor.yy41)->value);
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"operand must be string");
      ctx->ok = 0;
    }
  } else {

  }
  (*(((yymsp + 0)->minor.yy41)->free))((yymsp + 0)->minor.yy41);
  (yymsp + 0)->minor.yy41 = (data_unset *)((void *)0);
  break;
  case 38: 
  if (ctx->ok) {
    tmp___57 = config_parse_file(ctx->srv, ctx,
                                 (char const   *)((yymsp + 0)->minor.yy43)->ptr);
    if (0 != tmp___57) {
      ctx->ok = 0;
    } else {

    }
    buffer_free((yymsp + 0)->minor.yy43);
    (yymsp + 0)->minor.yy43 = (buffer *)((void *)0);
  } else {

  }
  yy_destructor((unsigned char)24, & (yymsp + -1)->minor);
  break;
  case 39: 
  if (ctx->ok) {
    tmp___58 = config_parse_cmd(ctx->srv, ctx,
                                (char const   *)((yymsp + 0)->minor.yy43)->ptr);
    if (0 != tmp___58) {
      ctx->ok = 0;
    } else {

    }
    buffer_free((yymsp + 0)->minor.yy43);
    (yymsp + 0)->minor.yy43 = (buffer *)((void *)0);
  } else {

  }
  yy_destructor((unsigned char)25, & (yymsp + -1)->minor);
  break;
  }
  yygoto = (int )yyRuleInfo[yyruleno].lhs;
  yysize = (int )yyRuleInfo[yyruleno].nrhs;
  yypParser->yyidx -= yysize;
  yyact = yy_find_reduce_action(yypParser, yygoto);
  if (yyact < 63) {
    yy_shift(yypParser, yyact, yygoto, & yygotominor);
  } else
  if (yyact == 104) {
    yy_accept(yypParser);
  } else {

  }
  return;
}
}
static void yy_parse_failed(yyParser *yypParser ) 
{ 
  config_t *ctx ;

  {
  ctx = yypParser->ctx;
  if (yyTraceFILE) {
    fprintf((FILE */* __restrict  */)yyTraceFILE,
            (char const   */* __restrict  */)"%sFail!\n", yyTracePrompt);
  } else {

  }
  while (yypParser->yyidx >= 0) {
    yy_pop_parser_stack(yypParser);
  }
  ctx->ok = 0;
  yypParser->ctx = ctx;
  return;
}
}
static void yy_syntax_error(yyParser *yypParser , int yymajor ,
                            YYMINORTYPE yyminor ) 
{ 
  config_t *ctx ;

  {
  ctx = yypParser->ctx;
  yypParser->ctx = ctx;
  return;
}
}
static void yy_accept(yyParser *yypParser ) 
{ 
  config_t *ctx ;

  {
  ctx = yypParser->ctx;
  if (yyTraceFILE) {
    fprintf((FILE */* __restrict  */)yyTraceFILE,
            (char const   */* __restrict  */)"%sAccept!\n", yyTracePrompt);
  } else {

  }
  while (yypParser->yyidx >= 0) {
    yy_pop_parser_stack(yypParser);
  }
  yypParser->ctx = ctx;
  return;
}
}
void configparser(void *yyp , int yymajor , buffer *yyminor , config_t *ctx ) 
{ 
  YYMINORTYPE yyminorunion ;
  int yyact ;
  int yyendofinput ;
  int yyerrorhit ;
  yyParser *yypParser ;
  int yymx ;
  YYMINORTYPE u2 ;

  {
  yyerrorhit = 0;
  yypParser = (yyParser *)yyp;
  if (yypParser->yyidx < 0) {
    if (yymajor == 0) {
      return;
    } else {

    }
    yypParser->yyidx = 0;
    yypParser->yyerrcnt = -1;
    yypParser->yystack[0].stateno = 0;
    yypParser->yystack[0].major = 0;
  } else {

  }
  yyminorunion.yy0 = yyminor;
  yyendofinput = yymajor == 0;
  yypParser->ctx = ctx;
  if (yyTraceFILE) {
    fprintf((FILE */* __restrict  */)yyTraceFILE,
            (char const   */* __restrict  */)"%sInput %s\n", yyTracePrompt,
            yyTokenName[yymajor]);
  } else {

  }
  while (1) {
    yyact = yy_find_shift_action(yypParser, yymajor);
    if (yyact < 63) {
      yy_shift(yypParser, yyact, yymajor, & yyminorunion);
      (yypParser->yyerrcnt) --;
      if (yyendofinput) {
        if (yypParser->yyidx >= 0) {
          yymajor = 0;
        } else {
          yymajor = 48;
        }
      } else {
        yymajor = 48;
      }
    } else
    if (yyact < 103) {
      {
      if (yyact < 64) {
        return;
      }
      yy_reduce(yypParser, yyact - 63);
      }
    } else
    if (yyact == 103) {
      if (yyTraceFILE) {
        fprintf((FILE */* __restrict  */)yyTraceFILE,
                (char const   */* __restrict  */)"%sSyntax Error!\n",
                yyTracePrompt);
      } else {

      }
      if (yypParser->yyerrcnt < 0) {
        yy_syntax_error(yypParser, yymajor, yyminorunion);
      } else {

      }
      yymx = yypParser->yystack[yypParser->yyidx].major;
      if (yymx == 26) {
        goto _L;
      } else
      if (yyerrorhit) {
        _L: /* CIL Label */ 
        if (yyTraceFILE) {
          fprintf((FILE */* __restrict  */)yyTraceFILE,
                  (char const   */* __restrict  */)"%sDiscard input token %s\n",
                  yyTracePrompt, yyTokenName[yymajor]);
        } else {

        }
        yy_destructor((unsigned char )yymajor, & yyminorunion);
        yymajor = 48;
      } else {
        while (1) {
          if (yypParser->yyidx >= 0) {
            if (yymx != 26) {
              yyact = yy_find_shift_action(yypParser, 26);
              if (yyact >= 63) {

              } else {
                break;
              }
            } else {
              break;
            }
          } else {
            break;
          }
          yy_pop_parser_stack(yypParser);
        }
        if (yypParser->yyidx < 0) {
          yy_destructor((unsigned char )yymajor, & yyminorunion);
          yy_parse_failed(yypParser);
          yymajor = 48;
        } else
        if (yymajor == 0) {
          yy_destructor((unsigned char )yymajor, & yyminorunion);
          yy_parse_failed(yypParser);
          yymajor = 48;
        } else
        if (yymx != 26) {
          u2.yy95 = 0;
          yy_shift(yypParser, yyact, 26, & u2);
        } else {

        }
      }
      yypParser->yyerrcnt = 3;
      yyerrorhit = 1;
    } else {
      yy_accept(yypParser);
      yymajor = 48;
    }
    if (yymajor != 48) {
      if (yypParser->yyidx >= 0) {

      } else {
        break;
      }
    } else {
      break;
    }
  }
  return;
}
}
