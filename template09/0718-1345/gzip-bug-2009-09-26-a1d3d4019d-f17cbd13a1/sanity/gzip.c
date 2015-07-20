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
enum __anonenum_2 {
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
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino64_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off64_t off_t;
typedef __off64_t off64_t;
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
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
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
struct __anonstruct___sigset_t_3 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_3 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_4 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_4 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_5 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_5 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_7 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_7 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_6 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_6 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_8 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_8 pthread_mutexattr_t;
struct __anonstruct___data_10 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_9 {
   struct __anonstruct___data_10 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_9 pthread_cond_t;
union __anonunion_pthread_condattr_t_11 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_11 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_13 {
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
union __anonunion_pthread_rwlock_t_12 {
   struct __anonstruct___data_13 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_12 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_14 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_14 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_15 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_15 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_16 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_16 pthread_barrierattr_t;
typedef __sig_atomic_t sig_atomic_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_18 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_19 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_20 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_21 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_22 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_23 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_17 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_18 _kill ;
   struct __anonstruct__timer_19 _timer ;
   struct __anonstruct__rt_20 _rt ;
   struct __anonstruct__sigchld_21 _sigchld ;
   struct __anonstruct__sigfault_22 _sigfault ;
   struct __anonstruct__sigpoll_23 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_17 _sifields ;
};
typedef struct siginfo siginfo_t;
enum __anonenum_24 {
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
enum __anonenum_25 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_26 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_27 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_28 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_29 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_30 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_31 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_33 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_32 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_33 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_32 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_34 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
typedef void (*__sighandler_t)(int  );
typedef void (*sighandler_t)(int  );
typedef void (*sig_t)(int  );
union __anonunion___sigaction_handler_35 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_35 __sigaction_handler ;
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
struct __anonstruct___kernel_fd_set_36 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___kernel_fd_set_36 __kernel_fd_set;
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
struct __anonstruct___kernel_fsid_t_37 {
   int val[2] ;
};
typedef struct __anonstruct___kernel_fsid_t_37 __kernel_fsid_t;
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
union __anonunion____missing_field_name_38 {
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
   union __anonunion____missing_field_name_38 __annonCompField2 ;
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
enum __anonenum_39 {
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
enum __anonenum_40 {
    REG_GS = 0,
    REG_FS = 1,
    REG_ES = 2,
    REG_DS = 3,
    REG_EDI = 4,
    REG_ESI = 5,
    REG_EBP = 6,
    REG_ESP = 7,
    REG_EBX = 8,
    REG_EDX = 9,
    REG_ECX = 10,
    REG_EAX = 11,
    REG_TRAPNO = 12,
    REG_ERR = 13,
    REG_EIP = 14,
    REG_CS = 15,
    REG_EFL = 16,
    REG_UESP = 17,
    REG_SS = 18
} ;
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
struct __anonstruct_mcontext_t_41 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_41 mcontext_t;
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
typedef struct ucontext ucontext_t;
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
struct stat64 {
   __dev_t st_dev ;
   unsigned int __pad1 ;
   __ino_t __st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned int __pad2 ;
   __off64_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __ino64_t st_ino ;
};
typedef int error_t;
typedef void *voidp;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_43 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_42 {
   int __count ;
   union __anonunion___value_43 __value ;
};
typedef struct __anonstruct___mbstate_t_42 __mbstate_t;
struct __anonstruct__G_fpos_t_44 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_44 _G_fpos_t;
struct __anonstruct__G_fpos64_t_45 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_45 _G_fpos64_t;
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
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;
struct __anonstruct__IO_cookie_io_functions_t_46 {
   __io_read_fn *read ;
   __io_write_fn *write ;
   __io_seek_fn *seek ;
   __io_close_fn *close ;
};
typedef struct __anonstruct__IO_cookie_io_functions_t_46 _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
struct _IO_cookie_file;
typedef __gnuc_va_list va_list;
typedef _G_fpos64_t fpos_t;
typedef _G_fpos64_t fpos64_t;
struct obstack;
struct obstack;
typedef int ptrdiff_t;
typedef long wchar_t;
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
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;
typedef int file_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_47 {
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
enum __anonenum_48 {
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
enum __anonenum_49 {
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
struct __anonstruct___wait_terminated_50 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_51 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_50 __wait_terminated ;
   struct __anonstruct___wait_stopped_51 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_52 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_52  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_53 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_53 div_t;
struct __anonstruct_ldiv_t_54 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_54 ldiv_t;
struct __anonstruct_lldiv_t_55 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_55 lldiv_t;
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
typedef int (*comparison_fn_t)(void const   * , void const   * );
typedef int (*__compar_d_fn_t)(void const   * , void const   * , void * );
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
struct flock64 {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
enum __pid_type {
    F_OWNER_TID = 0,
    F_OWNER_PID = 1,
    F_OWNER_PGRP = 2,
    F_OWNER_GID = 2
} ;
struct f_owner_ex {
   enum __pid_type type ;
   __pid_t pid ;
};
struct dirent {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct dirent64 {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
enum __anonenum_56 {
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
static char *license_msg[6]  = {      (char *)"Copyright (C) 2007 Free Software Foundation, Inc.",      (char *)"Copyright (C) 1993 Jean-loup Gailly.",      (char *)"This is free software.  You may redistribute copies of it under the terms of",      (char *)"the GNU General Public License <http://www.gnu.org/licenses/gpl.html>.", 
        (char *)"There is NO WARRANTY, to the extent permitted by law.",      (char *)0};
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
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  tolower(int __c ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  toupper(int __c ) ;
extern  __attribute__((__nothrow__)) int isblank(int  ) ;
extern  __attribute__((__nothrow__)) int isctype(int __c , int __mask ) ;
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  tolower(int __c ) ;
__inline extern int __attribute__((__gnu_inline__))  tolower(int __c ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  toupper(int __c ) ;
__inline extern int __attribute__((__gnu_inline__))  toupper(int __c ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___0);
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
extern  __attribute__((__nothrow__)) __sighandler_t sysv_signal(int __sig ,
                                                                void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t bsd_signal(int __sig ,
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
extern int sigpause(int __sig )  __asm__("__xpg_sigpause")  ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigisemptyset)(sigset_t const   *__set ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) sigandset)(sigset_t *__set ,
                                                                                          sigset_t const   *__left ,
                                                                                          sigset_t const   *__right ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) sigorset)(sigset_t *__set ,
                                                                                         sigset_t const   *__left ,
                                                                                         sigset_t const   *__right ) ;
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
extern  __attribute__((__nothrow__)) int sighold(int __sig ) ;
extern  __attribute__((__nothrow__)) int sigrelse(int __sig ) ;
extern  __attribute__((__nothrow__)) int sigignore(int __sig ) ;
extern  __attribute__((__nothrow__)) __sighandler_t sigset(int __sig ,
                                                           void (*__disp)(int  ) ) ;
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int pthread_sigqueue(pthread_t __threadid ,
                                                          int __signo ,
                                                          union sigval  const  __value ) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                                                             struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                                                            struct stat *__statbuf )  __asm__("fstat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                                                                               struct stat64 * __restrict  __statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                                                                                              struct stat64 *__statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                                                                char const   * __restrict  __filename ,
                                                                                                                                struct stat * __restrict  __statbuf ,
                                                                                                                                int __flag )  __asm__("fstatat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                                                                                  char const   * __restrict  __filename ,
                                                                                                                                  struct stat64 * __restrict  __statbuf ,
                                                                                                                                  int __flag ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                                                              struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat64)(char const   * __restrict  __path ,
                                                                                                                                struct stat64 * __restrict  __statbuf ) ;
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
extern  __attribute__((__nothrow__)) __mode_t getumask(void) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3))) __fxstat64)(int __ver ,
                                                                                       int __fildes ,
                                                                                       struct stat64 *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __xstat64)(int __ver ,
                                                                                        char const   *__filename ,
                                                                                        struct stat64 *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __lxstat64)(int __ver ,
                                                                                         char const   *__filename ,
                                                                                         struct stat64 *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4))) __fxstatat64)(int __ver ,
                                                                                           int __fildes ,
                                                                                           char const   *__filename ,
                                                                                           struct stat64 *__stat_buf ,
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
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                                                                               struct stat64 * __restrict  __statbuf ) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                                                 struct stat64 * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __xstat64(3, (char const   *)__path, (struct stat64 *)__statbuf);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat64)(char const   * __restrict  __path ,
                                                                                                                                struct stat64 * __restrict  __statbuf ) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1,2))) lstat64)(char const   * __restrict  __path ,
                                                                                                  struct stat64 * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __lxstat64(3, (char const   *)__path, (struct stat64 *)__statbuf);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                                                                                              struct stat64 *__statbuf ) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                                                                struct stat64 *__statbuf ) 
{ 
  int tmp ;

  {
  tmp = __fxstat64(3, __fd, __statbuf);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                                                                                  char const   * __restrict  __filename ,
                                                                                                                                  struct stat64 * __restrict  __statbuf ,
                                                                                                                                  int __flag ) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                                                    char const   * __restrict  __filename ,
                                                                                                    struct stat64 * __restrict  __statbuf ,
                                                                                                    int __flag ) 
{ 
  int tmp ;

  {
  tmp = __fxstatat64(3, __fd, (char const   *)__filename,
                     (struct stat64 *)__statbuf, __flag);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
extern char *program_invocation_name ;
extern char *program_invocation_short_name ;
extern void close_stdin_set_file_name(char const   *file ) ;
extern void close_stdin(void) ;
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile , int __read_write ,
                            void *__cookie , _IO_cookie_io_functions_t __fns ) ;
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
extern FILE *tmpfile64(void) ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fcloseall(void) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
extern FILE *fopen64(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ) ;
extern FILE *freopen64(char const   * __restrict  __filename ,
                       char const   * __restrict  __modes ,
                       FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *fopencookie(void * __restrict  __magic_cookie ,
                                                       char const   * __restrict  __modes ,
                                                       _IO_cookie_io_functions_t __io_funcs ) ;
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
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vasprintf)(char ** __restrict  __ptr ,
                                                                              char const   * __restrict  __f ,
                                                                              __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  __asprintf)(char ** __restrict  __ptr ,
                                                                               char const   * __restrict  __fmt 
                                                                               , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  asprintf)(char ** __restrict  __ptr ,
                                                                             char const   * __restrict  __fmt 
                                                                             , ...) ;
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
extern int scanf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s ,
                                                                            char const   * __restrict  __format ,
                                                                            __gnuc_va_list __arg ) ;
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
extern char *fgets_unlocked(char * __restrict  __s , int __n ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr ,
                                                                   size_t * __restrict  __n ,
                                                                   FILE * __restrict  __stream ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int puts(char const   *__s ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
extern int fputs_unlocked(char const   * __restrict  __s ,
                          FILE * __restrict  __stream ) ;
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
extern int fseeko64(FILE *__stream , __off64_t __off , int __whence ) ;
extern __off64_t ftello64(FILE *__stream ) ;
extern int fgetpos64(FILE * __restrict  __stream , fpos64_t * __restrict  __pos ) ;
extern int fsetpos64(FILE *__stream , fpos64_t const   *__pos ) ;
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) ;
extern void perror(char const   *__s ) ;
extern int sys_nerr ;
extern char const   * const  sys_errlist[] ;
extern int _sys_nerr ;
extern char const   * const  _sys_errlist[] ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern int pclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
extern char *cuserid(char *__s ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_printf)(struct obstack * __restrict  __obstack ,
                                                                                   char const   * __restrict  __format 
                                                                                   , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_vprintf)(struct obstack * __restrict  __obstack ,
                                                                                    char const   * __restrict  __format ,
                                                                                    __gnuc_va_list __args ) ;
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
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr ,
                                                                   size_t * __restrict  __n ,
                                                                   FILE * __restrict  __stream ) 
{ 
  __ssize_t tmp ;

  {
  tmp = __getdelim(__lineptr, __n, '\n', __stream);
  return ((__ssize_t __attribute__((__gnu_inline__))  )tmp);
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
extern int rpl_fseeko(FILE *fp , off_t offset , int whence ) ;
extern int rpl_fflush(FILE *gl_stream ) ;
extern int fpurge(FILE *gl_stream ) ;
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) char *strptime(char const   * __restrict  __s ,
                                                    char const   * __restrict  __fmt ,
                                                    struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime_l(char * __restrict  __s ,
                                                       size_t __maxsize ,
                                                       char const   * __restrict  __format ,
                                                       struct tm  const  * __restrict  __tp ,
                                                       __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) char *strptime_l(char const   * __restrict  __s ,
                                                      char const   * __restrict  __fmt ,
                                                      struct tm *__tp ,
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
extern int getdate_err ;
extern struct tm *getdate(char const   *__string ) ;
extern int getdate_r(char const   * __restrict  __string ,
                     struct tm * __restrict  __resbufp ) ;
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
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) rawmemchr)(void const   *__s ,
                                                                                        int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memrchr)(void const   *__s ,
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchrnul)(char const   *__s ,
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcasestr)(char const   *__haystack ,
                                                                                           char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,3))) memmem)(void const   *__haystack ,
                                                                                       size_t __haystacklen ,
                                                                                       void const   *__needle ,
                                                                                       size_t __needlelen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) __mempcpy)(void * __restrict  __dest ,
                                                                                          void const   * __restrict  __src ,
                                                                                          size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) mempcpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strnlen)(char const   *__string ,
                                                                                       size_t __maxlen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                         char *__buf ,
                                                                                         size_t __buflen ) ;
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
extern  __attribute__((__nothrow__)) int ffsl(long __l )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ffsll(long long __ll )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcasecmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncasecmp)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) strcasecmp_l)(char const   *__s1 ,
                                                                                             char const   *__s2 ,
                                                                                             __locale_t __loc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,4))) strncasecmp_l)(char const   *__s1 ,
                                                                                              char const   *__s2 ,
                                                                                              size_t __n ,
                                                                                              __locale_t __loc )  __attribute__((__pure__)) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strverscmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strfry)(char *__string ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memfrob)(void *__s ,
                                                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) basename)(char const   *__filename ) ;
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
int method ;
uch inbuf[32832]  ;
uch outbuf[18432]  ;
ush d_buf[32768]  ;
uch window[65536L]  ;
ush prev[1L << 16]  ;
unsigned int insize  ;
unsigned int inptr  ;
unsigned int outcnt  ;
off_t bytes_in  ;
off_t bytes_out  ;
extern off_t header_bytes ;
int ifd  ;
int ofd  ;
char ifname[1024]  ;
char ofname[1024]  ;
char *program_name  ;
struct timespec time_stamp  ;
off_t ifile_size  ;
extern int decrypt ;
int exit_code ;
int verbose ;
int quiet ;
int level ;
int test ;
int to_stdout ;
int save_orig_name  ;
extern int zip(int in , int out ) ;
extern int file_read(char *buf , unsigned int size ) ;
extern int unzip(int in , int out ) ;
extern int check_zipfile(int in ) ;
extern int unpack(int in , int out ) ;
extern int unlzh(int in , int out ) ;
 __attribute__((__noreturn__)) void abort_gzip(void) ;
extern void lm_init(int pack_level , ush *flags ) ;
extern off_t deflate(void) ;
extern void ct_init(ush *attr , int *method ) ;
extern int ct_tally(int dist , int lc ) ;
extern off_t flush_block(char *buf , ulg stored_len , int eof ) ;
extern void bi_init(file_t zipfile ) ;
extern void send_bits(int value , int length ) ;
extern unsigned int bi_reverse(unsigned int value , int length ) ;
extern void bi_windup(void) ;
extern void copy_block(char *buf , unsigned int len , int header ) ;
extern int (*read_buf)(char *buf , unsigned int size ) ;
extern int copy(int in , int out ) ;
extern ulg updcrc(uch *s , unsigned int n ) ;
extern void clear_bufs(void) ;
extern int fill_inbuf(int eof_ok ) ;
extern void flush_outbuf(void) ;
extern void flush_window(void) ;
extern void write_buf(int fd , voidp buf , unsigned int cnt ) ;
extern int read_buffer(int fd , voidp buf , unsigned int cnt ) ;
extern char *strlwr(char *s ) ;
extern char *gzip_base_name(char *fname ) ;
extern int xunlink(char *fname ) ;
extern void make_simple_name(char *name ) ;
extern char *add_envopt(int *argcp , char ***argvp , char *env ) ;
extern  __attribute__((__noreturn__)) void gzip_error(char *m ) ;
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void warning(char *m ) ;
extern void read_error(void) ;
extern void write_error(void) ;
extern void display_ratio(off_t num , off_t den , FILE *file ) ;
extern void fprint_off(FILE * , off_t  , int  ) ;
extern int inflate(void) ;
extern int yesno(void) ;
int maxbits ;
extern int block_mode ;
extern int lzw(int in , int out ) ;
extern int unlzw(int in , int out ) ;
extern int open_safer(char const   * , int   , ...) ;
extern int creat_safer(char const   * , mode_t  ) ;
extern char *optarg ;
extern int optind ;
extern int opterr ;
extern int optopt ;
extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;
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
__inline static long get_stat_atime_ns(struct stat  const  *st ) 
{ 


  {
  return ((long )st->st_atim.tv_nsec);
}
}
__inline static long get_stat_ctime_ns(struct stat  const  *st ) 
{ 


  {
  return ((long )st->st_ctim.tv_nsec);
}
}
__inline static long get_stat_mtime_ns(struct stat  const  *st ) 
{ 


  {
  return ((long )st->st_mtim.tv_nsec);
}
}
__inline static long get_stat_birthtime_ns(struct stat  const  *st ) 
{ 


  {
  return (0L);
}
}
__inline static struct timespec get_stat_atime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_atim);
}
}
__inline static struct timespec get_stat_ctime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_ctim);
}
}
__inline static struct timespec get_stat_mtime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_mtim);
}
}
__inline static struct timespec get_stat_birthtime(struct stat  const  *st ) 
{ 
  struct timespec t ;

  {
  t.tv_sec = (__time_t )-1;
  t.tv_nsec = -1L;
  return (t);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) access)(char const   *__name ,
                                                                                   int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) euidaccess)(char const   *__name ,
                                                                                       int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) eaccess)(char const   *__name ,
                                                                                    int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) faccessat)(int __fd ,
                                                                                      char const   *__file ,
                                                                                      int __type ,
                                                                                      int __flag ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
extern  __attribute__((__nothrow__)) __off64_t lseek64(int __fd ,
                                                       __off64_t __offset ,
                                                       int __whence ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off64_t __offset )  __asm__("pread64")  ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __nbytes ,
                      __off64_t __offset )  __asm__("pwrite64")  ;
extern ssize_t pread64(int __fd , void *__buf , size_t __nbytes ,
                       __off64_t __offset ) ;
extern ssize_t pwrite64(int __fd , void const   *__buf , size_t __n ,
                        __off64_t __offset ) ;
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
extern  __attribute__((__nothrow__)) int pipe2(int *__pipedes , int __flags ) ;
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
extern  __attribute__((__nothrow__)) char *get_current_dir_name(void) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getwd)(char *__buf )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern  __attribute__((__nothrow__)) int dup3(int __fd , int __fd2 ,
                                              int __flags ) ;
extern char **__environ ;
extern char **environ ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execvpe)(char const   *__file ,
                                                                                      char * const  *__argv ,
                                                                                      char * const  *__envp ) ;
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
extern  __attribute__((__nothrow__)) int group_member(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int getresuid(__uid_t *__ruid ,
                                                   __uid_t *__euid ,
                                                   __uid_t *__suid ) ;
extern  __attribute__((__nothrow__)) int getresgid(__gid_t *__rgid ,
                                                   __gid_t *__egid ,
                                                   __gid_t *__sgid ) ;
extern  __attribute__((__nothrow__)) int setresuid(__uid_t __ruid ,
                                                   __uid_t __euid ,
                                                   __uid_t __suid ) ;
extern  __attribute__((__nothrow__)) int setresgid(__gid_t __rgid ,
                                                   __gid_t __egid ,
                                                   __gid_t __sgid ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) truncate64)(char const   *__file ,
                                                                                       __off64_t __length ) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;
extern  __attribute__((__nothrow__)) int ftruncate64(int __fd ,
                                                     __off64_t __length ) ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
extern int lockf64(int __fd , int __cmd , __off64_t __len ) ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) crypt)(char const   *__key ,
                                                                                      char const   *__salt ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) encrypt)(char *__block ,
                                                                                     int __edflag ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) swab)(void const   * __restrict  __from ,
                                                                                    void * __restrict  __to ,
                                                                                    ssize_t __n ) ;
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
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1,4))) strtol_l)(char const   * __restrict  __nptr ,
                                                                                        char ** __restrict  __endptr ,
                                                                                        int __base ,
                                                                                        __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1,4))) strtoul_l)(char const   * __restrict  __nptr ,
                                                                                                  char ** __restrict  __endptr ,
                                                                                                  int __base ,
                                                                                                  __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1,4))) strtoll_l)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ,
                                                                                              __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1,4))) strtoull_l)(char const   * __restrict  __nptr ,
                                                                                                        char ** __restrict  __endptr ,
                                                                                                        int __base ,
                                                                                                        __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1,3))) strtod_l)(char const   * __restrict  __nptr ,
                                                                                          char ** __restrict  __endptr ,
                                                                                          __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1,3))) strtof_l)(char const   * __restrict  __nptr ,
                                                                                         char ** __restrict  __endptr ,
                                                                                         __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1,3))) strtold_l)(char const   * __restrict  __nptr ,
                                                                                                char ** __restrict  __endptr ,
                                                                                                __locale_t __loc ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) at_quick_exit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) on_exit)(void (*__func)(int __status ,
                                                                                                   void *__arg ) ,
                                                                                    void *__arg ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void quick_exit(int __status ) ;
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
extern int ( __attribute__((__nonnull__(1))) mkstemp64)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemps)(char *__template ,
                                                       int __suffixlen )  __asm__("mkstemps64")  ;
extern int ( __attribute__((__nonnull__(1))) mkstemps64)(char *__template ,
                                                         int __suffixlen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mkdtemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemp)(char *__template ,
                                                       int __flags )  __asm__("mkostemp64")  ;
extern int ( __attribute__((__nonnull__(1))) mkostemp64)(char *__template ,
                                                         int __flags ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemps)(char *__template ,
                                                        int __suffixlen ,
                                                        int __flags )  __asm__("mkostemps64")  ;
extern int ( __attribute__((__nonnull__(1))) mkostemps64)(char *__template ,
                                                          int __suffixlen ,
                                                          int __flags ) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) canonicalize_file_name)(char const   *__name ) ;
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
extern void ( __attribute__((__nonnull__(1,4))) qsort_r)(void *__base ,
                                                         size_t __nmemb ,
                                                         size_t __size ,
                                                         int (*__compar)(void const   * ,
                                                                         void const   * ,
                                                                         void * ) ,
                                                         void *__arg ) ;
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
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) setkey)(char const   *__key ) ;
extern int posix_openpt(int __oflag ) ;
extern  __attribute__((__nothrow__)) int grantpt(int __fd ) ;
extern  __attribute__((__nothrow__)) int unlockpt(int __fd ) ;
extern  __attribute__((__nothrow__)) char *ptsname(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) ptsname_r)(int __fd ,
                                                                                      char *__buf ,
                                                                                      size_t __buflen ) ;
extern int getpt(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getloadavg)(double *__loadavg ,
                                                                                       int __nelem ) ;
extern  __attribute__((__nothrow__)) ssize_t readahead(int __fd ,
                                                       __off64_t __offset ,
                                                       size_t __count ) ;
extern int sync_file_range(int __fd , __off64_t __offset , __off64_t __count ,
                           unsigned int __flags ) ;
extern ssize_t vmsplice(int __fdout , struct iovec  const  *__iov ,
                        size_t __count , unsigned int __flags ) ;
extern ssize_t splice(int __fdin , __off64_t *__offin , int __fdout ,
                      __off64_t *__offout , size_t __len , unsigned int __flags ) ;
extern ssize_t tee(int __fdin , int __fdout , size_t __len ,
                   unsigned int __flags ) ;
extern int fallocate(int __fd , int __mode , __off64_t __offset ,
                     __off64_t __len )  __asm__("fallocate64")  ;
extern int fallocate64(int __fd , int __mode , __off64_t __offset ,
                       __off64_t __len ) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...)  __asm__("open64")  ;
extern int ( __attribute__((__nonnull__(1))) open64)(char const   *__file ,
                                                     int __oflag  , ...) ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd ,
                                                     char const   *__file ,
                                                     int __oflag  , ...)  __asm__("openat64")  ;
extern int ( __attribute__((__nonnull__(2))) openat64)(int __fd ,
                                                       char const   *__file ,
                                                       int __oflag  , ...) ;
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file ,
                                                    __mode_t __mode )  __asm__("creat64")  ;
extern int ( __attribute__((__nonnull__(1))) creat64)(char const   *__file ,
                                                      __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
extern  __attribute__((__nothrow__)) int posix_fadvise64(int __fd ,
                                                         __off64_t __offset ,
                                                         __off64_t __len ,
                                                         int __advise ) ;
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
extern int posix_fallocate64(int __fd , __off64_t __offset , __off64_t __len ) ;
extern DIR *( __attribute__((__nonnull__(1))) opendir)(char const   *__name ) ;
extern DIR *fdopendir(int __fd ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp )  __asm__("readdir64")  ;
extern struct dirent64 *( __attribute__((__nonnull__(1))) readdir64)(DIR *__dirp ) ;
extern int ( __attribute__((__nonnull__(1,2,3))) readdir_r)(DIR * __restrict  __dirp ,
                                                            struct dirent * __restrict  __entry ,
                                                            struct dirent ** __restrict  __result )  __asm__("readdir64_r")  ;
extern int ( __attribute__((__nonnull__(1,2,3))) readdir64_r)(DIR * __restrict  __dirp ,
                                                              struct dirent64 * __restrict  __entry ,
                                                              struct dirent64 ** __restrict  __result ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) rewinddir)(DIR *__dirp ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) seekdir)(DIR *__dirp ,
                                                                                     long __pos ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) telldir)(DIR *__dirp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) dirfd)(DIR *__dirp ) ;
extern int ( __attribute__((__nonnull__(1,2))) scandir)(char const   * __restrict  __dir ,
                                                        struct dirent *** __restrict  __namelist ,
                                                        int (*__selector)(struct dirent  const  * ) ,
                                                        int (*__cmp)(struct dirent  const  ** ,
                                                                     struct dirent  const  ** ) )  __asm__("scandir64")  ;
extern int ( __attribute__((__nonnull__(1,2))) scandir64)(char const   * __restrict  __dir ,
                                                          struct dirent64 *** __restrict  __namelist ,
                                                          int (*__selector)(struct dirent64  const  * ) ,
                                                          int (*__cmp)(struct dirent64  const  ** ,
                                                                       struct dirent64  const  ** ) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) alphasort)(struct dirent  const  **__e1 ,
                                                                                        struct dirent  const  **__e2 )  __asm__("alphasort64") __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) alphasort64)(struct dirent64  const  **__e1 ,
                                                                                          struct dirent64  const  **__e2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) __ssize_t ( __attribute__((__nonnull__(2,4))) getdirentries)(int __fd ,
                                                                                                  char * __restrict  __buf ,
                                                                                                  size_t __nbytes ,
                                                                                                  __off64_t * __restrict  __basep )  __asm__("getdirentries64")  ;
extern  __attribute__((__nothrow__)) __ssize_t ( __attribute__((__nonnull__(2,4))) getdirentries64)(int __fd ,
                                                                                                    char * __restrict  __buf ,
                                                                                                    size_t __nbytes ,
                                                                                                    __off64_t * __restrict  __basep ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) versionsort)(struct dirent  const  **__e1 ,
                                                                                          struct dirent  const  **__e2 )  __asm__("versionsort64") __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) versionsort64)(struct dirent64  const  **__e1 ,
                                                                                            struct dirent64  const  **__e2 )  __attribute__((__pure__)) ;
extern int gl_futimens(int  , char const   * , struct timespec  const  * ) ;
extern int utimens(char const   * , struct timespec  const  * ) ;
int ascii  =    0;
int to_stdout  =    0;
int decompress  =    0;
int force  =    0;
int no_name  =    -1;
int no_time  =    -1;
int recursive  =    0;
int list  =    0;
int verbose  =    0;
int quiet  =    0;
int do_lzw  =    0;
int test  =    0;
int foreground  =    0;
int maxbits  =    16;
int method  =    8;
int level  =    6;
int exit_code  =    0;
int last_member  ;
int part_nb  ;
char *env  ;
char **args  =    (char **)((void *)0);
char *z_suffix  ;
size_t z_len  ;
static sigset_t caught_signals  ;
static int volatile   exiting_signal  ;
static int volatile   remove_ofname_fd  =    (int volatile   )-1;
off_t total_in  ;
off_t total_out  ;
struct stat istat  ;
static int handled_sig[6]  = {      2,      1,      13,      15, 
        24,      25};
struct option longopts[24]  = 
  {      {"ascii", 0, (int *)0, 'a'}, 
        {"to-stdout", 0, (int *)0, 'c'}, 
        {"stdout", 0, (int *)0, 'c'}, 
        {"decompress", 0, (int *)0, 'd'}, 
        {"uncompress", 0, (int *)0, 'd'}, 
        {"force", 0, (int *)0, 'f'}, 
        {"help", 0, (int *)0, 'h'}, 
        {"list", 0, (int *)0, 'l'}, 
        {"license", 0, (int *)0, 'L'}, 
        {"no-name", 0, (int *)0, 'n'}, 
        {"name", 0, (int *)0, 'N'}, 
        {"quiet", 0, (int *)0, 'q'}, 
        {"silent", 0, (int *)0, 'q'}, 
        {"recursive", 0, (int *)0, 'r'}, 
        {"suffix", 1, (int *)0, 'S'}, 
        {"test", 0, (int *)0, 't'}, 
        {"no-time", 0, (int *)0, 'T'}, 
        {"verbose", 0, (int *)0, 'v'}, 
        {"version", 0, (int *)0, 'V'}, 
        {"fast", 0, (int *)0, '1'}, 
        {"best", 0, (int *)0, '9'}, 
        {"lzw", 0, (int *)0, 'Z'}, 
        {"bits", 1, (int *)0, 'b'}, 
        {(char const   *)0, 0, (int *)0, 0}};
static  __attribute__((__noreturn__)) void try_help(void) ;
static void help(void) ;
static void license(void) ;
static void version(void) ;
static int input_eof(void) ;
static void treat_stdin(void) ;
static void treat_file(char *iname ) ;
static int create_outfile(void) ;
static char *get_suffix(char *name ) ;
static int open_input_file(char *iname , struct stat *sbuf ) ;
static int make_ofname(void) ;
static void shorten_name(char *name ) ;
static int get_method(int in ) ;
static void do_list(int ifd___0 , int method___0 ) ;
static int check_ofname(void) ;
static void copy_stat(struct stat *ifstat ) ;
static void install_signal_handlers(void) ;
static void remove_output_file(void) ;
static void abort_gzip_signal(int sig ) ;
static  __attribute__((__noreturn__)) void do_exit(int exitcode ) ;
int main(int argc , char **argv ) ;
int (*work)(int infile , int outfile )  =    & zip;
static void treat_dir(int fd , char *dir ) ;
static  __attribute__((__noreturn__)) void try_help(void) ;
static void try_help(void) 
{ 


  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Try `%s --help\' for more information.\n",
          program_name);
  do_exit(1);
}
}
static void help(void) ;
static char *help_msg[25]  = 
  {      (char *)"Compress or uncompress FILEs (by default, compress FILES in-place).",      (char *)"",      (char *)"Mandatory arguments to long options are mandatory for short options too.",      (char *)"", 
        (char *)"  -c, --stdout      write on standard output, keep original files unchanged",      (char *)"  -d, --decompress  decompress",      (char *)"  -f, --force       force overwrite of output file and compress links",      (char *)"  -h, --help        give this help", 
        (char *)"  -l, --list        list compressed file contents",      (char *)"  -L, --license     display software license",      (char *)"  -n, --no-name     do not save or restore the original name and time stamp",      (char *)"  -N, --name        save or restore the original name and time stamp", 
        (char *)"  -q, --quiet       suppress all warnings",      (char *)"  -r, --recursive   operate recursively on directories",      (char *)"  -S, --suffix=SUF  use suffix SUF on compressed files",      (char *)"  -t, --test        test compressed file integrity", 
        (char *)"  -v, --verbose     verbose mode",      (char *)"  -V, --version     display version number",      (char *)"  -1, --fast        compress faster",      (char *)"  -9, --best        compress better", 
        (char *)"",      (char *)"With no FILE, or when FILE is -, read standard input.",      (char *)"",      (char *)"Report bugs to <bug-gzip@gnu.org>.", 
        (char *)0};
static void help(void) 
{ 
  char **p ;
  char **tmp ;

  {
  p = help_msg;
  printf((char const   */* __restrict  */)"Usage: %s [OPTION]... [FILE]...\n",
         program_name);
  while (*p) {
    tmp = p;
    p ++;
    printf((char const   */* __restrict  */)"%s\n", *tmp);
  }
  return;
}
}
static void license(void) 
{ 
  char **p ;
  char **tmp ;

  {
  p = license_msg;
  printf((char const   */* __restrict  */)"%s %s\n", program_name,
         "1.3.12.37-a1d3");
  while (*p) {
    tmp = p;
    p ++;
    printf((char const   */* __restrict  */)"%s\n", *tmp);
  }
  return;
}
}
static void version(void) 
{ 


  {
  license();
  printf((char const   */* __restrict  */)"\n");
  printf((char const   */* __restrict  */)"Written by Jean-loup Gailly.\n");
  return;
}
}
static void progerror(char *string ) 
{ 
  int e ;
  int *tmp ;
  int *tmp___0 ;

  {
  tmp = __errno_location();
  e = *tmp;
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s: ", program_name);
  tmp___0 = __errno_location();
  *tmp___0 = e;
  perror((char const   *)string);
  exit_code = 1;
  return;
}
}
int main(int argc , char **argv ) 
{ 
  int file_count ;
  size_t proglen ;
  int optc ;
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
  int __attribute__((__gnu_inline__))  tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  program_name = gzip_base_name(*(argv + 0));
  proglen = strlen((char const   *)program_name);
  atexit(& close_stdin);
  if (4U < proglen) {
    if (0) {
      __s1_len = strlen((char const   *)((program_name + proglen) - 4));
      __s2_len = strlen(".exe");
      if (! ((size_t )((void const   *)(((program_name + proglen) - 4) + 1)) - (size_t )((void const   *)((program_name + proglen) - 4)) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(".exe" + 1)) - (size_t )((void const   *)".exe") == 1U)) {
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
        tmp___0 = __builtin_strcmp((char const   *)((program_name + proglen) - 4),
                                   ".exe");
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp((char const   *)((program_name + proglen) - 4),
                                   ".exe");
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp((char const   *)((program_name + proglen) - 4),
                                 ".exe");
      tmp___4 = tmp___3;
    }
    if (tmp___4 == 0) {
      *(program_name + (proglen - 4U)) = (char )'\000';
    } else {

    }
  } else {

  }
  env = add_envopt(& argc, & argv, (char *)"GZIP");
  if ((unsigned int )env != (unsigned int )((void *)0)) {
    args = argv;
  } else {

  }
  z_suffix = (char *)".gz";
  z_len = strlen((char const   *)z_suffix);
  while (1) {
    optc = getopt_long(argc, (char * const  *)argv,
                       "ab:cdfhH?lLmMnNqrS:tvVZ123456789",
                       (struct option  const  *)(longopts), (int *)0);
    if (optc != -1) {

    } else {
      break;
    }
    switch (optc) {
    case 97: 
    ascii = 1;
    break;
    case 98: 
    tmp___6 = atoi((char const   *)optarg);
    maxbits = (int )tmp___6;
    while (*optarg) {
      if (48 <= (int )*optarg) {
        if ((int )*optarg <= 57) {

        } else {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: -b operand is not an integer\n",
                  program_name);
          try_help();
        }
      } else {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: -b operand is not an integer\n",
                program_name);
        try_help();
      }
      optarg ++;
    }
    break;
    case 99: 
    to_stdout = 1;
    break;
    case 100: 
    decompress = 1;
    break;
    case 102: 
    force ++;
    break;
    case 72: 
    case 104: 
    help();
    do_exit(0);
    break;
    case 108: 
    to_stdout = 1;
    decompress = to_stdout;
    list = decompress;
    break;
    case 76: 
    license();
    do_exit(0);
    break;
    case 109: 
    no_time = 1;
    break;
    case 77: 
    no_time = 0;
    break;
    case 110: 
    no_time = 1;
    no_name = no_time;
    break;
    case 78: 
    no_time = 0;
    no_name = no_time;
    break;
    case 113: 
    quiet = 1;
    verbose = 0;
    break;
    case 114: 
    recursive = 1;
    break;
    case 83: 
    z_len = strlen((char const   *)optarg);
    z_suffix = optarg;
    break;
    case 116: 
    to_stdout = 1;
    decompress = to_stdout;
    test = decompress;
    break;
    case 118: 
    verbose ++;
    quiet = 0;
    break;
    case 86: 
    version();
    do_exit(0);
    break;
    case 90: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: -Z not supported in this version\n",
            program_name);
    try_help();
    break;
    case 57: 
    case 56: 
    case 55: 
    case 54: 
    case 53: 
    case 52: 
    case 51: 
    case 50: 
    case 49: 
    level = optc - 48;
    break;
    default: 
    try_help();
    }
  }
  if (no_time < 0) {
    no_time = decompress;
  } else {

  }
  if (no_name < 0) {
    no_name = decompress;
  } else {

  }
  file_count = argc - optind;
  if (ascii) {
    if (! quiet) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: option --ascii ignored on this system\n",
              program_name);
    } else {

    }
  } else {

  }
  if (z_len == 0U) {
    if (! decompress) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: incorrect suffix \'%s\'\n",
              program_name, z_suffix);
      do_exit(1);
    } else {
      goto _L___1;
    }
  } else
  _L___1: /* CIL Label */ 
  if (z_len > 30U) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: incorrect suffix \'%s\'\n",
            program_name, z_suffix);
    do_exit(1);
  } else {

  }
  if (do_lzw) {
    if (! decompress) {
      work = & lzw;
    } else {

    }
  } else {

  }
  if (quiet) {
    exiting_signal = (int volatile   )13;
  } else {
    exiting_signal = (int volatile   )0;
  }
  install_signal_handlers();
  if (file_count != 0) {
    if (to_stdout) {
      if (! test) {
        if (! list) {
          if (! decompress) {
            tmp___7 = 1;
          } else
          if (! ascii) {
            tmp___7 = 1;
          } else {
            tmp___7 = 0;
          }
        } else {
          tmp___7 = 0;
        }
      } else {
        tmp___7 = 0;
      }
    } else {
      tmp___7 = 0;
    }
    while (optind < argc) {
      tmp___8 = optind;
      optind ++;
      treat_file(*(argv + tmp___8));
    }
  } else {
    treat_stdin();
  }
  if (list) {
    if (! quiet) {
      if (file_count > 1) {
        do_list(-1, -1);
      } else {

      }
    } else {

    }
  } else {

  }
  do_exit(exit_code);
  return (exit_code);
}
}
static int input_eof(void) 
{ 
  int tmp ;

  {
  if (! decompress) {
    return (1);
  } else
  if (last_member) {
    return (1);
  } else {

  }
  if (inptr == insize) {
    if (insize != 32768U) {
      return (1);
    } else {
      tmp = fill_inbuf(1);
      if (tmp == -1) {
        return (1);
      } else {

      }
    }
    inptr = 0U;
  } else {

  }
  return (0);
}
}
static void treat_stdin(void) 
{ 
  char const   *tmp ;
  char const   *tmp___0 ;
  struct _IO_FILE *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int __attribute__((__gnu_inline__))  tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  if (! force) {
    if (! list) {
      if (decompress) {
        tmp___1 = stdin;
      } else {
        tmp___1 = stdout;
      }
      tmp___2 = fileno(tmp___1);
      tmp___3 = isatty(tmp___2);
      if (tmp___3) {
        if (decompress) {
          tmp = "de";
        } else {
          tmp = "";
        }
        if (decompress) {
          tmp___0 = "read from";
        } else {
          tmp___0 = "written to";
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: compressed data not %s a terminal. Use -f to force %scompression.\n",
                program_name, tmp___0, tmp);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"For help, type: %s -h\n",
                program_name);
        do_exit(1);
      } else {

      }
    } else {

    }
  } else {

  }
  if (decompress) {
    tmp___4 = 1;
  } else
  if (! ascii) {
    tmp___4 = 1;
  } else {
    tmp___4 = 0;
  }
  if (! test) {
    if (! list) {
      if (! decompress) {
        tmp___5 = 1;
      } else
      if (! ascii) {
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
  strcpy((char */* __restrict  */)(ifname),
         (char const   */* __restrict  */)"stdin");
  strcpy((char */* __restrict  */)(ofname),
         (char const   */* __restrict  */)"stdout");
  tmp___6 = fileno(stdin);
  tmp___7 = fstat(tmp___6, & istat);
  if (tmp___7 != (int __attribute__((__gnu_inline__))  )0) {
    progerror((char *)"standard input");
    do_exit(1);
  } else {

  }
  if ((istat.st_mode & 61440U) == 32768U) {
    ifile_size = istat.st_size;
  } else {
    ifile_size = (off_t )-1;
  }
  time_stamp.tv_nsec = -1L;
  if (! no_time) {
    time_stamp = get_stat_mtime((struct stat  const  *)(& istat));
  } else
  if (list) {
    time_stamp = get_stat_mtime((struct stat  const  *)(& istat));
  } else {

  }
  clear_bufs();
  to_stdout = 1;
  part_nb = 0;
  if (decompress) {
    method = get_method(ifd);
    if (method < 0) {
      do_exit(exit_code);
    } else {

    }
  } else {

  }
  if (list) {
    do_list(ifd, method);
    return;
  } else {

  }
  while (1) {
    tmp___8 = fileno(stdout);
    tmp___9 = fileno(stdin);
    tmp___10 = (*work)(tmp___9, tmp___8);
    if (tmp___10 != 0) {
      return;
    } else {

    }
    tmp___11 = input_eof();
    if (tmp___11) {
      break;
    } else {

    }
    method = get_method(ifd);
    if (method < 0) {
      return;
    } else {

    }
    bytes_out = (off_t )0;
  }
  if (verbose) {
    if (test) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" OK\n");
    } else
    if (! decompress) {
      display_ratio(bytes_in - (bytes_out - header_bytes), bytes_in, stderr);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"\n");
    } else {

    }
  } else {

  }
  return;
}
}
static void treat_file(char *iname ) 
{ 
  int cflag ;
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
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  sigset_t oldset ;
  int unlink_errno ;
  int tmp___13 ;
  int tmp___14 ;
  int *tmp___15 ;
  int tmp___16 ;
  int *tmp___17 ;

  {
  if (0) {
    __s1_len = strlen((char const   *)iname);
    __s2_len = strlen("-");
    if (! ((size_t )((void const   *)(iname + 1)) - (size_t )((void const   *)iname) == 1U)) {
      goto _L___0;
    } else
    if (__s1_len >= 4U) {
      _L___0: /* CIL Label */ 
      if (! ((size_t )((void const   *)("-" + 1)) - (size_t )((void const   *)"-") == 1U)) {
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
      tmp___0 = __builtin_strcmp((char const   *)iname, "-");
      tmp___4 = tmp___0;
    } else {
      tmp___3 = __builtin_strcmp((char const   *)iname, "-");
      tmp___4 = tmp___3;
    }
  } else {
    tmp___3 = __builtin_strcmp((char const   *)iname, "-");
    tmp___4 = tmp___3;
  }
  if (tmp___4 == 0) {
    cflag = to_stdout;
    treat_stdin();
    to_stdout = cflag;
    return;
  } else {

  }
  ifd = open_input_file(iname, & istat);
  if (ifd < 0) {
    return;
  } else {

  }
  if ((istat.st_mode & 61440U) == 16384U) {
    if (recursive) {
      treat_dir(ifd, iname);
      return;
    } else {

    }
    close(ifd);
    if (! quiet) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: %s is a directory -- ignored\n",
              program_name, ifname);
    } else {

    }
    if (exit_code == 0) {
      exit_code = 2;
    } else {

    }
    return;
  } else {

  }
  if (! to_stdout) {
    if (! ((istat.st_mode & 61440U) == 32768U)) {
      if (! quiet) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s is not a directory or a regular file - ignored\n",
                program_name, ifname);
      } else {

      }
      if (exit_code == 0) {
        exit_code = 2;
      } else {

      }
      close(ifd);
      return;
    } else {

    }
    if (istat.st_mode & 2048U) {
      if (! quiet) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s is set-user-ID on execution - ignored\n",
                program_name, ifname);
      } else {

      }
      if (exit_code == 0) {
        exit_code = 2;
      } else {

      }
      close(ifd);
      return;
    } else {

    }
    if (istat.st_mode & 1024U) {
      if (! quiet) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s is set-group-ID on execution - ignored\n",
                program_name, ifname);
      } else {

      }
      if (exit_code == 0) {
        exit_code = 2;
      } else {

      }
      close(ifd);
      return;
    } else {

    }
    if (! force) {
      if (istat.st_mode & 512U) {
        if (! quiet) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: %s has the sticky bit set - file ignored\n",
                  program_name, ifname);
        } else {

        }
        if (exit_code == 0) {
          exit_code = 2;
        } else {

        }
        close(ifd);
        return;
      } else {

      }
      if (2U <= istat.st_nlink) {
        if (! quiet) {
          if (istat.st_nlink == 2U) {
            tmp___6 = ' ';
          } else {
            tmp___6 = 's';
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: %s has %lu other link%c -- unchanged\n",
                  program_name, ifname, (unsigned long )istat.st_nlink - 1UL,
                  tmp___6);
        } else {

        }
        if (exit_code == 0) {
          exit_code = 2;
        } else {

        }
        close(ifd);
        return;
      } else {

      }
    } else {

    }
  } else {

  }
  if ((istat.st_mode & 61440U) == 32768U) {
    ifile_size = istat.st_size;
  } else {
    ifile_size = (off_t )-1;
  }
  time_stamp.tv_nsec = -1L;
  if (! no_time) {
    time_stamp = get_stat_mtime((struct stat  const  *)(& istat));
  } else
  if (list) {
    time_stamp = get_stat_mtime((struct stat  const  *)(& istat));
  } else {

  }
  if (to_stdout) {
    if (! list) {
      if (! test) {
        strcpy((char */* __restrict  */)(ofname),
               (char const   */* __restrict  */)"stdout");
      } else {
        goto _L___2;
      }
    } else {
      goto _L___2;
    }
  } else {
    _L___2: /* CIL Label */ 
    _L___1: /* CIL Label */ 
    tmp___7 = make_ofname();
    if (tmp___7 != 0) {
      close(ifd);
      return;
    } else {

    }
  }
  clear_bufs();
  part_nb = 0;
  if (decompress) {
    method = get_method(ifd);
    if (method < 0) {
      close(ifd);
      return;
    } else {

    }
  } else {

  }
  if (list) {
    do_list(ifd, method);
    tmp___8 = close(ifd);
    if (tmp___8 != 0) {
      read_error();
    } else {

    }
    return;
  } else {

  }
  if (to_stdout) {
    ofd = fileno(stdout);
  } else {
    tmp___9 = create_outfile();
    if (tmp___9 != 0) {
      return;
    } else {

    }
    if (! decompress) {
      if (save_orig_name) {
        if (! verbose) {
          if (! quiet) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%s: %s compressed to %s\n",
                    program_name, ifname, ofname);
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  }
  if (! save_orig_name) {
    save_orig_name = ! no_name;
  } else {

  }
  if (verbose) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s:\t", ifname);
  } else {

  }
  while (1) {
    tmp___10 = (*work)(ifd, ofd);
    if (tmp___10 != 0) {
      method = -1;
      break;
    } else {

    }
    tmp___11 = input_eof();
    if (tmp___11) {
      break;
    } else {

    }
    method = get_method(ifd);
    if (method < 0) {
      break;
    } else {

    }
    bytes_out = (off_t )0;
  }
  tmp___12 = close(ifd);
  if (tmp___12 != 0) {
    read_error();
  } else {

  }
  if (! to_stdout) {
    copy_stat(& istat);
    tmp___13 = close(ofd);
    if (tmp___13 != 0) {
      write_error();
    } else {

    }
    sigprocmask(0, (sigset_t const   */* __restrict  */)(& caught_signals),
                (sigset_t */* __restrict  */)(& oldset));
    remove_ofname_fd = (int volatile   )-1;
    tmp___16 = xunlink(ifname);
    if (tmp___16 == 0) {
      unlink_errno = 0;
    } else {
      tmp___15 = __errno_location();
      unlink_errno = *tmp___15;
    }
    sigprocmask(2, (sigset_t const   */* __restrict  */)(& oldset),
                (sigset_t */* __restrict  */)((void *)0));
    if (unlink_errno) {
      if (! quiet) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: ", program_name);
      } else {

      }
      if (exit_code == 0) {
        exit_code = 2;
      } else {

      }
      if (! quiet) {
        tmp___17 = __errno_location();
        *tmp___17 = unlink_errno;
        perror((char const   *)(ifname));
      } else {

      }
    } else {

    }
  } else {

  }
  if (method == -1) {
    if (! to_stdout) {
      remove_output_file();
    } else {

    }
    return;
  } else {

  }
  if (verbose) {
    if (test) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" OK");
    } else
    if (decompress) {
      display_ratio(bytes_out - (bytes_in - header_bytes), bytes_out, stderr);
    } else {
      display_ratio(bytes_in - (bytes_out - header_bytes), bytes_in, stderr);
    }
    if (! test) {
      if (! to_stdout) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)" -- replaced with %s", ofname);
      } else {

      }
    } else {

    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\n");
  } else {

  }
  return;
}
}
static int create_outfile(void) 
{ 
  int name_shortened ;
  int flags ;
  int tmp ;
  int open_errno ;
  sigset_t oldset ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  name_shortened = 0;
  if (ascii) {
    if (decompress) {
      tmp = 0;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  flags = 193 | tmp;
  while (1) {
    sigprocmask(0, (sigset_t const   */* __restrict  */)(& caught_signals),
                (sigset_t */* __restrict  */)(& oldset));
    ofd = open_safer((char const   *)(ofname), flags, 384);
    remove_ofname_fd = (int volatile   )ofd;
    tmp___0 = __errno_location();
    open_errno = *tmp___0;
    sigprocmask(2, (sigset_t const   */* __restrict  */)(& oldset),
                (sigset_t */* __restrict  */)((void *)0));
    if (0 <= ofd) {
      break;
    } else {

    }
    switch (open_errno) {
    case 36: 
    shorten_name(ofname);
    name_shortened = 1;
    break;
    case 17: 
    tmp___1 = check_ofname();
    if (tmp___1 != 0) {
      close(ifd);
      return (1);
    } else {

    }
    break;
    default: 
    progerror(ofname);
    close(ifd);
    return (1);
    }
  }
  if (name_shortened) {
    if (decompress) {
      if (! quiet) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: warning, name truncated\n",
                program_name, ofname);
      } else {

      }
      if (exit_code == 0) {
        exit_code = 2;
      } else {

      }
    } else {

    }
  } else {

  }
  return (0);
}
}
static char *get_suffix(char *name ) ;
static char *known_suffixes[9]  = 
  {      (char *)((void *)0),      (char *)".gz",      (char *)".z",      (char *)".taz", 
        (char *)".tgz",      (char *)"-gz",      (char *)"-z",      (char *)"_z", 
        (char *)((void *)0)};
static char *get_suffix(char *name ) 
{ 
  int nlen ;
  int slen ;
  char suffix[33] ;
  char **suf ;
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
  size_t tmp___6 ;
  size_t tmp___7 ;
  int s ;
  size_t tmp___8 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___12 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
  suf = known_suffixes;
  *suf = z_suffix;
  if (0) {
    __s1_len = strlen((char const   *)z_suffix);
    __s2_len = strlen("z");
    if (! ((size_t )((void const   *)(z_suffix + 1)) - (size_t )((void const   *)z_suffix) == 1U)) {
      goto _L___0;
    } else
    if (__s1_len >= 4U) {
      _L___0: /* CIL Label */ 
      if (! ((size_t )((void const   *)("z" + 1)) - (size_t )((void const   *)"z") == 1U)) {
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
      tmp___0 = __builtin_strcmp((char const   *)z_suffix, "z");
      tmp___4 = tmp___0;
    } else {
      tmp___3 = __builtin_strcmp((char const   *)z_suffix, "z");
      tmp___4 = tmp___3;
    }
  } else {
    tmp___3 = __builtin_strcmp((char const   *)z_suffix, "z");
    tmp___4 = tmp___3;
  }
  if (tmp___4 == 0) {
    suf ++;
  } else {

  }
  tmp___6 = strlen((char const   *)name);
  nlen = (int )tmp___6;
  if (nlen <= 32) {
    strcpy((char */* __restrict  */)(suffix),
           (char const   */* __restrict  */)name);
  } else {
    strcpy((char */* __restrict  */)(suffix),
           (char const   */* __restrict  */)(((name + nlen) - 30) - 2));
  }
  strlwr(suffix);
  tmp___7 = strlen((char const   *)(suffix));
  slen = (int )tmp___7;
  while (1) {
    tmp___8 = strlen((char const   *)*suf);
    s = (int )tmp___8;
    if (slen > s) {
      if ((int )suffix[(slen - s) - 1] != 47) {
        if (0) {
          __s1_len___0 = strlen((char const   *)((suffix + slen) - s));
          __s2_len___0 = strlen((char const   *)*suf);
          if (! ((size_t )((void const   *)(((suffix + slen) - s) + 1)) - (size_t )((void const   *)((suffix + slen) - s)) == 1U)) {
            goto _L___2;
          } else
          if (__s1_len___0 >= 4U) {
            _L___2: /* CIL Label */ 
            if (! ((size_t )((void const   *)(*suf + 1)) - (size_t )((void const   *)*suf) == 1U)) {
              tmp___15 = 1;
            } else
            if (__s2_len___0 >= 4U) {
              tmp___15 = 1;
            } else {
              tmp___15 = 0;
            }
          } else {
            tmp___15 = 0;
          }
          if (tmp___15) {
            tmp___10 = __builtin_strcmp((char const   *)((suffix + slen) - s),
                                        (char const   *)*suf);
            tmp___14 = tmp___10;
          } else {
            tmp___13 = __builtin_strcmp((char const   *)((suffix + slen) - s),
                                        (char const   *)*suf);
            tmp___14 = tmp___13;
          }
        } else {
          tmp___13 = __builtin_strcmp((char const   *)((suffix + slen) - s),
                                      (char const   *)*suf);
          tmp___14 = tmp___13;
        }
        if (tmp___14 == 0) {
          return ((name + nlen) - s);
        } else {

        }
      } else {

      }
    } else {

    }
    suf ++;
    if ((unsigned int )*suf != (unsigned int )((void *)0)) {

    } else {
      break;
    }
  }
  return ((char *)((void *)0));
}
}
static int open_and_stat(char *name , int flags , mode_t mode , struct stat *st ) 
{ 
  int fd ;
  int *tmp ;
  int __attribute__((__gnu_inline__))  tmp___0 ;
  int e ;
  int *tmp___1 ;
  int *tmp___2 ;
  int __attribute__((__gnu_inline__))  tmp___3 ;

  {
  if (! to_stdout) {
    if (! force) {
      flags |= 131072;
    } else {

    }
  } else {

  }
  fd = open_safer((char const   *)name, flags, mode);
  if (0 <= fd) {
    tmp___3 = fstat(fd, st);
    if (tmp___3 != (int __attribute__((__gnu_inline__))  )0) {
      tmp___1 = __errno_location();
      e = *tmp___1;
      close(fd);
      tmp___2 = __errno_location();
      *tmp___2 = e;
      return (-1);
    } else {

    }
  } else {

  }
  return (fd);
}
}
static int open_input_file(char *iname , struct stat *sbuf ) ;
static char *suffixes[6]  = {      (char *)((void *)0),      (char *)".gz",      (char *)".z",      (char *)"-z", 
        (char *)".Z",      (char *)((void *)0)};
static int open_input_file(char *iname , struct stat *sbuf ) 
{ 
  int ilen ;
  int z_suffix_errno ;
  char **suf ;
  char *s ;
  int fd ;
  int open_flags ;
  int tmp ;
  size_t tmp___0 ;
  int *tmp___1 ;
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
  char *s0 ;
  size_t tmp___10 ;
  int *tmp___11 ;
  int *tmp___12 ;
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
  int *tmp___20 ;

  {
  z_suffix_errno = 0;
  suf = suffixes;
  if (ascii) {
    if (! decompress) {
      tmp = 0;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  open_flags = 2304 | tmp;
  *suf = z_suffix;
  tmp___0 = strlen((char const   *)iname);
  if (sizeof(ifname) - 1U <= tmp___0) {
    goto name_too_long;
  } else {

  }
  strcpy((char */* __restrict  */)(ifname),
         (char const   */* __restrict  */)iname);
  fd = open_and_stat(ifname, open_flags, (mode_t )384, sbuf);
  if (0 <= fd) {
    return (fd);
  } else {

  }
  if (! decompress) {
    progerror(ifname);
    return (-1);
  } else {
    tmp___1 = __errno_location();
    if (*tmp___1 != 2) {
      progerror(ifname);
      return (-1);
    } else {

    }
  }
  s = get_suffix(ifname);
  if ((unsigned int )s != (unsigned int )((void *)0)) {
    progerror(ifname);
    return (-1);
  } else {

  }
  tmp___2 = strlen((char const   *)(ifname));
  ilen = (int )tmp___2;
  if (0) {
    __s1_len = strlen((char const   *)z_suffix);
    __s2_len = strlen(".gz");
    if (! ((size_t )((void const   *)(z_suffix + 1)) - (size_t )((void const   *)z_suffix) == 1U)) {
      goto _L___0;
    } else
    if (__s1_len >= 4U) {
      _L___0: /* CIL Label */ 
      if (! ((size_t )((void const   *)(".gz" + 1)) - (size_t )((void const   *)".gz") == 1U)) {
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
      tmp___4 = __builtin_strcmp((char const   *)z_suffix, ".gz");
      tmp___8 = tmp___4;
    } else {
      tmp___7 = __builtin_strcmp((char const   *)z_suffix, ".gz");
      tmp___8 = tmp___7;
    }
  } else {
    tmp___7 = __builtin_strcmp((char const   *)z_suffix, ".gz");
    tmp___8 = tmp___7;
  }
  if (tmp___8 == 0) {
    suf ++;
  } else {

  }
  while (1) {
    s = *suf;
    s0 = s;
    strcpy((char */* __restrict  */)(ifname),
           (char const   */* __restrict  */)iname);
    tmp___10 = strlen((char const   *)s);
    if (sizeof(ifname) <= (size_t )ilen + tmp___10) {
      goto name_too_long;
    } else {

    }
    strcat((char */* __restrict  */)(ifname), (char const   */* __restrict  */)s);
    fd = open_and_stat(ifname, open_flags, (mode_t )384, sbuf);
    if (0 <= fd) {
      return (fd);
    } else {

    }
    tmp___11 = __errno_location();
    if (*tmp___11 != 2) {
      progerror(ifname);
      return (-1);
    } else {

    }
    if (0) {
      __s1_len___0 = strlen((char const   *)s0);
      __s2_len___0 = strlen((char const   *)z_suffix);
      if (! ((size_t )((void const   *)(s0 + 1)) - (size_t )((void const   *)s0) == 1U)) {
        goto _L___2;
      } else
      if (__s1_len___0 >= 4U) {
        _L___2: /* CIL Label */ 
        if (! ((size_t )((void const   *)(z_suffix + 1)) - (size_t )((void const   *)z_suffix) == 1U)) {
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
        tmp___14 = __builtin_strcmp((char const   *)s0, (char const   *)z_suffix);
        tmp___18 = tmp___14;
      } else {
        tmp___17 = __builtin_strcmp((char const   *)s0, (char const   *)z_suffix);
        tmp___18 = tmp___17;
      }
    } else {
      tmp___17 = __builtin_strcmp((char const   *)s0, (char const   *)z_suffix);
      tmp___18 = tmp___17;
    }
    if (tmp___18 == 0) {
      tmp___12 = __errno_location();
      z_suffix_errno = *tmp___12;
    } else {

    }
    suf ++;
    if ((unsigned int )*suf != (unsigned int )((void *)0)) {

    } else {
      break;
    }
  }
  strcpy((char */* __restrict  */)(ifname),
         (char const   */* __restrict  */)iname);
  strcat((char */* __restrict  */)(ifname),
         (char const   */* __restrict  */)z_suffix);
  tmp___20 = __errno_location();
  *tmp___20 = z_suffix_errno;
  progerror(ifname);
  return (-1);
  name_too_long: 
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s: %s: file name too long\n",
          program_name, iname);
  exit_code = 1;
  return (-1);
}
}
static int make_ofname(void) 
{ 
  char *suff ;
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
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___9 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  size_t tmp___13 ;

  {
  strcpy((char */* __restrict  */)(ofname),
         (char const   */* __restrict  */)(ifname));
  suff = get_suffix(ofname);
  if (decompress) {
    if ((unsigned int )suff == (unsigned int )((void *)0)) {
      if (! recursive) {
        if (list) {
          return (0);
        } else
        if (test) {
          return (0);
        } else {

        }
      } else {

      }
      if (verbose) {
        goto _L;
      } else
      if (! recursive) {
        if (! quiet) {
          _L: /* CIL Label */ 
          if (! quiet) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%s: %s: unknown suffix -- ignored\n",
                    program_name, ifname);
          } else {

          }
          if (exit_code == 0) {
            exit_code = 2;
          } else {

          }
        } else {

        }
      } else {

      }
      return (2);
    } else {

    }
    strlwr(suff);
    if (0) {
      __s1_len = strlen((char const   *)suff);
      __s2_len = strlen(".tgz");
      if (! ((size_t )((void const   *)(suff + 1)) - (size_t )((void const   *)suff) == 1U)) {
        goto _L___1;
      } else
      if (__s1_len >= 4U) {
        _L___1: /* CIL Label */ 
        if (! ((size_t )((void const   *)(".tgz" + 1)) - (size_t )((void const   *)".tgz") == 1U)) {
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
        tmp___0 = __builtin_strcmp((char const   *)suff, ".tgz");
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp((char const   *)suff, ".tgz");
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp((char const   *)suff, ".tgz");
      tmp___4 = tmp___3;
    }
    if (tmp___4 == 0) {
      strcpy((char */* __restrict  */)suff,
             (char const   */* __restrict  */)".tar");
    } else {
      if (0) {
        __s1_len___0 = strlen((char const   *)suff);
        __s2_len___0 = strlen(".taz");
        if (! ((size_t )((void const   *)(suff + 1)) - (size_t )((void const   *)suff) == 1U)) {
          goto _L___3;
        } else
        if (__s1_len___0 >= 4U) {
          _L___3: /* CIL Label */ 
          if (! ((size_t )((void const   *)(".taz" + 1)) - (size_t )((void const   *)".taz") == 1U)) {
            tmp___12 = 1;
          } else
          if (__s2_len___0 >= 4U) {
            tmp___12 = 1;
          } else {
            tmp___12 = 0;
          }
        } else {
          tmp___12 = 0;
        }
        if (tmp___12) {
          tmp___7 = __builtin_strcmp((char const   *)suff, ".taz");
          tmp___11 = tmp___7;
        } else {
          tmp___10 = __builtin_strcmp((char const   *)suff, ".taz");
          tmp___11 = tmp___10;
        }
      } else {
        tmp___10 = __builtin_strcmp((char const   *)suff, ".taz");
        tmp___11 = tmp___10;
      }
      if (tmp___11 == 0) {
        strcpy((char */* __restrict  */)suff,
               (char const   */* __restrict  */)".tar");
      } else {
        *suff = (char )'\000';
      }
    }
  } else
  if (suff) {
    if (! force) {
      if (verbose) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s already has %s suffix -- unchanged\n",
                program_name, ifname, suff);
      } else
      if (! recursive) {
        if (! quiet) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: %s already has %s suffix -- unchanged\n",
                  program_name, ifname, suff);
        } else {

        }
      } else {

      }
      return (2);
    } else {
      goto _L___4;
    }
  } else {
    _L___4: /* CIL Label */ 
    save_orig_name = 0;
    tmp___13 = strlen((char const   *)(ofname));
    if (sizeof(ofname) <= tmp___13 + z_len) {
      goto name_too_long;
    } else {

    }
    strcat((char */* __restrict  */)(ofname),
           (char const   */* __restrict  */)z_suffix);
  }
  return (0);
  name_too_long: 
  if (! quiet) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: %s: file name too long\n",
            program_name, ifname);
  } else {

  }
  if (exit_code == 0) {
    exit_code = 2;
  } else {

  }
  return (2);
}
}
static int get_method(int in ) 
{ 
  uch flags ;
  char magic[2] ;
  int imagic1 ;
  ulg stamp ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  unsigned int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  unsigned int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  unsigned int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  unsigned int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  unsigned int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  unsigned int tmp___28 ;
  unsigned int tmp___29 ;
  unsigned int part ;
  unsigned int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  unsigned int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  unsigned int len ;
  unsigned int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  unsigned int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  unsigned int tmp___42 ;
  unsigned int tmp___43 ;
  char c ;
  unsigned int tmp___44 ;
  int tmp___45 ;
  char *p ;
  char *tmp___46 ;
  char *base ;
  unsigned int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  char *tmp___50 ;
  size_t tmp___51 ;
  unsigned int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int inbyte ;
  unsigned int tmp___63 ;
  int tmp___64 ;

  {
  if (force) {
    if (to_stdout) {
      if (inptr < insize) {
        tmp = inptr;
        inptr ++;
        tmp___1 = (int )inbuf[tmp];
      } else {
        tmp___0 = fill_inbuf(1);
        tmp___1 = tmp___0;
      }
      magic[0] = (char )tmp___1;
      if (inptr < insize) {
        tmp___2 = inptr;
        inptr ++;
        imagic1 = (int )inbuf[tmp___2];
      } else {
        tmp___3 = fill_inbuf(1);
        imagic1 = tmp___3;
      }
      magic[1] = (char )imagic1;
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    if (inptr < insize) {
      tmp___4 = inptr;
      inptr ++;
      tmp___6 = (int )inbuf[tmp___4];
    } else {
      tmp___5 = fill_inbuf(0);
      tmp___6 = tmp___5;
    }
    magic[0] = (char )tmp___6;
    if (inptr < insize) {
      tmp___7 = inptr;
      inptr ++;
      tmp___9 = (int )inbuf[tmp___7];
    } else {
      tmp___8 = fill_inbuf(0);
      tmp___9 = tmp___8;
    }
    magic[1] = (char )tmp___9;
    imagic1 = 0;
  }
  method = -1;
  part_nb ++;
  header_bytes = (off_t )0;
  last_member = 0;
  tmp___61 = memcmp((void const   *)(magic), (void const   *)"\037\213",
                    (size_t )2);
  if (tmp___61 == 0) {
    goto _L___4;
  } else {
    tmp___62 = memcmp((void const   *)(magic), (void const   *)"\037\236",
                      (size_t )2);
    if (tmp___62 == 0) {
      _L___4: /* CIL Label */ 
      if (inptr < insize) {
        tmp___10 = inptr;
        inptr ++;
        tmp___12 = (int )inbuf[tmp___10];
      } else {
        tmp___11 = fill_inbuf(0);
        tmp___12 = tmp___11;
      }
      method = tmp___12;
      if (method != 8) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: unknown method %d -- not supported\n",
                program_name, ifname, method);
        exit_code = 1;
        return (-1);
      } else {

      }
      work = & unzip;
      if (inptr < insize) {
        tmp___13 = inptr;
        inptr ++;
        tmp___15 = (int )inbuf[tmp___13];
      } else {
        tmp___14 = fill_inbuf(0);
        tmp___15 = tmp___14;
      }
      flags = (uch )tmp___15;
      if (((int )flags & 32) != 0) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s is encrypted -- not supported\n",
                program_name, ifname);
        exit_code = 1;
        return (-1);
      } else {

      }
      if (((int )flags & 2) != 0) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s is a multi-part gzip file -- not supported\n",
                program_name, ifname);
        exit_code = 1;
        if (force <= 1) {
          return (-1);
        } else {

        }
      } else {

      }
      if (((int )flags & 192) != 0) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s has flags 0x%x -- not supported\n",
                program_name, ifname, (int )flags);
        exit_code = 1;
        if (force <= 1) {
          return (-1);
        } else {

        }
      } else {

      }
      if (inptr < insize) {
        tmp___16 = inptr;
        inptr ++;
        tmp___18 = (int )inbuf[tmp___16];
      } else {
        tmp___17 = fill_inbuf(0);
        tmp___18 = tmp___17;
      }
      stamp = (ulg )tmp___18;
      if (inptr < insize) {
        tmp___19 = inptr;
        inptr ++;
        tmp___21 = (int )inbuf[tmp___19];
      } else {
        tmp___20 = fill_inbuf(0);
        tmp___21 = tmp___20;
      }
      stamp |= (ulg )tmp___21 << 8;
      if (inptr < insize) {
        tmp___22 = inptr;
        inptr ++;
        tmp___24 = (int )inbuf[tmp___22];
      } else {
        tmp___23 = fill_inbuf(0);
        tmp___24 = tmp___23;
      }
      stamp |= (ulg )tmp___24 << 16;
      if (inptr < insize) {
        tmp___25 = inptr;
        inptr ++;
        tmp___27 = (int )inbuf[tmp___25];
      } else {
        tmp___26 = fill_inbuf(0);
        tmp___27 = tmp___26;
      }
      stamp |= (ulg )tmp___27 << 24;
      if (stamp != 0UL) {
        if (! no_time) {
          time_stamp.tv_sec = (__time_t )stamp;
          time_stamp.tv_nsec = 0L;
        } else {

        }
      } else {

      }
      if (inptr < insize) {
        tmp___28 = inptr;
        inptr ++;
      } else {
        fill_inbuf(0);
      }
      if (inptr < insize) {
        tmp___29 = inptr;
        inptr ++;
      } else {
        fill_inbuf(0);
      }
      if (((int )flags & 2) != 0) {
        if (inptr < insize) {
          tmp___30 = inptr;
          inptr ++;
          tmp___32 = (int )inbuf[tmp___30];
        } else {
          tmp___31 = fill_inbuf(0);
          tmp___32 = tmp___31;
        }
        part = (unsigned int )tmp___32;
        if (inptr < insize) {
          tmp___33 = inptr;
          inptr ++;
          tmp___35 = (int )inbuf[tmp___33];
        } else {
          tmp___34 = fill_inbuf(0);
          tmp___35 = tmp___34;
        }
        part |= (unsigned int )tmp___35 << 8;
        if (verbose) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: %s: part number %u\n",
                  program_name, ifname, part);
        } else {

        }
      } else {

      }
      if (((int )flags & 4) != 0) {
        if (inptr < insize) {
          tmp___36 = inptr;
          inptr ++;
          tmp___38 = (int )inbuf[tmp___36];
        } else {
          tmp___37 = fill_inbuf(0);
          tmp___38 = tmp___37;
        }
        len = (unsigned int )tmp___38;
        if (inptr < insize) {
          tmp___39 = inptr;
          inptr ++;
          tmp___41 = (int )inbuf[tmp___39];
        } else {
          tmp___40 = fill_inbuf(0);
          tmp___41 = tmp___40;
        }
        len |= (unsigned int )tmp___41 << 8;
        if (verbose) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: %s: extra field of %u bytes ignored\n",
                  program_name, ifname, len);
        } else {

        }
        while (1) {
          tmp___43 = len;
          len --;
          if (tmp___43) {

          } else {
            break;
          }
          if (inptr < insize) {
            tmp___42 = inptr;
            inptr ++;
          } else {
            fill_inbuf(0);
          }
        }
      } else {

      }
      if (((int )flags & 8) != 0) {
        if (no_name) {
          goto _L___0;
        } else
        if (to_stdout) {
          if (! list) {
            goto _L___0;
          } else {
            goto _L___1;
          }
        } else
        _L___1: /* CIL Label */ 
        if (part_nb > 1) {
          _L___0: /* CIL Label */ 
          while (1) {
            if (inptr < insize) {
              tmp___44 = inptr;
              inptr ++;
              c = (char )inbuf[tmp___44];
            } else {
              tmp___45 = fill_inbuf(0);
              c = (char )tmp___45;
            }
            if ((int )c != 0) {

            } else {
              break;
            }
          }
        } else {
          tmp___46 = gzip_base_name(ofname);
          p = tmp___46;
          base = p;
          while (1) {
            if (inptr < insize) {
              tmp___47 = inptr;
              inptr ++;
              tmp___49 = (int )inbuf[tmp___47];
            } else {
              tmp___48 = fill_inbuf(0);
              tmp___49 = tmp___48;
            }
            *p = (char )tmp___49;
            tmp___50 = p;
            p ++;
            if ((int )*tmp___50 == 0) {
              break;
            } else {

            }
            if ((unsigned int )p >= (unsigned int )(ofname + sizeof(ofname))) {
              gzip_error((char *)"corrupted input -- file name too large");
            } else {

            }
          }
          p = gzip_base_name(base);
          tmp___51 = strlen((char const   *)p);
          memmove((void *)base, (void const   *)p, tmp___51 + 1U);
          if (! list) {
            if (base) {
              list = 0;
            } else {

            }
          } else {

          }
        }
      } else {

      }
      if (((int )flags & 16) != 0) {
        while (1) {
          if (inptr < insize) {
            tmp___52 = inptr;
            inptr ++;
            tmp___54 = (int )inbuf[tmp___52];
          } else {
            tmp___53 = fill_inbuf(0);
            tmp___54 = tmp___53;
          }
          if (tmp___54 != 0) {

          } else {
            break;
          }
        }
      } else {

      }
      if (part_nb == 1) {
        header_bytes = (off_t )(inptr + 2U * sizeof(long ));
      } else {

      }
    } else {
      tmp___59 = memcmp((void const   *)(magic), (void const   *)"PK\003\004",
                        (size_t )2);
      if (tmp___59 == 0) {
        if (inptr == 2U) {
          tmp___60 = memcmp((void const   *)((char *)(inbuf)),
                            (void const   *)"PK\003\004", (size_t )4);
          if (tmp___60 == 0) {
            inptr = 0U;
            work = & unzip;
            tmp___55 = check_zipfile(in);
            if (tmp___55 != 0) {
              return (-1);
            } else {

            }
            last_member = 1;
          } else {
            goto _L___3;
          }
        } else {
          goto _L___3;
        }
      } else {
        _L___3: /* CIL Label */ 
        _L___2: /* CIL Label */ 
        tmp___58 = memcmp((void const   *)(magic), (void const   *)"\037\036",
                          (size_t )2);
        if (tmp___58 == 0) {
          work = & unpack;
          method = 2;
        } else {
          tmp___57 = memcmp((void const   *)(magic), (void const   *)"\037\235",
                            (size_t )2);
          if (tmp___57 == 0) {
            work = & unlzw;
            method = 1;
            last_member = 1;
          } else {
            tmp___56 = memcmp((void const   *)(magic),
                              (void const   *)"\037\240", (size_t )2);
            if (tmp___56 == 0) {
              work = & unlzh;
              method = 3;
              last_member = 1;
            } else
            if (force) {
              if (to_stdout) {
                if (! list) {
                  method = 0;
                  work = & copy;
                  inptr = 0U;
                  last_member = 1;
                } else {

                }
              } else {

              }
            } else {

            }
          }
        }
      }
    }
  }
  if (method >= 0) {
    return (method);
  } else {

  }
  if (part_nb == 1) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\n%s: %s: not in gzip format\n",
            program_name, ifname);
    exit_code = 1;
    return (-1);
  } else {
    if ((int )magic[0] == 0) {
      inbyte = imagic1;
      while (inbyte == 0) {
        goto __Cont;
        __Cont: /* CIL Label */ 
        if (inptr < insize) {
          tmp___63 = inptr;
          inptr ++;
          inbyte = (int )inbuf[tmp___63];
        } else {
          tmp___64 = fill_inbuf(1);
          inbyte = tmp___64;
        }
      }
      if (inbyte == -1) {
        if (verbose) {
          if (! quiet) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"\n%s: %s: decompression OK, trailing zero bytes ignored\n",
                    program_name, ifname);
          } else {

          }
          if (exit_code == 0) {
            exit_code = 2;
          } else {

          }
        } else {

        }
        return (-3);
      } else {

      }
    } else {

    }
    if (! quiet) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"\n%s: %s: decompression OK, trailing garbage ignored\n",
              program_name, ifname);
    } else {

    }
    if (exit_code == 0) {
      exit_code = 2;
    } else {

    }
    return (-2);
  }
}
}
static void do_list(int ifd___0 , int method___0 ) ;
static int first_time  =    1;
static void do_list(int ifd___0 , int method___0 ) ;
static char *methods[9]  = 
  {      (char *)"store",      (char *)"compr",      (char *)"pack ",      (char *)"lzh  ", 
        (char *)"",      (char *)"",      (char *)"",      (char *)"", 
        (char *)"defla"};
static void do_list(int ifd___0 , int method___0 ) 
{ 
  ulg crc ;
  int positive_off_t_width ;
  off_t o ;
  uch buf[8] ;
  ssize_t tmp ;
  struct tm *tm ;
  struct tm *tmp___0 ;

  {
  positive_off_t_width = 1;
  o = -1LL - (-1LL << (sizeof(off_t ) * 8U - 1U));
  while (9LL < o) {
    positive_off_t_width ++;
    o /= 10LL;
  }
  if (first_time) {
    if (method___0 >= 0) {
      first_time = 0;
      if (verbose) {
        printf((char const   */* __restrict  */)"method  crc     date  time  ");
      } else {

      }
      if (! quiet) {
        printf((char const   */* __restrict  */)"%*.*s %*.*s  ratio uncompressed_name\n",
               positive_off_t_width, positive_off_t_width, "compressed",
               positive_off_t_width, positive_off_t_width, "uncompressed");
      } else {

      }
    } else {
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
  if (method___0 < 0) {
    if (total_in <= 0LL) {
      return;
    } else
    if (total_out <= 0LL) {
      return;
    } else {

    }
    if (verbose) {
      printf((char const   */* __restrict  */)"                            ");
    } else {

    }
    if (verbose) {
      fprint_off(stdout, total_in, positive_off_t_width);
      printf((char const   */* __restrict  */)" ");
      fprint_off(stdout, total_out, positive_off_t_width);
      printf((char const   */* __restrict  */)" ");
    } else
    if (! quiet) {
      fprint_off(stdout, total_in, positive_off_t_width);
      printf((char const   */* __restrict  */)" ");
      fprint_off(stdout, total_out, positive_off_t_width);
      printf((char const   */* __restrict  */)" ");
    } else {

    }
    display_ratio(total_out - (total_in - header_bytes), total_out, stdout);
    printf((char const   */* __restrict  */)" (totals)\n");
    return;
  } else {

  }
  crc = (ulg )(~ 0);
  bytes_out = (off_t )-1L;
  bytes_in = ifile_size;
  if (method___0 == 8) {
    if (! last_member) {
      bytes_in = lseek(ifd___0, (off_t )-8, 2);
      if (bytes_in != -1LL) {
        bytes_in += 8LL;
        tmp = read(ifd___0, (void *)((char *)(buf)), sizeof(buf));
        if ((unsigned int )tmp != sizeof(buf)) {
          read_error();
        } else {

        }
        crc = (ulg )((int )((ush )buf[0]) | ((int )((ush )buf[1]) << 8)) | ((ulg )((int )((ush )*((buf + 2) + 0)) | ((int )((ush )*((buf + 2) + 1)) << 8)) << 16);
        bytes_out = (off_t )((ulg )((int )((ush )*((buf + 4) + 0)) | ((int )((ush )*((buf + 4) + 1)) << 8)) | ((ulg )((int )((ush )*(((buf + 4) + 2) + 0)) | ((int )((ush )*(((buf + 4) + 2) + 1)) << 8)) << 16));
      } else {

      }
    } else {

    }
  } else {

  }
  if (verbose) {
    tmp___0 = localtime((time_t const   *)(& time_stamp.tv_sec));
    tm = tmp___0;
    printf((char const   */* __restrict  */)"%5s %08lx ", methods[method___0],
           crc);
    if (tm) {
      printf((char const   */* __restrict  */)"%s%3d %02d:%02d ",
             "Jan\000Feb\000Mar\000Apr\000May\000Jun\000Jul\000Aug\000Sep\000Oct\000Nov\000Dec" + 4 * tm->tm_mon,
             tm->tm_mday, tm->tm_hour, tm->tm_min);
    } else {
      printf((char const   */* __restrict  */)"??? ?? ??:?? ");
    }
  } else {

  }
  fprint_off(stdout, bytes_in, positive_off_t_width);
  printf((char const   */* __restrict  */)" ");
  fprint_off(stdout, bytes_out, positive_off_t_width);
  printf((char const   */* __restrict  */)" ");
  if (bytes_in == -1LL) {
    total_in = (off_t )-1L;
    header_bytes = (off_t )0;
    bytes_out = header_bytes;
    bytes_in = bytes_out;
  } else
  if (total_in >= 0LL) {
    total_in += bytes_in;
  } else {

  }
  if (bytes_out == -1LL) {
    total_out = (off_t )-1L;
    header_bytes = (off_t )0;
    bytes_out = header_bytes;
    bytes_in = bytes_out;
  } else
  if (total_out >= 0LL) {
    total_out += bytes_out;
  } else {

  }
  display_ratio(bytes_out - (bytes_in - header_bytes), bytes_out, stdout);
  printf((char const   */* __restrict  */)" %s\n", ofname);
  return;
}
}
static void shorten_name(char *name ) 
{ 
  int len ;
  char *trunc ;
  int plen ;
  int min_part ;
  char *p ;
  size_t tmp ;
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
  char __r0 ;
  char __r1 ;
  char __r2 ;
  unsigned int tmp___7 ;
  size_t tmp___8 ;
  size_t __attribute__((__gnu_inline__))  tmp___9 ;
  size_t __attribute__((__gnu_inline__))  tmp___10 ;
  size_t __attribute__((__gnu_inline__))  tmp___11 ;
  unsigned int tmp___12 ;
  size_t __attribute__((__gnu_inline__))  tmp___13 ;
  size_t __attribute__((__gnu_inline__))  tmp___14 ;
  size_t __attribute__((__gnu_inline__))  tmp___15 ;
  size_t tmp___16 ;
  unsigned int tmp___17 ;
  char *tmp___18 ;

  {
  trunc = (char *)((void *)0);
  min_part = 3;
  tmp = strlen((char const   *)name);
  len = (int )tmp;
  if (decompress) {
    if (len <= 1) {
      gzip_error((char *)"name too short");
    } else {

    }
    *(name + (len - 1)) = (char )'\000';
    return;
  } else {

  }
  p = get_suffix(name);
  if (! p) {
    gzip_error((char *)"can\'t recover suffix\n");
  } else {

  }
  *p = (char )'\000';
  save_orig_name = 1;
  if (len > 4) {
    if (0) {
      __s1_len = strlen((char const   *)(p - 4));
      __s2_len = strlen(".tar");
      if (! ((size_t )((void const   *)((p - 4) + 1)) - (size_t )((void const   *)(p - 4)) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(".tar" + 1)) - (size_t )((void const   *)".tar") == 1U)) {
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
        tmp___1 = __builtin_strcmp((char const   *)(p - 4), ".tar");
        tmp___5 = tmp___1;
      } else {
        tmp___4 = __builtin_strcmp((char const   *)(p - 4), ".tar");
        tmp___5 = tmp___4;
      }
    } else {
      tmp___4 = __builtin_strcmp((char const   *)(p - 4), ".tar");
      tmp___5 = tmp___4;
    }
    if (tmp___5 == 0) {
      strcpy((char */* __restrict  */)(p - 4),
             (char const   */* __restrict  */)".tgz");
      return;
    } else {

    }
  } else {

  }
  while (1) {
    p = strrchr((char const   *)name, '/');
    if (p) {
      p ++;
    } else {
      p = name;
    }
    while (*p) {
      tmp___17 = __builtin_strcspn((char const   *)p, ".");
      plen = (int )tmp___17;
      p += plen;
      if (plen > min_part) {
        trunc = p - 1;
      } else {

      }
      if (*p) {
        p ++;
      } else {

      }
    }
    if ((unsigned int )trunc == (unsigned int )((void *)0)) {
      min_part --;
      if (min_part != 0) {

      } else {
        break;
      }
    } else {
      break;
    }
  }
  if ((unsigned int )trunc != (unsigned int )((void *)0)) {
    while (1) {
      *(trunc + 0) = *(trunc + 1);
      tmp___18 = trunc;
      trunc ++;
      if (*tmp___18) {

      } else {
        break;
      }
    }
    trunc --;
  } else {
    trunc = strrchr((char const   *)name, (int )*("." + 0));
    if (! trunc) {
      gzip_error((char *)"internal error in shorten_name");
    } else {

    }
    if ((int )*(trunc + 1) == 0) {
      trunc --;
    } else {

    }
  }
  strcpy((char */* __restrict  */)trunc,
         (char const   */* __restrict  */)z_suffix);
  return;
}
}
static int check_ofname(void) 
{ 
  int ok ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (! force) {
    ok = 0;
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: %s already exists;",
            program_name, ofname);
    if (foreground) {
      tmp = fileno(stdin);
      tmp___0 = isatty(tmp);
      if (tmp___0) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)" do you wish to overwrite (y or n)? ");
        rpl_fflush(stderr);
        ok = yesno();
      } else {

      }
    } else {

    }
    if (! ok) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"\tnot overwritten\n");
      if (exit_code == 0) {
        exit_code = 2;
      } else {

      }
      return (1);
    } else {

    }
  } else {

  }
  tmp___1 = xunlink(ofname);
  if (tmp___1) {
    progerror(ofname);
    return (1);
  } else {

  }
  return (0);
}
}
static void copy_stat(struct stat *ifstat ) 
{ 
  mode_t mode ;
  int r ;
  struct timespec timespec[2] ;
  int e ;
  int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  int e___0 ;
  int *tmp___2 ;
  int *tmp___3 ;

  {
  mode = ifstat->st_mode & (unsigned int )((448 | (448 >> 3)) | ((448 >> 3) >> 3));
  timespec[0] = get_stat_atime((struct stat  const  *)ifstat);
  timespec[1] = get_stat_mtime((struct stat  const  *)ifstat);
  if (decompress) {
    if (0L <= time_stamp.tv_nsec) {
      if (timespec[1].tv_sec == time_stamp.tv_sec) {
        if (timespec[1].tv_nsec == time_stamp.tv_nsec) {

        } else {
          goto _L;
        }
      } else {
        _L: /* CIL Label */ 
        timespec[1] = time_stamp;
        if (verbose > 1) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: time stamp restored\n",
                  ofname);
        } else {

        }
      }
    } else {

    }
  } else {

  }
  tmp___1 = gl_futimens(ofd, (char const   *)(ofname),
                        (struct timespec  const  *)(timespec));
  if (tmp___1 != 0) {
    tmp = __errno_location();
    e = *tmp;
    if (! quiet) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: ", program_name);
    } else {

    }
    if (exit_code == 0) {
      exit_code = 2;
    } else {

    }
    if (! quiet) {
      tmp___0 = __errno_location();
      *tmp___0 = e;
      perror((char const   *)(ofname));
    } else {

    }
  } else {

  }
  fchown(ofd, ifstat->st_uid, ifstat->st_gid);
  r = fchmod(ofd, mode);
  if (r != 0) {
    tmp___2 = __errno_location();
    e___0 = *tmp___2;
    if (! quiet) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: ", program_name);
    } else {

    }
    if (exit_code == 0) {
      exit_code = 2;
    } else {

    }
    if (! quiet) {
      tmp___3 = __errno_location();
      *tmp___3 = e___0;
      perror((char const   *)(ofname));
    } else {

    }
  } else {

  }
  return;
}
}
static void treat_dir(int fd , char *dir ) 
{ 
  struct dirent *dp ;
  DIR *dirp ;
  char nbuf[1024] ;
  int len ;
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
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___9 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  size_t tmp___13 ;
  int tmp___14 ;
  size_t tmp___15 ;
  int *tmp___16 ;
  int *tmp___17 ;
  int tmp___18 ;

  {
  dirp = fdopendir(fd);
  if ((unsigned int )dirp == (unsigned int )((void *)0)) {
    progerror(dir);
    close(fd);
    return;
  } else {

  }
  while (1) {
    tmp___16 = __errno_location();
    *tmp___16 = 0;
    dp = readdir(dirp);
    if ((unsigned int )dp != (unsigned int )((void *)0)) {

    } else {
      break;
    }
    if (0) {
      __s1_len = strlen((char const   *)(dp->d_name));
      __s2_len = strlen(".");
      if (! ((size_t )((void const   *)(dp->d_name + 1)) - (size_t )((void const   *)(dp->d_name)) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)("." + 1)) - (size_t )((void const   *)".") == 1U)) {
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
        tmp___0 = __builtin_strcmp((char const   *)(dp->d_name), ".");
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp((char const   *)(dp->d_name), ".");
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp((char const   *)(dp->d_name), ".");
      tmp___4 = tmp___3;
    }
    if (tmp___4 == 0) {
      continue;
    } else {
      if (0) {
        __s1_len___0 = strlen((char const   *)(dp->d_name));
        __s2_len___0 = strlen("..");
        if (! ((size_t )((void const   *)(dp->d_name + 1)) - (size_t )((void const   *)(dp->d_name)) == 1U)) {
          goto _L___2;
        } else
        if (__s1_len___0 >= 4U) {
          _L___2: /* CIL Label */ 
          if (! ((size_t )((void const   *)(".." + 1)) - (size_t )((void const   *)"..") == 1U)) {
            tmp___12 = 1;
          } else
          if (__s2_len___0 >= 4U) {
            tmp___12 = 1;
          } else {
            tmp___12 = 0;
          }
        } else {
          tmp___12 = 0;
        }
        if (tmp___12) {
          tmp___7 = __builtin_strcmp((char const   *)(dp->d_name), "..");
          tmp___11 = tmp___7;
        } else {
          tmp___10 = __builtin_strcmp((char const   *)(dp->d_name), "..");
          tmp___11 = tmp___10;
        }
      } else {
        tmp___10 = __builtin_strcmp((char const   *)(dp->d_name), "..");
        tmp___11 = tmp___10;
      }
      if (tmp___11 == 0) {
        continue;
      } else {

      }
    }
    tmp___13 = strlen((char const   *)dir);
    len = (int )tmp___13;
    tmp___15 = strlen((char const   *)(dp->d_name));
    if (((size_t )len + tmp___15) + 1U < 1023U) {
      strcpy((char */* __restrict  */)(nbuf),
             (char const   */* __restrict  */)dir);
      if (len != 0) {
        tmp___14 = len;
        len ++;
        nbuf[tmp___14] = (char )'/';
      } else {

      }
      strcpy((char */* __restrict  */)(nbuf + len),
             (char const   */* __restrict  */)(dp->d_name));
      treat_file(nbuf);
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: %s/%s: pathname too long\n",
              program_name, dir, dp->d_name);
      exit_code = 1;
    }
  }
  tmp___17 = __errno_location();
  if (*tmp___17 != 0) {
    progerror(dir);
  } else {

  }
  tmp___18 = closedir(dirp);
  if (tmp___18 != 0) {
    progerror(dir);
  } else {

  }
  return;
}
}
static void install_signal_handlers(void) 
{ 
  int nsigs ;
  int i ;
  struct sigaction act ;
  int tmp ;

  {
  nsigs = (int )(sizeof(handled_sig) / sizeof(handled_sig[0]));
  sigemptyset(& caught_signals);
  i = 0;
  while (i < nsigs) {
    sigaction(handled_sig[i],
              (struct sigaction  const  */* __restrict  */)((void *)0),
              (struct sigaction */* __restrict  */)(& act));
    if ((unsigned int )act.__sigaction_handler.sa_handler != (unsigned int )((void (*)(int  ))1)) {
      sigaddset(& caught_signals, handled_sig[i]);
    } else {

    }
    i ++;
  }
  act.__sigaction_handler.sa_handler = & abort_gzip_signal;
  act.sa_mask = caught_signals;
  act.sa_flags = 0;
  i = 0;
  while (i < nsigs) {
    tmp = sigismember((sigset_t const   *)(& caught_signals), handled_sig[i]);
    if (tmp) {
      if (i == 0) {
        foreground = 1;
      } else {

      }
      sigaction(handled_sig[i],
                (struct sigaction  const  */* __restrict  */)(& act),
                (struct sigaction */* __restrict  */)((void *)0));
    } else {

    }
    i ++;
  }
  return;
}
}
static  __attribute__((__noreturn__)) void do_exit(int exitcode ) ;
static int in_exit  =    0;
static  __attribute__((__noreturn__)) void do_exit(int exitcode ) ;
static void do_exit(int exitcode ) 
{ 


  {
  if (in_exit) {
    exit(exitcode);
  } else {

  }
  in_exit = 1;
  free((void *)env);
  env = (char *)((void *)0);
  free((void *)args);
  args = (char **)((void *)0);
  exit(exitcode);
}
}
static void remove_output_file(void) 
{ 
  int fd ;
  sigset_t oldset ;

  {
  sigprocmask(0, (sigset_t const   */* __restrict  */)(& caught_signals),
              (sigset_t */* __restrict  */)(& oldset));
  fd = (int )remove_ofname_fd;
  if (0 <= fd) {
    remove_ofname_fd = (int volatile   )-1;
    close(fd);
    xunlink(ofname);
  } else {

  }
  sigprocmask(2, (sigset_t const   */* __restrict  */)(& oldset),
              (sigset_t */* __restrict  */)((void *)0));
  return;
}
}
 __attribute__((__noreturn__)) void abort_gzip(void) ;
void abort_gzip(void) 
{ 


  {
  remove_output_file();
  do_exit(1);
}
}
static void abort_gzip_signal(int sig ) 
{ 


  {
  remove_output_file();
  if (sig == (int )exiting_signal) {
    _exit(2);
  } else {

  }
  signal(sig, (void (*)(int  ))0);
  raise(sig);
  return;
}
}
