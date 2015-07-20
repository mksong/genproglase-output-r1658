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
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;
struct __anonstruct__IO_cookie_io_functions_t_6 {
   __io_read_fn *read ;
   __io_write_fn *write ;
   __io_seek_fn *seek ;
   __io_close_fn *close ;
};
typedef struct __anonstruct__IO_cookie_io_functions_t_6 _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
struct _IO_cookie_file;
typedef __gnuc_va_list va_list;
typedef __off64_t off_t;
typedef __off64_t off64_t;
typedef __ssize_t ssize_t;
typedef _G_fpos64_t fpos_t;
typedef _G_fpos64_t fpos64_t;
struct obstack;
struct obstack;
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
typedef int error_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_7 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_8 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_7 __wait_terminated ;
   struct __anonstruct___wait_stopped_8 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_9 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_9  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_10 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_10 div_t;
struct __anonstruct_ldiv_t_11 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_11 ldiv_t;
struct __anonstruct_lldiv_t_12 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_12 lldiv_t;
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
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
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
struct __anonstruct___sigset_t_13 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_13 __sigset_t;
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
struct __anonstruct_fd_set_14 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_14 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_15 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_15 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_17 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_17 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_16 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_16 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_18 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_18 pthread_mutexattr_t;
struct __anonstruct___data_20 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_19 {
   struct __anonstruct___data_20 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_19 pthread_cond_t;
union __anonunion_pthread_condattr_t_21 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_21 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_23 {
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
union __anonunion_pthread_rwlock_t_22 {
   struct __anonstruct___data_23 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_22 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_24 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_24 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_25 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_25 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_26 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_26 pthread_barrierattr_t;
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
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_27 {
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
enum __anonenum_28 {
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
enum __anonenum_29 {
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
typedef long __gwchar_t;
struct __anonstruct_imaxdiv_t_30 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_imaxdiv_t_30 imaxdiv_t;
typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
typedef ssize_t Py_ssize_t;
typedef Py_ssize_t Py_hash_t;
typedef size_t Py_uhash_t;
typedef long double float_t;
typedef long double double_t;
enum __anonenum_31 {
    FP_NAN = 0,
    FP_INFINITE = 1,
    FP_ZERO = 2,
    FP_SUBNORMAL = 3,
    FP_NORMAL = 4
} ;
enum __anonenum__LIB_VERSION_TYPE_32 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;
typedef enum __anonenum__LIB_VERSION_TYPE_32 _LIB_VERSION_TYPE;
struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};
union __anonunion___u_33 {
   float __f ;
   int __i ;
};
union __anonunion___u_34 {
   double __d ;
   int __i[2] ;
};
union __anonunion___u_35 {
   long double __l ;
   int __i[3] ;
};
union __anonunion___n_36 {
   long double __xld ;
   unsigned int __xi[3] ;
};
union __anonunion_37 {
   double __d ;
   int __i[2] ;
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
typedef enum __itimer_which __itimer_which_t;
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
enum _Py_memory_order {
    _Py_memory_order_relaxed = 0,
    _Py_memory_order_acquire = 1,
    _Py_memory_order_release = 2,
    _Py_memory_order_acq_rel = 3,
    _Py_memory_order_seq_cst = 4
} ;
typedef enum _Py_memory_order _Py_memory_order;
struct _Py_atomic_address {
   void *_value ;
};
typedef struct _Py_atomic_address _Py_atomic_address;
struct _Py_atomic_int {
   int _value ;
};
typedef struct _Py_atomic_int _Py_atomic_int;
typedef struct timeval _PyTime_timeval;
struct _typeobject;
struct _object {
   Py_ssize_t ob_refcnt ;
   struct _typeobject *ob_type ;
};
typedef struct _object PyObject;
struct __anonstruct_PyVarObject_38 {
   PyObject ob_base ;
   Py_ssize_t ob_size ;
};
typedef struct __anonstruct_PyVarObject_38 PyVarObject;
typedef PyObject *(*unaryfunc)(PyObject * );
typedef PyObject *(*binaryfunc)(PyObject * , PyObject * );
typedef PyObject *(*ternaryfunc)(PyObject * , PyObject * , PyObject * );
typedef int (*inquiry)(PyObject * );
typedef Py_ssize_t (*lenfunc)(PyObject * );
typedef PyObject *(*ssizeargfunc)(PyObject * , Py_ssize_t  );
typedef PyObject *(*ssizessizeargfunc)(PyObject * , Py_ssize_t  , Py_ssize_t  );
typedef int (*ssizeobjargproc)(PyObject * , Py_ssize_t  , PyObject * );
typedef int (*ssizessizeobjargproc)(PyObject * , Py_ssize_t  , Py_ssize_t  ,
                                    PyObject * );
typedef int (*objobjargproc)(PyObject * , PyObject * , PyObject * );
struct bufferinfo {
   void *buf ;
   PyObject *obj ;
   Py_ssize_t len ;
   Py_ssize_t itemsize ;
   int readonly ;
   int ndim ;
   char *format ;
   Py_ssize_t *shape ;
   Py_ssize_t *strides ;
   Py_ssize_t *suboffsets ;
   Py_ssize_t smalltable[2] ;
   void *internal ;
};
typedef struct bufferinfo Py_buffer;
typedef int (*getbufferproc)(PyObject * , Py_buffer * , int  );
typedef void (*releasebufferproc)(PyObject * , Py_buffer * );
typedef int (*objobjproc)(PyObject * , PyObject * );
typedef int (*visitproc)(PyObject * , void * );
typedef int (*traverseproc)(PyObject * , int (*)(PyObject * , void * ) , void * );
struct __anonstruct_PyNumberMethods_39 {
   PyObject *(*nb_add)(PyObject * , PyObject * ) ;
   PyObject *(*nb_subtract)(PyObject * , PyObject * ) ;
   PyObject *(*nb_multiply)(PyObject * , PyObject * ) ;
   PyObject *(*nb_remainder)(PyObject * , PyObject * ) ;
   PyObject *(*nb_divmod)(PyObject * , PyObject * ) ;
   PyObject *(*nb_power)(PyObject * , PyObject * , PyObject * ) ;
   PyObject *(*nb_negative)(PyObject * ) ;
   PyObject *(*nb_positive)(PyObject * ) ;
   PyObject *(*nb_absolute)(PyObject * ) ;
   int (*nb_bool)(PyObject * ) ;
   PyObject *(*nb_invert)(PyObject * ) ;
   PyObject *(*nb_lshift)(PyObject * , PyObject * ) ;
   PyObject *(*nb_rshift)(PyObject * , PyObject * ) ;
   PyObject *(*nb_and)(PyObject * , PyObject * ) ;
   PyObject *(*nb_xor)(PyObject * , PyObject * ) ;
   PyObject *(*nb_or)(PyObject * , PyObject * ) ;
   PyObject *(*nb_int)(PyObject * ) ;
   void *nb_reserved ;
   PyObject *(*nb_float)(PyObject * ) ;
   PyObject *(*nb_inplace_add)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_subtract)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_multiply)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_remainder)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_power)(PyObject * , PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_lshift)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_rshift)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_and)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_xor)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_or)(PyObject * , PyObject * ) ;
   PyObject *(*nb_floor_divide)(PyObject * , PyObject * ) ;
   PyObject *(*nb_true_divide)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_floor_divide)(PyObject * , PyObject * ) ;
   PyObject *(*nb_inplace_true_divide)(PyObject * , PyObject * ) ;
   PyObject *(*nb_index)(PyObject * ) ;
};
typedef struct __anonstruct_PyNumberMethods_39 PyNumberMethods;
struct __anonstruct_PySequenceMethods_40 {
   Py_ssize_t (*sq_length)(PyObject * ) ;
   PyObject *(*sq_concat)(PyObject * , PyObject * ) ;
   PyObject *(*sq_repeat)(PyObject * , Py_ssize_t  ) ;
   PyObject *(*sq_item)(PyObject * , Py_ssize_t  ) ;
   void *was_sq_slice ;
   int (*sq_ass_item)(PyObject * , Py_ssize_t  , PyObject * ) ;
   void *was_sq_ass_slice ;
   int (*sq_contains)(PyObject * , PyObject * ) ;
   PyObject *(*sq_inplace_concat)(PyObject * , PyObject * ) ;
   PyObject *(*sq_inplace_repeat)(PyObject * , Py_ssize_t  ) ;
};
typedef struct __anonstruct_PySequenceMethods_40 PySequenceMethods;
struct __anonstruct_PyMappingMethods_41 {
   Py_ssize_t (*mp_length)(PyObject * ) ;
   PyObject *(*mp_subscript)(PyObject * , PyObject * ) ;
   int (*mp_ass_subscript)(PyObject * , PyObject * , PyObject * ) ;
};
typedef struct __anonstruct_PyMappingMethods_41 PyMappingMethods;
struct __anonstruct_PyBufferProcs_42 {
   int (*bf_getbuffer)(PyObject * , Py_buffer * , int  ) ;
   void (*bf_releasebuffer)(PyObject * , Py_buffer * ) ;
};
typedef struct __anonstruct_PyBufferProcs_42 PyBufferProcs;
typedef void (*freefunc)(void * );
typedef void (*destructor)(PyObject * );
typedef int (*printfunc)(PyObject * , FILE * , int  );
typedef PyObject *(*getattrfunc)(PyObject * , char * );
typedef PyObject *(*getattrofunc)(PyObject * , PyObject * );
typedef int (*setattrfunc)(PyObject * , char * , PyObject * );
typedef int (*setattrofunc)(PyObject * , PyObject * , PyObject * );
typedef PyObject *(*reprfunc)(PyObject * );
typedef Py_hash_t (*hashfunc)(PyObject * );
typedef PyObject *(*richcmpfunc)(PyObject * , PyObject * , int  );
typedef PyObject *(*getiterfunc)(PyObject * );
typedef PyObject *(*iternextfunc)(PyObject * );
typedef PyObject *(*descrgetfunc)(PyObject * , PyObject * , PyObject * );
typedef int (*descrsetfunc)(PyObject * , PyObject * , PyObject * );
typedef int (*initproc)(PyObject * , PyObject * , PyObject * );
typedef PyObject *(*newfunc)(struct _typeobject * , PyObject * , PyObject * );
typedef PyObject *(*allocfunc)(struct _typeobject * , Py_ssize_t  );
struct PyMethodDef;
struct PyMemberDef;
struct PyGetSetDef;
struct _typeobject {
   PyVarObject ob_base ;
   char const   *tp_name ;
   Py_ssize_t tp_basicsize ;
   Py_ssize_t tp_itemsize ;
   void (*tp_dealloc)(PyObject * ) ;
   int (*tp_print)(PyObject * , FILE * , int  ) ;
   PyObject *(*tp_getattr)(PyObject * , char * ) ;
   int (*tp_setattr)(PyObject * , char * , PyObject * ) ;
   void *tp_reserved ;
   PyObject *(*tp_repr)(PyObject * ) ;
   PyNumberMethods *tp_as_number ;
   PySequenceMethods *tp_as_sequence ;
   PyMappingMethods *tp_as_mapping ;
   Py_hash_t (*tp_hash)(PyObject * ) ;
   PyObject *(*tp_call)(PyObject * , PyObject * , PyObject * ) ;
   PyObject *(*tp_str)(PyObject * ) ;
   PyObject *(*tp_getattro)(PyObject * , PyObject * ) ;
   int (*tp_setattro)(PyObject * , PyObject * , PyObject * ) ;
   PyBufferProcs *tp_as_buffer ;
   long tp_flags ;
   char const   *tp_doc ;
   int (*tp_traverse)(PyObject * , int (*)(PyObject * , void * ) , void * ) ;
   int (*tp_clear)(PyObject * ) ;
   PyObject *(*tp_richcompare)(PyObject * , PyObject * , int  ) ;
   Py_ssize_t tp_weaklistoffset ;
   PyObject *(*tp_iter)(PyObject * ) ;
   PyObject *(*tp_iternext)(PyObject * ) ;
   struct PyMethodDef *tp_methods ;
   struct PyMemberDef *tp_members ;
   struct PyGetSetDef *tp_getset ;
   struct _typeobject *tp_base ;
   PyObject *tp_dict ;
   PyObject *(*tp_descr_get)(PyObject * , PyObject * , PyObject * ) ;
   int (*tp_descr_set)(PyObject * , PyObject * , PyObject * ) ;
   Py_ssize_t tp_dictoffset ;
   int (*tp_init)(PyObject * , PyObject * , PyObject * ) ;
   PyObject *(*tp_alloc)(struct _typeobject * , Py_ssize_t  ) ;
   PyObject *(*tp_new)(struct _typeobject * , PyObject * , PyObject * ) ;
   void (*tp_free)(void * ) ;
   int (*tp_is_gc)(PyObject * ) ;
   PyObject *tp_bases ;
   PyObject *tp_mro ;
   PyObject *tp_cache ;
   PyObject *tp_subclasses ;
   PyObject *tp_weaklist ;
   void (*tp_del)(PyObject * ) ;
   unsigned int tp_version_tag ;
};
typedef struct _typeobject PyTypeObject;
struct __anonstruct_PyType_Slot_43 {
   int slot ;
   void *pfunc ;
};
typedef struct __anonstruct_PyType_Slot_43 PyType_Slot;
struct __anonstruct_PyType_Spec_44 {
   char const   *name ;
   int basicsize ;
   int itemsize ;
   int flags ;
   PyType_Slot *slots ;
};
typedef struct __anonstruct_PyType_Spec_44 PyType_Spec;
struct _heaptypeobject {
   PyTypeObject ht_type ;
   PyNumberMethods as_number ;
   PyMappingMethods as_mapping ;
   PySequenceMethods as_sequence ;
   PyBufferProcs as_buffer ;
   PyObject *ht_name ;
   PyObject *ht_slots ;
};
typedef struct _heaptypeobject PyHeapTypeObject;
struct __anonstruct_gc_45 {
   union _gc_head *gc_next ;
   union _gc_head *gc_prev ;
   Py_ssize_t gc_refs ;
};
union _gc_head {
   struct __anonstruct_gc_45 gc ;
   long double dummy ;
};
typedef union _gc_head PyGC_Head;
struct __anonstruct_PyByteArrayObject_46 {
   PyVarObject ob_base ;
   int ob_exports ;
   Py_ssize_t ob_alloc ;
   char *ob_bytes ;
};
typedef struct __anonstruct_PyByteArrayObject_46 PyByteArrayObject;
struct __anonstruct_PyBytesObject_47 {
   PyVarObject ob_base ;
   Py_hash_t ob_shash ;
   char ob_sval[1] ;
};
typedef struct __anonstruct_PyBytesObject_47 PyBytesObject;
enum __anonenum_48 {
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
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct tm;
typedef unsigned int Py_UCS4;
typedef unsigned short Py_UNICODE;
struct __anonstruct_PyUnicodeObject_49 {
   PyObject ob_base ;
   Py_ssize_t length ;
   Py_UNICODE *str ;
   Py_hash_t hash ;
   int state ;
   PyObject *defenc ;
};
typedef struct __anonstruct_PyUnicodeObject_49 PyUnicodeObject;
struct _longobject;
typedef struct _longobject PyLongObject;
typedef unsigned short digit;
typedef short sdigit;
typedef unsigned long twodigits;
typedef long stwodigits;
struct _longobject {
   PyVarObject ob_base ;
   digit ob_digit[1] ;
};
struct __anonstruct_PyFloatObject_50 {
   PyObject ob_base ;
   double ob_fval ;
};
typedef struct __anonstruct_PyFloatObject_50 PyFloatObject;
struct __anonstruct_Py_complex_51 {
   double real ;
   double imag ;
};
typedef struct __anonstruct_Py_complex_51 Py_complex;
struct __anonstruct_PyComplexObject_52 {
   PyObject ob_base ;
   Py_complex cval ;
};
typedef struct __anonstruct_PyComplexObject_52 PyComplexObject;
struct __anonstruct_PyMemoryViewObject_53 {
   PyObject ob_base ;
   Py_buffer view ;
};
typedef struct __anonstruct_PyMemoryViewObject_53 PyMemoryViewObject;
struct __anonstruct_PyTupleObject_54 {
   PyVarObject ob_base ;
   PyObject *ob_item[1] ;
};
typedef struct __anonstruct_PyTupleObject_54 PyTupleObject;
struct __anonstruct_PyListObject_55 {
   PyVarObject ob_base ;
   PyObject **ob_item ;
   Py_ssize_t allocated ;
};
typedef struct __anonstruct_PyListObject_55 PyListObject;
struct __anonstruct_PyDictEntry_56 {
   Py_hash_t me_hash ;
   PyObject *me_key ;
   PyObject *me_value ;
};
typedef struct __anonstruct_PyDictEntry_56 PyDictEntry;
struct _dictobject;
typedef struct _dictobject PyDictObject;
struct _dictobject {
   PyObject ob_base ;
   Py_ssize_t ma_fill ;
   Py_ssize_t ma_used ;
   Py_ssize_t ma_mask ;
   PyDictEntry *ma_table ;
   PyDictEntry *(*ma_lookup)(PyDictObject *mp , PyObject *key , Py_hash_t hash ) ;
   PyDictEntry ma_smalltable[8] ;
};
struct __anonstruct_setentry_57 {
   Py_hash_t hash ;
   PyObject *key ;
};
typedef struct __anonstruct_setentry_57 setentry;
struct _setobject;
typedef struct _setobject PySetObject;
struct _setobject {
   PyObject ob_base ;
   Py_ssize_t fill ;
   Py_ssize_t used ;
   Py_ssize_t mask ;
   setentry *table ;
   setentry *(*lookup)(PySetObject *so , PyObject *key , Py_hash_t hash ) ;
   setentry smalltable[8] ;
   Py_hash_t hash ;
   PyObject *weakreflist ;
};
typedef PyObject *(*PyCFunction)(PyObject * , PyObject * );
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject * , PyObject * ,
                                             PyObject * );
typedef PyObject *(*PyNoArgsFunction)(PyObject * );
struct PyMethodDef {
   char const   *ml_name ;
   PyObject *(*ml_meth)(PyObject * , PyObject * ) ;
   int ml_flags ;
   char const   *ml_doc ;
};
typedef struct PyMethodDef PyMethodDef;
struct __anonstruct_PyCFunctionObject_58 {
   PyObject ob_base ;
   PyMethodDef *m_ml ;
   PyObject *m_self ;
   PyObject *m_module ;
};
typedef struct __anonstruct_PyCFunctionObject_58 PyCFunctionObject;
struct PyModuleDef;
struct PyModuleDef_Base {
   PyObject ob_base ;
   PyObject *(*m_init)(void) ;
   Py_ssize_t m_index ;
   PyObject *m_copy ;
};
typedef struct PyModuleDef_Base PyModuleDef_Base;
struct PyModuleDef {
   PyModuleDef_Base m_base ;
   char const   *m_name ;
   char const   *m_doc ;
   Py_ssize_t m_size ;
   PyMethodDef *m_methods ;
   int (*m_reload)(PyObject * ) ;
   int (*m_traverse)(PyObject * , int (*)(PyObject * , void * ) , void * ) ;
   int (*m_clear)(PyObject * ) ;
   void (*m_free)(void * ) ;
};
typedef struct PyModuleDef PyModuleDef;
struct __anonstruct_PyFunctionObject_59 {
   PyObject ob_base ;
   PyObject *func_code ;
   PyObject *func_globals ;
   PyObject *func_defaults ;
   PyObject *func_kwdefaults ;
   PyObject *func_closure ;
   PyObject *func_doc ;
   PyObject *func_name ;
   PyObject *func_dict ;
   PyObject *func_weakreflist ;
   PyObject *func_module ;
   PyObject *func_annotations ;
};
typedef struct __anonstruct_PyFunctionObject_59 PyFunctionObject;
struct __anonstruct_PyMethodObject_60 {
   PyObject ob_base ;
   PyObject *im_func ;
   PyObject *im_self ;
   PyObject *im_weakreflist ;
};
typedef struct __anonstruct_PyMethodObject_60 PyMethodObject;
struct __anonstruct_PyInstanceMethodObject_61 {
   PyObject ob_base ;
   PyObject *func ;
};
typedef struct __anonstruct_PyInstanceMethodObject_61 PyInstanceMethodObject;
typedef void (*PyCapsule_Destructor)(PyObject * );
struct _ts;
struct _ts;
struct _is;
struct _is;
struct _is {
   struct _is *next ;
   struct _ts *tstate_head ;
   PyObject *modules ;
   PyObject *modules_by_index ;
   PyObject *sysdict ;
   PyObject *builtins ;
   PyObject *modules_reloading ;
   PyObject *codec_search_path ;
   PyObject *codec_search_cache ;
   PyObject *codec_error_registry ;
   int codecs_initialized ;
   int fscodec_initialized ;
   int dlopenflags ;
};
typedef struct _is PyInterpreterState;
struct _frame;
struct _frame;
typedef int (*Py_tracefunc)(PyObject * , struct _frame * , int  , PyObject * );
struct _ts {
   struct _ts *next ;
   PyInterpreterState *interp ;
   struct _frame *frame ;
   int recursion_depth ;
   char overflowed ;
   char recursion_critical ;
   int tracing ;
   int use_tracing ;
   int (*c_profilefunc)(PyObject * , struct _frame * , int  , PyObject * ) ;
   int (*c_tracefunc)(PyObject * , struct _frame * , int  , PyObject * ) ;
   PyObject *c_profileobj ;
   PyObject *c_traceobj ;
   PyObject *curexc_type ;
   PyObject *curexc_value ;
   PyObject *curexc_traceback ;
   PyObject *exc_type ;
   PyObject *exc_value ;
   PyObject *exc_traceback ;
   PyObject *dict ;
   int tick_counter ;
   int gilstate_counter ;
   PyObject *async_exc ;
   long thread_id ;
};
typedef struct _ts PyThreadState;
enum __anonenum_PyGILState_STATE_62 {
    PyGILState_LOCKED = 0,
    PyGILState_UNLOCKED = 1
} ;
typedef enum __anonenum_PyGILState_STATE_62 PyGILState_STATE;
typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_ );
struct _frame;
struct _traceback {
   PyObject ob_base ;
   struct _traceback *tb_next ;
   struct _frame *tb_frame ;
   int tb_lasti ;
   int tb_lineno ;
};
typedef struct _traceback PyTracebackObject;
struct __anonstruct_PySliceObject_63 {
   PyObject ob_base ;
   PyObject *start ;
   PyObject *stop ;
   PyObject *step ;
};
typedef struct __anonstruct_PySliceObject_63 PySliceObject;
struct __anonstruct_PyCellObject_64 {
   PyObject ob_base ;
   PyObject *ob_ref ;
};
typedef struct __anonstruct_PyCellObject_64 PyCellObject;
struct _frame;
struct __anonstruct_PyGenObject_65 {
   PyObject ob_base ;
   struct _frame *gi_frame ;
   int gi_running ;
   PyObject *gi_code ;
   PyObject *gi_weakreflist ;
};
typedef struct __anonstruct_PyGenObject_65 PyGenObject;
typedef PyObject *(*getter)(PyObject * , void * );
typedef int (*setter)(PyObject * , PyObject * , void * );
struct PyGetSetDef {
   char *name ;
   PyObject *(*get)(PyObject * , void * ) ;
   int (*set)(PyObject * , PyObject * , void * ) ;
   char *doc ;
   void *closure ;
};
typedef struct PyGetSetDef PyGetSetDef;
typedef PyObject *(*wrapperfunc)(PyObject *self , PyObject *args ,
                                 void *wrapped );
typedef PyObject *(*wrapperfunc_kwds)(PyObject *self , PyObject *args ,
                                      void *wrapped , PyObject *kwds );
struct wrapperbase {
   char *name ;
   int offset ;
   void *function ;
   PyObject *(*wrapper)(PyObject *self , PyObject *args , void *wrapped ) ;
   char *doc ;
   int flags ;
   PyObject *name_strobj ;
};
struct __anonstruct_PyDescrObject_66 {
   PyObject ob_base ;
   PyTypeObject *d_type ;
   PyObject *d_name ;
};
typedef struct __anonstruct_PyDescrObject_66 PyDescrObject;
struct __anonstruct_PyMethodDescrObject_67 {
   PyDescrObject d_common ;
   PyMethodDef *d_method ;
};
typedef struct __anonstruct_PyMethodDescrObject_67 PyMethodDescrObject;
struct __anonstruct_PyMemberDescrObject_68 {
   PyDescrObject d_common ;
   struct PyMemberDef *d_member ;
};
typedef struct __anonstruct_PyMemberDescrObject_68 PyMemberDescrObject;
struct __anonstruct_PyGetSetDescrObject_69 {
   PyDescrObject d_common ;
   PyGetSetDef *d_getset ;
};
typedef struct __anonstruct_PyGetSetDescrObject_69 PyGetSetDescrObject;
struct __anonstruct_PyWrapperDescrObject_70 {
   PyDescrObject d_common ;
   struct wrapperbase *d_base ;
   void *d_wrapped ;
};
typedef struct __anonstruct_PyWrapperDescrObject_70 PyWrapperDescrObject;
struct PyMemberDef;
struct _PyWeakReference;
typedef struct _PyWeakReference PyWeakReference;
struct _PyWeakReference {
   PyObject ob_base ;
   PyObject *wr_object ;
   PyObject *wr_callback ;
   Py_hash_t hash ;
   PyWeakReference *wr_prev ;
   PyWeakReference *wr_next ;
};
struct PyStructSequence_Field {
   char *name ;
   char *doc ;
};
typedef struct PyStructSequence_Field PyStructSequence_Field;
struct PyStructSequence_Desc {
   char *name ;
   char *doc ;
   struct PyStructSequence_Field *fields ;
   int n_in_sequence ;
};
typedef struct PyStructSequence_Desc PyStructSequence_Desc;
typedef PyTupleObject PyStructSequence;
struct __anonstruct_PyBaseExceptionObject_71 {
   PyObject ob_base ;
   PyObject *dict ;
   PyObject *args ;
   PyObject *traceback ;
   PyObject *context ;
   PyObject *cause ;
};
typedef struct __anonstruct_PyBaseExceptionObject_71 PyBaseExceptionObject;
struct __anonstruct_PySyntaxErrorObject_72 {
   PyObject ob_base ;
   PyObject *dict ;
   PyObject *args ;
   PyObject *traceback ;
   PyObject *context ;
   PyObject *cause ;
   PyObject *msg ;
   PyObject *filename ;
   PyObject *lineno ;
   PyObject *offset ;
   PyObject *text ;
   PyObject *print_file_and_line ;
};
typedef struct __anonstruct_PySyntaxErrorObject_72 PySyntaxErrorObject;
struct __anonstruct_PyUnicodeErrorObject_73 {
   PyObject ob_base ;
   PyObject *dict ;
   PyObject *args ;
   PyObject *traceback ;
   PyObject *context ;
   PyObject *cause ;
   PyObject *encoding ;
   PyObject *object ;
   Py_ssize_t start ;
   Py_ssize_t end ;
   PyObject *reason ;
};
typedef struct __anonstruct_PyUnicodeErrorObject_73 PyUnicodeErrorObject;
struct __anonstruct_PySystemExitObject_74 {
   PyObject ob_base ;
   PyObject *dict ;
   PyObject *args ;
   PyObject *traceback ;
   PyObject *context ;
   PyObject *cause ;
   PyObject *code ;
};
typedef struct __anonstruct_PySystemExitObject_74 PySystemExitObject;
struct __anonstruct_PyEnvironmentErrorObject_75 {
   PyObject ob_base ;
   PyObject *dict ;
   PyObject *args ;
   PyObject *traceback ;
   PyObject *context ;
   PyObject *cause ;
   PyObject *myerrno ;
   PyObject *strerror ;
   PyObject *filename ;
};
typedef struct __anonstruct_PyEnvironmentErrorObject_75 PyEnvironmentErrorObject;
struct _arena;
typedef struct _arena PyArena;
struct __anonstruct_PyCompilerFlags_76 {
   int cf_flags ;
};
typedef struct __anonstruct_PyCompilerFlags_76 PyCompilerFlags;
struct _mod;
struct _node;
struct symtable;
typedef void (*PyOS_sighandler_t)(int  );
struct _frame;
struct _inittab {
   char *name ;
   PyObject *(*initfunc)(void) ;
};
struct _frozen {
   char *name ;
   unsigned char *code ;
   int size ;
};
struct __anonstruct_PyCodeObject_77 {
   PyObject ob_base ;
   int co_argcount ;
   int co_kwonlyargcount ;
   int co_nlocals ;
   int co_stacksize ;
   int co_flags ;
   PyObject *co_code ;
   PyObject *co_consts ;
   PyObject *co_names ;
   PyObject *co_varnames ;
   PyObject *co_freevars ;
   PyObject *co_cellvars ;
   PyObject *co_filename ;
   PyObject *co_name ;
   int co_firstlineno ;
   PyObject *co_lnotab ;
   void *co_zombieframe ;
   PyObject *co_weakreflist ;
};
typedef struct __anonstruct_PyCodeObject_77 PyCodeObject;
struct _addr_pair {
   int ap_lower ;
   int ap_upper ;
};
typedef struct _addr_pair PyAddrPair;
struct _node;
struct __anonstruct_PyFutureFeatures_78 {
   int ff_features ;
   int ff_lineno ;
};
typedef struct __anonstruct_PyFutureFeatures_78 PyFutureFeatures;
struct _mod;
typedef int ptrdiff_t;
struct PyMemberDef {
   char *name ;
   int type ;
   Py_ssize_t offset ;
   int flags ;
   char *doc ;
};
typedef struct PyMemberDef PyMemberDef;
struct _PyScannerObject {
   PyObject ob_base ;
   PyObject *strict ;
   PyObject *object_hook ;
   PyObject *object_pairs_hook ;
   PyObject *parse_float ;
   PyObject *parse_int ;
   PyObject *parse_constant ;
   PyObject *memo ;
};
typedef struct _PyScannerObject PyScannerObject;
struct _PyEncoderObject {
   PyObject ob_base ;
   PyObject *markers ;
   PyObject *defaultfn ;
   PyObject *encoder ;
   PyObject *indent ;
   PyObject *key_separator ;
   PyObject *item_separator ;
   PyObject *sort_keys ;
   PyObject *skipkeys ;
   int fast_encode ;
   int allow_nan ;
};
typedef struct _PyEncoderObject PyEncoderObject;
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
extern char *fgets_unlocked(char * __restrict  __s , int __n ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
__inline extern __ssize_t getline(char ** __restrict  __lineptr ,
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
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
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
__inline extern __ssize_t getline(char ** __restrict  __lineptr ,
                                  size_t * __restrict  __n ,
                                  FILE * __restrict  __stream ) 
{ 
  __ssize_t tmp ;

  {
  tmp = __getdelim(__lineptr, __n, '\n', __stream);
  return (tmp);
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
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
extern char *program_invocation_name ;
extern char *program_invocation_short_name ;
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
extern  __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer ,
                                                       intmax_t __denom )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) __strtoll_internal)(char const   * __restrict  __nptr ,
                                                                                                     char ** __restrict  __endptr ,
                                                                                                     int __base ,
                                                                                                     int __group ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
__inline extern intmax_t strtoimax(char const   * __restrict  nptr ,
                                   char ** __restrict  endptr , int base ) 
{ 
  long long tmp ;

  {
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) __strtoull_internal)(char const   * __restrict  __nptr ,
                                                                                                               char ** __restrict  __endptr ,
                                                                                                               int __base ,
                                                                                                               int __group ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
__inline extern uintmax_t strtoumax(char const   * __restrict  nptr ,
                                    char ** __restrict  endptr , int base ) 
{ 
  unsigned long long tmp ;

  {
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) __wcstoll_internal)(__gwchar_t const   * __restrict  __nptr ,
                                                                                                     __gwchar_t ** __restrict  __endptr ,
                                                                                                     int __base ,
                                                                                                     int __group ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
__inline extern intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                   __gwchar_t ** __restrict  endptr , int base ) 
{ 
  long long tmp ;

  {
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) __wcstoull_internal)(__gwchar_t const   * __restrict  __nptr ,
                                                                                                               __gwchar_t ** __restrict  __endptr ,
                                                                                                               int __base ,
                                                                                                               int __group ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
__inline extern uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                    __gwchar_t ** __restrict  endptr , int base ) 
{ 
  unsigned long long tmp ;

  {
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  return (tmp);
}
}
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
extern  __attribute__((__nothrow__)) void sincos(double __x , double *__sinx ,
                                                 double *__cosx ) ;
extern  __attribute__((__nothrow__)) void __sincos(double __x , double *__sinx ,
                                                   double *__cosx ) ;
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
extern  __attribute__((__nothrow__)) double exp10(double __x ) ;
extern  __attribute__((__nothrow__)) double __exp10(double __x ) ;
extern  __attribute__((__nothrow__)) double pow10(double __x ) ;
extern  __attribute__((__nothrow__)) double __pow10(double __x ) ;
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
extern  __attribute__((__nothrow__)) void sincosf(float __x , float *__sinx ,
                                                  float *__cosx ) ;
extern  __attribute__((__nothrow__)) void __sincosf(float __x , float *__sinx ,
                                                    float *__cosx ) ;
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
extern  __attribute__((__nothrow__)) float exp10f(float __x ) ;
extern  __attribute__((__nothrow__)) float __exp10f(float __x ) ;
extern  __attribute__((__nothrow__)) float pow10f(float __x ) ;
extern  __attribute__((__nothrow__)) float __pow10f(float __x ) ;
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
extern  __attribute__((__nothrow__)) void sincosl(long double __x ,
                                                  long double *__sinx ,
                                                  long double *__cosx ) ;
extern  __attribute__((__nothrow__)) void __sincosl(long double __x ,
                                                    long double *__sinx ,
                                                    long double *__cosx ) ;
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
extern  __attribute__((__nothrow__)) long double exp10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __exp10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double pow10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __pow10l(long double __x ) ;
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
  union __anonunion___u_33 __u ;

  {
  __u.__f = __x;
  return (__u.__i < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
__inline extern int __signbit(double __x ) 
{ 
  union __anonunion___u_34 __u ;

  {
  __u.__d = __x;
  return (__u.__i[1] < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
__inline extern int __signbitl(long double __x ) 
{ 
  union __anonunion___u_35 __u ;

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
  union __anonunion___n_36 __n ;

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
  union __anonunion_37 __constr_expr_0 ;

  {
  __constr_expr_0.__d = __x;
  return ((int )((((unsigned int )__constr_expr_0.__i[1] | 2148532223U) + 1U) >> 31));
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
extern  __attribute__((__nothrow__)) int futimesat(int __fd ,
                                                   char const   *__file ,
                                                   struct timeval  const  *__tvp ) ;
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
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf )  __asm__("fstat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                                              struct stat64 * __restrict  __statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                                                             struct stat64 *__statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                               char const   * __restrict  __filename ,
                                                                                               struct stat * __restrict  __statbuf ,
                                                                                               int __flag )  __asm__("fstatat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                                                 char const   * __restrict  __filename ,
                                                                                                 struct stat64 * __restrict  __statbuf ,
                                                                                                 int __flag ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat64)(char const   * __restrict  __path ,
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
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                                              struct stat64 * __restrict  __statbuf ) ;
__inline extern int ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                struct stat64 * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __xstat64(3, (char const   *)__path, (struct stat64 *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat64)(char const   * __restrict  __path ,
                                                                                               struct stat64 * __restrict  __statbuf ) ;
__inline extern int ( __attribute__((__nonnull__(1,2))) lstat64)(char const   * __restrict  __path ,
                                                                 struct stat64 * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __lxstat64(3, (char const   *)__path, (struct stat64 *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                                                             struct stat64 *__statbuf ) ;
__inline extern int ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                               struct stat64 *__statbuf ) 
{ 
  int tmp ;

  {
  tmp = __fxstat64(3, __fd, __statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                                                 char const   * __restrict  __filename ,
                                                                                                 struct stat64 * __restrict  __statbuf ,
                                                                                                 int __flag ) ;
__inline extern int ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                   char const   * __restrict  __filename ,
                                                                   struct stat64 * __restrict  __statbuf ,
                                                                   int __flag ) 
{ 
  int tmp ;

  {
  tmp = __fxstatat64(3, __fd, (char const   *)__filename,
                     (struct stat64 *)__statbuf, __flag);
  return (tmp);
}
}
extern void AnnotateRWLockCreate(char const   *file , int line ,
                                 void const volatile   *lock ) ;
extern void AnnotateRWLockDestroy(char const   *file , int line ,
                                  void const volatile   *lock ) ;
extern void AnnotateRWLockAcquired(char const   *file , int line ,
                                   void const volatile   *lock , long is_w ) ;
extern void AnnotateRWLockReleased(char const   *file , int line ,
                                   void const volatile   *lock , long is_w ) ;
extern void AnnotateBarrierInit(char const   *file , int line ,
                                void const volatile   *barrier , long count ,
                                long reinitialization_allowed ) ;
extern void AnnotateBarrierWaitBefore(char const   *file , int line ,
                                      void const volatile   *barrier ) ;
extern void AnnotateBarrierWaitAfter(char const   *file , int line ,
                                     void const volatile   *barrier ) ;
extern void AnnotateBarrierDestroy(char const   *file , int line ,
                                   void const volatile   *barrier ) ;
extern void AnnotateCondVarWait(char const   *file , int line ,
                                void const volatile   *cv ,
                                void const volatile   *lock ) ;
extern void AnnotateCondVarSignal(char const   *file , int line ,
                                  void const volatile   *cv ) ;
extern void AnnotateCondVarSignalAll(char const   *file , int line ,
                                     void const volatile   *cv ) ;
extern void AnnotatePublishMemoryRange(char const   *file , int line ,
                                       void const volatile   *address ,
                                       long size ) ;
extern void AnnotateUnpublishMemoryRange(char const   *file , int line ,
                                         void const volatile   *address ,
                                         long size ) ;
extern void AnnotatePCQCreate(char const   *file , int line ,
                              void const volatile   *pcq ) ;
extern void AnnotatePCQDestroy(char const   *file , int line ,
                               void const volatile   *pcq ) ;
extern void AnnotatePCQPut(char const   *file , int line ,
                           void const volatile   *pcq ) ;
extern void AnnotatePCQGet(char const   *file , int line ,
                           void const volatile   *pcq ) ;
extern void AnnotateNewMemory(char const   *file , int line ,
                              void const volatile   *address , long size ) ;
extern void AnnotateExpectRace(char const   *file , int line ,
                               void const volatile   *address ,
                               char const   *description ) ;
extern void AnnotateBenignRace(char const   *file , int line ,
                               void const volatile   *address ,
                               char const   *description ) ;
extern void AnnotateBenignRaceSized(char const   *file , int line ,
                                    void const volatile   *address , long size ,
                                    char const   *description ) ;
extern void AnnotateMutexIsUsedAsCondVar(char const   *file , int line ,
                                         void const volatile   *mu ) ;
extern void AnnotateTraceMemory(char const   *file , int line ,
                                void const volatile   *arg ) ;
extern void AnnotateThreadName(char const   *file , int line ,
                               char const   *name ) ;
extern void AnnotateIgnoreReadsBegin(char const   *file , int line ) ;
extern void AnnotateIgnoreReadsEnd(char const   *file , int line ) ;
extern void AnnotateIgnoreWritesBegin(char const   *file , int line ) ;
extern void AnnotateIgnoreWritesEnd(char const   *file , int line ) ;
extern void AnnotateEnableRaceDetection(char const   *file , int line ,
                                        int enable ) ;
extern void AnnotateNoOp(char const   *file , int line ,
                         void const volatile   *arg ) ;
extern void AnnotateFlushState(char const   *file , int line ) ;
extern int RunningOnValgrind(void) ;
__inline static void _Py_atomic_signal_fence(_Py_memory_order order ) 
{ 


  {
  if ((unsigned int )order != 0U) {
    __asm__  volatile   ("": : : "memory");
  } else {

  }
  return;
}
}
__inline static void _Py_atomic_thread_fence(_Py_memory_order order ) 
{ 


  {
  if ((unsigned int )order != 0U) {
    __asm__  volatile   ("mfence": : : "memory");
  } else {

  }
  return;
}
}
__inline static void _Py_ANNOTATE_MEMORY_ORDER(void const volatile   *address ,
                                               _Py_memory_order order ) 
{ 


  {
  switch ((unsigned int )order) {
  case 4U: 
  case 3U: 
  case 2U: ;
  break;
  default: 
  break;
  }
  switch ((unsigned int )order) {
  case 4U: 
  case 3U: 
  case 1U: ;
  break;
  default: 
  break;
  }
  return;
}
}
extern double _Py_force_double(double  ) ;
extern unsigned short _Py_get_387controlword(void) ;
extern void _Py_set_387controlword(unsigned short  ) ;
extern void _PyTime_gettimeofday(_PyTime_timeval *tp ) ;
extern void _PyTime_Init(void) ;
extern void *PyMem_Malloc(size_t  ) ;
extern void *PyMem_Realloc(void * , size_t  ) ;
extern void PyMem_Free(void * ) ;
extern PyObject *PyType_FromSpec(PyType_Spec * ) ;
extern int PyType_IsSubtype(PyTypeObject * , PyTypeObject * ) ;
extern PyTypeObject PyType_Type ;
extern PyTypeObject PyBaseObject_Type ;
extern PyTypeObject PySuper_Type ;
extern long PyType_GetFlags(PyTypeObject * ) ;
extern int PyType_Ready(PyTypeObject * ) ;
extern PyObject *PyType_GenericAlloc(PyTypeObject * , Py_ssize_t  ) ;
extern PyObject *PyType_GenericNew(PyTypeObject * , PyObject * , PyObject * ) ;
extern PyObject *_PyType_Lookup(PyTypeObject * , PyObject * ) ;
extern PyObject *_PyObject_LookupSpecial(PyObject * , char * , PyObject ** ) ;
extern unsigned int PyType_ClearCache(void) ;
extern void PyType_Modified(PyTypeObject * ) ;
extern int PyObject_Print(PyObject * , FILE * , int  ) ;
extern void _Py_BreakPoint(void) ;
extern void _PyObject_Dump(PyObject * ) ;
extern PyObject *PyObject_Repr(PyObject * ) ;
extern PyObject *PyObject_Str(PyObject * ) ;
extern PyObject *PyObject_ASCII(PyObject * ) ;
extern PyObject *PyObject_Bytes(PyObject * ) ;
extern PyObject *PyObject_RichCompare(PyObject * , PyObject * , int  ) ;
extern int PyObject_RichCompareBool(PyObject * , PyObject * , int  ) ;
extern PyObject *PyObject_GetAttrString(PyObject * , char const   * ) ;
extern int PyObject_SetAttrString(PyObject * , char const   * , PyObject * ) ;
extern int PyObject_HasAttrString(PyObject * , char const   * ) ;
extern PyObject *PyObject_GetAttr(PyObject * , PyObject * ) ;
extern int PyObject_SetAttr(PyObject * , PyObject * , PyObject * ) ;
extern int PyObject_HasAttr(PyObject * , PyObject * ) ;
extern PyObject **_PyObject_GetDictPtr(PyObject * ) ;
extern PyObject *PyObject_SelfIter(PyObject * ) ;
extern PyObject *_PyObject_NextNotImplemented(PyObject * ) ;
extern PyObject *PyObject_GenericGetAttr(PyObject * , PyObject * ) ;
extern int PyObject_GenericSetAttr(PyObject * , PyObject * , PyObject * ) ;
extern Py_hash_t PyObject_Hash(PyObject * ) ;
extern Py_hash_t PyObject_HashNotImplemented(PyObject * ) ;
extern int PyObject_IsTrue(PyObject * ) ;
extern int PyObject_Not(PyObject * ) ;
extern int PyCallable_Check(PyObject * ) ;
extern void PyObject_ClearWeakRefs(PyObject * ) ;
extern PyObject *_PyObject_GenericGetAttrWithDict(PyObject * , PyObject * ,
                                                  PyObject * ) ;
extern int _PyObject_GenericSetAttrWithDict(PyObject * , PyObject * ,
                                            PyObject * , PyObject * ) ;
extern PyObject *PyObject_Dir(PyObject * ) ;
extern int Py_ReprEnter(PyObject * ) ;
extern void Py_ReprLeave(PyObject * ) ;
extern Py_hash_t _Py_HashDouble(double  ) ;
extern Py_hash_t _Py_HashPointer(void * ) ;
extern void Py_IncRef(PyObject * ) ;
extern void Py_DecRef(PyObject * ) ;
extern PyObject _Py_NoneStruct ;
extern PyObject _Py_NotImplementedStruct ;
extern int _Py_SwappedOp[] ;
extern void _PyTrash_deposit_object(PyObject * ) ;
extern void _PyTrash_destroy_chain(void) ;
extern int _PyTrash_delete_nesting ;
extern PyObject *_PyTrash_delete_later ;
extern void *PyObject_Malloc(size_t  ) ;
extern void *PyObject_Realloc(void * , size_t  ) ;
extern void PyObject_Free(void * ) ;
extern PyObject *PyObject_Init(PyObject * , PyTypeObject * ) ;
extern PyVarObject *PyObject_InitVar(PyVarObject * , PyTypeObject * ,
                                     Py_ssize_t  ) ;
extern PyObject *_PyObject_New(PyTypeObject * ) ;
extern PyVarObject *_PyObject_NewVar(PyTypeObject * , Py_ssize_t  ) ;
extern Py_ssize_t PyGC_Collect(void) ;
extern PyVarObject *_PyObject_GC_Resize(PyVarObject * , Py_ssize_t  ) ;
extern PyGC_Head *_PyGC_generation0 ;
extern PyObject *_PyObject_GC_Malloc(size_t  ) ;
extern PyObject *_PyObject_GC_New(PyTypeObject * ) ;
extern PyVarObject *_PyObject_GC_NewVar(PyTypeObject * , Py_ssize_t  ) ;
extern void PyObject_GC_Track(void * ) ;
extern void PyObject_GC_UnTrack(void * ) ;
extern void PyObject_GC_Del(void * ) ;
extern int Py_DebugFlag ;
extern int Py_VerboseFlag ;
extern int Py_QuietFlag ;
extern int Py_InteractiveFlag ;
extern int Py_InspectFlag ;
extern int Py_OptimizeFlag ;
extern int Py_NoSiteFlag ;
extern int Py_BytesWarningFlag ;
extern int Py_UseClassExceptionsFlag ;
extern int Py_FrozenFlag ;
extern int Py_IgnoreEnvironmentFlag ;
extern int Py_DontWriteBytecodeFlag ;
extern int Py_NoUserSiteDirectory ;
extern int Py_UnbufferedStdioFlag ;
extern PyTypeObject PyByteArray_Type ;
extern PyTypeObject PyByteArrayIter_Type ;
extern PyObject *PyByteArray_FromObject(PyObject * ) ;
extern PyObject *PyByteArray_Concat(PyObject * , PyObject * ) ;
extern PyObject *PyByteArray_FromStringAndSize(char const   * , Py_ssize_t  ) ;
extern Py_ssize_t PyByteArray_Size(PyObject * ) ;
extern char *PyByteArray_AsString(PyObject * ) ;
extern int PyByteArray_Resize(PyObject * , Py_ssize_t  ) ;
extern char _PyByteArray_empty_string[] ;
extern PyTypeObject PyBytes_Type ;
extern PyTypeObject PyBytesIter_Type ;
extern PyObject *PyBytes_FromStringAndSize(char const   * , Py_ssize_t  ) ;
extern PyObject *PyBytes_FromString(char const   * ) ;
extern PyObject *PyBytes_FromObject(PyObject * ) ;
extern PyObject *( /* format attribute */  PyBytes_FromFormatV)(char const   * ,
                                                                va_list  ) ;
extern PyObject *( /* format attribute */  PyBytes_FromFormat)(char const   * 
                                                               , ...) ;
extern Py_ssize_t PyBytes_Size(PyObject * ) ;
extern char *PyBytes_AsString(PyObject * ) ;
extern PyObject *PyBytes_Repr(PyObject * , int  ) ;
extern void PyBytes_Concat(PyObject ** , PyObject * ) ;
extern void PyBytes_ConcatAndDel(PyObject ** , PyObject * ) ;
extern int _PyBytes_Resize(PyObject ** , Py_ssize_t  ) ;
extern PyObject *_PyBytes_FormatLong(PyObject * , int  , int  , int  , char ** ,
                                     int * ) ;
extern PyObject *PyBytes_DecodeEscape(char const   * , Py_ssize_t  ,
                                      char const   * , Py_ssize_t  ,
                                      char const   * ) ;
extern PyObject *_PyBytes_Join(PyObject *sep , PyObject *x ) ;
extern int PyBytes_AsStringAndSize(PyObject *obj , char **s , Py_ssize_t *len ) ;
extern Py_ssize_t _PyBytes_InsertThousandsGroupingLocale(char *buffer ,
                                                         Py_ssize_t n_buffer ,
                                                         char *digits ,
                                                         Py_ssize_t n_digits ,
                                                         Py_ssize_t min_width ) ;
extern Py_ssize_t _PyBytes_InsertThousandsGrouping(char *buffer ,
                                                   Py_ssize_t n_buffer ,
                                                   char *digits ,
                                                   Py_ssize_t n_digits ,
                                                   Py_ssize_t min_width ,
                                                   char const   *grouping ,
                                                   char const   *thousands_sep ) ;
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
extern  __attribute__((__nothrow__)) int isctype(int __c , int __mask ) ;
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
extern  __attribute__((__nothrow__)) wchar_t *wcscpy(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsncpy(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcscat(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsncat(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) int wcscmp(wchar_t const   *__s1 ,
                                                wchar_t const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int wcsncmp(wchar_t const   *__s1 ,
                                                 wchar_t const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int wcscasecmp(wchar_t const   *__s1 ,
                                                    wchar_t const   *__s2 ) ;
extern  __attribute__((__nothrow__)) int wcsncasecmp(wchar_t const   *__s1 ,
                                                     wchar_t const   *__s2 ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int wcscasecmp_l(wchar_t const   *__s1 ,
                                                      wchar_t const   *__s2 ,
                                                      __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) int wcsncasecmp_l(wchar_t const   *__s1 ,
                                                       wchar_t const   *__s2 ,
                                                       size_t __n ,
                                                       __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) int wcscoll(wchar_t const   *__s1 ,
                                                 wchar_t const   *__s2 ) ;
extern  __attribute__((__nothrow__)) size_t wcsxfrm(wchar_t * __restrict  __s1 ,
                                                    wchar_t const   * __restrict  __s2 ,
                                                    size_t __n ) ;
extern  __attribute__((__nothrow__)) int wcscoll_l(wchar_t const   *__s1 ,
                                                   wchar_t const   *__s2 ,
                                                   __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) size_t wcsxfrm_l(wchar_t *__s1 ,
                                                      wchar_t const   *__s2 ,
                                                      size_t __n ,
                                                      __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsdup(wchar_t const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcschr(wchar_t const   *__wcs ,
                                                     wchar_t __wc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsrchr(wchar_t const   *__wcs ,
                                                      wchar_t __wc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcschrnul(wchar_t const   *__s ,
                                                        wchar_t __wc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t wcscspn(wchar_t const   *__wcs ,
                                                    wchar_t const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t wcsspn(wchar_t const   *__wcs ,
                                                   wchar_t const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcspbrk(wchar_t const   *__wcs ,
                                                      wchar_t const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsstr(wchar_t const   *__haystack ,
                                                     wchar_t const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcstok(wchar_t * __restrict  __s ,
                                                     wchar_t const   * __restrict  __delim ,
                                                     wchar_t ** __restrict  __ptr ) ;
extern  __attribute__((__nothrow__)) size_t wcslen(wchar_t const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcswcs(wchar_t const   *__haystack ,
                                                     wchar_t const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t wcsnlen(wchar_t const   *__s ,
                                                    size_t __maxlen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemchr(wchar_t const   *__s ,
                                                      wchar_t __c , size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int wmemcmp(wchar_t const   * __restrict  __s1 ,
                                                 wchar_t const   * __restrict  __s2 ,
                                                 size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemcpy(wchar_t * __restrict  __s1 ,
                                                      wchar_t const   * __restrict  __s2 ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemmove(wchar_t *__s1 ,
                                                       wchar_t const   *__s2 ,
                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemset(wchar_t *__s ,
                                                      wchar_t __c , size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wmempcpy(wchar_t * __restrict  __s1 ,
                                                       wchar_t const   * __restrict  __s2 ,
                                                       size_t __n ) ;
__inline extern  __attribute__((__nothrow__)) wint_t btowc(int __c ) ;
__inline extern  __attribute__((__nothrow__)) int wctob(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int mbsinit(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t mbrtowc(wchar_t * __restrict  __pwc ,
                                                    char const   * __restrict  __s ,
                                                    size_t __n , mbstate_t *__p ) ;
extern  __attribute__((__nothrow__)) size_t wcrtomb(char * __restrict  __s ,
                                                    wchar_t __wc ,
                                                    mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t __mbrlen(char const   * __restrict  __s ,
                                                     size_t __n ,
                                                     mbstate_t * __restrict  __ps ) ;
__inline extern  __attribute__((__nothrow__)) size_t mbrlen(char const   * __restrict  __s ,
                                                            size_t __n ,
                                                            mbstate_t * __restrict  __ps ) ;
extern wint_t __btowc_alias(int __c )  __asm__("btowc")  ;
__inline extern  __attribute__((__nothrow__)) wint_t btowc(int __c ) ;
__inline extern wint_t btowc(int __c ) 
{ 
  wint_t tmp ;

  {
  tmp = __btowc_alias(__c);
  return (tmp);
}
}
extern int __wctob_alias(wint_t __c )  __asm__("wctob")  ;
__inline extern  __attribute__((__nothrow__)) int wctob(wint_t __wc ) ;
__inline extern int wctob(wint_t __wc ) 
{ 
  int tmp ;

  {
  tmp = __wctob_alias(__wc);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) size_t mbrlen(char const   * __restrict  __s ,
                                                            size_t __n ,
                                                            mbstate_t * __restrict  __ps ) ;
__inline extern size_t mbrlen(char const   * __restrict  __s , size_t __n ,
                              mbstate_t * __restrict  __ps ) 
{ 
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  if ((unsigned int )__ps != (unsigned int )((void *)0)) {
    tmp = mbrtowc((wchar_t */* __restrict  */)((void *)0), __s, __n,
                  (mbstate_t *)__ps);
    tmp___1 = tmp;
  } else {
    tmp___0 = __mbrlen(__s, __n, (mbstate_t */* __restrict  */)((void *)0));
    tmp___1 = tmp___0;
  }
  return (tmp___1);
}
}
extern  __attribute__((__nothrow__)) size_t mbsrtowcs(wchar_t * __restrict  __dst ,
                                                      char const   ** __restrict  __src ,
                                                      size_t __len ,
                                                      mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t wcsrtombs(char * __restrict  __dst ,
                                                      wchar_t const   ** __restrict  __src ,
                                                      size_t __len ,
                                                      mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t mbsnrtowcs(wchar_t * __restrict  __dst ,
                                                       char const   ** __restrict  __src ,
                                                       size_t __nmc ,
                                                       size_t __len ,
                                                       mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t wcsnrtombs(char * __restrict  __dst ,
                                                       wchar_t const   ** __restrict  __src ,
                                                       size_t __nwc ,
                                                       size_t __len ,
                                                       mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) int wcwidth(wchar_t __c ) ;
extern  __attribute__((__nothrow__)) int wcswidth(wchar_t const   *__s ,
                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) double wcstod(wchar_t const   * __restrict  __nptr ,
                                                   wchar_t ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) float wcstof(wchar_t const   * __restrict  __nptr ,
                                                  wchar_t ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long double wcstold(wchar_t const   * __restrict  __nptr ,
                                                         wchar_t ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long wcstol(wchar_t const   * __restrict  __nptr ,
                                                 wchar_t ** __restrict  __endptr ,
                                                 int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long wcstoul(wchar_t const   * __restrict  __nptr ,
                                                           wchar_t ** __restrict  __endptr ,
                                                           int __base ) ;
extern  __attribute__((__nothrow__)) long long wcstoll(wchar_t const   * __restrict  __nptr ,
                                                       wchar_t ** __restrict  __endptr ,
                                                       int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long wcstoull(wchar_t const   * __restrict  __nptr ,
                                                                 wchar_t ** __restrict  __endptr ,
                                                                 int __base ) ;
extern  __attribute__((__nothrow__)) long long wcstoq(wchar_t const   * __restrict  __nptr ,
                                                      wchar_t ** __restrict  __endptr ,
                                                      int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long wcstouq(wchar_t const   * __restrict  __nptr ,
                                                                wchar_t ** __restrict  __endptr ,
                                                                int __base ) ;
extern  __attribute__((__nothrow__)) long wcstol_l(wchar_t const   * __restrict  __nptr ,
                                                   wchar_t ** __restrict  __endptr ,
                                                   int __base ,
                                                   __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) unsigned long wcstoul_l(wchar_t const   * __restrict  __nptr ,
                                                             wchar_t ** __restrict  __endptr ,
                                                             int __base ,
                                                             __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) long long wcstoll_l(wchar_t const   * __restrict  __nptr ,
                                                         wchar_t ** __restrict  __endptr ,
                                                         int __base ,
                                                         __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) unsigned long long wcstoull_l(wchar_t const   * __restrict  __nptr ,
                                                                   wchar_t ** __restrict  __endptr ,
                                                                   int __base ,
                                                                   __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) double wcstod_l(wchar_t const   * __restrict  __nptr ,
                                                     wchar_t ** __restrict  __endptr ,
                                                     __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) float wcstof_l(wchar_t const   * __restrict  __nptr ,
                                                    wchar_t ** __restrict  __endptr ,
                                                    __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) long double wcstold_l(wchar_t const   * __restrict  __nptr ,
                                                           wchar_t ** __restrict  __endptr ,
                                                           __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcpcpy(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcpncpy(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) __FILE *open_wmemstream(wchar_t **__bufloc ,
                                                             size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) int fwide(__FILE *__fp , int __mode ) ;
extern int fwprintf(__FILE * __restrict  __stream ,
                    wchar_t const   * __restrict  __format  , ...) ;
extern int wprintf(wchar_t const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int swprintf(wchar_t * __restrict  __s ,
                                                  size_t __n ,
                                                  wchar_t const   * __restrict  __format 
                                                  , ...) ;
extern int vfwprintf(__FILE * __restrict  __s ,
                     wchar_t const   * __restrict  __format ,
                     __gnuc_va_list __arg ) ;
extern int vwprintf(wchar_t const   * __restrict  __format ,
                    __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vswprintf(wchar_t * __restrict  __s ,
                                                   size_t __n ,
                                                   wchar_t const   * __restrict  __format ,
                                                   __gnuc_va_list __arg ) ;
extern int fwscanf(__FILE * __restrict  __stream ,
                   wchar_t const   * __restrict  __format  , ...) ;
extern int wscanf(wchar_t const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int swscanf(wchar_t const   * __restrict  __s ,
                                                 wchar_t const   * __restrict  __format 
                                                 , ...) ;
extern int vfwscanf(__FILE * __restrict  __s ,
                    wchar_t const   * __restrict  __format ,
                    __gnuc_va_list __arg ) ;
extern int vwscanf(wchar_t const   * __restrict  __format ,
                   __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vswscanf(wchar_t const   * __restrict  __s ,
                                                  wchar_t const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern wint_t fgetwc(__FILE *__stream ) ;
extern wint_t getwc(__FILE *__stream ) ;
extern wint_t getwchar(void) ;
extern wint_t fputwc(wchar_t __wc , __FILE *__stream ) ;
extern wint_t putwc(wchar_t __wc , __FILE *__stream ) ;
extern wint_t putwchar(wchar_t __wc ) ;
extern wchar_t *fgetws(wchar_t * __restrict  __ws , int __n ,
                       __FILE * __restrict  __stream ) ;
extern int fputws(wchar_t const   * __restrict  __ws ,
                  __FILE * __restrict  __stream ) ;
extern wint_t ungetwc(wint_t __wc , __FILE *__stream ) ;
extern wint_t getwc_unlocked(__FILE *__stream ) ;
extern wint_t getwchar_unlocked(void) ;
extern wint_t fgetwc_unlocked(__FILE *__stream ) ;
extern wint_t fputwc_unlocked(wchar_t __wc , __FILE *__stream ) ;
extern wint_t putwc_unlocked(wchar_t __wc , __FILE *__stream ) ;
extern wint_t putwchar_unlocked(wchar_t __wc ) ;
extern wchar_t *fgetws_unlocked(wchar_t * __restrict  __ws , int __n ,
                                __FILE * __restrict  __stream ) ;
extern int fputws_unlocked(wchar_t const   * __restrict  __ws ,
                           __FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) size_t wcsftime(wchar_t * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     wchar_t const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) size_t wcsftime_l(wchar_t * __restrict  __s ,
                                                       size_t __maxsize ,
                                                       wchar_t const   * __restrict  __format ,
                                                       struct tm  const  * __restrict  __tp ,
                                                       __locale_t __loc ) ;
extern PyTypeObject PyUnicode_Type ;
extern PyTypeObject PyUnicodeIter_Type ;
extern PyObject *PyUnicodeUCS2_FromUnicode(Py_UNICODE const   *u ,
                                           Py_ssize_t size ) ;
extern PyObject *PyUnicodeUCS2_FromStringAndSize(char const   *u ,
                                                 Py_ssize_t size ) ;
extern PyObject *PyUnicodeUCS2_FromString(char const   *u ) ;
extern Py_UNICODE *PyUnicodeUCS2_AsUnicode(PyObject *unicode ) ;
extern Py_ssize_t PyUnicodeUCS2_GetSize(PyObject *unicode ) ;
extern Py_UNICODE PyUnicodeUCS2_GetMax(void) ;
extern int PyUnicodeUCS2_Resize(PyObject **unicode , Py_ssize_t length ) ;
extern PyObject *PyUnicodeUCS2_FromEncodedObject(PyObject *obj ,
                                                 char const   *encoding ,
                                                 char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_FromObject(PyObject *obj ) ;
extern PyObject *PyUnicodeUCS2_FromFormatV(char const   *format , va_list vargs ) ;
extern PyObject *PyUnicodeUCS2_FromFormat(char const   *format  , ...) ;
extern PyObject *_PyUnicode_FormatAdvanced(PyObject *obj ,
                                           Py_UNICODE *format_spec ,
                                           Py_ssize_t format_spec_len ) ;
extern void PyUnicode_InternInPlace(PyObject ** ) ;
extern void PyUnicode_InternImmortal(PyObject ** ) ;
extern PyObject *PyUnicode_InternFromString(char const   *u ) ;
extern void _Py_ReleaseInternedUnicodeStrings(void) ;
extern PyObject *PyUnicodeUCS2_FromWideChar(wchar_t const   *w ,
                                            Py_ssize_t size ) ;
extern Py_ssize_t PyUnicodeUCS2_AsWideChar(PyObject *unicode , wchar_t *w ,
                                           Py_ssize_t size ) ;
extern wchar_t *PyUnicodeUCS2_AsWideCharString(PyObject *unicode ,
                                               Py_ssize_t *size ) ;
extern PyObject *PyUnicodeUCS2_FromOrdinal(int ordinal ) ;
extern int PyUnicodeUCS2_ClearFreelist(void) ;
extern PyObject *_PyUnicodeUCS2_AsDefaultEncodedString(PyObject *unicode ) ;
extern char *_PyUnicode_AsStringAndSize(PyObject *unicode , Py_ssize_t *size ) ;
extern char *_PyUnicode_AsString(PyObject *unicode ) ;
extern char const   *PyUnicodeUCS2_GetDefaultEncoding(void) ;
extern PyObject *PyUnicodeUCS2_Decode(char const   *s , Py_ssize_t size ,
                                      char const   *encoding ,
                                      char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsDecodedObject(PyObject *unicode ,
                                               char const   *encoding ,
                                               char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsDecodedUnicode(PyObject *unicode ,
                                                char const   *encoding ,
                                                char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_Encode(Py_UNICODE const   *s , Py_ssize_t size ,
                                      char const   *encoding ,
                                      char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsEncodedObject(PyObject *unicode ,
                                               char const   *encoding ,
                                               char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsEncodedString(PyObject *unicode ,
                                               char const   *encoding ,
                                               char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsEncodedUnicode(PyObject *unicode ,
                                                char const   *encoding ,
                                                char const   *errors ) ;
extern PyObject *PyUnicode_BuildEncodingMap(PyObject *string ) ;
extern PyObject *PyUnicode_DecodeUTF7(char const   *string , Py_ssize_t length ,
                                      char const   *errors ) ;
extern PyObject *PyUnicode_DecodeUTF7Stateful(char const   *string ,
                                              Py_ssize_t length ,
                                              char const   *errors ,
                                              Py_ssize_t *consumed ) ;
extern PyObject *PyUnicode_EncodeUTF7(Py_UNICODE const   *data ,
                                      Py_ssize_t length , int base64SetO ,
                                      int base64WhiteSpace ,
                                      char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_DecodeUTF8(char const   *string ,
                                          Py_ssize_t length ,
                                          char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_DecodeUTF8Stateful(char const   *string ,
                                                  Py_ssize_t length ,
                                                  char const   *errors ,
                                                  Py_ssize_t *consumed ) ;
extern PyObject *PyUnicodeUCS2_AsUTF8String(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeUTF8(Py_UNICODE const   *data ,
                                          Py_ssize_t length ,
                                          char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_DecodeUTF32(char const   *string ,
                                           Py_ssize_t length ,
                                           char const   *errors ,
                                           int *byteorder ) ;
extern PyObject *PyUnicodeUCS2_DecodeUTF32Stateful(char const   *string ,
                                                   Py_ssize_t length ,
                                                   char const   *errors ,
                                                   int *byteorder ,
                                                   Py_ssize_t *consumed ) ;
extern PyObject *PyUnicodeUCS2_AsUTF32String(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeUTF32(Py_UNICODE const   *data ,
                                           Py_ssize_t length ,
                                           char const   *errors , int byteorder ) ;
extern PyObject *PyUnicodeUCS2_DecodeUTF16(char const   *string ,
                                           Py_ssize_t length ,
                                           char const   *errors ,
                                           int *byteorder ) ;
extern PyObject *PyUnicodeUCS2_DecodeUTF16Stateful(char const   *string ,
                                                   Py_ssize_t length ,
                                                   char const   *errors ,
                                                   int *byteorder ,
                                                   Py_ssize_t *consumed ) ;
extern PyObject *PyUnicodeUCS2_AsUTF16String(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeUTF16(Py_UNICODE const   *data ,
                                           Py_ssize_t length ,
                                           char const   *errors , int byteorder ) ;
extern PyObject *PyUnicodeUCS2_DecodeUnicodeEscape(char const   *string ,
                                                   Py_ssize_t length ,
                                                   char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsUnicodeEscapeString(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeUnicodeEscape(Py_UNICODE const   *data ,
                                                   Py_ssize_t length ) ;
extern PyObject *PyUnicodeUCS2_DecodeRawUnicodeEscape(char const   *string ,
                                                      Py_ssize_t length ,
                                                      char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsRawUnicodeEscapeString(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeRawUnicodeEscape(Py_UNICODE const   *data ,
                                                      Py_ssize_t length ) ;
extern PyObject *_PyUnicode_DecodeUnicodeInternal(char const   *string ,
                                                  Py_ssize_t length ,
                                                  char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_DecodeLatin1(char const   *string ,
                                            Py_ssize_t length ,
                                            char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsLatin1String(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeLatin1(Py_UNICODE const   *data ,
                                            Py_ssize_t length ,
                                            char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_DecodeASCII(char const   *string ,
                                           Py_ssize_t length ,
                                           char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsASCIIString(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_EncodeASCII(Py_UNICODE const   *data ,
                                           Py_ssize_t length ,
                                           char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_DecodeCharmap(char const   *string ,
                                             Py_ssize_t length ,
                                             PyObject *mapping ,
                                             char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_AsCharmapString(PyObject *unicode ,
                                               PyObject *mapping ) ;
extern PyObject *PyUnicodeUCS2_EncodeCharmap(Py_UNICODE const   *data ,
                                             Py_ssize_t length ,
                                             PyObject *mapping ,
                                             char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_TranslateCharmap(Py_UNICODE const   *data ,
                                                Py_ssize_t length ,
                                                PyObject *table ,
                                                char const   *errors ) ;
extern int PyUnicodeUCS2_EncodeDecimal(Py_UNICODE *s , Py_ssize_t length ,
                                       char *output , char const   *errors ) ;
extern PyObject *PyUnicode_TransformDecimalToASCII(Py_UNICODE *s ,
                                                   Py_ssize_t length ) ;
extern int PyUnicodeUCS2_FSConverter(PyObject * , void * ) ;
extern int PyUnicodeUCS2_FSDecoder(PyObject * , void * ) ;
extern PyObject *PyUnicodeUCS2_DecodeFSDefault(char const   *s ) ;
extern PyObject *PyUnicodeUCS2_DecodeFSDefaultAndSize(char const   *s ,
                                                      Py_ssize_t size ) ;
extern PyObject *PyUnicode_EncodeFSDefault(PyObject *unicode ) ;
extern PyObject *PyUnicodeUCS2_Concat(PyObject *left , PyObject *right ) ;
extern void PyUnicodeUCS2_Append(PyObject **pleft , PyObject *right ) ;
extern void PyUnicodeUCS2_AppendAndDel(PyObject **pleft , PyObject *right ) ;
extern PyObject *PyUnicodeUCS2_Split(PyObject *s , PyObject *sep ,
                                     Py_ssize_t maxsplit ) ;
extern PyObject *PyUnicodeUCS2_Splitlines(PyObject *s , int keepends ) ;
extern PyObject *PyUnicodeUCS2_Partition(PyObject *s , PyObject *sep ) ;
extern PyObject *PyUnicodeUCS2_RPartition(PyObject *s , PyObject *sep ) ;
extern PyObject *PyUnicodeUCS2_RSplit(PyObject *s , PyObject *sep ,
                                      Py_ssize_t maxsplit ) ;
extern PyObject *PyUnicodeUCS2_Translate(PyObject *str , PyObject *table ,
                                         char const   *errors ) ;
extern PyObject *PyUnicodeUCS2_Join(PyObject *separator , PyObject *seq ) ;
extern Py_ssize_t PyUnicodeUCS2_Tailmatch(PyObject *str , PyObject *substr ,
                                          Py_ssize_t start , Py_ssize_t end ,
                                          int direction ) ;
extern Py_ssize_t PyUnicodeUCS2_Find(PyObject *str , PyObject *substr ,
                                     Py_ssize_t start , Py_ssize_t end ,
                                     int direction ) ;
extern Py_ssize_t PyUnicodeUCS2_Count(PyObject *str , PyObject *substr ,
                                      Py_ssize_t start , Py_ssize_t end ) ;
extern PyObject *PyUnicodeUCS2_Replace(PyObject *str , PyObject *substr ,
                                       PyObject *replstr , Py_ssize_t maxcount ) ;
extern int PyUnicodeUCS2_Compare(PyObject *left , PyObject *right ) ;
extern int PyUnicodeUCS2_CompareWithASCIIString(PyObject *left ,
                                                char const   *right ) ;
extern PyObject *PyUnicodeUCS2_RichCompare(PyObject *left , PyObject *right ,
                                           int op ) ;
extern PyObject *PyUnicodeUCS2_Format(PyObject *format , PyObject *args ) ;
extern int PyUnicodeUCS2_Contains(PyObject *container , PyObject *element ) ;
extern int PyUnicodeUCS2_IsIdentifier(PyObject *s ) ;
extern PyObject *_PyUnicode_XStrip(PyUnicodeObject *self , int striptype ,
                                   PyObject *sepobj ) ;
extern Py_ssize_t _PyUnicode_InsertThousandsGroupingLocale(Py_UNICODE *buffer ,
                                                           Py_ssize_t n_buffer ,
                                                           Py_UNICODE *digits ,
                                                           Py_ssize_t n_digits ,
                                                           Py_ssize_t min_width ) ;
extern Py_ssize_t _PyUnicode_InsertThousandsGrouping(Py_UNICODE *buffer ,
                                                     Py_ssize_t n_buffer ,
                                                     Py_UNICODE *digits ,
                                                     Py_ssize_t n_digits ,
                                                     Py_ssize_t min_width ,
                                                     char const   *grouping ,
                                                     char const   *thousands_sep ) ;
extern unsigned char const   _Py_ascii_whitespace[] ;
extern int _PyUnicode_IsLowercase(Py_UCS4 ch ) ;
extern int _PyUnicode_IsUppercase(Py_UCS4 ch ) ;
extern int _PyUnicode_IsTitlecase(Py_UCS4 ch ) ;
extern int _PyUnicode_IsXidStart(Py_UCS4 ch ) ;
extern int _PyUnicode_IsXidContinue(Py_UCS4 ch ) ;
extern int _PyUnicode_IsWhitespace(Py_UCS4 const   ch ) ;
extern int _PyUnicode_IsLinebreak(Py_UCS4 const   ch ) ;
extern Py_UCS4 _PyUnicode_ToLowercase(Py_UCS4 ch ) ;
extern Py_UCS4 _PyUnicode_ToUppercase(Py_UCS4 ch ) ;
extern Py_UCS4 _PyUnicode_ToTitlecase(Py_UCS4 ch ) ;
extern int _PyUnicode_ToDecimalDigit(Py_UCS4 ch ) ;
extern int _PyUnicode_ToDigit(Py_UCS4 ch ) ;
extern double _PyUnicode_ToNumeric(Py_UCS4 ch ) ;
extern int _PyUnicode_IsDecimalDigit(Py_UCS4 ch ) ;
extern int _PyUnicode_IsDigit(Py_UCS4 ch ) ;
extern int _PyUnicode_IsNumeric(Py_UCS4 ch ) ;
extern int _PyUnicode_IsPrintable(Py_UCS4 ch ) ;
extern int _PyUnicode_IsAlpha(Py_UCS4 ch ) ;
extern size_t Py_UNICODE_strlen(Py_UNICODE const   *u ) ;
extern Py_UNICODE *Py_UNICODE_strcpy(Py_UNICODE *s1 , Py_UNICODE const   *s2 ) ;
extern Py_UNICODE *Py_UNICODE_strcat(Py_UNICODE *s1 , Py_UNICODE const   *s2 ) ;
extern Py_UNICODE *Py_UNICODE_strncpy(Py_UNICODE *s1 , Py_UNICODE const   *s2 ,
                                      size_t n ) ;
extern int Py_UNICODE_strcmp(Py_UNICODE const   *s1 , Py_UNICODE const   *s2 ) ;
extern int Py_UNICODE_strncmp(Py_UNICODE const   *s1 , Py_UNICODE const   *s2 ,
                              size_t n ) ;
extern Py_UNICODE *Py_UNICODE_strchr(Py_UNICODE const   *s , Py_UNICODE c ) ;
extern Py_UNICODE *Py_UNICODE_strrchr(Py_UNICODE const   *s , Py_UNICODE c ) ;
extern Py_UNICODE *PyUnicode_AsUnicodeCopy(PyObject *unicode ) ;
extern PyTypeObject PyLong_Type ;
extern PyObject *PyLong_FromLong(long  ) ;
extern PyObject *PyLong_FromUnsignedLong(unsigned long  ) ;
extern PyObject *PyLong_FromSize_t(size_t  ) ;
extern PyObject *PyLong_FromSsize_t(Py_ssize_t  ) ;
extern PyObject *PyLong_FromDouble(double  ) ;
extern long PyLong_AsLong(PyObject * ) ;
extern long PyLong_AsLongAndOverflow(PyObject * , int * ) ;
extern Py_ssize_t PyLong_AsSsize_t(PyObject * ) ;
extern size_t PyLong_AsSize_t(PyObject * ) ;
extern unsigned long PyLong_AsUnsignedLong(PyObject * ) ;
extern unsigned long PyLong_AsUnsignedLongMask(PyObject * ) ;
extern PyObject *PyLong_GetInfo(void) ;
extern unsigned char _PyLong_DigitValue[256] ;
extern double _PyLong_Frexp(PyLongObject *a , Py_ssize_t *e ) ;
extern double PyLong_AsDouble(PyObject * ) ;
extern PyObject *PyLong_FromVoidPtr(void * ) ;
extern void *PyLong_AsVoidPtr(PyObject * ) ;
extern PyObject *PyLong_FromLongLong(long long  ) ;
extern PyObject *PyLong_FromUnsignedLongLong(unsigned long long  ) ;
extern long long PyLong_AsLongLong(PyObject * ) ;
extern unsigned long long PyLong_AsUnsignedLongLong(PyObject * ) ;
extern unsigned long long PyLong_AsUnsignedLongLongMask(PyObject * ) ;
extern long long PyLong_AsLongLongAndOverflow(PyObject * , int * ) ;
extern PyObject *PyLong_FromString(char * , char ** , int  ) ;
extern PyObject *PyLong_FromUnicode(Py_UNICODE * , Py_ssize_t  , int  ) ;
extern int _PyLong_Sign(PyObject *v ) ;
extern size_t _PyLong_NumBits(PyObject *v ) ;
extern PyObject *_PyLong_DivmodNear(PyObject * , PyObject * ) ;
extern PyObject *_PyLong_FromByteArray(unsigned char const   *bytes , size_t n ,
                                       int little_endian , int is_signed ) ;
extern int _PyLong_AsByteArray(PyLongObject *v , unsigned char *bytes ,
                               size_t n , int little_endian , int is_signed ) ;
extern PyObject *_PyLong_Format(PyObject *aa , int base ) ;
extern PyObject *_PyLong_FormatAdvanced(PyObject *obj ,
                                        Py_UNICODE *format_spec ,
                                        Py_ssize_t format_spec_len ) ;
extern unsigned long PyOS_strtoul(char * , char ** , int  ) ;
extern long PyOS_strtol(char * , char ** , int  ) ;
extern PyLongObject *_PyLong_New(Py_ssize_t  ) ;
extern PyObject *_PyLong_Copy(PyLongObject *src ) ;
extern PyTypeObject PyBool_Type ;
extern struct _longobject _Py_FalseStruct ;
extern struct _longobject _Py_TrueStruct ;
extern PyObject *PyBool_FromLong(long  ) ;
extern PyTypeObject PyFloat_Type ;
extern double PyFloat_GetMax(void) ;
extern double PyFloat_GetMin(void) ;
extern PyObject *PyFloat_GetInfo(void) ;
extern PyObject *PyFloat_FromString(PyObject * ) ;
extern PyObject *PyFloat_FromDouble(double  ) ;
extern double PyFloat_AsDouble(PyObject * ) ;
extern int _PyFloat_Pack4(double x , unsigned char *p , int le ) ;
extern int _PyFloat_Pack8(double x , unsigned char *p , int le ) ;
extern int _PyFloat_Repr(double x , char *p , size_t len ) ;
extern int _PyFloat_Digits(char *buf , double v , int *signum ) ;
extern void _PyFloat_DigitsInit(void) ;
extern double _PyFloat_Unpack4(unsigned char const   *p , int le ) ;
extern double _PyFloat_Unpack8(unsigned char const   *p , int le ) ;
extern int PyFloat_ClearFreeList(void) ;
extern PyObject *_PyFloat_FormatAdvanced(PyObject *obj ,
                                         Py_UNICODE *format_spec ,
                                         Py_ssize_t format_spec_len ) ;
extern Py_complex _Py_c_sum(Py_complex  , Py_complex  ) ;
extern Py_complex _Py_c_diff(Py_complex  , Py_complex  ) ;
extern Py_complex _Py_c_neg(Py_complex  ) ;
extern Py_complex _Py_c_prod(Py_complex  , Py_complex  ) ;
extern Py_complex _Py_c_quot(Py_complex  , Py_complex  ) ;
extern Py_complex _Py_c_pow(Py_complex  , Py_complex  ) ;
extern double _Py_c_abs(Py_complex  ) ;
extern PyTypeObject PyComplex_Type ;
extern PyObject *PyComplex_FromCComplex(Py_complex  ) ;
extern PyObject *PyComplex_FromDoubles(double real , double imag ) ;
extern double PyComplex_RealAsDouble(PyObject *op ) ;
extern double PyComplex_ImagAsDouble(PyObject *op ) ;
extern Py_complex PyComplex_AsCComplex(PyObject *op ) ;
extern PyObject *_PyComplex_FormatAdvanced(PyObject *obj ,
                                           Py_UNICODE *format_spec ,
                                           Py_ssize_t format_spec_len ) ;
extern PyTypeObject PyRange_Type ;
extern PyTypeObject PyRangeIter_Type ;
extern PyTypeObject PyLongRangeIter_Type ;
extern PyTypeObject PyMemoryView_Type ;
extern PyObject *PyMemoryView_GetContiguous(PyObject *base , int buffertype ,
                                            char fort ) ;
extern PyObject *PyMemoryView_FromObject(PyObject *base ) ;
extern PyObject *PyMemoryView_FromBuffer(Py_buffer *info ) ;
extern PyTypeObject PyTuple_Type ;
extern PyTypeObject PyTupleIter_Type ;
extern PyObject *PyTuple_New(Py_ssize_t size ) ;
extern Py_ssize_t PyTuple_Size(PyObject * ) ;
extern PyObject *PyTuple_GetItem(PyObject * , Py_ssize_t  ) ;
extern int PyTuple_SetItem(PyObject * , Py_ssize_t  , PyObject * ) ;
extern PyObject *PyTuple_GetSlice(PyObject * , Py_ssize_t  , Py_ssize_t  ) ;
extern int _PyTuple_Resize(PyObject ** , Py_ssize_t  ) ;
extern PyObject *PyTuple_Pack(Py_ssize_t   , ...) ;
extern void _PyTuple_MaybeUntrack(PyObject * ) ;
extern int PyTuple_ClearFreeList(void) ;
extern PyTypeObject PyList_Type ;
extern PyTypeObject PyListIter_Type ;
extern PyTypeObject PyListRevIter_Type ;
extern PyTypeObject PySortWrapper_Type ;
extern PyObject *PyList_New(Py_ssize_t size ) ;
extern Py_ssize_t PyList_Size(PyObject * ) ;
extern PyObject *PyList_GetItem(PyObject * , Py_ssize_t  ) ;
extern int PyList_SetItem(PyObject * , Py_ssize_t  , PyObject * ) ;
extern int PyList_Insert(PyObject * , Py_ssize_t  , PyObject * ) ;
extern int PyList_Append(PyObject * , PyObject * ) ;
extern PyObject *PyList_GetSlice(PyObject * , Py_ssize_t  , Py_ssize_t  ) ;
extern int PyList_SetSlice(PyObject * , Py_ssize_t  , Py_ssize_t  , PyObject * ) ;
extern int PyList_Sort(PyObject * ) ;
extern int PyList_Reverse(PyObject * ) ;
extern PyObject *PyList_AsTuple(PyObject * ) ;
extern PyObject *_PyList_Extend(PyListObject * , PyObject * ) ;
extern PyTypeObject PyDict_Type ;
extern PyTypeObject PyDictIterKey_Type ;
extern PyTypeObject PyDictIterValue_Type ;
extern PyTypeObject PyDictIterItem_Type ;
extern PyTypeObject PyDictKeys_Type ;
extern PyTypeObject PyDictItems_Type ;
extern PyTypeObject PyDictValues_Type ;
extern PyObject *PyDict_New(void) ;
extern PyObject *PyDict_GetItem(PyObject *mp , PyObject *key ) ;
extern PyObject *PyDict_GetItemWithError(PyObject *mp , PyObject *key ) ;
extern int PyDict_SetItem(PyObject *mp , PyObject *key , PyObject *item ) ;
extern int PyDict_DelItem(PyObject *mp , PyObject *key ) ;
extern void PyDict_Clear(PyObject *mp ) ;
extern int PyDict_Next(PyObject *mp , Py_ssize_t *pos , PyObject **key ,
                       PyObject **value ) ;
extern int _PyDict_Next(PyObject *mp , Py_ssize_t *pos , PyObject **key ,
                        PyObject **value , Py_hash_t *hash ) ;
extern PyObject *PyDict_Keys(PyObject *mp ) ;
extern PyObject *PyDict_Values(PyObject *mp ) ;
extern PyObject *PyDict_Items(PyObject *mp ) ;
extern Py_ssize_t PyDict_Size(PyObject *mp ) ;
extern PyObject *PyDict_Copy(PyObject *mp ) ;
extern int PyDict_Contains(PyObject *mp , PyObject *key ) ;
extern int _PyDict_Contains(PyObject *mp , PyObject *key , Py_hash_t hash ) ;
extern PyObject *_PyDict_NewPresized(Py_ssize_t minused ) ;
extern void _PyDict_MaybeUntrack(PyObject *mp ) ;
extern int _PyDict_HasOnlyStringKeys(PyObject *mp ) ;
extern int PyDict_Update(PyObject *mp , PyObject *other ) ;
extern int PyDict_Merge(PyObject *mp , PyObject *other , int override ) ;
extern int PyDict_MergeFromSeq2(PyObject *d , PyObject *seq2 , int override ) ;
extern PyObject *PyDict_GetItemString(PyObject *dp , char const   *key ) ;
extern int PyDict_SetItemString(PyObject *dp , char const   *key ,
                                PyObject *item ) ;
extern int PyDict_DelItemString(PyObject *dp , char const   *key ) ;
extern PyTypeObject PyEnum_Type ;
extern PyTypeObject PyReversed_Type ;
extern PyTypeObject PySet_Type ;
extern PyTypeObject PyFrozenSet_Type ;
extern PyTypeObject PySetIter_Type ;
extern PyObject *PySet_New(PyObject * ) ;
extern PyObject *PyFrozenSet_New(PyObject * ) ;
extern Py_ssize_t PySet_Size(PyObject *anyset ) ;
extern int PySet_Clear(PyObject *set ) ;
extern int PySet_Contains(PyObject *anyset , PyObject *key ) ;
extern int PySet_Discard(PyObject *set , PyObject *key ) ;
extern int PySet_Add(PyObject *set , PyObject *key ) ;
extern int _PySet_NextEntry(PyObject *set , Py_ssize_t *pos , PyObject **key ,
                            Py_hash_t *hash ) ;
extern PyObject *PySet_Pop(PyObject *set ) ;
extern int _PySet_Update(PyObject *set , PyObject *iterable ) ;
extern PyTypeObject PyCFunction_Type ;
extern PyCFunction PyCFunction_GetFunction(PyObject * ) ;
extern PyObject *PyCFunction_GetSelf(PyObject * ) ;
extern int PyCFunction_GetFlags(PyObject * ) ;
extern PyObject *PyCFunction_Call(PyObject * , PyObject * , PyObject * ) ;
extern PyObject *PyCFunction_NewEx(PyMethodDef * , PyObject * , PyObject * ) ;
extern int PyCFunction_ClearFreeList(void) ;
extern PyTypeObject PyModule_Type ;
extern PyObject *PyModule_NewObject(PyObject *name ) ;
extern PyObject *PyModule_New(char const   *name ) ;
extern PyObject *PyModule_GetDict(PyObject * ) ;
extern PyObject *PyModule_GetNameObject(PyObject * ) ;
extern char const   *PyModule_GetName(PyObject * ) ;
extern char const   *PyModule_GetFilename(PyObject * ) ;
extern PyObject *PyModule_GetFilenameObject(PyObject * ) ;
extern void _PyModule_Clear(PyObject * ) ;
extern struct PyModuleDef *PyModule_GetDef(PyObject * ) ;
extern void *PyModule_GetState(PyObject * ) ;
extern PyTypeObject PyFunction_Type ;
extern PyObject *PyFunction_New(PyObject * , PyObject * ) ;
extern PyObject *PyFunction_GetCode(PyObject * ) ;
extern PyObject *PyFunction_GetGlobals(PyObject * ) ;
extern PyObject *PyFunction_GetModule(PyObject * ) ;
extern PyObject *PyFunction_GetDefaults(PyObject * ) ;
extern int PyFunction_SetDefaults(PyObject * , PyObject * ) ;
extern PyObject *PyFunction_GetKwDefaults(PyObject * ) ;
extern int PyFunction_SetKwDefaults(PyObject * , PyObject * ) ;
extern PyObject *PyFunction_GetClosure(PyObject * ) ;
extern int PyFunction_SetClosure(PyObject * , PyObject * ) ;
extern PyObject *PyFunction_GetAnnotations(PyObject * ) ;
extern int PyFunction_SetAnnotations(PyObject * , PyObject * ) ;
extern PyTypeObject PyClassMethod_Type ;
extern PyTypeObject PyStaticMethod_Type ;
extern PyObject *PyClassMethod_New(PyObject * ) ;
extern PyObject *PyStaticMethod_New(PyObject * ) ;
extern PyTypeObject PyMethod_Type ;
extern PyObject *PyMethod_New(PyObject * , PyObject * ) ;
extern PyObject *PyMethod_Function(PyObject * ) ;
extern PyObject *PyMethod_Self(PyObject * ) ;
extern int PyMethod_ClearFreeList(void) ;
extern PyTypeObject PyInstanceMethod_Type ;
extern PyObject *PyInstanceMethod_New(PyObject * ) ;
extern PyObject *PyInstanceMethod_Function(PyObject * ) ;
extern PyObject *PyFile_FromFd(int  , char * , char * , int  , char * , char * ,
                               char * , int  ) ;
extern PyObject *PyFile_GetLine(PyObject * , int  ) ;
extern int PyFile_WriteObject(PyObject * , PyObject * , int  ) ;
extern int PyFile_WriteString(char const   * , PyObject * ) ;
extern int PyObject_AsFileDescriptor(PyObject * ) ;
extern char *Py_UniversalNewlineFgets(char * , int  , FILE * , PyObject * ) ;
extern char const   *Py_FileSystemDefaultEncoding ;
extern int Py_HasFileSystemDefaultEncoding ;
extern PyObject *PyFile_NewStdPrinter(int  ) ;
extern PyTypeObject PyStdPrinter_Type ;
extern PyTypeObject PyCapsule_Type ;
extern PyObject *PyCapsule_New(void *pointer , char const   *name ,
                               void (*destructor)(PyObject * ) ) ;
extern void *PyCapsule_GetPointer(PyObject *capsule , char const   *name ) ;
extern PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule ) ;
extern char const   *PyCapsule_GetName(PyObject *capsule ) ;
extern void *PyCapsule_GetContext(PyObject *capsule ) ;
extern int PyCapsule_IsValid(PyObject *capsule , char const   *name ) ;
extern int PyCapsule_SetPointer(PyObject *capsule , void *pointer ) ;
extern int PyCapsule_SetDestructor(PyObject *capsule ,
                                   void (*destructor)(PyObject * ) ) ;
extern int PyCapsule_SetName(PyObject *capsule , char const   *name ) ;
extern int PyCapsule_SetContext(PyObject *capsule , void *context ) ;
extern void *PyCapsule_Import(char const   *name , int no_block ) ;
extern PyInterpreterState *PyInterpreterState_New(void) ;
extern void PyInterpreterState_Clear(PyInterpreterState * ) ;
extern void PyInterpreterState_Delete(PyInterpreterState * ) ;
extern int _PyState_AddModule(PyObject * , struct PyModuleDef * ) ;
extern PyObject *PyState_FindModule(struct PyModuleDef * ) ;
extern PyThreadState *PyThreadState_New(PyInterpreterState * ) ;
extern PyThreadState *_PyThreadState_Prealloc(PyInterpreterState * ) ;
extern void _PyThreadState_Init(PyThreadState * ) ;
extern void PyThreadState_Clear(PyThreadState * ) ;
extern void PyThreadState_Delete(PyThreadState * ) ;
extern void PyThreadState_DeleteCurrent(void) ;
extern void _PyGILState_Reinit(void) ;
extern PyThreadState *PyThreadState_Get(void) ;
extern PyThreadState *PyThreadState_Swap(PyThreadState * ) ;
extern PyObject *PyThreadState_GetDict(void) ;
extern int PyThreadState_SetAsyncExc(long  , PyObject * ) ;
extern _Py_atomic_address _PyThreadState_Current ;
extern PyGILState_STATE PyGILState_Ensure(void) ;
extern void PyGILState_Release(PyGILState_STATE  ) ;
extern PyThreadState *PyGILState_GetThisThreadState(void) ;
extern PyObject *_PyThread_CurrentFrames(void) ;
extern PyInterpreterState *PyInterpreterState_Head(void) ;
extern PyInterpreterState *PyInterpreterState_Next(PyInterpreterState * ) ;
extern PyThreadState *PyInterpreterState_ThreadHead(PyInterpreterState * ) ;
extern PyThreadState *PyThreadState_Next(PyThreadState * ) ;
extern struct _frame *(*_PyThreadState_GetFrame)(PyThreadState *self_ ) ;
extern int PyTraceBack_Here(struct _frame * ) ;
extern int PyTraceBack_Print(PyObject * , PyObject * ) ;
extern int _Py_DisplaySourceLine(PyObject * , PyObject * , int  , int  ) ;
extern PyTypeObject PyTraceBack_Type ;
extern void _Py_DumpTraceback(int fd , PyThreadState *tstate ) ;
extern char const   *_Py_DumpTracebackThreads(int fd ,
                                              PyInterpreterState *interp ,
                                              PyThreadState *current_thread ) ;
extern PyObject _Py_EllipsisObject ;
extern PyTypeObject PySlice_Type ;
extern PyTypeObject PyEllipsis_Type ;
extern PyObject *PySlice_New(PyObject *start , PyObject *stop , PyObject *step ) ;
extern PyObject *_PySlice_FromIndices(Py_ssize_t start , Py_ssize_t stop ) ;
extern int PySlice_GetIndices(PyObject *r , Py_ssize_t length ,
                              Py_ssize_t *start , Py_ssize_t *stop ,
                              Py_ssize_t *step ) ;
extern int PySlice_GetIndicesEx(PyObject *r , Py_ssize_t length ,
                                Py_ssize_t *start , Py_ssize_t *stop ,
                                Py_ssize_t *step , Py_ssize_t *slicelength ) ;
extern PyTypeObject PyCell_Type ;
extern PyObject *PyCell_New(PyObject * ) ;
extern PyObject *PyCell_Get(PyObject * ) ;
extern int PyCell_Set(PyObject * , PyObject * ) ;
extern PyTypeObject PySeqIter_Type ;
extern PyTypeObject PyCallIter_Type ;
extern PyTypeObject PyCmpWrapper_Type ;
extern PyObject *PySeqIter_New(PyObject * ) ;
extern PyObject *PyCallIter_New(PyObject * , PyObject * ) ;
extern PyTypeObject PyGen_Type ;
extern PyObject *PyGen_New(struct _frame * ) ;
extern int PyGen_NeedsFinalizing(PyGenObject * ) ;
extern PyTypeObject PyClassMethodDescr_Type ;
extern PyTypeObject PyGetSetDescr_Type ;
extern PyTypeObject PyMemberDescr_Type ;
extern PyTypeObject PyMethodDescr_Type ;
extern PyTypeObject PyWrapperDescr_Type ;
extern PyTypeObject PyDictProxy_Type ;
extern PyObject *PyDescr_NewMethod(PyTypeObject * , PyMethodDef * ) ;
extern PyObject *PyDescr_NewClassMethod(PyTypeObject * , PyMethodDef * ) ;
extern PyObject *PyDescr_NewMember(PyTypeObject * , struct PyMemberDef * ) ;
extern PyObject *PyDescr_NewGetSet(PyTypeObject * , struct PyGetSetDef * ) ;
extern PyObject *PyDescr_NewWrapper(PyTypeObject * , struct wrapperbase * ,
                                    void * ) ;
extern PyObject *PyDictProxy_New(PyObject * ) ;
extern PyObject *PyWrapper_New(PyObject * , PyObject * ) ;
extern PyTypeObject PyProperty_Type ;
extern PyObject *_PyWarnings_Init(void) ;
extern int PyErr_WarnEx(PyObject *category , char const   *message ,
                        Py_ssize_t stack_level ) ;
extern int PyErr_WarnFormat(PyObject *category , Py_ssize_t stack_level ,
                            char const   *format  , ...) ;
extern int PyErr_WarnExplicit(PyObject *category , char const   *message ,
                              char const   *filename , int lineno ,
                              char const   *module , PyObject *registry ) ;
extern PyTypeObject _PyWeakref_RefType ;
extern PyTypeObject _PyWeakref_ProxyType ;
extern PyTypeObject _PyWeakref_CallableProxyType ;
extern PyObject *PyWeakref_NewRef(PyObject *ob , PyObject *callback ) ;
extern PyObject *PyWeakref_NewProxy(PyObject *ob , PyObject *callback ) ;
extern PyObject *PyWeakref_GetObject(PyObject *ref ) ;
extern Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head ) ;
extern void _PyWeakref_ClearRef(PyWeakReference *self ) ;
extern char *PyStructSequence_UnnamedField ;
extern void PyStructSequence_InitType(PyTypeObject *type ,
                                      PyStructSequence_Desc *desc ) ;
extern PyTypeObject *PyStructSequence_NewType(PyStructSequence_Desc *desc ) ;
extern PyObject *PyStructSequence_New(PyTypeObject *type ) ;
extern void PyStructSequence_SetItem(PyObject * , Py_ssize_t  , PyObject * ) ;
extern PyObject *PyStructSequence_GetItem(PyObject * , Py_ssize_t  ) ;
extern int PyCodec_Register(PyObject *search_function ) ;
extern PyObject *_PyCodec_Lookup(char const   *encoding ) ;
extern int PyCodec_KnownEncoding(char const   *encoding ) ;
extern PyObject *PyCodec_Encode(PyObject *object , char const   *encoding ,
                                char const   *errors ) ;
extern PyObject *PyCodec_Decode(PyObject *object , char const   *encoding ,
                                char const   *errors ) ;
extern PyObject *PyCodec_Encoder(char const   *encoding ) ;
extern PyObject *PyCodec_Decoder(char const   *encoding ) ;
extern PyObject *PyCodec_IncrementalEncoder(char const   *encoding ,
                                            char const   *errors ) ;
extern PyObject *PyCodec_IncrementalDecoder(char const   *encoding ,
                                            char const   *errors ) ;
extern PyObject *PyCodec_StreamReader(char const   *encoding ,
                                      PyObject *stream , char const   *errors ) ;
extern PyObject *PyCodec_StreamWriter(char const   *encoding ,
                                      PyObject *stream , char const   *errors ) ;
extern int PyCodec_RegisterError(char const   *name , PyObject *error ) ;
extern PyObject *PyCodec_LookupError(char const   *name ) ;
extern PyObject *PyCodec_StrictErrors(PyObject *exc ) ;
extern PyObject *PyCodec_IgnoreErrors(PyObject *exc ) ;
extern PyObject *PyCodec_ReplaceErrors(PyObject *exc ) ;
extern PyObject *PyCodec_XMLCharRefReplaceErrors(PyObject *exc ) ;
extern PyObject *PyCodec_BackslashReplaceErrors(PyObject *exc ) ;
extern void PyErr_SetNone(PyObject * ) ;
extern void PyErr_SetObject(PyObject * , PyObject * ) ;
extern void PyErr_SetString(PyObject *exception , char const   *string ) ;
extern PyObject *PyErr_Occurred(void) ;
extern void PyErr_Clear(void) ;
extern void PyErr_Fetch(PyObject ** , PyObject ** , PyObject ** ) ;
extern void PyErr_Restore(PyObject * , PyObject * , PyObject * ) ;
extern void Py_FatalError(char const   *message ) ;
extern int PyErr_GivenExceptionMatches(PyObject * , PyObject * ) ;
extern int PyErr_ExceptionMatches(PyObject * ) ;
extern void PyErr_NormalizeException(PyObject ** , PyObject ** , PyObject ** ) ;
extern int PyException_SetTraceback(PyObject * , PyObject * ) ;
extern PyObject *PyException_GetTraceback(PyObject * ) ;
extern PyObject *PyException_GetCause(PyObject * ) ;
extern void PyException_SetCause(PyObject * , PyObject * ) ;
extern PyObject *PyException_GetContext(PyObject * ) ;
extern void PyException_SetContext(PyObject * , PyObject * ) ;
extern PyObject *PyExc_BaseException ;
extern PyObject *PyExc_Exception ;
extern PyObject *PyExc_StopIteration ;
extern PyObject *PyExc_GeneratorExit ;
extern PyObject *PyExc_ArithmeticError ;
extern PyObject *PyExc_LookupError ;
extern PyObject *PyExc_AssertionError ;
extern PyObject *PyExc_AttributeError ;
extern PyObject *PyExc_EOFError ;
extern PyObject *PyExc_FloatingPointError ;
extern PyObject *PyExc_EnvironmentError ;
extern PyObject *PyExc_IOError ;
extern PyObject *PyExc_OSError ;
extern PyObject *PyExc_ImportError ;
extern PyObject *PyExc_IndexError ;
extern PyObject *PyExc_KeyError ;
extern PyObject *PyExc_KeyboardInterrupt ;
extern PyObject *PyExc_MemoryError ;
extern PyObject *PyExc_NameError ;
extern PyObject *PyExc_OverflowError ;
extern PyObject *PyExc_RuntimeError ;
extern PyObject *PyExc_NotImplementedError ;
extern PyObject *PyExc_SyntaxError ;
extern PyObject *PyExc_IndentationError ;
extern PyObject *PyExc_TabError ;
extern PyObject *PyExc_ReferenceError ;
extern PyObject *PyExc_SystemError ;
extern PyObject *PyExc_SystemExit ;
extern PyObject *PyExc_TypeError ;
extern PyObject *PyExc_UnboundLocalError ;
extern PyObject *PyExc_UnicodeError ;
extern PyObject *PyExc_UnicodeEncodeError ;
extern PyObject *PyExc_UnicodeDecodeError ;
extern PyObject *PyExc_UnicodeTranslateError ;
extern PyObject *PyExc_ValueError ;
extern PyObject *PyExc_ZeroDivisionError ;
extern PyObject *PyExc_BufferError ;
extern PyObject *PyExc_RecursionErrorInst ;
extern PyObject *PyExc_Warning ;
extern PyObject *PyExc_UserWarning ;
extern PyObject *PyExc_DeprecationWarning ;
extern PyObject *PyExc_PendingDeprecationWarning ;
extern PyObject *PyExc_SyntaxWarning ;
extern PyObject *PyExc_RuntimeWarning ;
extern PyObject *PyExc_FutureWarning ;
extern PyObject *PyExc_ImportWarning ;
extern PyObject *PyExc_UnicodeWarning ;
extern PyObject *PyExc_BytesWarning ;
extern PyObject *PyExc_ResourceWarning ;
extern int PyErr_BadArgument(void) ;
extern PyObject *PyErr_NoMemory(void) ;
extern PyObject *PyErr_SetFromErrno(PyObject * ) ;
extern PyObject *PyErr_SetFromErrnoWithFilenameObject(PyObject * , PyObject * ) ;
extern PyObject *PyErr_SetFromErrnoWithFilename(PyObject *exc ,
                                                char const   *filename ) ;
extern PyObject *PyErr_Format(PyObject *exception , char const   *format  , ...) ;
extern void PyErr_BadInternalCall(void) ;
extern void _PyErr_BadInternalCall(char const   *filename , int lineno ) ;
extern PyObject *PyErr_NewException(char const   *name , PyObject *base ,
                                    PyObject *dict ) ;
extern PyObject *PyErr_NewExceptionWithDoc(char const   *name ,
                                           char const   *doc , PyObject *base ,
                                           PyObject *dict ) ;
extern void PyErr_WriteUnraisable(PyObject * ) ;
extern int PyErr_CheckSignals(void) ;
extern void PyErr_SetInterrupt(void) ;
extern int PySignal_SetWakeupFd(int fd ) ;
extern void PyErr_SyntaxLocation(char const   *filename , int lineno ) ;
extern void PyErr_SyntaxLocationEx(char const   *filename , int lineno ,
                                   int col_offset ) ;
extern PyObject *PyErr_ProgramText(char const   *filename , int lineno ) ;
extern PyObject *PyUnicodeDecodeError_Create(char const   *encoding ,
                                             char const   *object ,
                                             Py_ssize_t length ,
                                             Py_ssize_t start , Py_ssize_t end ,
                                             char const   *reason ) ;
extern PyObject *PyUnicodeEncodeError_Create(char const   *encoding ,
                                             Py_UNICODE const   *object ,
                                             Py_ssize_t length ,
                                             Py_ssize_t start , Py_ssize_t end ,
                                             char const   *reason ) ;
extern PyObject *PyUnicodeTranslateError_Create(Py_UNICODE const   *object ,
                                                Py_ssize_t length ,
                                                Py_ssize_t start ,
                                                Py_ssize_t end ,
                                                char const   *reason ) ;
extern PyObject *PyUnicodeEncodeError_GetEncoding(PyObject * ) ;
extern PyObject *PyUnicodeDecodeError_GetEncoding(PyObject * ) ;
extern PyObject *PyUnicodeEncodeError_GetObject(PyObject * ) ;
extern PyObject *PyUnicodeDecodeError_GetObject(PyObject * ) ;
extern PyObject *PyUnicodeTranslateError_GetObject(PyObject * ) ;
extern int PyUnicodeEncodeError_GetStart(PyObject * , Py_ssize_t * ) ;
extern int PyUnicodeDecodeError_GetStart(PyObject * , Py_ssize_t * ) ;
extern int PyUnicodeTranslateError_GetStart(PyObject * , Py_ssize_t * ) ;
extern int PyUnicodeEncodeError_SetStart(PyObject * , Py_ssize_t  ) ;
extern int PyUnicodeDecodeError_SetStart(PyObject * , Py_ssize_t  ) ;
extern int PyUnicodeTranslateError_SetStart(PyObject * , Py_ssize_t  ) ;
extern int PyUnicodeEncodeError_GetEnd(PyObject * , Py_ssize_t * ) ;
extern int PyUnicodeDecodeError_GetEnd(PyObject * , Py_ssize_t * ) ;
extern int PyUnicodeTranslateError_GetEnd(PyObject * , Py_ssize_t * ) ;
extern int PyUnicodeEncodeError_SetEnd(PyObject * , Py_ssize_t  ) ;
extern int PyUnicodeDecodeError_SetEnd(PyObject * , Py_ssize_t  ) ;
extern int PyUnicodeTranslateError_SetEnd(PyObject * , Py_ssize_t  ) ;
extern PyObject *PyUnicodeEncodeError_GetReason(PyObject * ) ;
extern PyObject *PyUnicodeDecodeError_GetReason(PyObject * ) ;
extern PyObject *PyUnicodeTranslateError_GetReason(PyObject * ) ;
extern int PyUnicodeEncodeError_SetReason(PyObject *exc , char const   *reason ) ;
extern int PyUnicodeDecodeError_SetReason(PyObject *exc , char const   *reason ) ;
extern int PyUnicodeTranslateError_SetReason(PyObject *exc ,
                                             char const   *reason ) ;
extern int ( /* format attribute */  PyOS_snprintf)(char *str , size_t size ,
                                                    char const   *format  , ...) ;
extern int ( /* format attribute */  PyOS_vsnprintf)(char *str , size_t size ,
                                                     char const   *format ,
                                                     va_list va ) ;
extern PyArena *PyArena_New(void) ;
extern void PyArena_Free(PyArena * ) ;
extern void *PyArena_Malloc(PyArena * , size_t size ) ;
extern int PyArena_AddPyObject(PyArena * , PyObject * ) ;
extern PyObject *_Py_VaBuildValue_SizeT(char const   * , va_list  ) ;
extern int PyArg_Parse(PyObject * , char const   *  , ...) ;
extern int PyArg_ParseTuple(PyObject * , char const   *  , ...) ;
extern int PyArg_ParseTupleAndKeywords(PyObject * , PyObject * ,
                                       char const   * , char **  , ...) ;
extern int PyArg_ValidateKeywordArguments(PyObject * ) ;
extern int PyArg_UnpackTuple(PyObject * , char const   * , Py_ssize_t  ,
                             Py_ssize_t   , ...) ;
extern PyObject *Py_BuildValue(char const   *  , ...) ;
extern PyObject *_Py_BuildValue_SizeT(char const   *  , ...) ;
extern int _PyArg_NoKeywords(char const   *funcname , PyObject *kw ) ;
extern int PyArg_VaParse(PyObject * , char const   * , va_list  ) ;
extern int PyArg_VaParseTupleAndKeywords(PyObject * , PyObject * ,
                                         char const   * , char ** , va_list  ) ;
extern PyObject *Py_VaBuildValue(char const   * , va_list  ) ;
extern int PyModule_AddObject(PyObject * , char const   * , PyObject * ) ;
extern int PyModule_AddIntConstant(PyObject * , char const   * , long  ) ;
extern int PyModule_AddStringConstant(PyObject * , char const   * ,
                                      char const   * ) ;
extern PyObject *PyModule_Create2(struct PyModuleDef * , int apiver ) ;
extern char *_Py_PackageContext ;
extern void Py_SetProgramName(wchar_t * ) ;
extern wchar_t *Py_GetProgramName(void) ;
extern void Py_SetPythonHome(wchar_t * ) ;
extern wchar_t *Py_GetPythonHome(void) ;
extern void Py_Initialize(void) ;
extern void Py_InitializeEx(int  ) ;
extern void Py_Finalize(void) ;
extern int Py_IsInitialized(void) ;
extern PyThreadState *Py_NewInterpreter(void) ;
extern void Py_EndInterpreter(PyThreadState * ) ;
extern int PyRun_SimpleStringFlags(char const   * , PyCompilerFlags * ) ;
extern int PyRun_AnyFileFlags(FILE * , char const   * , PyCompilerFlags * ) ;
extern int PyRun_AnyFileExFlags(FILE *fp , char const   *filename ,
                                int closeit , PyCompilerFlags *flags ) ;
extern int PyRun_SimpleFileExFlags(FILE *fp , char const   *filename ,
                                   int closeit , PyCompilerFlags *flags ) ;
extern int PyRun_InteractiveOneFlags(FILE *fp , char const   *filename ,
                                     PyCompilerFlags *flags ) ;
extern int PyRun_InteractiveLoopFlags(FILE *fp , char const   *filename ,
                                      PyCompilerFlags *flags ) ;
extern struct _mod *PyParser_ASTFromString(char const   *s ,
                                           char const   *filename , int start ,
                                           PyCompilerFlags *flags ,
                                           PyArena *arena ) ;
extern struct _mod *PyParser_ASTFromFile(FILE *fp , char const   *filename ,
                                         char const   *enc , int start ,
                                         char *ps1 , char *ps2 ,
                                         PyCompilerFlags *flags , int *errcode ,
                                         PyArena *arena ) ;
extern struct _node *PyParser_SimpleParseStringFlags(char const   * , int  ,
                                                     int  ) ;
extern struct _node *PyParser_SimpleParseFileFlags(FILE * , char const   * ,
                                                   int  , int  ) ;
extern PyObject *PyRun_StringFlags(char const   * , int  , PyObject * ,
                                   PyObject * , PyCompilerFlags * ) ;
extern PyObject *PyRun_FileExFlags(FILE *fp , char const   *filename ,
                                   int start , PyObject *globals ,
                                   PyObject *locals , int closeit ,
                                   PyCompilerFlags *flags ) ;
extern PyObject *Py_CompileStringExFlags(char const   *str ,
                                         char const   *filename , int start ,
                                         PyCompilerFlags *flags , int optimize ) ;
extern struct symtable *Py_SymtableString(char const   *str ,
                                          char const   *filename , int start ) ;
extern void PyErr_Print(void) ;
extern void PyErr_PrintEx(int  ) ;
extern void PyErr_Display(PyObject * , PyObject * , PyObject * ) ;
extern void _Py_PyAtExit(void (*func)(void) ) ;
extern int Py_AtExit(void (*func)(void) ) ;
extern void Py_Exit(int  ) ;
extern void _Py_RestoreSignals(void) ;
extern int Py_FdIsInteractive(FILE * , char const   * ) ;
extern int Py_Main(int argc , wchar_t **argv ) ;
extern wchar_t *Py_GetProgramFullPath(void) ;
extern wchar_t *Py_GetPrefix(void) ;
extern wchar_t *Py_GetExecPrefix(void) ;
extern wchar_t *Py_GetPath(void) ;
extern void Py_SetPath(wchar_t const   * ) ;
extern char const   *Py_GetVersion(void) ;
extern char const   *Py_GetPlatform(void) ;
extern char const   *Py_GetCopyright(void) ;
extern char const   *Py_GetCompiler(void) ;
extern char const   *Py_GetBuildInfo(void) ;
extern char const   *_Py_hgidentifier(void) ;
extern char const   *_Py_hgversion(void) ;
extern PyObject *_PyBuiltin_Init(void) ;
extern PyObject *_PySys_Init(void) ;
extern void _PyImport_Init(void) ;
extern void _PyExc_Init(void) ;
extern void _PyImportHooks_Init(void) ;
extern int _PyFrame_Init(void) ;
extern void _PyFloat_Init(void) ;
extern int PyByteArray_Init(void) ;
extern void _PyExc_Fini(void) ;
extern void _PyImport_Fini(void) ;
extern void PyMethod_Fini(void) ;
extern void PyFrame_Fini(void) ;
extern void PyCFunction_Fini(void) ;
extern void PyDict_Fini(void) ;
extern void PyTuple_Fini(void) ;
extern void PyList_Fini(void) ;
extern void PySet_Fini(void) ;
extern void PyBytes_Fini(void) ;
extern void PyByteArray_Fini(void) ;
extern void PyFloat_Fini(void) ;
extern void PyOS_FiniInterrupts(void) ;
extern void _PyGC_Fini(void) ;
extern PyThreadState *_Py_Finalizing ;
extern char *PyOS_Readline(FILE * , FILE * , char * ) ;
extern int (*PyOS_InputHook)(void) ;
extern char *(*PyOS_ReadlineFunctionPointer)(FILE * , FILE * , char * ) ;
extern PyThreadState *_PyOS_ReadlineTState ;
extern PyOS_sighandler_t PyOS_getsig(int  ) ;
extern PyOS_sighandler_t PyOS_setsig(int  , void (*)(int  ) ) ;
extern PyObject *PyEval_CallObjectWithKeywords(PyObject * , PyObject * ,
                                               PyObject * ) ;
extern PyObject *PyEval_CallFunction(PyObject *obj , char const   *format  , ...) ;
extern PyObject *PyEval_CallMethod(PyObject *obj , char const   *methodname ,
                                   char const   *format  , ...) ;
extern void PyEval_SetProfile(int (*)(PyObject * , struct _frame * , int  ,
                                      PyObject * ) , PyObject * ) ;
extern void PyEval_SetTrace(int (*)(PyObject * , struct _frame * , int  ,
                                    PyObject * ) , PyObject * ) ;
extern PyObject *PyEval_GetBuiltins(void) ;
extern PyObject *PyEval_GetGlobals(void) ;
extern PyObject *PyEval_GetLocals(void) ;
extern struct _frame *PyEval_GetFrame(void) ;
extern int PyEval_MergeCompilerFlags(PyCompilerFlags *cf ) ;
extern int Py_AddPendingCall(int (*func)(void * ) , void *arg ) ;
extern int Py_MakePendingCalls(void) ;
extern void Py_SetRecursionLimit(int  ) ;
extern int Py_GetRecursionLimit(void) ;
extern int _Py_CheckRecursiveCall(char *where ) ;
extern int _Py_CheckRecursionLimit ;
extern char const   *PyEval_GetFuncName(PyObject * ) ;
extern char const   *PyEval_GetFuncDesc(PyObject * ) ;
extern PyObject *PyEval_GetCallStats(PyObject * ) ;
extern PyObject *PyEval_EvalFrame(struct _frame * ) ;
extern PyObject *PyEval_EvalFrameEx(struct _frame *f , int exc ) ;
extern PyThreadState *PyEval_SaveThread(void) ;
extern void PyEval_RestoreThread(PyThreadState * ) ;
extern int PyEval_ThreadsInitialized(void) ;
extern void PyEval_InitThreads(void) ;
extern void _PyEval_FiniThreads(void) ;
extern void PyEval_AcquireLock(void) ;
extern void PyEval_ReleaseLock(void) ;
extern void PyEval_AcquireThread(PyThreadState *tstate ) ;
extern void PyEval_ReleaseThread(PyThreadState *tstate ) ;
extern void PyEval_ReInitThreads(void) ;
extern void _PyEval_SetSwitchInterval(unsigned long microseconds ) ;
extern unsigned long _PyEval_GetSwitchInterval(void) ;
extern int _PyEval_SliceIndex(PyObject * , Py_ssize_t * ) ;
extern void _PyEval_SignalAsyncExc(void) ;
extern PyObject *PySys_GetObject(char const   * ) ;
extern int PySys_SetObject(char const   * , PyObject * ) ;
extern void PySys_SetArgv(int  , wchar_t ** ) ;
extern void PySys_SetArgvEx(int  , wchar_t ** , int  ) ;
extern void PySys_SetPath(wchar_t const   * ) ;
extern void ( /* format attribute */  PySys_WriteStdout)(char const   *format 
                                                         , ...) ;
extern void ( /* format attribute */  PySys_WriteStderr)(char const   *format 
                                                         , ...) ;
extern void PySys_FormatStdout(char const   *format  , ...) ;
extern void PySys_FormatStderr(char const   *format  , ...) ;
extern PyObject *_PySys_TraceFunc ;
extern PyObject *_PySys_ProfileFunc ;
extern void PySys_ResetWarnOptions(void) ;
extern void PySys_AddWarnOption(wchar_t const   * ) ;
extern void PySys_AddWarnOptionUnicode(PyObject * ) ;
extern int PySys_HasWarnOptions(void) ;
extern void PySys_AddXOption(wchar_t const   * ) ;
extern PyObject *PySys_GetXOptions(void) ;
extern int PyOS_InterruptOccurred(void) ;
extern void PyOS_InitInterrupts(void) ;
extern void PyOS_AfterFork(void) ;
extern long PyImport_GetMagicNumber(void) ;
extern char const   *PyImport_GetMagicTag(void) ;
extern PyObject *PyImport_ExecCodeModule(char *name , PyObject *co ) ;
extern PyObject *PyImport_ExecCodeModuleEx(char *name , PyObject *co ,
                                           char *pathname ) ;
extern PyObject *PyImport_ExecCodeModuleWithPathnames(char *name ,
                                                      PyObject *co ,
                                                      char *pathname ,
                                                      char *cpathname ) ;
extern PyObject *PyImport_ExecCodeModuleObject(PyObject *name , PyObject *co ,
                                               PyObject *pathname ,
                                               PyObject *cpathname ) ;
extern PyObject *PyImport_GetModuleDict(void) ;
extern PyObject *PyImport_AddModuleObject(PyObject *name ) ;
extern PyObject *PyImport_AddModule(char const   *name ) ;
extern PyObject *PyImport_ImportModule(char const   *name ) ;
extern PyObject *PyImport_ImportModuleNoBlock(char const   *name ) ;
extern PyObject *PyImport_ImportModuleLevel(char *name , PyObject *globals ,
                                            PyObject *locals ,
                                            PyObject *fromlist , int level ) ;
extern PyObject *PyImport_ImportModuleLevelObject(PyObject *name ,
                                                  PyObject *globals ,
                                                  PyObject *locals ,
                                                  PyObject *fromlist ,
                                                  int level ) ;
extern PyObject *PyImport_GetImporter(PyObject *path ) ;
extern PyObject *PyImport_Import(PyObject *name ) ;
extern PyObject *PyImport_ReloadModule(PyObject *m ) ;
extern void PyImport_Cleanup(void) ;
extern int PyImport_ImportFrozenModuleObject(PyObject *name ) ;
extern int PyImport_ImportFrozenModule(char *name ) ;
extern void _PyImport_AcquireLock(void) ;
extern int _PyImport_ReleaseLock(void) ;
extern void _PyImport_ReInitLock(void) ;
extern PyObject *_PyImport_FindBuiltin(char const   *name ) ;
extern PyObject *_PyImport_FindExtensionObject(PyObject * , PyObject * ) ;
extern int _PyImport_FixupBuiltin(PyObject *mod , char *name ) ;
extern int _PyImport_FixupExtensionObject(PyObject * , PyObject * , PyObject * ) ;
extern struct _inittab *PyImport_Inittab ;
extern int PyImport_ExtendInittab(struct _inittab *newtab ) ;
extern PyTypeObject PyNullImporter_Type ;
extern int PyImport_AppendInittab(char const   *name ,
                                  PyObject *(*initfunc)(void) ) ;
extern struct _frozen *PyImport_FrozenModules ;
extern PyObject *PyObject_Call(PyObject *callable_object , PyObject *args ,
                               PyObject *kw ) ;
extern PyObject *PyObject_CallObject(PyObject *callable_object , PyObject *args ) ;
extern PyObject *PyObject_CallFunction(PyObject *callable_object , char *format 
                                       , ...) ;
extern PyObject *PyObject_CallMethod(PyObject *o , char *method , char *format 
                                     , ...) ;
extern PyObject *_PyObject_CallFunction_SizeT(PyObject *callable , char *format 
                                              , ...) ;
extern PyObject *_PyObject_CallMethod_SizeT(PyObject *o , char *name ,
                                            char *format  , ...) ;
extern PyObject *PyObject_CallFunctionObjArgs(PyObject *callable  , ...) ;
extern PyObject *PyObject_CallMethodObjArgs(PyObject *o , PyObject *method 
                                            , ...) ;
extern PyObject *PyObject_Type(PyObject *o ) ;
extern Py_ssize_t PyObject_Size(PyObject *o ) ;
extern Py_ssize_t PyObject_Length(PyObject *o ) ;
extern Py_ssize_t _PyObject_LengthHint(PyObject *o , Py_ssize_t  ) ;
extern PyObject *PyObject_GetItem(PyObject *o , PyObject *key ) ;
extern int PyObject_SetItem(PyObject *o , PyObject *key , PyObject *v ) ;
extern int PyObject_DelItemString(PyObject *o , char *key ) ;
extern int PyObject_DelItem(PyObject *o , PyObject *key ) ;
extern int PyObject_AsCharBuffer(PyObject *obj , char const   **buffer ,
                                 Py_ssize_t *buffer_len ) ;
extern int PyObject_CheckReadBuffer(PyObject *obj ) ;
extern int PyObject_AsReadBuffer(PyObject *obj , void const   **buffer ,
                                 Py_ssize_t *buffer_len ) ;
extern int PyObject_AsWriteBuffer(PyObject *obj , void **buffer ,
                                  Py_ssize_t *buffer_len ) ;
extern int PyObject_GetBuffer(PyObject *obj , Py_buffer *view , int flags ) ;
extern void *PyBuffer_GetPointer(Py_buffer *view , Py_ssize_t *indices ) ;
extern int PyBuffer_SizeFromFormat(char const   * ) ;
extern int PyBuffer_ToContiguous(void *buf , Py_buffer *view , Py_ssize_t len ,
                                 char fort ) ;
extern int PyBuffer_FromContiguous(Py_buffer *view , void *buf ,
                                   Py_ssize_t len , char fort ) ;
extern int PyObject_CopyData(PyObject *dest , PyObject *src ) ;
extern int PyBuffer_IsContiguous(Py_buffer *view , char fort ) ;
extern void PyBuffer_FillContiguousStrides(int ndims , Py_ssize_t *shape ,
                                           Py_ssize_t *strides , int itemsize ,
                                           char fort ) ;
extern int PyBuffer_FillInfo(Py_buffer *view , PyObject *o , void *buf ,
                             Py_ssize_t len , int readonly , int flags ) ;
extern void PyBuffer_Release(Py_buffer *view ) ;
extern PyObject *PyObject_Format(PyObject *obj , PyObject *format_spec ) ;
extern PyObject *PyObject_GetIter(PyObject * ) ;
extern PyObject *PyIter_Next(PyObject * ) ;
extern int PyNumber_Check(PyObject *o ) ;
extern PyObject *PyNumber_Add(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Subtract(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Multiply(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_FloorDivide(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_TrueDivide(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Remainder(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Divmod(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Power(PyObject *o1 , PyObject *o2 , PyObject *o3 ) ;
extern PyObject *PyNumber_Negative(PyObject *o ) ;
extern PyObject *PyNumber_Positive(PyObject *o ) ;
extern PyObject *PyNumber_Absolute(PyObject *o ) ;
extern PyObject *PyNumber_Invert(PyObject *o ) ;
extern PyObject *PyNumber_Lshift(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Rshift(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_And(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Xor(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Or(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_Index(PyObject *o ) ;
extern Py_ssize_t PyNumber_AsSsize_t(PyObject *o , PyObject *exc ) ;
extern PyObject *_PyNumber_ConvertIntegralToInt(PyObject *integral ,
                                                char const   *error_format ) ;
extern PyObject *PyNumber_Long(PyObject *o ) ;
extern PyObject *PyNumber_Float(PyObject *o ) ;
extern PyObject *PyNumber_InPlaceAdd(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceSubtract(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceMultiply(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceFloorDivide(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceTrueDivide(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceRemainder(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlacePower(PyObject *o1 , PyObject *o2 ,
                                       PyObject *o3 ) ;
extern PyObject *PyNumber_InPlaceLshift(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceRshift(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceAnd(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceXor(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_InPlaceOr(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PyNumber_ToBase(PyObject *n , int base ) ;
extern int PySequence_Check(PyObject *o ) ;
extern Py_ssize_t PySequence_Size(PyObject *o ) ;
extern Py_ssize_t PySequence_Length(PyObject *o ) ;
extern PyObject *PySequence_Concat(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PySequence_Repeat(PyObject *o , Py_ssize_t count ) ;
extern PyObject *PySequence_GetItem(PyObject *o , Py_ssize_t i ) ;
extern PyObject *PySequence_GetSlice(PyObject *o , Py_ssize_t i1 ,
                                     Py_ssize_t i2 ) ;
extern int PySequence_SetItem(PyObject *o , Py_ssize_t i , PyObject *v ) ;
extern int PySequence_DelItem(PyObject *o , Py_ssize_t i ) ;
extern int PySequence_SetSlice(PyObject *o , Py_ssize_t i1 , Py_ssize_t i2 ,
                               PyObject *v ) ;
extern int PySequence_DelSlice(PyObject *o , Py_ssize_t i1 , Py_ssize_t i2 ) ;
extern PyObject *PySequence_Tuple(PyObject *o ) ;
extern PyObject *PySequence_List(PyObject *o ) ;
extern PyObject *PySequence_Fast(PyObject *o , char const   *m ) ;
extern Py_ssize_t PySequence_Count(PyObject *o , PyObject *value ) ;
extern int PySequence_Contains(PyObject *seq , PyObject *ob ) ;
extern Py_ssize_t _PySequence_IterSearch(PyObject *seq , PyObject *obj ,
                                         int operation ) ;
extern int PySequence_In(PyObject *o , PyObject *value ) ;
extern Py_ssize_t PySequence_Index(PyObject *o , PyObject *value ) ;
extern PyObject *PySequence_InPlaceConcat(PyObject *o1 , PyObject *o2 ) ;
extern PyObject *PySequence_InPlaceRepeat(PyObject *o , Py_ssize_t count ) ;
extern int PyMapping_Check(PyObject *o ) ;
extern Py_ssize_t PyMapping_Size(PyObject *o ) ;
extern Py_ssize_t PyMapping_Length(PyObject *o ) ;
extern int PyMapping_HasKeyString(PyObject *o , char *key ) ;
extern int PyMapping_HasKey(PyObject *o , PyObject *key ) ;
extern PyObject *PyMapping_Keys(PyObject *o ) ;
extern PyObject *PyMapping_Values(PyObject *o ) ;
extern PyObject *PyMapping_Items(PyObject *o ) ;
extern PyObject *PyMapping_GetItemString(PyObject *o , char *key ) ;
extern int PyMapping_SetItemString(PyObject *o , char *key , PyObject *value ) ;
extern int PyObject_IsInstance(PyObject *object , PyObject *typeorclass ) ;
extern int PyObject_IsSubclass(PyObject *object , PyObject *typeorclass ) ;
extern int _PyObject_RealIsInstance(PyObject *inst , PyObject *cls ) ;
extern int _PyObject_RealIsSubclass(PyObject *derived , PyObject *cls ) ;
extern char * const  *_PySequence_BytesToCharpArray(PyObject *self ) ;
extern void _Py_FreeCharPArray(char * const  *array ) ;
extern void _Py_add_one_to_index_F(int nd , Py_ssize_t *index ,
                                   Py_ssize_t const   *shape ) ;
extern void _Py_add_one_to_index_C(int nd , Py_ssize_t *index ,
                                   Py_ssize_t const   *shape ) ;
extern PyTypeObject PyFilter_Type ;
extern PyTypeObject PyMap_Type ;
extern PyTypeObject PyZip_Type ;
extern PyTypeObject PyCode_Type ;
extern PyCodeObject *PyCode_New(int  , int  , int  , int  , int  , PyObject * ,
                                PyObject * , PyObject * , PyObject * ,
                                PyObject * , PyObject * , PyObject * ,
                                PyObject * , int  , PyObject * ) ;
extern PyCodeObject *PyCode_NewEmpty(char const   *filename ,
                                     char const   *funcname , int firstlineno ) ;
extern int PyCode_Addr2Line(PyCodeObject * , int  ) ;
extern int _PyCode_CheckLineNumber(PyCodeObject *co , int lasti ,
                                   PyAddrPair *bounds ) ;
extern PyObject *PyCode_Optimize(PyObject *code , PyObject *consts ,
                                 PyObject *names , PyObject *lineno_obj ) ;
extern PyCodeObject *PyNode_Compile(struct _node * , char const   * ) ;
extern PyCodeObject *PyAST_CompileEx(struct _mod *mod , char const   *filename ,
                                     PyCompilerFlags *flags , int optimize ,
                                     PyArena *arena ) ;
extern PyFutureFeatures *PyFuture_FromAST(struct _mod * , char const   * ) ;
extern PyObject *PyEval_EvalCode(PyObject * , PyObject * , PyObject * ) ;
extern PyObject *PyEval_EvalCodeEx(PyObject *co , PyObject *globals ,
                                   PyObject *locals , PyObject **args ,
                                   int argc , PyObject **kwds , int kwdc ,
                                   PyObject **defs , int defc ,
                                   PyObject *kwdefs , PyObject *closure ) ;
extern PyObject *_PyEval_CallTracing(PyObject *func , PyObject *args ) ;
extern unsigned int const   _Py_ctype_table[256] ;
extern unsigned char const   _Py_ctype_tolower[256] ;
extern unsigned char const   _Py_ctype_toupper[256] ;
extern double PyOS_string_to_double(char const   *str , char **endptr ,
                                    PyObject *overflow_exception ) ;
extern char *PyOS_double_to_string(double val , char format_code ,
                                   int precision , int flags , int *type ) ;
extern double _Py_parse_inf_or_nan(char const   *p , char **endptr ) ;
extern int PyOS_mystrnicmp(char const   * , char const   * , Py_ssize_t  ) ;
extern int PyOS_mystricmp(char const   * , char const   * ) ;
extern double _Py_dg_strtod(char const   *str , char **ptr ) ;
extern char *_Py_dg_dtoa(double d , int mode , int ndigits , int *decpt ,
                         int *sign , char **rve ) ;
extern void _Py_dg_freedtoa(char *s ) ;
extern wchar_t *_Py_char2wchar(char const   *arg , size_t *size ) ;
extern char *_Py_wchar2char(wchar_t const   *text , size_t *error_pos ) ;
extern int _Py_wstat(wchar_t const   *path , struct stat *buf ) ;
extern int _Py_stat(PyObject *path , struct stat *statbuf ) ;
extern FILE *_Py_wfopen(wchar_t const   *path , wchar_t const   *mode ) ;
extern FILE *_Py_fopen(PyObject *path , char const   *mode ) ;
extern int _Py_wreadlink(wchar_t const   *path , wchar_t *buf , size_t bufsiz ) ;
extern wchar_t *_Py_wrealpath(wchar_t const   *path , wchar_t *resolved_path ,
                              size_t resolved_path_size ) ;
extern wchar_t *_Py_wgetcwd(wchar_t *buf , size_t size ) ;
extern PyObject *_Py_Mangle(PyObject *p , PyObject *name ) ;
extern PyObject *PyMember_GetOne(char const   * , struct PyMemberDef * ) ;
extern int PyMember_SetOne(char * , struct PyMemberDef * , PyObject * ) ;
static PyTypeObject PyScannerType ;
static PyTypeObject PyEncoderType ;
static PyMemberDef scanner_members[7]  = {      {(char *)"strict", 6,
      (Py_ssize_t )((unsigned int )(& ((PyScannerObject *)0)->strict)), 1,
      (char *)"strict"}, 
        {(char *)"object_hook", 6,
      (Py_ssize_t )((unsigned int )(& ((PyScannerObject *)0)->object_hook)), 1,
      (char *)"object_hook"}, 
        {(char *)"object_pairs_hook", 6,
      (Py_ssize_t )((unsigned int )(& ((PyScannerObject *)0)->object_pairs_hook)),
      1, (char *)0}, 
        {(char *)"parse_float", 6,
      (Py_ssize_t )((unsigned int )(& ((PyScannerObject *)0)->parse_float)), 1,
      (char *)"parse_float"}, 
        {(char *)"parse_int", 6,
      (Py_ssize_t )((unsigned int )(& ((PyScannerObject *)0)->parse_int)), 1,
      (char *)"parse_int"}, 
        {(char *)"parse_constant", 6,
      (Py_ssize_t )((unsigned int )(& ((PyScannerObject *)0)->parse_constant)),
      1, (char *)"parse_constant"}, 
        {(char *)((void *)0), 0, 0, 0, (char *)0}};
static PyMemberDef encoder_members[9]  = 
  {      {(char *)"markers", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->markers)), 1,
      (char *)"markers"}, 
        {(char *)"default", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->defaultfn)), 1,
      (char *)"default"}, 
        {(char *)"encoder", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->encoder)), 1,
      (char *)"encoder"}, 
        {(char *)"indent", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->indent)), 1,
      (char *)"indent"}, 
        {(char *)"key_separator", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->key_separator)),
      1, (char *)"key_separator"}, 
        {(char *)"item_separator", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->item_separator)),
      1, (char *)"item_separator"}, 
        {(char *)"sort_keys", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->sort_keys)), 1,
      (char *)"sort_keys"}, 
        {(char *)"skipkeys", 6,
      (Py_ssize_t )((unsigned int )(& ((PyEncoderObject *)0)->skipkeys)), 1,
      (char *)"skipkeys"}, 
        {(char *)((void *)0), 0, 0, 0, (char *)0}};
static PyObject *ascii_escape_unicode(PyObject *pystr ) ;
static PyObject *py_encode_basestring_ascii(PyObject *self  __attribute__((__unused__)) ,
                                            PyObject *pystr ) ;
extern void init_json(void) ;
static PyObject *scan_once_unicode(PyScannerObject *s , PyObject *pystr ,
                                   Py_ssize_t idx , Py_ssize_t *next_idx_ptr ) ;
static PyObject *_build_rval_index_tuple(PyObject *rval , Py_ssize_t idx ) ;
static PyObject *scanner_new(PyTypeObject *type , PyObject *args ,
                             PyObject *kwds ) ;
static int scanner_init(PyObject *self , PyObject *args , PyObject *kwds ) ;
static void scanner_dealloc(PyObject *self ) ;
static int scanner_clear(PyObject *self ) ;
static PyObject *encoder_new(PyTypeObject *type , PyObject *args ,
                             PyObject *kwds ) ;
static int encoder_init(PyObject *self , PyObject *args , PyObject *kwds ) ;
static void encoder_dealloc(PyObject *self ) ;
static int encoder_clear(PyObject *self ) ;
static int encoder_listencode_list(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *seq , Py_ssize_t indent_level ) ;
static int encoder_listencode_obj(PyEncoderObject *s , PyObject *rval ,
                                  PyObject *obj , Py_ssize_t indent_level ) ;
static int encoder_listencode_dict(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *dct , Py_ssize_t indent_level ) ;
static PyObject *_encoded_const(PyObject *obj ) ;
static void raise_errmsg(char *msg , PyObject *s , Py_ssize_t end ) ;
static PyObject *encoder_encode_string(PyEncoderObject *s , PyObject *obj ) ;
static int _convertPyInt_AsSsize_t(PyObject *o , Py_ssize_t *size_ptr ) ;
static PyObject *_convertPyInt_FromSsize_t(Py_ssize_t *size_ptr ) ;
static PyObject *encoder_encode_float(PyEncoderObject *s , PyObject *obj ) ;
static int _convertPyInt_AsSsize_t(PyObject *o , Py_ssize_t *size_ptr ) 
{ 
  PyObject *tmp ;

  {
  *size_ptr = PyLong_AsSsize_t(o);
  if (*size_ptr == -1) {
    tmp = PyErr_Occurred();
    if (tmp) {
      return (0);
    } else {

    }
  } else {

  }
  return (1);
}
}
static PyObject *_convertPyInt_FromSsize_t(Py_ssize_t *size_ptr ) 
{ 
  PyObject *tmp ;

  {
  tmp = PyLong_FromSsize_t(*size_ptr);
  return (tmp);
}
}
static Py_ssize_t ascii_escape_unichar(Py_UNICODE c , Py_UNICODE *output ,
                                       Py_ssize_t chars ) 
{ 
  Py_ssize_t tmp ;
  Py_ssize_t tmp___0 ;
  Py_ssize_t tmp___1 ;
  Py_ssize_t tmp___2 ;
  Py_ssize_t tmp___3 ;
  Py_ssize_t tmp___4 ;
  Py_ssize_t tmp___5 ;
  Py_ssize_t tmp___6 ;
  Py_ssize_t tmp___7 ;
  Py_ssize_t tmp___8 ;
  Py_ssize_t tmp___9 ;
  Py_ssize_t tmp___10 ;
  Py_ssize_t tmp___11 ;

  {
  tmp = chars;
  chars ++;
  *(output + tmp) = (Py_UNICODE )'\\';
  switch ((int )c) {
  case 92: 
  tmp___0 = chars;
  chars ++;
  *(output + tmp___0) = c;
  break;
  case 34: 
  tmp___1 = chars;
  chars ++;
  *(output + tmp___1) = c;
  break;
  case 8: 
  tmp___2 = chars;
  chars ++;
  *(output + tmp___2) = (Py_UNICODE )'b';
  break;
  case 12: 
  tmp___3 = chars;
  chars ++;
  *(output + tmp___3) = (Py_UNICODE )'f';
  break;
  case 10: 
  tmp___4 = chars;
  chars ++;
  *(output + tmp___4) = (Py_UNICODE )'n';
  break;
  case 13: 
  tmp___5 = chars;
  chars ++;
  *(output + tmp___5) = (Py_UNICODE )'r';
  break;
  case 9: 
  tmp___6 = chars;
  chars ++;
  *(output + tmp___6) = (Py_UNICODE )'t';
  break;
  default: 
  tmp___7 = chars;
  chars ++;
  *(output + tmp___7) = (Py_UNICODE )'u';
  tmp___8 = chars;
  chars ++;
  *(output + tmp___8) = (Py_UNICODE )*("0123456789abcdef" + (((int )c >> 12) & 15));
  tmp___9 = chars;
  chars ++;
  *(output + tmp___9) = (Py_UNICODE )*("0123456789abcdef" + (((int )c >> 8) & 15));
  tmp___10 = chars;
  chars ++;
  *(output + tmp___10) = (Py_UNICODE )*("0123456789abcdef" + (((int )c >> 4) & 15));
  tmp___11 = chars;
  chars ++;
  *(output + tmp___11) = (Py_UNICODE )*("0123456789abcdef" + ((int )c & 15));
  }
  return (chars);
}
}
static PyObject *ascii_escape_unicode(PyObject *pystr ) 
{ 
  Py_ssize_t i ;
  Py_ssize_t input_chars ;
  Py_ssize_t output_size ;
  Py_ssize_t max_output_size ;
  Py_ssize_t chars ;
  PyObject *rval ;
  Py_UNICODE *output ;
  Py_UNICODE *input_unicode ;
  Py_ssize_t tmp ;
  Py_UNICODE c ;
  Py_ssize_t tmp___0 ;
  Py_ssize_t new_output_size ;
  int tmp___1 ;
  Py_ssize_t tmp___2 ;
  int tmp___3 ;

  {
  input_chars = ((PyUnicodeObject *)pystr)->length;
  input_unicode = ((PyUnicodeObject *)pystr)->str;
  output_size = 26 + input_chars;
  max_output_size = 2 + input_chars * 6;
  rval = PyUnicodeUCS2_FromStringAndSize((char const   *)((void *)0),
                                         output_size);
  if ((unsigned int )rval == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  output = ((PyUnicodeObject *)rval)->str;
  chars = 0;
  tmp = chars;
  chars ++;
  *(output + tmp) = (Py_UNICODE )'\"';
  i = 0;
  while (i < input_chars) {
    c = *(input_unicode + i);
    if ((int )c >= 32) {
      if ((int )c <= 126) {
        if ((int )c != 92) {
          if ((int )c != 34) {
            tmp___0 = chars;
            chars ++;
            *(output + tmp___0) = c;
          } else {
            chars = ascii_escape_unichar(c, output, chars);
          }
        } else {
          chars = ascii_escape_unichar(c, output, chars);
        }
      } else {
        chars = ascii_escape_unichar(c, output, chars);
      }
    } else {
      chars = ascii_escape_unichar(c, output, chars);
    }
    if (output_size - chars < 7) {
      new_output_size = output_size * 2;
      if (new_output_size > max_output_size) {
        new_output_size = max_output_size;
      } else {

      }
      if (new_output_size != output_size) {
        output_size = new_output_size;
        tmp___1 = PyUnicodeUCS2_Resize(& rval, output_size);
        if (tmp___1 == -1) {
          return ((PyObject *)((void *)0));
        } else {

        }
        output = ((PyUnicodeObject *)rval)->str;
      } else {

      }
    } else {

    }
    i ++;
  }
  tmp___2 = chars;
  chars ++;
  *(output + tmp___2) = (Py_UNICODE )'\"';
  tmp___3 = PyUnicodeUCS2_Resize(& rval, chars);
  if (tmp___3 == -1) {
    return ((PyObject *)((void *)0));
  } else {

  }
  return (rval);
}
}
static void raise_errmsg(char *msg , PyObject *s , Py_ssize_t end ) ;
static PyObject *errmsg_fn  =    (PyObject *)((void *)0);
static void raise_errmsg(char *msg , PyObject *s , Py_ssize_t end ) 
{ 
  PyObject *pymsg ;
  PyObject *decoder ;
  PyObject *tmp ;

  {
  if ((unsigned int )errmsg_fn == (unsigned int )((void *)0)) {
    tmp = PyImport_ImportModule("json.decoder");
    decoder = tmp;
    if ((unsigned int )decoder == (unsigned int )((void *)0)) {
      return;
    } else {

    }
    errmsg_fn = PyObject_GetAttrString(decoder, "errmsg");
    while (1) {
      (decoder->ob_refcnt) --;
      if (decoder->ob_refcnt != 0) {

      } else {
        (*((decoder->ob_type)->tp_dealloc))(decoder);
      }
      break;
    }
    if ((unsigned int )errmsg_fn == (unsigned int )((void *)0)) {
      return;
    } else {

    }
  } else {

  }
  pymsg = PyObject_CallFunction(errmsg_fn, (char *)"(zOO&)", msg, s,
                                & _convertPyInt_FromSsize_t, & end);
  if (pymsg) {
    PyErr_SetObject(PyExc_ValueError, pymsg);
    while (1) {
      (pymsg->ob_refcnt) --;
      if (pymsg->ob_refcnt != 0) {

      } else {
        (*((pymsg->ob_type)->tp_dealloc))(pymsg);
      }
      break;
    }
  } else {

  }
  return;
}
}
static PyObject *join_list_unicode(PyObject *lst ) ;
static PyObject *sep  =    (PyObject *)((void *)0);
static PyObject *join_list_unicode(PyObject *lst ) 
{ 
  PyObject *tmp ;

  {
  if ((unsigned int )sep == (unsigned int )((void *)0)) {
    sep = PyUnicodeUCS2_FromStringAndSize("", 0);
    if ((unsigned int )sep == (unsigned int )((void *)0)) {
      return ((PyObject *)((void *)0));
    } else {

    }
  } else {

  }
  tmp = PyUnicodeUCS2_Join(sep, lst);
  return (tmp);
}
}
static PyObject *_build_rval_index_tuple(PyObject *rval , Py_ssize_t idx ) 
{ 
  PyObject *tpl ;
  PyObject *pyidx ;

  {
  if ((unsigned int )rval == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  pyidx = PyLong_FromSsize_t(idx);
  if ((unsigned int )pyidx == (unsigned int )((void *)0)) {
    while (1) {
      (rval->ob_refcnt) --;
      if (rval->ob_refcnt != 0) {

      } else {
        (*((rval->ob_type)->tp_dealloc))(rval);
      }
      break;
    }
    return ((PyObject *)((void *)0));
  } else {

  }
  tpl = PyTuple_New(2);
  if ((unsigned int )tpl == (unsigned int )((void *)0)) {
    while (1) {
      (pyidx->ob_refcnt) --;
      if (pyidx->ob_refcnt != 0) {

      } else {
        (*((pyidx->ob_type)->tp_dealloc))(pyidx);
      }
      break;
    }
    while (1) {
      (rval->ob_refcnt) --;
      if (rval->ob_refcnt != 0) {

      } else {
        (*((rval->ob_type)->tp_dealloc))(rval);
      }
      break;
    }
    return ((PyObject *)((void *)0));
  } else {

  }
  ((PyTupleObject *)tpl)->ob_item[0] = rval;
  ((PyTupleObject *)tpl)->ob_item[1] = pyidx;
  return (tpl);
}
}
static PyObject *scanstring_unicode(PyObject *pystr , Py_ssize_t end ,
                                    int strict , Py_ssize_t *next_end_ptr ) 
{ 
  PyObject *rval ;
  Py_ssize_t len ;
  Py_ssize_t begin ;
  Py_ssize_t next ;
  Py_UNICODE const   *buf ;
  PyObject *chunks ;
  PyObject *chunk ;
  Py_UNICODE c ;
  int tmp ;
  PyObject *_py_tmp ;
  Py_UNICODE digit___0 ;
  int tmp___0 ;
  PyObject *_py_tmp___0 ;
  int tmp___1 ;
  PyObject *_py_tmp___1 ;
  PyObject *_py_tmp___2 ;

  {
  rval = (PyObject *)((void *)0);
  len = ((PyUnicodeObject *)pystr)->length;
  begin = end - 1;
  buf = (Py_UNICODE const   *)((PyUnicodeObject *)pystr)->str;
  chunks = (PyObject *)((void *)0);
  chunk = (PyObject *)((void *)0);
  if (end < 0) {
    PyErr_SetString(PyExc_ValueError, "end is out of bounds");
    goto bail;
  } else
  if (len <= end) {
    PyErr_SetString(PyExc_ValueError, "end is out of bounds");
    goto bail;
  } else {

  }
  while (1) {
    c = (Py_UNICODE )0;
    next = end;
    while (next < len) {
      c = (Py_UNICODE )*(buf + next);
      if ((int )c == 34) {
        break;
      } else
      if ((int )c == 92) {
        break;
      } else
      if (strict) {
        if ((int )c <= 31) {
          raise_errmsg((char *)"Invalid control character at", pystr, next);
          goto bail;
        } else {

        }
      } else {

      }
      next ++;
    }
    if ((int )c == 34) {

    } else
    if ((int )c == 92) {

    } else {
      raise_errmsg((char *)"Unterminated string starting at", pystr, begin);
      goto bail;
    }
    if (next != end) {
      if ((unsigned int )chunk != (unsigned int )((void *)0)) {
        if ((unsigned int )chunks == (unsigned int )((void *)0)) {
          chunks = PyList_New(0);
          if ((unsigned int )chunks == (unsigned int )((void *)0)) {
            goto bail;
          } else {

          }
        } else {

        }
        tmp = PyList_Append(chunks, chunk);
        if (tmp) {
          while (1) {
            (chunk->ob_refcnt) --;
            if (chunk->ob_refcnt != 0) {

            } else {
              (*((chunk->ob_type)->tp_dealloc))(chunk);
            }
            break;
          }
          goto bail;
        } else {

        }
        while (1) {
          if (chunk) {
            _py_tmp = chunk;
            chunk = (PyObject *)((void *)0);
            while (1) {
              (_py_tmp->ob_refcnt) --;
              if (_py_tmp->ob_refcnt != 0) {

              } else {
                (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
              }
              break;
            }
          } else {

          }
          break;
        }
      } else {

      }
      chunk = PyUnicodeUCS2_FromUnicode(buf + end, next - end);
      if ((unsigned int )chunk == (unsigned int )((void *)0)) {
        goto bail;
      } else {

      }
    } else {

    }
    next ++;
    if ((int )c == 34) {
      end = next;
      break;
    } else {

    }
    if (next == len) {
      raise_errmsg((char *)"Unterminated string starting at", pystr, begin);
      goto bail;
    } else {

    }
    c = (Py_UNICODE )*(buf + next);
    if ((int )c != 117) {
      end = next + 1;
      switch ((int )c) {
      case 34: 
      break;
      case 92: 
      break;
      case 47: 
      break;
      case 98: 
      c = (Py_UNICODE )'\b';
      break;
      case 102: 
      c = (Py_UNICODE )'\f';
      break;
      case 110: 
      c = (Py_UNICODE )'\n';
      break;
      case 114: 
      c = (Py_UNICODE )'\r';
      break;
      case 116: 
      c = (Py_UNICODE )'\t';
      break;
      default: 
      c = (Py_UNICODE )0;
      }
      if ((int )c == 0) {
        raise_errmsg((char *)"Invalid \\escape", pystr, end - 2);
        goto bail;
      } else {

      }
    } else {
      c = (Py_UNICODE )0;
      next ++;
      end = next + 4;
      if (end >= len) {
        raise_errmsg((char *)"Invalid \\uXXXX escape", pystr, next - 1);
        goto bail;
      } else {

      }
      while (next < end) {
        digit___0 = (Py_UNICODE )*(buf + next);
        c = (Py_UNICODE )((int )c << 4);
        switch ((int )digit___0) {
        case 57: 
        case 56: 
        case 55: 
        case 54: 
        case 53: 
        case 52: 
        case 51: 
        case 50: 
        case 49: 
        case 48: 
        c = (Py_UNICODE )((int )c | ((int )digit___0 - 48));
        break;
        case 102: 
        case 101: 
        case 100: 
        case 99: 
        case 98: 
        case 97: 
        c = (Py_UNICODE )((int )c | (((int )digit___0 - 97) + 10));
        break;
        case 70: 
        case 69: 
        case 68: 
        case 67: 
        case 66: 
        case 65: 
        c = (Py_UNICODE )((int )c | (((int )digit___0 - 65) + 10));
        break;
        default: 
        raise_errmsg((char *)"Invalid \\uXXXX escape", pystr, end - 5);
        goto bail;
        }
        next ++;
      }
    }
    if ((unsigned int )chunk != (unsigned int )((void *)0)) {
      if ((unsigned int )chunks == (unsigned int )((void *)0)) {
        chunks = PyList_New(0);
        if ((unsigned int )chunks == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
      } else {

      }
      tmp___0 = PyList_Append(chunks, chunk);
      if (tmp___0) {
        while (1) {
          (chunk->ob_refcnt) --;
          if (chunk->ob_refcnt != 0) {

          } else {
            (*((chunk->ob_type)->tp_dealloc))(chunk);
          }
          break;
        }
        goto bail;
      } else {

      }
      while (1) {
        if (chunk) {
          _py_tmp___0 = chunk;
          chunk = (PyObject *)((void *)0);
          while (1) {
            (_py_tmp___0->ob_refcnt) --;
            if (_py_tmp___0->ob_refcnt != 0) {

            } else {
              (*((_py_tmp___0->ob_type)->tp_dealloc))(_py_tmp___0);
            }
            break;
          }
        } else {

        }
        break;
      }
    } else {

    }
    chunk = PyUnicodeUCS2_FromUnicode((Py_UNICODE const   *)(& c), 1);
    if ((unsigned int )chunk == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
  }
  if ((unsigned int )chunks == (unsigned int )((void *)0)) {
    if ((unsigned int )chunk != (unsigned int )((void *)0)) {
      rval = chunk;
    } else {
      rval = PyUnicodeUCS2_FromStringAndSize("", 0);
    }
  } else {
    if ((unsigned int )chunk != (unsigned int )((void *)0)) {
      if ((unsigned int )chunks == (unsigned int )((void *)0)) {
        chunks = PyList_New(0);
        if ((unsigned int )chunks == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
      } else {

      }
      tmp___1 = PyList_Append(chunks, chunk);
      if (tmp___1) {
        while (1) {
          (chunk->ob_refcnt) --;
          if (chunk->ob_refcnt != 0) {

          } else {
            (*((chunk->ob_type)->tp_dealloc))(chunk);
          }
          break;
        }
        goto bail;
      } else {

      }
      while (1) {
        if (chunk) {
          _py_tmp___1 = chunk;
          chunk = (PyObject *)((void *)0);
          while (1) {
            (_py_tmp___1->ob_refcnt) --;
            if (_py_tmp___1->ob_refcnt != 0) {

            } else {
              (*((_py_tmp___1->ob_type)->tp_dealloc))(_py_tmp___1);
            }
            break;
          }
        } else {

        }
        break;
      }
    } else {

    }
    rval = join_list_unicode(chunks);
    if ((unsigned int )rval == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
    while (1) {
      if (chunks) {
        _py_tmp___2 = chunks;
        chunks = (PyObject *)((void *)0);
        while (1) {
          (_py_tmp___2->ob_refcnt) --;
          if (_py_tmp___2->ob_refcnt != 0) {

          } else {
            (*((_py_tmp___2->ob_type)->tp_dealloc))(_py_tmp___2);
          }
          break;
        }
      } else {

      }
      break;
    }
  }
  *next_end_ptr = end;
  return (rval);
  bail: 
  *next_end_ptr = -1;
  while (1) {
    if ((unsigned int )chunks == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (chunks->ob_refcnt) --;
        if (chunks->ob_refcnt != 0) {

        } else {
          (*((chunks->ob_type)->tp_dealloc))(chunks);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    if ((unsigned int )chunk == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (chunk->ob_refcnt) --;
        if (chunk->ob_refcnt != 0) {

        } else {
          (*((chunk->ob_type)->tp_dealloc))(chunk);
        }
        break;
      }
    }
    break;
  }
  return ((PyObject *)((void *)0));
}
}
static char pydoc_scanstring[462]  = 
  {      (char )'s',      (char )'c',      (char )'a',      (char )'n', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'n',      (char )'g',      (char )'(',      (char )'s', 
        (char )'t',      (char )'r',      (char )'i',      (char )'n', 
        (char )'g',      (char )',',      (char )' ',      (char )'e', 
        (char )'n',      (char )'d',      (char )',',      (char )' ', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'c',      (char )'t',      (char )'=',      (char )'T', 
        (char )'r',      (char )'u',      (char )'e',      (char )')', 
        (char )' ',      (char )'-',      (char )'>',      (char )' ', 
        (char )'(',      (char )'s',      (char )'t',      (char )'r', 
        (char )'i',      (char )'n',      (char )'g',      (char )',', 
        (char )' ',      (char )'e',      (char )'n',      (char )'d', 
        (char )')',      (char )'\n',      (char )'\n',      (char )'S', 
        (char )'c',      (char )'a',      (char )'n',      (char )' ', 
        (char )'t',      (char )'h',      (char )'e',      (char )' ', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'n',      (char )'g',      (char )' ',      (char )'s', 
        (char )' ',      (char )'f',      (char )'o',      (char )'r', 
        (char )' ',      (char )'a',      (char )' ',      (char )'J', 
        (char )'S',      (char )'O',      (char )'N',      (char )' ', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'n',      (char )'g',      (char )'.',      (char )' ', 
        (char )'E',      (char )'n',      (char )'d',      (char )' ', 
        (char )'i',      (char )'s',      (char )' ',      (char )'t', 
        (char )'h',      (char )'e',      (char )' ',      (char )'i', 
        (char )'n',      (char )'d',      (char )'e',      (char )'x', 
        (char )' ',      (char )'o',      (char )'f',      (char )' ', 
        (char )'t',      (char )'h',      (char )'e',      (char )'\n', 
        (char )'c',      (char )'h',      (char )'a',      (char )'r', 
        (char )'a',      (char )'c',      (char )'t',      (char )'e', 
        (char )'r',      (char )' ',      (char )'i',      (char )'n', 
        (char )' ',      (char )'s',      (char )' ',      (char )'a', 
        (char )'f',      (char )'t',      (char )'e',      (char )'r', 
        (char )' ',      (char )'t',      (char )'h',      (char )'e', 
        (char )' ',      (char )'q',      (char )'u',      (char )'o', 
        (char )'t',      (char )'e',      (char )' ',      (char )'t', 
        (char )'h',      (char )'a',      (char )'t',      (char )' ', 
        (char )'s',      (char )'t',      (char )'a',      (char )'r', 
        (char )'t',      (char )'e',      (char )'d',      (char )' ', 
        (char )'t',      (char )'h',      (char )'e',      (char )' ', 
        (char )'J',      (char )'S',      (char )'O',      (char )'N', 
        (char )' ',      (char )'s',      (char )'t',      (char )'r', 
        (char )'i',      (char )'n',      (char )'g',      (char )'.', 
        (char )'\n',      (char )'U',      (char )'n',      (char )'e', 
        (char )'s',      (char )'c',      (char )'a',      (char )'p', 
        (char )'e',      (char )'s',      (char )' ',      (char )'a', 
        (char )'l',      (char )'l',      (char )' ',      (char )'v', 
        (char )'a',      (char )'l',      (char )'i',      (char )'d', 
        (char )' ',      (char )'J',      (char )'S',      (char )'O', 
        (char )'N',      (char )' ',      (char )'s',      (char )'t', 
        (char )'r',      (char )'i',      (char )'n',      (char )'g', 
        (char )' ',      (char )'e',      (char )'s',      (char )'c', 
        (char )'a',      (char )'p',      (char )'e',      (char )' ', 
        (char )'s',      (char )'e',      (char )'q',      (char )'u', 
        (char )'e',      (char )'n',      (char )'c',      (char )'e', 
        (char )'s',      (char )' ',      (char )'a',      (char )'n', 
        (char )'d',      (char )' ',      (char )'r',      (char )'a', 
        (char )'i',      (char )'s',      (char )'e',      (char )'s', 
        (char )' ',      (char )'V',      (char )'a',      (char )'l', 
        (char )'u',      (char )'e',      (char )'E',      (char )'r', 
        (char )'r',      (char )'o',      (char )'r',      (char )'\n', 
        (char )'o',      (char )'n',      (char )' ',      (char )'a', 
        (char )'t',      (char )'t',      (char )'e',      (char )'m', 
        (char )'p',      (char )'t',      (char )' ',      (char )'t', 
        (char )'o',      (char )' ',      (char )'d',      (char )'e', 
        (char )'c',      (char )'o',      (char )'d',      (char )'e', 
        (char )' ',      (char )'a',      (char )'n',      (char )' ', 
        (char )'i',      (char )'n',      (char )'v',      (char )'a', 
        (char )'l',      (char )'i',      (char )'d',      (char )' ', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'n',      (char )'g',      (char )'.',      (char )' ', 
        (char )'I',      (char )'f',      (char )' ',      (char )'s', 
        (char )'t',      (char )'r',      (char )'i',      (char )'c', 
        (char )'t',      (char )' ',      (char )'i',      (char )'s', 
        (char )' ',      (char )'F',      (char )'a',      (char )'l', 
        (char )'s',      (char )'e',      (char )' ',      (char )'t', 
        (char )'h',      (char )'e',      (char )'n',      (char )' ', 
        (char )'l',      (char )'i',      (char )'t',      (char )'e', 
        (char )'r',      (char )'a',      (char )'l',      (char )'\n', 
        (char )'c',      (char )'o',      (char )'n',      (char )'t', 
        (char )'r',      (char )'o',      (char )'l',      (char )' ', 
        (char )'c',      (char )'h',      (char )'a',      (char )'r', 
        (char )'a',      (char )'c',      (char )'t',      (char )'e', 
        (char )'r',      (char )'s',      (char )' ',      (char )'a', 
        (char )'r',      (char )'e',      (char )' ',      (char )'a', 
        (char )'l',      (char )'l',      (char )'o',      (char )'w', 
        (char )'e',      (char )'d',      (char )' ',      (char )'i', 
        (char )'n',      (char )' ',      (char )'t',      (char )'h', 
        (char )'e',      (char )' ',      (char )'s',      (char )'t', 
        (char )'r',      (char )'i',      (char )'n',      (char )'g', 
        (char )'.',      (char )'\n',      (char )'\n',      (char )'R', 
        (char )'e',      (char )'t',      (char )'u',      (char )'r', 
        (char )'n',      (char )'s',      (char )' ',      (char )'a', 
        (char )' ',      (char )'t',      (char )'u',      (char )'p', 
        (char )'l',      (char )'e',      (char )' ',      (char )'o', 
        (char )'f',      (char )' ',      (char )'t',      (char )'h', 
        (char )'e',      (char )' ',      (char )'d',      (char )'e', 
        (char )'c',      (char )'o',      (char )'d',      (char )'e', 
        (char )'d',      (char )' ',      (char )'s',      (char )'t', 
        (char )'r',      (char )'i',      (char )'n',      (char )'g', 
        (char )' ',      (char )'a',      (char )'n',      (char )'d', 
        (char )' ',      (char )'t',      (char )'h',      (char )'e', 
        (char )' ',      (char )'i',      (char )'n',      (char )'d', 
        (char )'e',      (char )'x',      (char )' ',      (char )'o', 
        (char )'f',      (char )' ',      (char )'t',      (char )'h', 
        (char )'e',      (char )' ',      (char )'c',      (char )'h', 
        (char )'a',      (char )'r',      (char )'a',      (char )'c', 
        (char )'t',      (char )'e',      (char )'r',      (char )' ', 
        (char )'i',      (char )'n',      (char )' ',      (char )'s', 
        (char )'\n',      (char )'a',      (char )'f',      (char )'t', 
        (char )'e',      (char )'r',      (char )' ',      (char )'t', 
        (char )'h',      (char )'e',      (char )' ',      (char )'e', 
        (char )'n',      (char )'d',      (char )' ',      (char )'q', 
        (char )'u',      (char )'o',      (char )'t',      (char )'e', 
        (char )'.',      (char )'\000'};
static PyObject *py_scanstring(PyObject *self  __attribute__((__unused__)) ,
                               PyObject *args ) 
{ 
  PyObject *pystr ;
  PyObject *rval ;
  Py_ssize_t end ;
  Py_ssize_t next_end ;
  int strict ;
  int tmp ;
  PyObject *tmp___0 ;

  {
  next_end = -1;
  strict = 1;
  tmp = PyArg_ParseTuple(args, "OO&|i:scanstring", & pystr,
                         & _convertPyInt_AsSsize_t, & end, & strict);
  if (tmp) {

  } else {
    return ((PyObject *)((void *)0));
  }
  if (((pystr->ob_type)->tp_flags & (1L << 28)) != 0L) {
    rval = scanstring_unicode(pystr, end, strict, & next_end);
  } else {
    PyErr_Format(PyExc_TypeError, "first argument must be a string, not %.80s",
                 (pystr->ob_type)->tp_name);
    return ((PyObject *)((void *)0));
  }
  tmp___0 = _build_rval_index_tuple(rval, next_end);
  return (tmp___0);
}
}
static char pydoc_encode_basestring_ascii[103]  = 
  {      (char )'e',      (char )'n',      (char )'c',      (char )'o', 
        (char )'d',      (char )'e',      (char )'_',      (char )'b', 
        (char )'a',      (char )'s',      (char )'e',      (char )'s', 
        (char )'t',      (char )'r',      (char )'i',      (char )'n', 
        (char )'g',      (char )'_',      (char )'a',      (char )'s', 
        (char )'c',      (char )'i',      (char )'i',      (char )'(', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'n',      (char )'g',      (char )')',      (char )' ', 
        (char )'-',      (char )'>',      (char )' ',      (char )'s', 
        (char )'t',      (char )'r',      (char )'i',      (char )'n', 
        (char )'g',      (char )'\n',      (char )'\n',      (char )'R', 
        (char )'e',      (char )'t',      (char )'u',      (char )'r', 
        (char )'n',      (char )' ',      (char )'a',      (char )'n', 
        (char )' ',      (char )'A',      (char )'S',      (char )'C', 
        (char )'I',      (char )'I',      (char )'-',      (char )'o', 
        (char )'n',      (char )'l',      (char )'y',      (char )' ', 
        (char )'J',      (char )'S',      (char )'O',      (char )'N', 
        (char )' ',      (char )'r',      (char )'e',      (char )'p', 
        (char )'r',      (char )'e',      (char )'s',      (char )'e', 
        (char )'n',      (char )'t',      (char )'a',      (char )'t', 
        (char )'i',      (char )'o',      (char )'n',      (char )' ', 
        (char )'o',      (char )'f',      (char )' ',      (char )'a', 
        (char )' ',      (char )'P',      (char )'y',      (char )'t', 
        (char )'h',      (char )'o',      (char )'n',      (char )' ', 
        (char )'s',      (char )'t',      (char )'r',      (char )'i', 
        (char )'n',      (char )'g',      (char )'\000'};
static PyObject *py_encode_basestring_ascii(PyObject *self  __attribute__((__unused__)) ,
                                            PyObject *pystr ) 
{ 
  PyObject *rval ;

  {
  if (((pystr->ob_type)->tp_flags & (1L << 28)) != 0L) {
    rval = ascii_escape_unicode(pystr);
  } else {
    PyErr_Format(PyExc_TypeError, "first argument must be a string, not %.80s",
                 (pystr->ob_type)->tp_name);
    return ((PyObject *)((void *)0));
  }
  return (rval);
}
}
static void scanner_dealloc(PyObject *self ) 
{ 


  {
  scanner_clear(self);
  (*((self->ob_type)->tp_free))((void *)self);
  return;
}
}
static int scanner_traverse(PyObject *self ,
                            int (*visit)(PyObject * , void * ) , void *arg ) 
{ 
  PyScannerObject *s ;
  int vret ;
  int tmp ;
  int vret___0 ;
  int tmp___0 ;
  int vret___1 ;
  int tmp___1 ;
  int vret___2 ;
  int tmp___2 ;
  int vret___3 ;
  int tmp___3 ;
  int vret___4 ;
  int tmp___4 ;

  {
  s = (PyScannerObject *)self;
  while (1) {
    if (s->strict) {
      tmp = (*visit)(s->strict, arg);
      vret = tmp;
      if (vret) {
        return (vret);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->object_hook) {
      tmp___0 = (*visit)(s->object_hook, arg);
      vret___0 = tmp___0;
      if (vret___0) {
        return (vret___0);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->object_pairs_hook) {
      tmp___1 = (*visit)(s->object_pairs_hook, arg);
      vret___1 = tmp___1;
      if (vret___1) {
        return (vret___1);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_float) {
      tmp___2 = (*visit)(s->parse_float, arg);
      vret___2 = tmp___2;
      if (vret___2) {
        return (vret___2);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_int) {
      tmp___3 = (*visit)(s->parse_int, arg);
      vret___3 = tmp___3;
      if (vret___3) {
        return (vret___3);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_constant) {
      tmp___4 = (*visit)(s->parse_constant, arg);
      vret___4 = tmp___4;
      if (vret___4) {
        return (vret___4);
      } else {

      }
    } else {

    }
    break;
  }
  return (0);
}
}
static int scanner_clear(PyObject *self ) 
{ 
  PyScannerObject *s ;
  PyObject *_py_tmp ;
  PyObject *_py_tmp___0 ;
  PyObject *_py_tmp___1 ;
  PyObject *_py_tmp___2 ;
  PyObject *_py_tmp___3 ;
  PyObject *_py_tmp___4 ;
  PyObject *_py_tmp___5 ;

  {
  s = (PyScannerObject *)self;
  while (1) {
    if (s->strict) {
      _py_tmp = s->strict;
      s->strict = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp->ob_refcnt) --;
        if (_py_tmp->ob_refcnt != 0) {

        } else {
          (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->object_hook) {
      _py_tmp___0 = s->object_hook;
      s->object_hook = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___0->ob_refcnt) --;
        if (_py_tmp___0->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___0->ob_type)->tp_dealloc))(_py_tmp___0);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->object_pairs_hook) {
      _py_tmp___1 = s->object_pairs_hook;
      s->object_pairs_hook = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___1->ob_refcnt) --;
        if (_py_tmp___1->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___1->ob_type)->tp_dealloc))(_py_tmp___1);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_float) {
      _py_tmp___2 = s->parse_float;
      s->parse_float = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___2->ob_refcnt) --;
        if (_py_tmp___2->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___2->ob_type)->tp_dealloc))(_py_tmp___2);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_int) {
      _py_tmp___3 = s->parse_int;
      s->parse_int = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___3->ob_refcnt) --;
        if (_py_tmp___3->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___3->ob_type)->tp_dealloc))(_py_tmp___3);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_constant) {
      _py_tmp___4 = s->parse_constant;
      s->parse_constant = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___4->ob_refcnt) --;
        if (_py_tmp___4->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___4->ob_type)->tp_dealloc))(_py_tmp___4);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->memo) {
      _py_tmp___5 = s->memo;
      s->memo = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___5->ob_refcnt) --;
        if (_py_tmp___5->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___5->ob_type)->tp_dealloc))(_py_tmp___5);
        }
        break;
      }
    } else {

    }
    break;
  }
  return (0);
}
}
static PyObject *_parse_object_unicode(PyScannerObject *s , PyObject *pystr ,
                                       Py_ssize_t idx ,
                                       Py_ssize_t *next_idx_ptr ) 
{ 
  Py_UNICODE *str ;
  Py_ssize_t end_idx ;
  PyObject *val ;
  PyObject *rval ;
  PyObject *key ;
  int strict ;
  int tmp ;
  int has_pairs_hook ;
  Py_ssize_t next_idx ;
  PyObject *memokey ;
  int tmp___0 ;
  PyObject *item ;
  PyObject *tmp___1 ;
  PyObject *_py_tmp ;
  PyObject *_py_tmp___0 ;
  int tmp___2 ;
  int tmp___3 ;
  PyObject *_py_tmp___1 ;
  PyObject *_py_tmp___2 ;

  {
  str = ((PyUnicodeObject *)pystr)->str;
  end_idx = ((PyUnicodeObject *)pystr)->length - 1;
  val = (PyObject *)((void *)0);
  rval = (PyObject *)((void *)0);
  key = (PyObject *)((void *)0);
  tmp = PyObject_IsTrue(s->strict);
  strict = tmp;
  has_pairs_hook = (unsigned int )s->object_pairs_hook != (unsigned int )(& _Py_NoneStruct);
  if (has_pairs_hook) {
    rval = PyList_New(0);
  } else {
    rval = PyDict_New();
  }
  if ((unsigned int )rval == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  while (1) {
    if (idx <= end_idx) {
      if ((int )*(str + idx) == 32) {

      } else
      if ((int )*(str + idx) == 9) {

      } else
      if ((int )*(str + idx) == 10) {

      } else
      if ((int )*(str + idx) == 13) {

      } else {
        break;
      }
    } else {
      break;
    }
    idx ++;
  }
  if (idx <= end_idx) {
    if ((int )*(str + idx) != 125) {
      while (idx <= end_idx) {
        if ((int )*(str + idx) != 34) {
          raise_errmsg((char *)"Expecting property name", pystr, idx);
          goto bail;
        } else {

        }
        key = scanstring_unicode(pystr, idx + 1, strict, & next_idx);
        if ((unsigned int )key == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
        memokey = PyDict_GetItem(s->memo, key);
        if ((unsigned int )memokey != (unsigned int )((void *)0)) {
          (memokey->ob_refcnt) ++;
          while (1) {
            (key->ob_refcnt) --;
            if (key->ob_refcnt != 0) {

            } else {
              (*((key->ob_type)->tp_dealloc))(key);
            }
            break;
          }
          key = memokey;
        } else {
          tmp___0 = PyDict_SetItem(s->memo, key, key);
          if (tmp___0 < 0) {
            goto bail;
          } else {

          }
        }
        idx = next_idx;
        while (1) {
          if (idx <= end_idx) {
            if ((int )*(str + idx) == 32) {

            } else
            if ((int )*(str + idx) == 9) {

            } else
            if ((int )*(str + idx) == 10) {

            } else
            if ((int )*(str + idx) == 13) {

            } else {
              break;
            }
          } else {
            break;
          }
          idx ++;
        }
        if (idx > end_idx) {
          raise_errmsg((char *)"Expecting : delimiter", pystr, idx);
          goto bail;
        } else
        if ((int )*(str + idx) != 58) {
          raise_errmsg((char *)"Expecting : delimiter", pystr, idx);
          goto bail;
        } else {

        }
        idx ++;
        while (1) {
          if (idx <= end_idx) {
            if ((int )*(str + idx) == 32) {

            } else
            if ((int )*(str + idx) == 9) {

            } else
            if ((int )*(str + idx) == 10) {

            } else
            if ((int )*(str + idx) == 13) {

            } else {
              break;
            }
          } else {
            break;
          }
          idx ++;
        }
        val = scan_once_unicode(s, pystr, idx, & next_idx);
        if ((unsigned int )val == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
        if (has_pairs_hook) {
          tmp___1 = PyTuple_Pack(2, key, val);
          item = tmp___1;
          if ((unsigned int )item == (unsigned int )((void *)0)) {
            goto bail;
          } else {

          }
          while (1) {
            if (key) {
              _py_tmp = key;
              key = (PyObject *)((void *)0);
              while (1) {
                (_py_tmp->ob_refcnt) --;
                if (_py_tmp->ob_refcnt != 0) {

                } else {
                  (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
                }
                break;
              }
            } else {

            }
            break;
          }
          while (1) {
            if (val) {
              _py_tmp___0 = val;
              val = (PyObject *)((void *)0);
              while (1) {
                (_py_tmp___0->ob_refcnt) --;
                if (_py_tmp___0->ob_refcnt != 0) {

                } else {
                  (*((_py_tmp___0->ob_type)->tp_dealloc))(_py_tmp___0);
                }
                break;
              }
            } else {

            }
            break;
          }
          tmp___2 = PyList_Append(rval, item);
          if (tmp___2 == -1) {
            while (1) {
              (item->ob_refcnt) --;
              if (item->ob_refcnt != 0) {

              } else {
                (*((item->ob_type)->tp_dealloc))(item);
              }
              break;
            }
            goto bail;
          } else {

          }
          while (1) {
            (item->ob_refcnt) --;
            if (item->ob_refcnt != 0) {

            } else {
              (*((item->ob_type)->tp_dealloc))(item);
            }
            break;
          }
        } else {
          tmp___3 = PyDict_SetItem(rval, key, val);
          if (tmp___3 < 0) {
            goto bail;
          } else {

          }
          while (1) {
            if (key) {
              _py_tmp___1 = key;
              key = (PyObject *)((void *)0);
              while (1) {
                (_py_tmp___1->ob_refcnt) --;
                if (_py_tmp___1->ob_refcnt != 0) {

                } else {
                  (*((_py_tmp___1->ob_type)->tp_dealloc))(_py_tmp___1);
                }
                break;
              }
            } else {

            }
            break;
          }
          while (1) {
            if (val) {
              _py_tmp___2 = val;
              val = (PyObject *)((void *)0);
              while (1) {
                (_py_tmp___2->ob_refcnt) --;
                if (_py_tmp___2->ob_refcnt != 0) {

                } else {
                  (*((_py_tmp___2->ob_type)->tp_dealloc))(_py_tmp___2);
                }
                break;
              }
            } else {

            }
            break;
          }
        }
        idx = next_idx;
        while (1) {
          if (idx <= end_idx) {
            if ((int )*(str + idx) == 32) {

            } else
            if ((int )*(str + idx) == 9) {

            } else
            if ((int )*(str + idx) == 10) {

            } else
            if ((int )*(str + idx) == 13) {

            } else {
              break;
            }
          } else {
            break;
          }
          idx ++;
        }
        if (idx > end_idx) {
          break;
        } else {

        }
        if ((int )*(str + idx) == 125) {
          break;
        } else
        if ((int )*(str + idx) != 44) {
          raise_errmsg((char *)"Expecting , delimiter", pystr, idx);
          goto bail;
        } else {

        }
        idx ++;
        while (1) {
          if (idx <= end_idx) {
            if ((int )*(str + idx) == 32) {

            } else
            if ((int )*(str + idx) == 9) {

            } else
            if ((int )*(str + idx) == 10) {

            } else
            if ((int )*(str + idx) == 13) {

            } else {
              break;
            }
          } else {
            break;
          }
          idx ++;
        }
      }
    } else {

    }
  } else {

  }
  if (idx > end_idx) {
    raise_errmsg((char *)"Expecting object", pystr, end_idx);
    goto bail;
  } else
  if ((int )*(str + idx) != 125) {
    raise_errmsg((char *)"Expecting object", pystr, end_idx);
    goto bail;
  } else {

  }
  *next_idx_ptr = idx + 1;
  if (has_pairs_hook) {
    val = PyObject_CallFunctionObjArgs(s->object_pairs_hook, rval, (void *)0);
    while (1) {
      (rval->ob_refcnt) --;
      if (rval->ob_refcnt != 0) {

      } else {
        (*((rval->ob_type)->tp_dealloc))(rval);
      }
      break;
    }
    return (val);
  } else {

  }
  if ((unsigned int )s->object_hook != (unsigned int )(& _Py_NoneStruct)) {
    val = PyObject_CallFunctionObjArgs(s->object_hook, rval, (void *)0);
    while (1) {
      (rval->ob_refcnt) --;
      if (rval->ob_refcnt != 0) {

      } else {
        (*((rval->ob_type)->tp_dealloc))(rval);
      }
      break;
    }
    return (val);
  } else {

  }
  return (rval);
  bail: 
  while (1) {
    if ((unsigned int )key == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (key->ob_refcnt) --;
        if (key->ob_refcnt != 0) {

        } else {
          (*((key->ob_type)->tp_dealloc))(key);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    if ((unsigned int )val == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (val->ob_refcnt) --;
        if (val->ob_refcnt != 0) {

        } else {
          (*((val->ob_type)->tp_dealloc))(val);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    if ((unsigned int )rval == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (rval->ob_refcnt) --;
        if (rval->ob_refcnt != 0) {

        } else {
          (*((rval->ob_type)->tp_dealloc))(rval);
        }
        break;
      }
    }
    break;
  }
  return ((PyObject *)((void *)0));
}
}
static PyObject *_parse_array_unicode(PyScannerObject *s , PyObject *pystr ,
                                      Py_ssize_t idx , Py_ssize_t *next_idx_ptr ) 
{ 
  Py_UNICODE *str ;
  Py_ssize_t end_idx ;
  PyObject *val ;
  PyObject *rval ;
  PyObject *tmp ;
  Py_ssize_t next_idx ;
  int tmp___0 ;
  PyObject *_py_tmp ;

  {
  str = ((PyUnicodeObject *)pystr)->str;
  end_idx = ((PyUnicodeObject *)pystr)->length - 1;
  val = (PyObject *)((void *)0);
  tmp = PyList_New(0);
  rval = tmp;
  if ((unsigned int )rval == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  while (1) {
    if (idx <= end_idx) {
      if ((int )*(str + idx) == 32) {

      } else
      if ((int )*(str + idx) == 9) {

      } else
      if ((int )*(str + idx) == 10) {

      } else
      if ((int )*(str + idx) == 13) {

      } else {
        break;
      }
    } else {
      break;
    }
    idx ++;
  }
  if (idx <= end_idx) {
    if ((int )*(str + idx) != 93) {
      while (idx <= end_idx) {
        val = scan_once_unicode(s, pystr, idx, & next_idx);
        if ((unsigned int )val == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
        tmp___0 = PyList_Append(rval, val);
        if (tmp___0 == -1) {
          goto bail;
        } else {

        }
        while (1) {
          if (val) {
            _py_tmp = val;
            val = (PyObject *)((void *)0);
            while (1) {
              (_py_tmp->ob_refcnt) --;
              if (_py_tmp->ob_refcnt != 0) {

              } else {
                (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
              }
              break;
            }
          } else {

          }
          break;
        }
        idx = next_idx;
        while (1) {
          if (idx <= end_idx) {
            if ((int )*(str + idx) == 32) {

            } else
            if ((int )*(str + idx) == 9) {

            } else
            if ((int )*(str + idx) == 10) {

            } else
            if ((int )*(str + idx) == 13) {

            } else {
              break;
            }
          } else {
            break;
          }
          idx ++;
        }
        if (idx > end_idx) {
          break;
        } else {

        }
        if ((int )*(str + idx) == 93) {
          break;
        } else
        if ((int )*(str + idx) != 44) {
          raise_errmsg((char *)"Expecting , delimiter", pystr, idx);
          goto bail;
        } else {

        }
        idx ++;
        while (1) {
          if (idx <= end_idx) {
            if ((int )*(str + idx) == 32) {

            } else
            if ((int )*(str + idx) == 9) {

            } else
            if ((int )*(str + idx) == 10) {

            } else
            if ((int )*(str + idx) == 13) {

            } else {
              break;
            }
          } else {
            break;
          }
          idx ++;
        }
      }
    } else {

    }
  } else {

  }
  if (idx > end_idx) {
    raise_errmsg((char *)"Expecting object", pystr, end_idx);
    goto bail;
  } else
  if ((int )*(str + idx) != 93) {
    raise_errmsg((char *)"Expecting object", pystr, end_idx);
    goto bail;
  } else {

  }
  *next_idx_ptr = idx + 1;
  return (rval);
  bail: 
  while (1) {
    if ((unsigned int )val == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (val->ob_refcnt) --;
        if (val->ob_refcnt != 0) {

        } else {
          (*((val->ob_type)->tp_dealloc))(val);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    (rval->ob_refcnt) --;
    if (rval->ob_refcnt != 0) {

    } else {
      (*((rval->ob_type)->tp_dealloc))(rval);
    }
    break;
  }
  return ((PyObject *)((void *)0));
}
}
static PyObject *_parse_constant(PyScannerObject *s , char *constant ,
                                 Py_ssize_t idx , Py_ssize_t *next_idx_ptr ) 
{ 
  PyObject *cstr ;
  PyObject *rval ;

  {
  cstr = PyUnicode_InternFromString((char const   *)constant);
  if ((unsigned int )cstr == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  rval = PyObject_CallFunctionObjArgs(s->parse_constant, cstr, (void *)0);
  idx += ((PyUnicodeObject *)cstr)->length;
  while (1) {
    (cstr->ob_refcnt) --;
    if (cstr->ob_refcnt != 0) {

    } else {
      (*((cstr->ob_type)->tp_dealloc))(cstr);
    }
    break;
  }
  *next_idx_ptr = idx;
  return (rval);
}
}
static PyObject *_match_number_unicode(PyScannerObject *s , PyObject *pystr ,
                                       Py_ssize_t start ,
                                       Py_ssize_t *next_idx_ptr ) 
{ 
  Py_UNICODE *str ;
  Py_ssize_t end_idx ;
  Py_ssize_t idx ;
  int is_float ;
  PyObject *rval ;
  PyObject *numstr ;
  PyObject *custom_func ;
  Py_ssize_t e_start ;
  Py_ssize_t i ;
  Py_ssize_t n ;
  char *buf ;

  {
  str = ((PyUnicodeObject *)pystr)->str;
  end_idx = ((PyUnicodeObject *)pystr)->length - 1;
  idx = start;
  is_float = 0;
  numstr = (PyObject *)((void *)0);
  if ((int )*(str + idx) == 45) {
    idx ++;
    if (idx > end_idx) {
      PyErr_SetNone(PyExc_StopIteration);
      return ((PyObject *)((void *)0));
    } else {

    }
  } else {

  }
  if ((int )*(str + idx) >= 49) {
    if ((int )*(str + idx) <= 57) {
      idx ++;
      while (1) {
        if (idx <= end_idx) {
          if ((int )*(str + idx) >= 48) {
            if ((int )*(str + idx) <= 57) {

            } else {
              break;
            }
          } else {
            break;
          }
        } else {
          break;
        }
        idx ++;
      }
    } else {
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
  if ((int )*(str + idx) == 48) {
    idx ++;
  } else {
    PyErr_SetNone(PyExc_StopIteration);
    return ((PyObject *)((void *)0));
  }
  if (idx < end_idx) {
    if ((int )*(str + idx) == 46) {
      if ((int )*(str + (idx + 1)) >= 48) {
        if ((int )*(str + (idx + 1)) <= 57) {
          is_float = 1;
          idx += 2;
          while (1) {
            if (idx <= end_idx) {
              if ((int )*(str + idx) >= 48) {
                if ((int )*(str + idx) <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx ++;
          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  if (idx < end_idx) {
    if ((int )*(str + idx) == 101) {
      goto _L___0;
    } else
    if ((int )*(str + idx) == 69) {
      _L___0: /* CIL Label */ 
      e_start = idx;
      idx ++;
      if (idx < end_idx) {
        if ((int )*(str + idx) == 45) {
          idx ++;
        } else
        if ((int )*(str + idx) == 43) {
          idx ++;
        } else {

        }
      } else {

      }
      while (1) {
        if (idx <= end_idx) {
          if ((int )*(str + idx) >= 48) {
            if ((int )*(str + idx) <= 57) {

            } else {
              break;
            }
          } else {
            break;
          }
        } else {
          break;
        }
        idx ++;
      }
      if ((int )*(str + (idx - 1)) >= 48) {
        if ((int )*(str + (idx - 1)) <= 57) {
          is_float = 1;
        } else {
          idx = e_start;
        }
      } else {
        idx = e_start;
      }
    } else {

    }
  } else {

  }
  if (is_float) {
    if ((unsigned int )s->parse_float != (unsigned int )((PyObject *)(& PyFloat_Type))) {
      custom_func = s->parse_float;
    } else {
      goto _L___1;
    }
  } else
  _L___1: /* CIL Label */ 
  if (! is_float) {
    if ((unsigned int )s->parse_int != (unsigned int )((PyObject *)(& PyLong_Type))) {
      custom_func = s->parse_int;
    } else {
      custom_func = (PyObject *)((void *)0);
    }
  } else {
    custom_func = (PyObject *)((void *)0);
  }
  if (custom_func) {
    numstr = PyUnicodeUCS2_FromUnicode((Py_UNICODE const   *)(str + start),
                                       idx - start);
    if ((unsigned int )numstr == (unsigned int )((void *)0)) {
      return ((PyObject *)((void *)0));
    } else {

    }
    rval = PyObject_CallFunctionObjArgs(custom_func, numstr, (void *)0);
  } else {
    n = idx - start;
    numstr = PyBytes_FromStringAndSize((char const   *)((void *)0), n);
    if ((unsigned int )numstr == (unsigned int )((void *)0)) {
      return ((PyObject *)((void *)0));
    } else {

    }
    buf = ((PyBytesObject *)numstr)->ob_sval;
    i = 0;
    while (i < n) {
      *(buf + i) = (char )*(str + (i + start));
      i ++;
    }
    if (is_float) {
      rval = PyFloat_FromString(numstr);
    } else {
      rval = PyLong_FromString(buf, (char **)((void *)0), 10);
    }
  }
  while (1) {
    (numstr->ob_refcnt) --;
    if (numstr->ob_refcnt != 0) {

    } else {
      (*((numstr->ob_type)->tp_dealloc))(numstr);
    }
    break;
  }
  *next_idx_ptr = idx;
  return (rval);
}
}
static PyObject *scan_once_unicode(PyScannerObject *s , PyObject *pystr ,
                                   Py_ssize_t idx , Py_ssize_t *next_idx_ptr ) 
{ 
  PyObject *res ;
  Py_UNICODE *str ;
  Py_ssize_t length ;
  int tmp ;
  PyObject *tmp___0 ;
  _Py_atomic_address *atomic_val ;
  void *result ;
  void * volatile  *volatile_data ;
  _Py_memory_order order ;
  int tmp___1 ;
  _Py_atomic_address *atomic_val___0 ;
  void *result___0 ;
  void * volatile  *volatile_data___0 ;
  _Py_memory_order order___0 ;
  _Py_atomic_address *atomic_val___1 ;
  void *result___1 ;
  void * volatile  *volatile_data___1 ;
  _Py_memory_order order___1 ;
  int tmp___2 ;
  _Py_atomic_address *atomic_val___2 ;
  void *result___2 ;
  void * volatile  *volatile_data___2 ;
  _Py_memory_order order___2 ;
  int tmp___3 ;
  _Py_atomic_address *atomic_val___3 ;
  void *result___3 ;
  void * volatile  *volatile_data___3 ;
  _Py_memory_order order___3 ;
  _Py_atomic_address *atomic_val___4 ;
  void *result___4 ;
  void * volatile  *volatile_data___4 ;
  _Py_memory_order order___4 ;
  int tmp___4 ;
  PyObject *tmp___5 ;
  PyObject *tmp___6 ;
  PyObject *tmp___7 ;
  PyObject *tmp___8 ;
  int __cil_tmp42 ;

  {
  str = ((PyUnicodeObject *)pystr)->str;
  length = ((PyUnicodeObject *)pystr)->length;
  if (idx >= length) {
    PyErr_SetNone(PyExc_StopIteration);
    return ((PyObject *)((void *)0));
  } else {

  }
  switch ((int )*(str + idx)) {
  case 34: 
  tmp = PyObject_IsTrue(s->strict);
  tmp___0 = scanstring_unicode(pystr, idx + 1, tmp, next_idx_ptr);
  return (tmp___0);
  case 123: 
  atomic_val = & _PyThreadState_Current;
  volatile_data = (void * volatile  *)(& atomic_val->_value);
  order = (_Py_memory_order )0;
  _Py_ANNOTATE_MEMORY_ORDER((void const volatile   *)atomic_val, order);
  switch ((unsigned int )order) {
  case 4U: 
  case 3U: 
  case 2U: 
  _Py_atomic_thread_fence((_Py_memory_order )2);
  break;
  default: 
  break;
  }
  result = (void *)*volatile_data;
  switch ((unsigned int )order) {
  case 4U: 
  case 3U: 
  case 1U: 
  _Py_atomic_signal_fence((_Py_memory_order )1);
  break;
  default: 
  break;
  }
  (((PyThreadState *)result)->recursion_depth) ++;
  if (((PyThreadState *)result)->recursion_depth > _Py_CheckRecursionLimit) {
    tmp___1 = _Py_CheckRecursiveCall((char *)" while decoding a JSON object from a unicode string");
    if (tmp___1) {
      return ((PyObject *)((void *)0));
    } else {

    }
  } else {

  }
  res = _parse_object_unicode(s, pystr, idx + 1, next_idx_ptr);
  while (1) {
    atomic_val___1 = & _PyThreadState_Current;
    volatile_data___1 = (void * volatile  *)(& atomic_val___1->_value);
    order___1 = (_Py_memory_order )0;
    _Py_ANNOTATE_MEMORY_ORDER((void const volatile   *)atomic_val___1, order___1);
    switch ((unsigned int )order___1) {
    case 4U: 
    case 3U: 
    case 2U: 
    _Py_atomic_thread_fence((_Py_memory_order )2);
    break;
    default: 
    break;
    }
    result___1 = (void *)*volatile_data___1;
    switch ((unsigned int )order___1) {
    case 4U: 
    case 3U: 
    case 1U: 
    _Py_atomic_signal_fence((_Py_memory_order )1);
    break;
    default: 
    break;
    }
    (((PyThreadState *)result___1)->recursion_depth) --;
    if (_Py_CheckRecursionLimit > 100) {
      tmp___2 = _Py_CheckRecursionLimit - 50;
    } else {
      tmp___2 = 3 * (_Py_CheckRecursionLimit >> 2);
    }
    if (((PyThreadState *)result___1)->recursion_depth < tmp___2) {
      atomic_val___0 = & _PyThreadState_Current;
      volatile_data___0 = (void * volatile  *)(& atomic_val___0->_value);
      order___0 = (_Py_memory_order )0;
      _Py_ANNOTATE_MEMORY_ORDER((void const volatile   *)atomic_val___0,
                                order___0);
      switch ((unsigned int )order___0) {
      case 4U: 
      case 3U: 
      case 2U: 
      _Py_atomic_thread_fence((_Py_memory_order )2);
      break;
      default: 
      break;
      }
      result___0 = (void *)*volatile_data___0;
      switch ((unsigned int )order___0) {
      case 4U: 
      case 3U: 
      case 1U: 
      _Py_atomic_signal_fence((_Py_memory_order )1);
      break;
      default: 
      break;
      }
      ((PyThreadState *)result___0)->overflowed = (char)0;
    } else {

    }
    break;
  }
  return (res);
  case 91: 
  atomic_val___2 = & _PyThreadState_Current;
  volatile_data___2 = (void * volatile  *)(& atomic_val___2->_value);
  order___2 = (_Py_memory_order )0;
  _Py_ANNOTATE_MEMORY_ORDER((void const volatile   *)atomic_val___2, order___2);
  switch ((unsigned int )order___2) {
  case 4U: 
  case 3U: 
  case 2U: 
  _Py_atomic_thread_fence((_Py_memory_order )2);
  break;
  default: 
  break;
  }
  result___2 = (void *)*volatile_data___2;
  switch ((unsigned int )order___2) {
  case 4U: 
  case 3U: 
  case 1U: 
  _Py_atomic_signal_fence((_Py_memory_order )1);
  break;
  default: 
  break;
  }
  (((PyThreadState *)result___2)->recursion_depth) ++;
  if (((PyThreadState *)result___2)->recursion_depth > _Py_CheckRecursionLimit) {
    tmp___3 = _Py_CheckRecursiveCall((char *)" while decoding a JSON array from a unicode string");
    if (tmp___3) {
      return ((PyObject *)((void *)0));
    } else {

    }
  } else {

  }
  res = _parse_array_unicode(s, pystr, idx + 1, next_idx_ptr);
  while (1) {
    atomic_val___4 = & _PyThreadState_Current;
    volatile_data___4 = (void * volatile  *)(& atomic_val___4->_value);
    order___4 = (_Py_memory_order )0;
    _Py_ANNOTATE_MEMORY_ORDER((void const volatile   *)atomic_val___4, order___4);
    switch ((unsigned int )order___4) {
    case 4U: 
    case 3U: 
    case 2U: 
    _Py_atomic_thread_fence((_Py_memory_order )2);
    break;
    default: 
    break;
    }
    result___4 = (void *)*volatile_data___4;
    switch ((unsigned int )order___4) {
    case 4U: 
    case 3U: 
    case 1U: 
    _Py_atomic_signal_fence((_Py_memory_order )1);
    break;
    default: 
    break;
    }
    (((PyThreadState *)result___4)->recursion_depth) --;
    if (_Py_CheckRecursionLimit > 100) {
      tmp___4 = _Py_CheckRecursionLimit - 50;
    } else {
      tmp___4 = 3 * (_Py_CheckRecursionLimit >> 2);
    }
    if (((PyThreadState *)result___4)->recursion_depth < tmp___4) {
      atomic_val___3 = & _PyThreadState_Current;
      volatile_data___3 = (void * volatile  *)(& atomic_val___3->_value);
      order___3 = (_Py_memory_order )0;
      _Py_ANNOTATE_MEMORY_ORDER((void const volatile   *)atomic_val___3,
                                order___3);
      switch ((unsigned int )order___3) {
      case 4U: 
      case 3U: 
      case 2U: 
      _Py_atomic_thread_fence((_Py_memory_order )2);
      break;
      default: 
      break;
      }
      result___3 = (void *)*volatile_data___3;
      switch ((unsigned int )order___3) {
      case 4U: 
      case 3U: 
      case 1U: 
      _Py_atomic_signal_fence((_Py_memory_order )1);
      break;
      default: 
      break;
      }
      ((PyThreadState *)result___3)->overflowed = (char)0;
    } else {

    }
    break;
  }
  return (res);
  case 110: 
  if (idx + 3 < length) {
    if ((int )*(str + (idx + 1)) == 117) {
      if ((int )*(str + (idx + 2)) == 108) {
        if ((int )*(str + (idx + 3)) == 108) {
          (_Py_NoneStruct.ob_refcnt) ++;
          *next_idx_ptr = idx + 4;
          return (& _Py_NoneStruct);
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  break;
  case 116: 
  if (idx + 3 < length) {
    if ((int )*(str + (idx + 1)) == 114) {
      if ((int )*(str + (idx + 2)) == 117) {
        if ((int )*(str + (idx + 3)) == 101) {
          (((PyObject *)(& _Py_TrueStruct))->ob_refcnt) ++;
          *next_idx_ptr = idx + 4;
          return ((PyObject *)(& _Py_TrueStruct));
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  break;
  case 102: 
  if (idx + 4 < length) {
    if ((int )*(str + (idx + 1)) == 97) {
      if ((int )*(str + (idx + 2)) == 108) {
        if ((int )*(str + (idx + 3)) == 115) {
          if ((int )*(str + (idx + 4)) == 101) {
            (((PyObject *)(& _Py_FalseStruct))->ob_refcnt) ++;
            *next_idx_ptr = idx + 5;
            return ((PyObject *)(& _Py_FalseStruct));
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
  case 78: 
  if (idx + 2 < length) {
    if ((int )*(str + (idx + 1)) == 97) {
      if ((int )*(str + (idx + 2)) == 78) {
        tmp___5 = _parse_constant(s, (char *)"NaN", idx, next_idx_ptr);
        return (tmp___5);
      } else {

      }
    } else {

    }
  } else {

  }
  break;
  case 73: 
  if (idx + 7 < length) {
    if ((int )*(str + (idx + 1)) == 110) {
      if ((int )*(str + (idx + 2)) == 102) {
        if ((int )*(str + (idx + 3)) == 105) {
          if ((int )*(str + (idx + 4)) == 110) {
            if ((int )*(str + (idx + 5)) == 105) {
              if ((int )*(str + (idx + 6)) == 116) {
                if ((int )*(str + (idx + 7)) == 121) {
                  tmp___6 = _parse_constant(s, (char *)"Infinity", idx,
                                            next_idx_ptr);
                  return (tmp___6);
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
    } else {

    }
  } else {

  }
  break;
  case 45: 
  if (idx + 8 < length) {
    if ((int )*(str + (idx + 1)) == 73) {
      if ((int )*(str + (idx + 2)) == 110) {
        if ((int )*(str + (idx + 3)) == 102) {
          if ((int )*(str + (idx + 4)) == 105) {
            if ((int )*(str + (idx + 5)) == 110) {
              if ((int )*(str + (idx + 6)) == 105) {
                if ((int )*(str + (idx + 7)) == 116) {
                  if ((int )*(str + (idx + 8)) == 121) {
                    tmp___7 = _parse_constant(s, (char *)"-Infinity", idx,
                                              next_idx_ptr);
                    return (tmp___7);
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
      } else {

      }
    } else {

    }
  } else {

  }
  break;
  default: 
  {
  tmp = 8;
  __cil_tmp42 = 1;
  break;
  }
  }
  tmp___8 = _match_number_unicode(s, pystr, idx, next_idx_ptr);
  return (tmp___8);
}
}
static PyObject *scanner_call(PyObject *self , PyObject *args , PyObject *kwds ) ;
static char *kwlist[3]  = {      (char *)"string",      (char *)"idx",      (char *)((void *)0)};
static PyObject *scanner_call(PyObject *self , PyObject *args , PyObject *kwds ) 
{ 
  PyObject *pystr ;
  PyObject *rval ;
  Py_ssize_t idx ;
  Py_ssize_t next_idx ;
  PyScannerObject *s ;
  int tmp ;
  PyObject *tmp___0 ;

  {
  next_idx = -1;
  s = (PyScannerObject *)self;
  tmp = PyArg_ParseTupleAndKeywords(args, kwds, "OO&:scan_once", kwlist,
                                    & pystr, & _convertPyInt_AsSsize_t, & idx);
  if (tmp) {

  } else {
    return ((PyObject *)((void *)0));
  }
  if (((pystr->ob_type)->tp_flags & (1L << 28)) != 0L) {
    rval = scan_once_unicode(s, pystr, idx, & next_idx);
  } else {
    PyErr_Format(PyExc_TypeError, "first argument must be a string, not %.80s",
                 (pystr->ob_type)->tp_name);
    return ((PyObject *)((void *)0));
  }
  PyDict_Clear(s->memo);
  if ((unsigned int )rval == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  tmp___0 = _build_rval_index_tuple(rval, next_idx);
  return (tmp___0);
}
}
static PyObject *scanner_new(PyTypeObject *type , PyObject *args ,
                             PyObject *kwds ) 
{ 
  PyScannerObject *s ;
  PyObject *tmp ;

  {
  tmp = (*(type->tp_alloc))(type, 0);
  s = (PyScannerObject *)tmp;
  if ((unsigned int )s != (unsigned int )((void *)0)) {
    s->strict = (PyObject *)((void *)0);
    s->object_hook = (PyObject *)((void *)0);
    s->object_pairs_hook = (PyObject *)((void *)0);
    s->parse_float = (PyObject *)((void *)0);
    s->parse_int = (PyObject *)((void *)0);
    s->parse_constant = (PyObject *)((void *)0);
  } else {

  }
  return ((PyObject *)s);
}
}
static int scanner_init(PyObject *self , PyObject *args , PyObject *kwds ) ;
static char *kwlist___0[2]  = {      (char *)"context",      (char *)((void *)0)};
static int scanner_init(PyObject *self , PyObject *args , PyObject *kwds ) 
{ 
  PyObject *ctx ;
  PyScannerObject *s ;
  int tmp ;
  PyObject *_py_tmp ;
  PyObject *_py_tmp___0 ;
  PyObject *_py_tmp___1 ;
  PyObject *_py_tmp___2 ;
  PyObject *_py_tmp___3 ;
  PyObject *_py_tmp___4 ;

  {
  s = (PyScannerObject *)self;
  tmp = PyArg_ParseTupleAndKeywords(args, kwds, "O:make_scanner", kwlist___0,
                                    & ctx);
  if (tmp) {

  } else {
    return (-1);
  }
  if ((unsigned int )s->memo == (unsigned int )((void *)0)) {
    s->memo = PyDict_New();
    if ((unsigned int )s->memo == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
  } else {

  }
  s->strict = PyObject_GetAttrString(ctx, "strict");
  if ((unsigned int )s->strict == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  s->object_hook = PyObject_GetAttrString(ctx, "object_hook");
  if ((unsigned int )s->object_hook == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  s->object_pairs_hook = PyObject_GetAttrString(ctx, "object_pairs_hook");
  if ((unsigned int )s->object_pairs_hook == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  s->parse_float = PyObject_GetAttrString(ctx, "parse_float");
  if ((unsigned int )s->parse_float == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  s->parse_int = PyObject_GetAttrString(ctx, "parse_int");
  if ((unsigned int )s->parse_int == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  s->parse_constant = PyObject_GetAttrString(ctx, "parse_constant");
  if ((unsigned int )s->parse_constant == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  return (0);
  bail: 
  while (1) {
    if (s->strict) {
      _py_tmp = s->strict;
      s->strict = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp->ob_refcnt) --;
        if (_py_tmp->ob_refcnt != 0) {

        } else {
          (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->object_hook) {
      _py_tmp___0 = s->object_hook;
      s->object_hook = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___0->ob_refcnt) --;
        if (_py_tmp___0->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___0->ob_type)->tp_dealloc))(_py_tmp___0);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->object_pairs_hook) {
      _py_tmp___1 = s->object_pairs_hook;
      s->object_pairs_hook = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___1->ob_refcnt) --;
        if (_py_tmp___1->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___1->ob_type)->tp_dealloc))(_py_tmp___1);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_float) {
      _py_tmp___2 = s->parse_float;
      s->parse_float = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___2->ob_refcnt) --;
        if (_py_tmp___2->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___2->ob_type)->tp_dealloc))(_py_tmp___2);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_int) {
      _py_tmp___3 = s->parse_int;
      s->parse_int = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___3->ob_refcnt) --;
        if (_py_tmp___3->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___3->ob_type)->tp_dealloc))(_py_tmp___3);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->parse_constant) {
      _py_tmp___4 = s->parse_constant;
      s->parse_constant = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___4->ob_refcnt) --;
        if (_py_tmp___4->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___4->ob_type)->tp_dealloc))(_py_tmp___4);
        }
        break;
      }
    } else {

    }
    break;
  }
  return (-1);
}
}
static char scanner_doc[20]  = 
  {      (char )'J',      (char )'S',      (char )'O',      (char )'N', 
        (char )' ',      (char )'s',      (char )'c',      (char )'a', 
        (char )'n',      (char )'n',      (char )'e',      (char )'r', 
        (char )' ',      (char )'o',      (char )'b',      (char )'j', 
        (char )'e',      (char )'c',      (char )'t',      (char )'\000'};
static PyTypeObject PyScannerType  = 
     {{{1, (struct _typeobject *)((void *)0)}, 0}, "_json.Scanner",
    (Py_ssize_t )sizeof(PyScannerObject ), 0, & scanner_dealloc,
    (int (*)(PyObject * , FILE * , int  ))0,
    (PyObject *(*)(PyObject * , char * ))0,
    (int (*)(PyObject * , char * , PyObject * ))0, (void *)0,
    (PyObject *(*)(PyObject * ))0, (PyNumberMethods *)0, (PySequenceMethods *)0,
    (PyMappingMethods *)0, (Py_hash_t (*)(PyObject * ))0, & scanner_call,
    (PyObject *(*)(PyObject * ))0, (PyObject *(*)(PyObject * , PyObject * ))0,
    (int (*)(PyObject * , PyObject * , PyObject * ))0, (PyBufferProcs *)0,
    (1L << 18) | (1L << 14), (char const   *)(scanner_doc), & scanner_traverse,
    & scanner_clear, (PyObject *(*)(PyObject * , PyObject * , int  ))0, 0,
    (PyObject *(*)(PyObject * ))0, (PyObject *(*)(PyObject * ))0,
    (struct PyMethodDef *)0, scanner_members, (struct PyGetSetDef *)0,
    (struct _typeobject *)0, (PyObject *)0,
    (PyObject *(*)(PyObject * , PyObject * , PyObject * ))0,
    (int (*)(PyObject * , PyObject * , PyObject * ))0, 0, & scanner_init,
    (PyObject *(*)(struct _typeobject * , Py_ssize_t  ))0, & scanner_new,
    (void (*)(void * ))0, (int (*)(PyObject * ))0, (PyObject *)0, (PyObject *)0,
    (PyObject *)0, (PyObject *)0, (PyObject *)0, (void (*)(PyObject * ))0, 0U};
static PyObject *encoder_new(PyTypeObject *type , PyObject *args ,
                             PyObject *kwds ) 
{ 
  PyEncoderObject *s ;
  PyObject *tmp ;

  {
  tmp = (*(type->tp_alloc))(type, 0);
  s = (PyEncoderObject *)tmp;
  if ((unsigned int )s != (unsigned int )((void *)0)) {
    s->markers = (PyObject *)((void *)0);
    s->defaultfn = (PyObject *)((void *)0);
    s->encoder = (PyObject *)((void *)0);
    s->indent = (PyObject *)((void *)0);
    s->key_separator = (PyObject *)((void *)0);
    s->item_separator = (PyObject *)((void *)0);
    s->sort_keys = (PyObject *)((void *)0);
    s->skipkeys = (PyObject *)((void *)0);
  } else {

  }
  return ((PyObject *)s);
}
}
static int encoder_init(PyObject *self , PyObject *args , PyObject *kwds ) ;
static char *kwlist___1[10]  = 
  {      (char *)"markers",      (char *)"default",      (char *)"encoder",      (char *)"indent", 
        (char *)"key_separator",      (char *)"item_separator",      (char *)"sort_keys",      (char *)"skipkeys", 
        (char *)"allow_nan",      (char *)((void *)0)};
static int encoder_init(PyObject *self , PyObject *args , PyObject *kwds ) 
{ 
  PyEncoderObject *s ;
  PyObject *markers ;
  PyObject *defaultfn ;
  PyObject *encoder ;
  PyObject *indent ;
  PyObject *key_separator ;
  PyObject *item_separator ;
  PyObject *sort_keys ;
  PyObject *skipkeys ;
  PyObject *allow_nan ;
  int tmp ;
  PyCFunction tmp___0 ;
  int tmp___1 ;

  {
  s = (PyEncoderObject *)self;
  tmp = PyArg_ParseTupleAndKeywords(args, kwds, "OOOOOOOOO:make_encoder",
                                    kwlist___1, & markers, & defaultfn,
                                    & encoder, & indent, & key_separator,
                                    & item_separator, & sort_keys, & skipkeys,
                                    & allow_nan);
  if (tmp) {

  } else {
    return (-1);
  }
  s->markers = markers;
  s->defaultfn = defaultfn;
  s->encoder = encoder;
  s->indent = indent;
  s->key_separator = key_separator;
  s->item_separator = item_separator;
  s->sort_keys = sort_keys;
  s->skipkeys = skipkeys;
  if ((unsigned int )(s->encoder)->ob_type == (unsigned int )(& PyCFunction_Type)) {
    tmp___0 = PyCFunction_GetFunction(s->encoder);
    if ((unsigned int )tmp___0 == (unsigned int )(& py_encode_basestring_ascii)) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  s->fast_encode = tmp___1;
  s->allow_nan = PyObject_IsTrue(allow_nan);
  ((s->markers)->ob_refcnt) ++;
  ((s->defaultfn)->ob_refcnt) ++;
  ((s->encoder)->ob_refcnt) ++;
  ((s->indent)->ob_refcnt) ++;
  ((s->key_separator)->ob_refcnt) ++;
  ((s->item_separator)->ob_refcnt) ++;
  ((s->sort_keys)->ob_refcnt) ++;
  ((s->skipkeys)->ob_refcnt) ++;
  return (0);
}
}
static PyObject *encoder_call(PyObject *self , PyObject *args , PyObject *kwds ) ;
static char *kwlist___2[3]  = {      (char *)"obj",      (char *)"_current_indent_level",      (char *)((void *)0)};
static PyObject *encoder_call(PyObject *self , PyObject *args , PyObject *kwds ) 
{ 
  PyObject *obj ;
  PyObject *rval ;
  Py_ssize_t indent_level ;
  PyEncoderObject *s ;
  int tmp ;
  int tmp___0 ;

  {
  s = (PyEncoderObject *)self;
  tmp = PyArg_ParseTupleAndKeywords(args, kwds, "OO&:_iterencode", kwlist___2,
                                    & obj, & _convertPyInt_AsSsize_t,
                                    & indent_level);
  if (tmp) {

  } else {
    return ((PyObject *)((void *)0));
  }
  rval = PyList_New(0);
  if ((unsigned int )rval == (unsigned int )((void *)0)) {
    return ((PyObject *)((void *)0));
  } else {

  }
  tmp___0 = encoder_listencode_obj(s, rval, obj, indent_level);
  if (tmp___0) {
    while (1) {
      (rval->ob_refcnt) --;
      if (rval->ob_refcnt != 0) {

      } else {
        (*((rval->ob_type)->tp_dealloc))(rval);
      }
      break;
    }
    return ((PyObject *)((void *)0));
  } else {

  }
  return (rval);
}
}
static PyObject *_encoded_const(PyObject *obj ) ;
static PyObject *s_null  =    (PyObject *)((void *)0);
static PyObject *_encoded_const(PyObject *obj ) ;
static PyObject *s_true  =    (PyObject *)((void *)0);
static PyObject *_encoded_const(PyObject *obj ) ;
static PyObject *s_false  =    (PyObject *)((void *)0);
static PyObject *_encoded_const(PyObject *obj ) 
{ 


  {
  if ((unsigned int )obj == (unsigned int )(& _Py_NoneStruct)) {
    if ((unsigned int )s_null == (unsigned int )((void *)0)) {
      s_null = PyUnicode_InternFromString("null");
    } else {

    }
    (s_null->ob_refcnt) ++;
    return (s_null);
  } else
  if ((unsigned int )obj == (unsigned int )((PyObject *)(& _Py_TrueStruct))) {
    if ((unsigned int )s_true == (unsigned int )((void *)0)) {
      s_true = PyUnicode_InternFromString("true");
    } else {

    }
    (s_true->ob_refcnt) ++;
    return (s_true);
  } else
  if ((unsigned int )obj == (unsigned int )((PyObject *)(& _Py_FalseStruct))) {
    if ((unsigned int )s_false == (unsigned int )((void *)0)) {
      s_false = PyUnicode_InternFromString("false");
    } else {

    }
    (s_false->ob_refcnt) ++;
    return (s_false);
  } else {
    PyErr_SetString(PyExc_ValueError, "not a const");
    return ((PyObject *)((void *)0));
  }
}
}
static PyObject *encoder_encode_float(PyEncoderObject *s , PyObject *obj ) 
{ 
  double i ;
  PyObject *tmp ;
  PyObject *tmp___0 ;
  PyObject *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  PyObject *tmp___7 ;

  {
  i = ((PyFloatObject *)obj)->ob_fval;
  if (sizeof(i) == sizeof(float )) {
    tmp___2 = __finitef((float )i);
    tmp___6 = tmp___2;
  } else {
    if (sizeof(i) == sizeof(double )) {
      tmp___3 = __finite(i);
      tmp___5 = tmp___3;
    } else {
      tmp___4 = __finitel((long double )i);
      tmp___5 = tmp___4;
    }
    tmp___6 = tmp___5;
  }
  if (tmp___6) {

  } else {
    if (! s->allow_nan) {
      PyErr_SetString(PyExc_ValueError,
                      "Out of range float values are not JSON compliant");
      return ((PyObject *)((void *)0));
    } else {

    }
    if (i > (double )0) {
      tmp = PyUnicodeUCS2_FromString("Infinity");
      return (tmp);
    } else
    if (i < (double )0) {
      tmp___0 = PyUnicodeUCS2_FromString("-Infinity");
      return (tmp___0);
    } else {
      tmp___1 = PyUnicodeUCS2_FromString("NaN");
      return (tmp___1);
    }
  }
  tmp___7 = PyObject_Repr(obj);
  return (tmp___7);
}
}
static PyObject *encoder_encode_string(PyEncoderObject *s , PyObject *obj ) 
{ 
  PyObject *tmp ;
  PyObject *tmp___0 ;

  {
  if (s->fast_encode) {
    tmp = py_encode_basestring_ascii((PyObject *)((void *)0), obj);
    return (tmp);
  } else {
    tmp___0 = PyObject_CallFunctionObjArgs(s->encoder, obj, (void *)0);
    return (tmp___0);
  }
}
}
static int _steal_list_append(PyObject *lst , PyObject *stolen ) 
{ 
  int rval ;
  int tmp ;

  {
  tmp = PyList_Append(lst, stolen);
  rval = tmp;
  while (1) {
    (stolen->ob_refcnt) --;
    if (stolen->ob_refcnt != 0) {

    } else {
      (*((stolen->ob_type)->tp_dealloc))(stolen);
    }
    break;
  }
  return (rval);
}
}
static int encoder_listencode_obj(PyEncoderObject *s , PyObject *rval ,
                                  PyObject *obj , Py_ssize_t indent_level ) 
{ 
  PyObject *newobj ;
  int rv ;
  PyObject *cstr ;
  PyObject *tmp ;
  int tmp___0 ;
  PyObject *encoded ;
  PyObject *tmp___1 ;
  int tmp___2 ;
  PyObject *encoded___0 ;
  PyObject *tmp___3 ;
  int tmp___4 ;
  PyObject *encoded___1 ;
  PyObject *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  PyObject *ident ;
  int has_key ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  if ((unsigned int )obj == (unsigned int )(& _Py_NoneStruct)) {
    goto _L___0;
  } else
  if ((unsigned int )obj == (unsigned int )((PyObject *)(& _Py_TrueStruct))) {
    goto _L___0;
  } else
  if ((unsigned int )obj == (unsigned int )((PyObject *)(& _Py_FalseStruct))) {
    _L___0: /* CIL Label */ 
    tmp = _encoded_const(obj);
    cstr = tmp;
    if ((unsigned int )cstr == (unsigned int )((void *)0)) {
      return (-1);
    } else {

    }
    tmp___0 = _steal_list_append(rval, cstr);
    return (tmp___0);
  } else
  if (((obj->ob_type)->tp_flags & (1L << 28)) != 0L) {
    tmp___1 = encoder_encode_string(s, obj);
    encoded = tmp___1;
    if ((unsigned int )encoded == (unsigned int )((void *)0)) {
      return (-1);
    } else {

    }
    tmp___2 = _steal_list_append(rval, encoded);
    return (tmp___2);
  } else
  if (((obj->ob_type)->tp_flags & (1L << 24)) != 0L) {
    tmp___3 = PyObject_Str(obj);
    encoded___0 = tmp___3;
    if ((unsigned int )encoded___0 == (unsigned int )((void *)0)) {
      return (-1);
    } else {

    }
    tmp___4 = _steal_list_append(rval, encoded___0);
    return (tmp___4);
  } else
  if ((unsigned int )obj->ob_type == (unsigned int )(& PyFloat_Type)) {
    goto _L;
  } else {
    tmp___11 = PyType_IsSubtype(obj->ob_type, & PyFloat_Type);
    if (tmp___11) {
      _L: /* CIL Label */ 
      tmp___5 = encoder_encode_float(s, obj);
      encoded___1 = tmp___5;
      if ((unsigned int )encoded___1 == (unsigned int )((void *)0)) {
        return (-1);
      } else {

      }
      tmp___6 = _steal_list_append(rval, encoded___1);
      return (tmp___6);
    } else
    if (((obj->ob_type)->tp_flags & (1L << 25)) != 0L) {
      tmp___7 = encoder_listencode_list(s, rval, obj, indent_level);
      return (tmp___7);
    } else
    if (((obj->ob_type)->tp_flags & (1L << 26)) != 0L) {
      tmp___7 = encoder_listencode_list(s, rval, obj, indent_level);
      return (tmp___7);
    } else
    if (((obj->ob_type)->tp_flags & (1L << 29)) != 0L) {
      tmp___8 = encoder_listencode_dict(s, rval, obj, indent_level);
      return (tmp___8);
    } else {
      ident = (PyObject *)((void *)0);
      if ((unsigned int )s->markers != (unsigned int )(& _Py_NoneStruct)) {
        ident = PyLong_FromVoidPtr((void *)obj);
        if ((unsigned int )ident == (unsigned int )((void *)0)) {
          return (-1);
        } else {

        }
        has_key = PyDict_Contains(s->markers, ident);
        if (has_key) {
          if (has_key != -1) {
            PyErr_SetString(PyExc_ValueError, "Circular reference detected");
          } else {

          }
          while (1) {
            (ident->ob_refcnt) --;
            if (ident->ob_refcnt != 0) {

            } else {
              (*((ident->ob_type)->tp_dealloc))(ident);
            }
            break;
          }
          return (-1);
        } else {

        }
        tmp___9 = PyDict_SetItem(s->markers, ident, obj);
        if (tmp___9) {
          while (1) {
            (ident->ob_refcnt) --;
            if (ident->ob_refcnt != 0) {

            } else {
              (*((ident->ob_type)->tp_dealloc))(ident);
            }
            break;
          }
          return (-1);
        } else {

        }
      } else {

      }
      newobj = PyObject_CallFunctionObjArgs(s->defaultfn, obj, (void *)0);
      if ((unsigned int )newobj == (unsigned int )((void *)0)) {
        while (1) {
          if ((unsigned int )ident == (unsigned int )((void *)0)) {

          } else {
            while (1) {
              (ident->ob_refcnt) --;
              if (ident->ob_refcnt != 0) {

              } else {
                (*((ident->ob_type)->tp_dealloc))(ident);
              }
              break;
            }
          }
          break;
        }
        return (-1);
      } else {

      }
      rv = encoder_listencode_obj(s, rval, newobj, indent_level);
      while (1) {
        (newobj->ob_refcnt) --;
        if (newobj->ob_refcnt != 0) {

        } else {
          (*((newobj->ob_type)->tp_dealloc))(newobj);
        }
        break;
      }
      if (rv) {
        while (1) {
          if ((unsigned int )ident == (unsigned int )((void *)0)) {

          } else {
            while (1) {
              (ident->ob_refcnt) --;
              if (ident->ob_refcnt != 0) {

              } else {
                (*((ident->ob_type)->tp_dealloc))(ident);
              }
              break;
            }
          }
          break;
        }
        return (-1);
      } else {

      }
      if ((unsigned int )ident != (unsigned int )((void *)0)) {
        tmp___10 = PyDict_DelItem(s->markers, ident);
        if (tmp___10) {
          while (1) {
            if ((unsigned int )ident == (unsigned int )((void *)0)) {

            } else {
              while (1) {
                (ident->ob_refcnt) --;
                if (ident->ob_refcnt != 0) {

                } else {
                  (*((ident->ob_type)->tp_dealloc))(ident);
                }
                break;
              }
            }
            break;
          }
          return (-1);
        } else {

        }
        while (1) {
          if ((unsigned int )ident == (unsigned int )((void *)0)) {

          } else {
            while (1) {
              (ident->ob_refcnt) --;
              if (ident->ob_refcnt != 0) {

              } else {
                (*((ident->ob_type)->tp_dealloc))(ident);
              }
              break;
            }
          }
          break;
        }
      } else {

      }
      return (rv);
    }
  }
}
}
static int encoder_listencode_dict(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *dct , Py_ssize_t indent_level ) ;
static PyObject *open_dict  =    (PyObject *)((void *)0);
static int encoder_listencode_dict(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *dct , Py_ssize_t indent_level ) ;
static PyObject *close_dict  =    (PyObject *)((void *)0);
static int encoder_listencode_dict(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *dct , Py_ssize_t indent_level ) ;
static PyObject *empty_dict  =    (PyObject *)((void *)0);
static int encoder_listencode_dict(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *dct , Py_ssize_t indent_level ) 
{ 
  PyObject *kstr ;
  PyObject *ident ;
  PyObject *it ;
  PyObject *items ;
  PyObject *item ;
  int skipkeys ;
  Py_ssize_t idx ;
  int tmp ;
  int has_key ;
  int tmp___0 ;
  int tmp___1 ;
  Py_ssize_t i ;
  Py_ssize_t nitems ;
  int tmp___2 ;
  PyObject *key ;
  PyObject *value ;
  int tmp___3 ;
  PyObject *encoded ;
  PyObject *key___0 ;
  PyObject *value___0 ;
  int tmp___4 ;
  int tmp___5 ;
  PyObject *_py_tmp ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  PyObject *tmp___9 ;
  PyObject *_py_tmp___0 ;
  int tmp___10 ;
  PyObject *_py_tmp___1 ;
  int tmp___11 ;

  {
  kstr = (PyObject *)((void *)0);
  ident = (PyObject *)((void *)0);
  it = (PyObject *)((void *)0);
  item = (PyObject *)((void *)0);
  if ((unsigned int )open_dict == (unsigned int )((void *)0)) {
    goto _L;
  } else
  if ((unsigned int )close_dict == (unsigned int )((void *)0)) {
    goto _L;
  } else
  if ((unsigned int )empty_dict == (unsigned int )((void *)0)) {
    _L: /* CIL Label */ 
    open_dict = PyUnicode_InternFromString("{");
    close_dict = PyUnicode_InternFromString("}");
    empty_dict = PyUnicode_InternFromString("{}");
    if ((unsigned int )open_dict == (unsigned int )((void *)0)) {
      return (-1);
    } else
    if ((unsigned int )close_dict == (unsigned int )((void *)0)) {
      return (-1);
    } else
    if ((unsigned int )empty_dict == (unsigned int )((void *)0)) {
      return (-1);
    } else {

    }
  } else {

  }
  if (((PyVarObject *)dct)->ob_size == 0) {
    tmp = PyList_Append(rval, empty_dict);
    return (tmp);
  } else {

  }
  if ((unsigned int )s->markers != (unsigned int )(& _Py_NoneStruct)) {
    ident = PyLong_FromVoidPtr((void *)dct);
    if ((unsigned int )ident == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
    has_key = PyDict_Contains(s->markers, ident);
    if (has_key) {
      if (has_key != -1) {
        PyErr_SetString(PyExc_ValueError, "Circular reference detected");
      } else {

      }
      goto bail;
    } else {

    }
    tmp___0 = PyDict_SetItem(s->markers, ident, dct);
    if (tmp___0) {
      goto bail;
    } else {

    }
  } else {

  }
  tmp___1 = PyList_Append(rval, open_dict);
  if (tmp___1) {
    goto bail;
  } else {

  }
  if ((unsigned int )s->indent != (unsigned int )(& _Py_NoneStruct)) {
    indent_level ++;
  } else {

  }
  tmp___3 = PyObject_IsTrue(s->sort_keys);
  if (tmp___3) {
    items = PyMapping_Keys(dct);
    if ((unsigned int )items == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
    if (! (((items->ob_type)->tp_flags & (1L << 25)) != 0L)) {
      PyErr_SetString(PyExc_ValueError, "keys must return list");
      goto bail;
    } else {

    }
    tmp___2 = PyList_Sort(items);
    if (tmp___2 < 0) {
      goto bail;
    } else {

    }
    nitems = ((PyVarObject *)items)->ob_size;
    i = 0;
    while (i < nitems) {
      key = *(((PyListObject *)items)->ob_item + i);
      value = PyDict_GetItem(dct, key);
      item = PyTuple_Pack(2, key, value);
      if ((unsigned int )item == (unsigned int )((void *)0)) {
        goto bail;
      } else {

      }
      *(((PyListObject *)items)->ob_item + i) = item;
      while (1) {
        (key->ob_refcnt) --;
        if (key->ob_refcnt != 0) {

        } else {
          (*((key->ob_type)->tp_dealloc))(key);
        }
        break;
      }
      i ++;
    }
  } else {
    items = PyMapping_Items(dct);
  }
  if ((unsigned int )items == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  it = PyObject_GetIter(items);
  while (1) {
    (items->ob_refcnt) --;
    if (items->ob_refcnt != 0) {

    } else {
      (*((items->ob_type)->tp_dealloc))(items);
    }
    break;
  }
  if ((unsigned int )it == (unsigned int )((void *)0)) {
    goto bail;
  } else {

  }
  skipkeys = PyObject_IsTrue(s->skipkeys);
  idx = 0;
  while (1) {
    item = PyIter_Next(it);
    if ((unsigned int )item != (unsigned int )((void *)0)) {

    } else {
      break;
    }
    if (! (((item->ob_type)->tp_flags & (1L << 26)) != 0L)) {
      PyErr_SetString(PyExc_ValueError, "items must return 2-tuples");
      goto bail;
    } else
    if (((PyVarObject *)item)->ob_size != 2) {
      PyErr_SetString(PyExc_ValueError, "items must return 2-tuples");
      goto bail;
    } else {

    }
    key___0 = ((PyTupleObject *)item)->ob_item[0];
    if (((key___0->ob_type)->tp_flags & (1L << 28)) != 0L) {
      (key___0->ob_refcnt) ++;
      kstr = key___0;
    } else
    if ((unsigned int )key___0->ob_type == (unsigned int )(& PyFloat_Type)) {
      goto _L___1;
    } else {
      tmp___4 = PyType_IsSubtype(key___0->ob_type, & PyFloat_Type);
      if (tmp___4) {
        _L___1: /* CIL Label */ 
        kstr = encoder_encode_float(s, key___0);
        if ((unsigned int )kstr == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
      } else
      if ((unsigned int )key___0 == (unsigned int )((PyObject *)(& _Py_TrueStruct))) {
        goto _L___0;
      } else
      if ((unsigned int )key___0 == (unsigned int )((PyObject *)(& _Py_FalseStruct))) {
        goto _L___0;
      } else
      if ((unsigned int )key___0 == (unsigned int )(& _Py_NoneStruct)) {
        _L___0: /* CIL Label */ 
        kstr = _encoded_const(key___0);
        if ((unsigned int )kstr == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
      } else
      if (((key___0->ob_type)->tp_flags & (1L << 24)) != 0L) {
        kstr = PyObject_Str(key___0);
        if ((unsigned int )kstr == (unsigned int )((void *)0)) {
          goto bail;
        } else {

        }
      } else
      if (skipkeys) {
        while (1) {
          (item->ob_refcnt) --;
          if (item->ob_refcnt != 0) {

          } else {
            (*((item->ob_type)->tp_dealloc))(item);
          }
          break;
        }
        continue;
      } else {
        PyErr_SetString(PyExc_TypeError, "keys must be a string");
        goto bail;
      }
    }
    if (idx) {
      tmp___5 = PyList_Append(rval, s->item_separator);
      if (tmp___5) {
        goto bail;
      } else {

      }
    } else {

    }
    encoded = encoder_encode_string(s, kstr);
    while (1) {
      if (kstr) {
        _py_tmp = kstr;
        kstr = (PyObject *)((void *)0);
        while (1) {
          (_py_tmp->ob_refcnt) --;
          if (_py_tmp->ob_refcnt != 0) {

          } else {
            (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
          }
          break;
        }
      } else {

      }
      break;
    }
    if ((unsigned int )encoded == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
    tmp___6 = PyList_Append(rval, encoded);
    if (tmp___6) {
      while (1) {
        (encoded->ob_refcnt) --;
        if (encoded->ob_refcnt != 0) {

        } else {
          (*((encoded->ob_type)->tp_dealloc))(encoded);
        }
        break;
      }
      goto bail;
    } else {

    }
    while (1) {
      (encoded->ob_refcnt) --;
      if (encoded->ob_refcnt != 0) {

      } else {
        (*((encoded->ob_type)->tp_dealloc))(encoded);
      }
      break;
    }
    tmp___7 = PyList_Append(rval, s->key_separator);
    if (tmp___7) {
      goto bail;
    } else {

    }
    value___0 = ((PyTupleObject *)item)->ob_item[1];
    tmp___8 = encoder_listencode_obj(s, rval, value___0, indent_level);
    if (tmp___8) {
      goto bail;
    } else {

    }
    idx ++;
    while (1) {
      (item->ob_refcnt) --;
      if (item->ob_refcnt != 0) {

      } else {
        (*((item->ob_type)->tp_dealloc))(item);
      }
      break;
    }
  }
  tmp___9 = PyErr_Occurred();
  if (tmp___9) {
    goto bail;
  } else {

  }
  while (1) {
    if (it) {
      _py_tmp___0 = it;
      it = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___0->ob_refcnt) --;
        if (_py_tmp___0->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___0->ob_type)->tp_dealloc))(_py_tmp___0);
        }
        break;
      }
    } else {

    }
    break;
  }
  if ((unsigned int )ident != (unsigned int )((void *)0)) {
    tmp___10 = PyDict_DelItem(s->markers, ident);
    if (tmp___10) {
      goto bail;
    } else {

    }
    while (1) {
      if (ident) {
        _py_tmp___1 = ident;
        ident = (PyObject *)((void *)0);
        while (1) {
          (_py_tmp___1->ob_refcnt) --;
          if (_py_tmp___1->ob_refcnt != 0) {

          } else {
            (*((_py_tmp___1->ob_type)->tp_dealloc))(_py_tmp___1);
          }
          break;
        }
      } else {

      }
      break;
    }
  } else {

  }
  tmp___11 = PyList_Append(rval, close_dict);
  if (tmp___11) {
    goto bail;
  } else {

  }
  return (0);
  bail: 
  while (1) {
    if ((unsigned int )it == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (it->ob_refcnt) --;
        if (it->ob_refcnt != 0) {

        } else {
          (*((it->ob_type)->tp_dealloc))(it);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    if ((unsigned int )item == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (item->ob_refcnt) --;
        if (item->ob_refcnt != 0) {

        } else {
          (*((item->ob_type)->tp_dealloc))(item);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    if ((unsigned int )kstr == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (kstr->ob_refcnt) --;
        if (kstr->ob_refcnt != 0) {

        } else {
          (*((kstr->ob_type)->tp_dealloc))(kstr);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    if ((unsigned int )ident == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (ident->ob_refcnt) --;
        if (ident->ob_refcnt != 0) {

        } else {
          (*((ident->ob_type)->tp_dealloc))(ident);
        }
        break;
      }
    }
    break;
  }
  return (-1);
}
}
static int encoder_listencode_list(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *seq , Py_ssize_t indent_level ) ;
static PyObject *open_array  =    (PyObject *)((void *)0);
static int encoder_listencode_list(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *seq , Py_ssize_t indent_level ) ;
static PyObject *close_array  =    (PyObject *)((void *)0);
static int encoder_listencode_list(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *seq , Py_ssize_t indent_level ) ;
static PyObject *empty_array  =    (PyObject *)((void *)0);
static int encoder_listencode_list(PyEncoderObject *s , PyObject *rval ,
                                   PyObject *seq , Py_ssize_t indent_level ) 
{ 
  PyObject *ident ;
  PyObject *s_fast ;
  Py_ssize_t num_items ;
  PyObject **seq_items ;
  Py_ssize_t i ;
  int tmp ;
  int has_key ;
  int tmp___0 ;
  int tmp___1 ;
  PyObject *obj ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  PyObject *_py_tmp ;
  int tmp___5 ;

  {
  ident = (PyObject *)((void *)0);
  s_fast = (PyObject *)((void *)0);
  if ((unsigned int )open_array == (unsigned int )((void *)0)) {
    goto _L;
  } else
  if ((unsigned int )close_array == (unsigned int )((void *)0)) {
    goto _L;
  } else
  if ((unsigned int )empty_array == (unsigned int )((void *)0)) {
    _L: /* CIL Label */ 
    open_array = PyUnicode_InternFromString("[");
    close_array = PyUnicode_InternFromString("]");
    empty_array = PyUnicode_InternFromString("[]");
    if ((unsigned int )open_array == (unsigned int )((void *)0)) {
      return (-1);
    } else
    if ((unsigned int )close_array == (unsigned int )((void *)0)) {
      return (-1);
    } else
    if ((unsigned int )empty_array == (unsigned int )((void *)0)) {
      return (-1);
    } else {

    }
  } else {

  }
  ident = (PyObject *)((void *)0);
  s_fast = PySequence_Fast(seq, "_iterencode_list needs a sequence");
  if ((unsigned int )s_fast == (unsigned int )((void *)0)) {
    return (-1);
  } else {

  }
  if (((s_fast->ob_type)->tp_flags & (1L << 25)) != 0L) {
    num_items = ((PyVarObject *)s_fast)->ob_size;
  } else {
    num_items = ((PyVarObject *)s_fast)->ob_size;
  }
  if (num_items == 0) {
    while (1) {
      (s_fast->ob_refcnt) --;
      if (s_fast->ob_refcnt != 0) {

      } else {
        (*((s_fast->ob_type)->tp_dealloc))(s_fast);
      }
      break;
    }
    tmp = PyList_Append(rval, empty_array);
    return (tmp);
  } else {

  }
  if ((unsigned int )s->markers != (unsigned int )(& _Py_NoneStruct)) {
    ident = PyLong_FromVoidPtr((void *)seq);
    if ((unsigned int )ident == (unsigned int )((void *)0)) {
      goto bail;
    } else {

    }
    has_key = PyDict_Contains(s->markers, ident);
    if (has_key) {
      if (has_key != -1) {
        PyErr_SetString(PyExc_ValueError, "Circular reference detected");
      } else {

      }
      goto bail;
    } else {

    }
    tmp___0 = PyDict_SetItem(s->markers, ident, seq);
    if (tmp___0) {
      goto bail;
    } else {

    }
  } else {

  }
  if (((s_fast->ob_type)->tp_flags & (1L << 25)) != 0L) {
    seq_items = ((PyListObject *)s_fast)->ob_item;
  } else {
    seq_items = ((PyTupleObject *)s_fast)->ob_item;
  }
  tmp___1 = PyList_Append(rval, open_array);
  if (tmp___1) {
    goto bail;
  } else {

  }
  if ((unsigned int )s->indent != (unsigned int )(& _Py_NoneStruct)) {
    indent_level ++;
  } else {

  }
  i = 0;
  while (i < num_items) {
    obj = *(seq_items + i);
    if (i) {
      tmp___2 = PyList_Append(rval, s->item_separator);
      if (tmp___2) {
        goto bail;
      } else {

      }
    } else {

    }
    tmp___3 = encoder_listencode_obj(s, rval, obj, indent_level);
    if (tmp___3) {
      goto bail;
    } else {

    }
    i ++;
  }
  if ((unsigned int )ident != (unsigned int )((void *)0)) {
    tmp___4 = PyDict_DelItem(s->markers, ident);
    if (tmp___4) {
      goto bail;
    } else {

    }
    while (1) {
      if (ident) {
        _py_tmp = ident;
        ident = (PyObject *)((void *)0);
        while (1) {
          (_py_tmp->ob_refcnt) --;
          if (_py_tmp->ob_refcnt != 0) {

          } else {
            (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
          }
          break;
        }
      } else {

      }
      break;
    }
  } else {

  }
  tmp___5 = PyList_Append(rval, close_array);
  if (tmp___5) {
    goto bail;
  } else {

  }
  while (1) {
    (s_fast->ob_refcnt) --;
    if (s_fast->ob_refcnt != 0) {

    } else {
      (*((s_fast->ob_type)->tp_dealloc))(s_fast);
    }
    break;
  }
  return (0);
  bail: 
  while (1) {
    if ((unsigned int )ident == (unsigned int )((void *)0)) {

    } else {
      while (1) {
        (ident->ob_refcnt) --;
        if (ident->ob_refcnt != 0) {

        } else {
          (*((ident->ob_type)->tp_dealloc))(ident);
        }
        break;
      }
    }
    break;
  }
  while (1) {
    (s_fast->ob_refcnt) --;
    if (s_fast->ob_refcnt != 0) {

    } else {
      (*((s_fast->ob_type)->tp_dealloc))(s_fast);
    }
    break;
  }
  return (-1);
}
}
static void encoder_dealloc(PyObject *self ) 
{ 


  {
  encoder_clear(self);
  (*((self->ob_type)->tp_free))((void *)self);
  return;
}
}
static int encoder_traverse(PyObject *self ,
                            int (*visit)(PyObject * , void * ) , void *arg ) 
{ 
  PyEncoderObject *s ;
  int vret ;
  int tmp ;
  int vret___0 ;
  int tmp___0 ;
  int vret___1 ;
  int tmp___1 ;
  int vret___2 ;
  int tmp___2 ;
  int vret___3 ;
  int tmp___3 ;
  int vret___4 ;
  int tmp___4 ;
  int vret___5 ;
  int tmp___5 ;
  int vret___6 ;
  int tmp___6 ;

  {
  s = (PyEncoderObject *)self;
  while (1) {
    if (s->markers) {
      tmp = (*visit)(s->markers, arg);
      vret = tmp;
      if (vret) {
        return (vret);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->defaultfn) {
      tmp___0 = (*visit)(s->defaultfn, arg);
      vret___0 = tmp___0;
      if (vret___0) {
        return (vret___0);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->encoder) {
      tmp___1 = (*visit)(s->encoder, arg);
      vret___1 = tmp___1;
      if (vret___1) {
        return (vret___1);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->indent) {
      tmp___2 = (*visit)(s->indent, arg);
      vret___2 = tmp___2;
      if (vret___2) {
        return (vret___2);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->key_separator) {
      tmp___3 = (*visit)(s->key_separator, arg);
      vret___3 = tmp___3;
      if (vret___3) {
        return (vret___3);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->item_separator) {
      tmp___4 = (*visit)(s->item_separator, arg);
      vret___4 = tmp___4;
      if (vret___4) {
        return (vret___4);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->sort_keys) {
      tmp___5 = (*visit)(s->sort_keys, arg);
      vret___5 = tmp___5;
      if (vret___5) {
        return (vret___5);
      } else {

      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->skipkeys) {
      tmp___6 = (*visit)(s->skipkeys, arg);
      vret___6 = tmp___6;
      if (vret___6) {
        return (vret___6);
      } else {

      }
    } else {

    }
    break;
  }
  return (0);
}
}
static int encoder_clear(PyObject *self ) 
{ 
  PyEncoderObject *s ;
  PyObject *_py_tmp ;
  PyObject *_py_tmp___0 ;
  PyObject *_py_tmp___1 ;
  PyObject *_py_tmp___2 ;
  PyObject *_py_tmp___3 ;
  PyObject *_py_tmp___4 ;
  PyObject *_py_tmp___5 ;
  PyObject *_py_tmp___6 ;

  {
  s = (PyEncoderObject *)self;
  while (1) {
    if (s->markers) {
      _py_tmp = s->markers;
      s->markers = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp->ob_refcnt) --;
        if (_py_tmp->ob_refcnt != 0) {

        } else {
          (*((_py_tmp->ob_type)->tp_dealloc))(_py_tmp);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->defaultfn) {
      _py_tmp___0 = s->defaultfn;
      s->defaultfn = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___0->ob_refcnt) --;
        if (_py_tmp___0->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___0->ob_type)->tp_dealloc))(_py_tmp___0);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->encoder) {
      _py_tmp___1 = s->encoder;
      s->encoder = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___1->ob_refcnt) --;
        if (_py_tmp___1->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___1->ob_type)->tp_dealloc))(_py_tmp___1);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->indent) {
      _py_tmp___2 = s->indent;
      s->indent = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___2->ob_refcnt) --;
        if (_py_tmp___2->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___2->ob_type)->tp_dealloc))(_py_tmp___2);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->key_separator) {
      _py_tmp___3 = s->key_separator;
      s->key_separator = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___3->ob_refcnt) --;
        if (_py_tmp___3->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___3->ob_type)->tp_dealloc))(_py_tmp___3);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->item_separator) {
      _py_tmp___4 = s->item_separator;
      s->item_separator = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___4->ob_refcnt) --;
        if (_py_tmp___4->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___4->ob_type)->tp_dealloc))(_py_tmp___4);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->sort_keys) {
      _py_tmp___5 = s->sort_keys;
      s->sort_keys = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___5->ob_refcnt) --;
        if (_py_tmp___5->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___5->ob_type)->tp_dealloc))(_py_tmp___5);
        }
        break;
      }
    } else {

    }
    break;
  }
  while (1) {
    if (s->skipkeys) {
      _py_tmp___6 = s->skipkeys;
      s->skipkeys = (PyObject *)((void *)0);
      while (1) {
        (_py_tmp___6->ob_refcnt) --;
        if (_py_tmp___6->ob_refcnt != 0) {

        } else {
          (*((_py_tmp___6->ob_type)->tp_dealloc))(_py_tmp___6);
        }
        break;
      }
    } else {

    }
    break;
  }
  return (0);
}
}
static char encoder_doc[52]  = 
  {      (char )'_',      (char )'i',      (char )'t',      (char )'e', 
        (char )'r',      (char )'e',      (char )'n',      (char )'c', 
        (char )'o',      (char )'d',      (char )'e',      (char )'(', 
        (char )'o',      (char )'b',      (char )'j',      (char )',', 
        (char )' ',      (char )'_',      (char )'c',      (char )'u', 
        (char )'r',      (char )'r',      (char )'e',      (char )'n', 
        (char )'t',      (char )'_',      (char )'i',      (char )'n', 
        (char )'d',      (char )'e',      (char )'n',      (char )'t', 
        (char )'_',      (char )'l',      (char )'e',      (char )'v', 
        (char )'e',      (char )'l',      (char )')',      (char )' ', 
        (char )'-',      (char )'>',      (char )' ',      (char )'i', 
        (char )'t',      (char )'e',      (char )'r',      (char )'a', 
        (char )'b',      (char )'l',      (char )'e',      (char )'\000'};
static PyTypeObject PyEncoderType  = 
     {{{1, (struct _typeobject *)((void *)0)}, 0}, "_json.Encoder",
    (Py_ssize_t )sizeof(PyEncoderObject ), 0, & encoder_dealloc,
    (int (*)(PyObject * , FILE * , int  ))0,
    (PyObject *(*)(PyObject * , char * ))0,
    (int (*)(PyObject * , char * , PyObject * ))0, (void *)0,
    (PyObject *(*)(PyObject * ))0, (PyNumberMethods *)0, (PySequenceMethods *)0,
    (PyMappingMethods *)0, (Py_hash_t (*)(PyObject * ))0, & encoder_call,
    (PyObject *(*)(PyObject * ))0, (PyObject *(*)(PyObject * , PyObject * ))0,
    (int (*)(PyObject * , PyObject * , PyObject * ))0, (PyBufferProcs *)0,
    (1L << 18) | (1L << 14), (char const   *)(encoder_doc), & encoder_traverse,
    & encoder_clear, (PyObject *(*)(PyObject * , PyObject * , int  ))0, 0,
    (PyObject *(*)(PyObject * ))0, (PyObject *(*)(PyObject * ))0,
    (struct PyMethodDef *)0, encoder_members, (struct PyGetSetDef *)0,
    (struct _typeobject *)0, (PyObject *)0,
    (PyObject *(*)(PyObject * , PyObject * , PyObject * ))0,
    (int (*)(PyObject * , PyObject * , PyObject * ))0, 0, & encoder_init,
    (PyObject *(*)(struct _typeobject * , Py_ssize_t  ))0, & encoder_new,
    (void (*)(void * ))0, (int (*)(PyObject * ))0, (PyObject *)0, (PyObject *)0,
    (PyObject *)0, (PyObject *)0, (PyObject *)0, (void (*)(PyObject * ))0, 0U};
static PyMethodDef speedups_methods[3]  = {      {"encode_basestring_ascii", & py_encode_basestring_ascii, 8,
      (char const   *)(pydoc_encode_basestring_ascii)}, 
        {"scanstring", & py_scanstring, 1, (char const   *)(pydoc_scanstring)}, 
        {(char const   *)((void *)0),
      (PyObject *(*)(PyObject * , PyObject * ))((void *)0), 0,
      (char const   *)((void *)0)}};
static char module_doc[15]  = 
  {      (char )'j',      (char )'s',      (char )'o',      (char )'n', 
        (char )' ',      (char )'s',      (char )'p',      (char )'e', 
        (char )'e',      (char )'d',      (char )'u',      (char )'p', 
        (char )'s',      (char )'\n',      (char )'\000'};
static struct PyModuleDef jsonmodule  = 
     {{{1, (struct _typeobject *)((void *)0)}, (PyObject *(*)(void))((void *)0),
     0, (PyObject *)((void *)0)}, "_json", (char const   *)(module_doc), -1,
    speedups_methods, (int (*)(PyObject * ))((void *)0),
    (int (*)(PyObject * , int (*)(PyObject * , void * ) , void * ))((void *)0),
    (int (*)(PyObject * ))((void *)0), (void (*)(void * ))((void *)0)};
PyObject *PyInit__json(void) 
{ 
  PyObject *m ;
  PyObject *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = PyModule_Create2(& jsonmodule, 1013);
  m = tmp;
  if (! m) {
    return ((PyObject *)((void *)0));
  } else {

  }
  PyScannerType.tp_new = & PyType_GenericNew;
  tmp___0 = PyType_Ready(& PyScannerType);
  if (tmp___0 < 0) {
    goto fail;
  } else {

  }
  PyEncoderType.tp_new = & PyType_GenericNew;
  tmp___1 = PyType_Ready(& PyEncoderType);
  if (tmp___1 < 0) {
    goto fail;
  } else {

  }
  (((PyObject *)(& PyScannerType))->ob_refcnt) ++;
  tmp___2 = PyModule_AddObject(m, "make_scanner", (PyObject *)(& PyScannerType));
  if (tmp___2 < 0) {
    while (1) {
      (((PyObject *)(& PyScannerType))->ob_refcnt) --;
      if (((PyObject *)(& PyScannerType))->ob_refcnt != 0) {

      } else {
        (*((((PyObject *)(& PyScannerType))->ob_type)->tp_dealloc))((PyObject *)(& PyScannerType));
      }
      break;
    }
    goto fail;
  } else {

  }
  (((PyObject *)(& PyEncoderType))->ob_refcnt) ++;
  tmp___3 = PyModule_AddObject(m, "make_encoder", (PyObject *)(& PyEncoderType));
  if (tmp___3 < 0) {
    while (1) {
      (((PyObject *)(& PyEncoderType))->ob_refcnt) --;
      if (((PyObject *)(& PyEncoderType))->ob_refcnt != 0) {

      } else {
        (*((((PyObject *)(& PyEncoderType))->ob_type)->tp_dealloc))((PyObject *)(& PyEncoderType));
      }
      break;
    }
    goto fail;
  } else {

  }
  return (m);
  fail: 
  while (1) {
    (m->ob_refcnt) --;
    if (m->ob_refcnt != 0) {

    } else {
      (*((m->ob_type)->tp_dealloc))(m);
    }
    break;
  }
  return ((PyObject *)((void *)0));
}
}
