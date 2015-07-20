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
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef _G_fpos_t fpos_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_6 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_6 __sigset_t;
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
struct __anonstruct__kill_8 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_9 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_10 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_11 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_12 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_13 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_7 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_8 _kill ;
   struct __anonstruct__timer_9 _timer ;
   struct __anonstruct__rt_10 _rt ;
   struct __anonstruct__sigchld_11 _sigchld ;
   struct __anonstruct__sigfault_12 _sigfault ;
   struct __anonstruct__sigpoll_13 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_7 _sifields ;
};
typedef struct siginfo siginfo_t;
enum __anonenum_14 {
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
enum __anonenum_15 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_16 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_17 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_18 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_19 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_20 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_21 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_23 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_22 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_23 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_22 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_24 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
typedef void (*__sighandler_t)(int  );
typedef void (*sig_t)(int  );
union __anonunion___sigaction_handler_25 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_25 __sigaction_handler ;
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
struct __anonstruct___kernel_fd_set_26 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___kernel_fd_set_26 __kernel_fd_set;
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
struct __anonstruct___kernel_fsid_t_27 {
   int val[2] ;
};
typedef struct __anonstruct___kernel_fsid_t_27 __kernel_fsid_t;
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
union __anonunion____missing_field_name_28 {
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
   union __anonunion____missing_field_name_28 __annonCompField1 ;
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
enum __anonenum_29 {
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
struct __anonstruct_mcontext_t_30 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_30 mcontext_t;
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
union __anonunion_pthread_attr_t_31 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_31 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_33 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_33 __annonCompField2 ;
};
union __anonunion_pthread_mutex_t_32 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_32 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_34 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_34 pthread_mutexattr_t;
struct __anonstruct___data_36 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_35 {
   struct __anonstruct___data_36 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_35 pthread_cond_t;
union __anonunion_pthread_condattr_t_37 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_37 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_39 {
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
union __anonunion_pthread_rwlock_t_38 {
   struct __anonstruct___data_39 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_38 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_40 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_40 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_41 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_41 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_42 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_42 pthread_barrierattr_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_43 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_44 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_43 __wait_terminated ;
   struct __anonstruct___wait_stopped_44 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_45 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_45  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_46 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_46 div_t;
struct __anonstruct_ldiv_t_47 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_47 ldiv_t;
struct __anonstruct_lldiv_t_48 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_48 lldiv_t;
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
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
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
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef __suseconds_t suseconds_t;
typedef long __fd_mask;
struct __anonstruct_fd_set_49 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_49 fd_set;
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
typedef long double float_t;
typedef long double double_t;
enum __anonenum_50 {
    FP_NAN = 0,
    FP_INFINITE = 1,
    FP_ZERO = 2,
    FP_SUBNORMAL = 3,
    FP_NORMAL = 4
} ;
enum __anonenum__LIB_VERSION_TYPE_51 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;
typedef enum __anonenum__LIB_VERSION_TYPE_51 _LIB_VERSION_TYPE;
struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};
union __anonunion___u_52 {
   float __f ;
   int __i ;
};
union __anonunion___u_53 {
   double __d ;
   int __i[2] ;
};
union __anonunion___u_54 {
   long double __l ;
   int __i[3] ;
};
union __anonunion___n_55 {
   long double __xld ;
   unsigned int __xi[3] ;
};
union __anonunion_56 {
   double __d ;
   int __i[2] ;
};
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
struct _zend_leak_info {
   void *addr ;
   size_t size ;
   char const   *filename ;
   uint lineno ;
   char const   *orig_filename ;
   uint orig_lineno ;
};
typedef struct _zend_leak_info zend_leak_info;
struct _zend_mm_heap;
typedef struct _zend_mm_heap zend_mm_heap;
struct _zend_mm_storage;
typedef struct _zend_mm_storage zend_mm_storage;
struct _zend_mm_segment {
   size_t size ;
   struct _zend_mm_segment *next_segment ;
};
typedef struct _zend_mm_segment zend_mm_segment;
struct _zend_mm_mem_handlers {
   char const   *name ;
   zend_mm_storage *(*init)(void *params ) ;
   void (*dtor)(zend_mm_storage *storage ) ;
   void (*compact)(zend_mm_storage *storage ) ;
   zend_mm_segment *(*_alloc)(zend_mm_storage *storage , size_t size ) ;
   zend_mm_segment *(*_realloc)(zend_mm_storage *storage ,
                                zend_mm_segment *ptr , size_t size ) ;
   void (*_free)(zend_mm_storage *storage , zend_mm_segment *ptr ) ;
};
typedef struct _zend_mm_mem_handlers zend_mm_mem_handlers;
struct _zend_mm_storage {
   zend_mm_mem_handlers const   *handlers ;
   void *data ;
};
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;
typedef long long zend_long64;
typedef unsigned long long zend_ulong64;
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;
typedef unsigned int zend_object_handle;
struct _zend_object_handlers;
typedef struct _zend_object_handlers zend_object_handlers;
struct _zend_object_value {
   zend_object_handle handle ;
   zend_object_handlers const   *handlers ;
};
typedef struct _zend_object_value zend_object_value;
typedef ulong (*hash_func_t)(char const   *arKey , uint nKeyLength );
typedef int (*compare_func_t)(void const   * , void const   * );
typedef void (*sort_func_t)(void * , size_t  , size_t  ,
                            int (*)(void const   * , void const   * ) );
typedef void (*dtor_func_t)(void *pDest );
typedef void (*copy_ctor_func_t)(void *pElement );
typedef void (*copy_ctor_param_func_t)(void *pElement , void *pParam );
struct _hashtable;
struct _hashtable;
struct bucket {
   ulong h ;
   uint nKeyLength ;
   void *pData ;
   void *pDataPtr ;
   struct bucket *pListNext ;
   struct bucket *pListLast ;
   struct bucket *pNext ;
   struct bucket *pLast ;
   char const   *arKey ;
};
typedef struct bucket Bucket;
struct _hashtable {
   uint nTableSize ;
   uint nTableMask ;
   uint nNumOfElements ;
   ulong nNextFreeElement ;
   Bucket *pInternalPointer ;
   Bucket *pListHead ;
   Bucket *pListTail ;
   Bucket **arBuckets ;
   void (*pDestructor)(void *pDest ) ;
   zend_bool persistent ;
   unsigned char nApplyCount ;
   zend_bool bApplyProtection ;
};
typedef struct _hashtable HashTable;
struct _zend_hash_key {
   char const   *arKey ;
   uint nKeyLength ;
   ulong h ;
};
typedef struct _zend_hash_key zend_hash_key;
typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht ,
                                          void *source_data ,
                                          zend_hash_key *hash_key ,
                                          void *pParam );
typedef Bucket *HashPosition;
typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest , void *argument );
typedef int (*apply_func_args_t)(void *pDest , int num_args , va_list args ,
                                 zend_hash_key *hash_key );
struct _HashPointer {
   HashPosition pos ;
   ulong h ;
};
typedef struct _HashPointer HashPointer;
struct _zend_ts_hashtable {
   HashTable hash ;
   zend_uint reader ;
};
typedef struct _zend_ts_hashtable TsHashTable;
struct _zend_llist_element {
   struct _zend_llist_element *next ;
   struct _zend_llist_element *prev ;
   char data[1] ;
};
typedef struct _zend_llist_element zend_llist_element;
typedef void (*llist_dtor_func_t)(void * );
typedef int (*llist_compare_func_t)(zend_llist_element const   ** ,
                                    zend_llist_element const   ** );
typedef void (*llist_apply_with_args_func_t)(void *data , int num_args ,
                                             va_list args );
typedef void (*llist_apply_with_arg_func_t)(void *data , void *arg );
typedef void (*llist_apply_func_t)(void * );
struct _zend_llist {
   zend_llist_element *head ;
   zend_llist_element *tail ;
   size_t count ;
   size_t size ;
   void (*dtor)(void * ) ;
   unsigned char persistent ;
   zend_llist_element *traverse_ptr ;
};
typedef struct _zend_llist zend_llist;
typedef zend_llist_element *zend_llist_position;
struct _zval_struct;
typedef struct _zval_struct zval;
struct _zend_class_entry;
typedef struct _zend_class_entry zend_class_entry;
struct _zend_guard {
   zend_bool in_get ;
   zend_bool in_set ;
   zend_bool in_unset ;
   zend_bool in_isset ;
   zend_bool dummy ;
};
typedef struct _zend_guard zend_guard;
struct _zend_object {
   zend_class_entry *ce ;
   HashTable *properties ;
   zval **properties_table ;
   HashTable *guards ;
};
typedef struct _zend_object zend_object;
union _zend_function;
union _zend_function;
struct _zend_property_info;
struct _zend_property_info;
struct _zend_literal;
struct _zend_literal;
typedef zval *(*zend_object_read_property_t)(zval *object , zval *member ,
                                             int type ,
                                             struct _zend_literal  const  *key );
typedef zval *(*zend_object_read_dimension_t)(zval *object , zval *offset ,
                                              int type );
typedef void (*zend_object_write_property_t)(zval *object , zval *member ,
                                             zval *value ,
                                             struct _zend_literal  const  *key );
typedef void (*zend_object_write_dimension_t)(zval *object , zval *offset ,
                                              zval *value );
typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object ,
                                                     zval *member ,
                                                     struct _zend_literal  const  *key );
typedef void (*zend_object_set_t)(zval **object , zval *value );
typedef zval *(*zend_object_get_t)(zval *object );
typedef int (*zend_object_has_property_t)(zval *object , zval *member ,
                                          int has_set_exists ,
                                          struct _zend_literal  const  *key );
typedef int (*zend_object_has_dimension_t)(zval *object , zval *member ,
                                           int check_empty );
typedef void (*zend_object_unset_property_t)(zval *object , zval *member ,
                                             struct _zend_literal  const  *key );
typedef void (*zend_object_unset_dimension_t)(zval *object , zval *offset );
typedef HashTable *(*zend_object_get_properties_t)(zval *object );
typedef HashTable *(*zend_object_get_debug_info_t)(zval *object , int *is_temp );
typedef int (*zend_object_call_method_t)(char const   *method , int ht ,
                                         zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr ,
                                                          char *method ,
                                                          int method_len ,
                                                          struct _zend_literal  const  *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );
typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );
typedef zend_class_entry *(*zend_object_get_class_entry_t)(zval const   *object );
typedef int (*zend_object_get_class_name_t)(zval const   *object ,
                                            char const   **class_name ,
                                            zend_uint *class_name_len ,
                                            int parent );
typedef int (*zend_object_compare_t)(zval *object1 , zval *object2 );
typedef int (*zend_object_cast_t)(zval *readobj , zval *retval , int type );
typedef int (*zend_object_count_elements_t)(zval *object , long *count );
typedef int (*zend_object_get_closure_t)(zval *obj , zend_class_entry **ce_ptr ,
                                         union _zend_function **fptr_ptr ,
                                         zval **zobj_ptr );
typedef HashTable *(*zend_object_get_gc_t)(zval *object , zval ***table ,
                                           int *n );
struct _zend_object_handlers {
   void (*add_ref)(zval *object ) ;
   void (*del_ref)(zval *object ) ;
   zend_object_value (*clone_obj)(zval *object ) ;
   zval *(*read_property)(zval *object , zval *member , int type ,
                          struct _zend_literal  const  *key ) ;
   void (*write_property)(zval *object , zval *member , zval *value ,
                          struct _zend_literal  const  *key ) ;
   zval *(*read_dimension)(zval *object , zval *offset , int type ) ;
   void (*write_dimension)(zval *object , zval *offset , zval *value ) ;
   zval **(*get_property_ptr_ptr)(zval *object , zval *member ,
                                  struct _zend_literal  const  *key ) ;
   zval *(*get)(zval *object ) ;
   void (*set)(zval **object , zval *value ) ;
   int (*has_property)(zval *object , zval *member , int has_set_exists ,
                       struct _zend_literal  const  *key ) ;
   void (*unset_property)(zval *object , zval *member ,
                          struct _zend_literal  const  *key ) ;
   int (*has_dimension)(zval *object , zval *member , int check_empty ) ;
   void (*unset_dimension)(zval *object , zval *offset ) ;
   HashTable *(*get_properties)(zval *object ) ;
   union _zend_function *(*get_method)(zval **object_ptr , char *method ,
                                       int method_len ,
                                       struct _zend_literal  const  *key ) ;
   int (*call_method)(char const   *method , int ht , zval *return_value ,
                      zval **return_value_ptr , zval *this_ptr ,
                      int return_value_used ) ;
   union _zend_function *(*get_constructor)(zval *object ) ;
   zend_class_entry *(*get_class_entry)(zval const   *object ) ;
   int (*get_class_name)(zval const   *object , char const   **class_name ,
                         zend_uint *class_name_len , int parent ) ;
   int (*compare_objects)(zval *object1 , zval *object2 ) ;
   int (*cast_object)(zval *readobj , zval *retval , int type ) ;
   int (*count_elements)(zval *object , long *count ) ;
   HashTable *(*get_debug_info)(zval *object , int *is_temp ) ;
   int (*get_closure)(zval *obj , zend_class_entry **ce_ptr ,
                      union _zend_function **fptr_ptr , zval **zobj_ptr ) ;
   HashTable *(*get_gc)(zval *object , zval ***table , int *n ) ;
};
struct __anonstruct_str_57 {
   char *val ;
   int len ;
};
union _zvalue_value {
   long lval ;
   double dval ;
   struct __anonstruct_str_57 str ;
   HashTable *ht ;
   zend_object_value obj ;
};
typedef union _zvalue_value zvalue_value;
struct _zval_struct {
   zvalue_value value ;
   zend_uint refcount__gc ;
   zend_uchar type ;
   zend_uchar is_ref__gc ;
};
union _zend_function;
struct _zend_object_iterator;
typedef struct _zend_object_iterator zend_object_iterator;
struct _zend_object_iterator_funcs {
   void (*dtor)(zend_object_iterator *iter ) ;
   int (*valid)(zend_object_iterator *iter ) ;
   void (*get_current_data)(zend_object_iterator *iter , zval ***data ) ;
   int (*get_current_key)(zend_object_iterator *iter , char **str_key ,
                          uint *str_key_len , ulong *int_key ) ;
   void (*move_forward)(zend_object_iterator *iter ) ;
   void (*rewind)(zend_object_iterator *iter ) ;
   void (*invalidate_current)(zend_object_iterator *iter ) ;
};
typedef struct _zend_object_iterator_funcs zend_object_iterator_funcs;
struct _zend_object_iterator {
   void *data ;
   zend_object_iterator_funcs *funcs ;
   ulong index ;
};
struct _zend_class_iterator_funcs {
   zend_object_iterator_funcs *funcs ;
   union _zend_function *zf_new_iterator ;
   union _zend_function *zf_valid ;
   union _zend_function *zf_current ;
   union _zend_function *zf_key ;
   union _zend_function *zf_next ;
   union _zend_function *zf_rewind ;
};
typedef struct _zend_class_iterator_funcs zend_class_iterator_funcs;
enum zend_object_iterator_kind {
    ZEND_ITER_INVALID = 0,
    ZEND_ITER_PLAIN_ARRAY = 1,
    ZEND_ITER_PLAIN_OBJECT = 2,
    ZEND_ITER_OBJECT = 3
} ;
struct _zend_serialize_data;
struct _zend_serialize_data;
struct _zend_unserialize_data;
struct _zend_unserialize_data;
typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;
struct _zend_trait_method_reference {
   char const   *method_name ;
   unsigned int mname_len ;
   zend_class_entry *ce ;
   char const   *class_name ;
   unsigned int cname_len ;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;
struct _zend_trait_precedence {
   zend_trait_method_reference *trait_method ;
   zend_class_entry **exclude_from_classes ;
   union _zend_function *function ;
};
typedef struct _zend_trait_precedence zend_trait_precedence;
struct _zend_trait_alias {
   zend_trait_method_reference *trait_method ;
   char const   *alias ;
   unsigned int alias_len ;
   zend_uint modifiers ;
   union _zend_function *function ;
};
typedef struct _zend_trait_alias zend_trait_alias;
struct __anonstruct_user_59 {
   char const   *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char const   *doc_comment ;
   zend_uint doc_comment_len ;
};
struct _zend_function_entry;
struct _zend_module_entry;
struct __anonstruct_internal_60 {
   struct _zend_function_entry  const  *builtin_functions ;
   struct _zend_module_entry *module ;
};
union __anonunion_info_58 {
   struct __anonstruct_user_59 user ;
   struct __anonstruct_internal_60 internal ;
};
struct _zend_class_entry {
   char type ;
   char const   *name ;
   zend_uint name_length ;
   struct _zend_class_entry *parent ;
   int refcount ;
   zend_uint ce_flags ;
   HashTable function_table ;
   HashTable properties_info ;
   zval **default_properties_table ;
   zval **default_static_members_table ;
   zval **static_members_table ;
   HashTable constants_table ;
   int default_properties_count ;
   int default_static_members_count ;
   union _zend_function *constructor ;
   union _zend_function *destructor ;
   union _zend_function *clone ;
   union _zend_function *__get ;
   union _zend_function *__set ;
   union _zend_function *__unset ;
   union _zend_function *__isset ;
   union _zend_function *__call ;
   union _zend_function *__callstatic ;
   union _zend_function *__tostring ;
   union _zend_function *serialize_func ;
   union _zend_function *unserialize_func ;
   zend_class_iterator_funcs iterator_funcs ;
   zend_object_value (*create_object)(zend_class_entry *class_type ) ;
   zend_object_iterator *(*get_iterator)(zend_class_entry *ce , zval *object ,
                                         int by_ref ) ;
   int (*interface_gets_implemented)(zend_class_entry *iface ,
                                     zend_class_entry *class_type ) ;
   union _zend_function *(*get_static_method)(zend_class_entry *ce ,
                                              char *method , int method_len ) ;
   int (*serialize)(zval *object , unsigned char **buffer , zend_uint *buf_len ,
                    zend_serialize_data *data ) ;
   int (*unserialize)(zval **object , zend_class_entry *ce ,
                      unsigned char const   *buf , zend_uint buf_len ,
                      zend_unserialize_data *data ) ;
   zend_class_entry **interfaces ;
   zend_uint num_interfaces ;
   zend_class_entry **traits ;
   zend_uint num_traits ;
   zend_trait_alias **trait_aliases ;
   zend_trait_precedence **trait_precedences ;
   union __anonunion_info_58 info ;
};
typedef size_t (*zend_stream_fsizer_t)(void *handle );
typedef size_t (*zend_stream_reader_t)(void *handle , char *buf , size_t len );
typedef void (*zend_stream_closer_t)(void *handle );
enum __anonenum_zend_stream_type_61 {
    ZEND_HANDLE_FILENAME = 0,
    ZEND_HANDLE_FD = 1,
    ZEND_HANDLE_FP = 2,
    ZEND_HANDLE_STREAM = 3,
    ZEND_HANDLE_MAPPED = 4
} ;
typedef enum __anonenum_zend_stream_type_61 zend_stream_type;
struct _zend_mmap {
   size_t len ;
   size_t pos ;
   void *map ;
   char *buf ;
   void *old_handle ;
   void (*old_closer)(void *handle ) ;
};
typedef struct _zend_mmap zend_mmap;
struct _zend_stream {
   void *handle ;
   int isatty ;
   zend_mmap mmap ;
   size_t (*reader)(void *handle , char *buf , size_t len ) ;
   size_t (*fsizer)(void *handle ) ;
   void (*closer)(void *handle ) ;
};
typedef struct _zend_stream zend_stream;
union __anonunion_handle_62 {
   int fd ;
   FILE *fp ;
   zend_stream stream ;
};
struct _zend_file_handle {
   zend_stream_type type ;
   char const   *filename ;
   char *opened_path ;
   union __anonunion_handle_62 handle ;
   zend_bool free_filename ;
};
typedef struct _zend_file_handle zend_file_handle;
struct _zend_utility_functions {
   void ( /* format attribute */  (*error_function))(int type ,
                                                     char const   *error_filename ,
                                                     uint const   error_lineno ,
                                                     char const   *format ,
                                                     va_list args ) ;
   int ( /* format attribute */  (*printf_function))(char const   *format  , ...) ;
   int (*write_function)(char const   *str , uint str_length ) ;
   FILE *(*fopen_function)(char const   *filename , char **opened_path ) ;
   void (*message_handler)(long message , void const   *data ) ;
   int (*get_configuration_directive)(char const   *name , uint name_length ,
                                      zval *contents ) ;
   void (*ticks_function)(int ticks ) ;
   void (*on_timeout)(int seconds ) ;
   int (*stream_open_function)(char const   *filename ,
                               zend_file_handle *handle ) ;
   int (*vspprintf_function)(char **pbuf , size_t max_len ,
                             char const   *format , va_list ap ) ;
   char *(*getenv_function)(char *name , size_t name_len ) ;
   char *(*resolve_path_function)(char const   *filename , int filename_len ) ;
};
typedef struct _zend_utility_functions zend_utility_functions;
struct _zend_utility_values {
   char *import_use_extension ;
   uint import_use_extension_length ;
   zend_bool html_errors ;
};
typedef struct _zend_utility_values zend_utility_values;
typedef int (*zend_write_func_t)(char const   *str , uint str_length );
struct _zend_signal_entry_t {
   int flags ;
   void *handler ;
};
typedef struct _zend_signal_entry_t zend_signal_entry_t;
struct _zend_signal_t {
   int signo ;
   siginfo_t *siginfo ;
   void *context ;
};
typedef struct _zend_signal_t zend_signal_t;
struct _zend_signal_queue_t {
   zend_signal_t zend_signal ;
   struct _zend_signal_queue_t *next ;
};
typedef struct _zend_signal_queue_t zend_signal_queue_t;
struct _zend_signal_globals_t {
   int depth ;
   int blocked ;
   int running ;
   int active ;
   int initialized ;
   zend_bool check ;
   zend_signal_entry_t handlers[65] ;
   zend_signal_queue_t pstorage[32] ;
   zend_signal_queue_t *phead ;
   zend_signal_queue_t *ptail ;
   zend_signal_queue_t *pavail ;
};
typedef struct _zend_signal_globals_t zend_signal_globals_t;
union __anonunion_u_63 {
   zval *pz ;
   zend_object_handlers const   *handlers ;
};
struct _gc_root_buffer {
   struct _gc_root_buffer *prev ;
   struct _gc_root_buffer *next ;
   zend_object_handle handle ;
   union __anonunion_u_63 u ;
};
typedef struct _gc_root_buffer gc_root_buffer;
union __anonunion_u_64 {
   gc_root_buffer *buffered ;
   struct _zval_gc_info *next ;
};
struct _zval_gc_info {
   zval z ;
   union __anonunion_u_64 u ;
};
typedef struct _zval_gc_info zval_gc_info;
struct _zend_gc_globals {
   zend_bool gc_enabled ;
   zend_bool gc_active ;
   gc_root_buffer *buf ;
   gc_root_buffer roots ;
   gc_root_buffer *unused ;
   gc_root_buffer *first_unused ;
   gc_root_buffer *last_unused ;
   zval_gc_info *zval_to_free ;
   zval_gc_info *free_list ;
   zval_gc_info *next_to_free ;
   zend_uint gc_runs ;
   zend_uint collected ;
};
typedef struct _zend_gc_globals zend_gc_globals;
enum __anonenum_zend_error_handling_t_65 {
    EH_NORMAL = 0,
    EH_SUPPRESS = 1,
    EH_THROW = 2
} ;
typedef enum __anonenum_zend_error_handling_t_65 zend_error_handling_t;
struct __anonstruct_zend_error_handling_66 {
   zend_error_handling_t handling ;
   zend_class_entry *exception ;
   zval *user_handler ;
};
typedef struct __anonstruct_zend_error_handling_66 zend_error_handling;
struct _zend_op_array;
typedef struct _zend_op_array zend_op_array;
struct _zend_op;
typedef struct _zend_op zend_op;
struct _zend_compiler_context {
   zend_uint opcodes_size ;
   int vars_size ;
   int literals_size ;
   int current_brk_cont ;
   int backpatch_count ;
   HashTable *labels ;
};
typedef struct _zend_compiler_context zend_compiler_context;
struct _zend_literal {
   zval constant ;
   zend_ulong hash_value ;
   zend_uint cache_slot ;
};
typedef struct _zend_literal zend_literal;
union _znode_op {
   zend_uint constant ;
   zend_uint var ;
   zend_uint num ;
   zend_ulong hash ;
   zend_uint opline_num ;
   zend_op *jmp_addr ;
   zval *zv ;
   zend_literal *literal ;
   void *ptr ;
};
typedef union _znode_op znode_op;
union __anonunion_u_67 {
   znode_op op ;
   zval constant ;
   zend_op_array *op_array ;
};
struct _znode {
   int op_type ;
   union __anonunion_u_67 u ;
   zend_uint EA ;
};
typedef struct _znode znode;
struct _zend_execute_data;
typedef struct _zend_execute_data zend_execute_data;
typedef int (*user_opcode_handler_t)(zend_execute_data *execute_data );
typedef int ( __attribute__((__fastcall__)) (*opcode_handler_t))(zend_execute_data *execute_data );
struct _zend_op {
   int ( __attribute__((__fastcall__)) (*handler))(zend_execute_data *execute_data ) ;
   znode_op op1 ;
   znode_op op2 ;
   znode_op result ;
   ulong extended_value ;
   uint lineno ;
   zend_uchar opcode ;
   zend_uchar op1_type ;
   zend_uchar op2_type ;
   zend_uchar result_type ;
};
struct _zend_brk_cont_element {
   int start ;
   int cont ;
   int brk ;
   int parent ;
};
typedef struct _zend_brk_cont_element zend_brk_cont_element;
struct _zend_label {
   int brk_cont ;
   zend_uint opline_num ;
};
typedef struct _zend_label zend_label;
struct _zend_try_catch_element {
   zend_uint try_op ;
   zend_uint catch_op ;
};
typedef struct _zend_try_catch_element zend_try_catch_element;
struct _zend_property_info {
   zend_uint flags ;
   char const   *name ;
   int name_length ;
   ulong h ;
   int offset ;
   char const   *doc_comment ;
   int doc_comment_len ;
   zend_class_entry *ce ;
};
typedef struct _zend_property_info zend_property_info;
struct _zend_arg_info {
   char const   *name ;
   zend_uint name_len ;
   char const   *class_name ;
   zend_uint class_name_len ;
   zend_uchar type_hint ;
   zend_bool allow_null ;
   zend_bool pass_by_reference ;
};
typedef struct _zend_arg_info zend_arg_info;
struct _zend_internal_function_info {
   char const   *_name ;
   zend_uint _name_len ;
   char const   *_class_name ;
   zend_uint required_num_args ;
   zend_uchar _type_hint ;
   zend_bool return_reference ;
   zend_bool pass_rest_by_reference ;
};
typedef struct _zend_internal_function_info zend_internal_function_info;
struct _zend_compiled_variable {
   char const   *name ;
   int name_len ;
   ulong hash_value ;
};
typedef struct _zend_compiled_variable zend_compiled_variable;
struct _zend_op_array {
   zend_uchar type ;
   char const   *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   zend_uint *refcount ;
   zend_op *opcodes ;
   zend_uint last ;
   zend_compiled_variable *vars ;
   int last_var ;
   zend_uint T ;
   zend_brk_cont_element *brk_cont_array ;
   int last_brk_cont ;
   zend_try_catch_element *try_catch_array ;
   int last_try_catch ;
   HashTable *static_variables ;
   zend_uint this_var ;
   char const   *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char const   *doc_comment ;
   zend_uint doc_comment_len ;
   zend_uint early_binding ;
   zend_literal *literals ;
   int last_literal ;
   void **run_time_cache ;
   int last_cache_slot ;
   void *reserved[4] ;
};
struct _zend_internal_function {
   zend_uchar type ;
   char const   *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   void (*handler)(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
   struct _zend_module_entry *module ;
};
typedef struct _zend_internal_function zend_internal_function;
struct __anonstruct_common_68 {
   zend_uchar type ;
   char const   *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
};
union _zend_function {
   zend_uchar type ;
   struct __anonstruct_common_68 common ;
   zend_op_array op_array ;
   zend_internal_function internal_function ;
};
typedef union _zend_function zend_function;
struct _zend_function_state {
   zend_function *function ;
   void **arguments ;
};
typedef struct _zend_function_state zend_function_state;
struct _zend_switch_entry {
   znode cond ;
   int default_case ;
   int control_var ;
};
typedef struct _zend_switch_entry zend_switch_entry;
struct _list_llist_element {
   znode var ;
   zend_llist dimensions ;
   znode value ;
};
typedef struct _list_llist_element list_llist_element;
union _temp_variable;
union _temp_variable;
struct _zend_execute_data {
   struct _zend_op *opline ;
   zend_function_state function_state ;
   zend_function *fbc ;
   zend_class_entry *called_scope ;
   zend_op_array *op_array ;
   zval *object ;
   union _temp_variable *Ts ;
   zval ***CVs ;
   HashTable *symbol_table ;
   struct _zend_execute_data *prev_execute_data ;
   zval *old_error_reporting ;
   zend_bool nested ;
   zval **original_return_value ;
   zend_class_entry *current_scope ;
   zend_class_entry *current_called_scope ;
   zval *current_this ;
   zval *current_object ;
};
typedef int __jmp_buf[6];
struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct __jmp_buf_tag sigjmp_buf[1];
struct _zend_compiler_globals;
typedef struct _zend_compiler_globals zend_compiler_globals;
struct _zend_executor_globals;
typedef struct _zend_executor_globals zend_executor_globals;
struct _zend_php_scanner_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
struct _zend_ini_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;
struct _zend_stack {
   int top ;
   int max ;
   void **elements ;
};
typedef struct _zend_stack zend_stack;
struct _zend_ptr_stack {
   int top ;
   int max ;
   void **elements ;
   void **top_element ;
   zend_bool persistent ;
};
typedef struct _zend_ptr_stack zend_ptr_stack;
typedef void (*zend_objects_store_dtor_t)(void *object ,
                                          zend_object_handle handle );
typedef void (*zend_objects_free_object_storage_t)(void *object );
typedef void (*zend_objects_store_clone_t)(void *object , void **object_clone );
struct _store_object {
   void *object ;
   void (*dtor)(void *object , zend_object_handle handle ) ;
   void (*free_storage)(void *object ) ;
   void (*clone)(void *object , void **object_clone ) ;
   zend_object_handlers const   *handlers ;
   zend_uint refcount ;
   gc_root_buffer *buffered ;
};
struct __anonstruct_free_list_69 {
   int next ;
};
union _store_bucket {
   struct _store_object obj ;
   struct __anonstruct_free_list_69 free_list ;
};
struct _zend_object_store_bucket {
   zend_bool destructor_called ;
   zend_bool valid ;
   union _store_bucket bucket ;
};
typedef struct _zend_object_store_bucket zend_object_store_bucket;
struct _zend_objects_store {
   zend_object_store_bucket *object_buckets ;
   zend_uint top ;
   zend_uint size ;
   int free_list_head ;
};
typedef struct _zend_objects_store zend_objects_store;
struct _zend_ini_entry;
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
struct _zend_module_dep;
typedef struct _zend_module_dep zend_module_dep;
struct _zend_module_entry {
   unsigned short size ;
   unsigned int zend_api ;
   unsigned char zend_debug ;
   unsigned char zts ;
   struct _zend_ini_entry  const  *ini_entry ;
   struct _zend_module_dep  const  *deps ;
   char const   *name ;
   struct _zend_function_entry  const  *functions ;
   int (*module_startup_func)(int type , int module_number ) ;
   int (*module_shutdown_func)(int type , int module_number ) ;
   int (*request_startup_func)(int type , int module_number ) ;
   int (*request_shutdown_func)(int type , int module_number ) ;
   void (*info_func)(zend_module_entry *zend_module ) ;
   char const   *version ;
   size_t globals_size ;
   void *globals_ptr ;
   void (*globals_ctor)(void *global ) ;
   void (*globals_dtor)(void *global ) ;
   int (*post_deactivate_func)(void) ;
   int module_started ;
   unsigned char type ;
   void *handle ;
   int module_number ;
   char const   *build_id ;
};
struct _zend_module_dep {
   char const   *name ;
   char const   *rel ;
   char const   *version ;
   unsigned char type ;
};
typedef unsigned short fpu_control_t;
struct _zend_encoding;
typedef struct _zend_encoding zend_encoding;
typedef size_t (*zend_encoding_filter)(unsigned char **str ,
                                       size_t *str_length ,
                                       unsigned char const   *buf ,
                                       size_t length );
typedef zend_encoding const   *(*zend_encoding_fetcher)(char const   *encoding_name );
typedef char const   *(*zend_encoding_name_getter)(zend_encoding const   *encoding );
typedef int (*zend_encoding_lexer_compatibility_checker)(zend_encoding const   *encoding );
typedef zend_encoding const   *(*zend_encoding_detector)(unsigned char const   *string ,
                                                         size_t length ,
                                                         zend_encoding const   **list ,
                                                         size_t list_size );
typedef size_t (*zend_encoding_converter)(unsigned char **to ,
                                          size_t *to_length ,
                                          unsigned char const   *from ,
                                          size_t from_length ,
                                          zend_encoding const   *encoding_to ,
                                          zend_encoding const   *encoding_from );
typedef int (*zend_encoding_list_parser)(char const   *encoding_list ,
                                         size_t encoding_list_len ,
                                         zend_encoding const   ***return_list ,
                                         size_t *return_size , int persistent );
typedef zend_encoding const   *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(zend_encoding const   *encoding );
struct _zend_multibyte_functions {
   char const   *provider_name ;
   zend_encoding const   *(*encoding_fetcher)(char const   *encoding_name ) ;
   char const   *(*encoding_name_getter)(zend_encoding const   *encoding ) ;
   int (*lexer_compatibility_checker)(zend_encoding const   *encoding ) ;
   zend_encoding const   *(*encoding_detector)(unsigned char const   *string ,
                                               size_t length ,
                                               zend_encoding const   **list ,
                                               size_t list_size ) ;
   size_t (*encoding_converter)(unsigned char **to , size_t *to_length ,
                                unsigned char const   *from ,
                                size_t from_length ,
                                zend_encoding const   *encoding_to ,
                                zend_encoding const   *encoding_from ) ;
   int (*encoding_list_parser)(char const   *encoding_list ,
                               size_t encoding_list_len ,
                               zend_encoding const   ***return_list ,
                               size_t *return_size , int persistent ) ;
   zend_encoding const   *(*internal_encoding_getter)(void) ;
   int (*internal_encoding_setter)(zend_encoding const   *encoding ) ;
};
typedef struct _zend_multibyte_functions zend_multibyte_functions;
struct _zend_declarables {
   zval ticks ;
};
typedef struct _zend_declarables zend_declarables;
struct _zend_vm_stack;
typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;
struct _zend_ini_parser_param;
struct _zend_compiler_globals {
   zend_stack bp_stack ;
   zend_stack switch_cond_stack ;
   zend_stack foreach_copy_stack ;
   zend_stack object_stack ;
   zend_stack declare_stack ;
   zend_class_entry *active_class_entry ;
   zend_llist list_llist ;
   zend_llist dimension_llist ;
   zend_stack list_stack ;
   zend_stack function_call_stack ;
   char *compiled_filename ;
   int zend_lineno ;
   char *heredoc ;
   int heredoc_len ;
   zend_op_array *active_op_array ;
   HashTable *function_table ;
   HashTable *class_table ;
   HashTable filenames_table ;
   HashTable *auto_globals ;
   zend_bool parse_error ;
   zend_bool in_compilation ;
   zend_bool short_tags ;
   zend_bool asp_tags ;
   zend_declarables declarables ;
   zend_bool unclean_shutdown ;
   zend_bool ini_parser_unbuffered_errors ;
   zend_llist open_files ;
   long catch_begin ;
   struct _zend_ini_parser_param *ini_parser_param ;
   int interactive ;
   zend_uint start_lineno ;
   zend_bool increment_lineno ;
   znode implementing_class ;
   zend_uint access_type ;
   char *doc_comment ;
   zend_uint doc_comment_len ;
   zend_uint compiler_options ;
   zval *current_namespace ;
   HashTable *current_import ;
   zend_bool in_namespace ;
   zend_bool has_bracketed_namespaces ;
   zend_compiler_context context ;
   zend_stack context_stack ;
   char *interned_strings_start ;
   char *interned_strings_end ;
   char *interned_strings_top ;
   char *interned_strings_snapshot_top ;
   HashTable interned_strings ;
   zend_encoding const   **script_encoding_list ;
   size_t script_encoding_list_size ;
   zend_bool multibyte ;
   zend_bool detect_unicode ;
   zend_bool encoding_declared ;
};
struct _zend_executor_globals {
   zval **return_value_ptr_ptr ;
   zval uninitialized_zval ;
   zval *uninitialized_zval_ptr ;
   zval error_zval ;
   zval *error_zval_ptr ;
   zend_ptr_stack arg_types_stack ;
   HashTable *symtable_cache[32] ;
   HashTable **symtable_cache_limit ;
   HashTable **symtable_cache_ptr ;
   zend_op **opline_ptr ;
   HashTable *active_symbol_table ;
   HashTable symbol_table ;
   HashTable included_files ;
   jmp_buf *bailout ;
   int error_reporting ;
   int orig_error_reporting ;
   int exit_status ;
   zend_op_array *active_op_array ;
   HashTable *function_table ;
   HashTable *class_table ;
   HashTable *zend_constants ;
   zend_class_entry *scope ;
   zend_class_entry *called_scope ;
   zval *This ;
   long precision ;
   int ticks_count ;
   zend_bool in_execution ;
   HashTable *in_autoload ;
   zend_function *autoload_func ;
   zend_bool full_tables_cleanup ;
   zend_bool no_extensions ;
   HashTable regular_list ;
   HashTable persistent_list ;
   zend_vm_stack argument_stack ;
   int user_error_handler_error_reporting ;
   zval *user_error_handler ;
   zval *user_exception_handler ;
   zend_stack user_error_handlers_error_reporting ;
   zend_ptr_stack user_error_handlers ;
   zend_ptr_stack user_exception_handlers ;
   zend_error_handling_t error_handling ;
   zend_class_entry *exception_class ;
   int timeout_seconds ;
   int lambda_count ;
   HashTable *ini_directives ;
   HashTable *modified_ini_directives ;
   zend_ini_entry *error_reporting_ini_entry ;
   zend_objects_store objects_store ;
   zval *exception ;
   zval *prev_exception ;
   zend_op *opline_before_exception ;
   zend_op exception_op[3] ;
   struct _zend_execute_data *current_execute_data ;
   struct _zend_module_entry *current_module ;
   zend_property_info std_property_info ;
   zend_bool active ;
   zend_op *start_op ;
   void *saved_fpu_cw_ptr ;
   fpu_control_t saved_fpu_cw ;
   void *reserved[4] ;
};
struct _zend_ini_scanner_globals {
   zend_file_handle *yy_in ;
   zend_file_handle *yy_out ;
   unsigned int yy_leng ;
   unsigned char *yy_start ;
   unsigned char *yy_text ;
   unsigned char *yy_cursor ;
   unsigned char *yy_marker ;
   unsigned char *yy_limit ;
   int yy_state ;
   zend_stack state_stack ;
   char *filename ;
   int lineno ;
   int scanner_mode ;
};
struct _zend_php_scanner_globals {
   zend_file_handle *yy_in ;
   zend_file_handle *yy_out ;
   unsigned int yy_leng ;
   unsigned char *yy_start ;
   unsigned char *yy_text ;
   unsigned char *yy_cursor ;
   unsigned char *yy_marker ;
   unsigned char *yy_limit ;
   int yy_state ;
   zend_stack state_stack ;
   unsigned char *script_org ;
   size_t script_org_size ;
   unsigned char *script_filtered ;
   size_t script_filtered_size ;
   size_t (*input_filter)(unsigned char **str , size_t *str_length ,
                          unsigned char const   *buf , size_t length ) ;
   size_t (*output_filter)(unsigned char **str , size_t *str_length ,
                           unsigned char const   *buf , size_t length ) ;
   zend_encoding const   *script_encoding ;
};
typedef int (*unary_op_type)(zval * , zval * );
typedef int (*binary_op_type)(zval * , zval * , zval * );
typedef zend_bool (*zend_auto_global_callback)(char const   *name ,
                                               uint name_len );
struct _zend_auto_global {
   char const   *name ;
   uint name_len ;
   zend_bool (*auto_global_callback)(char const   *name , uint name_len ) ;
   zend_bool jit ;
   zend_bool armed ;
};
typedef struct _zend_auto_global zend_auto_global;
struct __anonstruct_var_70 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
};
struct __anonstruct_str_offset_71 {
   zval **ptr_ptr ;
   zval *str ;
   zend_uint offset ;
};
struct __anonstruct_fe_72 {
   zval **ptr_ptr ;
   zval *ptr ;
   HashPointer fe_pos ;
};
union _temp_variable {
   zval tmp_var ;
   struct __anonstruct_var_70 var ;
   struct __anonstruct_str_offset_71 str_offset ;
   struct __anonstruct_fe_72 fe ;
   zend_class_entry *class_entry ;
};
typedef union _temp_variable temp_variable;
struct _zend_vm_stack {
   void **top ;
   void **end ;
   zend_vm_stack prev ;
};
struct _zend_free_op {
   zval *var ;
};
typedef struct _zend_free_op zend_free_op;
struct _zend_rsrc_list_entry {
   void *ptr ;
   int type ;
   int refcount ;
};
typedef struct _zend_rsrc_list_entry zend_rsrc_list_entry;
typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );
struct _zend_rsrc_list_dtors_entry {
   void (*list_dtor)(void * ) ;
   void (*plist_dtor)(void * ) ;
   void (*list_dtor_ex)(zend_rsrc_list_entry *rsrc ) ;
   void (*plist_dtor_ex)(zend_rsrc_list_entry *rsrc ) ;
   char const   *type_name ;
   int module_number ;
   int resource_id ;
   unsigned char type ;
};
typedef struct _zend_rsrc_list_dtors_entry zend_rsrc_list_dtors_entry;
struct _zend_function_entry {
   char const   *fname ;
   void (*handler)(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
   struct _zend_arg_info  const  *arg_info ;
   zend_uint num_args ;
   zend_uint flags ;
};
typedef struct _zend_function_entry zend_function_entry;
struct _zend_fcall_info {
   size_t size ;
   HashTable *function_table ;
   zval *function_name ;
   HashTable *symbol_table ;
   zval **retval_ptr_ptr ;
   zend_uint param_count ;
   zval ***params ;
   zval *object_ptr ;
   zend_bool no_separation ;
};
typedef struct _zend_fcall_info zend_fcall_info;
struct _zend_fcall_info_cache {
   zend_bool initialized ;
   zend_function *function_handler ;
   zend_class_entry *calling_scope ;
   zend_class_entry *called_scope ;
   zval *object_ptr ;
};
typedef struct _zend_fcall_info_cache zend_fcall_info_cache;
struct _zend_constant {
   zval value ;
   int flags ;
   char *name ;
   uint name_len ;
   int module_number ;
};
typedef struct _zend_constant zend_constant;
struct _zend_extension_version_info {
   int zend_extension_api_no ;
   char *build_id ;
};
typedef struct _zend_extension_version_info zend_extension_version_info;
struct _zend_extension;
typedef struct _zend_extension zend_extension;
typedef int (*startup_func_t)(zend_extension *extension );
typedef void (*shutdown_func_t)(zend_extension *extension );
typedef void (*activate_func_t)(void);
typedef void (*deactivate_func_t)(void);
typedef void (*message_handler_func_t)(int message , void *arg );
typedef void (*op_array_handler_func_t)(zend_op_array *op_array );
typedef void (*statement_handler_func_t)(zend_op_array *op_array );
typedef void (*fcall_begin_handler_func_t)(zend_op_array *op_array );
typedef void (*fcall_end_handler_func_t)(zend_op_array *op_array );
typedef void (*op_array_ctor_func_t)(zend_op_array *op_array );
typedef void (*op_array_dtor_func_t)(zend_op_array *op_array );
struct _zend_extension {
   char *name ;
   char *version ;
   char *author ;
   char *URL ;
   char *copyright ;
   int (*startup)(zend_extension *extension ) ;
   void (*shutdown)(zend_extension *extension ) ;
   void (*activate)(void) ;
   void (*deactivate)(void) ;
   void (*message_handler)(int message , void *arg ) ;
   void (*op_array_handler)(zend_op_array *op_array ) ;
   void (*statement_handler)(zend_op_array *op_array ) ;
   void (*fcall_begin_handler)(zend_op_array *op_array ) ;
   void (*fcall_end_handler)(zend_op_array *op_array ) ;
   void (*op_array_ctor)(zend_op_array *op_array ) ;
   void (*op_array_dtor)(zend_op_array *op_array ) ;
   int (*api_no_check)(int api_no ) ;
   int (*build_id_check)(char const   *build_id ) ;
   void *reserved3 ;
   void *reserved4 ;
   void *reserved5 ;
   void *reserved6 ;
   void *reserved7 ;
   void *reserved8 ;
   void *handle ;
   int resource_number ;
};
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
struct _zend_abstract_info {
   zend_function *afn[4] ;
   int cnt ;
   int ctor ;
};
typedef struct _zend_abstract_info zend_abstract_info;
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
  union __anonunion___u_52 __u ;

  {
  __u.__f = __x;
  return (__u.__i < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
__inline extern int __signbit(double __x ) 
{ 
  union __anonunion___u_53 __u ;

  {
  __u.__d = __x;
  return (__u.__i[1] < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
__inline extern int __signbitl(long double __x ) 
{ 
  union __anonunion___u_54 __u ;

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
  union __anonunion___n_55 __n ;

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
  union __anonunion_56 __constr_expr_0 ;

  {
  __constr_expr_0.__d = __x;
  return ((int )((((unsigned int )__constr_expr_0.__i[1] | 2148532223U) + 1U) >> 31));
}
}
extern  __attribute__((__nothrow__)) void *dlopen(char const   *__file ,
                                                  int __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) dlclose)(void *__handle ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(2))) dlsym)(void * __restrict  __handle ,
                                                                                    char const   * __restrict  __name ) ;
extern  __attribute__((__nothrow__)) char *dlerror(void) ;
extern char __attribute__((__visibility__("default")))  *zend_strndup(char const   *s ,
                                                                      unsigned int length )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_emalloc(size_t size )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_safe_emalloc(size_t nmemb ,
                                                                       size_t size ,
                                                                       size_t offset )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_safe_malloc(size_t nmemb ,
                                                                      size_t size ,
                                                                      size_t offset )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  _efree(void *ptr ) ;
extern void __attribute__((__visibility__("default")))  *_ecalloc(size_t nmemb ,
                                                                  size_t size )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_erealloc(void *ptr ,
                                                                   size_t size ,
                                                                   int allow_failure ) ;
extern void __attribute__((__visibility__("default")))  *_safe_erealloc(void *ptr ,
                                                                        size_t nmemb ,
                                                                        size_t size ,
                                                                        size_t offset ) ;
extern void __attribute__((__visibility__("default")))  *_safe_realloc(void *ptr ,
                                                                       size_t nmemb ,
                                                                       size_t size ,
                                                                       size_t offset ) ;
extern char __attribute__((__visibility__("default")))  *_estrdup(char const   *s )  __attribute__((__malloc__)) ;
extern char __attribute__((__visibility__("default")))  *_estrndup(char const   *s ,
                                                                   unsigned int length )  __attribute__((__malloc__)) ;
extern size_t __attribute__((__visibility__("default")))  _zend_mem_block_size(void *ptr ) ;
__inline static void *__zend_malloc(size_t len ) 
{ 
  void *tmp ;
  void *tmp___0 ;

  {
  tmp___0 = malloc(len);
  tmp = tmp___0;
  if (tmp) {
    return (tmp);
  } else {

  }
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Out of memory\n");
  exit(1);
}
}
__inline static void *__zend_calloc(size_t nmemb , size_t len ) 
{ 
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  tmp___0 = _safe_malloc(nmemb, len, (size_t )0);
  tmp = (void *)tmp___0;
  memset(tmp, 0, nmemb * len);
  return (tmp);
}
}
__inline static void *__zend_realloc(void *p , size_t len ) 
{ 


  {
  p = realloc(p, len);
  if (p) {
    return (p);
  } else {

  }
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Out of memory\n");
  exit(1);
}
}
extern int __attribute__((__visibility__("default")))  zend_set_memory_limit(size_t memory_limit ) ;
extern void __attribute__((__visibility__("default")))  start_memory_manager(void) ;
extern void __attribute__((__visibility__("default")))  shutdown_memory_manager(int silent ,
                                                                                int full_shutdown ) ;
extern int __attribute__((__visibility__("default")))  is_zend_mm(void) ;
extern size_t __attribute__((__visibility__("default")))  zend_memory_usage(int real_usage ) ;
extern size_t __attribute__((__visibility__("default")))  zend_memory_peak_usage(int real_usage ) ;
extern zend_mm_heap __attribute__((__visibility__("default")))  *zend_mm_startup(void) ;
extern void __attribute__((__visibility__("default")))  zend_mm_shutdown(zend_mm_heap *heap ,
                                                                         int full_shutdown ,
                                                                         int silent ) ;
extern void __attribute__((__visibility__("default")))  *_zend_mm_alloc(zend_mm_heap *heap ,
                                                                        size_t size )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  _zend_mm_free(zend_mm_heap *heap ,
                                                                      void *p ) ;
extern void __attribute__((__visibility__("default")))  *_zend_mm_realloc(zend_mm_heap *heap ,
                                                                          void *p ,
                                                                          size_t size ) ;
extern size_t __attribute__((__visibility__("default")))  _zend_mm_block_size(zend_mm_heap *heap ,
                                                                              void *p ) ;
extern zend_mm_heap __attribute__((__visibility__("default")))  *zend_mm_startup_ex(zend_mm_mem_handlers const   *handlers ,
                                                                                    size_t block_size ,
                                                                                    size_t reserve_size ,
                                                                                    int internal ,
                                                                                    void *params ) ;
extern zend_mm_heap __attribute__((__visibility__("default")))  *zend_mm_set_heap(zend_mm_heap *new_heap ) ;
extern zend_mm_storage __attribute__((__visibility__("default")))  *zend_mm_get_storage(zend_mm_heap *heap ) ;
extern void __attribute__((__visibility__("default")))  zend_mm_set_custom_handlers(zend_mm_heap *heap ,
                                                                                    void *(*_malloc)(size_t  ) ,
                                                                                    void (*_free)(void * ) ,
                                                                                    void *(*_realloc)(void * ,
                                                                                                      size_t  ) ) ;
extern char const __attribute__((__visibility__("default")))  *(*zend_new_interned_string)(char const   *str ,
                                                                                           int len ,
                                                                                           int free_src ) ;
extern void __attribute__((__visibility__("default")))  (*zend_interned_strings_snapshot)(void) ;
extern void __attribute__((__visibility__("default")))  (*zend_interned_strings_restore)(void) ;
extern void zend_interned_strings_init(void) ;
extern void zend_interned_strings_dtor(void) ;
static char const   long_min_digits[11]  = 
  {      (char const   )'2',      (char const   )'1',      (char const   )'4',      (char const   )'7', 
        (char const   )'4',      (char const   )'8',      (char const   )'3',      (char const   )'6', 
        (char const   )'4',      (char const   )'8',      (char const   )'\000'};
extern int __attribute__((__visibility__("default")))  _zend_hash_init(HashTable *ht ,
                                                                       uint nSize ,
                                                                       ulong (*pHashFunction)(char const   *arKey ,
                                                                                              uint nKeyLength ) ,
                                                                       void (*pDestructor)(void *pDest ) ,
                                                                       zend_bool persistent ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_init_ex(HashTable *ht ,
                                                                          uint nSize ,
                                                                          ulong (*pHashFunction)(char const   *arKey ,
                                                                                                 uint nKeyLength ) ,
                                                                          void (*pDestructor)(void *pDest ) ,
                                                                          zend_bool persistent ,
                                                                          zend_bool bApplyProtection ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_destroy(HashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_clean(HashTable *ht ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_add_or_update(HashTable *ht ,
                                                                                char const   *arKey ,
                                                                                uint nKeyLength ,
                                                                                void *pData ,
                                                                                uint nDataSize ,
                                                                                void **pDest ,
                                                                                int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_quick_add_or_update(HashTable *ht ,
                                                                                      char const   *arKey ,
                                                                                      uint nKeyLength ,
                                                                                      ulong h ,
                                                                                      void *pData ,
                                                                                      uint nDataSize ,
                                                                                      void **pDest ,
                                                                                      int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_index_update_or_next_insert(HashTable *ht ,
                                                                                              ulong h ,
                                                                                              void *pData ,
                                                                                              uint nDataSize ,
                                                                                              void **pDest ,
                                                                                              int flag ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_add_empty_element(HashTable *ht ,
                                                                                   char const   *arKey ,
                                                                                   uint nKeyLength ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_graceful_destroy(HashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_graceful_reverse_destroy(HashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_apply(HashTable *ht ,
                                                                        int (*apply_func)(void *pDest ) ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_apply_with_argument(HashTable *ht ,
                                                                                      int (*apply_func)(void *pDest ,
                                                                                                        void *argument ) ,
                                                                                      void * ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_apply_with_arguments(HashTable *ht ,
                                                                                       int (*apply_func)(void *pDest ,
                                                                                                         int num_args ,
                                                                                                         va_list args ,
                                                                                                         zend_hash_key *hash_key ) ,
                                                                                       int  
                                                                                       , ...) ;
extern void __attribute__((__visibility__("default")))  zend_hash_reverse_apply(HashTable *ht ,
                                                                                int (*apply_func)(void *pDest ) ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_del_key_or_index(HashTable *ht ,
                                                                                  char const   *arKey ,
                                                                                  uint nKeyLength ,
                                                                                  ulong h ,
                                                                                  int flag ) ;
extern ulong __attribute__((__visibility__("default")))  zend_get_hash_value(char const   *arKey ,
                                                                             uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_find(HashTable const   *ht ,
                                                                      char const   *arKey ,
                                                                      uint nKeyLength ,
                                                                      void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_quick_find(HashTable const   *ht ,
                                                                            char const   *arKey ,
                                                                            uint nKeyLength ,
                                                                            ulong h ,
                                                                            void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_index_find(HashTable const   *ht ,
                                                                            ulong h ,
                                                                            void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_exists(HashTable const   *ht ,
                                                                        char const   *arKey ,
                                                                        uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_quick_exists(HashTable const   *ht ,
                                                                              char const   *arKey ,
                                                                              uint nKeyLength ,
                                                                              ulong h ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_index_exists(HashTable const   *ht ,
                                                                              ulong h ) ;
extern ulong __attribute__((__visibility__("default")))  zend_hash_next_free_element(HashTable const   *ht ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_move_forward_ex(HashTable *ht ,
                                                                                 HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_move_backwards_ex(HashTable *ht ,
                                                                                   HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_current_key_ex(HashTable const   *ht ,
                                                                                    char **str_index ,
                                                                                    uint *str_length ,
                                                                                    ulong *num_index ,
                                                                                    zend_bool duplicate ,
                                                                                    HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_current_key_type_ex(HashTable *ht ,
                                                                                         HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_current_data_ex(HashTable *ht ,
                                                                                     void **pData ,
                                                                                     HashPosition *pos ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_internal_pointer_reset_ex(HashTable *ht ,
                                                                                            HashPosition *pos ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_internal_pointer_end_ex(HashTable *ht ,
                                                                                          HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_update_current_key_ex(HashTable *ht ,
                                                                                       int key_type ,
                                                                                       char const   *str_index ,
                                                                                       uint str_length ,
                                                                                       ulong num_index ,
                                                                                       int mode ,
                                                                                       HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_pointer(HashTable const   *ht ,
                                                                             HashPointer *ptr ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_set_pointer(HashTable *ht ,
                                                                             HashPointer const   *ptr ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_copy(HashTable *target ,
                                                                       HashTable *source ,
                                                                       void (*pCopyConstructor)(void *pElement ) ,
                                                                       void *tmp ,
                                                                       uint size ) ;
extern void __attribute__((__visibility__("default")))  _zend_hash_merge(HashTable *target ,
                                                                         HashTable *source ,
                                                                         void (*pCopyConstructor)(void *pElement ) ,
                                                                         void *tmp ,
                                                                         uint size ,
                                                                         int overwrite ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_merge_ex(HashTable *target ,
                                                                           HashTable *source ,
                                                                           void (*pCopyConstructor)(void *pElement ) ,
                                                                           uint size ,
                                                                           zend_bool (*pMergeSource)(HashTable *target_ht ,
                                                                                                     void *source_data ,
                                                                                                     zend_hash_key *hash_key ,
                                                                                                     void *pParam ) ,
                                                                           void *pParam ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_sort(HashTable *ht ,
                                                                      void (*sort_func)(void * ,
                                                                                        size_t  ,
                                                                                        size_t  ,
                                                                                        int (*)(void const   * ,
                                                                                                void const   * ) ) ,
                                                                      int (*compare_func)(void const   * ,
                                                                                          void const   * ) ,
                                                                      int renumber ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_compare(HashTable *ht1 ,
                                                                         HashTable *ht2 ,
                                                                         int (*compar)(void const   * ,
                                                                                       void const   * ) ,
                                                                         zend_bool ordered ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_minmax(HashTable const   *ht ,
                                                                        int (*compar)(void const   * ,
                                                                                      void const   * ) ,
                                                                        int flag ,
                                                                        void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_num_elements(HashTable const   *ht ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_rehash(HashTable *ht ) ;
__inline static ulong zend_inline_hash_func(char const   *arKey ,
                                            uint nKeyLength ) 
{ 
  register ulong hash ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;

  {
  hash = (ulong )5381;
  while (nKeyLength >= 8U) {
    tmp = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp;
    tmp___0 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___0;
    tmp___1 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___1;
    tmp___2 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___2;
    tmp___3 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___3;
    tmp___4 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___4;
    tmp___5 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___5;
    tmp___6 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___6;
    nKeyLength -= 8U;
  }
  switch (nKeyLength) {
  case 7U: 
  tmp___7 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___7;
  case 6U: 
  tmp___8 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___8;
  case 5U: 
  tmp___9 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___9;
  case 4U: 
  tmp___10 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___10;
  case 3U: 
  tmp___11 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___11;
  case 2U: 
  tmp___12 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___12;
  case 1U: 
  tmp___13 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___13;
  break;
  case 0U: 
  break;
  }
  return (hash);
}
}
extern ulong __attribute__((__visibility__("default")))  zend_hash_func(char const   *arKey ,
                                                                        uint nKeyLength ) ;
__inline static int zend_symtable_update(HashTable *ht , char const   *arKey ,
                                         uint nKeyLength , void *pData ,
                                         uint nDataSize , void **pDest ) 
{ 
  ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else
          if ((int const   )*tmp == 48) {
            if (nKeyLength > 2U) {
              break;
            } else {
              goto _L;
            }
          } else
          _L: /* CIL Label */ 
          if (end - tmp > 10) {
            break;
          } else
          if (end - tmp == 10) {
            if ((int const   )*tmp > 50) {
              break;
            } else {

            }
          } else {

          }
          idx = (ulong )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (ulong )(- ((long )idx));
            } else
            if (idx > 2147483647UL) {
              break;
            } else {

            }
            tmp___0 = _zend_hash_index_update_or_next_insert(ht, idx, pData,
                                                             nDataSize, pDest, 1);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize,
                                     pDest, 1);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_del(HashTable *ht , char const   *arKey ,
                                      uint nKeyLength ) 
{ 
  ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else
          if ((int const   )*tmp == 48) {
            if (nKeyLength > 2U) {
              break;
            } else {
              goto _L;
            }
          } else
          _L: /* CIL Label */ 
          if (end - tmp > 10) {
            break;
          } else
          if (end - tmp == 10) {
            if ((int const   )*tmp > 50) {
              break;
            } else {

            }
          } else {

          }
          idx = (ulong )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (ulong )(- ((long )idx));
            } else
            if (idx > 2147483647UL) {
              break;
            } else {

            }
            tmp___0 = zend_hash_del_key_or_index(ht,
                                                 (char const   *)((void *)0),
                                                 (uint )0, idx, 1);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_del_key_or_index(ht, arKey, nKeyLength, (ulong )0, 0);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_find(HashTable *ht , char const   *arKey ,
                                       uint nKeyLength , void **pData ) 
{ 
  ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else
          if ((int const   )*tmp == 48) {
            if (nKeyLength > 2U) {
              break;
            } else {
              goto _L;
            }
          } else
          _L: /* CIL Label */ 
          if (end - tmp > 10) {
            break;
          } else
          if (end - tmp == 10) {
            if ((int const   )*tmp > 50) {
              break;
            } else {

            }
          } else {

          }
          idx = (ulong )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (ulong )(- ((long )idx));
            } else
            if (idx > 2147483647UL) {
              break;
            } else {

            }
            tmp___0 = zend_hash_index_find((HashTable const   *)ht, idx, pData);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_find((HashTable const   *)ht, arKey, nKeyLength, pData);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_exists(HashTable *ht , char const   *arKey ,
                                         uint nKeyLength ) 
{ 
  ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else
          if ((int const   )*tmp == 48) {
            if (nKeyLength > 2U) {
              break;
            } else {
              goto _L;
            }
          } else
          _L: /* CIL Label */ 
          if (end - tmp > 10) {
            break;
          } else
          if (end - tmp == 10) {
            if ((int const   )*tmp > 50) {
              break;
            } else {

            }
          } else {

          }
          idx = (ulong )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (ulong )(- ((long )idx));
            } else
            if (idx > 2147483647UL) {
              break;
            } else {

            }
            tmp___0 = zend_hash_index_exists((HashTable const   *)ht, idx);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_exists((HashTable const   *)ht, arKey, nKeyLength);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_update_current_key_ex(HashTable *ht ,
                                                        char const   *arKey ,
                                                        uint nKeyLength ,
                                                        int mode ,
                                                        HashPosition *pos ) 
{ 
  ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else
          if ((int const   )*tmp == 48) {
            if (nKeyLength > 2U) {
              break;
            } else {
              goto _L;
            }
          } else
          _L: /* CIL Label */ 
          if (end - tmp > 10) {
            break;
          } else
          if (end - tmp == 10) {
            if ((int const   )*tmp > 50) {
              break;
            } else {

            }
          } else {

          }
          idx = (ulong )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (ulong )(- ((long )idx));
            } else
            if (idx > 2147483647UL) {
              break;
            } else {

            }
            tmp___0 = zend_hash_update_current_key_ex(ht, 2,
                                                      (char const   *)((void *)0),
                                                      (uint )0, idx, mode, pos);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, (ulong )0,
                                            mode, pos);
  return ((int )tmp___1);
}
}
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_init(TsHashTable *ht ,
                                                                          uint nSize ,
                                                                          ulong (*pHashFunction)(char const   *arKey ,
                                                                                                 uint nKeyLength ) ,
                                                                          void (*pDestructor)(void *pDest ) ,
                                                                          zend_bool persistent ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_init_ex(TsHashTable *ht ,
                                                                             uint nSize ,
                                                                             ulong (*pHashFunction)(char const   *arKey ,
                                                                                                    uint nKeyLength ) ,
                                                                             void (*pDestructor)(void *pDest ) ,
                                                                             zend_bool persistent ,
                                                                             zend_bool bApplyProtection ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_destroy(TsHashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_clean(TsHashTable *ht ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_add_or_update(TsHashTable *ht ,
                                                                                   char *arKey ,
                                                                                   uint nKeyLength ,
                                                                                   void *pData ,
                                                                                   uint nDataSize ,
                                                                                   void **pDest ,
                                                                                   int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_quick_add_or_update(TsHashTable *ht ,
                                                                                         char *arKey ,
                                                                                         uint nKeyLength ,
                                                                                         ulong h ,
                                                                                         void *pData ,
                                                                                         uint nDataSize ,
                                                                                         void **pDest ,
                                                                                         int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht ,
                                                                                                 ulong h ,
                                                                                                 void *pData ,
                                                                                                 uint nDataSize ,
                                                                                                 void **pDest ,
                                                                                                 int flag ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_add_empty_element(TsHashTable *ht ,
                                                                                      char *arKey ,
                                                                                      uint nKeyLength ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_graceful_destroy(TsHashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_apply(TsHashTable *ht ,
                                                                           int (*apply_func)(void *pDest ) ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_apply_with_argument(TsHashTable *ht ,
                                                                                         int (*apply_func)(void *pDest ,
                                                                                                           void *argument ) ,
                                                                                         void * ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_apply_with_arguments(TsHashTable *ht ,
                                                                                          int (*apply_func)(void *pDest ,
                                                                                                            int num_args ,
                                                                                                            va_list args ,
                                                                                                            zend_hash_key *hash_key ) ,
                                                                                          int  
                                                                                          , ...) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_reverse_apply(TsHashTable *ht ,
                                                                                   int (*apply_func)(void *pDest ) ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_del_key_or_index(TsHashTable *ht ,
                                                                                     char *arKey ,
                                                                                     uint nKeyLength ,
                                                                                     ulong h ,
                                                                                     int flag ) ;
extern ulong __attribute__((__visibility__("default")))  zend_ts_get_hash_value(TsHashTable *ht ,
                                                                                char *arKey ,
                                                                                uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_find(TsHashTable *ht ,
                                                                         char *arKey ,
                                                                         uint nKeyLength ,
                                                                         void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_quick_find(TsHashTable *ht ,
                                                                               char *arKey ,
                                                                               uint nKeyLength ,
                                                                               ulong h ,
                                                                               void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_index_find(TsHashTable *ht ,
                                                                               ulong h ,
                                                                               void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_exists(TsHashTable *ht ,
                                                                           char *arKey ,
                                                                           uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_index_exists(TsHashTable *ht ,
                                                                                 ulong h ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_copy(TsHashTable *target ,
                                                                          TsHashTable *source ,
                                                                          void (*pCopyConstructor)(void *pElement ) ,
                                                                          void *tmp ,
                                                                          uint size ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_copy_to_hash(HashTable *target ,
                                                                                  TsHashTable *source ,
                                                                                  void (*pCopyConstructor)(void *pElement ) ,
                                                                                  void *tmp ,
                                                                                  uint size ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_merge(TsHashTable *target ,
                                                                           TsHashTable *source ,
                                                                           void (*pCopyConstructor)(void *pElement ) ,
                                                                           void *tmp ,
                                                                           uint size ,
                                                                           int overwrite ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_merge_ex(TsHashTable *target ,
                                                                              TsHashTable *source ,
                                                                              void (*pCopyConstructor)(void *pElement ) ,
                                                                              uint size ,
                                                                              zend_bool (*pMergeSource)(HashTable *target_ht ,
                                                                                                        void *source_data ,
                                                                                                        zend_hash_key *hash_key ,
                                                                                                        void *pParam ) ,
                                                                              void *pParam ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_sort(TsHashTable *ht ,
                                                                         void (*sort_func)(void * ,
                                                                                           size_t  ,
                                                                                           size_t  ,
                                                                                           int (*)(void const   * ,
                                                                                                   void const   * ) ) ,
                                                                         int (*compare_func)(void const   * ,
                                                                                             void const   * ) ,
                                                                         int renumber ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_compare(TsHashTable *ht1 ,
                                                                            TsHashTable *ht2 ,
                                                                            int (*compar)(void const   * ,
                                                                                          void const   * ) ,
                                                                            zend_bool ordered ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_minmax(TsHashTable *ht ,
                                                                           int (*compar)(void const   * ,
                                                                                         void const   * ) ,
                                                                           int flag ,
                                                                           void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_num_elements(TsHashTable *ht ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_rehash(TsHashTable *ht ) ;
extern ulong __attribute__((__visibility__("default")))  zend_ts_hash_func(char *arKey ,
                                                                           uint nKeyLength ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_init(zend_llist *l ,
                                                                        size_t size ,
                                                                        void (*dtor)(void * ) ,
                                                                        unsigned char persistent ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_add_element(zend_llist *l ,
                                                                               void *element ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_prepend_element(zend_llist *l ,
                                                                                   void *element ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_del_element(zend_llist *l ,
                                                                               void *element ,
                                                                               int (*compare)(void *element1 ,
                                                                                              void *element2 ) ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_destroy(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_clean(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_remove_tail(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_copy(zend_llist *dst ,
                                                                        zend_llist *src ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply(zend_llist *l ,
                                                                         void (*func)(void * ) ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply_with_del(zend_llist *l ,
                                                                                  int (*func)(void *data ) ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply_with_argument(zend_llist *l ,
                                                                                       void (*func)(void *data ,
                                                                                                    void *arg ) ,
                                                                                       void *arg ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply_with_arguments(zend_llist *l ,
                                                                                        void (*func)(void *data ,
                                                                                                     int num_args ,
                                                                                                     va_list args ) ,
                                                                                        int num_args 
                                                                                        , ...) ;
extern int __attribute__((__visibility__("default")))  zend_llist_count(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_sort(zend_llist *l ,
                                                                        int (*comp_func)(zend_llist_element const   ** ,
                                                                                         zend_llist_element const   ** ) ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_first_ex(zend_llist *l ,
                                                                                 zend_llist_position *pos ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_last_ex(zend_llist *l ,
                                                                                zend_llist_position *pos ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_next_ex(zend_llist *l ,
                                                                                zend_llist_position *pos ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_prev_ex(zend_llist *l ,
                                                                                zend_llist_position *pos ) ;
extern  __attribute__((__noreturn__)) void zend_error_noreturn(int type ,
                                                               char const   *format 
                                                               , ...) ;
extern zend_object_handlers __attribute__((__visibility__("default")))  std_object_handlers ;
extern union _zend_function  __attribute__((__visibility__("default"))) *zend_std_get_static_method(zend_class_entry *ce ,
                                                                                                    char const   *function_name_strval ,
                                                                                                    int function_name_strlen ,
                                                                                                    struct _zend_literal  const  *key ) ;
extern zval __attribute__((__visibility__("default")))  **zend_std_get_static_property(zend_class_entry *ce ,
                                                                                       char const   *property_name ,
                                                                                       int property_name_len ,
                                                                                       zend_bool silent ,
                                                                                       struct _zend_literal  const  *key ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_std_unset_static_property(zend_class_entry *ce ,
                                                                                            char const   *property_name ,
                                                                                            int property_name_len ,
                                                                                            struct _zend_literal  const  *key ) ;
extern union _zend_function  __attribute__((__visibility__("default"))) *zend_std_get_constructor(zval *object ) ;
extern struct _zend_property_info  __attribute__((__visibility__("default"))) *zend_get_property_info(zend_class_entry *ce ,
                                                                                                      zval *member ,
                                                                                                      int silent ) ;
extern HashTable __attribute__((__visibility__("default")))  *zend_std_get_properties(zval *object ) ;
extern HashTable __attribute__((__visibility__("default")))  *zend_std_get_debug_info(zval *object ,
                                                                                      int *is_temp ) ;
extern int __attribute__((__visibility__("default")))  zend_std_cast_object_tostring(zval *readobj ,
                                                                                     zval *writeobj ,
                                                                                     int type ) ;
extern void __attribute__((__visibility__("default")))  zend_std_write_property(zval *object ,
                                                                                zval *member ,
                                                                                zval *value ,
                                                                                struct _zend_literal  const  *key ) ;
extern void __attribute__((__visibility__("default")))  rebuild_object_properties(zend_object *zobj ) ;
extern int __attribute__((__visibility__("default")))  zend_check_private(union _zend_function *fbc ,
                                                                          zend_class_entry *ce ,
                                                                          char *function_name_strval ,
                                                                          int function_name_strlen ) ;
extern int __attribute__((__visibility__("default")))  zend_check_protected(zend_class_entry *ce ,
                                                                            zend_class_entry *scope ) ;
extern int __attribute__((__visibility__("default")))  zend_check_property_access(zend_object *zobj ,
                                                                                  char const   *prop_info_name ,
                                                                                  int prop_info_name_len ) ;
extern void __attribute__((__visibility__("default")))  zend_std_call_user_call(int ht ,
                                                                                zval *return_value ,
                                                                                zval **return_value_ptr ,
                                                                                zval *this_ptr ,
                                                                                int return_value_used ) ;
__inline static zend_uint ( __attribute__((__always_inline__)) zval_refcount_p)(zval *pz ) 
{ 


  {
  return (pz->refcount__gc);
}
}
__inline static zend_uint ( __attribute__((__always_inline__)) zval_set_refcount_p)(zval *pz ,
                                                                                    zend_uint rc ) 
{ 
  zend_uint tmp ;

  {
  tmp = rc;
  pz->refcount__gc = tmp;
  return (tmp);
}
}
__inline static zend_uint ( __attribute__((__always_inline__)) zval_addref_p)(zval *pz ) 
{ 


  {
  (pz->refcount__gc) ++;
  return (pz->refcount__gc);
}
}
__inline static zend_uint ( __attribute__((__always_inline__)) zval_delref_p)(zval *pz ) 
{ 


  {
  (pz->refcount__gc) --;
  return (pz->refcount__gc);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_isref_p)(zval *pz ) 
{ 


  {
  return (pz->is_ref__gc);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_set_isref_p)(zval *pz ) 
{ 
  zend_uchar tmp ;

  {
  tmp = (zend_uchar )1;
  pz->is_ref__gc = tmp;
  return (tmp);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_unset_isref_p)(zval *pz ) 
{ 
  zend_uchar tmp ;

  {
  tmp = (zend_uchar )0;
  pz->is_ref__gc = tmp;
  return (tmp);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_set_isref_to_p)(zval *pz ,
                                                                                    zend_bool isref ) 
{ 
  zend_uchar tmp ;

  {
  tmp = isref;
  pz->is_ref__gc = tmp;
  return (tmp);
}
}
extern enum zend_object_iterator_kind  __attribute__((__visibility__("default"))) zend_iterator_unwrap(zval *array_ptr ,
                                                                                                       zend_object_iterator **iter ) ;
extern zval __attribute__((__visibility__("default")))  *zend_iterator_wrap(zend_object_iterator *iter ) ;
extern void __attribute__((__visibility__("default")))  zend_register_iterator_wrapper(void) ;
extern int __attribute__((__visibility__("default")))  zend_stream_open(char const   *filename ,
                                                                        zend_file_handle *handle ) ;
extern int __attribute__((__visibility__("default")))  zend_stream_fixup(zend_file_handle *file_handle ,
                                                                         char **buf ,
                                                                         size_t *len ) ;
extern void __attribute__((__visibility__("default")))  zend_file_handle_dtor(zend_file_handle *fh ) ;
extern int __attribute__((__visibility__("default")))  zend_compare_file_handles(zend_file_handle *fh1 ,
                                                                                 zend_file_handle *fh2 ) ;
extern int zend_startup(zend_utility_functions *utility_functions ,
                        char **extensions ) ;
extern void zend_shutdown(void) ;
extern void zend_register_standard_ini_entries(void) ;
extern void zend_post_startup(void) ;
extern void zend_set_utility_values(zend_utility_values *utility_values ) ;
extern void __attribute__((__visibility__("default")))  _zend_bailout(char *filename ,
                                                                      uint lineno ) ;
extern char __attribute__((__visibility__("default")))  *get_zend_version(void) ;
extern void __attribute__((__visibility__("default")))  zend_make_printable_zval(zval *expr ,
                                                                                 zval *expr_copy ,
                                                                                 int *use_copy ) ;
extern int __attribute__((__visibility__("default")))  zend_print_zval(zval *expr ,
                                                                       int indent ) ;
extern int __attribute__((__visibility__("default")))  zend_print_zval_ex(int (*write_func)(char const   *str ,
                                                                                            uint str_length ) ,
                                                                          zval *expr ,
                                                                          int indent ) ;
extern void __attribute__((__visibility__("default")))  zend_print_zval_r(zval *expr ,
                                                                          int indent ) ;
extern void __attribute__((__visibility__("default")))  zend_print_flat_zval_r(zval *expr ) ;
extern void __attribute__((__visibility__("default")))  zend_print_zval_r_ex(int (*write_func)(char const   *str ,
                                                                                               uint str_length ) ,
                                                                             zval *expr ,
                                                                             int indent ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  zend_output_debug_string)(zend_bool trigger_break ,
                                                                                                            char const   *format 
                                                                                                            , ...) ;
extern void zend_activate(void) ;
extern void zend_deactivate(void) ;
extern void zend_call_destructors(void) ;
extern void zend_activate_modules(void) ;
extern void zend_deactivate_modules(void) ;
extern void zend_post_deactivate_modules(void) ;
extern void __attribute__((__visibility__("default")))  free_estring(char **str_p ) ;
extern int __attribute__((__visibility__("default")))  ( /* format attribute */  (*zend_printf))(char const   *format 
                                                                                                 , ...) ;
extern int (* __attribute__((__visibility__("default"))) zend_write)(char const   *str ,
                                                                     uint str_length ) ;
extern FILE __attribute__((__visibility__("default")))  *(*zend_fopen)(char const   *filename ,
                                                                       char **opened_path ) ;
extern void __attribute__((__visibility__("default")))  (*zend_ticks_function)(int ticks ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  (*zend_error_cb))(int type ,
                                                                                                    char const   *error_filename ,
                                                                                                    uint const   error_lineno ,
                                                                                                    char const   *format ,
                                                                                                    va_list args ) ;
extern void __attribute__((__visibility__("default")))  (*zend_on_timeout)(int seconds ) ;
extern int __attribute__((__visibility__("default")))  (*zend_stream_open_function)(char const   *filename ,
                                                                                    zend_file_handle *handle ) ;
extern int (*zend_vspprintf)(char **pbuf , size_t max_len ,
                             char const   *format , va_list ap ) ;
extern char __attribute__((__visibility__("default")))  *(*zend_getenv)(char *name ,
                                                                        size_t name_len ) ;
extern char __attribute__((__visibility__("default")))  *(*zend_resolve_path)(char const   *filename ,
                                                                              int filename_len ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  zend_error)(int type ,
                                                                                              char const   *format 
                                                                                              , ...) ;
extern void zenderror(char const   *error ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_standard_class_def ;
extern zend_utility_values __attribute__((__visibility__("default")))  zend_uv ;
extern zval __attribute__((__visibility__("default")))  zval_used_for_init ;
extern zend_signal_globals_t __attribute__((__visibility__("default")))  zend_signal_globals ;
extern void zend_signal_handler_defer(int signo , siginfo_t *siginfo ,
                                      void *context ) ;
extern void __attribute__((__visibility__("default")))  zend_signal_handler_unblock() ;
extern void zend_signal_activate(void) ;
extern void zend_signal_deactivate(void) ;
extern void zend_signal_startup() ;
extern void zend_signal_shutdown(void) ;
extern int __attribute__((__visibility__("default")))  zend_signal(int signo ,
                                                                   void (*handler)(int  ) ) ;
extern int __attribute__((__visibility__("default")))  zend_sigaction(int signo ,
                                                                      struct sigaction  const  *act ,
                                                                      struct sigaction *oldact ) ;
extern void __attribute__((__visibility__("default")))  zend_message_dispatcher(long message ,
                                                                                void const   *data ) ;
extern int __attribute__((__visibility__("default")))  zend_get_configuration_directive(char const   *name ,
                                                                                        uint name_length ,
                                                                                        zval *contents ) ;
extern zend_gc_globals __attribute__((__visibility__("default")))  gc_globals ;
extern int __attribute__((__visibility__("default")))  gc_collect_cycles(void) ;
extern void __attribute__((__visibility__("default")))  gc_zval_possible_root(zval *zv ) ;
extern void __attribute__((__visibility__("default")))  gc_zobj_possible_root(zval *zv ) ;
extern void __attribute__((__visibility__("default")))  gc_remove_zval_from_buffer(zval *zv ) ;
extern void __attribute__((__visibility__("default")))  gc_globals_ctor(void) ;
extern void __attribute__((__visibility__("default")))  gc_globals_dtor(void) ;
extern void __attribute__((__visibility__("default")))  gc_init(void) ;
extern void __attribute__((__visibility__("default")))  gc_reset(void) ;
__inline static void ( __attribute__((__always_inline__)) gc_zval_check_possible_root)(zval *z ) 
{ 


  {
  if ((int )z->type == 4) {
    gc_zval_possible_root(z);
  } else
  if ((int )z->type == 5) {
    gc_zval_possible_root(z);
  } else {

  }
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) gc_remove_from_buffer)(gc_root_buffer *root ) 
{ 


  {
  (root->next)->prev = root->prev;
  (root->prev)->next = root->next;
  root->prev = gc_globals.unused;
  gc_globals.unused = root;
  return;
}
}
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
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
extern void __attribute__((__visibility__("default")))  zend_freedtoa(char *s ) ;
extern char __attribute__((__visibility__("default")))  *zend_dtoa(double _d ,
                                                                   int mode ,
                                                                   int ndigits ,
                                                                   int *decpt ,
                                                                   int *sign ,
                                                                   char **rve ) ;
extern double __attribute__((__visibility__("default")))  zend_strtod(char const   *s00 ,
                                                                      char const   **se ) ;
extern double __attribute__((__visibility__("default")))  zend_hex_strtod(char const   *str ,
                                                                          char const   **endptr ) ;
extern double __attribute__((__visibility__("default")))  zend_oct_strtod(char const   *str ,
                                                                          char const   **endptr ) ;
extern double __attribute__((__visibility__("default")))  zend_bin_strtod(char const   *str ,
                                                                          char const   **endptr ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_strtod(void) ;
extern int __attribute__((__visibility__("default")))  zend_shutdown_strtod(void) ;
extern int __attribute__((__visibility__("default")))  add_function(zval *result ,
                                                                    zval *op1 ,
                                                                    zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  sub_function(zval *result ,
                                                                    zval *op1 ,
                                                                    zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  mul_function(zval *result ,
                                                                    zval *op1 ,
                                                                    zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  div_function(zval *result ,
                                                                    zval *op1 ,
                                                                    zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  mod_function(zval *result ,
                                                                    zval *op1 ,
                                                                    zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  boolean_xor_function(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  boolean_not_function(zval *result ,
                                                                            zval *op1 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_not_function(zval *result ,
                                                                            zval *op1 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_or_function(zval *result ,
                                                                           zval *op1 ,
                                                                           zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_and_function(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_xor_function(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  shift_left_function(zval *result ,
                                                                           zval *op1 ,
                                                                           zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  shift_right_function(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  concat_function(zval *result ,
                                                                       zval *op1 ,
                                                                       zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_equal_function(zval *result ,
                                                                         zval *op1 ,
                                                                         zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_identical_function(zval *result ,
                                                                             zval *op1 ,
                                                                             zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_not_identical_function(zval *result ,
                                                                                 zval *op1 ,
                                                                                 zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_not_equal_function(zval *result ,
                                                                             zval *op1 ,
                                                                             zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_smaller_function(zval *result ,
                                                                           zval *op1 ,
                                                                           zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_smaller_or_equal_function(zval *result ,
                                                                                    zval *op1 ,
                                                                                    zval *op2 ) ;
extern zend_bool __attribute__((__visibility__("default")))  instanceof_function_ex(zend_class_entry const   *instance_ce ,
                                                                                    zend_class_entry const   *ce ,
                                                                                    zend_bool interfaces_only ) ;
extern zend_bool __attribute__((__visibility__("default")))  instanceof_function(zend_class_entry const   *instance_ce ,
                                                                                 zend_class_entry const   *ce ) ;
__inline static long ( __attribute__((__always_inline__)) zend_dval_to_lval)(double d ) 
{ 


  {
  if (d > (double )2147483647L) {
    return ((long )((unsigned long )((zend_long64 )d)));
  } else
  if (d < (double )(-0x7FFFFFFF-1)) {
    return ((long )((unsigned long )((zend_long64 )d)));
  } else {

  }
  return ((long )d);
}
}
__inline static zend_uchar is_numeric_string(char const   *str , int length ,
                                             long *lval , double *dval ,
                                             int allow_errors ) 
{ 
  char const   *ptr ;
  int base ;
  int digits ;
  int dp_or_e ;
  double local_dval ;
  zend_uchar type ;
  char const   *e ;
  char const   *tmp ;
  double __attribute__((__visibility__("default")))  tmp___0 ;
  double __attribute__((__visibility__("default")))  tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  int cmp ;
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
  double __attribute__((__visibility__("default")))  tmp___11 ;

  {
  base = 10;
  digits = 0;
  dp_or_e = 0;
  if (! length) {
    return ((zend_uchar )0);
  } else {

  }
  while (1) {
    if ((int const   )*str == 32) {

    } else
    if ((int const   )*str == 9) {

    } else
    if ((int const   )*str == 10) {

    } else
    if ((int const   )*str == 13) {

    } else
    if ((int const   )*str == 11) {

    } else
    if ((int const   )*str == 12) {

    } else {
      break;
    }
    str ++;
    length --;
  }
  ptr = str;
  if ((int const   )*ptr == 45) {
    ptr ++;
  } else
  if ((int const   )*ptr == 43) {
    ptr ++;
  } else {

  }
  if ((int const   )*ptr >= 48) {
    if ((int const   )*ptr <= 57) {
      if (length > 2) {
        if ((int const   )*str == 48) {
          if ((int const   )*(str + 1) == 120) {
            base = 16;
            ptr += 2;
          } else
          if ((int const   )*(str + 1) == 88) {
            base = 16;
            ptr += 2;
          } else {

          }
        } else {

        }
      } else {

      }
      while ((int const   )*ptr == 48) {
        ptr ++;
      }
      type = (zend_uchar )1;
      while (1) {
        if (digits >= 11) {
          if (dval) {
            break;
          } else
          if (allow_errors == 1) {
            break;
          } else {

          }
        } else {

        }
        check_digits: 
        if ((int const   )*ptr >= 48) {
          if ((int const   )*ptr <= 57) {
            goto __Cont;
          } else {
            goto _L___3;
          }
        } else
        _L___3: /* CIL Label */ 
        if (base == 16) {
          if ((int const   )*ptr >= 65) {
            if ((int const   )*ptr <= 70) {
              goto __Cont;
            } else {
              goto _L___2;
            }
          } else
          _L___2: /* CIL Label */ 
          if ((int const   )*ptr >= 97) {
            if ((int const   )*ptr <= 102) {
              goto __Cont;
            } else {
              goto _L___1;
            }
          } else {
            goto _L___1;
          }
        } else
        _L___1: /* CIL Label */ 
        if (base == 10) {
          if ((int const   )*ptr == 46) {
            if (dp_or_e < 1) {
              goto process_double;
            } else {
              goto _L___0;
            }
          } else
          _L___0: /* CIL Label */ 
          if ((int const   )*ptr == 101) {
            goto _L;
          } else
          if ((int const   )*ptr == 69) {
            _L: /* CIL Label */ 
            if (dp_or_e < 2) {
              e = ptr + 1;
              if ((int const   )*e == 45) {
                tmp = e;
                e ++;
                ptr = tmp;
              } else
              if ((int const   )*e == 43) {
                tmp = e;
                e ++;
                ptr = tmp;
              } else {

              }
              if ((int const   )*e >= 48) {
                if ((int const   )*e <= 57) {
                  goto process_double;
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
        break;
        __Cont: /* CIL Label */ 
        digits ++;
        ptr ++;
      }
      if (base == 10) {
        if (digits >= 11) {
          dp_or_e = -1;
          goto process_double;
        } else {

        }
      } else
      if (digits < 8) {

      } else
      if (digits == 8) {
        if ((int const   )*(ptr + - digits) <= 55) {

        } else {
          goto _L___4;
        }
      } else {
        _L___4: /* CIL Label */ 
        if (dval) {
          tmp___0 = zend_hex_strtod(str, & ptr);
          local_dval = (double )tmp___0;
        } else {

        }
        type = (zend_uchar )2;
      }
    } else {
      goto _L___5;
    }
  } else
  _L___5: /* CIL Label */ 
  if ((int const   )*ptr == 46) {
    if ((int const   )*(ptr + 1) >= 48) {
      if ((int const   )*(ptr + 1) <= 57) {
        process_double: 
        type = (zend_uchar )2;
        if (dval) {
          tmp___1 = zend_strtod(str, & ptr);
          local_dval = (double )tmp___1;
        } else
        if (allow_errors != 1) {
          if (dp_or_e != -1) {
            tmp___3 = ptr;
            ptr ++;
            if ((int const   )*tmp___3 == 46) {
              dp_or_e = 1;
            } else {
              dp_or_e = 2;
            }
            goto check_digits;
          } else {

          }
        } else {

        }
      } else {
        return ((zend_uchar )0);
      }
    } else {
      return ((zend_uchar )0);
    }
  } else {
    return ((zend_uchar )0);
  }
  if ((unsigned int )ptr != (unsigned int )(str + length)) {
    if (! allow_errors) {
      return ((zend_uchar )0);
    } else {

    }
    if (allow_errors == -1) {
      zend_error(1 << 3L, "A non well formed numeric value encountered");
    } else {

    }
  } else {

  }
  if ((int )type == 1) {
    if (digits == 10) {
      if (0) {
        __s1_len = strlen(ptr + - digits);
        __s2_len = strlen(long_min_digits);
        if (! ((size_t )((void const   *)((ptr + - digits) + 1)) - (size_t )((void const   *)(ptr + - digits)) == 1U)) {
          goto _L___7;
        } else
        if (__s1_len >= 4U) {
          _L___7: /* CIL Label */ 
          if (! ((size_t )((void const   *)(long_min_digits + 1)) - (size_t )((void const   *)(long_min_digits)) == 1U)) {
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
          tmp___5 = __builtin_strcmp(ptr + - digits, long_min_digits);
          tmp___9 = tmp___5;
        } else {
          tmp___8 = __builtin_strcmp(ptr + - digits, long_min_digits);
          tmp___9 = tmp___8;
        }
      } else {
        tmp___8 = __builtin_strcmp(ptr + - digits, long_min_digits);
        tmp___9 = tmp___8;
      }
      cmp = tmp___9;
      if (cmp < 0) {

      } else
      if (cmp == 0) {
        if ((int const   )*str == 45) {

        } else {
          goto _L___8;
        }
      } else {
        _L___8: /* CIL Label */ 
        if (dval) {
          tmp___11 = zend_strtod(str, (char const   **)((void *)0));
          *dval = (double )tmp___11;
        } else {

        }
        return ((zend_uchar )2);
      }
    } else {

    }
    if (lval) {
      *lval = strtol((char const   */* __restrict  */)str,
                     (char **/* __restrict  */)((void *)0), base);
    } else {

    }
    return ((zend_uchar )1);
  } else {
    if (dval) {
      *dval = local_dval;
    } else {

    }
    return ((zend_uchar )2);
  }
}
}
__inline static char *zend_memnstr(char *haystack , char *needle ,
                                   int needle_len , char *end ) 
{ 
  char *p ;
  char ne ;
  void *tmp ;
  int tmp___0 ;
  void *tmp___1 ;

  {
  p = haystack;
  ne = *(needle + (needle_len - 1));
  if (needle_len == 1) {
    tmp = memchr((void const   *)p, (int )*needle, (size_t )(end - p));
    return ((char *)tmp);
  } else {

  }
  if (needle_len > end - haystack) {
    return ((char *)((void *)0));
  } else {

  }
  end -= needle_len;
  while ((unsigned int )p <= (unsigned int )end) {
    tmp___1 = memchr((void const   *)p, (int )*needle, (size_t )((end - p) + 1));
    p = (char *)tmp___1;
    if (p) {
      if ((int )ne == (int )*(p + (needle_len - 1))) {
        tmp___0 = memcmp((void const   *)needle, (void const   *)p,
                         (size_t )(needle_len - 1));
        if (tmp___0) {

        } else {
          return (p);
        }
      } else {

      }
    } else {

    }
    if ((unsigned int )p == (unsigned int )((void *)0)) {
      return ((char *)((void *)0));
    } else {

    }
    p ++;
  }
  return ((char *)((void *)0));
}
}
__inline static void const   *zend_memrchr(void const   *s , int c , size_t n ) 
{ 
  register unsigned char const   *e ;

  {
  if (n <= 0U) {
    return ((void const   *)((void *)0));
  } else {

  }
  e = ((unsigned char const   *)s + n) - 1;
  while ((unsigned int )e >= (unsigned int )((unsigned char const   *)s)) {
    if ((int const   )*e == (int const   )((unsigned char const   )c)) {
      return ((void const   *)e);
    } else {

    }
    e --;
  }
  return ((void const   *)((void *)0));
}
}
extern int __attribute__((__visibility__("default")))  increment_function(zval *op1 ) ;
extern int __attribute__((__visibility__("default")))  decrement_function(zval *op2 ) ;
extern void __attribute__((__visibility__("default")))  convert_scalar_to_number(zval *op ) ;
extern void __attribute__((__visibility__("default")))  _convert_to_string(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_long(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_double(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_long_base(zval *op ,
                                                                             int base ) ;
extern void __attribute__((__visibility__("default")))  convert_to_null(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_boolean(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_array(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_object(zval *op ) ;
extern void __attribute__((__visibility__("default")))  multi_convert_to_long_ex(int argc 
                                                                                 , ...) ;
extern void __attribute__((__visibility__("default")))  multi_convert_to_double_ex(int argc 
                                                                                   , ...) ;
extern void __attribute__((__visibility__("default")))  multi_convert_to_string_ex(int argc 
                                                                                   , ...) ;
extern int __attribute__((__visibility__("default")))  add_char_to_string(zval *result ,
                                                                          zval const   *op1 ,
                                                                          zval const   *op2 ) ;
extern int __attribute__((__visibility__("default")))  add_string_to_string(zval *result ,
                                                                            zval const   *op1 ,
                                                                            zval const   *op2 ) ;
extern double __attribute__((__visibility__("default")))  zend_string_to_double(char const   *number ,
                                                                                zend_uint length ) ;
extern int __attribute__((__visibility__("default")))  zval_is_true(zval *op ) ;
extern int __attribute__((__visibility__("default")))  compare_function(zval *result ,
                                                                        zval *op1 ,
                                                                        zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  numeric_compare_function(zval *result ,
                                                                                zval *op1 ,
                                                                                zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_compare_function_ex(zval *result ,
                                                                                  zval *op1 ,
                                                                                  zval *op2 ,
                                                                                  zend_bool case_insensitive ) ;
extern int __attribute__((__visibility__("default")))  string_compare_function(zval *result ,
                                                                               zval *op1 ,
                                                                               zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_case_compare_function(zval *result ,
                                                                                    zval *op1 ,
                                                                                    zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_locale_compare_function(zval *result ,
                                                                                      zval *op1 ,
                                                                                      zval *op2 ) ;
extern void __attribute__((__visibility__("default")))  zend_str_tolower(char *str ,
                                                                         unsigned int length ) ;
extern char __attribute__((__visibility__("default")))  *zend_str_tolower_copy(char *dest ,
                                                                               char const   *source ,
                                                                               unsigned int length ) ;
extern char __attribute__((__visibility__("default")))  *zend_str_tolower_dup(char const   *source ,
                                                                              unsigned int length ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strcmp(zval *s1 ,
                                                                               zval *s2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strncmp(zval *s1 ,
                                                                                zval *s2 ,
                                                                                zval *s3 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strcasecmp(zval *s1 ,
                                                                                   zval *s2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strncasecmp(zval *s1 ,
                                                                                    zval *s2 ,
                                                                                    zval *s3 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strcmp(char const   *s1 ,
                                                                          uint len1 ,
                                                                          char const   *s2 ,
                                                                          uint len2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strncmp(char const   *s1 ,
                                                                           uint len1 ,
                                                                           char const   *s2 ,
                                                                           uint len2 ,
                                                                           uint length ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strcasecmp(char const   *s1 ,
                                                                              uint len1 ,
                                                                              char const   *s2 ,
                                                                              uint len2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strncasecmp(char const   *s1 ,
                                                                               uint len1 ,
                                                                               char const   *s2 ,
                                                                               uint len2 ,
                                                                               uint length ) ;
extern void __attribute__((__visibility__("default")))  zendi_smart_strcmp(zval *result ,
                                                                           zval *s1 ,
                                                                           zval *s2 ) ;
extern void __attribute__((__visibility__("default")))  zend_compare_symbol_tables(zval *result ,
                                                                                   HashTable *ht1 ,
                                                                                   HashTable *ht2 ) ;
extern void __attribute__((__visibility__("default")))  zend_compare_arrays(zval *result ,
                                                                            zval *a1 ,
                                                                            zval *a2 ) ;
extern void __attribute__((__visibility__("default")))  zend_compare_objects(zval *result ,
                                                                             zval *o1 ,
                                                                             zval *o2 ) ;
extern int __attribute__((__visibility__("default")))  zend_atoi(char const   *str ,
                                                                 int str_len ) ;
extern long __attribute__((__visibility__("default")))  zend_atol(char const   *str ,
                                                                  int str_len ) ;
extern void __attribute__((__visibility__("default")))  zend_locale_sprintf_double(zval *op ) ;
__inline static int ( __attribute__((__always_inline__)) fast_increment_function)(zval *op1 ) 
{ 
  long tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp) {
    __asm__  ("incl (%0)\n\t"
              "jno  0f\n\t"
              "movl $0x0, (%0)\n\t"
              "movl $0x41e00000, 0x4(%0)\n\t"
              "movb $0x2,0xc(%0)\n"
              "0:": : "r" (op1));
    return (0);
  } else {

  }
  tmp___0 = increment_function(op1);
  return ((int )tmp___0);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_decrement_function)(zval *op1 ) 
{ 
  long tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp) {
    __asm__  ("decl (%0)\n\t"
              "jno  0f\n\t"
              "movl $0x00200000, (%0)\n\t"
              "movl $0xc1e00000, 0x4(%0)\n\t"
              "movb $0x2,0xc(%0)\n"
              "0:": : "r" (op1));
    return (0);
  } else {

  }
  tmp___0 = decrement_function(op1);
  return ((int )tmp___0);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_add_function)(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      __asm__  ("movl\t(%1), %%eax\n\t"
                "addl   (%2), %%eax\n\t"
                "jo     0f\n\t"
                "movl   %%eax, (%0)\n\t"
                "movb   $0x1,0xc(%0)\n\t"
                "jmp    1f\n"
                "0:\n\t"
                "fildl\t(%1)\n\t"
                "fildl\t(%2)\n\t"
                "faddp\t%%st, %%st(1)\n\t"
                "movb   $0x2,0xc(%0)\n\t"
                "fstpl\t(%0)\n"
                "1:": : "r" (result), "r" (op1), "r" (op2): "eax");
      return (0);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        result->value.dval = (double )op1->value.lval + op2->value.dval;
        result->type = (zend_uchar )2;
        return (0);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        result->value.dval = op1->value.dval + op2->value.dval;
        result->type = (zend_uchar )2;
        return (0);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          result->value.dval = op1->value.dval + (double )op2->value.lval;
          result->type = (zend_uchar )2;
          return (0);
        } else {

        }
      }
    } else {

    }
  }
  tmp___5 = add_function(result, op1, op2);
  return ((int )tmp___5);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_sub_function)(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      __asm__  ("movl\t(%1), %%eax\n\t"
                "subl   (%2), %%eax\n\t"
                "jo     0f\n\t"
                "movl   %%eax, (%0)\n\t"
                "movb   $0x1,0xc(%0)\n\t"
                "jmp    1f\n"
                "0:\n\t"
                "fildl\t(%2)\n\t"
                "fildl\t(%1)\n\t"
                "fsubp\t%%st, %%st(1)\n\t"
                "movb   $0x2,0xc(%0)\n\t"
                "fstpl\t(%0)\n"
                "1:": : "r" (result), "r" (op1), "r" (op2): "eax");
      return (0);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        result->value.dval = (double )op1->value.lval - op2->value.dval;
        result->type = (zend_uchar )2;
        return (0);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        result->value.dval = op1->value.dval - op2->value.dval;
        result->type = (zend_uchar )2;
        return (0);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          result->value.dval = op1->value.dval - (double )op2->value.lval;
          result->type = (zend_uchar )2;
          return (0);
        } else {

        }
      }
    } else {

    }
  }
  tmp___5 = sub_function(result, op1, op2);
  return ((int )tmp___5);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_mul_function)(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) 
{ 
  long overflow ;
  long __tmpvar ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      while (1) {
        __asm__  ("imul %3,%0\n"
                  "adc $0,%1": "=r" (__tmpvar),
                  "=r" (overflow): "0" (op1->value.lval), "r" (op2->value.lval),
                  "1" (0));
        if (overflow) {
          result->value.dval = (double )op1->value.lval * (double )op2->value.lval;
        } else {
          result->value.lval = __tmpvar;
        }
        break;
      }
      if (overflow) {
        result->type = (zend_uchar )2;
      } else {
        result->type = (zend_uchar )1;
      }
      return (0);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        result->value.dval = (double )op1->value.lval * op2->value.dval;
        result->type = (zend_uchar )2;
        return (0);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        result->value.dval = op1->value.dval * op2->value.dval;
        result->type = (zend_uchar )2;
        return (0);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          result->value.dval = op1->value.dval * (double )op2->value.lval;
          result->type = (zend_uchar )2;
          return (0);
        } else {

        }
      }
    } else {

    }
  }
  tmp___5 = mul_function(result, op1, op2);
  return ((int )tmp___5);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_div_function)(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) 
{ 
  long tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  long tmp___10 ;
  long tmp___11 ;
  int __attribute__((__visibility__("default")))  tmp___12 ;

  {
  tmp___11 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___11) {
    goto _L;
  } else {
    _L: /* CIL Label */ 
    tmp___10 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___10) {

    } else {

    }
  }
  tmp___12 = div_function(result, op1, op2);
  return ((int )tmp___12);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_mod_function)(zval *result ,
                                                                            zval *op1 ,
                                                                            zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  tmp___2 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___2) {
    tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___1) {
      tmp___0 = __builtin_expect((long )(op2->value.lval == 0L), 0L);
      if (tmp___0) {
        zend_error(1 << 1L, "Division by zero");
        result->value.lval = 0L;
        result->type = (zend_uchar )3;
        return (-1);
      } else {
        tmp = __builtin_expect((long )(op2->value.lval == -1L), 0L);
        if (tmp) {
          result->value.lval = 0L;
          result->type = (zend_uchar )1;
          return (0);
        } else {

        }
      }
      result->value.lval = op1->value.lval % op2->value.lval;
      result->type = (zend_uchar )1;
      return (0);
    } else {

    }
  } else {

  }
  tmp___3 = mod_function(result, op1, op2);
  return ((int )tmp___3);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_equal_function)(zval *result ,
                                                                              zval *op1 ,
                                                                              zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval == op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval == op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval == op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval == (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval == 0L);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_not_equal_function)(zval *result ,
                                                                                  zval *op1 ,
                                                                                  zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval != op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval != op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval != op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval != (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval != 0L);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_is_smaller_function)(zval *result ,
                                                                                   zval *op1 ,
                                                                                   zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval < op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval < op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval < op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval < (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval < 0L);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_is_smaller_or_equal_function)(zval *result ,
                                                                                            zval *op1 ,
                                                                                            zval *op2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval <= op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval <= op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval <= op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval <= (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval <= 0L);
}
}
extern void __attribute__((__visibility__("default")))  _zval_dtor_func(zval *zvalue ) ;
__inline static void ( __attribute__((__always_inline__)) _zval_dtor)(zval *zvalue ) 
{ 


  {
  if ((int )zvalue->type <= 3) {
    return;
  } else {

  }
  _zval_dtor_func(zvalue);
  return;
}
}
extern void __attribute__((__visibility__("default")))  _zval_copy_ctor_func(zval *zvalue ) ;
__inline static void ( __attribute__((__always_inline__)) _zval_copy_ctor)(zval *zvalue ) 
{ 


  {
  if ((int )zvalue->type <= 3) {
    return;
  } else {

  }
  _zval_copy_ctor_func(zvalue);
  return;
}
}
extern int __attribute__((__visibility__("default")))  zval_copy_static_var(zval **p ,
                                                                            int num_args ,
                                                                            va_list args ,
                                                                            zend_hash_key *key ) ;
extern int __attribute__((__visibility__("default")))  zend_print_variable(zval *var ) ;
void __attribute__((__visibility__("default")))  _zval_ptr_dtor(zval **zval_ptr ) ;
extern void __attribute__((__visibility__("default")))  _zval_internal_dtor(zval *zvalue ) ;
void __attribute__((__visibility__("default")))  _zval_internal_ptr_dtor(zval **zval_ptr ) ;
extern void __attribute__((__visibility__("default")))  _zval_dtor_wrapper(zval *zvalue ) ;
extern void __attribute__((__visibility__("default")))  zval_add_ref(zval **p ) ;
extern void __attribute__((__visibility__("default")))  zend_save_error_handling(zend_error_handling *current ) ;
extern void __attribute__((__visibility__("default")))  zend_replace_error_handling(zend_error_handling_t error_handling ,
                                                                                    zend_class_entry *exception_class ,
                                                                                    zend_error_handling *current ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_error_handling(zend_error_handling *saved ) ;
extern opcode_handler_t __attribute__((__visibility__("default")))  *zend_opcode_handlers ;
extern char *zend_visibility_string(zend_uint fn_flags ) ;
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
extern struct _zend_compiler_globals  __attribute__((__visibility__("default"))) compiler_globals ;
extern int zendparse(void) ;
extern zend_executor_globals __attribute__((__visibility__("default")))  executor_globals ;
extern zend_php_scanner_globals __attribute__((__visibility__("default")))  language_scanner_globals ;
extern zend_ini_scanner_globals __attribute__((__visibility__("default")))  ini_scanner_globals ;
extern int __attribute__((__visibility__("default")))  zend_stack_init(zend_stack *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_push(zend_stack *stack ,
                                                                       void const   *element ,
                                                                       int size ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_top(zend_stack const   *stack ,
                                                                      void **element ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_del_top(zend_stack *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_int_top(zend_stack const   *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_is_empty(zend_stack const   *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_destroy(zend_stack *stack ) ;
extern void __attribute__((__visibility__("default")))  **zend_stack_base(zend_stack const   *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_count(zend_stack const   *stack ) ;
extern void __attribute__((__visibility__("default")))  zend_stack_apply(zend_stack *stack ,
                                                                         int type ,
                                                                         int (*apply_function)(void *element ) ) ;
extern void __attribute__((__visibility__("default")))  zend_stack_apply_with_argument(zend_stack *stack ,
                                                                                       int type ,
                                                                                       int (*apply_function)(void *element ,
                                                                                                             void *arg ) ,
                                                                                       void *arg ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_init(zend_ptr_stack *stack ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_init_ex(zend_ptr_stack *stack ,
                                                                               zend_bool persistent ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_n_push(zend_ptr_stack *stack ,
                                                                              int count 
                                                                              , ...) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_n_pop(zend_ptr_stack *stack ,
                                                                             int count 
                                                                             , ...) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_destroy(zend_ptr_stack *stack ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_apply(zend_ptr_stack *stack ,
                                                                             void (*func)(void * ) ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_clean(zend_ptr_stack *stack ,
                                                                             void (*func)(void * ) ,
                                                                             zend_bool free_elements ) ;
extern int __attribute__((__visibility__("default")))  zend_ptr_stack_num_elements(zend_ptr_stack *stack ) ;
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_3_push)(zend_ptr_stack *stack ,
                                                                                 void *a ,
                                                                                 void *b ,
                                                                                 void *c ) 
{ 
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  void **tmp___2 ;
  void **tmp___3 ;
  void **tmp___4 ;

  {
  if (stack->top + 3 > stack->max) {
    while (1) {
      stack->max += 64;
      if (stack->top + 3 > stack->max) {

      } else {
        break;
      }
    }
    if (stack->persistent) {
      tmp = __zend_realloc((void *)stack->elements,
                           sizeof(void *) * (unsigned int )stack->max);
      tmp___1 = tmp;
    } else {
      tmp___0 = _erealloc((void *)stack->elements,
                          sizeof(void *) * (unsigned int )stack->max, 0);
      tmp___1 = (void *)tmp___0;
    }
    stack->elements = (void **)tmp___1;
    stack->top_element = stack->elements + stack->top;
  } else {

  }
  stack->top += 3;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = a;
  tmp___3 = stack->top_element;
  (stack->top_element) ++;
  *tmp___3 = b;
  tmp___4 = stack->top_element;
  (stack->top_element) ++;
  *tmp___4 = c;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_2_push)(zend_ptr_stack *stack ,
                                                                                 void *a ,
                                                                                 void *b ) 
{ 
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  void **tmp___2 ;
  void **tmp___3 ;

  {
  if (stack->top + 2 > stack->max) {
    while (1) {
      stack->max += 64;
      if (stack->top + 2 > stack->max) {

      } else {
        break;
      }
    }
    if (stack->persistent) {
      tmp = __zend_realloc((void *)stack->elements,
                           sizeof(void *) * (unsigned int )stack->max);
      tmp___1 = tmp;
    } else {
      tmp___0 = _erealloc((void *)stack->elements,
                          sizeof(void *) * (unsigned int )stack->max, 0);
      tmp___1 = (void *)tmp___0;
    }
    stack->elements = (void **)tmp___1;
    stack->top_element = stack->elements + stack->top;
  } else {

  }
  stack->top += 2;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = a;
  tmp___3 = stack->top_element;
  (stack->top_element) ++;
  *tmp___3 = b;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_3_pop)(zend_ptr_stack *stack ,
                                                                                void **a ,
                                                                                void **b ,
                                                                                void **c ) 
{ 


  {
  (stack->top_element) --;
  *a = *(stack->top_element);
  (stack->top_element) --;
  *b = *(stack->top_element);
  (stack->top_element) --;
  *c = *(stack->top_element);
  stack->top -= 3;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_2_pop)(zend_ptr_stack *stack ,
                                                                                void **a ,
                                                                                void **b ) 
{ 


  {
  (stack->top_element) --;
  *a = *(stack->top_element);
  (stack->top_element) --;
  *b = *(stack->top_element);
  stack->top -= 2;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_push)(zend_ptr_stack *stack ,
                                                                               void *ptr ) 
{ 
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  void **tmp___2 ;

  {
  if (stack->top + 1 > stack->max) {
    while (1) {
      stack->max += 64;
      if (stack->top + 1 > stack->max) {

      } else {
        break;
      }
    }
    if (stack->persistent) {
      tmp = __zend_realloc((void *)stack->elements,
                           sizeof(void *) * (unsigned int )stack->max);
      tmp___1 = tmp;
    } else {
      tmp___0 = _erealloc((void *)stack->elements,
                          sizeof(void *) * (unsigned int )stack->max, 0);
      tmp___1 = (void *)tmp___0;
    }
    stack->elements = (void **)tmp___1;
    stack->top_element = stack->elements + stack->top;
  } else {

  }
  (stack->top) ++;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = ptr;
  return;
}
}
__inline static void *( __attribute__((__always_inline__)) zend_ptr_stack_pop)(zend_ptr_stack *stack ) 
{ 


  {
  (stack->top) --;
  (stack->top_element) --;
  return (*(stack->top_element));
}
}
extern void __attribute__((__visibility__("default")))  zend_object_std_init(zend_object *object ,
                                                                             zend_class_entry *ce ) ;
extern void __attribute__((__visibility__("default")))  zend_object_std_dtor(zend_object *object ) ;
extern zend_object_value __attribute__((__visibility__("default")))  zend_objects_new(zend_object **object ,
                                                                                      zend_class_entry *class_type ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_destroy_object(zend_object *object ,
                                                                                    zend_object_handle handle ) ;
extern zend_object __attribute__((__visibility__("default")))  *zend_objects_get_address(zval const   *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_clone_members(zend_object *new_object ,
                                                                                   zend_object_value new_obj_val ,
                                                                                   zend_object *old_object ,
                                                                                   zend_object_handle handle ) ;
extern zend_object_value __attribute__((__visibility__("default")))  zend_objects_clone_obj(zval *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_free_object_storage(zend_object *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_init(zend_objects_store *objects ,
                                                                                zend_uint init_size ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_call_destructors(zend_objects_store *objects ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_mark_destructed(zend_objects_store *objects ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_destroy(zend_objects_store *objects ) ;
extern zend_object_handle __attribute__((__visibility__("default")))  zend_objects_store_put(void *object ,
                                                                                             void (*dtor)(void *object ,
                                                                                                          zend_object_handle handle ) ,
                                                                                             void (*storage)(void *object ) ,
                                                                                             void (*clone)(void *object ,
                                                                                                           void **object_clone ) ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_add_ref(zval *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_del_ref(zval *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_add_ref_by_handle(zend_object_handle handle ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_del_ref_by_handle_ex(zend_object_handle handle ,
                                                                                                zend_object_handlers const   *handlers ) ;
__inline static void ( __attribute__((__always_inline__)) zend_objects_store_del_ref_by_handle)(zend_object_handle handle ) 
{ 


  {
  zend_objects_store_del_ref_by_handle_ex(handle,
                                          (zend_object_handlers const   *)((void *)0));
  return;
}
}
extern zend_uint __attribute__((__visibility__("default")))  zend_objects_store_get_refcount(zval *object ) ;
extern zend_object_value __attribute__((__visibility__("default")))  zend_objects_store_clone_obj(zval *object ) ;
extern void __attribute__((__visibility__("default")))  *zend_object_store_get_object(zval const   *object ) ;
extern void __attribute__((__visibility__("default")))  *zend_object_store_get_object_by_handle(zend_object_handle handle ) ;
extern void __attribute__((__visibility__("default")))  zend_object_store_set_object(zval *zobject ,
                                                                                     void *object ) ;
extern void __attribute__((__visibility__("default")))  zend_object_store_ctor_failed(zval *zobject ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_free_object_storage(zend_objects_store *objects ) ;
extern zval __attribute__((__visibility__("default")))  *zend_object_create_proxy(zval *object ,
                                                                                  zval *member ) ;
extern zend_object_handlers __attribute__((__visibility__("default")))  *zend_get_std_object_handlers(void) ;
extern HashTable __attribute__((__visibility__("default")))  module_registry ;
extern void module_destructor(zend_module_entry *module ) ;
extern int module_registry_cleanup(zend_module_entry *module ) ;
extern int module_registry_request_startup(zend_module_entry *module ) ;
extern int module_registry_unload_temp(zend_module_entry const   *module ) ;
extern void __attribute__((__visibility__("default")))  zend_init_fpu(void) ;
extern void __attribute__((__visibility__("default")))  zend_shutdown_fpu(void) ;
extern void __attribute__((__visibility__("default")))  zend_ensure_fpu_mode(void) ;
extern fpu_control_t __fpu_control ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf32be ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf32le ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf16be ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf16le ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf8 ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_functions(zend_multibyte_functions const   *functions ) ;
extern zend_multibyte_functions const __attribute__((__visibility__("default")))  *zend_multibyte_get_functions(void) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_fetch_encoding(char const   *name ) ;
extern char const __attribute__((__visibility__("default")))  *zend_multibyte_get_encoding_name(zend_encoding const   *encoding ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_check_lexer_compatibility(zend_encoding const   *encoding ) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_detector(unsigned char const   *string ,
                                                                                                         size_t length ,
                                                                                                         zend_encoding const   **list ,
                                                                                                         size_t list_size ) ;
extern size_t __attribute__((__visibility__("default")))  zend_multibyte_encoding_converter(unsigned char **to ,
                                                                                            size_t *to_length ,
                                                                                            unsigned char const   *from ,
                                                                                            size_t from_length ,
                                                                                            zend_encoding const   *encoding_to ,
                                                                                            zend_encoding const   *encoding_from ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_parse_encoding_list(char const   *encoding_list ,
                                                                                          size_t encoding_list_len ,
                                                                                          zend_encoding const   ***return_list ,
                                                                                          size_t *return_size ,
                                                                                          int persistent ) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_get_internal_encoding(void) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_get_script_encoding(void) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_script_encoding(zend_encoding const   **encoding_list ,
                                                                                          size_t encoding_list_size ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_internal_encoding(zend_encoding const   *encoding ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_script_encoding_by_string(char const   *new_value ,
                                                                                                    size_t new_value_length ) ;
extern void init_compiler(void) ;
extern void shutdown_compiler(void) ;
extern void zend_init_compiler_data_structures(void) ;
extern void zend_init_compiler_context(void) ;
extern zend_op_array __attribute__((__visibility__("default")))  *(*zend_compile_file)(zend_file_handle *file_handle ,
                                                                                       int type ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *(*zend_compile_string)(zval *source_string ,
                                                                                         char *filename ) ;
extern int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
extern void startup_scanner(void) ;
extern void shutdown_scanner(void) ;
extern char __attribute__((__visibility__("default")))  *zend_set_compiled_filename(char const   *new_compiled_filename ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_compiled_filename(char *original_compiled_filename ) ;
extern char __attribute__((__visibility__("default")))  *zend_get_compiled_filename(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_compiled_lineno(void) ;
extern size_t __attribute__((__visibility__("default")))  zend_get_scanned_file_offset(void) ;
extern void zend_resolve_non_class_name(znode *element_name ,
                                        zend_bool check_namespace ) ;
extern void zend_resolve_class_name(znode *class_name , ulong fetch_type ,
                                    int check_ns_name ) ;
extern char const __attribute__((__visibility__("default")))  *zend_get_compiled_variable_name(zend_op_array const   *op_array ,
                                                                                               zend_uint var ,
                                                                                               int *name_len ) ;
extern void zend_do_binary_op(zend_uchar op , znode *result ,
                              znode const   *op1 , znode const   *op2 ) ;
extern void zend_do_unary_op(zend_uchar op , znode *result , znode const   *op1 ) ;
extern void zend_do_binary_assign_op(zend_uchar op , znode *result ,
                                     znode const   *op1 , znode const   *op2 ) ;
extern void zend_do_assign(znode *result , znode *variable , znode *value ) ;
extern void zend_do_assign_ref(znode *result , znode const   *lvar ,
                               znode const   *rvar ) ;
extern void fetch_simple_variable(znode *result , znode *varname , int bp ) ;
extern void fetch_simple_variable_ex(znode *result , znode *varname , int bp ,
                                     zend_uchar op ) ;
extern void zend_do_indirect_references(znode *result ,
                                        znode const   *num_references ,
                                        znode *variable ) ;
extern void zend_do_fetch_static_variable(znode *varname ,
                                          znode const   *static_assignment ,
                                          int fetch_type ) ;
extern void zend_do_fetch_global_variable(znode *varname ,
                                          znode const   *static_assignment ,
                                          int fetch_type ) ;
extern void fetch_array_begin(znode *result , znode *varname , znode *first_dim ) ;
extern void fetch_array_dim(znode *result , znode const   *parent ,
                            znode const   *dim ) ;
extern void fetch_string_offset(znode *result , znode const   *parent ,
                                znode const   *offset ) ;
extern void zend_do_fetch_static_member(znode *result , znode *class_znode ) ;
extern void zend_do_print(znode *result , znode const   *arg ) ;
extern void zend_do_echo(znode const   *arg ) ;
extern unary_op_type __attribute__((__visibility__("default")))  get_unary_op(int opcode ) ;
extern binary_op_type __attribute__((__visibility__("default")))  get_binary_op(int opcode ) ;
extern void zend_do_while_cond(znode const   *expr , znode *close_bracket_token ) ;
extern void zend_do_while_end(znode const   *while_token ,
                              znode const   *close_bracket_token ) ;
extern void zend_do_do_while_begin(void) ;
extern void zend_do_do_while_end(znode const   *do_token ,
                                 znode const   *expr_open_bracket ,
                                 znode const   *expr ) ;
extern void zend_do_if_cond(znode const   *cond , znode *closing_bracket_token ) ;
extern void zend_do_if_after_statement(znode const   *closing_bracket_token ,
                                       unsigned char initialize ) ;
extern void zend_do_if_end(void) ;
extern void zend_do_for_cond(znode const   *expr ,
                             znode *second_semicolon_token ) ;
extern void zend_do_for_before_statement(znode const   *cond_start ,
                                         znode const   *second_semicolon_token ) ;
extern void zend_do_for_end(znode const   *second_semicolon_token ) ;
extern void zend_do_pre_incdec(znode *result , znode const   *op1 ,
                               zend_uchar op ) ;
extern void zend_do_post_incdec(znode *result , znode const   *op1 ,
                                zend_uchar op ) ;
extern void zend_do_begin_variable_parse(void) ;
extern void zend_do_end_variable_parse(znode *variable , int type ,
                                       int arg_offset ) ;
extern void zend_check_writable_variable(znode const   *variable ) ;
extern void zend_do_free(znode *op1 ) ;
extern void zend_do_add_string(znode *result , znode const   *op1 , znode *op2 ) ;
extern void zend_do_add_variable(znode *result , znode const   *op1 ,
                                 znode const   *op2 ) ;
extern int zend_do_verify_access_types(znode const   *current_access_type ,
                                       znode const   *new_modifier ) ;
extern void zend_do_begin_function_declaration(znode *function_token ,
                                               znode *function_name ,
                                               int is_method ,
                                               int return_reference ,
                                               znode *fn_flags_znode ) ;
extern void zend_do_end_function_declaration(znode const   *function_token ) ;
extern void zend_do_receive_arg(zend_uchar op , znode *varname ,
                                znode const   *offset ,
                                znode const   *initialization ,
                                znode *class_type , zend_bool pass_by_reference ) ;
extern int zend_do_begin_function_call(znode *function_name ,
                                       zend_bool check_namespace ) ;
extern void zend_do_begin_method_call(znode *left_bracket ) ;
extern void zend_do_clone(znode *result , znode const   *expr ) ;
extern void zend_do_begin_dynamic_function_call(znode *function_name ,
                                                int prefix_len ) ;
extern void zend_do_fetch_class(znode *result , znode *class_name ) ;
extern void zend_do_build_full_name(znode *result , znode *prefix ,
                                    znode *name , int is_class_member ) ;
extern int zend_do_begin_class_member_function_call(znode *class_name ,
                                                    znode *method_name ) ;
extern void zend_do_end_function_call(znode *function_name , znode *result ,
                                      znode const   *argument_list ,
                                      int is_method , int is_dynamic_fcall ) ;
extern void zend_do_return(znode *expr , int do_end_vparse ) ;
extern void zend_do_handle_exception(void) ;
extern void zend_do_begin_lambda_function_declaration(znode *result ,
                                                      znode *function_token ,
                                                      int return_reference ,
                                                      int is_static ) ;
extern void zend_do_fetch_lexical_variable(znode *varname , zend_bool is_ref ) ;
extern void zend_do_try(znode *try_token ) ;
extern void zend_do_begin_catch(znode *try_token , znode *catch_class ,
                                znode *catch_var , znode *first_catch ) ;
extern void zend_do_end_catch(znode const   *try_token ) ;
extern void zend_do_throw(znode const   *expr ) ;
extern int __attribute__((__visibility__("default")))  do_bind_function(zend_op_array const   *op_array ,
                                                                        zend_op *opline ,
                                                                        HashTable *function_table ,
                                                                        zend_bool compile_time ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *do_bind_class(zend_op_array const   *op_array ,
                                                                                   zend_op const   *opline ,
                                                                                   HashTable *class_table ,
                                                                                   zend_bool compile_time ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *do_bind_inherited_class(zend_op_array const   *op_array ,
                                                                                             zend_op const   *opline ,
                                                                                             HashTable *class_table ,
                                                                                             zend_class_entry *parent_ce ,
                                                                                             zend_bool compile_time ) ;
extern void __attribute__((__visibility__("default")))  zend_do_inherit_interfaces(zend_class_entry *ce ,
                                                                                   zend_class_entry const   *iface ) ;
extern void __attribute__((__visibility__("default")))  zend_do_implement_interface(zend_class_entry *ce ,
                                                                                    zend_class_entry *iface ) ;
extern void zend_do_implements_interface(znode *interface_znode ) ;
extern void zend_add_trait_precedence(znode *precedence_znode ) ;
extern void zend_add_trait_alias(znode *alias_znode ) ;
extern void zend_do_implements_trait(znode *interface_znode ) ;
extern void __attribute__((__visibility__("default")))  zend_do_implement_trait(zend_class_entry *ce ,
                                                                                zend_class_entry *trait ) ;
extern void __attribute__((__visibility__("default")))  zend_do_bind_traits(zend_class_entry *ce ) ;
extern void zend_prepare_trait_precedence(znode *result ,
                                          znode *method_reference ,
                                          znode *trait_list ) ;
extern void zend_prepare_reference(znode *result , znode *class_name ,
                                   znode *method_name ) ;
extern void zend_prepare_trait_alias(znode *result , znode *method_reference ,
                                     znode *modifiers , znode *alias ) ;
extern void init_trait_alias_list(znode *result , znode const   *trait_alias ) ;
extern void add_trait_alias(znode *result , znode const   *trait_alias ) ;
extern void init_trait_alias(znode *result , znode const   *method_name ,
                             znode const   *alias , znode const   *modifiers ) ;
extern void __attribute__((__visibility__("default")))  zend_do_inheritance(zend_class_entry *ce ,
                                                                            zend_class_entry *parent_ce ) ;
extern void zend_do_early_binding(void) ;
extern void __attribute__((__visibility__("default")))  zend_do_delayed_early_binding(zend_op_array const   *op_array ) ;
extern void zend_do_pass_param(znode *param , zend_uchar op , int offset ) ;
extern void zend_do_boolean_or_begin(znode *expr1 , znode *op_token ) ;
extern void zend_do_boolean_or_end(znode *result , znode const   *expr1 ,
                                   znode const   *expr2 , znode *op_token ) ;
extern void zend_do_boolean_and_begin(znode *expr1 , znode *op_token ) ;
extern void zend_do_boolean_and_end(znode *result , znode const   *expr1 ,
                                    znode const   *expr2 ,
                                    znode const   *op_token ) ;
extern void zend_do_brk_cont(zend_uchar op , znode const   *expr ) ;
extern void zend_do_switch_cond(znode const   *cond ) ;
extern void zend_do_switch_end(znode const   *case_list ) ;
extern void zend_do_case_before_statement(znode const   *case_list ,
                                          znode *case_token ,
                                          znode const   *case_expr ) ;
extern void zend_do_case_after_statement(znode *result ,
                                         znode const   *case_token ) ;
extern void zend_do_default_before_statement(znode const   *case_list ,
                                             znode *default_token ) ;
extern void zend_do_begin_class_declaration(znode const   *class_token ,
                                            znode *class_name ,
                                            znode const   *parent_class_name ) ;
extern void zend_do_end_class_declaration(znode const   *class_token ,
                                          znode const   *parent_token ) ;
extern void zend_do_declare_property(znode const   *var_name ,
                                     znode const   *value ,
                                     zend_uint access_type ) ;
extern void zend_do_declare_class_constant(znode *var_name ,
                                           znode const   *value ) ;
extern void zend_do_fetch_property(znode *result , znode *object ,
                                   znode const   *property ) ;
extern void zend_do_halt_compiler_register(void) ;
extern void zend_do_push_object(znode const   *object ) ;
extern void zend_do_pop_object(znode *object ) ;
extern void zend_do_begin_new_object(znode *new_token , znode *class_type ) ;
extern void zend_do_end_new_object(znode *result , znode const   *new_token ,
                                   znode const   *argument_list ) ;
extern void zend_do_fetch_constant(znode *result , znode *constant_container ,
                                   znode *constant_name , int mode ,
                                   zend_bool check_namespace ) ;
extern void zend_do_shell_exec(znode *result , znode const   *cmd ) ;
extern void zend_do_init_array(znode *result , znode const   *expr ,
                               znode const   *offset , zend_bool is_ref ) ;
extern void zend_do_add_array_element(znode *result , znode const   *expr ,
                                      znode const   *offset , zend_bool is_ref ) ;
extern void zend_do_add_static_array_element(znode *result , znode *offset ,
                                             znode const   *expr ) ;
extern void zend_do_list_init(void) ;
extern void zend_do_list_end(znode *result , znode *expr ) ;
extern void zend_do_add_list_element(znode const   *element ) ;
extern void zend_do_new_list_begin(void) ;
extern void zend_do_new_list_end(void) ;
extern void zend_init_list(void *result , void *item ) ;
extern void zend_add_to_list(void *result , void *item ) ;
extern void zend_do_cast(znode *result , znode const   *expr , int type ) ;
extern void zend_do_include_or_eval(int type , znode *result ,
                                    znode const   *op1 ) ;
extern void zend_do_unset(znode const   *variable ) ;
extern void zend_do_isset_or_isempty(int type , znode *result , znode *variable ) ;
extern void zend_do_instanceof(znode *result , znode const   *expr ,
                               znode const   *class_znode , int type ) ;
extern void zend_do_foreach_begin(znode *foreach_token ,
                                  znode *open_brackets_token , znode *array ,
                                  znode *as_token , int variable ) ;
extern void zend_do_foreach_cont(znode *foreach_token ,
                                 znode const   *open_brackets_token ,
                                 znode const   *as_token , znode *value ,
                                 znode *key ) ;
extern void zend_do_foreach_end(znode const   *foreach_token ,
                                znode const   *as_token ) ;
extern void zend_do_declare_begin(void) ;
extern void zend_do_declare_stmt(znode *var , znode *val ) ;
extern void zend_do_declare_end(znode const   *declare_token ) ;
extern void zend_do_exit(znode *result , znode const   *message ) ;
extern void zend_do_begin_silence(znode *strudel_token ) ;
extern void zend_do_end_silence(znode const   *strudel_token ) ;
extern void zend_do_jmp_set(znode const   *value , znode *jmp_token ,
                            znode *colon_token ) ;
extern void zend_do_jmp_set_else(znode *result , znode const   *false_value ,
                                 znode const   *jmp_token ,
                                 znode const   *colon_token ) ;
extern void zend_do_begin_qm_op(znode const   *cond , znode *qm_token ) ;
extern void zend_do_qm_true(znode const   *true_value , znode *qm_token ,
                            znode *colon_token ) ;
extern void zend_do_qm_false(znode *result , znode const   *false_value ,
                             znode const   *qm_token ,
                             znode const   *colon_token ) ;
extern void zend_do_extended_info(void) ;
extern void zend_do_extended_fcall_begin(void) ;
extern void zend_do_extended_fcall_end(void) ;
extern void zend_do_ticks(void) ;
extern void zend_do_abstract_method(znode const   *function_name ,
                                    znode *modifiers , znode const   *body ) ;
extern void zend_do_declare_constant(znode *name , znode *value ) ;
extern void zend_do_build_namespace_name(znode *result , znode *prefix ,
                                         znode *name ) ;
extern void zend_do_begin_namespace(znode const   *name ,
                                    zend_bool with_brackets ) ;
extern void zend_do_end_namespace(void) ;
extern void zend_verify_namespace(void) ;
extern void zend_do_use(znode *name , znode *new_name , int is_global ) ;
extern void zend_do_end_compilation(void) ;
extern void zend_do_label(znode *label ) ;
extern void zend_do_goto(znode const   *label ) ;
extern void zend_resolve_goto_label(zend_op_array *op_array , zend_op *opline ,
                                    int pass2 ) ;
extern void zend_release_labels(void) ;
extern void __attribute__((__visibility__("default")))  function_add_ref(zend_function *function ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *compile_file(zend_file_handle *file_handle ,
                                                                               int type ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *compile_string(zval *source_string ,
                                                                                 char *filename ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *compile_filename(int type ,
                                                                                   zval *filename ) ;
extern int __attribute__((__visibility__("default")))  zend_execute_scripts(int type ,
                                                                            zval **retval ,
                                                                            int file_count 
                                                                            , ...) ;
extern int __attribute__((__visibility__("default")))  open_file_for_scanning(zend_file_handle *file_handle ) ;
extern void __attribute__((__visibility__("default")))  init_op_array(zend_op_array *op_array ,
                                                                      zend_uchar type ,
                                                                      int initial_ops_size ) ;
extern void __attribute__((__visibility__("default")))  destroy_op_array(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  zend_destroy_file_handle(zend_file_handle *file_handle ) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_class_data(zend_class_entry **pce ) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_user_class_data(zend_class_entry **pce ) ;
extern void __attribute__((__visibility__("default")))  zend_cleanup_internal_class_data(zend_class_entry *ce ) ;
extern void __attribute__((__visibility__("default")))  zend_cleanup_internal_classes(void) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_function_data(zend_function *function ) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_function_data_full(zend_function *function ) ;
extern void __attribute__((__visibility__("default")))  destroy_zend_function(zend_function *function ) ;
extern void __attribute__((__visibility__("default")))  zend_function_dtor(zend_function *function ) ;
extern void __attribute__((__visibility__("default")))  destroy_zend_class(zend_class_entry **pce ) ;
extern void zend_class_add_ref(zend_class_entry **ce ) ;
extern void __attribute__((__visibility__("default")))  zend_mangle_property_name(char **dest ,
                                                                                  int *dest_length ,
                                                                                  char const   *src1 ,
                                                                                  int src1_length ,
                                                                                  char const   *src2 ,
                                                                                  int src2_length ,
                                                                                  int internal ) ;
extern int __attribute__((__visibility__("default")))  zend_unmangle_property_name(char const   *mangled_property ,
                                                                                   int mangled_property_len ,
                                                                                   char const   **class_name ,
                                                                                   char const   **prop_name ) ;
extern zend_op *get_next_op(zend_op_array *op_array ) ;
extern void init_op(zend_op *op ) ;
extern int get_next_op_number(zend_op_array *op_array ) ;
extern int print_class(zend_class_entry *class_entry ) ;
extern void print_op_array(zend_op_array *op_array , int optimizations ) ;
extern int __attribute__((__visibility__("default")))  pass_two(zend_op_array *op_array ) ;
extern zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array ) ;
extern void zend_do_first_catch(znode *open_parentheses ) ;
extern void zend_initialize_try_catch_element(znode const   *try_token ) ;
extern void zend_do_mark_last_catch(znode const   *first_catch ,
                                    znode const   *last_additional_catch ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_compiling(void) ;
extern char __attribute__((__visibility__("default")))  *zend_make_compiled_string_description(char const   *name ) ;
extern void __attribute__((__visibility__("default")))  zend_initialize_class_data(zend_class_entry *ce ,
                                                                                   zend_bool nullify_handlers ) ;
extern int zend_get_class_fetch_type(char const   *class_name ,
                                     uint class_name_len ) ;
extern int __attribute__((__visibility__("default")))  zend_register_auto_global(char const   *name ,
                                                                                 uint name_len ,
                                                                                 zend_bool jit ,
                                                                                 zend_bool (*auto_global_callback)(char const   *name ,
                                                                                                                   uint name_len ) ) ;
extern void __attribute__((__visibility__("default")))  zend_activate_auto_globals(void) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global(char const   *name ,
                                                                                 uint name_len ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global_quick(char const   *name ,
                                                                                       uint name_len ,
                                                                                       ulong hashval ) ;
extern size_t __attribute__((__visibility__("default")))  zend_dirname(char *path ,
                                                                       size_t len ) ;
extern int zendlex(znode *zendlval ) ;
extern int zend_add_literal(zend_op_array *op_array , zval const   *zv ) ;
void __attribute__((__visibility__("default")))  (*zend_execute)(zend_op_array *op_array )  ;
void __attribute__((__visibility__("default")))  (*zend_execute_internal)(zend_execute_data *execute_data_ptr ,
                                                                          int return_value_used )  ;
void init_executor(void) ;
void shutdown_executor(void) ;
void shutdown_destructors(void) ;
extern void __attribute__((__visibility__("default")))  execute(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  execute_internal(zend_execute_data *execute_data_ptr ,
                                                                         int return_value_used ) ;
int __attribute__((__visibility__("default")))  zend_is_true(zval *op ) ;
__inline static void ( __attribute__((__always_inline__)) safe_free_zval_ptr_rel)(zval *p ) 
{ 


  {
  if ((unsigned int )p != (unsigned int )executor_globals.uninitialized_zval_ptr) {
    while (1) {
      if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)p)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(p);
      } else {

      }
      _efree((void *)p);
      break;
    }
  } else {

  }
  return;
}
}
int __attribute__((__visibility__("default")))  zend_lookup_class(char const   *name ,
                                                                  int name_length ,
                                                                  zend_class_entry ***ce ) ;
int __attribute__((__visibility__("default")))  zend_lookup_class_ex(char const   *name ,
                                                                     int name_length ,
                                                                     zend_literal const   *key ,
                                                                     int use_autoload ,
                                                                     zend_class_entry ***ce ) ;
int __attribute__((__visibility__("default")))  zend_eval_string(char *str ,
                                                                 zval *retval_ptr ,
                                                                 char *string_name ) ;
int __attribute__((__visibility__("default")))  zend_eval_stringl(char *str ,
                                                                  int str_len ,
                                                                  zval *retval_ptr ,
                                                                  char *string_name ) ;
int __attribute__((__visibility__("default")))  zend_eval_string_ex(char *str ,
                                                                    zval *retval_ptr ,
                                                                    char *string_name ,
                                                                    int handle_exceptions ) ;
int __attribute__((__visibility__("default")))  zend_eval_stringl_ex(char *str ,
                                                                     int str_len ,
                                                                     zval *retval_ptr ,
                                                                     char *string_name ,
                                                                     int handle_exceptions ) ;
extern char __attribute__((__visibility__("default")))  *zend_verify_arg_class_kind(zend_arg_info const   *cur_arg_info ,
                                                                                    ulong fetch_type ,
                                                                                    char const   **class_name ,
                                                                                    zend_class_entry **pce ) ;
extern int __attribute__((__visibility__("default")))  zend_verify_arg_error(int error_type ,
                                                                             zend_function const   *zf ,
                                                                             zend_uint arg_num ,
                                                                             char const   *need_msg ,
                                                                             char const   *need_kind ,
                                                                             char const   *given_msg ,
                                                                             char const   *given_kind ) ;
__inline static void ( __attribute__((__always_inline__)) i_zval_ptr_dtor)(zval *zval_ptr ) 
{ 
  zend_uint tmp ;
  zend_uint tmp___0 ;

  {
  tmp___0 = zval_delref_p(zval_ptr);
  if (tmp___0) {
    tmp = zval_refcount_p(zval_ptr);
    if (tmp == 1U) {
      zval_unset_isref_p(zval_ptr);
    } else {

    }
    gc_zval_check_possible_root(zval_ptr);
  } else
  if ((unsigned int )zval_ptr != (unsigned int )(& executor_globals.uninitialized_zval)) {
    if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)zval_ptr)->u.buffered & 4294967292UL)) {
      gc_remove_zval_from_buffer(zval_ptr);
    } else {

    }
    _zval_dtor(zval_ptr);
    _efree((void *)zval_ptr);
  } else {

  }
  return;
}
}
__inline static int ( __attribute__((__always_inline__)) i_zend_is_true)(zval *op ) 
{ 
  int result ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval tmp___1 ;
  int tmp___2 ;
  zval *tmp___3 ;
  zval *tmp___4 ;

  {
  switch ((int )op->type) {
  case 0: 
  result = 0;
  break;
  case 7: 
  case 3: 
  case 1: 
  if (op->value.lval) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 2: 
  if (op->value.dval) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 6: 
  if (op->value.str.len == 0) {
    result = 0;
  } else
  if (op->value.str.len == 1) {
    if ((int )*(op->value.str.val + 0) == 48) {
      result = 0;
    } else {
      result = 1;
    }
  } else {
    result = 1;
  }
  break;
  case 4: 
  tmp___0 = zend_hash_num_elements((HashTable const   *)op->value.ht);
  if (tmp___0) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 5: 
  if ((int )op->type == 5) {
    if ((unsigned int )(op->value.obj.handlers)->get_class_entry != (unsigned int )((void *)0)) {
      if ((op->value.obj.handlers)->cast_object) {
        tmp___2 = (*((op->value.obj.handlers)->cast_object))(op, & tmp___1, 3);
        if (tmp___2 == 0) {
          result = (int )tmp___1.value.lval;
          break;
        } else {

        }
      } else
      if ((op->value.obj.handlers)->get) {
        tmp___4 = (*((op->value.obj.handlers)->get))(op);
        tmp___3 = tmp___4;
        if ((int )tmp___3->type != 5) {
          convert_to_boolean(tmp___3);
          result = (int )tmp___3->value.lval;
          _zval_ptr_dtor(& tmp___3);
          break;
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  result = 1;
  break;
  default: 
  result = 0;
  break;
  }
  return (result);
}
}
int __attribute__((__visibility__("default")))  zval_update_constant(zval **pp ,
                                                                     void *arg ) ;
int __attribute__((__visibility__("default")))  zval_update_constant_inline_change(zval **pp ,
                                                                                   void *scope ) ;
int __attribute__((__visibility__("default")))  zval_update_constant_no_inline_change(zval **pp ,
                                                                                      void *scope ) ;
int __attribute__((__visibility__("default")))  zval_update_constant_ex(zval **pp ,
                                                                        void *arg ,
                                                                        zend_class_entry *scope ) ;
__inline static zend_vm_stack ( __attribute__((__always_inline__)) zend_vm_stack_new_page)(int count ) 
{ 
  zend_vm_stack page ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  tmp = _emalloc((((sizeof(*page) + 4U) - 1U) & 4294967292U) + sizeof(void *) * (unsigned int )count);
  page = (zend_vm_stack )tmp;
  page->top = (void **)((char *)page + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U));
  page->end = page->top + count;
  page->prev = (zend_vm_stack )((void *)0);
  return (page);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_init)(void) 
{ 


  {
  executor_globals.argument_stack = zend_vm_stack_new_page(16368);
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_destroy)(void) 
{ 
  zend_vm_stack stack ;
  zend_vm_stack p ;

  {
  stack = executor_globals.argument_stack;
  while ((unsigned int )stack != (unsigned int )((void *)0)) {
    p = stack->prev;
    _efree((void *)stack);
    stack = p;
  }
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_extend)(int count ) 
{ 
  zend_vm_stack p ;
  int tmp ;
  zend_vm_stack tmp___0 ;

  {
  if (count >= 16368) {
    tmp = count;
  } else {
    tmp = 16368;
  }
  tmp___0 = zend_vm_stack_new_page(tmp);
  p = tmp___0;
  p->prev = executor_globals.argument_stack;
  executor_globals.argument_stack = p;
  return;
}
}
__inline static void **( __attribute__((__always_inline__)) zend_vm_stack_top)(void) 
{ 


  {
  return ((executor_globals.argument_stack)->top);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_push)(void *ptr ) 
{ 
  long tmp ;
  void **tmp___0 ;

  {
  while (1) {
    tmp = __builtin_expect((long )(1 > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top),
                           0L);
    if (tmp) {
      zend_vm_stack_extend(1);
    } else {

    }
    break;
  }
  tmp___0 = (executor_globals.argument_stack)->top;
  ((executor_globals.argument_stack)->top) ++;
  *tmp___0 = ptr;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_push_nocheck)(void *ptr ) 
{ 
  void **tmp ;

  {
  tmp = (executor_globals.argument_stack)->top;
  ((executor_globals.argument_stack)->top) ++;
  *tmp = ptr;
  return;
}
}
__inline static void *( __attribute__((__always_inline__)) zend_vm_stack_pop)(void) 
{ 
  void *el ;
  zend_vm_stack p ;
  long tmp ;

  {
  ((executor_globals.argument_stack)->top) --;
  el = *((executor_globals.argument_stack)->top);
  tmp = __builtin_expect((long )((unsigned int )(executor_globals.argument_stack)->top == (unsigned int )((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)))),
                         0L);
  if (tmp) {
    p = executor_globals.argument_stack;
    executor_globals.argument_stack = p->prev;
    _efree((void *)p);
  } else {

  }
  return (el);
}
}
__inline static void *( __attribute__((__always_inline__)) zend_vm_stack_alloc)(size_t size ) 
{ 
  void *ret ;
  int extra ;
  void **old_top ;
  long tmp ;
  long tmp___0 ;

  {
  size = (size + (sizeof(void *) - 1U)) / sizeof(void *);
  if (4U > sizeof(void *)) {
    extra = (int )((4UL - ((zend_uintptr_t )(executor_globals.argument_stack)->top & 3UL)) / (unsigned long )sizeof(void *));
    tmp = __builtin_expect((long )((zend_uintptr_t )((size + (size_t )extra) + (((sizeof(void *) + 4U) - 1U) & 4294967292U) / sizeof(void *)) > (zend_uintptr_t )((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top)),
                           0L);
    if (tmp) {
      zend_vm_stack_extend((int )size);
    } else {
      old_top = (executor_globals.argument_stack)->top;
      (executor_globals.argument_stack)->top += extra;
      *((executor_globals.argument_stack)->top) = (void *)old_top;
      (executor_globals.argument_stack)->top += (((sizeof(void *) + 4U) - 1U) & 4294967292U) / sizeof(void *);
    }
  } else {
    while (1) {
      tmp___0 = __builtin_expect((long )((int )size > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top),
                                 0L);
      if (tmp___0) {
        zend_vm_stack_extend((int )size);
      } else {

      }
      break;
    }
  }
  ret = (void *)(executor_globals.argument_stack)->top;
  (executor_globals.argument_stack)->top += size;
  return (ret);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_free_int)(void *ptr ) 
{ 
  zend_vm_stack p ;
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U))) == (unsigned int )((void **)ptr)),
                         0L);
  if (tmp) {
    p = executor_globals.argument_stack;
    executor_globals.argument_stack = p->prev;
    _efree((void *)p);
  } else {
    (executor_globals.argument_stack)->top = (void **)ptr;
  }
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_free)(void *ptr ) 
{ 
  zend_vm_stack p ;
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U))) == (unsigned int )((void **)ptr)),
                         0L);
  if (tmp) {
    p = executor_globals.argument_stack;
    executor_globals.argument_stack = p->prev;
    _efree((void *)p);
  } else
  if (4U > sizeof(void *)) {
    ptr = (void *)((char *)ptr - (((sizeof(void *) + 4U) - 1U) & 4294967292U));
    (executor_globals.argument_stack)->top = *((void ***)ptr);
  } else {
    (executor_globals.argument_stack)->top = (void **)ptr;
  }
  return;
}
}
__inline static void **( __attribute__((__always_inline__)) zend_vm_stack_push_args)(int count ) 
{ 
  zend_vm_stack p ;
  void *data ;
  zend_vm_stack r ;
  long tmp ;
  int tmp___0 ;
  void **tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  void **tmp___4 ;

  {
  tmp___2 = __builtin_expect((long )((executor_globals.argument_stack)->top - (void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)) < count),
                             0L);
  if (tmp___2) {
    goto _L;
  } else {
    tmp___3 = __builtin_expect((long )((unsigned int )(executor_globals.argument_stack)->top == (unsigned int )(executor_globals.argument_stack)->end),
                               0L);
    if (tmp___3) {
      _L: /* CIL Label */ 
      p = executor_globals.argument_stack;
      zend_vm_stack_extend(count + 1);
      (executor_globals.argument_stack)->top += count;
      *((executor_globals.argument_stack)->top) = (void *)((zend_uintptr_t )count);
      while (1) {
        tmp___0 = count;
        count --;
        if (tmp___0 > 0) {

        } else {
          break;
        }
        (p->top) --;
        data = *(p->top);
        tmp = __builtin_expect((long )((unsigned int )p->top == (unsigned int )((void **)((char *)p + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)))),
                               0L);
        if (tmp) {
          r = p;
          (executor_globals.argument_stack)->prev = p->prev;
          p = p->prev;
          _efree((void *)r);
        } else {

        }
        *((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)) + count) = data;
      }
      tmp___1 = (executor_globals.argument_stack)->top;
      ((executor_globals.argument_stack)->top) ++;
      return (tmp___1);
    } else {

    }
  }
  *((executor_globals.argument_stack)->top) = (void *)((zend_uintptr_t )count);
  tmp___4 = (executor_globals.argument_stack)->top;
  ((executor_globals.argument_stack)->top) ++;
  return (tmp___4);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_clear_multiple)(void) 
{ 
  void **p ;
  int delete_count ;
  zval *q ;

  {
  p = (executor_globals.argument_stack)->top - 1;
  delete_count = (int )((zend_uintptr_t )*p);
  while (1) {
    delete_count --;
    if (delete_count >= 0) {

    } else {
      break;
    }
    p --;
    q = *((zval **)p);
    *p = (void *)0;
    i_zval_ptr_dtor(q);
  }
  zend_vm_stack_free_int((void *)p);
  return;
}
}
__inline static zval **( __attribute__((__always_inline__)) zend_vm_stack_get_arg)(int requested_arg ) 
{ 
  void **p ;
  int arg_count ;
  long tmp ;

  {
  p = ((executor_globals.current_execute_data)->prev_execute_data)->function_state.arguments;
  arg_count = (int )((zend_uintptr_t )*p);
  tmp = __builtin_expect((long )(requested_arg > arg_count), 0L);
  if (tmp) {
    return ((zval **)((void *)0));
  } else {

  }
  return ((((zval **)p - arg_count) + requested_arg) - 1);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_arg_types_stack_2_pop)(zend_ptr_stack *stack ,
                                                                                      zval **object ,
                                                                                      zend_function **fbc ) 
{ 
  void *a ;
  void *b ;

  {
  zend_ptr_stack_2_pop(stack, & a, & b);
  *object = (zval *)a;
  *fbc = (zend_function *)b;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_arg_types_stack_3_pop)(zend_ptr_stack *stack ,
                                                                                      zend_class_entry **called_scope ,
                                                                                      zval **object ,
                                                                                      zend_function **fbc ) 
{ 
  void *a ;
  void *b ;
  void *c ;

  {
  zend_ptr_stack_3_pop(stack, & a, & b, & c);
  *called_scope = (zend_class_entry *)a;
  *object = (zval *)b;
  *fbc = (zend_function *)c;
  return;
}
}
void execute_new_code(void) ;
char const __attribute__((__visibility__("default")))  *get_active_class_name(char const   **space ) ;
char const __attribute__((__visibility__("default")))  *get_active_function_name(void) ;
char const __attribute__((__visibility__("default")))  *zend_get_executed_filename(void) ;
uint __attribute__((__visibility__("default")))  zend_get_executed_lineno(void) ;
zend_bool __attribute__((__visibility__("default")))  zend_is_executing(void) ;
void __attribute__((__visibility__("default")))  zend_set_timeout(long seconds ,
                                                                  int reset_signals ) ;
void __attribute__((__visibility__("default")))  zend_unset_timeout(void) ;
void __attribute__((__visibility__("default")))  zend_timeout(int dummy ) ;
zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class(char const   *class_name ,
                                                                               uint class_name_len ,
                                                                               int fetch_type ) ;
zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class_by_name(char const   *class_name ,
                                                                                       uint class_name_len ,
                                                                                       zend_literal const   *key ,
                                                                                       int fetch_type ) ;
void zend_verify_abstract_class(zend_class_entry *ce ) ;
extern zval __attribute__((__visibility__("default")))  **zend_get_compiled_variable_value(zend_execute_data const   *execute_data_ptr ,
                                                                                           zend_uint var ) ;
extern int __attribute__((__visibility__("default")))  zend_set_user_opcode_handler(zend_uchar opcode ,
                                                                                    int (*handler)(zend_execute_data *execute_data ) ) ;
extern user_opcode_handler_t __attribute__((__visibility__("default")))  zend_get_user_opcode_handler(zend_uchar opcode ) ;
extern zval __attribute__((__visibility__("default")))  *zend_get_zval_ptr(int op_type ,
                                                                           znode_op const   *node ,
                                                                           temp_variable const   *Ts ,
                                                                           zend_free_op *should_free ,
                                                                           int type ) ;
extern zval __attribute__((__visibility__("default")))  **zend_get_zval_ptr_ptr(int op_type ,
                                                                                znode_op const   *node ,
                                                                                temp_variable const   *Ts ,
                                                                                zend_free_op *should_free ,
                                                                                int type ) ;
extern int __attribute__((__visibility__("default")))  zend_do_fcall(zend_execute_data *execute_data ) ;
extern int __attribute__((__visibility__("default")))  zend_register_list_destructors(void (*ld)(void * ) ,
                                                                                      void (*pld)(void * ) ,
                                                                                      int module_number ) ;
extern int __attribute__((__visibility__("default")))  zend_register_list_destructors_ex(void (*ld)(zend_rsrc_list_entry *rsrc ) ,
                                                                                         void (*pld)(zend_rsrc_list_entry *rsrc ) ,
                                                                                         char const   *type_name ,
                                                                                         int module_number ) ;
extern void list_entry_destructor(void *ptr ) ;
extern void plist_entry_destructor(void *ptr ) ;
extern void zend_clean_module_rsrc_dtors(int module_number ) ;
extern int zend_init_rsrc_list(void) ;
extern int zend_init_rsrc_plist(void) ;
extern void zend_destroy_rsrc_list(HashTable *ht ) ;
extern int zend_init_rsrc_list_dtors(void) ;
extern void zend_destroy_rsrc_list_dtors(void) ;
extern int __attribute__((__visibility__("default")))  zend_list_insert(void *ptr ,
                                                                        int type ) ;
extern int __attribute__((__visibility__("default")))  _zend_list_addref(int id ) ;
extern int __attribute__((__visibility__("default")))  _zend_list_delete(int id ) ;
extern void __attribute__((__visibility__("default")))  *_zend_list_find(int id ,
                                                                         int *type ) ;
extern int __attribute__((__visibility__("default")))  zend_register_resource(zval *rsrc_result ,
                                                                              void *rsrc_pointer ,
                                                                              int rsrc_type ) ;
extern void __attribute__((__visibility__("default")))  *zend_fetch_resource(zval **passed_id ,
                                                                             int default_id ,
                                                                             char const   *resource_type_name ,
                                                                             int *found_resource_type ,
                                                                             int num_resource_types 
                                                                             , ...) ;
extern char const __attribute__((__visibility__("default")))  *zend_rsrc_list_get_rsrc_type(int resource ) ;
extern int __attribute__((__visibility__("default")))  zend_fetch_list_dtor_id(char *type_name ) ;
extern int __attribute__((__visibility__("default")))  le_index_ptr ;
extern int zend_next_free_module(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_parameters(int ht ,
                                                                           int param_count 
                                                                           , ...) ;
extern int __attribute__((__visibility__("default")))  _zend_get_parameters_array(int ht ,
                                                                                  int param_count ,
                                                                                  zval **argument_array ) ;
extern int __attribute__((__visibility__("default"),
__deprecated__))  zend_get_parameters_ex(int param_count  , ...) ;
extern int __attribute__((__visibility__("default")))  _zend_get_parameters_array_ex(int param_count ,
                                                                                     zval ***argument_array ) ;
extern int __attribute__((__visibility__("default")))  zend_copy_parameters_array(int param_count ,
                                                                                  zval *argument_array ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_parameters(int num_args ,
                                                                             char const   *type_spec 
                                                                             , ...) ;
extern int __attribute__((__visibility__("default")))  zend_parse_parameters_ex(int flags ,
                                                                                int num_args ,
                                                                                char const   *type_spec 
                                                                                , ...) ;
extern char __attribute__((__visibility__("default")))  *zend_zval_type_name(zval const   *arg ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_method_parameters(int num_args ,
                                                                                    zval *this_ptr ,
                                                                                    char const   *type_spec 
                                                                                    , ...) ;
extern int __attribute__((__visibility__("default")))  zend_parse_method_parameters_ex(int flags ,
                                                                                       int num_args ,
                                                                                       zval *this_ptr ,
                                                                                       char const   *type_spec 
                                                                                       , ...) ;
extern int __attribute__((__visibility__("default")))  zend_register_functions(zend_class_entry *scope ,
                                                                               zend_function_entry const   *functions ,
                                                                               HashTable *function_table ,
                                                                               int type ) ;
extern void __attribute__((__visibility__("default")))  zend_unregister_functions(zend_function_entry const   *functions ,
                                                                                  int count ,
                                                                                  HashTable *function_table ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_module(zend_module_entry *module_entry ) ;
extern zend_module_entry __attribute__((__visibility__("default")))  *zend_register_internal_module(zend_module_entry *module_entry ) ;
extern zend_module_entry __attribute__((__visibility__("default")))  *zend_register_module_ex(zend_module_entry *module ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_module_ex(zend_module_entry *module ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_modules(void) ;
extern void __attribute__((__visibility__("default")))  zend_collect_module_handlers(void) ;
extern void __attribute__((__visibility__("default")))  zend_destroy_modules(void) ;
extern void __attribute__((__visibility__("default")))  zend_check_magic_method_implementation(zend_class_entry const   *ce ,
                                                                                               zend_function const   *fptr ,
                                                                                               int error_type ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_register_internal_class(zend_class_entry *class_entry ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_register_internal_class_ex(zend_class_entry *class_entry ,
                                                                                                     zend_class_entry *parent_ce ,
                                                                                                     char *parent_name ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_register_internal_interface(zend_class_entry *orig_class_entry ) ;
extern void __attribute__((__visibility__("default")))  zend_class_implements(zend_class_entry *class_entry ,
                                                                              int num_interfaces 
                                                                              , ...) ;
extern int __attribute__((__visibility__("default")))  zend_register_class_alias_ex(char const   *name ,
                                                                                    int name_len ,
                                                                                    zend_class_entry *ce ) ;
extern int __attribute__((__visibility__("default")))  zend_disable_function(char *function_name ,
                                                                             uint function_name_length ) ;
extern int __attribute__((__visibility__("default")))  zend_disable_class(char *class_name ,
                                                                          uint class_name_length ) ;
extern void __attribute__((__visibility__("default")))  zend_wrong_param_count(void) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_callable_ex(zval *callable ,
                                                                                 zval *object_ptr ,
                                                                                 uint check_flags ,
                                                                                 char **callable_name ,
                                                                                 int *callable_name_len ,
                                                                                 zend_fcall_info_cache *fcc ,
                                                                                 char **error ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_callable(zval *callable ,
                                                                              uint check_flags ,
                                                                              char **callable_name ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_make_callable(zval *callable ,
                                                                                char **callable_name ) ;
extern char const __attribute__((__visibility__("default")))  *zend_get_module_version(char const   *module_name ) ;
extern int __attribute__((__visibility__("default")))  zend_get_module_started(char const   *module_name ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property(zend_class_entry *ce ,
                                                                             char const   *name ,
                                                                             int name_length ,
                                                                             zval *property ,
                                                                             int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_ex(zend_class_entry *ce ,
                                                                                char const   *name ,
                                                                                int name_length ,
                                                                                zval *property ,
                                                                                int access_type ,
                                                                                char const   *doc_comment ,
                                                                                int doc_comment_len ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_null(zend_class_entry *ce ,
                                                                                  char const   *name ,
                                                                                  int name_length ,
                                                                                  int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_bool(zend_class_entry *ce ,
                                                                                  char const   *name ,
                                                                                  int name_length ,
                                                                                  long value ,
                                                                                  int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_long(zend_class_entry *ce ,
                                                                                  char const   *name ,
                                                                                  int name_length ,
                                                                                  long value ,
                                                                                  int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_double(zend_class_entry *ce ,
                                                                                    char const   *name ,
                                                                                    int name_length ,
                                                                                    double value ,
                                                                                    int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_string(zend_class_entry *ce ,
                                                                                    char const   *name ,
                                                                                    int name_length ,
                                                                                    char const   *value ,
                                                                                    int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_stringl(zend_class_entry *ce ,
                                                                                     char const   *name ,
                                                                                     int name_length ,
                                                                                     char const   *value ,
                                                                                     int value_len ,
                                                                                     int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant(zend_class_entry *ce ,
                                                                                   char const   *name ,
                                                                                   size_t name_length ,
                                                                                   zval *value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_null(zend_class_entry *ce ,
                                                                                        char const   *name ,
                                                                                        size_t name_length ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_long(zend_class_entry *ce ,
                                                                                        char const   *name ,
                                                                                        size_t name_length ,
                                                                                        long value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_bool(zend_class_entry *ce ,
                                                                                        char const   *name ,
                                                                                        size_t name_length ,
                                                                                        zend_bool value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_double(zend_class_entry *ce ,
                                                                                          char const   *name ,
                                                                                          size_t name_length ,
                                                                                          double value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_stringl(zend_class_entry *ce ,
                                                                                           char const   *name ,
                                                                                           size_t name_length ,
                                                                                           char const   *value ,
                                                                                           size_t value_length ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_string(zend_class_entry *ce ,
                                                                                          char const   *name ,
                                                                                          size_t name_length ,
                                                                                          char const   *value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_class_constants(zend_class_entry *class_type ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property(zend_class_entry *scope ,
                                                                             zval *object ,
                                                                             char const   *name ,
                                                                             int name_length ,
                                                                             zval *value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_null(zend_class_entry *scope ,
                                                                                  zval *object ,
                                                                                  char const   *name ,
                                                                                  int name_length ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_bool(zend_class_entry *scope ,
                                                                                  zval *object ,
                                                                                  char const   *name ,
                                                                                  int name_length ,
                                                                                  long value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_long(zend_class_entry *scope ,
                                                                                  zval *object ,
                                                                                  char const   *name ,
                                                                                  int name_length ,
                                                                                  long value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_double(zend_class_entry *scope ,
                                                                                    zval *object ,
                                                                                    char const   *name ,
                                                                                    int name_length ,
                                                                                    double value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_string(zend_class_entry *scope ,
                                                                                    zval *object ,
                                                                                    char const   *name ,
                                                                                    int name_length ,
                                                                                    char const   *value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_stringl(zend_class_entry *scope ,
                                                                                     zval *object ,
                                                                                     char const   *name ,
                                                                                     int name_length ,
                                                                                     char const   *value ,
                                                                                     int value_length ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property(zend_class_entry *scope ,
                                                                                   char const   *name ,
                                                                                   int name_length ,
                                                                                   zval *value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_null(zend_class_entry *scope ,
                                                                                        char const   *name ,
                                                                                        int name_length ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_bool(zend_class_entry *scope ,
                                                                                        char const   *name ,
                                                                                        int name_length ,
                                                                                        long value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_long(zend_class_entry *scope ,
                                                                                        char const   *name ,
                                                                                        int name_length ,
                                                                                        long value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_double(zend_class_entry *scope ,
                                                                                          char const   *name ,
                                                                                          int name_length ,
                                                                                          double value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_string(zend_class_entry *scope ,
                                                                                          char const   *name ,
                                                                                          int name_length ,
                                                                                          char const   *value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_stringl(zend_class_entry *scope ,
                                                                                           char const   *name ,
                                                                                           int name_length ,
                                                                                           char const   *value ,
                                                                                           int value_length ) ;
extern zval __attribute__((__visibility__("default")))  *zend_read_property(zend_class_entry *scope ,
                                                                            zval *object ,
                                                                            char const   *name ,
                                                                            int name_length ,
                                                                            zend_bool silent ) ;
extern zval __attribute__((__visibility__("default")))  *zend_read_static_property(zend_class_entry *scope ,
                                                                                   char const   *name ,
                                                                                   int name_length ,
                                                                                   zend_bool silent ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_get_class_entry(zval const   *zobject ) ;
extern int __attribute__((__visibility__("default")))  zend_get_object_classname(zval const   *object ,
                                                                                 char const   **class_name ,
                                                                                 zend_uint *class_name_len ) ;
extern char __attribute__((__visibility__("default")))  *zend_get_type_by_const(int type ) ;
extern int __attribute__((__visibility__("default")))  _array_init(zval *arg ,
                                                                   uint size ) ;
extern int __attribute__((__visibility__("default")))  _object_init(zval *arg ) ;
extern int __attribute__((__visibility__("default")))  _object_init_ex(zval *arg ,
                                                                       zend_class_entry *ce ) ;
extern int __attribute__((__visibility__("default")))  _object_and_properties_init(zval *arg ,
                                                                                   zend_class_entry *ce ,
                                                                                   HashTable *properties ) ;
extern void __attribute__((__visibility__("default")))  object_properties_init(zend_object *object ,
                                                                               zend_class_entry *class_type ) ;
extern void __attribute__((__visibility__("default")))  zend_merge_properties(zval *obj ,
                                                                              HashTable *properties ,
                                                                              int destroy_ht ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_function(zval *arg ,
                                                                          char const   *key ,
                                                                          void (*function_ptr)(int ht ,
                                                                                               zval *return_value ,
                                                                                               zval **return_value_ptr ,
                                                                                               zval *this_ptr ,
                                                                                               int return_value_used ) ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_long_ex(zval *arg ,
                                                                         char const   *key ,
                                                                         uint key_len ,
                                                                         long n ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_null_ex(zval *arg ,
                                                                         char const   *key ,
                                                                         uint key_len ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_bool_ex(zval *arg ,
                                                                         char const   *key ,
                                                                         uint key_len ,
                                                                         int b ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_resource_ex(zval *arg ,
                                                                             char const   *key ,
                                                                             uint key_len ,
                                                                             int r ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_double_ex(zval *arg ,
                                                                           char const   *key ,
                                                                           uint key_len ,
                                                                           double d ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_string_ex(zval *arg ,
                                                                           char const   *key ,
                                                                           uint key_len ,
                                                                           char *str ,
                                                                           int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_stringl_ex(zval *arg ,
                                                                            char const   *key ,
                                                                            uint key_len ,
                                                                            char *str ,
                                                                            uint length ,
                                                                            int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_zval_ex(zval *arg ,
                                                                         char const   *key ,
                                                                         uint key_len ,
                                                                         zval *value ) ;
extern int __attribute__((__visibility__("default")))  add_index_long(zval *arg ,
                                                                      ulong idx ,
                                                                      long n ) ;
extern int __attribute__((__visibility__("default")))  add_index_null(zval *arg ,
                                                                      ulong idx ) ;
extern int __attribute__((__visibility__("default")))  add_index_bool(zval *arg ,
                                                                      ulong idx ,
                                                                      int b ) ;
extern int __attribute__((__visibility__("default")))  add_index_resource(zval *arg ,
                                                                          ulong idx ,
                                                                          int r ) ;
extern int __attribute__((__visibility__("default")))  add_index_double(zval *arg ,
                                                                        ulong idx ,
                                                                        double d ) ;
extern int __attribute__((__visibility__("default")))  add_index_string(zval *arg ,
                                                                        ulong idx ,
                                                                        char const   *str ,
                                                                        int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_index_stringl(zval *arg ,
                                                                         ulong idx ,
                                                                         char const   *str ,
                                                                         uint length ,
                                                                         int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_index_zval(zval *arg ,
                                                                      ulong index ,
                                                                      zval *value ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_long(zval *arg ,
                                                                           long n ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_null(zval *arg ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_bool(zval *arg ,
                                                                           int b ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_resource(zval *arg ,
                                                                               int r ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_double(zval *arg ,
                                                                             double d ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_string(zval *arg ,
                                                                             char const   *str ,
                                                                             int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_stringl(zval *arg ,
                                                                              char const   *str ,
                                                                              uint length ,
                                                                              int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_zval(zval *arg ,
                                                                           zval *value ) ;
extern int __attribute__((__visibility__("default")))  add_get_assoc_string_ex(zval *arg ,
                                                                               char const   *key ,
                                                                               uint key_len ,
                                                                               char const   *str ,
                                                                               void **dest ,
                                                                               int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_get_assoc_stringl_ex(zval *arg ,
                                                                                char const   *key ,
                                                                                uint key_len ,
                                                                                char const   *str ,
                                                                                uint length ,
                                                                                void **dest ,
                                                                                int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_long(zval *arg ,
                                                                          ulong idx ,
                                                                          long l ,
                                                                          void **dest ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_double(zval *arg ,
                                                                            ulong idx ,
                                                                            double d ,
                                                                            void **dest ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_string(zval *arg ,
                                                                            ulong idx ,
                                                                            char const   *str ,
                                                                            void **dest ,
                                                                            int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_stringl(zval *arg ,
                                                                             ulong idx ,
                                                                             char const   *str ,
                                                                             uint length ,
                                                                             void **dest ,
                                                                             int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_property_long_ex(zval *arg ,
                                                                            char const   *key ,
                                                                            uint key_len ,
                                                                            long l ) ;
extern int __attribute__((__visibility__("default")))  add_property_null_ex(zval *arg ,
                                                                            char const   *key ,
                                                                            uint key_len ) ;
extern int __attribute__((__visibility__("default")))  add_property_bool_ex(zval *arg ,
                                                                            char const   *key ,
                                                                            uint key_len ,
                                                                            int b ) ;
extern int __attribute__((__visibility__("default")))  add_property_resource_ex(zval *arg ,
                                                                                char const   *key ,
                                                                                uint key_len ,
                                                                                long r ) ;
extern int __attribute__((__visibility__("default")))  add_property_double_ex(zval *arg ,
                                                                              char const   *key ,
                                                                              uint key_len ,
                                                                              double d ) ;
extern int __attribute__((__visibility__("default")))  add_property_string_ex(zval *arg ,
                                                                              char const   *key ,
                                                                              uint key_len ,
                                                                              char const   *str ,
                                                                              int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_property_stringl_ex(zval *arg ,
                                                                               char const   *key ,
                                                                               uint key_len ,
                                                                               char const   *str ,
                                                                               uint length ,
                                                                               int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_property_zval_ex(zval *arg ,
                                                                            char const   *key ,
                                                                            uint key_len ,
                                                                            zval *value ) ;
int __attribute__((__visibility__("default")))  call_user_function(HashTable *function_table ,
                                                                   zval **object_pp ,
                                                                   zval *function_name ,
                                                                   zval *retval_ptr ,
                                                                   zend_uint param_count ,
                                                                   zval **params ) ;
int __attribute__((__visibility__("default")))  call_user_function_ex(HashTable *function_table ,
                                                                      zval **object_pp ,
                                                                      zval *function_name ,
                                                                      zval **retval_ptr_ptr ,
                                                                      zend_uint param_count ,
                                                                      zval ***params ,
                                                                      int no_separation ,
                                                                      HashTable *symbol_table ) ;
struct _zend_fcall_info  const __attribute__((__visibility__("default"))) empty_fcall_info ;
struct _zend_fcall_info_cache  const __attribute__((__visibility__("default"))) empty_fcall_info_cache ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_init(zval *callable ,
                                                                            uint check_flags ,
                                                                            zend_fcall_info *fci ,
                                                                            zend_fcall_info_cache *fcc ,
                                                                            char **callable_name ,
                                                                            char **error ) ;
extern void __attribute__((__visibility__("default")))  zend_fcall_info_args_clear(zend_fcall_info *fci ,
                                                                                   int free_mem ) ;
extern void __attribute__((__visibility__("default")))  zend_fcall_info_args_save(zend_fcall_info *fci ,
                                                                                  int *param_count ,
                                                                                  zval ****params ) ;
extern void __attribute__((__visibility__("default")))  zend_fcall_info_args_restore(zend_fcall_info *fci ,
                                                                                     int param_count ,
                                                                                     zval ***params ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_args(zend_fcall_info *fci ,
                                                                            zval *args ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_argp(zend_fcall_info *fci ,
                                                                            int argc ,
                                                                            zval ***argv ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_argv(zend_fcall_info *fci ,
                                                                            int argc ,
                                                                            va_list *argv ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_argn(zend_fcall_info *fci ,
                                                                            int argc 
                                                                            , ...) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_call(zend_fcall_info *fci ,
                                                                            zend_fcall_info_cache *fcc ,
                                                                            zval **retval ,
                                                                            zval *args ) ;
int __attribute__((__visibility__("default")))  zend_call_function(zend_fcall_info *fci ,
                                                                   zend_fcall_info_cache *fci_cache ) ;
extern int __attribute__((__visibility__("default")))  zend_set_hash_symbol(zval *symbol ,
                                                                            char const   *name ,
                                                                            int name_length ,
                                                                            zend_bool is_ref ,
                                                                            int num_symbol_tables 
                                                                            , ...) ;
void __attribute__((__visibility__("default")))  zend_delete_variable(zend_execute_data *ex ,
                                                                      HashTable *ht ,
                                                                      char const   *name ,
                                                                      int name_len ,
                                                                      ulong hash_value ) ;
int __attribute__((__visibility__("default")))  zend_delete_global_variable(char const   *name ,
                                                                            int name_len ) ;
int __attribute__((__visibility__("default")))  zend_delete_global_variable_ex(char const   *name ,
                                                                               int name_len ,
                                                                               ulong hash_value ) ;
void __attribute__((__visibility__("default")))  zend_reset_all_cv(HashTable *symbol_table ) ;
void __attribute__((__visibility__("default")))  zend_rebuild_symbol_table(void) ;
extern void __attribute__((__visibility__("default")))  zif_display_disabled_function(int ht ,
                                                                                      zval *return_value ,
                                                                                      zval **return_value_ptr ,
                                                                                      zval *this_ptr ,
                                                                                      int return_value_used ) ;
extern void __attribute__((__visibility__("default")))  zif_display_disabled_class(int ht ,
                                                                                   zval *return_value ,
                                                                                   zval **return_value_ptr ,
                                                                                   zval *this_ptr ,
                                                                                   int return_value_used ) ;
extern void clean_module_constants(int module_number ) ;
extern void free_zend_constant(zend_constant *c ) ;
extern int zend_startup_constants(void) ;
extern int zend_shutdown_constants(void) ;
extern void zend_register_standard_constants(void) ;
extern void clean_non_persistent_constants(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_constant(char const   *name ,
                                                                         uint name_len ,
                                                                         zval *result ) ;
extern int __attribute__((__visibility__("default")))  zend_get_constant_ex(char const   *name ,
                                                                            uint name_len ,
                                                                            zval *result ,
                                                                            zend_class_entry *scope ,
                                                                            ulong flags ) ;
extern void __attribute__((__visibility__("default")))  zend_register_long_constant(char const   *name ,
                                                                                    uint name_len ,
                                                                                    long lval ,
                                                                                    int flags ,
                                                                                    int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_register_double_constant(char const   *name ,
                                                                                      uint name_len ,
                                                                                      double dval ,
                                                                                      int flags ,
                                                                                      int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_register_string_constant(char const   *name ,
                                                                                      uint name_len ,
                                                                                      char *strval ,
                                                                                      int flags ,
                                                                                      int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_register_stringl_constant(char const   *name ,
                                                                                       uint name_len ,
                                                                                       char *strval ,
                                                                                       uint strlen ,
                                                                                       int flags ,
                                                                                       int module_number ) ;
extern int __attribute__((__visibility__("default")))  zend_register_constant(zend_constant *c ) ;
extern void zend_copy_constants(HashTable *target , HashTable *sourc ) ;
extern void copy_zend_constant(zend_constant *c ) ;
extern zend_constant *zend_quick_get_constant(zend_literal const   *key ,
                                              ulong flags ) ;
extern int __attribute__((__visibility__("default")))  zend_get_resource_handle(zend_extension *extension ) ;
extern void __attribute__((__visibility__("default")))  zend_extension_dispatch_message(int message ,
                                                                                        void *arg ) ;
extern zend_llist __attribute__((__visibility__("default")))  zend_extensions ;
extern void zend_extension_dtor(zend_extension *extension ) ;
extern void zend_append_version_info(zend_extension const   *extension ) ;
extern int zend_startup_extensions_mechanism(void) ;
extern int zend_startup_extensions(void) ;
extern void zend_shutdown_extensions(void) ;
extern int __attribute__((__visibility__("default")))  zend_load_extension(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  zend_register_extension(zend_extension *new_extension ,
                                                                               void *handle ) ;
extern zend_extension __attribute__((__visibility__("default")))  *zend_get_extension(char const   *extension_name ) ;
extern void __attribute__((__visibility__("default")))  zend_exception_set_previous(zval *exception ,
                                                                                    zval *add_previous ) ;
extern void __attribute__((__visibility__("default")))  zend_exception_save(void) ;
extern void __attribute__((__visibility__("default")))  zend_exception_restore(void) ;
extern void zend_throw_exception_internal(zval *exception ) ;
extern void zend_register_default_exception(void) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_exception_get_default(void) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_get_error_exception(void) ;
extern void __attribute__((__visibility__("default")))  zend_register_default_classes(void) ;
extern zval __attribute__((__visibility__("default")))  *zend_throw_exception(zend_class_entry *exception_ce ,
                                                                              char *message ,
                                                                              long code ) ;
extern zval __attribute__((__visibility__("default")))  *zend_throw_exception_ex(zend_class_entry *exception_ce ,
                                                                                 long code ,
                                                                                 char *format 
                                                                                 , ...) ;
extern void __attribute__((__visibility__("default")))  zend_throw_exception_object(zval *exception ) ;
extern void __attribute__((__visibility__("default")))  zend_clear_exception(void) ;
extern zval __attribute__((__visibility__("default")))  *zend_throw_error_exception(zend_class_entry *exception_ce ,
                                                                                    char *message ,
                                                                                    long code ,
                                                                                    int severity ) ;
extern void __attribute__((__visibility__("default")))  (*zend_throw_exception_hook)(zval *ex ) ;
extern void __attribute__((__visibility__("default")))  zend_exception_error(zval *exception ,
                                                                             int severity ) ;
extern int zend_spprintf(char **message , int max_len , char *format  , ...) ;
extern void zend_register_closure_ce(void) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_closure ;
extern void __attribute__((__visibility__("default")))  zend_create_closure(zval *res ,
                                                                            zend_function *op_array ,
                                                                            zend_class_entry *scope ,
                                                                            zval *this_ptr ) ;
extern zend_function __attribute__((__visibility__("default")))  *zend_get_closure_invoke_method(zval *obj ) ;
extern zend_function const __attribute__((__visibility__("default")))  *zend_get_closure_method_def(zval *obj ) ;
extern zval __attribute__((__visibility__("default")))  *zend_get_closure_this_ptr(zval *obj ) ;
extern void __attribute__((__visibility__("default")))  zend_vm_use_old_executor(void) ;
extern void __attribute__((__visibility__("default")))  zend_vm_set_opcode_handler(zend_op *opcode ) ;
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
struct _zend_fcall_info  const __attribute__((__visibility__("default"))) empty_fcall_info  = 
     {(size_t )0, (HashTable *)((void *)0), (zval *)((void *)0),
    (HashTable *)((void *)0), (zval **)((void *)0), (zend_uint )0,
    (zval ***)((void *)0), (zval *)((void *)0), (zend_bool )0};
struct _zend_fcall_info_cache  const __attribute__((__visibility__("default"))) empty_fcall_info_cache  =    {(zend_bool )0,
    (zend_function *)((void *)0), (zend_class_entry *)((void *)0),
    (zend_class_entry *)((void *)0), (zval *)((void *)0)};
static void zend_extension_activator(zend_extension *extension ) 
{ 


  {
  if (extension->activate) {
    (*(extension->activate))();
  } else {

  }
  return;
}
}
static void zend_extension_deactivator(zend_extension *extension ) 
{ 


  {
  if (extension->deactivate) {
    (*(extension->deactivate))();
  } else {

  }
  return;
}
}
static int clean_non_persistent_function(zend_function *function ) 
{ 
  int tmp ;

  {
  if ((int )function->type == 1) {
    tmp = 1 << 1;
  } else {
    tmp = 1;
  }
  return (tmp);
}
}
static int clean_non_persistent_function_full(zend_function *function ) 
{ 


  {
  return ((int )function->type != 1);
}
}
static int clean_non_persistent_class(zend_class_entry **ce ) 
{ 
  int tmp ;

  {
  if ((int )(*ce)->type == 1) {
    tmp = 1 << 1;
  } else {
    tmp = 1;
  }
  return (tmp);
}
}
static int clean_non_persistent_class_full(zend_class_entry **ce ) 
{ 


  {
  return ((int )(*ce)->type != 1);
}
}
void init_executor(void) 
{ 


  {
  zend_init_fpu();
  executor_globals.uninitialized_zval = (zval )zval_used_for_init;
  zval_addref_p(& executor_globals.uninitialized_zval);
  executor_globals.error_zval = (zval )zval_used_for_init;
  executor_globals.uninitialized_zval_ptr = & executor_globals.uninitialized_zval;
  executor_globals.error_zval_ptr = & executor_globals.error_zval;
  zend_ptr_stack_init(& executor_globals.arg_types_stack);
  executor_globals.return_value_ptr_ptr = (zval **)((void *)0);
  executor_globals.symtable_cache_ptr = executor_globals.symtable_cache - 1;
  executor_globals.symtable_cache_limit = (executor_globals.symtable_cache + 32) - 1;
  executor_globals.no_extensions = (zend_bool )0;
  executor_globals.function_table = compiler_globals.function_table;
  executor_globals.class_table = compiler_globals.class_table;
  executor_globals.in_execution = (zend_bool )0;
  executor_globals.in_autoload = (HashTable *)((void *)0);
  executor_globals.autoload_func = (zend_function *)((void *)0);
  executor_globals.error_handling = (zend_error_handling_t )0;
  zend_vm_stack_init();
  zend_vm_stack_push((void *)0);
  _zend_hash_init(& executor_globals.symbol_table, (uint )50,
                  (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                  (void (*)(void * ))(& _zval_ptr_dtor), (zend_bool )0);
  executor_globals.active_symbol_table = & executor_globals.symbol_table;
  zend_llist_apply((zend_llist *)(& zend_extensions),
                   (void (*)(void * ))(& zend_extension_activator));
  executor_globals.opline_ptr = (zend_op **)((void *)0);
  _zend_hash_init(& executor_globals.included_files, (uint )5,
                  (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                  (void (*)(void *pDest ))((void *)0), (zend_bool )0);
  executor_globals.ticks_count = 0;
  executor_globals.user_error_handler = (zval *)((void *)0);
  executor_globals.current_execute_data = (struct _zend_execute_data *)((void *)0);
  zend_stack_init(& executor_globals.user_error_handlers_error_reporting);
  zend_ptr_stack_init(& executor_globals.user_error_handlers);
  zend_ptr_stack_init(& executor_globals.user_exception_handlers);
  zend_objects_store_init(& executor_globals.objects_store, (zend_uint )1024);
  executor_globals.full_tables_cleanup = (zend_bool )0;
  executor_globals.exception = (zval *)((void *)0);
  executor_globals.prev_exception = (zval *)((void *)0);
  executor_globals.scope = (zend_class_entry *)((void *)0);
  executor_globals.called_scope = (zend_class_entry *)((void *)0);
  executor_globals.This = (zval *)((void *)0);
  executor_globals.active_op_array = (zend_op_array *)((void *)0);
  executor_globals.active = (zend_bool )1;
  executor_globals.start_op = (zend_op *)((void *)0);
  return;
}
}
static int zval_call_destructor(zval **zv ) 
{ 
  zend_uint tmp ;

  {
  if ((int )(*zv)->type == 5) {
    tmp = zval_refcount_p(*zv);
    if (tmp == 1U) {
      return (1);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}
void shutdown_destructors(void) 
{ 
  jmp_buf *__orig_bailout ;
  jmp_buf __bailout ;
  int symbols ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int tmp___1 ;

  {
  __orig_bailout = executor_globals.bailout;
  executor_globals.bailout = & __bailout;
  tmp___1 = _setjmp((struct __jmp_buf_tag *)(__bailout));
  if (tmp___1 == 0) {
    while (1) {
      tmp = zend_hash_num_elements((HashTable const   *)(& executor_globals.symbol_table));
      symbols = (int )tmp;
      zend_hash_reverse_apply(& executor_globals.symbol_table,
                              (int (*)(void *pDest ))(& zval_call_destructor));
      tmp___0 = zend_hash_num_elements((HashTable const   *)(& executor_globals.symbol_table));
      if (symbols != (int )tmp___0) {

      } else {
        break;
      }
    }
    zend_objects_store_call_destructors(& executor_globals.objects_store);
  } else {
    executor_globals.bailout = __orig_bailout;
    zend_objects_store_mark_destructed(& executor_globals.objects_store);
  }
  executor_globals.bailout = __orig_bailout;
  return;
}
}
void shutdown_executor(void) 
{ 
  jmp_buf *__orig_bailout ;
  jmp_buf __bailout ;
  int tmp ;
  jmp_buf *__orig_bailout___0 ;
  jmp_buf __bailout___0 ;
  zval *zeh ;
  int tmp___0 ;
  jmp_buf *__orig_bailout___1 ;
  jmp_buf __bailout___1 ;
  int tmp___1 ;
  jmp_buf *__orig_bailout___2 ;
  jmp_buf __bailout___2 ;
  int tmp___2 ;
  jmp_buf *__orig_bailout___3 ;
  jmp_buf __bailout___3 ;
  int tmp___3 ;
  jmp_buf *__orig_bailout___4 ;
  jmp_buf __bailout___4 ;
  int tmp___4 ;

  {
  __orig_bailout = executor_globals.bailout;
  executor_globals.bailout = & __bailout;
  tmp = _setjmp((struct __jmp_buf_tag *)(__bailout));
  if (tmp == 0) {
    zend_llist_apply((zend_llist *)(& zend_extensions),
                     (void (*)(void * ))(& zend_extension_deactivator));
    zend_hash_graceful_reverse_destroy(& executor_globals.symbol_table);
  } else {

  }
  executor_globals.bailout = __orig_bailout;
  __orig_bailout___0 = executor_globals.bailout;
  executor_globals.bailout = & __bailout___0;
  tmp___0 = _setjmp((struct __jmp_buf_tag *)(__bailout___0));
  if (tmp___0 == 0) {
    if (executor_globals.user_error_handler) {
      zeh = executor_globals.user_error_handler;
      executor_globals.user_error_handler = (zval *)((void *)0);
      _zval_dtor(zeh);
      while (1) {
        if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)zeh)->u.buffered & 4294967292UL)) {
          gc_remove_zval_from_buffer(zeh);
        } else {

        }
        _efree((void *)zeh);
        break;
      }
    } else {

    }
    if (executor_globals.user_exception_handler) {
      zeh = executor_globals.user_exception_handler;
      executor_globals.user_exception_handler = (zval *)((void *)0);
      _zval_dtor(zeh);
      while (1) {
        if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)zeh)->u.buffered & 4294967292UL)) {
          gc_remove_zval_from_buffer(zeh);
        } else {

        }
        _efree((void *)zeh);
        break;
      }
    } else {

    }
    zend_stack_destroy(& executor_globals.user_error_handlers_error_reporting);
    zend_stack_init(& executor_globals.user_error_handlers_error_reporting);
    zend_ptr_stack_clean(& executor_globals.user_error_handlers,
                         (void (*)(void * ))(& _zval_dtor_wrapper),
                         (zend_bool )1);
    zend_ptr_stack_clean(& executor_globals.user_exception_handlers,
                         (void (*)(void * ))(& _zval_dtor_wrapper),
                         (zend_bool )1);
  } else {

  }
  executor_globals.bailout = __orig_bailout___0;
  __orig_bailout___1 = executor_globals.bailout;
  executor_globals.bailout = & __bailout___1;
  tmp___1 = _setjmp((struct __jmp_buf_tag *)(__bailout___1));
  if (tmp___1 == 0) {
    if (executor_globals.full_tables_cleanup) {
      zend_hash_apply(executor_globals.function_table,
                      (int (*)(void *pDest ))(& zend_cleanup_function_data_full));
      zend_hash_apply(executor_globals.class_table,
                      (int (*)(void *pDest ))(& zend_cleanup_class_data));
    } else {
      zend_hash_reverse_apply(executor_globals.function_table,
                              (int (*)(void *pDest ))(& zend_cleanup_function_data));
      zend_hash_reverse_apply(executor_globals.class_table,
                              (int (*)(void *pDest ))(& zend_cleanup_user_class_data));
      zend_cleanup_internal_classes();
    }
  } else {

  }
  executor_globals.bailout = __orig_bailout___1;
  __orig_bailout___2 = executor_globals.bailout;
  executor_globals.bailout = & __bailout___2;
  tmp___2 = _setjmp((struct __jmp_buf_tag *)(__bailout___2));
  if (tmp___2 == 0) {
    zend_vm_stack_destroy();
    zend_objects_store_free_object_storage(& executor_globals.objects_store);
    if (executor_globals.full_tables_cleanup) {
      zend_hash_apply(executor_globals.function_table,
                      (int (*)(void *pDest ))(& clean_non_persistent_function_full));
      zend_hash_apply(executor_globals.class_table,
                      (int (*)(void *pDest ))(& clean_non_persistent_class_full));
    } else {
      zend_hash_reverse_apply(executor_globals.function_table,
                              (int (*)(void *pDest ))(& clean_non_persistent_function));
      zend_hash_reverse_apply(executor_globals.class_table,
                              (int (*)(void *pDest ))(& clean_non_persistent_class));
    }
    while ((unsigned int )executor_globals.symtable_cache_ptr >= (unsigned int )(executor_globals.symtable_cache)) {
      zend_hash_destroy(*(executor_globals.symtable_cache_ptr));
      _efree((void *)*(executor_globals.symtable_cache_ptr));
      (executor_globals.symtable_cache_ptr) --;
    }
  } else {

  }
  executor_globals.bailout = __orig_bailout___2;
  __orig_bailout___3 = executor_globals.bailout;
  executor_globals.bailout = & __bailout___3;
  tmp___3 = _setjmp((struct __jmp_buf_tag *)(__bailout___3));
  if (tmp___3 == 0) {
    clean_non_persistent_constants();
  } else {

  }
  executor_globals.bailout = __orig_bailout___3;
  __orig_bailout___4 = executor_globals.bailout;
  executor_globals.bailout = & __bailout___4;
  tmp___4 = _setjmp((struct __jmp_buf_tag *)(__bailout___4));
  if (tmp___4 == 0) {
    zend_hash_destroy(& executor_globals.included_files);
    zend_ptr_stack_destroy(& executor_globals.arg_types_stack);
    zend_stack_destroy(& executor_globals.user_error_handlers_error_reporting);
    zend_ptr_stack_destroy(& executor_globals.user_error_handlers);
    zend_ptr_stack_destroy(& executor_globals.user_exception_handlers);
    zend_objects_store_destroy(& executor_globals.objects_store);
    if (executor_globals.in_autoload) {
      zend_hash_destroy(executor_globals.in_autoload);
      _efree((void *)executor_globals.in_autoload);
    } else {

    }
  } else {

  }
  executor_globals.bailout = __orig_bailout___4;
  zend_shutdown_fpu();
  executor_globals.active = (zend_bool )0;
  return;
}
}
char const __attribute__((__visibility__("default")))  *get_active_class_name(char const   **space ) 
{ 
  zend_bool __attribute__((__visibility__("default")))  tmp ;
  zend_class_entry *ce ;
  char const   *tmp___0 ;

  {
  tmp = zend_is_executing();
  if (tmp) {

  } else {
    if (space) {
      *space = "";
    } else {

    }
    return ((char const __attribute__((__visibility__("default")))  *)"");
  }
  switch ((int )((executor_globals.current_execute_data)->function_state.function)->type) {
  case 1: 
  case 2: 
  ce = ((executor_globals.current_execute_data)->function_state.function)->common.scope;
  if (space) {
    if (ce) {
      *space = "::";
    } else {
      *space = "";
    }
  } else {

  }
  if (ce) {
    tmp___0 = ce->name;
  } else {
    tmp___0 = "";
  }
  return ((char const __attribute__((__visibility__("default")))  *)tmp___0);
  default: 
  if (space) {
    *space = "";
  } else {

  }
  return ((char const __attribute__((__visibility__("default")))  *)"");
  }
}
}
char const __attribute__((__visibility__("default")))  *get_active_function_name(void) 
{ 
  zend_bool __attribute__((__visibility__("default")))  tmp ;
  char const   *function_name ;

  {
  tmp = zend_is_executing();
  if (tmp) {

  } else {
    return ((char const __attribute__((__visibility__("default")))  *)((void *)0));
  }
  switch ((int )((executor_globals.current_execute_data)->function_state.function)->type) {
  case 2: 
  function_name = ((zend_op_array *)(executor_globals.current_execute_data)->function_state.function)->function_name;
  if (function_name) {
    return ((char const __attribute__((__visibility__("default")))  *)function_name);
  } else {
    return ((char const __attribute__((__visibility__("default")))  *)"main");
  }
  break;
  case 1: 
  return ((char const __attribute__((__visibility__("default")))  *)((zend_internal_function *)(executor_globals.current_execute_data)->function_state.function)->function_name);
  break;
  default: 
  return ((char const __attribute__((__visibility__("default")))  *)((void *)0));
  }
  return ((char const __attribute__((__visibility__("default")))  *)0);
}
}
char const __attribute__((__visibility__("default")))  *zend_get_executed_filename(void) 
{ 


  {
  if (executor_globals.active_op_array) {
    return ((char const __attribute__((__visibility__("default")))  *)(executor_globals.active_op_array)->filename);
  } else {
    return ((char const __attribute__((__visibility__("default")))  *)"[no active file]");
  }
}
}
uint __attribute__((__visibility__("default")))  zend_get_executed_lineno(void) 
{ 


  {
  if (executor_globals.exception) {
    if (executor_globals.opline_ptr) {
      if ((int )(*(executor_globals.opline_ptr))->opcode == 149) {
        if ((*(executor_globals.opline_ptr))->lineno == 0U) {
          if (executor_globals.opline_before_exception) {
            return ((uint __attribute__((__visibility__("default")))  )(executor_globals.opline_before_exception)->lineno);
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
  if (executor_globals.opline_ptr) {
    return ((uint __attribute__((__visibility__("default")))  )(*(executor_globals.opline_ptr))->lineno);
  } else {
    return ((uint __attribute__((__visibility__("default")))  )0);
  }
}
}
zend_bool __attribute__((__visibility__("default")))  zend_is_executing(void) 
{ 


  {
  return ((zend_bool __attribute__((__visibility__("default")))  )executor_globals.in_execution);
}
}
void __attribute__((__visibility__("default")))  _zval_ptr_dtor(zval **zval_ptr ) 
{ 
  zend_uint tmp ;
  zend_uint tmp___0 ;

  {
  zval_delref_p(*zval_ptr);
  tmp___0 = zval_refcount_p(*zval_ptr);
  if (tmp___0 == 0U) {
    if ((unsigned int )*zval_ptr != (unsigned int )(& executor_globals.uninitialized_zval)) {
      if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)*zval_ptr)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(*zval_ptr);
      } else {

      }
      _zval_dtor(*zval_ptr);
      _efree((void *)*zval_ptr);
    } else {

    }
  } else {
    tmp = zval_refcount_p(*zval_ptr);
    if (tmp == 1U) {
      zval_unset_isref_p(*zval_ptr);
    } else {

    }
    gc_zval_check_possible_root(*zval_ptr);
  }
  return;
}
}
void __attribute__((__visibility__("default")))  _zval_internal_ptr_dtor(zval **zval_ptr ) 
{ 
  zend_uint tmp ;
  zend_uint tmp___0 ;

  {
  zval_delref_p(*zval_ptr);
  tmp___0 = zval_refcount_p(*zval_ptr);
  if (tmp___0 == 0U) {
    _zval_internal_dtor(*zval_ptr);
    free((void *)*zval_ptr);
  } else {
    tmp = zval_refcount_p(*zval_ptr);
    if (tmp == 1U) {
      zval_unset_isref_p(*zval_ptr);
    } else {

    }
  }
  return;
}
}
int __attribute__((__visibility__("default")))  zend_is_true(zval *op ) 
{ 
  int tmp ;

  {
  tmp = i_zend_is_true(op);
  return ((int __attribute__((__visibility__("default")))  )tmp);
}
}
extern char *tsrm_strtok_r(char *s , char const   *delim , char **last ) ;
static void zval_deep_copy(zval **p ) 
{ 
  zval *value ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  while (1) {
    tmp = _emalloc(sizeof(zval_gc_info ));
    value = (zval *)tmp;
    ((zval_gc_info *)value)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  *value = *(*p);
  value->type = (zend_uchar )((int )value->type & -129);
  _zval_copy_ctor(value);
  value->type = (*p)->type;
  value->refcount__gc = (zend_uint )1;
  value->is_ref__gc = (zend_uchar )0;
  *p = value;
  return;
}
}
int __attribute__((__visibility__("default")))  zval_update_constant_ex(zval **pp ,
                                                                        void *arg ,
                                                                        zend_class_entry *scope ) 
{ 
  zval *p ;
  zend_bool inline_change ;
  zval const_value ;
  char *colon ;
  int refcount ;
  zend_uchar is_ref ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_uint tmp___0 ;
  zend_bool tmp___1 ;
  zend_uint tmp___2 ;
  char *actual ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  char *save ;
  char *slash ;
  int actual_len ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  void const   *tmp___5 ;
  int fix_save ;
  void const   *tmp___6 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;
  zval **element ;
  zval *new_val ;
  char *str_index ;
  uint str_index_len ;
  ulong num_index ;
  int ret ;
  zval *new_zv___0 ;
  void __attribute__((__visibility__("default")))  *tmp___8 ;
  zend_uint tmp___9 ;
  zend_bool tmp___10 ;
  zval *tmp___11 ;
  HashTable *tmp_ht ;
  void __attribute__((__visibility__("default")))  *tmp___12 ;
  int __attribute__((__visibility__("default")))  tmp___13 ;
  int __attribute__((__visibility__("default")))  tmp___14 ;
  char *actual___0 ;
  char const   *save___0 ;
  void const   *tmp___15 ;
  void const   *tmp___16 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___17 ;
  int __attribute__((__visibility__("default")))  tmp___18 ;
  void __attribute__((__visibility__("default")))  *tmp___19 ;
  zend_uint tmp___20 ;
  int __attribute__((__visibility__("default")))  tmp___21 ;
  long tmp___22 ;
  int __attribute__((__visibility__("default")))  tmp___23 ;
  int __attribute__((__visibility__("default")))  tmp___24 ;
  int __attribute__((__visibility__("default")))  tmp___25 ;

  {
  p = *pp;
  inline_change = (zend_bool )((zend_uintptr_t )arg);
  if ((int )p->type & 128) {
    zend_error(1, "Cannot declare self-referencing constant \'%s\'",
               p->value.str.val);
  } else
  if (((int )p->type & 15) == 8) {
    tmp___1 = zval_isref_p(*pp);
    if (tmp___1) {

    } else {
      while (1) {
        tmp___0 = zval_refcount_p(*pp);
        if (tmp___0 > 1U) {
          zval_delref_p(*pp);
          while (1) {
            tmp = _emalloc(sizeof(zval_gc_info ));
            new_zv = (zval *)tmp;
            ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          while (1) {
            while (1) {
              new_zv->value = (*pp)->value;
              new_zv->type = (*pp)->type;
              break;
            }
            zval_set_refcount_p(new_zv, (zend_uint )1);
            zval_unset_isref_p(new_zv);
            break;
          }
          *pp = new_zv;
          _zval_copy_ctor(new_zv);
        } else {

        }
        break;
      }
    }
    p = *pp;
    p->type = (zend_uchar )((int )p->type | 128);
    tmp___2 = zval_refcount_p(p);
    refcount = (int )tmp___2;
    is_ref = zval_isref_p(p);
    tmp___7 = zend_get_constant_ex((char const   *)p->value.str.val,
                                   (uint )p->value.str.len, & const_value,
                                   scope, (ulong )((int )p->type & -129));
    if (tmp___7) {
      if (inline_change) {
        if (p->value.str.val) {
          if ((unsigned int )p->value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
            if ((unsigned int )p->value.str.val < (unsigned int )compiler_globals.interned_strings_end) {

            } else {
              _efree((void *)p->value.str.val);
            }
          } else {
            _efree((void *)p->value.str.val);
          }
        } else {

        }
      } else {

      }
      *p = const_value;
    } else {
      actual = p->value.str.val;
      tmp___6 = zend_memrchr((void const   *)p->value.str.val, ':',
                             (size_t )p->value.str.len);
      colon = (char *)tmp___6;
      if (colon) {
        zend_error(1, "Undefined class constant \'%s\'", p->value.str.val);
        p->value.str.len -= (colon - p->value.str.val) + 1;
        if (inline_change) {
          tmp___3 = _estrndup((char const   *)colon,
                              (unsigned int )p->value.str.len);
          colon = (char *)tmp___3;
          while (1) {
            if ((unsigned int )p->value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
              if ((unsigned int )p->value.str.val < (unsigned int )compiler_globals.interned_strings_end) {

              } else {
                _efree((void *)p->value.str.val);
              }
            } else {
              _efree((void *)p->value.str.val);
            }
            break;
          }
          p->value.str.val = colon;
        } else {
          p->value.str.val = colon + 1;
        }
      } else {
        save = actual;
        actual_len = p->value.str.len;
        if ((int )p->type & 16) {
          tmp___5 = zend_memrchr((void const   *)actual, '\\',
                                 (size_t )actual_len);
          slash = (char *)tmp___5;
          if (slash) {
            actual = slash + 1;
            actual_len -= actual - p->value.str.val;
            if (inline_change) {
              tmp___4 = _estrndup((char const   *)actual,
                                  (unsigned int )actual_len);
              actual = (char *)tmp___4;
              p->value.str.val = actual;
              p->value.str.len = actual_len;
            } else {

            }
          } else {

          }
        } else {

        }
        if ((int )*(actual + 0) == 92) {
          if (inline_change) {
            memmove((void *)p->value.str.val,
                    (void const   *)(p->value.str.val + 1),
                    (size_t )p->value.str.len);
            (p->value.str.len) --;
          } else {
            actual ++;
          }
          actual_len --;
        } else {

        }
        if (((int )p->type & 16) == 0) {
          fix_save = 0;
          if ((int )*(save + 0) == 92) {
            save ++;
            fix_save = 1;
          } else {

          }
          zend_error(1, "Undefined constant \'%s\'", save);
          if (fix_save) {
            save --;
          } else {

          }
          if (inline_change) {
            if ((unsigned int )save >= (unsigned int )compiler_globals.interned_strings_start) {
              if ((unsigned int )save < (unsigned int )compiler_globals.interned_strings_end) {

              } else {
                _efree((void *)save);
              }
            } else {
              _efree((void *)save);
            }
          } else {

          }
          save = (char *)((void *)0);
        } else {

        }
        if (inline_change) {
          if (save) {
            if ((unsigned int )save != (unsigned int )actual) {
              if ((unsigned int )save >= (unsigned int )compiler_globals.interned_strings_start) {
                if ((unsigned int )save < (unsigned int )compiler_globals.interned_strings_end) {

                } else {
                  _efree((void *)save);
                }
              } else {
                _efree((void *)save);
              }
            } else {

            }
          } else {

          }
        } else {

        }
        zend_error(1 << 3L, "Use of undefined constant %s - assumed \'%s\'",
                   actual, actual);
        p->type = (zend_uchar )6;
        if (! inline_change) {
          p->value.str.val = actual;
          p->value.str.len = actual_len;
          _zval_copy_ctor(p);
        } else {

        }
      }
    }
    zval_set_refcount_p(p, (zend_uint )refcount);
    zval_set_isref_to_p(p, is_ref);
  } else
  if ((int )p->type == 9) {
    tmp___10 = zval_isref_p(*pp);
    if (tmp___10) {

    } else {
      while (1) {
        tmp___9 = zval_refcount_p(*pp);
        if (tmp___9 > 1U) {
          zval_delref_p(*pp);
          while (1) {
            tmp___8 = _emalloc(sizeof(zval_gc_info ));
            new_zv___0 = (zval *)tmp___8;
            ((zval_gc_info *)new_zv___0)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          while (1) {
            while (1) {
              new_zv___0->value = (*pp)->value;
              new_zv___0->type = (*pp)->type;
              break;
            }
            zval_set_refcount_p(new_zv___0, (zend_uint )1);
            zval_unset_isref_p(new_zv___0);
            break;
          }
          *pp = new_zv___0;
          _zval_copy_ctor(new_zv___0);
        } else {

        }
        break;
      }
    }
    p = *pp;
    p->type = (zend_uchar )4;
    if (! inline_change) {
      tmp_ht = (HashTable *)((void *)0);
      tmp___12 = _emalloc(sizeof(HashTable ));
      tmp_ht = (HashTable *)tmp___12;
      tmp___13 = zend_hash_num_elements((HashTable const   *)p->value.ht);
      _zend_hash_init(tmp_ht, (uint )tmp___13,
                      (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                      (void (*)(void * ))(& _zval_ptr_dtor), (zend_bool )0);
      zend_hash_copy(tmp_ht, p->value.ht,
                     (void (*)(void *pElement ))(& zval_deep_copy),
                     (void *)(& tmp___11), sizeof(zval *));
      p->value.ht = tmp_ht;
    } else {

    }
    zend_hash_internal_pointer_reset_ex(p->value.ht, (HashPosition *)((void *)0));
    while (1) {
      tmp___25 = zend_hash_get_current_data_ex(p->value.ht,
                                               (void **)(& element),
                                               (HashPosition *)((void *)0));
      if (tmp___25 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
      if (! ((int )(*element)->type & 128)) {
        zend_hash_move_forward_ex(p->value.ht, (HashPosition *)((void *)0));
        continue;
      } else {

      }
      (*element)->type = (zend_uchar )((int )(*element)->type & -129);
      tmp___14 = zend_hash_get_current_key_ex((HashTable const   *)p->value.ht,
                                              & str_index, & str_index_len,
                                              & num_index, (zend_bool )0,
                                              (HashPosition *)((void *)0));
      if (tmp___14 != (int __attribute__((__visibility__("default")))  )1) {
        zend_hash_move_forward_ex(p->value.ht, (HashPosition *)((void *)0));
        continue;
      } else {

      }
      tmp___18 = zend_get_constant_ex((char const   *)str_index,
                                      str_index_len - 3U, & const_value, scope,
                                      (ulong )*(str_index + (str_index_len - 2U)));
      if (tmp___18) {

      } else {
        save___0 = (char const   *)str_index;
        tmp___16 = zend_memrchr((void const   *)str_index, ':',
                                str_index_len - 3U);
        colon = (char *)tmp___16;
        if (colon) {
          zend_error(1, "Undefined class constant \'%s\'", str_index);
          str_index_len -= (uint )((colon - str_index) + 1);
          str_index = colon;
        } else {
          if ((int )*(str_index + (str_index_len - 2U)) & 16) {
            tmp___15 = zend_memrchr((void const   *)str_index, '\\',
                                    str_index_len - 3U);
            actual___0 = (char *)tmp___15;
            if (actual___0) {
              actual___0 ++;
              str_index_len -= (uint )(actual___0 - str_index);
              str_index = actual___0;
            } else {

            }
          } else {

          }
          if ((int )*(str_index + 0) == 92) {
            str_index ++;
            str_index_len --;
          } else {

          }
          if ((int const   )*(save___0 + 0) == 92) {
            save___0 ++;
          } else {

          }
          if (((int )*(str_index + (str_index_len - 2U)) & 16) == 0) {
            zend_error(1, "Undefined constant \'%s\'", save___0);
          } else {

          }
          zend_error(1 << 3L, "Use of undefined constant %s - assumed \'%s\'",
                     str_index, str_index);
        }
        while (1) {
          __s = (char const   *)str_index;
          __l = (int )(str_index_len - 3U);
          __z = & const_value;
          __z->value.str.len = __l;
          tmp___17 = _estrndup(__s, (unsigned int )__l);
          __z->value.str.val = (char *)tmp___17;
          __z->type = (zend_uchar )6;
          break;
        }
      }
      tmp___20 = zval_refcount_p(*element);
      if (tmp___20 > 1U) {
        while (1) {
          tmp___19 = _emalloc(sizeof(zval_gc_info ));
          new_val = (zval *)tmp___19;
          ((zval_gc_info *)new_val)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        *new_val = *(*element);
        _zval_copy_ctor(new_val);
        zval_set_refcount_p(new_val, (zend_uint )1);
        zval_unset_isref_p(new_val);
        (*element)->type = (zend_uchar )((int )(*element)->type | 128);
        _zval_ptr_dtor(element);
        *element = new_val;
      } else {

      }
      switch ((int )const_value.type) {
      case 6: 
      ret = zend_symtable_update_current_key_ex(p->value.ht,
                                                (char const   *)const_value.value.str.val,
                                                (uint )(const_value.value.str.len + 1),
                                                1, (HashPosition *)((void *)0));
      break;
      case 1: 
      case 3: 
      tmp___21 = zend_hash_update_current_key_ex(p->value.ht, 2,
                                                 (char const   *)((void *)0),
                                                 (uint )0,
                                                 (ulong )const_value.value.lval,
                                                 1, (HashPosition *)((void *)0));
      ret = (int )tmp___21;
      break;
      case 2: 
      tmp___22 = zend_dval_to_lval(const_value.value.dval);
      tmp___23 = zend_hash_update_current_key_ex(p->value.ht, 2,
                                                 (char const   *)((void *)0),
                                                 (uint )0, (ulong )tmp___22, 1,
                                                 (HashPosition *)((void *)0));
      ret = (int )tmp___23;
      break;
      case 0: 
      tmp___24 = zend_hash_update_current_key_ex(p->value.ht, 1, "", (uint )1,
                                                 (ulong )0, 1,
                                                 (HashPosition *)((void *)0));
      ret = (int )tmp___24;
      break;
      default: 
      ret = 0;
      break;
      }
      if (ret == 0) {
        zend_hash_move_forward_ex(p->value.ht, (HashPosition *)((void *)0));
      } else {

      }
      _zval_dtor(& const_value);
    }
    zend_hash_apply_with_argument(p->value.ht,
                                  (int (*)(void *pDest ,
                                           void *argument ))(& zval_update_constant_inline_change),
                                  (void *)scope);
    zend_hash_internal_pointer_reset_ex(p->value.ht, (HashPosition *)((void *)0));
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
int __attribute__((__visibility__("default")))  zval_update_constant_inline_change(zval **pp ,
                                                                                   void *scope ) 
{ 
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zval_update_constant_ex(pp, (void *)1, (zend_class_entry *)scope);
  return (tmp);
}
}
int __attribute__((__visibility__("default")))  zval_update_constant_no_inline_change(zval **pp ,
                                                                                      void *scope ) 
{ 
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zval_update_constant_ex(pp, (void *)0, (zend_class_entry *)scope);
  return (tmp);
}
}
int __attribute__((__visibility__("default")))  zval_update_constant(zval **pp ,
                                                                     void *arg ) 
{ 
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zval_update_constant_ex(pp, arg, (zend_class_entry *)((void *)0));
  return (tmp);
}
}
int __attribute__((__visibility__("default")))  call_user_function(HashTable *function_table ,
                                                                   zval **object_pp ,
                                                                   zval *function_name ,
                                                                   zval *retval_ptr ,
                                                                   zend_uint param_count ,
                                                                   zval **params ) 
{ 
  zval ***params_array ;
  zend_uint i ;
  int ex_retval ;
  zval *local_retval_ptr ;
  void __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uint tmp___1 ;

  {
  local_retval_ptr = (zval *)((void *)0);
  if (param_count) {
    tmp = _emalloc(sizeof(zval **) * param_count);
    params_array = (zval ***)tmp;
    i = (zend_uint )0;
    while (i < param_count) {
      *(params_array + i) = params + i;
      i ++;
    }
  } else {
    params_array = (zval ***)((void *)0);
  }
  tmp___0 = call_user_function_ex(function_table, object_pp, function_name,
                                  & local_retval_ptr, param_count, params_array,
                                  1, (HashTable *)((void *)0));
  ex_retval = (int )tmp___0;
  if (local_retval_ptr) {
    *retval_ptr = *local_retval_ptr;
    tmp___1 = zval_refcount_p(local_retval_ptr);
    if (tmp___1 > 1U) {
      _zval_copy_ctor(retval_ptr);
      zval_delref_p(local_retval_ptr);
    } else {
      while (1) {
        if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)local_retval_ptr)->u.buffered & 4294967292UL)) {
          gc_remove_zval_from_buffer(local_retval_ptr);
        } else {

        }
        _efree((void *)local_retval_ptr);
        break;
      }
    }
    retval_ptr->refcount__gc = (zend_uint )1;
    retval_ptr->is_ref__gc = (zend_uchar )0;
  } else {
    *retval_ptr = (zval )zval_used_for_init;
  }
  if (params_array) {
    _efree((void *)params_array);
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )ex_retval);
}
}
int __attribute__((__visibility__("default")))  call_user_function_ex(HashTable *function_table ,
                                                                      zval **object_pp ,
                                                                      zval *function_name ,
                                                                      zval **retval_ptr_ptr ,
                                                                      zend_uint param_count ,
                                                                      zval ***params ,
                                                                      int no_separation ,
                                                                      HashTable *symbol_table ) 
{ 
  zend_fcall_info fci ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  fci.size = sizeof(fci);
  fci.function_table = function_table;
  if (object_pp) {
    fci.object_ptr = *object_pp;
  } else {
    fci.object_ptr = (zval *)((void *)0);
  }
  fci.function_name = function_name;
  fci.retval_ptr_ptr = retval_ptr_ptr;
  fci.param_count = param_count;
  fci.params = params;
  fci.no_separation = (zend_bool )no_separation;
  fci.symbol_table = symbol_table;
  tmp = zend_call_function(& fci, (zend_fcall_info_cache *)((void *)0));
  return (tmp);
}
}
int __attribute__((__visibility__("default")))  zend_call_function(zend_fcall_info *fci ,
                                                                   zend_fcall_info_cache *fci_cache ) 
{ 
  zend_uint i ;
  zval **original_return_value ;
  HashTable *calling_symbol_table ;
  zend_op_array *original_op_array ;
  zend_op **original_opline_ptr ;
  zend_class_entry *current_scope ;
  zend_class_entry *current_called_scope ;
  zend_class_entry *calling_scope ;
  zend_class_entry *called_scope ;
  zval *current_this ;
  zend_execute_data execute_data ;
  zend_fcall_info_cache fci_cache_local ;
  char *callable_name ;
  char *error ;
  zend_bool __attribute__((__visibility__("default")))  tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  long tmp___2 ;
  zval *param ;
  zval *new_zval ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  unsigned int tmp___5 ;
  void __attribute__((__visibility__("default")))  *tmp___6 ;
  zend_bool tmp___7 ;
  zend_uint tmp___8 ;
  void __attribute__((__visibility__("default")))  *tmp___9 ;
  void __attribute__((__visibility__("default")))  *tmp___10 ;
  zend_bool tmp___11 ;
  unsigned int tmp___12 ;
  zval *this_ptr ;
  void __attribute__((__visibility__("default")))  *tmp___13 ;
  zend_bool tmp___14 ;
  int call_via_handler ;
  void __attribute__((__visibility__("default")))  *tmp___15 ;
  void __attribute__((__visibility__("default")))  *tmp___16 ;

  {
  calling_scope = (zend_class_entry *)((void *)0);
  called_scope = (zend_class_entry *)((void *)0);
  *(fci->retval_ptr_ptr) = (zval *)((void *)0);
  if (! executor_globals.active) {
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  if (executor_globals.exception) {
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  switch (fci->size) {
  case sizeof(zend_fcall_info ): 
  break;
  default: 
  zend_error(1, "Corrupted fcall_info provided to zend_call_function()");
  break;
  }
  if (executor_globals.current_execute_data) {
    execute_data = *(executor_globals.current_execute_data);
    execute_data.op_array = (zend_op_array *)((void *)0);
    execute_data.opline = (struct _zend_op *)((void *)0);
    execute_data.object = (zval *)((void *)0);
  } else {
    memset((void *)(& execute_data), 0, sizeof(zend_execute_data ));
  }
  if (! fci_cache) {
    goto _L;
  } else
  if (! fci_cache->initialized) {
    _L: /* CIL Label */ 
    error = (char *)((void *)0);
    if (! fci_cache) {
      fci_cache = & fci_cache_local;
    } else {

    }
    tmp = zend_is_callable_ex(fci->function_name, fci->object_ptr,
                              (uint )(1 << 3), & callable_name,
                              (int *)((void *)0), fci_cache, & error);
    if (tmp) {
      if (error) {
        if ((int )*(error + 0) >= 97) {
          if ((int )*(error + 0) <= 122) {
            *(error + 0) = (char )((int )*(error + 0) + -32);
          } else {

          }
        } else {

        }
        zend_error(1 << 11L, "%s", error);
        _efree((void *)error);
      } else {

      }
    } else {
      if (error) {
        zend_error(1 << 1L, "Invalid callback %s, %s", callable_name, error);
        _efree((void *)error);
      } else {

      }
      if (callable_name) {
        _efree((void *)callable_name);
      } else {

      }
      return ((int __attribute__((__visibility__("default")))  )-1);
    }
    _efree((void *)callable_name);
  } else {

  }
  execute_data.function_state.function = fci_cache->function_handler;
  calling_scope = fci_cache->calling_scope;
  called_scope = fci_cache->called_scope;
  fci->object_ptr = fci_cache->object_ptr;
  execute_data.object = fci->object_ptr;
  if (fci->object_ptr) {
    if ((int )(fci->object_ptr)->type == 5) {
      if (! executor_globals.objects_store.object_buckets) {
        return ((int __attribute__((__visibility__("default")))  )-1);
      } else
      if (! (executor_globals.objects_store.object_buckets + (fci->object_ptr)->value.obj.handle)->valid) {
        return ((int __attribute__((__visibility__("default")))  )-1);
      } else {

      }
    } else {

    }
  } else {

  }
  if ((execute_data.function_state.function)->common.fn_flags & 262146U) {
    if ((execute_data.function_state.function)->common.fn_flags & 2U) {
      zend_error_noreturn(1, "Cannot call abstract method %s::%s()",
                          ((execute_data.function_state.function)->common.scope)->name,
                          (execute_data.function_state.function)->common.function_name);
    } else {

    }
    if ((execute_data.function_state.function)->common.fn_flags & 262144U) {
      if ((execute_data.function_state.function)->common.scope) {
        tmp___0 = "::";
      } else {
        tmp___0 = "";
      }
      if ((execute_data.function_state.function)->common.scope) {
        tmp___1 = ((execute_data.function_state.function)->common.scope)->name;
      } else {
        tmp___1 = "";
      }
      zend_error(1 << 13L, "Function %s%s%s() is deprecated", tmp___1, tmp___0,
                 (execute_data.function_state.function)->common.function_name);
    } else {

    }
  } else {

  }
  while (1) {
    tmp___2 = __builtin_expect((long )(fci->param_count + 1U > (zend_uint )((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top)),
                               0L);
    if (tmp___2) {
      zend_vm_stack_extend((int )(fci->param_count + 1U));
    } else {

    }
    break;
  }
  i = (zend_uint )0;
  while (i < fci->param_count) {
    if (execute_data.function_state.function) {
      if ((execute_data.function_state.function)->common.arg_info) {
        if (i + 1U <= (execute_data.function_state.function)->common.num_args) {
          tmp___12 = (unsigned int )((int )((execute_data.function_state.function)->common.arg_info + ((i + 1U) - 1U))->pass_by_reference & 3);
        } else {
          tmp___12 = (execute_data.function_state.function)->common.fn_flags & 50331648U;
        }
      } else {
        tmp___12 = (execute_data.function_state.function)->common.fn_flags & 50331648U;
      }
      if (tmp___12) {
        tmp___7 = zval_isref_p(*(*(fci->params + i)));
        if (tmp___7) {

        } else {
          tmp___8 = zval_refcount_p(*(*(fci->params + i)));
          if (tmp___8 > 1U) {
            if (fci->no_separation) {
              if (execute_data.function_state.function) {
                if ((execute_data.function_state.function)->common.arg_info) {
                  if (i + 1U <= (execute_data.function_state.function)->common.num_args) {
                    tmp___5 = (unsigned int )((int )((execute_data.function_state.function)->common.arg_info + ((i + 1U) - 1U))->pass_by_reference & 2);
                  } else {
                    tmp___5 = (execute_data.function_state.function)->common.fn_flags & 33554432U;
                  }
                } else {
                  tmp___5 = (execute_data.function_state.function)->common.fn_flags & 33554432U;
                }
                if (tmp___5) {

                } else {
                  goto _L___0;
                }
              } else {
                _L___0: /* CIL Label */ 
                if (i) {
                  zend_vm_stack_push_nocheck((void *)((zend_uintptr_t )i));
                  zend_vm_stack_clear_multiple();
                } else {

                }
                if ((execute_data.function_state.function)->common.scope) {
                  tmp___3 = "::";
                } else {
                  tmp___3 = "";
                }
                if ((execute_data.function_state.function)->common.scope) {
                  tmp___4 = ((execute_data.function_state.function)->common.scope)->name;
                } else {
                  tmp___4 = "";
                }
                zend_error(1 << 1L,
                           "Parameter %d to %s%s%s() expected to be a reference, value given",
                           i + 1U, tmp___4, tmp___3,
                           (execute_data.function_state.function)->common.function_name);
                return ((int __attribute__((__visibility__("default")))  )-1);
              }
            } else {

            }
            while (1) {
              tmp___6 = _emalloc(sizeof(zval_gc_info ));
              new_zval = (zval *)tmp___6;
              ((zval_gc_info *)new_zval)->u.buffered = (gc_root_buffer *)((void *)0);
              break;
            }
            *new_zval = *(*(*(fci->params + i)));
            _zval_copy_ctor(new_zval);
            zval_set_refcount_p(new_zval, (zend_uint )1);
            zval_delref_p(*(*(fci->params + i)));
            *(*(fci->params + i)) = new_zval;
          } else {

          }
        }
        zval_addref_p(*(*(fci->params + i)));
        zval_set_isref_p(*(*(fci->params + i)));
        param = *(*(fci->params + i));
      } else {
        goto _L___2;
      }
    } else {
      _L___2: /* CIL Label */ 
      tmp___11 = zval_isref_p(*(*(fci->params + i)));
      if (tmp___11) {
        if (((execute_data.function_state.function)->common.fn_flags & 2097152U) == 0U) {
          while (1) {
            tmp___9 = _emalloc(sizeof(zval_gc_info ));
            param = (zval *)tmp___9;
            ((zval_gc_info *)param)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          *param = *(*(*(fci->params + i)));
          param->refcount__gc = (zend_uint )1;
          param->is_ref__gc = (zend_uchar )0;
          _zval_copy_ctor(param);
        } else {
          goto _L___1;
        }
      } else
      _L___1: /* CIL Label */ 
      if ((unsigned int )*(*(fci->params + i)) != (unsigned int )(& executor_globals.uninitialized_zval)) {
        zval_addref_p(*(*(fci->params + i)));
        param = *(*(fci->params + i));
      } else {
        while (1) {
          tmp___10 = _emalloc(sizeof(zval_gc_info ));
          param = (zval *)tmp___10;
          ((zval_gc_info *)param)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        *param = *(*(*(fci->params + i)));
        param->refcount__gc = (zend_uint )1;
        param->is_ref__gc = (zend_uchar )0;
      }
    }
    zend_vm_stack_push_nocheck((void *)param);
    i ++;
  }
  execute_data.function_state.arguments = zend_vm_stack_top();
  zend_vm_stack_push_nocheck((void *)((zend_uintptr_t )fci->param_count));
  current_scope = executor_globals.scope;
  executor_globals.scope = calling_scope;
  current_this = executor_globals.This;
  current_called_scope = executor_globals.called_scope;
  if (called_scope) {
    executor_globals.called_scope = called_scope;
  } else
  if ((int )(execute_data.function_state.function)->type != 1) {
    executor_globals.called_scope = (zend_class_entry *)((void *)0);
  } else {

  }
  if (fci->object_ptr) {
    if ((execute_data.function_state.function)->common.fn_flags & 1U) {
      executor_globals.This = (zval *)((void *)0);
    } else {
      executor_globals.This = fci->object_ptr;
      tmp___14 = zval_isref_p(executor_globals.This);
      if (tmp___14) {
        while (1) {
          tmp___13 = _emalloc(sizeof(zval_gc_info ));
          this_ptr = (zval *)tmp___13;
          ((zval_gc_info *)this_ptr)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        *this_ptr = *(executor_globals.This);
        this_ptr->refcount__gc = (zend_uint )1;
        this_ptr->is_ref__gc = (zend_uchar )0;
        _zval_copy_ctor(this_ptr);
        executor_globals.This = this_ptr;
      } else {
        zval_addref_p(executor_globals.This);
      }
    }
  } else {
    executor_globals.This = (zval *)((void *)0);
  }
  execute_data.prev_execute_data = executor_globals.current_execute_data;
  executor_globals.current_execute_data = & execute_data;
  if ((int )(execute_data.function_state.function)->type == 2) {
    calling_symbol_table = executor_globals.active_symbol_table;
    executor_globals.scope = (execute_data.function_state.function)->common.scope;
    if (fci->symbol_table) {
      executor_globals.active_symbol_table = fci->symbol_table;
    } else {
      executor_globals.active_symbol_table = (HashTable *)((void *)0);
    }
    original_return_value = executor_globals.return_value_ptr_ptr;
    original_op_array = executor_globals.active_op_array;
    executor_globals.return_value_ptr_ptr = fci->retval_ptr_ptr;
    executor_globals.active_op_array = (zend_op_array *)execute_data.function_state.function;
    original_opline_ptr = executor_globals.opline_ptr;
    (*zend_execute)(executor_globals.active_op_array);
    if (! fci->symbol_table) {
      if (executor_globals.active_symbol_table) {
        if ((unsigned int )executor_globals.symtable_cache_ptr >= (unsigned int )executor_globals.symtable_cache_limit) {
          zend_hash_destroy(executor_globals.active_symbol_table);
          _efree((void *)executor_globals.active_symbol_table);
        } else {
          zend_hash_clean(executor_globals.active_symbol_table);
          (executor_globals.symtable_cache_ptr) ++;
          *(executor_globals.symtable_cache_ptr) = executor_globals.active_symbol_table;
        }
      } else {

      }
    } else {

    }
    executor_globals.active_symbol_table = calling_symbol_table;
    executor_globals.active_op_array = original_op_array;
    executor_globals.return_value_ptr_ptr = original_return_value;
    executor_globals.opline_ptr = original_opline_ptr;
  } else
  if ((int )(execute_data.function_state.function)->type == 1) {
    call_via_handler = ((execute_data.function_state.function)->common.fn_flags & 2097152U) != 0U;
    while (1) {
      tmp___15 = _emalloc(sizeof(zval_gc_info ));
      *(fci->retval_ptr_ptr) = (zval *)tmp___15;
      ((zval_gc_info *)*(fci->retval_ptr_ptr))->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    *(*(fci->retval_ptr_ptr)) = (zval )zval_used_for_init;
    if ((execute_data.function_state.function)->common.scope) {
      executor_globals.scope = (execute_data.function_state.function)->common.scope;
    } else {

    }
    (*(((zend_internal_function *)execute_data.function_state.function)->handler))((int )fci->param_count,
                                                                                   *(fci->retval_ptr_ptr),
                                                                                   fci->retval_ptr_ptr,
                                                                                   fci->object_ptr,
                                                                                   1);
    if (executor_globals.exception) {
      if (fci->retval_ptr_ptr) {
        _zval_ptr_dtor(fci->retval_ptr_ptr);
        *(fci->retval_ptr_ptr) = (zval *)((void *)0);
      } else {

      }
    } else {

    }
    if (call_via_handler) {
      fci_cache->initialized = (zend_bool )0;
    } else {

    }
  } else {
    while (1) {
      tmp___16 = _emalloc(sizeof(zval_gc_info ));
      *(fci->retval_ptr_ptr) = (zval *)tmp___16;
      ((zval_gc_info *)*(fci->retval_ptr_ptr))->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    *(*(fci->retval_ptr_ptr)) = (zval )zval_used_for_init;
    if (fci->object_ptr) {
      (*(((fci->object_ptr)->value.obj.handlers)->call_method))((execute_data.function_state.function)->common.function_name,
                                                                (int )fci->param_count,
                                                                *(fci->retval_ptr_ptr),
                                                                fci->retval_ptr_ptr,
                                                                fci->object_ptr,
                                                                1);
    } else {
      zend_error_noreturn(1, "Cannot call overloaded function for non-object");
    }
    if ((int )(execute_data.function_state.function)->type == 5) {
      _efree((void *)((char *)(execute_data.function_state.function)->common.function_name));
    } else {

    }
    _efree((void *)execute_data.function_state.function);
    if (executor_globals.exception) {
      if (fci->retval_ptr_ptr) {
        _zval_ptr_dtor(fci->retval_ptr_ptr);
        *(fci->retval_ptr_ptr) = (zval *)((void *)0);
      } else {

      }
    } else {

    }
  }
  zend_vm_stack_clear_multiple();
  if (executor_globals.This) {
    _zval_ptr_dtor(& executor_globals.This);
  } else {

  }
  executor_globals.called_scope = current_called_scope;
  executor_globals.scope = current_scope;
  executor_globals.This = current_this;
  executor_globals.current_execute_data = execute_data.prev_execute_data;
  if (executor_globals.exception) {
    zend_throw_exception_internal((zval *)((void *)0));
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
int __attribute__((__visibility__("default")))  zend_lookup_class_ex(char const   *name ,
                                                                     int name_length ,
                                                                     zend_literal const   *key ,
                                                                     int use_autoload ,
                                                                     zend_class_entry ***ce ) 
{ 
  zval **args[1] ;
  zval autoload_function ;
  zval *class_name_ptr ;
  zval *retval_ptr ;
  int retval ;
  int lc_length ;
  char *lc_name ;
  char *lc_free ;
  zend_fcall_info fcall_info ;
  zend_fcall_info_cache fcall_cache ;
  char dummy ;
  ulong hash ;
  zend_bool use_heap ;
  long tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  long tmp___5 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___6 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  long tmp___8 ;
  int __attribute__((__visibility__("default")))  tmp___9 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___10 ;
  void __attribute__((__visibility__("default")))  *tmp___11 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___12 ;
  char const   *__s___1 ;
  int __l___1 ;
  zval *__z___1 ;
  char __attribute__((__visibility__("default")))  *tmp___13 ;
  int __attribute__((__visibility__("default")))  tmp___14 ;
  int __attribute__((__visibility__("default")))  tmp___15 ;
  long tmp___16 ;

  {
  retval_ptr = (zval *)((void *)0);
  dummy = (char)1;
  if (key) {
    lc_name = (char *)key->constant.value.str.val;
    lc_length = (int )(key->constant.value.str.len + 1);
    hash = (ulong )key->hash_value;
  } else {
    if ((unsigned int )name == (unsigned int )((void *)0)) {
      return ((int __attribute__((__visibility__("default")))  )-1);
    } else
    if (! name_length) {
      return ((int __attribute__((__visibility__("default")))  )-1);
    } else {

    }
    tmp___2 = __builtin_expect((long )(name_length + 1 > 32768), 0L);
    use_heap = (zend_bool )tmp___2;
    if (use_heap) {
      tmp___0 = _emalloc((size_t )(name_length + 1));
      lc_name = (char *)tmp___0;
    } else {
      tmp___1 = __builtin_alloca((unsigned int )(name_length + 1));
      lc_name = (char *)tmp___1;
    }
    lc_free = lc_name;
    zend_str_tolower_copy(lc_name, name, (unsigned int )name_length);
    lc_length = name_length + 1;
    if ((int )*(lc_name + 0) == 92) {
      lc_name ++;
      lc_length --;
    } else {

    }
    hash = zend_inline_hash_func((char const   *)lc_name, (uint )lc_length);
  }
  tmp___4 = zend_hash_quick_find((HashTable const   *)executor_globals.class_table,
                                 (char const   *)lc_name, (uint )lc_length,
                                 hash, (void **)ce);
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    if (! key) {
      while (1) {
        tmp___3 = __builtin_expect((long )use_heap, 0L);
        if (tmp___3) {
          _efree((void *)lc_free);
        } else {

        }
        break;
      }
    } else {

    }
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  if (! use_autoload) {
    goto _L;
  } else {
    tmp___6 = zend_is_compiling();
    if (tmp___6) {
      _L: /* CIL Label */ 
      if (! key) {
        while (1) {
          tmp___5 = __builtin_expect((long )use_heap, 0L);
          if (tmp___5) {
            _efree((void *)lc_free);
          } else {

          }
          break;
        }
      } else {

      }
      return ((int __attribute__((__visibility__("default")))  )-1);
    } else {

    }
  }
  if ((unsigned int )executor_globals.in_autoload == (unsigned int )((void *)0)) {
    tmp___7 = _emalloc(sizeof(HashTable ));
    executor_globals.in_autoload = (HashTable *)tmp___7;
    _zend_hash_init(executor_globals.in_autoload, (uint )0,
                    (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                    (void (*)(void *pDest ))((void *)0), (zend_bool )0);
  } else {

  }
  tmp___9 = _zend_hash_quick_add_or_update(executor_globals.in_autoload,
                                           (char const   *)lc_name,
                                           (uint )lc_length, hash,
                                           (void *)((void **)(& dummy)),
                                           sizeof(char ), (void **)((void *)0),
                                           1 << 1);
  if (tmp___9 == (int __attribute__((__visibility__("default")))  )-1) {
    if (! key) {
      while (1) {
        tmp___8 = __builtin_expect((long )use_heap, 0L);
        if (tmp___8) {
          _efree((void *)lc_free);
        } else {

        }
        break;
      }
    } else {

    }
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  while (1) {
    __s = "__autoload";
    __l = (int )(sizeof("__autoload") - 1U);
    __z = & autoload_function;
    __z->value.str.len = __l;
    __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
    __z->type = (zend_uchar )6;
    break;
  }
  while (1) {
    tmp___11 = _emalloc(sizeof(zval_gc_info ));
    class_name_ptr = (zval *)tmp___11;
    ((zval_gc_info *)class_name_ptr)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  class_name_ptr->refcount__gc = (zend_uint )1;
  class_name_ptr->is_ref__gc = (zend_uchar )0;
  if ((int const   )*(name + 0) == 92) {
    while (1) {
      __s___0 = name + 1;
      __l___0 = name_length - 1;
      __z___0 = class_name_ptr;
      __z___0->value.str.len = __l___0;
      tmp___12 = _estrndup(__s___0, (unsigned int )__l___0);
      __z___0->value.str.val = (char *)tmp___12;
      __z___0->type = (zend_uchar )6;
      break;
    }
  } else {
    while (1) {
      __s___1 = name;
      __l___1 = name_length;
      __z___1 = class_name_ptr;
      __z___1->value.str.len = __l___1;
      tmp___13 = _estrndup(__s___1, (unsigned int )__l___1);
      __z___1->value.str.val = (char *)tmp___13;
      __z___1->type = (zend_uchar )6;
      break;
    }
  }
  args[0] = & class_name_ptr;
  fcall_info.size = sizeof(fcall_info);
  fcall_info.function_table = executor_globals.function_table;
  fcall_info.function_name = & autoload_function;
  fcall_info.symbol_table = (HashTable *)((void *)0);
  fcall_info.retval_ptr_ptr = & retval_ptr;
  fcall_info.param_count = (zend_uint )1;
  fcall_info.params = args;
  fcall_info.object_ptr = (zval *)((void *)0);
  fcall_info.no_separation = (zend_bool )1;
  if (executor_globals.autoload_func) {
    fcall_cache.initialized = (zend_bool )1;
  } else {
    fcall_cache.initialized = (zend_bool )0;
  }
  fcall_cache.function_handler = executor_globals.autoload_func;
  fcall_cache.calling_scope = (zend_class_entry *)((void *)0);
  fcall_cache.called_scope = (zend_class_entry *)((void *)0);
  fcall_cache.object_ptr = (zval *)((void *)0);
  zend_exception_save();
  tmp___14 = zend_call_function(& fcall_info, & fcall_cache);
  retval = (int )tmp___14;
  zend_exception_restore();
  executor_globals.autoload_func = fcall_cache.function_handler;
  _zval_ptr_dtor(& class_name_ptr);
  zend_hash_del_key_or_index(executor_globals.in_autoload,
                             (char const   *)lc_name, (uint )lc_length, hash, 2);
  if (retval_ptr) {
    _zval_ptr_dtor(& retval_ptr);
  } else {

  }
  if (retval == 0) {
    tmp___15 = zend_hash_quick_find((HashTable const   *)executor_globals.class_table,
                                    (char const   *)lc_name, (uint )lc_length,
                                    hash, (void **)ce);
    retval = (int )tmp___15;
  } else {

  }
  if (! key) {
    while (1) {
      tmp___16 = __builtin_expect((long )use_heap, 0L);
      if (tmp___16) {
        _efree((void *)lc_free);
      } else {

      }
      break;
    }
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )retval);
}
}
int __attribute__((__visibility__("default")))  zend_lookup_class(char const   *name ,
                                                                  int name_length ,
                                                                  zend_class_entry ***ce ) 
{ 
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zend_lookup_class_ex(name, name_length,
                             (zend_literal const   *)((void *)0), 1, ce);
  return (tmp);
}
}
int __attribute__((__visibility__("default")))  zend_eval_stringl(char *str ,
                                                                  int str_len ,
                                                                  zval *retval_ptr ,
                                                                  char *string_name ) 
{ 
  zval pv ;
  zend_op_array *new_op_array ;
  zend_op_array *original_active_op_array ;
  zend_uint original_compiler_options ;
  int retval ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_op_array __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *local_retval_ptr ;
  zval **original_return_value_ptr_ptr ;
  zend_op **original_opline_ptr ;
  int orig_interactive ;
  jmp_buf *__orig_bailout ;
  jmp_buf __bailout ;
  int tmp___1 ;
  zend_uint tmp___2 ;

  {
  original_active_op_array = executor_globals.active_op_array;
  if (retval_ptr) {
    pv.value.str.len = (int )(((unsigned int )str_len + sizeof("return ;")) - 1U);
    tmp = _emalloc((size_t )(pv.value.str.len + 1));
    pv.value.str.val = (char *)tmp;
    memcpy((void */* __restrict  */)pv.value.str.val,
           (void const   */* __restrict  */)"return ", sizeof("return ") - 1U);
    memcpy((void */* __restrict  */)((pv.value.str.val + sizeof("return ")) - 1),
           (void const   */* __restrict  */)str, (size_t )str_len);
    *(pv.value.str.val + (pv.value.str.len - 1)) = (char )';';
    *(pv.value.str.val + pv.value.str.len) = (char )'\000';
  } else {
    pv.value.str.len = str_len;
    pv.value.str.val = str;
  }
  pv.type = (zend_uchar )6;
  original_compiler_options = compiler_globals.compiler_options;
  compiler_globals.compiler_options = (zend_uint )0;
  tmp___0 = (*zend_compile_string)(& pv, string_name);
  new_op_array = (zend_op_array *)tmp___0;
  compiler_globals.compiler_options = original_compiler_options;
  if (new_op_array) {
    local_retval_ptr = (zval *)((void *)0);
    original_return_value_ptr_ptr = executor_globals.return_value_ptr_ptr;
    original_opline_ptr = executor_globals.opline_ptr;
    orig_interactive = compiler_globals.interactive;
    executor_globals.return_value_ptr_ptr = & local_retval_ptr;
    executor_globals.active_op_array = new_op_array;
    executor_globals.no_extensions = (zend_bool )1;
    if (! executor_globals.active_symbol_table) {
      zend_rebuild_symbol_table();
    } else {

    }
    compiler_globals.interactive = 0;
    __orig_bailout = executor_globals.bailout;
    executor_globals.bailout = & __bailout;
    tmp___1 = _setjmp((struct __jmp_buf_tag *)(__bailout));
    if (tmp___1 == 0) {
      (*zend_execute)(new_op_array);
    } else {

    }
    executor_globals.bailout = __orig_bailout;
    compiler_globals.interactive = orig_interactive;
    if (local_retval_ptr) {
      if (retval_ptr) {
        *retval_ptr = *local_retval_ptr;
        tmp___2 = zval_refcount_p(local_retval_ptr);
        if (tmp___2 > 1U) {
          _zval_copy_ctor(retval_ptr);
          zval_delref_p(local_retval_ptr);
        } else {
          while (1) {
            if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)local_retval_ptr)->u.buffered & 4294967292UL)) {
              gc_remove_zval_from_buffer(local_retval_ptr);
            } else {

            }
            _efree((void *)local_retval_ptr);
            break;
          }
        }
        retval_ptr->refcount__gc = (zend_uint )1;
        retval_ptr->is_ref__gc = (zend_uchar )0;
      } else {
        _zval_ptr_dtor(& local_retval_ptr);
      }
    } else
    if (retval_ptr) {
      *retval_ptr = (zval )zval_used_for_init;
    } else {

    }
    executor_globals.no_extensions = (zend_bool )0;
    executor_globals.opline_ptr = original_opline_ptr;
    executor_globals.active_op_array = original_active_op_array;
    destroy_op_array(new_op_array);
    _efree((void *)new_op_array);
    executor_globals.return_value_ptr_ptr = original_return_value_ptr_ptr;
    retval = 0;
  } else {
    retval = -1;
  }
  if (retval_ptr) {
    _zval_dtor(& pv);
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )retval);
}
}
int __attribute__((__visibility__("default")))  zend_eval_string(char *str ,
                                                                 zval *retval_ptr ,
                                                                 char *string_name ) 
{ 
  size_t tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = strlen((char const   *)str);
  tmp___0 = zend_eval_stringl(str, (int )tmp, retval_ptr, string_name);
  return (tmp___0);
}
}
int __attribute__((__visibility__("default")))  zend_eval_stringl_ex(char *str ,
                                                                     int str_len ,
                                                                     zval *retval_ptr ,
                                                                     char *string_name ,
                                                                     int handle_exceptions ) 
{ 
  int result ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zend_eval_stringl(str, str_len, retval_ptr, string_name);
  result = (int )tmp;
  if (handle_exceptions) {
    if (executor_globals.exception) {
      zend_exception_error(executor_globals.exception, 1);
      result = -1;
    } else {

    }
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )result);
}
}
int __attribute__((__visibility__("default")))  zend_eval_string_ex(char *str ,
                                                                    zval *retval_ptr ,
                                                                    char *string_name ,
                                                                    int handle_exceptions ) 
{ 
  size_t tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = strlen((char const   *)str);
  tmp___0 = zend_eval_stringl_ex(str, (int )tmp, retval_ptr, string_name,
                                 handle_exceptions);
  return (tmp___0);
}
}
void execute_new_code(void) 
{ 
  zend_op *opline ;
  zend_op *end ;
  zend_op *ret_opline ;
  int orig_interactive ;
  int tmp ;

  {
  if (! ((compiler_globals.active_op_array)->fn_flags & 16U)) {
    return;
  } else
  if (compiler_globals.context.backpatch_count > 0) {
    return;
  } else
  if ((compiler_globals.active_op_array)->function_name) {
    return;
  } else
  if ((int )(compiler_globals.active_op_array)->type != 2) {
    return;
  } else {

  }
  ret_opline = get_next_op(compiler_globals.active_op_array);
  ret_opline->opcode = (zend_uchar )62;
  ret_opline->op1_type = (zend_uchar )1;
  tmp = zend_add_literal(compiler_globals.active_op_array,
                         (zval const   *)(& executor_globals.uninitialized_zval));
  ret_opline->op1.constant = (zend_uint )tmp;
  ret_opline->op2_type = (zend_uchar )(1 << 3);
  if (! executor_globals.start_op) {
    executor_globals.start_op = (compiler_globals.active_op_array)->opcodes;
  } else {

  }
  opline = executor_globals.start_op;
  end = (compiler_globals.active_op_array)->opcodes + (compiler_globals.active_op_array)->last;
  while ((unsigned int )opline < (unsigned int )end) {
    if ((int )opline->op1_type == 1) {
      opline->op1.zv = & ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant;
    } else {

    }
    if ((int )opline->op2_type == 1) {
      opline->op2.zv = & ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant;
    } else {

    }
    switch ((int )opline->opcode) {
    case 100: 
    if ((int )(opline->op2.zv)->type != 1) {
      zend_resolve_goto_label(compiler_globals.active_op_array, opline, 1);
    } else {

    }
    case 42: 
    opline->op1.jmp_addr = (compiler_globals.active_op_array)->opcodes + opline->op1.opline_num;
    break;
    case 158: 
    case 152: 
    case 47: 
    case 46: 
    case 44: 
    case 43: 
    opline->op2.jmp_addr = (compiler_globals.active_op_array)->opcodes + opline->op2.opline_num;
    break;
    }
    zend_vm_set_opcode_handler(opline);
    opline ++;
  }
  zend_release_labels();
  executor_globals.return_value_ptr_ptr = (zval **)((void *)0);
  executor_globals.active_op_array = compiler_globals.active_op_array;
  orig_interactive = compiler_globals.interactive;
  compiler_globals.interactive = 0;
  (*zend_execute)(compiler_globals.active_op_array);
  compiler_globals.interactive = orig_interactive;
  if (executor_globals.exception) {
    zend_exception_error(executor_globals.exception, 1);
  } else {

  }
  ((compiler_globals.active_op_array)->last) --;
  executor_globals.start_op = (compiler_globals.active_op_array)->opcodes + (compiler_globals.active_op_array)->last;
  return;
}
}
void __attribute__((__visibility__("default")))  zend_timeout(int dummy ) 
{ 
  char const   *tmp ;

  {
  if (zend_on_timeout) {
    zend_signal_globals.running = 0;
    (*zend_on_timeout)(executor_globals.timeout_seconds);
  } else {

  }
  if (executor_globals.timeout_seconds == 1) {
    tmp = "";
  } else {
    tmp = "s";
  }
  zend_error(1, "Maximum execution time of %d second%s exceeded",
             executor_globals.timeout_seconds, tmp);
  return;
}
}
void __attribute__((__visibility__("default")))  zend_set_timeout(long seconds ,
                                                                  int reset_signals ) 
{ 
  struct itimerval t_r ;
  int signo ;

  {
  executor_globals.timeout_seconds = (int )seconds;
  if (seconds) {
    t_r.it_value.tv_sec = seconds;
    t_r.it_interval.tv_usec = (__suseconds_t )0;
    t_r.it_interval.tv_sec = t_r.it_interval.tv_usec;
    t_r.it_value.tv_usec = t_r.it_interval.tv_sec;
    setitimer(2, (struct itimerval  const  */* __restrict  */)(& t_r),
              (struct itimerval */* __restrict  */)((void *)0));
  } else {

  }
  signo = 27;
  if (reset_signals) {
    zend_signal(signo, (void (*)(int  ))(& zend_timeout));
  } else {

  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_unset_timeout(void) 
{ 
  struct itimerval no_timeout ;

  {
  if (executor_globals.timeout_seconds) {
    no_timeout.it_interval.tv_usec = (__suseconds_t )0;
    no_timeout.it_interval.tv_sec = no_timeout.it_interval.tv_usec;
    no_timeout.it_value.tv_usec = no_timeout.it_interval.tv_sec;
    no_timeout.it_value.tv_sec = no_timeout.it_value.tv_usec;
    setitimer(2, (struct itimerval  const  */* __restrict  */)(& no_timeout),
              (struct itimerval */* __restrict  */)((void *)0));
  } else {

  }
  return;
}
}
zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class(char const   *class_name ,
                                                                               uint class_name_len ,
                                                                               int fetch_type ) 
{ 
  zend_class_entry **pce ;
  int use_autoload ;
  int silent ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  use_autoload = (fetch_type & 128) == 0;
  silent = (fetch_type & 256) != 0;
  fetch_type &= 15;
  check_fetch_type: 
  switch (fetch_type) {
  case 1: 
  if (! executor_globals.scope) {
    zend_error(1, "Cannot access self:: when no class scope is active");
  } else {

  }
  return ((zend_class_entry __attribute__((__visibility__("default")))  *)executor_globals.scope);
  case 2: 
  if (! executor_globals.scope) {
    zend_error(1, "Cannot access parent:: when no class scope is active");
  } else {

  }
  if (! (executor_globals.scope)->parent) {
    zend_error(1,
               "Cannot access parent:: when current class scope has no parent");
  } else {

  }
  return ((zend_class_entry __attribute__((__visibility__("default")))  *)(executor_globals.scope)->parent);
  case 7: 
  if (! executor_globals.called_scope) {
    zend_error(1, "Cannot access static:: when no class scope is active");
  } else {

  }
  return ((zend_class_entry __attribute__((__visibility__("default")))  *)executor_globals.called_scope);
  case 5: 
  fetch_type = zend_get_class_fetch_type(class_name, class_name_len);
  if (fetch_type != 0) {
    goto check_fetch_type;
  } else {

  }
  break;
  }
  tmp = zend_lookup_class_ex(class_name, (int )class_name_len,
                             (zend_literal const   *)((void *)0), use_autoload,
                             & pce);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    if (use_autoload) {
      if (! silent) {
        if (! executor_globals.exception) {
          if (fetch_type == 6) {
            zend_error(1, "Interface \'%s\' not found", class_name);
          } else
          if (fetch_type == 14) {
            zend_error(1, "Trait \'%s\' not found", class_name);
          } else {
            zend_error(1, "Class \'%s\' not found", class_name);
          }
        } else {

        }
      } else {

      }
    } else {

    }
    return ((zend_class_entry __attribute__((__visibility__("default")))  *)((void *)0));
  } else {

  }
  return ((zend_class_entry __attribute__((__visibility__("default")))  *)*pce);
}
}
zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class_by_name(char const   *class_name ,
                                                                                       uint class_name_len ,
                                                                                       zend_literal const   *key ,
                                                                                       int fetch_type ) 
{ 
  zend_class_entry **pce ;
  int use_autoload ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  use_autoload = (fetch_type & 128) == 0;
  tmp = zend_lookup_class_ex(class_name, (int )class_name_len, key,
                             use_autoload, & pce);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    if (use_autoload) {
      if ((fetch_type & 256) == 0) {
        if (! executor_globals.exception) {
          if ((fetch_type & 15) == 6) {
            zend_error(1, "Interface \'%s\' not found", class_name);
          } else
          if ((fetch_type & 15) == 14) {
            zend_error(1, "Trait \'%s\' not found", class_name);
          } else {
            zend_error(1, "Class \'%s\' not found", class_name);
          }
        } else {

        }
      } else {

      }
    } else {

    }
    return ((zend_class_entry __attribute__((__visibility__("default")))  *)((void *)0));
  } else {

  }
  return ((zend_class_entry __attribute__((__visibility__("default")))  *)*pce);
}
}
static int zend_verify_abstract_class_function(zend_function *fn ,
                                               zend_abstract_info *ai ) 
{ 


  {
  if (fn->common.fn_flags & 2U) {
    if (ai->cnt < 3) {
      ai->afn[ai->cnt] = fn;
    } else {

    }
    if (fn->common.fn_flags & 8192U) {
      if (! ai->ctor) {
        (ai->cnt) ++;
        ai->ctor = 1;
      } else {
        ai->afn[ai->cnt] = (zend_function *)((void *)0);
      }
    } else {
      (ai->cnt) ++;
    }
  } else {

  }
  return (0);
}
}
void zend_verify_abstract_class(zend_class_entry *ce ) 
{ 
  zend_abstract_info ai ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;
  char const   *tmp___14 ;
  char const   *tmp___15 ;
  char const   *tmp___16 ;
  char const   *tmp___17 ;

  {
  if (ce->ce_flags & 16U) {
    if (! (ce->ce_flags & 32U)) {
      memset((void *)(& ai), 0, sizeof(ai));
      zend_hash_apply_with_argument(& ce->function_table,
                                    (int (*)(void *pDest , void *argument ))(& zend_verify_abstract_class_function),
                                    (void *)(& ai));
      if (ai.cnt) {
        if (ai.afn[2]) {
          if (ai.afn[3]) {
            tmp___0 = ", ";
          } else {
            goto _L;
          }
        } else {
          _L: /* CIL Label */ 
          if (ai.afn[2]) {
            if (ai.cnt > 3) {
              tmp = ", ...";
            } else {
              tmp = "";
            }
          } else {
            tmp = "";
          }
          tmp___0 = tmp;
        }
        if (ai.afn[2]) {
          tmp___1 = (ai.afn[2])->common.function_name;
        } else {
          tmp___1 = "";
        }
        if (ai.afn[2]) {
          tmp___2 = "::";
        } else {
          tmp___2 = "";
        }
        if (ai.afn[2]) {
          if (ai.afn[2]) {
            if ((ai.afn[2])->common.scope) {
              tmp___3 = ((ai.afn[2])->common.scope)->name;
            } else {
              tmp___3 = "";
            }
          } else {
            tmp___3 = "";
          }
          tmp___4 = tmp___3;
        } else {
          tmp___4 = "";
        }
        if (ai.afn[1]) {
          if (ai.afn[2]) {
            tmp___6 = ", ";
          } else {
            goto _L___0;
          }
        } else {
          _L___0: /* CIL Label */ 
          if (ai.afn[1]) {
            if (ai.cnt > 3) {
              tmp___5 = ", ...";
            } else {
              tmp___5 = "";
            }
          } else {
            tmp___5 = "";
          }
          tmp___6 = tmp___5;
        }
        if (ai.afn[1]) {
          tmp___7 = (ai.afn[1])->common.function_name;
        } else {
          tmp___7 = "";
        }
        if (ai.afn[1]) {
          tmp___8 = "::";
        } else {
          tmp___8 = "";
        }
        if (ai.afn[1]) {
          if (ai.afn[1]) {
            if ((ai.afn[1])->common.scope) {
              tmp___9 = ((ai.afn[1])->common.scope)->name;
            } else {
              tmp___9 = "";
            }
          } else {
            tmp___9 = "";
          }
          tmp___10 = tmp___9;
        } else {
          tmp___10 = "";
        }
        if (ai.afn[0]) {
          if (ai.afn[1]) {
            tmp___12 = ", ";
          } else {
            goto _L___1;
          }
        } else {
          _L___1: /* CIL Label */ 
          if (ai.afn[0]) {
            if (ai.cnt > 3) {
              tmp___11 = ", ...";
            } else {
              tmp___11 = "";
            }
          } else {
            tmp___11 = "";
          }
          tmp___12 = tmp___11;
        }
        if (ai.afn[0]) {
          tmp___13 = (ai.afn[0])->common.function_name;
        } else {
          tmp___13 = "";
        }
        if (ai.afn[0]) {
          tmp___14 = "::";
        } else {
          tmp___14 = "";
        }
        if (ai.afn[0]) {
          if (ai.afn[0]) {
            if ((ai.afn[0])->common.scope) {
              tmp___15 = ((ai.afn[0])->common.scope)->name;
            } else {
              tmp___15 = "";
            }
          } else {
            tmp___15 = "";
          }
          tmp___16 = tmp___15;
        } else {
          tmp___16 = "";
        }
        if (ai.cnt > 1) {
          tmp___17 = "s";
        } else {
          tmp___17 = "";
        }
        zend_error(1,
                   "Class %s contains %d abstract method%s and must therefore be declared abstract or implement the remaining methods (%s%s%s%s%s%s%s%s%s%s%s%s)",
                   ce->name, ai.cnt, tmp___17, tmp___16, tmp___14, tmp___13,
                   tmp___12, tmp___10, tmp___8, tmp___7, tmp___6, tmp___4,
                   tmp___2, tmp___1, tmp___0);
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_reset_all_cv(HashTable *symbol_table ) 
{ 
  zend_execute_data *ex ;
  int i ;

  {
  ex = executor_globals.current_execute_data;
  while (ex) {
    if (ex->op_array) {
      if ((unsigned int )ex->symbol_table == (unsigned int )symbol_table) {
        i = 0;
        while (i < (ex->op_array)->last_var) {
          *(ex->CVs + i) = (zval **)((void *)0);
          i ++;
        }
      } else {

      }
    } else {

    }
    ex = ex->prev_execute_data;
  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_delete_variable(zend_execute_data *ex ,
                                                                      HashTable *ht ,
                                                                      char const   *name ,
                                                                      int name_len ,
                                                                      ulong hash_value ) 
{ 
  int i ;
  int tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp___0 = zend_hash_del_key_or_index(ht, name, (uint )name_len, hash_value, 2);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
    name_len --;
    while (1) {
      if (ex) {
        if ((unsigned int )ex->symbol_table == (unsigned int )ht) {

        } else {
          break;
        }
      } else {
        break;
      }
      if (ex->op_array) {
        i = 0;
        while (i < (ex->op_array)->last_var) {
          if (((ex->op_array)->vars + i)->hash_value == hash_value) {
            if (((ex->op_array)->vars + i)->name_len == name_len) {
              tmp = memcmp((void const   *)((ex->op_array)->vars + i)->name,
                           (void const   *)name, (size_t )name_len);
              if (tmp) {

              } else {
                *(ex->CVs + i) = (zval **)((void *)0);
                break;
              }
            } else {

            }
          } else {

          }
          i ++;
        }
      } else {

      }
      ex = ex->prev_execute_data;
    }
  } else {

  }
  return;
}
}
int __attribute__((__visibility__("default")))  zend_delete_global_variable_ex(char const   *name ,
                                                                               int name_len ,
                                                                               ulong hash_value ) 
{ 
  zend_execute_data *ex ;
  int i ;
  int tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp___1 = zend_hash_quick_exists((HashTable const   *)(& executor_globals.symbol_table),
                                   name, (uint )(name_len + 1), hash_value);
  if (tmp___1) {
    ex = executor_globals.current_execute_data;
    while (ex) {
      if (ex->op_array) {
        if ((unsigned int )ex->symbol_table == (unsigned int )(& executor_globals.symbol_table)) {
          i = 0;
          while (i < (ex->op_array)->last_var) {
            if (((ex->op_array)->vars + i)->hash_value == hash_value) {
              if (((ex->op_array)->vars + i)->name_len == name_len) {
                tmp = memcmp((void const   *)((ex->op_array)->vars + i)->name,
                             (void const   *)name, (size_t )name_len);
                if (tmp) {

                } else {
                  *(ex->CVs + i) = (zval **)((void *)0);
                  break;
                }
              } else {

              }
            } else {

            }
            i ++;
          }
        } else {

        }
      } else {

      }
      ex = ex->prev_execute_data;
    }
    tmp___0 = zend_hash_del_key_or_index(& executor_globals.symbol_table, name,
                                         (uint )(name_len + 1), hash_value, 2);
    return (tmp___0);
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )-1);
}
}
int __attribute__((__visibility__("default")))  zend_delete_global_variable(char const   *name ,
                                                                            int name_len ) 
{ 
  ulong tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_inline_hash_func(name, (uint )(name_len + 1));
  tmp___0 = zend_delete_global_variable_ex(name, name_len, tmp);
  return (tmp___0);
}
}
void __attribute__((__visibility__("default")))  zend_rebuild_symbol_table(void) 
{ 
  zend_uint i ;
  zend_execute_data *ex ;
  HashTable **tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  if (! executor_globals.active_symbol_table) {
    ex = executor_globals.current_execute_data;
    while (1) {
      if (ex) {
        if (! ex->op_array) {

        } else {
          break;
        }
      } else {
        break;
      }
      ex = ex->prev_execute_data;
    }
    if (ex) {
      if (ex->symbol_table) {
        executor_globals.active_symbol_table = ex->symbol_table;
        return;
      } else {

      }
    } else {

    }
    if (ex) {
      if (ex->op_array) {
        if ((unsigned int )executor_globals.symtable_cache_ptr >= (unsigned int )(executor_globals.symtable_cache)) {
          tmp = executor_globals.symtable_cache_ptr;
          (executor_globals.symtable_cache_ptr) --;
          executor_globals.active_symbol_table = *tmp;
        } else {
          tmp___0 = _emalloc(sizeof(HashTable ));
          executor_globals.active_symbol_table = (HashTable *)tmp___0;
          _zend_hash_init(executor_globals.active_symbol_table,
                          (uint )(ex->op_array)->last_var,
                          (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                          (void (*)(void * ))(& _zval_ptr_dtor), (zend_bool )0);
        }
        ex->symbol_table = executor_globals.active_symbol_table;
        if ((ex->op_array)->this_var != 4294967295U) {
          if (! *(ex->CVs + (ex->op_array)->this_var)) {
            if (executor_globals.This) {
              *(ex->CVs + (ex->op_array)->this_var) = ((zval **)ex->CVs + (ex->op_array)->last_var) + (ex->op_array)->this_var;
              *(*(ex->CVs + (ex->op_array)->this_var)) = executor_globals.This;
            } else {

            }
          } else {

          }
        } else {

        }
        i = (zend_uint )0;
        while (i < (zend_uint )(ex->op_array)->last_var) {
          if (*(ex->CVs + i)) {
            _zend_hash_quick_add_or_update(executor_globals.active_symbol_table,
                                           ((ex->op_array)->vars + i)->name,
                                           (uint )(((ex->op_array)->vars + i)->name_len + 1),
                                           ((ex->op_array)->vars + i)->hash_value,
                                           (void *)((void **)*(ex->CVs + i)),
                                           sizeof(zval *),
                                           (void **)(ex->CVs + i), 1);
          } else {

          }
          i ++;
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
