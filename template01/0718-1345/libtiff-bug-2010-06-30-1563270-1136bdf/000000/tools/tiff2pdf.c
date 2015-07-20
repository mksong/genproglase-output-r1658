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
enum __anonenum_26 {
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
typedef __useconds_t useconds_t;
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
enum __anonenum_ACTION_30 {
    FIND = 0,
    ENTER = 1
} ;
typedef enum __anonenum_ACTION_30 ACTION;
struct entry {
   char *key ;
   void *data ;
};
typedef struct entry ENTRY;
struct _ENTRY;
struct _ENTRY;
enum __anonenum_VISIT_31 {
    preorder = 0,
    postorder = 1,
    endorder = 2,
    leaf = 3
} ;
typedef enum __anonenum_VISIT_31 VISIT;
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
struct __anonstruct_TIFFHeaderCommon_32 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
};
typedef struct __anonstruct_TIFFHeaderCommon_32 TIFFHeaderCommon;
struct __anonstruct_TIFFHeaderClassic_33 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint32 tiff_diroff ;
};
typedef struct __anonstruct_TIFFHeaderClassic_33 TIFFHeaderClassic;
struct __anonstruct_TIFFHeaderBig_34 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint16 tiff_offsetsize ;
   uint16 tiff_unused ;
   uint64 tiff_diroff ;
};
typedef struct __anonstruct_TIFFHeaderBig_34 TIFFHeaderBig;
enum __anonenum_TIFFDataType_35 {
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
typedef enum __anonenum_TIFFDataType_35 TIFFDataType;
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
struct __anonstruct_TIFFDisplay_36 {
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
typedef struct __anonstruct_TIFFDisplay_36 TIFFDisplay;
struct __anonstruct_TIFFYCbCrToRGB_37 {
   TIFFRGBValue *clamptab ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   int32 *Cr_g_tab ;
   int32 *Cb_g_tab ;
   int32 *Y_tab ;
};
typedef struct __anonstruct_TIFFYCbCrToRGB_37 TIFFYCbCrToRGB;
struct __anonstruct_TIFFCIELabToRGB_38 {
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
typedef struct __anonstruct_TIFFCIELabToRGB_38 TIFFCIELabToRGB;
struct _TIFFRGBAImage;
typedef struct _TIFFRGBAImage TIFFRGBAImage;
typedef void (*tileContigRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                  uint32  , uint32  , uint32  , int32  ,
                                  int32  , unsigned char * );
typedef void (*tileSeparateRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                    uint32  , uint32  , uint32  , int32  ,
                                    int32  , unsigned char * , unsigned char * ,
                                    unsigned char * , unsigned char * );
union __anonunion_put_39 {
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
   union __anonunion_put_39 put ;
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
struct __anonstruct_TIFFCodec_40 {
   char *name ;
   uint16 scheme ;
   int (*init)(TIFF * , int  ) ;
};
typedef struct __anonstruct_TIFFCodec_40 TIFFCodec;
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
struct __anonstruct_TIFFTagMethods_41 {
   int (*vsetfield)(TIFF * , uint32  , va_list  ) ;
   int (*vgetfield)(TIFF * , uint32  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
};
typedef struct __anonstruct_TIFFTagMethods_41 TIFFTagMethods;
struct __anonstruct_TIFFFieldInfo_42 {
   ttag_t field_tag ;
   short field_readcount ;
   short field_writecount ;
   TIFFDataType field_type ;
   unsigned short field_bit ;
   unsigned char field_oktochange ;
   unsigned char field_passcount ;
   char *field_name ;
};
typedef struct __anonstruct_TIFFFieldInfo_42 TIFFFieldInfo;
struct __anonstruct_TIFFTagValue_43 {
   TIFFField const   *info ;
   int count ;
   void *value ;
};
typedef struct __anonstruct_TIFFTagValue_43 TIFFTagValue;
struct __anonstruct_TIFFDirectory_44 {
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
   float *td_refblackwhite ;
   int td_inknameslen ;
   char *td_inknames ;
   int td_customValueCount ;
   TIFFTagValue *td_customValues ;
};
typedef struct __anonstruct_TIFFDirectory_44 TIFFDirectory;
enum __anonenum_TIFFSetGetFieldType_45 {
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
typedef enum __anonenum_TIFFSetGetFieldType_45 TIFFSetGetFieldType;
enum __anonenum_TIFFFieldArrayType_46 {
    tfiatImage = 0,
    tfiatExif = 1,
    tfiatOther = 2
} ;
typedef enum __anonenum_TIFFFieldArrayType_46 TIFFFieldArrayType;
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
union __anonunion_tdir_offset_48 {
   uint16 toff_short ;
   uint32 toff_long ;
   uint64 toff_long8 ;
};
struct __anonstruct_TIFFDirEntry_47 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint64 tdir_count ;
   union __anonunion_tdir_offset_48 tdir_offset ;
};
typedef struct __anonstruct_TIFFDirEntry_47 TIFFDirEntry;
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
union __anonunion_tif_header_49 {
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
   union __anonunion_tif_header_49 tif_header ;
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
   tmsize_t tif_rawdataoff ;
   tmsize_t tif_rawdataloaded ;
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
enum __anonenum_t2p_cs_t_50 {
    T2P_CS_BILEVEL = 1,
    T2P_CS_GRAY = 2,
    T2P_CS_RGB = 4,
    T2P_CS_CMYK = 8,
    T2P_CS_LAB = 16,
    T2P_CS_PALETTE = 4096,
    T2P_CS_CALGRAY = 32,
    T2P_CS_CALRGB = 64,
    T2P_CS_ICCBASED = 128
} ;
typedef enum __anonenum_t2p_cs_t_50 t2p_cs_t;
enum __anonenum_t2p_compress_t_51 {
    T2P_COMPRESS_NONE = 0,
    T2P_COMPRESS_G4 = 1,
    T2P_COMPRESS_ZIP = 4
} ;
typedef enum __anonenum_t2p_compress_t_51 t2p_compress_t;
enum __anonenum_t2p_transcode_t_52 {
    T2P_TRANSCODE_RAW = 1,
    T2P_TRANSCODE_ENCODE = 2
} ;
typedef enum __anonenum_t2p_transcode_t_52 t2p_transcode_t;
enum __anonenum_t2p_sample_t_53 {
    T2P_SAMPLE_NOTHING = 0,
    T2P_SAMPLE_ABGR_TO_RGB = 1,
    T2P_SAMPLE_RGBA_TO_RGB = 2,
    T2P_SAMPLE_RGBAA_TO_RGB = 4,
    T2P_SAMPLE_YCBCR_TO_RGB = 8,
    T2P_SAMPLE_YCBCR_TO_LAB = 16,
    T2P_SAMPLE_REALIZE_PALETTE = 32,
    T2P_SAMPLE_SIGNED_TO_UNSIGNED = 64,
    T2P_SAMPLE_LAB_SIGNED_TO_UNSIGNED = 64,
    T2P_SAMPLE_PLANAR_SEPARATE_TO_CONTIG = 256
} ;
typedef enum __anonenum_t2p_sample_t_53 t2p_sample_t;
enum __anonenum_t2p_err_t_54 {
    T2P_ERR_OK = 0,
    T2P_ERR_ERROR = 1
} ;
typedef enum __anonenum_t2p_err_t_54 t2p_err_t;
struct __anonstruct_T2P_PAGE_55 {
   tdir_t page_directory ;
   uint32 page_number ;
   ttile_t page_tilecount ;
   uint32 page_extra ;
};
typedef struct __anonstruct_T2P_PAGE_55 T2P_PAGE;
struct __anonstruct_T2P_BOX_56 {
   float x1 ;
   float y1 ;
   float x2 ;
   float y2 ;
   float mat[9] ;
};
typedef struct __anonstruct_T2P_BOX_56 T2P_BOX;
struct __anonstruct_T2P_TILE_57 {
   T2P_BOX tile_box ;
};
typedef struct __anonstruct_T2P_TILE_57 T2P_TILE;
struct __anonstruct_T2P_TILES_58 {
   ttile_t tiles_tilecount ;
   uint32 tiles_tilewidth ;
   uint32 tiles_tilelength ;
   uint32 tiles_tilecountx ;
   uint32 tiles_tilecounty ;
   uint32 tiles_edgetilewidth ;
   uint32 tiles_edgetilelength ;
   T2P_TILE *tiles_tiles ;
};
typedef struct __anonstruct_T2P_TILES_58 T2P_TILES;
struct __anonstruct_T2P_59 {
   t2p_err_t t2p_error ;
   T2P_PAGE *tiff_pages ;
   T2P_TILES *tiff_tiles ;
   tdir_t tiff_pagecount ;
   uint16 tiff_compression ;
   uint16 tiff_photometric ;
   uint16 tiff_fillorder ;
   uint16 tiff_bitspersample ;
   uint16 tiff_samplesperpixel ;
   uint16 tiff_planar ;
   uint32 tiff_width ;
   uint32 tiff_length ;
   float tiff_xres ;
   float tiff_yres ;
   uint16 tiff_orientation ;
   toff_t tiff_dataoffset ;
   tsize_t tiff_datasize ;
   uint16 tiff_resunit ;
   uint16 pdf_centimeters ;
   uint16 pdf_overrideres ;
   uint16 pdf_overridepagesize ;
   float pdf_defaultxres ;
   float pdf_defaultyres ;
   float pdf_xres ;
   float pdf_yres ;
   float pdf_defaultpagewidth ;
   float pdf_defaultpagelength ;
   float pdf_pagewidth ;
   float pdf_pagelength ;
   float pdf_imagewidth ;
   float pdf_imagelength ;
   T2P_BOX pdf_mediabox ;
   T2P_BOX pdf_imagebox ;
   uint16 pdf_majorversion ;
   uint16 pdf_minorversion ;
   uint32 pdf_catalog ;
   uint32 pdf_pages ;
   uint32 pdf_info ;
   uint32 pdf_palettecs ;
   uint16 pdf_fitwindow ;
   uint32 pdf_startxref ;
   unsigned char *pdf_fileid ;
   char pdf_datetime[17] ;
   char pdf_creator[512] ;
   char pdf_author[512] ;
   char pdf_title[512] ;
   char pdf_subject[512] ;
   char pdf_keywords[512] ;
   t2p_cs_t pdf_colorspace ;
   uint16 pdf_colorspace_invert ;
   uint16 pdf_switchdecode ;
   uint16 pdf_palettesize ;
   unsigned char *pdf_palette ;
   int pdf_labrange[4] ;
   t2p_compress_t pdf_defaultcompression ;
   uint16 pdf_defaultcompressionquality ;
   t2p_compress_t pdf_compression ;
   uint16 pdf_compressionquality ;
   uint16 pdf_nopassthrough ;
   t2p_transcode_t pdf_transcode ;
   t2p_sample_t pdf_sample ;
   uint32 *pdf_xrefoffsets ;
   uint32 pdf_xrefcount ;
   tdir_t pdf_page ;
   float tiff_whitechromaticities[2] ;
   float tiff_primarychromaticities[6] ;
   float tiff_referenceblackwhite[2] ;
   float *tiff_transferfunction[3] ;
   int pdf_image_interpolate ;
   uint16 tiff_transferfunctioncount ;
   uint32 pdf_icccs ;
   uint32 tiff_iccprofilelength ;
   tdata_t tiff_iccprofile ;
   FILE *outputfile ;
   int outputdisable ;
   tsize_t outputwritten ;
};
typedef struct __anonstruct_T2P_59 T2P;
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
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
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
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
extern int fdatasync(int __fildes ) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...)  __asm__("open64")  ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd ,
                                                     char const   *__file ,
                                                     int __oflag  , ...)  __asm__("openat64")  ;
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file ,
                                                    __mode_t __mode )  __asm__("creat64")  ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
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
extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB * , TIFFDisplay const   * ,
                               float * ) ;
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
void tiff2pdf_usage(void) ;
int tiff2pdf_match_paper_size(float *width , float *length , char *papersize ) ;
T2P *t2p_init(void) ;
void t2p_validate(T2P *t2p ) ;
tsize_t t2p_write_pdf(T2P *t2p , TIFF *input , TIFF *output ) ;
void t2p_free(T2P *t2p ) ;
void t2p_read_tiff_init(T2P *t2p , TIFF *input ) ;
int t2p_cmp_t2p_page(void const   *e1 , void const   *e2 ) ;
void t2p_read_tiff_data(T2P *t2p , TIFF *input ) ;
void t2p_read_tiff_size(T2P *t2p , TIFF *input ) ;
void t2p_read_tiff_size_tile(T2P *t2p , TIFF *input , ttile_t tile ) ;
int t2p_tile_is_right_edge(T2P_TILES tiles , ttile_t tile ) ;
int t2p_tile_is_bottom_edge(T2P_TILES tiles , ttile_t tile ) ;
int t2p_tile_is_edge(T2P_TILES tiles , ttile_t tile ) ;
int t2p_tile_is_corner_edge(T2P_TILES tiles , ttile_t tile ) ;
tsize_t t2p_readwrite_pdf_image(T2P *t2p , TIFF *input , TIFF *output ) ;
tsize_t t2p_readwrite_pdf_image_tile(T2P *t2p , TIFF *input , TIFF *output ,
                                     ttile_t tile ) ;
void t2p_tile_collapse_left(tdata_t buffer , tsize_t scanwidth ,
                            uint32 tilewidth , uint32 edgetilewidth ,
                            uint32 tilelength ) ;
void t2p_write_advance_directory(T2P *t2p , TIFF *output ) ;
tsize_t t2p_sample_planar_separate_to_contig(T2P *t2p , unsigned char *buffer ,
                                             unsigned char *samplebuffer ,
                                             tsize_t samplebuffersize ) ;
tsize_t t2p_sample_realize_palette(T2P *t2p , unsigned char *buffer ) ;
tsize_t t2p_sample_abgr_to_rgb(tdata_t data , uint32 samplecount ) ;
tsize_t t2p_sample_rgba_to_rgb(tdata_t data , uint32 samplecount ) ;
tsize_t t2p_sample_rgbaa_to_rgb(tdata_t data , uint32 samplecount ) ;
tsize_t t2p_sample_lab_signed_to_unsigned(tdata_t buffer , uint32 samplecount ) ;
tsize_t t2p_write_pdf_header(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_obj_start(uint32 number , TIFF *output ) ;
tsize_t t2p_write_pdf_obj_end(TIFF *output ) ;
tsize_t t2p_write_pdf_name(unsigned char *name , TIFF *output ) ;
tsize_t t2p_write_pdf_string(char *pdfstr , TIFF *output ) ;
tsize_t t2p_write_pdf_stream(tdata_t buffer , tsize_t len , TIFF *output ) ;
tsize_t t2p_write_pdf_stream_start(TIFF *output ) ;
tsize_t t2p_write_pdf_stream_end(TIFF *output ) ;
tsize_t t2p_write_pdf_stream_dict(tsize_t len , uint32 number , TIFF *output ) ;
tsize_t t2p_write_pdf_stream_dict_start(TIFF *output ) ;
tsize_t t2p_write_pdf_stream_dict_end(TIFF *output ) ;
tsize_t t2p_write_pdf_stream_length(tsize_t len , TIFF *output ) ;
tsize_t t2p_write_pdf_catalog(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_info(T2P *t2p , TIFF *input , TIFF *output ) ;
void t2p_pdf_currenttime(T2P *t2p ) ;
void t2p_pdf_tifftime(T2P *t2p , TIFF *input ) ;
tsize_t t2p_write_pdf_pages(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_page(uint32 object , T2P *t2p , TIFF *output ) ;
void t2p_compose_pdf_page(T2P *t2p ) ;
void t2p_compose_pdf_page_orient(T2P_BOX *boxp , uint16 orientation ) ;
void t2p_compose_pdf_page_orient_flip(T2P_BOX *boxp , uint16 orientation ) ;
extern tsize_t t2p_write_pdf_page_content(T2P * , TIFF * ) ;
tsize_t t2p_write_pdf_xobject_stream_dict(ttile_t tile , T2P *t2p ,
                                          TIFF *output ) ;
tsize_t t2p_write_pdf_xobject_cs(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_transfer(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_transfer_dict(T2P *t2p , TIFF *output , uint16 i ) ;
tsize_t t2p_write_pdf_transfer_stream(T2P *t2p , TIFF *output , uint16 i ) ;
tsize_t t2p_write_pdf_xobject_calcs(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_xobject_icccs(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_xobject_icccs_dict(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_xobject_icccs_stream(T2P *t2p , TIFF *output ) ;
extern tsize_t t2p_write_pdf_xobject_cs_stream(T2P * , TIFF * ) ;
tsize_t t2p_write_pdf_xobject_decode(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_xobject_stream_filter(ttile_t tile , T2P *t2p ,
                                            TIFF *output ) ;
tsize_t t2p_write_pdf_xreftable(T2P *t2p , TIFF *output ) ;
tsize_t t2p_write_pdf_trailer(T2P *t2p , TIFF *output ) ;
static void t2p_disable(TIFF *tif ) 
{ 
  T2P *t2p ;
  thandle_t tmp ;

  {
  tmp = TIFFClientdata(tif);
  t2p = (T2P *)tmp;
  t2p->outputdisable = 1;
  return;
}
}
static void t2p_enable(TIFF *tif ) 
{ 
  T2P *t2p ;
  thandle_t tmp ;

  {
  tmp = TIFFClientdata(tif);
  t2p = (T2P *)tmp;
  t2p->outputdisable = 0;
  return;
}
}
static tmsize_t t2pReadFile(TIFF *tif , tdata_t data , tmsize_t size ) 
{ 
  thandle_t client ;
  thandle_t tmp ;
  tmsize_t (*proc)(thandle_t  , void * , tmsize_t  ) ;
  TIFFReadWriteProc tmp___0 ;
  tmsize_t tmp___1 ;

  {
  tmp = TIFFClientdata(tif);
  client = tmp;
  tmp___0 = TIFFGetReadProc(tif);
  proc = tmp___0;
  if (proc) {
    tmp___1 = (*proc)(client, data, size);
    return (tmp___1);
  } else {

  }
  return ((tmsize_t )-1);
}
}
static tmsize_t t2pWriteFile(TIFF *tif , tdata_t data , tmsize_t size ) 
{ 
  thandle_t client ;
  thandle_t tmp ;
  tmsize_t (*proc)(thandle_t  , void * , tmsize_t  ) ;
  TIFFReadWriteProc tmp___0 ;
  tmsize_t tmp___1 ;

  {
  tmp = TIFFClientdata(tif);
  client = tmp;
  tmp___0 = TIFFGetWriteProc(tif);
  proc = tmp___0;
  if (proc) {
    tmp___1 = (*proc)(client, data, size);
    return (tmp___1);
  } else {

  }
  return ((tmsize_t )-1);
}
}
static uint64 t2pSeekFile(TIFF *tif , toff_t offset , int whence ) 
{ 
  thandle_t client ;
  thandle_t tmp ;
  toff_t (*proc)(thandle_t  , toff_t  , int  ) ;
  TIFFSeekProc tmp___0 ;
  toff_t tmp___1 ;

  {
  tmp = TIFFClientdata(tif);
  client = tmp;
  tmp___0 = TIFFGetSeekProc(tif);
  proc = tmp___0;
  if (proc) {
    tmp___1 = (*proc)(client, offset, whence);
    return (tmp___1);
  } else {

  }
  return ((uint64 )-1);
}
}
static tmsize_t t2p_readproc(thandle_t handle , tdata_t data , tmsize_t size ) 
{ 


  {
  return ((tmsize_t )-1);
}
}
static tmsize_t t2p_writeproc(thandle_t handle , tdata_t data , tmsize_t size ) 
{ 
  T2P *t2p ;
  tsize_t written ;
  size_t tmp ;

  {
  t2p = (T2P *)handle;
  if (t2p->outputdisable <= 0) {
    if (t2p->outputfile) {
      tmp = fwrite((void const   */* __restrict  */)data, (size_t )1,
                   (size_t )size, (FILE */* __restrict  */)t2p->outputfile);
      written = (tsize_t )tmp;
      t2p->outputwritten += written;
      return (written);
    } else {

    }
  } else {

  }
  return (size);
}
}
static uint64 t2p_seekproc(thandle_t handle , uint64 offset , int whence ) 
{ 
  T2P *t2p ;
  int tmp ;

  {
  t2p = (T2P *)handle;
  if (t2p->outputdisable <= 0) {
    if (t2p->outputfile) {
      tmp = fseek(t2p->outputfile, (long )offset, whence);
      return ((uint64 )tmp);
    } else {

    }
  } else {

  }
  return (offset);
}
}
static int t2p_closeproc(thandle_t handle ) 
{ 


  {
  return (0);
}
}
static uint64 t2p_sizeproc(thandle_t handle ) 
{ 


  {
  return ((uint64 )-1);
}
}
static int t2p_mapproc(thandle_t handle , void **data , toff_t *offset ) 
{ 


  {
  return (-1);
}
}
static void t2p_unmapproc(thandle_t handle , void *data , toff_t offset ) 
{ 


  {
  return;
}
}
int main(int argc , char **argv ) 
{ 
  char const   *outfilename ;
  T2P *t2p ;
  TIFF *input ;
  TIFF *output ;
  tsize_t written ;
  int c ;
  int ret ;
  int tmp ;
  double tmp___0 ;
  float tmp___1 ;
  double tmp___2 ;
  float tmp___3 ;
  double tmp___4 ;
  float tmp___5 ;
  double tmp___6 ;
  float tmp___7 ;
  int tmp___8 ;
  size_t tmp___9 ;
  int tmp___10 ;

  {
  outfilename = (char const   *)((void *)0);
  t2p = (T2P *)((void *)0);
  input = (TIFF *)((void *)0);
  output = (TIFF *)((void *)0);
  written = (tsize_t )0;
  ret = 0;
  t2p = t2p_init();
  if ((unsigned int )t2p == (unsigned int )((void *)0)) {
    TIFFError("tiff2pdf", "Can\'t initialize context");
    goto fail;
  } else {

  }
  while (1) {
    if (argv) {
      c = getopt(argc, (char * const  *)argv,
                 "o:q:u:x:y:w:l:r:p:e:c:a:t:s:k:jzndifbh");
      if (c != -1) {

      } else {
        break;
      }
    } else {
      break;
    }
    switch (c) {
    case 111: 
    outfilename = (char const   *)optarg;
    break;
    case 106: 
    TIFFWarning("tiff2pdf",
                "JPEG support in libtiff required for JPEG compression, ignoring option");
    break;
    case 122: 
    t2p->pdf_defaultcompression = (t2p_compress_t )4;
    break;
    case 113: 
    tmp = atoi((char const   *)optarg);
    t2p->pdf_defaultcompressionquality = (uint16 )tmp;
    break;
    case 110: 
    t2p->pdf_nopassthrough = (uint16 )1;
    break;
    case 100: 
    t2p->pdf_defaultcompression = (t2p_compress_t )0;
    break;
    case 117: 
    if ((int )*(optarg + 0) == 109) {
      t2p->pdf_centimeters = (uint16 )1;
    } else {

    }
    break;
    case 120: 
    tmp___0 = atof((char const   *)optarg);
    if (t2p->pdf_centimeters) {
      tmp___1 = 2.54F;
    } else {
      tmp___1 = 1.0F;
    }
    t2p->pdf_defaultxres = (float )tmp___0 / tmp___1;
    break;
    case 121: 
    tmp___2 = atof((char const   *)optarg);
    if (t2p->pdf_centimeters) {
      tmp___3 = 2.54F;
    } else {
      tmp___3 = 1.0F;
    }
    t2p->pdf_defaultyres = (float )tmp___2 / tmp___3;
    break;
    case 119: 
    t2p->pdf_overridepagesize = (uint16 )1;
    tmp___4 = atof((char const   *)optarg);
    if (t2p->pdf_centimeters) {
      tmp___5 = 2.54F;
    } else {
      tmp___5 = 1.0F;
    }
    t2p->pdf_defaultpagewidth = ((float )tmp___4 * 72.0F) / tmp___5;
    break;
    case 108: 
    t2p->pdf_overridepagesize = (uint16 )1;
    tmp___6 = atof((char const   *)optarg);
    if (t2p->pdf_centimeters) {
      tmp___7 = 2.54F;
    } else {
      tmp___7 = 1.0F;
    }
    t2p->pdf_defaultpagelength = ((float )tmp___6 * 72.0F) / tmp___7;
    break;
    case 114: 
    if ((int )*(optarg + 0) == 111) {
      t2p->pdf_overrideres = (uint16 )1;
    } else {

    }
    break;
    case 112: 
    tmp___8 = tiff2pdf_match_paper_size(& t2p->pdf_defaultpagewidth,
                                        & t2p->pdf_defaultpagelength, optarg);
    if (tmp___8) {
      t2p->pdf_overridepagesize = (uint16 )1;
    } else {
      TIFFWarning("tiff2pdf", "Unknown paper size %s, ignoring option", optarg);
    }
    break;
    case 105: 
    t2p->pdf_colorspace_invert = (uint16 )1;
    break;
    case 102: 
    t2p->pdf_fitwindow = (uint16 )1;
    break;
    case 101: 
    tmp___9 = strlen((char const   *)optarg);
    if (tmp___9 == 0U) {
      t2p->pdf_datetime[0] = (char )'\000';
    } else {
      t2p->pdf_datetime[0] = (char )'D';
      t2p->pdf_datetime[1] = (char )':';
      __builtin_strncpy(t2p->pdf_datetime + 2, (char const   *)optarg,
                        sizeof(t2p->pdf_datetime) - 3U);
      t2p->pdf_datetime[sizeof(t2p->pdf_datetime) - 1U] = (char )'\000';
    }
    break;
    case 99: 
    __builtin_strncpy(t2p->pdf_creator, (char const   *)optarg,
                      sizeof(t2p->pdf_creator) - 1U);
    t2p->pdf_creator[sizeof(t2p->pdf_creator) - 1U] = (char )'\000';
    break;
    case 97: 
    __builtin_strncpy(t2p->pdf_author, (char const   *)optarg,
                      sizeof(t2p->pdf_author) - 1U);
    t2p->pdf_author[sizeof(t2p->pdf_author) - 1U] = (char )'\000';
    break;
    case 116: 
    __builtin_strncpy(t2p->pdf_title, (char const   *)optarg,
                      sizeof(t2p->pdf_title) - 1U);
    t2p->pdf_title[sizeof(t2p->pdf_title) - 1U] = (char )'\000';
    break;
    case 115: 
    __builtin_strncpy(t2p->pdf_subject, (char const   *)optarg,
                      sizeof(t2p->pdf_subject) - 1U);
    t2p->pdf_subject[sizeof(t2p->pdf_subject) - 1U] = (char )'\000';
    break;
    case 107: 
    __builtin_strncpy(t2p->pdf_keywords, (char const   *)optarg,
                      sizeof(t2p->pdf_keywords) - 1U);
    t2p->pdf_keywords[sizeof(t2p->pdf_keywords) - 1U] = (char )'\000';
    break;
    case 98: 
    t2p->pdf_image_interpolate = 1;
    break;
    case 63: 
    case 104: 
    tiff2pdf_usage();
    goto success;
    break;
    }
  }
  if (argc > optind) {
    tmp___10 = optind;
    optind ++;
    input = TIFFOpen((char const   *)*(argv + tmp___10), "r");
    if ((unsigned int )input == (unsigned int )((void *)0)) {
      TIFFError("tiff2pdf", "Can\'t open input file %s for reading",
                *(argv + (optind - 1)));
      goto fail;
    } else {

    }
  } else {
    TIFFError("tiff2pdf", "No input file specified");
    tiff2pdf_usage();
    goto fail;
  }
  if (argc > optind) {
    TIFFError("tiff2pdf", "No support for multiple input files");
    tiff2pdf_usage();
    goto fail;
  } else {

  }
  t2p->outputdisable = 0;
  if (outfilename) {
    t2p->outputfile = fopen((char const   */* __restrict  */)outfilename,
                            (char const   */* __restrict  */)"wb");
    if ((unsigned int )t2p->outputfile == (unsigned int )((void *)0)) {
      TIFFError("tiff2pdf", "Can\'t open output file %s for writing",
                outfilename);
      goto fail;
    } else {

    }
  } else {
    outfilename = "-";
    t2p->outputfile = stdout;
  }
  output = TIFFClientOpen(outfilename, "w", (thandle_t )t2p, & t2p_readproc,
                          & t2p_writeproc, & t2p_seekproc, & t2p_closeproc,
                          & t2p_sizeproc, & t2p_mapproc, & t2p_unmapproc);
  if ((unsigned int )output == (unsigned int )((void *)0)) {
    TIFFError("tiff2pdf", "Can\'t initialize output descriptor");
    goto fail;
  } else {

  }
  t2p_validate(t2p);
  t2pSeekFile(output, (toff_t )0, 0);
  written = t2p_write_pdf(t2p, input, output);
  if ((unsigned int )t2p->t2p_error != 0U) {
    TIFFError("tiff2pdf", "An error occurred creating output PDF file");
    goto fail;
  } else {

  }
  {
  goto success;
  fail: 
  ret = 1;
  }
  success: 
  if ((unsigned int )input != (unsigned int )((void *)0)) {
    TIFFClose(input);
  } else {

  }
  if ((unsigned int )output != (unsigned int )((void *)0)) {
    TIFFClose(output);
  } else {

  }
  if ((unsigned int )t2p != (unsigned int )((void *)0)) {
    t2p_free(t2p);
  } else {

  }
  return (ret);
}
}
void tiff2pdf_usage(void) 
{ 
  char *lines[25] ;
  int i ;
  char const   *tmp ;

  {
  lines[0] = (char *)"usage:  tiff2pdf [options] input.tiff";
  lines[1] = (char *)"options:";
  lines[2] = (char *)" -o: output to file name";
  lines[3] = (char *)" -z: compress with Zip/Deflate";
  lines[4] = (char *)" -q: compression quality";
  lines[5] = (char *)" -n: no compressed data passthrough";
  lines[6] = (char *)" -d: do not compress (decompress)";
  lines[7] = (char *)" -i: invert colors";
  lines[8] = (char *)" -u: set distance unit, \'i\' for inch, \'m\' for centimeter";
  lines[9] = (char *)" -x: set x resolution default in dots per unit";
  lines[10] = (char *)" -y: set y resolution default in dots per unit";
  lines[11] = (char *)" -w: width in units";
  lines[12] = (char *)" -l: length in units";
  lines[13] = (char *)" -r: \'d\' for resolution default, \'o\' for resolution override";
  lines[14] = (char *)" -p: paper size, eg \"letter\", \"legal\", \"A4\"";
  lines[15] = (char *)" -f: set PDF \"Fit Window\" user preference";
  lines[16] = (char *)" -e: date, overrides image or current date/time default, YYYYMMDDHHMMSS";
  lines[17] = (char *)" -c: sets document creator, overrides image software default";
  lines[18] = (char *)" -a: sets document author, overrides image artist default";
  lines[19] = (char *)" -t: sets document title, overrides image document name default";
  lines[20] = (char *)" -s: sets document subject, overrides image image description default";
  lines[21] = (char *)" -k: sets document keywords";
  lines[22] = (char *)" -b: set PDF \"Interpolate\" user preference";
  lines[23] = (char *)" -h: usage";
  lines[24] = (char *)((void *)0);
  i = 0;
  tmp = TIFFGetVersion();
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s\n\n", tmp);
  i = 0;
  while ((unsigned int )lines[i] != (unsigned int )((void *)0)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s\n", lines[i]);
    i ++;
  }
  return;
}
}
int tiff2pdf_match_paper_size(float *width , float *length , char *papersize ) 
{ 
  size_t i ;
  size_t len ;
  char const   *sizes[80] ;
  int widths[80] ;
  int lengths[80] ;
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
  sizes[0] = "LETTER";
  sizes[1] = "A4";
  sizes[2] = "LEGAL";
  sizes[3] = "EXECUTIVE";
  sizes[4] = "LETTER";
  sizes[5] = "LEGAL";
  sizes[6] = "LEDGER";
  sizes[7] = "TABLOID";
  sizes[8] = "A";
  sizes[9] = "B";
  sizes[10] = "C";
  sizes[11] = "D";
  sizes[12] = "E";
  sizes[13] = "F";
  sizes[14] = "G";
  sizes[15] = "H";
  sizes[16] = "J";
  sizes[17] = "K";
  sizes[18] = "A10";
  sizes[19] = "A9";
  sizes[20] = "A8";
  sizes[21] = "A7";
  sizes[22] = "A6";
  sizes[23] = "A5";
  sizes[24] = "A4";
  sizes[25] = "A3";
  sizes[26] = "A2";
  sizes[27] = "A1";
  sizes[28] = "A0";
  sizes[29] = "2A0";
  sizes[30] = "4A0";
  sizes[31] = "2A";
  sizes[32] = "4A";
  sizes[33] = "B10";
  sizes[34] = "B9";
  sizes[35] = "B8";
  sizes[36] = "B7";
  sizes[37] = "B6";
  sizes[38] = "B5";
  sizes[39] = "B4";
  sizes[40] = "B3";
  sizes[41] = "B2";
  sizes[42] = "B1";
  sizes[43] = "B0";
  sizes[44] = "JISB10";
  sizes[45] = "JISB9";
  sizes[46] = "JISB8";
  sizes[47] = "JISB7";
  sizes[48] = "JISB6";
  sizes[49] = "JISB5";
  sizes[50] = "JISB4";
  sizes[51] = "JISB3";
  sizes[52] = "JISB2";
  sizes[53] = "JISB1";
  sizes[54] = "JISB0";
  sizes[55] = "C10";
  sizes[56] = "C9";
  sizes[57] = "C8";
  sizes[58] = "C7";
  sizes[59] = "C6";
  sizes[60] = "C5";
  sizes[61] = "C4";
  sizes[62] = "C3";
  sizes[63] = "C2";
  sizes[64] = "C1";
  sizes[65] = "C0";
  sizes[66] = "RA2";
  sizes[67] = "RA1";
  sizes[68] = "RA0";
  sizes[69] = "SRA4";
  sizes[70] = "SRA3";
  sizes[71] = "SRA2";
  sizes[72] = "SRA1";
  sizes[73] = "SRA0";
  sizes[74] = "A3EXTRA";
  sizes[75] = "A4EXTRA";
  sizes[76] = "STATEMENT";
  sizes[77] = "FOLIO";
  sizes[78] = "QUARTO";
  sizes[79] = (char const   *)((void *)0);
  widths[0] = 612;
  widths[1] = 595;
  widths[2] = 612;
  widths[3] = 522;
  widths[4] = 612;
  widths[5] = 612;
  widths[6] = 792;
  widths[7] = 792;
  widths[8] = 612;
  widths[9] = 792;
  widths[10] = 1224;
  widths[11] = 1584;
  widths[12] = 2448;
  widths[13] = 2016;
  widths[14] = 792;
  widths[15] = 2016;
  widths[16] = 2448;
  widths[17] = 2880;
  widths[18] = 74;
  widths[19] = 105;
  widths[20] = 147;
  widths[21] = 210;
  widths[22] = 298;
  widths[23] = 420;
  widths[24] = 595;
  widths[25] = 842;
  widths[26] = 1191;
  widths[27] = 1684;
  widths[28] = 2384;
  widths[29] = 3370;
  widths[30] = 4768;
  widths[31] = 3370;
  widths[32] = 4768;
  widths[33] = 88;
  widths[34] = 125;
  widths[35] = 176;
  widths[36] = 249;
  widths[37] = 354;
  widths[38] = 499;
  widths[39] = 709;
  widths[40] = 1001;
  widths[41] = 1417;
  widths[42] = 2004;
  widths[43] = 2835;
  widths[44] = 91;
  widths[45] = 128;
  widths[46] = 181;
  widths[47] = 258;
  widths[48] = 363;
  widths[49] = 516;
  widths[50] = 729;
  widths[51] = 1032;
  widths[52] = 1460;
  widths[53] = 2064;
  widths[54] = 2920;
  widths[55] = 79;
  widths[56] = 113;
  widths[57] = 162;
  widths[58] = 230;
  widths[59] = 323;
  widths[60] = 459;
  widths[61] = 649;
  widths[62] = 918;
  widths[63] = 1298;
  widths[64] = 1298;
  widths[65] = 2599;
  widths[66] = 1219;
  widths[67] = 1729;
  widths[68] = 2438;
  widths[69] = 638;
  widths[70] = 907;
  widths[71] = 1276;
  widths[72] = 1814;
  widths[73] = 2551;
  widths[74] = 914;
  widths[75] = 667;
  widths[76] = 396;
  widths[77] = 612;
  widths[78] = 609;
  widths[79] = 0;
  lengths[0] = 792;
  lengths[1] = 842;
  lengths[2] = 1008;
  lengths[3] = 756;
  lengths[4] = 792;
  lengths[5] = 1008;
  lengths[6] = 1224;
  lengths[7] = 1224;
  lengths[8] = 792;
  lengths[9] = 1224;
  lengths[10] = 1584;
  lengths[11] = 2448;
  lengths[12] = 3168;
  lengths[13] = 2880;
  lengths[14] = 6480;
  lengths[15] = 10296;
  lengths[16] = 12672;
  lengths[17] = 10296;
  lengths[18] = 105;
  lengths[19] = 147;
  lengths[20] = 210;
  lengths[21] = 298;
  lengths[22] = 420;
  lengths[23] = 595;
  lengths[24] = 842;
  lengths[25] = 1191;
  lengths[26] = 1684;
  lengths[27] = 2384;
  lengths[28] = 3370;
  lengths[29] = 4768;
  lengths[30] = 6741;
  lengths[31] = 4768;
  lengths[32] = 6741;
  lengths[33] = 125;
  lengths[34] = 176;
  lengths[35] = 249;
  lengths[36] = 354;
  lengths[37] = 499;
  lengths[38] = 709;
  lengths[39] = 1001;
  lengths[40] = 1417;
  lengths[41] = 2004;
  lengths[42] = 2835;
  lengths[43] = 4008;
  lengths[44] = 128;
  lengths[45] = 181;
  lengths[46] = 258;
  lengths[47] = 363;
  lengths[48] = 516;
  lengths[49] = 729;
  lengths[50] = 1032;
  lengths[51] = 1460;
  lengths[52] = 2064;
  lengths[53] = 2920;
  lengths[54] = 4127;
  lengths[55] = 113;
  lengths[56] = 162;
  lengths[57] = 230;
  lengths[58] = 323;
  lengths[59] = 459;
  lengths[60] = 649;
  lengths[61] = 918;
  lengths[62] = 1298;
  lengths[63] = 1837;
  lengths[64] = 1837;
  lengths[65] = 3677;
  lengths[66] = 1729;
  lengths[67] = 2438;
  lengths[68] = 3458;
  lengths[69] = 907;
  lengths[70] = 1276;
  lengths[71] = 1814;
  lengths[72] = 2551;
  lengths[73] = 3628;
  lengths[74] = 1262;
  lengths[75] = 914;
  lengths[76] = 612;
  lengths[77] = 936;
  lengths[78] = 780;
  lengths[79] = 0;
  len = strlen((char const   *)papersize);
  i = (size_t )0;
  while (i < len) {
    if (sizeof(*(papersize + i)) > 1U) {
      __res = toupper((int )*(papersize + i));
    } else {
      tmp___0 = __ctype_toupper_loc();
      __res = (int )*(*tmp___0 + (int )*(papersize + i));
    }
    *(papersize + i) = (char )__res;
    i ++;
  }
  i = (size_t )0;
  while ((unsigned int )sizes[i] != (unsigned int )((void *)0)) {
    if (0) {
      __s1_len = strlen((char const   *)papersize);
      __s2_len = strlen(sizes[i]);
      if (! ((size_t )((void const   *)((char const   *)papersize + 1)) - (size_t )((void const   *)((char const   *)papersize)) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(sizes[i] + 1)) - (size_t )((void const   *)sizes[i]) == 1U)) {
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
        tmp___2 = __builtin_strcmp((char const   *)papersize, sizes[i]);
        tmp___6 = tmp___2;
      } else {
        tmp___5 = __builtin_strcmp((char const   *)papersize, sizes[i]);
        tmp___6 = tmp___5;
      }
    } else {
      tmp___5 = __builtin_strcmp((char const   *)papersize, sizes[i]);
      tmp___6 = tmp___5;
    }
    if (tmp___6 == 0) {
      *width = (float )widths[i];
      *length = (float )lengths[i];
      return (1);
    } else {

    }
    i ++;
  }
  return (0);
}
}
T2P *t2p_init(void) 
{ 
  T2P *t2p ;
  void *tmp ;

  {
  tmp = _TIFFmalloc((tmsize_t )sizeof(T2P ));
  t2p = (T2P *)tmp;
  if ((unsigned int )t2p == (unsigned int )((void *)0)) {
    TIFFError("tiff2pdf", "Can\'t allocate %lu bytes of memory for t2p_init",
              (unsigned long )sizeof(T2P ));
    return ((T2P *)((void *)0));
  } else {

  }
  _TIFFmemset((void *)t2p, 0, (tmsize_t )sizeof(T2P ));
  t2p->pdf_majorversion = (uint16 )1;
  t2p->pdf_minorversion = (uint16 )1;
  t2p->pdf_defaultxres = (float )300.0;
  t2p->pdf_defaultyres = (float )300.0;
  t2p->pdf_defaultpagewidth = (float )612.0;
  t2p->pdf_defaultpagelength = (float )792.0;
  t2p->pdf_xrefcount = (uint32 )3;
  return (t2p);
}
}
void t2p_free(T2P *t2p ) 
{ 
  int i ;

  {
  i = 0;
  if ((unsigned int )t2p != (unsigned int )((void *)0)) {
    if ((unsigned int )t2p->pdf_xrefoffsets != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )t2p->pdf_xrefoffsets);
    } else {

    }
    if ((unsigned int )t2p->tiff_pages != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )t2p->tiff_pages);
    } else {

    }
    i = 0;
    while (i < (int )t2p->tiff_pagecount) {
      if ((unsigned int )(t2p->tiff_tiles + i)->tiles_tiles != (unsigned int )((void *)0)) {
        _TIFFfree((tdata_t )(t2p->tiff_tiles + i)->tiles_tiles);
      } else {

      }
      i ++;
    }
    if ((unsigned int )t2p->tiff_tiles != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )t2p->tiff_tiles);
    } else {

    }
    if ((unsigned int )t2p->pdf_palette != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )t2p->pdf_palette);
    } else {

    }
    if ((unsigned int )t2p->pdf_fileid != (unsigned int )((void *)0)) {
      _TIFFfree((tdata_t )t2p->pdf_fileid);
    } else {

    }
    _TIFFfree((tdata_t )t2p);
  } else {

  }
  return;
}
}
void t2p_validate(T2P *t2p ) 
{ 
  uint16 m ;

  {
  if ((unsigned int )t2p->pdf_defaultcompression == 4U) {
    m = (uint16 )((int )t2p->pdf_defaultcompressionquality % 100);
    if ((int )t2p->pdf_defaultcompressionquality / 100 > 9) {
      t2p->pdf_defaultcompressionquality = (uint16 )0;
    } else
    if ((int )m > 1) {
      if ((int )m < 10) {
        t2p->pdf_defaultcompressionquality = (uint16 )0;
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if ((int )m > 15) {
      t2p->pdf_defaultcompressionquality = (uint16 )0;
    } else {

    }
    if ((int )t2p->pdf_defaultcompressionquality % 100 != 0) {
      t2p->pdf_defaultcompressionquality = (uint16 )((int )t2p->pdf_defaultcompressionquality / 100);
      t2p->pdf_defaultcompressionquality = (uint16 )((int )t2p->pdf_defaultcompressionquality * 100);
      TIFFError("tiff2pdf",
                "PNG Group predictor differencing not implemented, assuming compression quality %u",
                (int )t2p->pdf_defaultcompressionquality);
    } else {

    }
    t2p->pdf_defaultcompressionquality = (uint16 )((int )t2p->pdf_defaultcompressionquality % 100);
    if ((int )t2p->pdf_minorversion < 2) {
      t2p->pdf_minorversion = (uint16 )2;
    } else {

    }
  } else {

  }
  return;
}
}
void t2p_read_tiff_init(T2P *t2p , TIFF *input ) 
{ 
  tdir_t directorycount ;
  tdir_t i ;
  uint16 pagen ;
  uint16 paged ;
  uint16 xuint16 ;
  void *tmp ;
  char const   *tmp___0 ;
  void *tmp___1 ;
  char const   *tmp___2 ;
  uint32 subfiletype ;
  char const   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  uint32 tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  void *tmp___16 ;
  char const   *tmp___17 ;

  {
  directorycount = (tdir_t )0;
  i = (tdir_t )0;
  pagen = (uint16 )0;
  paged = (uint16 )0;
  xuint16 = (uint16 )0;
  directorycount = TIFFNumberOfDirectories(input);
  tmp = _TIFFmalloc((tmsize_t )((unsigned int )directorycount * sizeof(T2P_PAGE )));
  t2p->tiff_pages = (T2P_PAGE *)tmp;
  if ((unsigned int )t2p->tiff_pages == (unsigned int )((void *)0)) {
    tmp___0 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "Can\'t allocate %lu bytes of memory for tiff_pages array, %s",
              (unsigned long )directorycount * (unsigned long )sizeof(T2P_PAGE ),
              tmp___0);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  _TIFFmemset((void *)t2p->tiff_pages, 0,
              (tmsize_t )((unsigned int )directorycount * sizeof(T2P_PAGE )));
  tmp___1 = _TIFFmalloc((tmsize_t )((unsigned int )directorycount * sizeof(T2P_TILES )));
  t2p->tiff_tiles = (T2P_TILES *)tmp___1;
  if ((unsigned int )t2p->tiff_tiles == (unsigned int )((void *)0)) {
    tmp___2 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "Can\'t allocate %lu bytes of memory for tiff_tiles array, %s",
              (unsigned long )directorycount * (unsigned long )sizeof(T2P_TILES ),
              tmp___2);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  _TIFFmemset((void *)t2p->tiff_tiles, 0,
              (tmsize_t )((unsigned int )directorycount * sizeof(T2P_TILES )));
  i = (tdir_t )0;
  while ((int )i < (int )directorycount) {
    subfiletype = (uint32 )0;
    tmp___4 = TIFFSetDirectory(input, i);
    if (tmp___4) {

    } else {
      tmp___3 = TIFFFileName(input);
      TIFFError("tiff2pdf", "Can\'t set directory %u of input file %s", (int )i,
                tmp___3);
      return;
    }
    tmp___5 = TIFFGetField(input, (uint32 )297, & pagen, & paged);
    if (tmp___5) {
      if ((int )pagen > (int )paged) {
        if ((int )paged != 0) {
          (t2p->tiff_pages + t2p->tiff_pagecount)->page_number = (uint32 )paged;
        } else {
          (t2p->tiff_pages + t2p->tiff_pagecount)->page_number = (uint32 )pagen;
        }
      } else {
        (t2p->tiff_pages + t2p->tiff_pagecount)->page_number = (uint32 )pagen;
      }
      goto ispage2;
    } else {

    }
    tmp___6 = TIFFGetField(input, (uint32 )254, & subfiletype);
    if (tmp___6) {
      if ((subfiletype & 2U) != 0U) {
        goto ispage;
      } else
      if (subfiletype == 0U) {
        goto ispage;
      } else {
        goto isnotpage;
      }
    } else {

    }
    tmp___7 = TIFFGetField(input, (uint32 )255, & subfiletype);
    if (tmp___7) {
      if (subfiletype == 1U) {
        goto ispage;
      } else
      if (subfiletype == 3U) {
        goto ispage;
      } else
      if (subfiletype == 0U) {
        goto ispage;
      } else {
        goto isnotpage;
      }
    } else {

    }
    ispage: 
    (t2p->tiff_pages + t2p->tiff_pagecount)->page_number = (uint32 )t2p->tiff_pagecount;
    ispage2: 
    (t2p->tiff_pages + t2p->tiff_pagecount)->page_directory = i;
    tmp___8 = TIFFIsTiled(input);
    if (tmp___8) {
      (t2p->tiff_pages + t2p->tiff_pagecount)->page_tilecount = TIFFNumberOfTiles(input);
    } else {

    }
    t2p->tiff_pagecount = (tdir_t )((int )t2p->tiff_pagecount + 1);
    isnotpage: 
    i = (tdir_t )((int )i + 1);
  }
  qsort((void *)t2p->tiff_pages, (size_t )t2p->tiff_pagecount,
        sizeof(T2P_PAGE ), & t2p_cmp_t2p_page);
  i = (tdir_t )0;
  while ((int )i < (int )t2p->tiff_pagecount) {
    t2p->pdf_xrefcount += 5U;
    TIFFSetDirectory(input, (t2p->tiff_pages + i)->page_directory);
    tmp___9 = TIFFGetField(input, (uint32 )262, & xuint16);
    if (tmp___9) {
      if ((int )xuint16 == 3) {
        ((t2p->tiff_pages + i)->page_extra) ++;
        (t2p->pdf_xrefcount) ++;
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      tmp___10 = TIFFGetField(input, (uint32 )346, & xuint16);
      if (tmp___10) {
        ((t2p->tiff_pages + i)->page_extra) ++;
        (t2p->pdf_xrefcount) ++;
      } else {

      }
    }
    tmp___12 = TIFFGetField(input, (uint32 )259, & xuint16);
    if (tmp___12) {
      if ((int )xuint16 == 32946) {
        goto _L___1;
      } else
      if ((int )xuint16 == 8) {
        _L___1: /* CIL Label */ 
        if ((t2p->tiff_pages + i)->page_tilecount != 0U) {
          goto _L___0;
        } else {
          tmp___11 = TIFFNumberOfStrips(input);
          if (tmp___11 == 1U) {
            _L___0: /* CIL Label */ 
            if ((int )t2p->pdf_nopassthrough == 0) {
              if ((int )t2p->pdf_minorversion < 2) {
                t2p->pdf_minorversion = (uint16 )2;
              } else {

              }
            } else {

            }
          } else {

          }
        }
      } else {

      }
    } else {

    }
    tmp___13 = TIFFGetField(input, (uint32 )301,
                            & t2p->tiff_transferfunction[0],
                            & t2p->tiff_transferfunction[1],
                            & t2p->tiff_transferfunction[2]);
    if (tmp___13) {
      if ((unsigned int )t2p->tiff_transferfunction[1] != (unsigned int )t2p->tiff_transferfunction[0]) {
        t2p->tiff_transferfunctioncount = (uint16 )3;
        (t2p->tiff_pages + i)->page_extra += 4U;
        t2p->pdf_xrefcount += 4U;
      } else {
        t2p->tiff_transferfunctioncount = (uint16 )1;
        (t2p->tiff_pages + i)->page_extra += 2U;
        t2p->pdf_xrefcount += 2U;
      }
      if ((int )t2p->pdf_minorversion < 2) {
        t2p->pdf_minorversion = (uint16 )2;
      } else {

      }
    } else {
      t2p->tiff_transferfunctioncount = (uint16 )0;
    }
    tmp___14 = TIFFGetField(input, (uint32 )34675, & t2p->tiff_iccprofilelength,
                            & t2p->tiff_iccprofile);
    if (tmp___14 != 0) {
      ((t2p->tiff_pages + i)->page_extra) ++;
      (t2p->pdf_xrefcount) ++;
      if ((int )t2p->pdf_minorversion < 3) {
        t2p->pdf_minorversion = (uint16 )3;
      } else {

      }
    } else {

    }
    (t2p->tiff_tiles + i)->tiles_tilecount = (t2p->tiff_pages + i)->page_tilecount;
    tmp___15 = TIFFGetField(input, (uint32 )284, & xuint16);
    if (tmp___15 != 0) {
      if ((int )xuint16 == 2) {
        TIFFGetField(input, (uint32 )277, & xuint16);
        (t2p->tiff_tiles + i)->tiles_tilecount /= (ttile_t )xuint16;
      } else {

      }
    } else {

    }
    if ((t2p->tiff_tiles + i)->tiles_tilecount > 0U) {
      t2p->pdf_xrefcount += ((t2p->tiff_tiles + i)->tiles_tilecount - 1U) * 2U;
      TIFFGetField(input, (uint32 )322, & (t2p->tiff_tiles + i)->tiles_tilewidth);
      TIFFGetField(input, (uint32 )323,
                   & (t2p->tiff_tiles + i)->tiles_tilelength);
      tmp___16 = _TIFFmalloc((tmsize_t )((t2p->tiff_tiles + i)->tiles_tilecount * sizeof(T2P_TILE )));
      (t2p->tiff_tiles + i)->tiles_tiles = (T2P_TILE *)tmp___16;
      if ((unsigned int )(t2p->tiff_tiles + i)->tiles_tiles == (unsigned int )((void *)0)) {
        tmp___17 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_read_tiff_init, %s",
                  (unsigned long )(t2p->tiff_tiles + i)->tiles_tilecount * (unsigned long )sizeof(T2P_TILE ),
                  tmp___17);
        t2p->t2p_error = (t2p_err_t )1;
        return;
      } else {

      }
    } else {

    }
    i = (tdir_t )((int )i + 1);
  }
  return;
}
}
int t2p_cmp_t2p_page(void const   *e1 , void const   *e2 ) 
{ 


  {
  return ((int )(((T2P_PAGE *)e1)->page_number - ((T2P_PAGE *)e2)->page_number));
}
}
void t2p_read_tiff_data(T2P *t2p , TIFF *input ) 
{ 
  int i ;
  uint16 *r ;
  uint16 *g ;
  uint16 *b ;
  uint16 *a ;
  uint16 xuint16 ;
  uint16 *xuint16p ;
  float *xfloatp ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  int tmp___2 ;
  char const   *tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  int tmp___10 ;
  char const   *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  char const   *tmp___14 ;
  int tmp___15 ;
  char const   *tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  char const   *tmp___19 ;
  char const   *tmp___20 ;
  int tmp___21 ;
  void *tmp___22 ;
  char const   *tmp___23 ;
  int tmp___24 ;
  char const   *tmp___25 ;
  int tmp___26 ;
  char const   *tmp___27 ;
  char const   *tmp___28 ;
  char const   *tmp___29 ;
  int tmp___30 ;
  void *tmp___31 ;
  char const   *tmp___32 ;
  char const   *tmp___33 ;
  char const   *tmp___34 ;
  char const   *tmp___35 ;
  char const   *tmp___36 ;
  char const   *tmp___37 ;
  int tmp___38 ;
  char const   *tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  uint32 tmp___43 ;
  int tmp___44 ;
  uint32 tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;

  {
  i = 0;
  t2p->pdf_transcode = (t2p_transcode_t )2;
  t2p->pdf_sample = (t2p_sample_t )0;
  t2p->pdf_switchdecode = t2p->pdf_colorspace_invert;
  TIFFSetDirectory(input, (t2p->tiff_pages + t2p->pdf_page)->page_directory);
  TIFFGetField(input, (uint32 )256, & t2p->tiff_width);
  if (t2p->tiff_width == 0U) {
    tmp = TIFFFileName(input);
    TIFFError("tiff2pdf", "No support for %s with zero width", tmp);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  TIFFGetField(input, (uint32 )257, & t2p->tiff_length);
  if (t2p->tiff_length == 0U) {
    tmp___0 = TIFFFileName(input);
    TIFFError("tiff2pdf", "No support for %s with zero length", tmp___0);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  tmp___2 = TIFFGetField(input, (uint32 )259, & t2p->tiff_compression);
  if (tmp___2 == 0) {
    tmp___1 = TIFFFileName(input);
    TIFFError("tiff2pdf", "No support for %s with no compression tag", tmp___1);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  tmp___4 = TIFFIsCODECConfigured(t2p->tiff_compression);
  if (tmp___4 == 0) {
    tmp___3 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "No support for %s with compression type %u:  not configured",
              tmp___3, (int )t2p->tiff_compression);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  TIFFGetFieldDefaulted(input, (uint32 )258, & t2p->tiff_bitspersample);
  switch ((int )t2p->tiff_bitspersample) {
  case 8: 
  case 4: 
  case 2: 
  case 1: 
  break;
  case 0: 
  tmp___5 = TIFFFileName(input);
  TIFFWarning("tiff2pdf", "Image %s has 0 bits per sample, assuming 1", tmp___5);
  t2p->tiff_bitspersample = (uint16 )1;
  break;
  default: 
  tmp___6 = TIFFFileName(input);
  TIFFError("tiff2pdf", "No support for %s with %u bits per sample", tmp___6,
            (int )t2p->tiff_bitspersample);
  t2p->t2p_error = (t2p_err_t )1;
  return;
  }
  TIFFGetFieldDefaulted(input, (uint32 )277, & t2p->tiff_samplesperpixel);
  if ((int )t2p->tiff_samplesperpixel > 4) {
    tmp___7 = TIFFFileName(input);
    TIFFError("tiff2pdf", "No support for %s with %u samples per pixel",
              tmp___7, (int )t2p->tiff_samplesperpixel);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  if ((int )t2p->tiff_samplesperpixel == 0) {
    tmp___8 = TIFFFileName(input);
    TIFFWarning("tiff2pdf", "Image %s has 0 samples per pixel, assuming 1",
                tmp___8);
    t2p->tiff_samplesperpixel = (uint16 )1;
  } else {

  }
  tmp___10 = TIFFGetField(input, (uint32 )339, & xuint16);
  if (tmp___10 != 0) {
    switch ((int )xuint16) {
    case 4: 
    case 1: 
    case 0: 
    break;
    default: 
    tmp___9 = TIFFFileName(input);
    TIFFError("tiff2pdf", "No support for %s with sample format %u", tmp___9,
              (int )xuint16);
    t2p->t2p_error = (t2p_err_t )1;
    return;
    break;
    }
  } else {

  }
  TIFFGetFieldDefaulted(input, (uint32 )266, & t2p->tiff_fillorder);
  tmp___12 = TIFFGetField(input, (uint32 )262, & t2p->tiff_photometric);
  if (tmp___12 == 0) {
    tmp___11 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "No support for %s with no photometric interpretation tag",
              tmp___11);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  switch ((int )t2p->tiff_photometric) {
  case 1: 
  case 0: 
  if ((int )t2p->tiff_bitspersample == 1) {
    t2p->pdf_colorspace = (t2p_cs_t )1;
    if ((int )t2p->tiff_photometric == 0) {
      t2p->pdf_switchdecode = (uint16 )((int )t2p->pdf_switchdecode ^ 1);
    } else {

    }
  } else {
    t2p->pdf_colorspace = (t2p_cs_t )2;
    if ((int )t2p->tiff_photometric == 0) {
      t2p->pdf_switchdecode = (uint16 )((int )t2p->pdf_switchdecode ^ 1);
    } else {

    }
  }
  break;
  case 2: 
  t2p->pdf_colorspace = (t2p_cs_t )4;
  if ((int )t2p->tiff_samplesperpixel == 3) {
    break;
  } else {

  }
  tmp___13 = TIFFGetField(input, (uint32 )346, & xuint16);
  if (tmp___13) {
    if ((int )xuint16 == 1) {
      goto photometric_palette;
    } else {

    }
  } else {

  }
  if ((int )t2p->tiff_samplesperpixel > 3) {
    if ((int )t2p->tiff_samplesperpixel == 4) {
      t2p->pdf_colorspace = (t2p_cs_t )4;
      tmp___15 = TIFFGetField(input, (uint32 )338, & xuint16, & xuint16p);
      if (tmp___15) {
        if ((int )xuint16 == 1) {
          if ((int )*(xuint16p + 0) == 1) {
            t2p->pdf_sample = (t2p_sample_t )4;
            break;
          } else {

          }
          if ((int )*(xuint16p + 0) == 2) {
            t2p->pdf_sample = (t2p_sample_t )2;
            break;
          } else {

          }
          tmp___14 = TIFFFileName(input);
          TIFFWarning("tiff2pdf",
                      "RGB image %s has 4 samples per pixel, assuming RGBA",
                      tmp___14);
          break;
        } else {

        }
      } else {

      }
      t2p->pdf_colorspace = (t2p_cs_t )8;
      t2p->pdf_switchdecode = (uint16 )((int )t2p->pdf_switchdecode ^ 1);
      tmp___16 = TIFFFileName(input);
      TIFFWarning("tiff2pdf",
                  "RGB image %s has 4 samples per pixel, assuming inverse CMYK",
                  tmp___16);
      break;
    } else {
      tmp___17 = TIFFFileName(input);
      TIFFError("tiff2pdf",
                "No support for RGB image %s with %u samples per pixel",
                tmp___17, (int )t2p->tiff_samplesperpixel);
      t2p->t2p_error = (t2p_err_t )1;
      break;
    }
  } else {
    tmp___18 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "No support for RGB image %s with %u samples per pixel", tmp___18,
              (int )t2p->tiff_samplesperpixel);
    t2p->t2p_error = (t2p_err_t )1;
    break;
  }
  photometric_palette: 
  case 3: 
  if ((int )t2p->tiff_samplesperpixel != 1) {
    tmp___19 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "No support for palettized image %s with not one sample per pixel",
              tmp___19);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  t2p->pdf_colorspace = (t2p_cs_t )4100;
  t2p->pdf_palettesize = (uint16 )(1 << (int )t2p->tiff_bitspersample);
  tmp___21 = TIFFGetField(input, (uint32 )320, & r, & g, & b);
  if (tmp___21) {

  } else {
    tmp___20 = TIFFFileName(input);
    TIFFError("tiff2pdf", "Palettized image %s has no color map", tmp___20);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  }
  if ((unsigned int )t2p->pdf_palette != (unsigned int )((void *)0)) {
    _TIFFfree((void *)t2p->pdf_palette);
    t2p->pdf_palette = (unsigned char *)((void *)0);
  } else {

  }
  tmp___22 = _TIFFmalloc((tmsize_t )((int )t2p->pdf_palettesize * 3));
  t2p->pdf_palette = (unsigned char *)tmp___22;
  if ((unsigned int )t2p->pdf_palette == (unsigned int )((void *)0)) {
    tmp___23 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "Can\'t allocate %u bytes of memory for t2p_read_tiff_image, %s",
              (int )t2p->pdf_palettesize, tmp___23);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  i = 0;
  while (i < (int )t2p->pdf_palettesize) {
    *(t2p->pdf_palette + i * 3) = (unsigned char )((int )*(r + i) >> 8);
    *(t2p->pdf_palette + (i * 3 + 1)) = (unsigned char )((int )*(g + i) >> 8);
    *(t2p->pdf_palette + (i * 3 + 2)) = (unsigned char )((int )*(b + i) >> 8);
    i ++;
  }
  t2p->pdf_palettesize = (uint16 )((int )t2p->pdf_palettesize * 3);
  break;
  case 5: 
  tmp___24 = TIFFGetField(input, (uint32 )346, & xuint16);
  if (tmp___24) {
    if ((int )xuint16 == 1) {
      goto photometric_palette_cmyk;
    } else {

    }
  } else {

  }
  tmp___26 = TIFFGetField(input, (uint32 )332, & xuint16);
  if (tmp___26) {
    if ((int )xuint16 != 1) {
      tmp___25 = TIFFFileName(input);
      TIFFError("tiff2pdf", "No support for %s because its inkset is not CMYK",
                tmp___25);
      t2p->t2p_error = (t2p_err_t )1;
      return;
    } else {

    }
  } else {

  }
  if ((int )t2p->tiff_samplesperpixel == 4) {
    t2p->pdf_colorspace = (t2p_cs_t )8;
  } else {
    tmp___27 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "No support for %s because it has %u samples per pixel", tmp___27,
              (int )t2p->tiff_samplesperpixel);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  }
  break;
  photometric_palette_cmyk: 
  if ((int )t2p->tiff_samplesperpixel != 1) {
    tmp___28 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "No support for palettized CMYK image %s with not one sample per pixel",
              tmp___28);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  t2p->pdf_colorspace = (t2p_cs_t )4104;
  t2p->pdf_palettesize = (uint16 )(1 << (int )t2p->tiff_bitspersample);
  tmp___30 = TIFFGetField(input, (uint32 )320, & r, & g, & b, & a);
  if (tmp___30) {

  } else {
    tmp___29 = TIFFFileName(input);
    TIFFError("tiff2pdf", "Palettized image %s has no color map", tmp___29);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  }
  if ((unsigned int )t2p->pdf_palette != (unsigned int )((void *)0)) {
    _TIFFfree((void *)t2p->pdf_palette);
    t2p->pdf_palette = (unsigned char *)((void *)0);
  } else {

  }
  tmp___31 = _TIFFmalloc((tmsize_t )((int )t2p->pdf_palettesize * 4));
  t2p->pdf_palette = (unsigned char *)tmp___31;
  if ((unsigned int )t2p->pdf_palette == (unsigned int )((void *)0)) {
    tmp___32 = TIFFFileName(input);
    TIFFError("tiff2pdf",
              "Can\'t allocate %u bytes of memory for t2p_read_tiff_image, %s",
              (int )t2p->pdf_palettesize, tmp___32);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  } else {

  }
  i = 0;
  while (i < (int )t2p->pdf_palettesize) {
    *(t2p->pdf_palette + i * 4) = (unsigned char )((int )*(r + i) >> 8);
    *(t2p->pdf_palette + (i * 4 + 1)) = (unsigned char )((int )*(g + i) >> 8);
    *(t2p->pdf_palette + (i * 4 + 2)) = (unsigned char )((int )*(b + i) >> 8);
    *(t2p->pdf_palette + (i * 4 + 3)) = (unsigned char )((int )*(a + i) >> 8);
    i ++;
  }
  t2p->pdf_palettesize = (uint16 )((int )t2p->pdf_palettesize * 4);
  break;
  case 6: 
  t2p->pdf_colorspace = (t2p_cs_t )4;
  if ((int )t2p->tiff_samplesperpixel == 1) {
    t2p->pdf_colorspace = (t2p_cs_t )2;
    t2p->tiff_photometric = (uint16 )1;
    break;
  } else {

  }
  t2p->pdf_sample = (t2p_sample_t )8;
  break;
  case 8: 
  t2p->pdf_labrange[0] = -127;
  t2p->pdf_labrange[1] = 127;
  t2p->pdf_labrange[2] = -127;
  t2p->pdf_labrange[3] = 127;
  t2p->pdf_sample = (t2p_sample_t )64;
  t2p->pdf_colorspace = (t2p_cs_t )16;
  break;
  case 9: 
  t2p->pdf_labrange[0] = 0;
  t2p->pdf_labrange[1] = 255;
  t2p->pdf_labrange[2] = 0;
  t2p->pdf_labrange[3] = 255;
  t2p->pdf_colorspace = (t2p_cs_t )16;
  break;
  case 10: 
  t2p->pdf_labrange[0] = -85;
  t2p->pdf_labrange[1] = 85;
  t2p->pdf_labrange[2] = -75;
  t2p->pdf_labrange[3] = 124;
  t2p->pdf_sample = (t2p_sample_t )64;
  t2p->pdf_colorspace = (t2p_cs_t )16;
  break;
  case 32845: 
  case 32844: 
  tmp___33 = TIFFFileName(input);
  TIFFError("tiff2pdf",
            "No support for %s with photometric interpretation LogL/LogLuv",
            tmp___33);
  t2p->t2p_error = (t2p_err_t )1;
  return;
  default: 
  tmp___34 = TIFFFileName(input);
  TIFFError("tiff2pdf", "No support for %s with photometric interpretation %u",
            tmp___34, (int )t2p->tiff_photometric);
  t2p->t2p_error = (t2p_err_t )1;
  return;
  }
  tmp___38 = TIFFGetField(input, (uint32 )284, & t2p->tiff_planar);
  if (tmp___38) {
    switch ((int )t2p->tiff_planar) {
    case 0: 
    tmp___35 = TIFFFileName(input);
    TIFFWarning("tiff2pdf", "Image %s has planar configuration 0, assuming 1",
                tmp___35);
    t2p->tiff_planar = (uint16 )1;
    case 1: 
    break;
    case 2: 
    t2p->pdf_sample = (t2p_sample_t )256;
    if ((int )t2p->tiff_bitspersample != 8) {
      tmp___36 = TIFFFileName(input);
      TIFFError("tiff2pdf",
                "No support for %s with separated planar configuration and %u bits per sample",
                tmp___36, (int )t2p->tiff_bitspersample);
      t2p->t2p_error = (t2p_err_t )1;
      return;
    } else {

    }
    break;
    default: 
    tmp___37 = TIFFFileName(input);
    TIFFError("tiff2pdf", "No support for %s with planar configuration %u",
              tmp___37, (int )t2p->tiff_planar);
    t2p->t2p_error = (t2p_err_t )1;
    return;
    }
  } else {

  }
  TIFFGetFieldDefaulted(input, (uint32 )274, & t2p->tiff_orientation);
  if ((int )t2p->tiff_orientation > 8) {
    tmp___39 = TIFFFileName(input);
    TIFFWarning("tiff2pdf", "Image %s has orientation %u, assuming 0", tmp___39,
                (int )t2p->tiff_orientation);
    t2p->tiff_orientation = (uint16 )0;
  } else {

  }
  tmp___40 = TIFFGetField(input, (uint32 )282, & t2p->tiff_xres);
  if (tmp___40 == 0) {
    t2p->tiff_xres = (float )0.0;
  } else {

  }
  tmp___41 = TIFFGetField(input, (uint32 )283, & t2p->tiff_yres);
  if (tmp___41 == 0) {
    t2p->tiff_yres = (float )0.0;
  } else {

  }
  TIFFGetFieldDefaulted(input, (uint32 )296, & t2p->tiff_resunit);
  if ((int )t2p->tiff_resunit == 3) {
    t2p->tiff_xres *= 2.54F;
    t2p->tiff_yres *= 2.54F;
  } else
  if ((int )t2p->tiff_resunit != 2) {
    if ((int )t2p->pdf_centimeters != 0) {
      t2p->tiff_xres *= 2.54F;
      t2p->tiff_yres *= 2.54F;
    } else {

    }
  } else {

  }
  t2p_compose_pdf_page(t2p);
  t2p->pdf_transcode = (t2p_transcode_t )2;
  if ((int )t2p->pdf_nopassthrough == 0) {
    if ((int )t2p->tiff_compression == 4) {
      tmp___42 = TIFFIsTiled(input);
      if (tmp___42) {
        t2p->pdf_transcode = (t2p_transcode_t )1;
        t2p->pdf_compression = (t2p_compress_t )1;
      } else {
        tmp___43 = TIFFNumberOfStrips(input);
        if (tmp___43 == 1U) {
          t2p->pdf_transcode = (t2p_transcode_t )1;
          t2p->pdf_compression = (t2p_compress_t )1;
        } else {

        }
      }
    } else {

    }
    if ((int )t2p->tiff_compression == 8) {
      goto _L;
    } else
    if ((int )t2p->tiff_compression == 32946) {
      _L: /* CIL Label */ 
      tmp___44 = TIFFIsTiled(input);
      if (tmp___44) {
        t2p->pdf_transcode = (t2p_transcode_t )1;
        t2p->pdf_compression = (t2p_compress_t )4;
      } else {
        tmp___45 = TIFFNumberOfStrips(input);
        if (tmp___45 == 1U) {
          t2p->pdf_transcode = (t2p_transcode_t )1;
          t2p->pdf_compression = (t2p_compress_t )4;
        } else {

        }
      }
    } else {

    }
  } else {

  }
  if ((unsigned int )t2p->pdf_transcode != 1U) {
    t2p->pdf_compression = t2p->pdf_defaultcompression;
  } else {

  }
  if ((unsigned int )t2p->pdf_sample & 32U) {
    if ((unsigned int )t2p->pdf_colorspace & 8U) {
      t2p->tiff_samplesperpixel = (uint16 )4;
      t2p->tiff_photometric = (uint16 )5;
    } else {
      t2p->tiff_samplesperpixel = (uint16 )3;
      t2p->tiff_photometric = (uint16 )2;
    }
  } else {

  }
  tmp___46 = TIFFGetField(input, (uint32 )301, & t2p->tiff_transferfunction[0],
                          & t2p->tiff_transferfunction[1],
                          & t2p->tiff_transferfunction[2]);
  if (tmp___46) {
    if ((unsigned int )t2p->tiff_transferfunction[1] != (unsigned int )t2p->tiff_transferfunction[0]) {
      t2p->tiff_transferfunctioncount = (uint16 )3;
    } else {
      t2p->tiff_transferfunctioncount = (uint16 )1;
    }
  } else {
    t2p->tiff_transferfunctioncount = (uint16 )0;
  }
  tmp___47 = TIFFGetField(input, (uint32 )318, & xfloatp);
  if (tmp___47 != 0) {
    t2p->tiff_whitechromaticities[0] = *(xfloatp + 0);
    t2p->tiff_whitechromaticities[1] = *(xfloatp + 1);
    if ((unsigned int )t2p->pdf_colorspace & 2U) {
      t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace | 32U);
    } else {

    }
    if ((unsigned int )t2p->pdf_colorspace & 4U) {
      t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace | 64U);
    } else {

    }
  } else {

  }
  tmp___48 = TIFFGetField(input, (uint32 )319, & xfloatp);
  if (tmp___48 != 0) {
    t2p->tiff_primarychromaticities[0] = *(xfloatp + 0);
    t2p->tiff_primarychromaticities[1] = *(xfloatp + 1);
    t2p->tiff_primarychromaticities[2] = *(xfloatp + 2);
    t2p->tiff_primarychromaticities[3] = *(xfloatp + 3);
    t2p->tiff_primarychromaticities[4] = *(xfloatp + 4);
    t2p->tiff_primarychromaticities[5] = *(xfloatp + 5);
    if ((unsigned int )t2p->pdf_colorspace & 4U) {
      t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace | 64U);
    } else {

    }
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 16U) {
    tmp___49 = TIFFGetField(input, (uint32 )318, & xfloatp);
    if (tmp___49 != 0) {
      t2p->tiff_whitechromaticities[0] = *(xfloatp + 0);
      t2p->tiff_whitechromaticities[1] = *(xfloatp + 1);
    } else {
      t2p->tiff_whitechromaticities[0] = 0.3457F;
      t2p->tiff_whitechromaticities[1] = 0.3585F;
    }
  } else {

  }
  tmp___50 = TIFFGetField(input, (uint32 )34675, & t2p->tiff_iccprofilelength,
                          & t2p->tiff_iccprofile);
  if (tmp___50 != 0) {
    t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace | 128U);
  } else {
    t2p->tiff_iccprofilelength = (uint32 )0;
    t2p->tiff_iccprofile = (void *)0;
  }
  if ((int )t2p->tiff_bitspersample == 1) {
    if ((int )t2p->tiff_samplesperpixel == 1) {
      t2p->pdf_compression = (t2p_compress_t )1;
    } else {

    }
  } else {

  }
  return;
}
}
void t2p_read_tiff_size(T2P *t2p , TIFF *input ) 
{ 
  uint64 *sbc ;
  tmsize_t tmp ;

  {
  sbc = (uint64 *)((void *)0);
  if ((unsigned int )t2p->pdf_transcode == 1U) {
    if ((unsigned int )t2p->pdf_compression == 1U) {
      TIFFGetField(input, (uint32 )279, & sbc);
      t2p->tiff_datasize = (tmsize_t )*(sbc + 0);
      return;
    } else {

    }
    if ((unsigned int )t2p->pdf_compression == 4U) {
      TIFFGetField(input, (uint32 )279, & sbc);
      t2p->tiff_datasize = (tmsize_t )*(sbc + 0);
      return;
    } else {

    }
  } else {

  }
  tmp = TIFFScanlineSize(input);
  t2p->tiff_datasize = (tsize_t )((unsigned long )tmp * (unsigned long )t2p->tiff_length);
  if ((int )t2p->tiff_planar == 2) {
    t2p->tiff_datasize *= (tsize_t )t2p->tiff_samplesperpixel;
  } else {

  }
  return;
}
}
void t2p_read_tiff_size_tile(T2P *t2p , TIFF *input , ttile_t tile ) 
{ 
  uint64 *tbc ;
  uint16 edge ;
  int tmp ;
  int tmp___0 ;

  {
  tbc = (uint64 *)((void *)0);
  edge = (uint16 )0;
  tmp = t2p_tile_is_right_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  edge = (uint16 )((int )edge | tmp);
  tmp___0 = t2p_tile_is_bottom_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  edge = (uint16 )((int )edge | tmp___0);
  if ((unsigned int )t2p->pdf_transcode == 1U) {
    if (edge) {
      t2p->tiff_datasize = TIFFTileSize(input);
      return;
    } else {
      TIFFGetField(input, (uint32 )325, & tbc);
      t2p->tiff_datasize = (tmsize_t )*(tbc + tile);
      return;
    }
  } else {

  }
  t2p->tiff_datasize = TIFFTileSize(input);
  if ((int )t2p->tiff_planar == 2) {
    t2p->tiff_datasize *= (tsize_t )t2p->tiff_samplesperpixel;
  } else {

  }
  return;
}
}
int t2p_tile_is_right_edge(T2P_TILES tiles , ttile_t tile ) 
{ 


  {
  if ((tile + 1U) % tiles.tiles_tilecountx == 0U) {
    if (tiles.tiles_edgetilewidth != 0U) {
      return (1);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}
int t2p_tile_is_bottom_edge(T2P_TILES tiles , ttile_t tile ) 
{ 


  {
  if (tile + 1U > tiles.tiles_tilecount - tiles.tiles_tilecountx) {
    if (tiles.tiles_edgetilelength != 0U) {
      return (1);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}
int t2p_tile_is_edge(T2P_TILES tiles , ttile_t tile ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  tmp = t2p_tile_is_right_edge(tiles, tile);
  tmp___0 = t2p_tile_is_bottom_edge(tiles, tile);
  return (tmp | tmp___0);
}
}
int t2p_tile_is_corner_edge(T2P_TILES tiles , ttile_t tile ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  tmp = t2p_tile_is_right_edge(tiles, tile);
  tmp___0 = t2p_tile_is_bottom_edge(tiles, tile);
  return (tmp & tmp___0);
}
}
tsize_t t2p_readwrite_pdf_image(T2P *t2p , TIFF *input , TIFF *output ) 
{ 
  tsize_t written ;
  unsigned char *buffer ;
  unsigned char *samplebuffer ;
  tsize_t bufferoffset ;
  tsize_t samplebufferoffset ;
  tsize_t read___0 ;
  tstrip_t i ;
  tstrip_t j ;
  tstrip_t stripcount ;
  tsize_t stripsize ;
  tsize_t sepstripcount ;
  tsize_t sepstripsize ;
  void *tmp ;
  char const   *tmp___0 ;
  void *tmp___1 ;
  char const   *tmp___2 ;
  void *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  uint32 tmp___6 ;
  void *tmp___7 ;
  char const   *tmp___8 ;
  void *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  void *tmp___12 ;
  char const   *tmp___13 ;
  char const   *tmp___14 ;
  void *tmp___15 ;
  char const   *tmp___16 ;
  void *tmp___17 ;
  char const   *tmp___18 ;
  char const   *tmp___19 ;
  int tmp___20 ;
  char const   *tmp___21 ;

  {
  written = (tsize_t )0;
  buffer = (unsigned char *)((void *)0);
  samplebuffer = (unsigned char *)((void *)0);
  bufferoffset = (tsize_t )0;
  samplebufferoffset = (tsize_t )0;
  read___0 = (tsize_t )0;
  i = (tstrip_t )0;
  j = (tstrip_t )0;
  stripcount = (tstrip_t )0;
  stripsize = (tsize_t )0;
  sepstripcount = (tsize_t )0;
  sepstripsize = (tsize_t )0;
  if ((unsigned int )t2p->pdf_transcode == 1U) {
    if ((unsigned int )t2p->pdf_compression == 1U) {
      tmp = _TIFFmalloc(t2p->tiff_datasize);
      buffer = (unsigned char *)tmp;
      if ((unsigned int )buffer == (unsigned int )((void *)0)) {
        tmp___0 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___0);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      TIFFReadRawStrip(input, (uint32 )0, (tdata_t )buffer, t2p->tiff_datasize);
      if ((int )t2p->tiff_fillorder == 2) {
        TIFFReverseBits(buffer, t2p->tiff_datasize);
      } else {

      }
      t2pWriteFile(output, (tdata_t )buffer, t2p->tiff_datasize);
      _TIFFfree((void *)buffer);
      return (t2p->tiff_datasize);
    } else {

    }
    if ((unsigned int )t2p->pdf_compression == 4U) {
      tmp___1 = _TIFFmalloc(t2p->tiff_datasize);
      buffer = (unsigned char *)tmp___1;
      if ((unsigned int )buffer == (unsigned int )((void *)0)) {
        tmp___2 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___2);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      memset((void *)buffer, 0, (size_t )t2p->tiff_datasize);
      TIFFReadRawStrip(input, (uint32 )0, (tdata_t )buffer, t2p->tiff_datasize);
      if ((int )t2p->tiff_fillorder == 2) {
        TIFFReverseBits(buffer, t2p->tiff_datasize);
      } else {

      }
      t2pWriteFile(output, (tdata_t )buffer, t2p->tiff_datasize);
      _TIFFfree((void *)buffer);
      return (t2p->tiff_datasize);
    } else {

    }
  } else {

  }
  if ((unsigned int )t2p->pdf_sample == 0U) {
    tmp___3 = _TIFFmalloc(t2p->tiff_datasize);
    buffer = (unsigned char *)tmp___3;
    if ((unsigned int )buffer == (unsigned int )((void *)0)) {
      tmp___4 = TIFFFileName(input);
      TIFFError("tiff2pdf",
                "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                (unsigned long )t2p->tiff_datasize, tmp___4);
      t2p->t2p_error = (t2p_err_t )1;
      return ((tsize_t )0);
    } else {

    }
    memset((void *)buffer, 0, (size_t )t2p->tiff_datasize);
    stripsize = TIFFStripSize(input);
    stripcount = TIFFNumberOfStrips(input);
    i = (tstrip_t )0;
    while (i < stripcount) {
      read___0 = TIFFReadEncodedStrip(input, i,
                                      (tdata_t )(buffer + bufferoffset),
                                      stripsize);
      if (read___0 == -1L) {
        tmp___5 = TIFFFileName(input);
        TIFFError("tiff2pdf", "Error on decoding strip %u of %s", i, tmp___5);
        _TIFFfree((void *)buffer);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      bufferoffset += read___0;
      i ++;
    }
  } else {
    if ((unsigned int )t2p->pdf_sample & 256U) {
      sepstripsize = TIFFStripSize(input);
      tmp___6 = TIFFNumberOfStrips(input);
      sepstripcount = (tsize_t )tmp___6;
      stripsize = sepstripsize * (tsize_t )t2p->tiff_samplesperpixel;
      stripcount = (tstrip_t )(sepstripcount / (tsize_t )t2p->tiff_samplesperpixel);
      tmp___7 = _TIFFmalloc(t2p->tiff_datasize);
      buffer = (unsigned char *)tmp___7;
      if ((unsigned int )buffer == (unsigned int )((void *)0)) {
        tmp___8 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___8);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      memset((void *)buffer, 0, (size_t )t2p->tiff_datasize);
      tmp___9 = _TIFFmalloc(stripsize);
      samplebuffer = (unsigned char *)tmp___9;
      if ((unsigned int )samplebuffer == (unsigned int )((void *)0)) {
        tmp___10 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___10);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      i = (tstrip_t )0;
      while (i < stripcount) {
        samplebufferoffset = (tsize_t )0;
        j = (tstrip_t )0;
        while (j < (tstrip_t )t2p->tiff_samplesperpixel) {
          read___0 = TIFFReadEncodedStrip(input, i + j * stripcount,
                                          (tdata_t )(samplebuffer + samplebufferoffset),
                                          sepstripsize);
          if (read___0 == -1L) {
            tmp___11 = TIFFFileName(input);
            TIFFError("tiff2pdf", "Error on decoding strip %u of %s",
                      i + j * stripcount, tmp___11);
            _TIFFfree((void *)buffer);
            t2p->t2p_error = (t2p_err_t )1;
            return ((tsize_t )0);
          } else {

          }
          samplebufferoffset += read___0;
          j ++;
        }
        t2p_sample_planar_separate_to_contig(t2p, buffer + bufferoffset,
                                             samplebuffer, samplebufferoffset);
        bufferoffset += samplebufferoffset;
        i ++;
      }
      _TIFFfree((void *)samplebuffer);
      goto dataready;
    } else {

    }
    tmp___12 = _TIFFmalloc(t2p->tiff_datasize);
    buffer = (unsigned char *)tmp___12;
    if ((unsigned int )buffer == (unsigned int )((void *)0)) {
      tmp___13 = TIFFFileName(input);
      TIFFError("tiff2pdf",
                "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                (unsigned long )t2p->tiff_datasize, tmp___13);
      t2p->t2p_error = (t2p_err_t )1;
      return ((tsize_t )0);
    } else {

    }
    memset((void *)buffer, 0, (size_t )t2p->tiff_datasize);
    stripsize = TIFFStripSize(input);
    stripcount = TIFFNumberOfStrips(input);
    i = (tstrip_t )0;
    while (i < stripcount) {
      read___0 = TIFFReadEncodedStrip(input, i,
                                      (tdata_t )(buffer + bufferoffset),
                                      stripsize);
      if (read___0 == -1L) {
        tmp___14 = TIFFFileName(input);
        TIFFError("tiff2pdf", "Error on decoding strip %u of %s", i, tmp___14);
        _TIFFfree((void *)samplebuffer);
        _TIFFfree((void *)buffer);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      bufferoffset += read___0;
      i ++;
    }
    if ((unsigned int )t2p->pdf_sample & 32U) {
      tmp___15 = _TIFFrealloc((tdata_t )buffer,
                              t2p->tiff_datasize * (tsize_t )t2p->tiff_samplesperpixel);
      samplebuffer = (unsigned char *)tmp___15;
      if ((unsigned int )samplebuffer == (unsigned int )((void *)0)) {
        tmp___16 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___16);
        t2p->t2p_error = (t2p_err_t )1;
        _TIFFfree((void *)buffer);
      } else {
        buffer = samplebuffer;
        t2p->tiff_datasize *= (tsize_t )t2p->tiff_samplesperpixel;
      }
      t2p_sample_realize_palette(t2p, buffer);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 2U) {
      t2p->tiff_datasize = t2p_sample_rgba_to_rgb((tdata_t )buffer,
                                                  t2p->tiff_width * t2p->tiff_length);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 4U) {
      t2p->tiff_datasize = t2p_sample_rgbaa_to_rgb((tdata_t )buffer,
                                                   t2p->tiff_width * t2p->tiff_length);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 8U) {
      tmp___17 = _TIFFrealloc((tdata_t )buffer,
                              (tmsize_t )((t2p->tiff_width * t2p->tiff_length) * 4U));
      samplebuffer = (unsigned char *)tmp___17;
      if ((unsigned int )samplebuffer == (unsigned int )((void *)0)) {
        tmp___18 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___18);
        t2p->t2p_error = (t2p_err_t )1;
        _TIFFfree((void *)buffer);
        return ((tsize_t )0);
      } else {
        buffer = samplebuffer;
      }
      tmp___20 = TIFFReadRGBAImageOriented(input, t2p->tiff_width,
                                           t2p->tiff_length, (uint32 *)buffer,
                                           1, 0);
      if (tmp___20) {

      } else {
        tmp___19 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t use TIFFReadRGBAImageOriented to extract RGB image from %s",
                  tmp___19);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      }
      t2p->tiff_datasize = t2p_sample_abgr_to_rgb((tdata_t )buffer,
                                                  t2p->tiff_width * t2p->tiff_length);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 64U) {
      t2p->tiff_datasize = t2p_sample_lab_signed_to_unsigned((tdata_t )buffer,
                                                             t2p->tiff_width * t2p->tiff_length);
    } else {

    }
  }
  dataready: 
  t2p_disable(output);
  TIFFSetField(output, (uint32 )262, (int )t2p->tiff_photometric);
  TIFFSetField(output, (uint32 )258, (int )t2p->tiff_bitspersample);
  TIFFSetField(output, (uint32 )277, (int )t2p->tiff_samplesperpixel);
  TIFFSetField(output, (uint32 )256, t2p->tiff_width);
  TIFFSetField(output, (uint32 )257, t2p->tiff_length);
  TIFFSetField(output, (uint32 )278, t2p->tiff_length);
  TIFFSetField(output, (uint32 )284, 1);
  TIFFSetField(output, (uint32 )266, 1);
  switch ((unsigned int )t2p->pdf_compression) {
  case 0U: 
  TIFFSetField(output, (uint32 )259, 1);
  break;
  case 1U: 
  TIFFSetField(output, (uint32 )259, 4);
  break;
  case 4U: 
  TIFFSetField(output, (uint32 )259, 32946);
  if ((int )t2p->pdf_defaultcompressionquality % 100 != 0) {
    TIFFSetField(output, (uint32 )317,
                 (int )t2p->pdf_defaultcompressionquality % 100);
  } else {

  }
  if ((int )t2p->pdf_defaultcompressionquality / 100 != 0) {
    TIFFSetField(output, (uint32 )65557,
                 (int )t2p->pdf_defaultcompressionquality / 100);
  } else {

  }
  break;
  default: 
  break;
  }
  t2p_enable(output);
  t2p->outputwritten = (tsize_t )0;
  bufferoffset = TIFFWriteEncodedStrip(output, (tstrip_t )0, (void *)buffer,
                                       t2p->tiff_datasize);
  if ((unsigned int )buffer != (unsigned int )((void *)0)) {
    _TIFFfree((void *)buffer);
    buffer = (unsigned char *)((void *)0);
  } else {

  }
  if (bufferoffset == -1L) {
    tmp___21 = TIFFFileName(output);
    TIFFError("tiff2pdf", "Error writing encoded strip to output PDF %s",
              tmp___21);
    t2p->t2p_error = (t2p_err_t )1;
    return ((tsize_t )0);
  } else {

  }
  written = t2p->outputwritten;
  return (written);
}
}
tsize_t t2p_readwrite_pdf_image_tile(T2P *t2p , TIFF *input , TIFF *output ,
                                     ttile_t tile ) 
{ 
  uint16 edge ;
  tsize_t written ;
  unsigned char *buffer ;
  tsize_t bufferoffset ;
  unsigned char *samplebuffer ;
  tsize_t samplebufferoffset ;
  tsize_t read___0 ;
  uint16 i ;
  ttile_t tilecount ;
  tsize_t tilesize ;
  ttile_t septilecount ;
  tsize_t septilesize ;
  int tmp ;
  int tmp___0 ;
  void *tmp___1 ;
  char const   *tmp___2 ;
  void *tmp___3 ;
  char const   *tmp___4 ;
  void *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  void *tmp___8 ;
  char const   *tmp___9 ;
  void *tmp___10 ;
  char const   *tmp___11 ;
  char const   *tmp___12 ;
  void *tmp___13 ;
  char const   *tmp___14 ;
  char const   *tmp___15 ;
  char const   *tmp___16 ;
  tmsize_t tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  tmsize_t tmp___21 ;
  char const   *tmp___22 ;

  {
  edge = (uint16 )0;
  written = (tsize_t )0;
  buffer = (unsigned char *)((void *)0);
  bufferoffset = (tsize_t )0;
  samplebuffer = (unsigned char *)((void *)0);
  samplebufferoffset = (tsize_t )0;
  read___0 = (tsize_t )0;
  i = (uint16 )0;
  tilecount = (ttile_t )0;
  tilesize = (tsize_t )0;
  septilecount = (ttile_t )0;
  septilesize = (tsize_t )0;
  tmp = t2p_tile_is_right_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  edge = (uint16 )((int )edge | tmp);
  tmp___0 = t2p_tile_is_bottom_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  edge = (uint16 )((int )edge | tmp___0);
  if ((unsigned int )t2p->pdf_transcode == 1U) {
    if ((int )edge == 0) {
      if ((unsigned int )t2p->pdf_compression == 1U) {
        tmp___1 = _TIFFmalloc(t2p->tiff_datasize);
        buffer = (unsigned char *)tmp___1;
        if ((unsigned int )buffer == (unsigned int )((void *)0)) {
          tmp___2 = TIFFFileName(input);
          TIFFError("tiff2pdf",
                    "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image_tile, %s",
                    (unsigned long )t2p->tiff_datasize, tmp___2);
          t2p->t2p_error = (t2p_err_t )1;
          return ((tsize_t )0);
        } else {

        }
        TIFFReadRawTile(input, tile, (tdata_t )buffer, t2p->tiff_datasize);
        if ((int )t2p->tiff_fillorder == 2) {
          TIFFReverseBits(buffer, t2p->tiff_datasize);
        } else {

        }
        t2pWriteFile(output, (tdata_t )buffer, t2p->tiff_datasize);
        _TIFFfree((void *)buffer);
        return (t2p->tiff_datasize);
      } else {

      }
      if ((unsigned int )t2p->pdf_compression == 4U) {
        tmp___3 = _TIFFmalloc(t2p->tiff_datasize);
        buffer = (unsigned char *)tmp___3;
        if ((unsigned int )buffer == (unsigned int )((void *)0)) {
          tmp___4 = TIFFFileName(input);
          TIFFError("tiff2pdf",
                    "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image_tile, %s",
                    (unsigned long )t2p->tiff_datasize, tmp___4);
          t2p->t2p_error = (t2p_err_t )1;
          return ((tsize_t )0);
        } else {

        }
        TIFFReadRawTile(input, tile, (tdata_t )buffer, t2p->tiff_datasize);
        if ((int )t2p->tiff_fillorder == 2) {
          TIFFReverseBits(buffer, t2p->tiff_datasize);
        } else {

        }
        t2pWriteFile(output, (tdata_t )buffer, t2p->tiff_datasize);
        _TIFFfree((void *)buffer);
        return (t2p->tiff_datasize);
      } else {

      }
    } else {

    }
  } else {

  }
  if ((unsigned int )t2p->pdf_sample == 0U) {
    tmp___5 = _TIFFmalloc(t2p->tiff_datasize);
    buffer = (unsigned char *)tmp___5;
    if ((unsigned int )buffer == (unsigned int )((void *)0)) {
      tmp___6 = TIFFFileName(input);
      TIFFError("tiff2pdf",
                "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image_tile, %s",
                (unsigned long )t2p->tiff_datasize, tmp___6);
      t2p->t2p_error = (t2p_err_t )1;
      return ((tsize_t )0);
    } else {

    }
    read___0 = TIFFReadEncodedTile(input, tile,
                                   (tdata_t )(buffer + bufferoffset),
                                   t2p->tiff_datasize);
    if (read___0 == -1L) {
      tmp___7 = TIFFFileName(input);
      TIFFError("tiff2pdf", "Error on decoding tile %u of %s", tile, tmp___7);
      _TIFFfree((void *)buffer);
      t2p->t2p_error = (t2p_err_t )1;
      return ((tsize_t )0);
    } else {

    }
  } else {
    if ((unsigned int )t2p->pdf_sample == 256U) {
      septilesize = TIFFTileSize(input);
      septilecount = TIFFNumberOfTiles(input);
      tilesize = septilesize * (tsize_t )t2p->tiff_samplesperpixel;
      tilecount = septilecount / (ttile_t )t2p->tiff_samplesperpixel;
      tmp___8 = _TIFFmalloc(t2p->tiff_datasize);
      buffer = (unsigned char *)tmp___8;
      if ((unsigned int )buffer == (unsigned int )((void *)0)) {
        tmp___9 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image_tile, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___9);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      tmp___10 = _TIFFmalloc(t2p->tiff_datasize);
      samplebuffer = (unsigned char *)tmp___10;
      if ((unsigned int )samplebuffer == (unsigned int )((void *)0)) {
        tmp___11 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image_tile, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___11);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      samplebufferoffset = (tsize_t )0;
      i = (uint16 )0;
      while ((int )i < (int )t2p->tiff_samplesperpixel) {
        read___0 = TIFFReadEncodedTile(input, tile + (ttile_t )i * tilecount,
                                       (tdata_t )(samplebuffer + samplebufferoffset),
                                       septilesize);
        if (read___0 == -1L) {
          tmp___12 = TIFFFileName(input);
          TIFFError("tiff2pdf", "Error on decoding tile %u of %s",
                    tile + (ttile_t )i * tilecount, tmp___12);
          _TIFFfree((void *)samplebuffer);
          _TIFFfree((void *)buffer);
          t2p->t2p_error = (t2p_err_t )1;
          return ((tsize_t )0);
        } else {

        }
        samplebufferoffset += read___0;
        i = (uint16 )((int )i + 1);
      }
      t2p_sample_planar_separate_to_contig(t2p, buffer + bufferoffset,
                                           samplebuffer, samplebufferoffset);
      bufferoffset += samplebufferoffset;
      _TIFFfree((void *)samplebuffer);
    } else {

    }
    if ((unsigned int )buffer == (unsigned int )((void *)0)) {
      tmp___13 = _TIFFmalloc(t2p->tiff_datasize);
      buffer = (unsigned char *)tmp___13;
      if ((unsigned int )buffer == (unsigned int )((void *)0)) {
        tmp___14 = TIFFFileName(input);
        TIFFError("tiff2pdf",
                  "Can\'t allocate %lu bytes of memory for t2p_readwrite_pdf_image_tile, %s",
                  (unsigned long )t2p->tiff_datasize, tmp___14);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
      read___0 = TIFFReadEncodedTile(input, tile,
                                     (tdata_t )(buffer + bufferoffset),
                                     t2p->tiff_datasize);
      if (read___0 == -1L) {
        tmp___15 = TIFFFileName(input);
        TIFFError("tiff2pdf", "Error on decoding tile %u of %s", tile, tmp___15);
        _TIFFfree((void *)buffer);
        t2p->t2p_error = (t2p_err_t )1;
        return ((tsize_t )0);
      } else {

      }
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 2U) {
      t2p->tiff_datasize = t2p_sample_rgba_to_rgb((tdata_t )buffer,
                                                  (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth * (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 4U) {
      t2p->tiff_datasize = t2p_sample_rgbaa_to_rgb((tdata_t )buffer,
                                                   (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth * (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 8U) {
      tmp___16 = TIFFFileName(input);
      TIFFError("tiff2pdf", "No support for YCbCr to RGB in tile for %s",
                tmp___16);
      _TIFFfree((void *)buffer);
      t2p->t2p_error = (t2p_err_t )1;
      return ((tsize_t )0);
    } else {

    }
    if ((unsigned int )t2p->pdf_sample & 64U) {
      t2p->tiff_datasize = t2p_sample_lab_signed_to_unsigned((tdata_t )buffer,
                                                             (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth * (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
    } else {

    }
  }
  tmp___18 = t2p_tile_is_right_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  if (tmp___18 != 0) {
    tmp___17 = TIFFTileRowSize(input);
    t2p_tile_collapse_left((tdata_t )buffer, tmp___17,
                           (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth,
                           (t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilewidth,
                           (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
  } else {

  }
  t2p_disable(output);
  TIFFSetField(output, (uint32 )262, (int )t2p->tiff_photometric);
  TIFFSetField(output, (uint32 )258, (int )t2p->tiff_bitspersample);
  TIFFSetField(output, (uint32 )277, (int )t2p->tiff_samplesperpixel);
  tmp___19 = t2p_tile_is_right_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  if (tmp___19 == 0) {
    TIFFSetField(output, (uint32 )256,
                 (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth);
  } else {
    TIFFSetField(output, (uint32 )256,
                 (t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilewidth);
  }
  tmp___20 = t2p_tile_is_bottom_edge(*(t2p->tiff_tiles + t2p->pdf_page), tile);
  if (tmp___20 == 0) {
    TIFFSetField(output, (uint32 )257,
                 (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
    TIFFSetField(output, (uint32 )278,
                 (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
  } else {
    TIFFSetField(output, (uint32 )257,
                 (t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilelength);
    TIFFSetField(output, (uint32 )278,
                 (t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilelength);
  }
  TIFFSetField(output, (uint32 )284, 1);
  TIFFSetField(output, (uint32 )266, 1);
  switch ((unsigned int )t2p->pdf_compression) {
  case 0U: 
  TIFFSetField(output, (uint32 )259, 1);
  break;
  case 1U: 
  TIFFSetField(output, (uint32 )259, 4);
  break;
  case 4U: 
  TIFFSetField(output, (uint32 )259, 32946);
  if ((int )t2p->pdf_defaultcompressionquality % 100 != 0) {
    TIFFSetField(output, (uint32 )317,
                 (int )t2p->pdf_defaultcompressionquality % 100);
  } else {

  }
  if ((int )t2p->pdf_defaultcompressionquality / 100 != 0) {
    TIFFSetField(output, (uint32 )65557,
                 (int )t2p->pdf_defaultcompressionquality / 100);
  } else {

  }
  break;
  default: 
  break;
  }
  t2p_enable(output);
  t2p->outputwritten = (tsize_t )0;
  tmp___21 = TIFFStripSize(output);
  bufferoffset = TIFFWriteEncodedStrip(output, (tstrip_t )0, (void *)buffer,
                                       tmp___21);
  if ((unsigned int )buffer != (unsigned int )((void *)0)) {
    _TIFFfree((void *)buffer);
    buffer = (unsigned char *)((void *)0);
  } else {

  }
  if (bufferoffset == -1L) {
    tmp___22 = TIFFFileName(output);
    TIFFError("tiff2pdf", "Error writing encoded tile to output PDF %s",
              tmp___22);
    t2p->t2p_error = (t2p_err_t )1;
    return ((tsize_t )0);
  } else {

  }
  written = t2p->outputwritten;
  return (written);
}
}
void t2p_tile_collapse_left(tdata_t buffer , tsize_t scanwidth ,
                            uint32 tilewidth , uint32 edgetilewidth ,
                            uint32 tilelength ) 
{ 
  uint32 i ;
  tsize_t edgescanwidth ;

  {
  i = (uint32 )0;
  edgescanwidth = (tsize_t )0;
  edgescanwidth = (tsize_t )(((unsigned long )scanwidth * (unsigned long )edgetilewidth + (unsigned long )(tilewidth - 1U)) / (unsigned long )tilewidth);
  i = i;
  while (i < tilelength) {
    _TIFFmemcpy((void *)((char *)buffer + (unsigned long )edgescanwidth * (unsigned long )i),
                (void const   *)((char *)buffer + (unsigned long )scanwidth * (unsigned long )i),
                edgescanwidth);
    i ++;
  }
  return;
}
}
void t2p_write_advance_directory(T2P *t2p , TIFF *output ) 
{ 
  char const   *tmp ;
  int tmp___0 ;

  {
  t2p_disable(output);
  tmp___0 = TIFFWriteDirectory(output);
  if (tmp___0) {

  } else {
    tmp = TIFFFileName(output);
    TIFFError("tiff2pdf", "Error writing virtual directory to output PDF %s",
              tmp);
    t2p->t2p_error = (t2p_err_t )1;
    return;
  }
  t2p_enable(output);
  return;
}
}
tsize_t t2p_sample_planar_separate_to_contig(T2P *t2p , unsigned char *buffer ,
                                             unsigned char *samplebuffer ,
                                             tsize_t samplebuffersize ) 
{ 
  tsize_t stride ;
  tsize_t i ;
  tsize_t j ;

  {
  stride = (tsize_t )0;
  i = (tsize_t )0;
  j = (tsize_t )0;
  stride = samplebuffersize / (tsize_t )t2p->tiff_samplesperpixel;
  i = (tsize_t )0;
  while (i < stride) {
    j = (tsize_t )0;
    while (j < (tsize_t )t2p->tiff_samplesperpixel) {
      *(buffer + (i * (tsize_t )t2p->tiff_samplesperpixel + j)) = *(samplebuffer + (i + j * stride));
      j ++;
    }
    i ++;
  }
  return (samplebuffersize);
}
}
tsize_t t2p_sample_realize_palette(T2P *t2p , unsigned char *buffer ) 
{ 
  uint32 sample_count ;
  uint16 component_count ;
  uint32 palette_offset ;
  uint32 sample_offset ;
  uint32 i ;
  uint32 j ;

  {
  sample_count = (uint32 )0;
  component_count = (uint16 )0;
  palette_offset = (uint32 )0;
  sample_offset = (uint32 )0;
  i = (uint32 )0;
  j = (uint32 )0;
  sample_count = t2p->tiff_width * t2p->tiff_length;
  component_count = t2p->tiff_samplesperpixel;
  i = sample_count;
  while (i > 0U) {
    palette_offset = (uint32 )((int )*(buffer + (i - 1U)) * (int )component_count);
    sample_offset = (i - 1U) * (uint32 )component_count;
    j = (uint32 )0;
    while (j < (uint32 )component_count) {
      *(buffer + (sample_offset + j)) = *(t2p->pdf_palette + (palette_offset + j));
      j ++;
    }
    i --;
  }
  return ((tsize_t )0);
}
}
tsize_t t2p_sample_abgr_to_rgb(tdata_t data , uint32 samplecount ) 
{ 
  uint32 i ;
  uint32 sample ;

  {
  i = (uint32 )0;
  sample = (uint32 )0;
  i = (uint32 )0;
  while (i < samplecount) {
    sample = *((uint32 *)data + i);
    *((char *)data + i * 3U) = (char )(sample & 255U);
    *((char *)data + (i * 3U + 1U)) = (char )((sample >> 8) & 255U);
    *((char *)data + (i * 3U + 2U)) = (char )((sample >> 16) & 255U);
    i ++;
  }
  return ((tsize_t )(i * 3U));
}
}
tsize_t t2p_sample_rgbaa_to_rgb(tdata_t data , uint32 samplecount ) 
{ 
  uint32 i ;

  {
  i = (uint32 )0;
  while (i < samplecount) {
    memcpy((void */* __restrict  */)((uint8 *)data + i * 3U),
           (void const   */* __restrict  */)((uint8 *)data + i * 4U), (size_t )3);
    i ++;
  }
  return ((tsize_t )(i * 3U));
}
}
tsize_t t2p_sample_rgba_to_rgb(tdata_t data , uint32 samplecount ) 
{ 
  uint32 i ;
  uint32 sample ;
  uint8 alpha ;

  {
  i = (uint32 )0;
  sample = (uint32 )0;
  alpha = (uint8 )0;
  i = (uint32 )0;
  while (i < samplecount) {
    sample = *((uint32 *)data + i);
    alpha = (uint8 )(255U - (sample & 255U));
    *((uint8 *)data + i * 3U) = (uint8 )((int )((uint8 )((sample >> 24) & 255U)) + (int )alpha);
    *((uint8 *)data + (i * 3U + 1U)) = (uint8 )((int )((uint8 )((sample >> 16) & 255U)) + (int )alpha);
    *((uint8 *)data + (i * 3U + 2U)) = (uint8 )((int )((uint8 )((sample >> 8) & 255U)) + (int )alpha);
    i ++;
  }
  return ((tsize_t )(i * 3U));
}
}
tsize_t t2p_sample_lab_signed_to_unsigned(tdata_t buffer , uint32 samplecount ) 
{ 
  uint32 i ;

  {
  i = (uint32 )0;
  i = (uint32 )0;
  while (i < samplecount) {
    if (((int )*((unsigned char *)buffer + (i * 3U + 1U)) & 128) != 0) {
      *((unsigned char *)buffer + (i * 3U + 1U)) = (unsigned char )(128 + (int )*((char *)buffer + (i * 3U + 1U)));
    } else {
      *((unsigned char *)buffer + (i * 3U + 1U)) = (unsigned char )((int )*((unsigned char *)buffer + (i * 3U + 1U)) | 128);
    }
    if (((int )*((unsigned char *)buffer + (i * 3U + 2U)) & 128) != 0) {
      *((unsigned char *)buffer + (i * 3U + 2U)) = (unsigned char )(128 + (int )*((char *)buffer + (i * 3U + 2U)));
    } else {
      *((unsigned char *)buffer + (i * 3U + 2U)) = (unsigned char )((int )*((unsigned char *)buffer + (i * 3U + 2U)) | 128);
    }
    i ++;
  }
  return ((tsize_t )(samplecount * 3U));
}
}
tsize_t t2p_write_pdf_header(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%%PDF-%u.%u ",
                   (int )t2p->pdf_majorversion & 255,
                   (int )t2p->pdf_minorversion & 255);
  tmp = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp;
  tmp___0 = t2pWriteFile(output, (tdata_t )"\n%\342\343\317\323\n", (tmsize_t )7);
  written += tmp___0;
  return (written);
}
}
tsize_t t2p_write_pdf_obj_start(uint32 number , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )number);
  tmp = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp;
  tmp___0 = t2pWriteFile(output, (tdata_t )" 0 obj\n", (tmsize_t )7);
  written += tmp___0;
  return (written);
}
}
tsize_t t2p_write_pdf_obj_end(TIFF *output ) 
{ 
  tsize_t written ;
  tmsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2pWriteFile(output, (tdata_t )"endobj\n", (tmsize_t )7);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_name(unsigned char *name , TIFF *output ) 
{ 
  tsize_t written ;
  uint32 i ;
  char buffer[64] ;
  uint16 nextchar ;
  size_t namelen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  tmsize_t tmp___11 ;
  tmsize_t tmp___12 ;
  tmsize_t tmp___13 ;
  tmsize_t tmp___14 ;

  {
  written = (tsize_t )0;
  i = (uint32 )0;
  nextchar = (uint16 )0;
  namelen = (size_t )0;
  namelen = strlen((char const   *)((char *)name));
  if (namelen > 126U) {
    namelen = (size_t )126;
  } else {

  }
  tmp = t2pWriteFile(output, (tdata_t )"/", (tmsize_t )1);
  written += tmp;
  i = (uint32 )0;
  while (i < namelen) {
    if ((int )*(name + i) < 33) {
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___0;
      nextchar = (uint16 )1;
    } else {

    }
    if ((int )*(name + i) > 126) {
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___1 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___1;
      nextchar = (uint16 )1;
    } else {

    }
    if ((int )nextchar == 0) {
      switch ((int )*(name + i)) {
      case 35: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___2 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___2;
      break;
      case 37: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___3 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___3;
      break;
      case 40: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___4 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___4;
      break;
      case 41: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___5 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___5;
      break;
      case 47: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___6 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___6;
      break;
      case 60: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___7 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___7;
      break;
      case 62: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___8 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___8;
      break;
      case 91: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___9 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___9;
      break;
      case 93: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___10 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___10;
      break;
      case 123: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___11 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___11;
      break;
      case 125: 
      sprintf((char */* __restrict  */)(buffer),
              (char const   */* __restrict  */)"#%.2X", (int )*(name + i));
      buffer[sizeof(buffer) - 1U] = (char )'\000';
      tmp___12 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )3);
      written += tmp___12;
      break;
      default: 
      tmp___13 = t2pWriteFile(output, (tdata_t )(name + i), (tmsize_t )1);
      written += tmp___13;
      }
    } else {

    }
    nextchar = (uint16 )0;
    i ++;
  }
  tmp___14 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
  written += tmp___14;
  return (written);
}
}
tsize_t t2p_write_pdf_string(char *pdfstr , TIFF *output ) 
{ 
  tsize_t written ;
  uint32 i ;
  char buffer[64] ;
  size_t len ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;

  {
  written = (tsize_t )0;
  i = (uint32 )0;
  len = (size_t )0;
  len = strlen((char const   *)pdfstr);
  tmp = t2pWriteFile(output, (tdata_t )"(", (tmsize_t )1);
  written += tmp;
  i = (uint32 )0;
  while (i < len) {
    if ((int )*(pdfstr + i) & 128) {
      snprintf((char */* __restrict  */)(buffer), sizeof(buffer),
               (char const   */* __restrict  */)"\\%.3hho", (int )*(pdfstr + i));
      tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )4);
      written += tmp___0;
    } else
    if ((int )*(pdfstr + i) == 127) {
      snprintf((char */* __restrict  */)(buffer), sizeof(buffer),
               (char const   */* __restrict  */)"\\%.3hho", (int )*(pdfstr + i));
      tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )4);
      written += tmp___0;
    } else
    if ((int )*(pdfstr + i) < 32) {
      snprintf((char */* __restrict  */)(buffer), sizeof(buffer),
               (char const   */* __restrict  */)"\\%.3hho", (int )*(pdfstr + i));
      tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )4);
      written += tmp___0;
    } else {
      switch ((int )*(pdfstr + i)) {
      case 8: 
      tmp___1 = t2pWriteFile(output, (tdata_t )"\\b", (tmsize_t )2);
      written += tmp___1;
      break;
      case 9: 
      tmp___2 = t2pWriteFile(output, (tdata_t )"\\t", (tmsize_t )2);
      written += tmp___2;
      break;
      case 10: 
      tmp___3 = t2pWriteFile(output, (tdata_t )"\\n", (tmsize_t )2);
      written += tmp___3;
      break;
      case 12: 
      tmp___4 = t2pWriteFile(output, (tdata_t )"\\f", (tmsize_t )2);
      written += tmp___4;
      break;
      case 13: 
      tmp___5 = t2pWriteFile(output, (tdata_t )"\\r", (tmsize_t )2);
      written += tmp___5;
      break;
      case 40: 
      tmp___6 = t2pWriteFile(output, (tdata_t )"\\(", (tmsize_t )2);
      written += tmp___6;
      break;
      case 41: 
      tmp___7 = t2pWriteFile(output, (tdata_t )"\\)", (tmsize_t )2);
      written += tmp___7;
      break;
      case 92: 
      tmp___8 = t2pWriteFile(output, (tdata_t )"\\\\", (tmsize_t )2);
      written += tmp___8;
      break;
      default: 
      tmp___9 = t2pWriteFile(output, (tdata_t )(pdfstr + i), (tmsize_t )1);
      written += tmp___9;
      }
    }
    i ++;
  }
  tmp___10 = t2pWriteFile(output, (tdata_t )") ", (tmsize_t )1);
  written += tmp___10;
  return (written);
}
}
tsize_t t2p_write_pdf_stream(tdata_t buffer , tsize_t len , TIFF *output ) 
{ 
  tsize_t written ;
  tmsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2pWriteFile(output, buffer, len);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_stream_start(TIFF *output ) 
{ 
  tsize_t written ;
  tmsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2pWriteFile(output, (tdata_t )"stream\n", (tmsize_t )7);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_stream_end(TIFF *output ) 
{ 
  tsize_t written ;
  tmsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2pWriteFile(output, (tdata_t )"\nendstream\n", (tmsize_t )11);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_stream_dict(tsize_t len , uint32 number , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"/Length ", (tmsize_t )8);
  written += tmp;
  if (len != 0L) {
    tmp___0 = t2p_write_pdf_stream_length(len, output);
    written += tmp___0;
  } else {
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )number);
    tmp___1 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___1;
    tmp___2 = t2pWriteFile(output, (tdata_t )" 0 R \n", (tmsize_t )6);
    written += tmp___2;
  }
  return (written);
}
}
tsize_t t2p_write_pdf_stream_dict_start(TIFF *output ) 
{ 
  tsize_t written ;
  tmsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2pWriteFile(output, (tdata_t )"<< \n", (tmsize_t )4);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_stream_dict_end(TIFF *output ) 
{ 
  tsize_t written ;
  tmsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2pWriteFile(output, (tdata_t )" >>\n", (tmsize_t )4);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_stream_length(tsize_t len , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu", (unsigned long )len);
  tmp = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp;
  tmp___0 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
  written += tmp___0;
  return (written);
}
}
tsize_t t2p_write_pdf_catalog(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  size_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"<< \n/Type /Catalog \n/Pages ",
                     (tmsize_t )27);
  written += tmp;
  buflen = snprintf((char */* __restrict  */)(buffer), sizeof(buffer),
                    (char const   */* __restrict  */)"%lu",
                    (unsigned long )t2p->pdf_pages);
  if ((size_t )buflen < sizeof(buffer) - 1U) {
    tmp___0 = (size_t )buflen;
  } else {
    tmp___0 = sizeof(buffer) - 1U;
  }
  tmp___1 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )tmp___0);
  written += tmp___1;
  tmp___2 = t2pWriteFile(output, (tdata_t )" 0 R \n", (tmsize_t )6);
  written += tmp___2;
  if (t2p->pdf_fitwindow) {
    tmp___3 = t2pWriteFile(output,
                           (tdata_t )"/ViewerPreferences <</FitWindow true>>\n",
                           (tmsize_t )39);
    written += tmp___3;
  } else {

  }
  tmp___4 = t2pWriteFile(output, (tdata_t )">>\n", (tmsize_t )3);
  written += tmp___4;
  return (written);
}
}
tsize_t t2p_write_pdf_info(T2P *t2p , TIFF *input , TIFF *output ) 
{ 
  tsize_t written ;
  char *info ;
  char buffer[512] ;
  tmsize_t tmp ;
  tsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tsize_t tmp___2 ;
  size_t tmp___3 ;
  tmsize_t tmp___4 ;
  tsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  size_t tmp___10 ;
  tmsize_t tmp___11 ;
  tsize_t tmp___12 ;
  tmsize_t tmp___13 ;
  int tmp___14 ;
  tmsize_t tmp___15 ;
  tsize_t tmp___16 ;
  tmsize_t tmp___17 ;
  size_t tmp___18 ;
  tmsize_t tmp___19 ;
  tsize_t tmp___20 ;
  tmsize_t tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  tmsize_t tmp___24 ;
  tsize_t tmp___25 ;
  tmsize_t tmp___26 ;
  size_t tmp___27 ;
  tmsize_t tmp___28 ;
  tsize_t tmp___29 ;
  tmsize_t tmp___30 ;
  int tmp___31 ;
  tmsize_t tmp___32 ;
  tsize_t tmp___33 ;
  tmsize_t tmp___34 ;
  size_t tmp___35 ;
  tmsize_t tmp___36 ;
  tsize_t tmp___37 ;
  tmsize_t tmp___38 ;
  int tmp___39 ;
  tmsize_t tmp___40 ;
  tsize_t tmp___41 ;
  tmsize_t tmp___42 ;
  tmsize_t tmp___43 ;

  {
  written = (tsize_t )0;
  if ((int )t2p->pdf_datetime[0] == 0) {
    t2p_pdf_tifftime(t2p, input);
  } else {

  }
  tmp___3 = strlen((char const   *)(t2p->pdf_datetime));
  if (tmp___3 > 0U) {
    tmp = t2pWriteFile(output, (tdata_t )"<< \n/CreationDate ", (tmsize_t )18);
    written += tmp;
    tmp___0 = t2p_write_pdf_string(t2p->pdf_datetime, output);
    written += tmp___0;
    tmp___1 = t2pWriteFile(output, (tdata_t )"\n/ModDate ", (tmsize_t )10);
    written += tmp___1;
    tmp___2 = t2p_write_pdf_string(t2p->pdf_datetime, output);
    written += tmp___2;
  } else {

  }
  tmp___4 = t2pWriteFile(output, (tdata_t )"\n/Producer ", (tmsize_t )11);
  written += tmp___4;
  _TIFFmemset((tdata_t )(buffer), 0, (tmsize_t )sizeof(buffer));
  snprintf((char */* __restrict  */)(buffer), sizeof(buffer),
           (char const   */* __restrict  */)"libtiff / tiff2pdf - %d", 20100611);
  tmp___5 = t2p_write_pdf_string(buffer, output);
  written += tmp___5;
  tmp___6 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
  written += tmp___6;
  if ((int )t2p->pdf_creator[0] != 0) {
    tmp___7 = t2pWriteFile(output, (tdata_t )"/Creator ", (tmsize_t )9);
    written += tmp___7;
    tmp___8 = t2p_write_pdf_string(t2p->pdf_creator, output);
    written += tmp___8;
    tmp___9 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
    written += tmp___9;
  } else {
    tmp___14 = TIFFGetField(input, (uint32 )305, & info);
    if (tmp___14 != 0) {
      if (info) {
        tmp___10 = strlen((char const   *)info);
        if (tmp___10 >= sizeof(t2p->pdf_creator)) {
          *(info + (sizeof(t2p->pdf_creator) - 1U)) = (char )'\000';
        } else {

        }
        tmp___11 = t2pWriteFile(output, (tdata_t )"/Creator ", (tmsize_t )9);
        written += tmp___11;
        tmp___12 = t2p_write_pdf_string(info, output);
        written += tmp___12;
        tmp___13 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
        written += tmp___13;
      } else {

      }
    } else {

    }
  }
  if ((int )t2p->pdf_author[0] != 0) {
    tmp___15 = t2pWriteFile(output, (tdata_t )"/Author ", (tmsize_t )8);
    written += tmp___15;
    tmp___16 = t2p_write_pdf_string(t2p->pdf_author, output);
    written += tmp___16;
    tmp___17 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
    written += tmp___17;
  } else {
    tmp___22 = TIFFGetField(input, (uint32 )315, & info);
    if (tmp___22 != 0) {
      goto _L;
    } else {
      tmp___23 = TIFFGetField(input, (uint32 )33432, & info);
      if (tmp___23 != 0) {
        _L: /* CIL Label */ 
        if (info) {
          tmp___18 = strlen((char const   *)info);
          if (tmp___18 >= sizeof(t2p->pdf_author)) {
            *(info + (sizeof(t2p->pdf_author) - 1U)) = (char )'\000';
          } else {

          }
          tmp___19 = t2pWriteFile(output, (tdata_t )"/Author ", (tmsize_t )8);
          written += tmp___19;
          tmp___20 = t2p_write_pdf_string(info, output);
          written += tmp___20;
          tmp___21 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
          written += tmp___21;
        } else {

        }
      } else {

      }
    }
  }
  if ((int )t2p->pdf_title[0] != 0) {
    tmp___24 = t2pWriteFile(output, (tdata_t )"/Title ", (tmsize_t )7);
    written += tmp___24;
    tmp___25 = t2p_write_pdf_string(t2p->pdf_title, output);
    written += tmp___25;
    tmp___26 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
    written += tmp___26;
  } else {
    tmp___31 = TIFFGetField(input, (uint32 )269, & info);
    if (tmp___31 != 0) {
      tmp___27 = strlen((char const   *)info);
      if (tmp___27 > 511U) {
        *(info + 512) = (char )'\000';
      } else {

      }
      tmp___28 = t2pWriteFile(output, (tdata_t )"/Title ", (tmsize_t )7);
      written += tmp___28;
      tmp___29 = t2p_write_pdf_string(info, output);
      written += tmp___29;
      tmp___30 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
      written += tmp___30;
    } else {

    }
  }
  if ((int )t2p->pdf_subject[0] != 0) {
    tmp___32 = t2pWriteFile(output, (tdata_t )"/Subject ", (tmsize_t )9);
    written += tmp___32;
    tmp___33 = t2p_write_pdf_string(t2p->pdf_subject, output);
    written += tmp___33;
    tmp___34 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
    written += tmp___34;
  } else {
    tmp___39 = TIFFGetField(input, (uint32 )270, & info);
    if (tmp___39 != 0) {
      if (info) {
        tmp___35 = strlen((char const   *)info);
        if (tmp___35 >= sizeof(t2p->pdf_subject)) {
          *(info + (sizeof(t2p->pdf_subject) - 1U)) = (char )'\000';
        } else {

        }
        tmp___36 = t2pWriteFile(output, (tdata_t )"/Subject ", (tmsize_t )9);
        written += tmp___36;
        tmp___37 = t2p_write_pdf_string(info, output);
        written += tmp___37;
        tmp___38 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
        written += tmp___38;
      } else {

      }
    } else {

    }
  }
  if ((int )t2p->pdf_keywords[0] != 0) {
    tmp___40 = t2pWriteFile(output, (tdata_t )"/Keywords ", (tmsize_t )10);
    written += tmp___40;
    tmp___41 = t2p_write_pdf_string(t2p->pdf_keywords, output);
    written += tmp___41;
    tmp___42 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
    written += tmp___42;
  } else {

  }
  tmp___43 = t2pWriteFile(output, (tdata_t )">> \n", (tmsize_t )4);
  written += tmp___43;
  return (written);
}
}
void t2p_pdf_currenttime(T2P *t2p ) 
{ 
  struct tm *currenttime ;
  time_t timenow ;
  int *tmp ;
  char *tmp___0 ;
  time_t tmp___1 ;

  {
  tmp___1 = time(& timenow);
  if (tmp___1 == -1L) {
    tmp = __errno_location();
    tmp___0 = strerror(*tmp);
    TIFFError("tiff2pdf", "Can\'t get the current time: %s", tmp___0);
    timenow = (time_t )0;
  } else {

  }
  currenttime = localtime((time_t const   *)(& timenow));
  snprintf((char */* __restrict  */)(t2p->pdf_datetime),
           sizeof(t2p->pdf_datetime),
           (char const   */* __restrict  */)"D:%.4d%.2d%.2d%.2d%.2d%.2d",
           (currenttime->tm_year + 1900) % 65536,
           (currenttime->tm_mon + 1) % 256, currenttime->tm_mday % 256,
           currenttime->tm_hour % 256, currenttime->tm_min % 256,
           currenttime->tm_sec % 256);
  return;
}
}
void t2p_pdf_tifftime(T2P *t2p , TIFF *input ) 
{ 
  char *datetime ;
  int tmp ;
  size_t tmp___0 ;

  {
  tmp = TIFFGetField(input, (uint32 )306, & datetime);
  if (tmp != 0) {
    tmp___0 = strlen((char const   *)datetime);
    if (tmp___0 >= 19U) {
      t2p->pdf_datetime[0] = (char )'D';
      t2p->pdf_datetime[1] = (char )':';
      t2p->pdf_datetime[2] = *(datetime + 0);
      t2p->pdf_datetime[3] = *(datetime + 1);
      t2p->pdf_datetime[4] = *(datetime + 2);
      t2p->pdf_datetime[5] = *(datetime + 3);
      t2p->pdf_datetime[6] = *(datetime + 5);
      t2p->pdf_datetime[7] = *(datetime + 6);
      t2p->pdf_datetime[8] = *(datetime + 8);
      t2p->pdf_datetime[9] = *(datetime + 9);
      t2p->pdf_datetime[10] = *(datetime + 11);
      t2p->pdf_datetime[11] = *(datetime + 12);
      t2p->pdf_datetime[12] = *(datetime + 14);
      t2p->pdf_datetime[13] = *(datetime + 15);
      t2p->pdf_datetime[14] = *(datetime + 17);
      t2p->pdf_datetime[15] = *(datetime + 18);
      t2p->pdf_datetime[16] = (char )'\000';
    } else {
      t2p_pdf_currenttime(t2p);
    }
  } else {
    t2p_pdf_currenttime(t2p);
  }
  return;
}
}
tsize_t t2p_write_pdf_pages(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  tdir_t i ;
  char buffer[16] ;
  int buflen ;
  int page ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;

  {
  written = (tsize_t )0;
  i = (tdir_t )0;
  buflen = 0;
  page = 0;
  tmp = t2pWriteFile(output, (tdata_t )"<< \n/Type /Pages \n/Kids [ ",
                     (tmsize_t )26);
  written += tmp;
  page = (int )(t2p->pdf_pages + 1U);
  i = (tdir_t )0;
  while ((int )i < (int )t2p->tiff_pagecount) {
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%d", page);
    tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___0;
    tmp___1 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___1;
    if (((int )i + 1) % 8 == 0) {
      tmp___2 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
      written += tmp___2;
    } else {

    }
    page += 3;
    page = (int )((uint32 )page + (t2p->tiff_pages + i)->page_extra);
    if ((t2p->tiff_pages + i)->page_tilecount > 0U) {
      page = (int )((ttile_t )page + 2U * (t2p->tiff_pages + i)->page_tilecount);
    } else {
      page += 2;
    }
    i = (tdir_t )((int )i + 1);
  }
  tmp___3 = t2pWriteFile(output, (tdata_t )"] \n/Count ", (tmsize_t )10);
  written += tmp___3;
  _TIFFmemset((void *)(buffer), 0, (tmsize_t )16);
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%d",
                   (int )t2p->tiff_pagecount);
  tmp___4 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___4;
  tmp___5 = t2pWriteFile(output, (tdata_t )" \n>> \n", (tmsize_t )6);
  written += tmp___5;
  return (written);
}
}
tsize_t t2p_write_pdf_page(uint32 object , T2P *t2p , TIFF *output ) 
{ 
  unsigned int i ;
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  tmsize_t tmp___11 ;
  tmsize_t tmp___12 ;
  tmsize_t tmp___13 ;
  tmsize_t tmp___14 ;
  tmsize_t tmp___15 ;
  tmsize_t tmp___16 ;
  tmsize_t tmp___17 ;
  tmsize_t tmp___18 ;
  tmsize_t tmp___19 ;
  tmsize_t tmp___20 ;
  tmsize_t tmp___21 ;
  tmsize_t tmp___22 ;
  tmsize_t tmp___23 ;
  tmsize_t tmp___24 ;
  tmsize_t tmp___25 ;
  tmsize_t tmp___26 ;
  tmsize_t tmp___27 ;
  tmsize_t tmp___28 ;
  tmsize_t tmp___29 ;
  tmsize_t tmp___30 ;
  tmsize_t tmp___31 ;
  tmsize_t tmp___32 ;
  tmsize_t tmp___33 ;
  tmsize_t tmp___34 ;
  tmsize_t tmp___35 ;
  tmsize_t tmp___36 ;
  tmsize_t tmp___37 ;
  tmsize_t tmp___38 ;
  tmsize_t tmp___39 ;
  tmsize_t tmp___40 ;

  {
  i = 0U;
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"<<\n/Type /Page \n/Parent ",
                     (tmsize_t )24);
  written += tmp;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )t2p->pdf_pages);
  tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___0;
  tmp___1 = t2pWriteFile(output, (tdata_t )" 0 R \n", (tmsize_t )6);
  written += tmp___1;
  tmp___2 = t2pWriteFile(output, (tdata_t )"/MediaBox [", (tmsize_t )11);
  written += tmp___2;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%.4f",
                   (double )t2p->pdf_mediabox.x1);
  tmp___3 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___3;
  tmp___4 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
  written += tmp___4;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%.4f",
                   (double )t2p->pdf_mediabox.y1);
  tmp___5 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___5;
  tmp___6 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
  written += tmp___6;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%.4f",
                   (double )t2p->pdf_mediabox.x2);
  tmp___7 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___7;
  tmp___8 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
  written += tmp___8;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%.4f",
                   (double )t2p->pdf_mediabox.y2);
  tmp___9 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___9;
  tmp___10 = t2pWriteFile(output, (tdata_t )"] \n", (tmsize_t )3);
  written += tmp___10;
  tmp___11 = t2pWriteFile(output, (tdata_t )"/Contents ", (tmsize_t )10);
  written += tmp___11;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )(object + 1U));
  tmp___12 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___12;
  tmp___13 = t2pWriteFile(output, (tdata_t )" 0 R \n", (tmsize_t )6);
  written += tmp___13;
  tmp___14 = t2pWriteFile(output, (tdata_t )"/Resources << \n", (tmsize_t )15);
  written += tmp___14;
  if ((t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount != 0U) {
    tmp___15 = t2pWriteFile(output, (tdata_t )"/XObject <<\n", (tmsize_t )12);
    written += tmp___15;
    i = 0U;
    while (i < (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount) {
      tmp___16 = t2pWriteFile(output, (tdata_t )"/Im", (tmsize_t )3);
      written += tmp___16;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%u",
                       (int )t2p->pdf_page + 1);
      tmp___17 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___17;
      tmp___18 = t2pWriteFile(output, (tdata_t )"_", (tmsize_t )1);
      written += tmp___18;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%u", i + 1U);
      tmp___19 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___19;
      tmp___20 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
      written += tmp___20;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(((object + 3U) + 2U * i) + (t2p->tiff_pages + t2p->pdf_page)->page_extra));
      tmp___21 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___21;
      tmp___22 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
      written += tmp___22;
      if (i % 4U == 3U) {
        tmp___23 = t2pWriteFile(output, (tdata_t )"\n", (tmsize_t )1);
        written += tmp___23;
      } else {

      }
      i ++;
    }
    tmp___24 = t2pWriteFile(output, (tdata_t )">>\n", (tmsize_t )3);
    written += tmp___24;
  } else {
    tmp___25 = t2pWriteFile(output, (tdata_t )"/XObject <<\n", (tmsize_t )12);
    written += tmp___25;
    tmp___26 = t2pWriteFile(output, (tdata_t )"/Im", (tmsize_t )3);
    written += tmp___26;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%u",
                     (int )t2p->pdf_page + 1);
    tmp___27 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___27;
    tmp___28 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
    written += tmp___28;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )(((object + 3U) + 2U * i) + (t2p->tiff_pages + t2p->pdf_page)->page_extra));
    tmp___29 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___29;
    tmp___30 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___30;
    tmp___31 = t2pWriteFile(output, (tdata_t )">>\n", (tmsize_t )3);
    written += tmp___31;
  }
  if ((int )t2p->tiff_transferfunctioncount != 0) {
    tmp___32 = t2pWriteFile(output, (tdata_t )"/ExtGState <<", (tmsize_t )13);
    written += tmp___32;
    t2pWriteFile(output, (tdata_t )"/GS1 ", (tmsize_t )5);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )(object + 3U));
    tmp___33 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___33;
    tmp___34 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___34;
    tmp___35 = t2pWriteFile(output, (tdata_t )">> \n", (tmsize_t )4);
    written += tmp___35;
  } else {

  }
  tmp___36 = t2pWriteFile(output, (tdata_t )"/ProcSet [ ", (tmsize_t )11);
  written += tmp___36;
  if ((unsigned int )t2p->pdf_colorspace == 1U) {
    tmp___37 = t2pWriteFile(output, (tdata_t )"/ImageB ", (tmsize_t )8);
    written += tmp___37;
  } else
  if ((unsigned int )t2p->pdf_colorspace == 2U) {
    tmp___37 = t2pWriteFile(output, (tdata_t )"/ImageB ", (tmsize_t )8);
    written += tmp___37;
  } else {
    tmp___38 = t2pWriteFile(output, (tdata_t )"/ImageC ", (tmsize_t )8);
    written += tmp___38;
    if ((unsigned int )t2p->pdf_colorspace & 4096U) {
      tmp___39 = t2pWriteFile(output, (tdata_t )"/ImageI ", (tmsize_t )8);
      written += tmp___39;
    } else {

    }
  }
  tmp___40 = t2pWriteFile(output, (tdata_t )"]\n>>\n>>\n", (tmsize_t )8);
  written += tmp___40;
  return (written);
}
}
void t2p_compose_pdf_page(T2P *t2p ) 
{ 
  uint32 i ;
  uint32 i2 ;
  T2P_TILE *tiles ;
  T2P_BOX *boxp ;
  uint32 tilecountx ;
  uint32 tilecounty ;
  uint32 tilewidth ;
  uint32 tilelength ;
  int istiled ;
  float f ;

  {
  i = (uint32 )0;
  i2 = (uint32 )0;
  tiles = (T2P_TILE *)((void *)0);
  boxp = (T2P_BOX *)((void *)0);
  tilecountx = (uint32 )0;
  tilecounty = (uint32 )0;
  tilewidth = (uint32 )0;
  tilelength = (uint32 )0;
  istiled = 0;
  f = (float )0;
  t2p->pdf_xres = t2p->tiff_xres;
  t2p->pdf_yres = t2p->tiff_yres;
  if (t2p->pdf_overrideres) {
    t2p->pdf_xres = t2p->pdf_defaultxres;
    t2p->pdf_yres = t2p->pdf_defaultyres;
  } else {

  }
  if ((double )t2p->pdf_xres == 0.0) {
    t2p->pdf_xres = t2p->pdf_defaultxres;
  } else {

  }
  if ((double )t2p->pdf_yres == 0.0) {
    t2p->pdf_yres = t2p->pdf_defaultyres;
  } else {

  }
  if ((int )t2p->tiff_resunit != 3) {
    if ((int )t2p->tiff_resunit != 2) {
      t2p->pdf_imagewidth = (float )t2p->tiff_width / t2p->pdf_xres;
      t2p->pdf_imagelength = (float )t2p->tiff_length / t2p->pdf_yres;
    } else {
      t2p->pdf_imagewidth = ((float )t2p->tiff_width * 72.0F) / t2p->pdf_xres;
      t2p->pdf_imagelength = ((float )t2p->tiff_length * 72.0F) / t2p->pdf_yres;
    }
  } else {
    t2p->pdf_imagewidth = ((float )t2p->tiff_width * 72.0F) / t2p->pdf_xres;
    t2p->pdf_imagelength = ((float )t2p->tiff_length * 72.0F) / t2p->pdf_yres;
  }
  if ((int )t2p->pdf_overridepagesize != 0) {
    t2p->pdf_pagewidth = t2p->pdf_defaultpagewidth;
    t2p->pdf_pagelength = t2p->pdf_defaultpagelength;
  } else {
    t2p->pdf_pagewidth = t2p->pdf_imagewidth;
    t2p->pdf_pagelength = t2p->pdf_imagelength;
  }
  t2p->pdf_mediabox.x1 = (float )0.0;
  t2p->pdf_mediabox.y1 = (float )0.0;
  t2p->pdf_mediabox.x2 = t2p->pdf_pagewidth;
  t2p->pdf_mediabox.y2 = t2p->pdf_pagelength;
  t2p->pdf_imagebox.x1 = (float )0.0;
  t2p->pdf_imagebox.y1 = (float )0.0;
  t2p->pdf_imagebox.x2 = t2p->pdf_imagewidth;
  t2p->pdf_imagebox.y2 = t2p->pdf_imagelength;
  if ((int )t2p->pdf_overridepagesize != 0) {
    t2p->pdf_imagebox.x1 += (t2p->pdf_pagewidth - t2p->pdf_imagewidth) / 2.0F;
    t2p->pdf_imagebox.y1 += (t2p->pdf_pagelength - t2p->pdf_imagelength) / 2.0F;
    t2p->pdf_imagebox.x2 += (t2p->pdf_pagewidth - t2p->pdf_imagewidth) / 2.0F;
    t2p->pdf_imagebox.y2 += (t2p->pdf_pagelength - t2p->pdf_imagelength) / 2.0F;
  } else {

  }
  if ((int )t2p->tiff_orientation > 4) {
    f = t2p->pdf_mediabox.x2;
    t2p->pdf_mediabox.x2 = t2p->pdf_mediabox.y2;
    t2p->pdf_mediabox.y2 = f;
  } else {

  }
  if ((t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount == 0U) {
    istiled = 0;
  } else {
    istiled = 1;
  }
  if (istiled == 0) {
    t2p_compose_pdf_page_orient(& t2p->pdf_imagebox, t2p->tiff_orientation);
    return;
  } else {
    tilewidth = (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth;
    tilelength = (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength;
    tilecountx = ((t2p->tiff_width + tilewidth) - 1U) / tilewidth;
    (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecountx = tilecountx;
    tilecounty = ((t2p->tiff_length + tilelength) - 1U) / tilelength;
    (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecounty = tilecounty;
    (t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilewidth = t2p->tiff_width % tilewidth;
    (t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilelength = t2p->tiff_length % tilelength;
    tiles = (t2p->tiff_tiles + t2p->pdf_page)->tiles_tiles;
    i2 = (uint32 )0;
    while (i2 < tilecounty - 1U) {
      i = (uint32 )0;
      while (i < tilecountx - 1U) {
        boxp = & (tiles + (i2 * tilecountx + i))->tile_box;
        boxp->x1 = t2p->pdf_imagebox.x1 + ((t2p->pdf_imagewidth * (float )i) * (float )tilewidth) / (float )t2p->tiff_width;
        boxp->x2 = t2p->pdf_imagebox.x1 + ((t2p->pdf_imagewidth * (float )(i + 1U)) * (float )tilewidth) / (float )t2p->tiff_width;
        boxp->y1 = t2p->pdf_imagebox.y2 - ((t2p->pdf_imagelength * (float )(i2 + 1U)) * (float )tilelength) / (float )t2p->tiff_length;
        boxp->y2 = t2p->pdf_imagebox.y2 - ((t2p->pdf_imagelength * (float )i2) * (float )tilelength) / (float )t2p->tiff_length;
        i ++;
      }
      boxp = & (tiles + (i2 * tilecountx + i))->tile_box;
      boxp->x1 = t2p->pdf_imagebox.x1 + ((t2p->pdf_imagewidth * (float )i) * (float )tilewidth) / (float )t2p->tiff_width;
      boxp->x2 = t2p->pdf_imagebox.x2;
      boxp->y1 = t2p->pdf_imagebox.y2 - ((t2p->pdf_imagelength * (float )(i2 + 1U)) * (float )tilelength) / (float )t2p->tiff_length;
      boxp->y2 = t2p->pdf_imagebox.y2 - ((t2p->pdf_imagelength * (float )i2) * (float )tilelength) / (float )t2p->tiff_length;
      i2 ++;
    }
    i = (uint32 )0;
    while (i < tilecountx - 1U) {
      boxp = & (tiles + (i2 * tilecountx + i))->tile_box;
      boxp->x1 = t2p->pdf_imagebox.x1 + ((t2p->pdf_imagewidth * (float )i) * (float )tilewidth) / (float )t2p->tiff_width;
      boxp->x2 = t2p->pdf_imagebox.x1 + ((t2p->pdf_imagewidth * (float )(i + 1U)) * (float )tilewidth) / (float )t2p->tiff_width;
      boxp->y1 = t2p->pdf_imagebox.y1;
      boxp->y2 = t2p->pdf_imagebox.y2 - ((t2p->pdf_imagelength * (float )i2) * (float )tilelength) / (float )t2p->tiff_length;
      i ++;
    }
    boxp = & (tiles + (i2 * tilecountx + i))->tile_box;
    boxp->x1 = t2p->pdf_imagebox.x1 + ((t2p->pdf_imagewidth * (float )i) * (float )tilewidth) / (float )t2p->tiff_width;
    boxp->x2 = t2p->pdf_imagebox.x2;
    boxp->y1 = t2p->pdf_imagebox.y1;
    boxp->y2 = t2p->pdf_imagebox.y2 - ((t2p->pdf_imagelength * (float )i2) * (float )tilelength) / (float )t2p->tiff_length;
  }
  if ((int )t2p->tiff_orientation == 0) {
    goto _L;
  } else
  if ((int )t2p->tiff_orientation == 1) {
    _L: /* CIL Label */ 
    i = (uint32 )0;
    while (i < (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount) {
      t2p_compose_pdf_page_orient(& (tiles + i)->tile_box, (uint16 )0);
      i ++;
    }
    return;
  } else {

  }
  i = (uint32 )0;
  while (i < (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount) {
    boxp = & (tiles + i)->tile_box;
    boxp->x1 -= t2p->pdf_imagebox.x1;
    boxp->x2 -= t2p->pdf_imagebox.x1;
    boxp->y1 -= t2p->pdf_imagebox.y1;
    boxp->y2 -= t2p->pdf_imagebox.y1;
    if ((int )t2p->tiff_orientation == 2) {
      boxp->x1 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x1;
      boxp->x2 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x2;
    } else
    if ((int )t2p->tiff_orientation == 3) {
      boxp->x1 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x1;
      boxp->x2 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x2;
    } else {

    }
    if ((int )t2p->tiff_orientation == 3) {
      boxp->y1 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y1;
      boxp->y2 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y2;
    } else
    if ((int )t2p->tiff_orientation == 4) {
      boxp->y1 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y1;
      boxp->y2 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y2;
    } else {

    }
    if ((int )t2p->tiff_orientation == 8) {
      boxp->y1 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y1;
      boxp->y2 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y2;
    } else
    if ((int )t2p->tiff_orientation == 5) {
      boxp->y1 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y1;
      boxp->y2 = (t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1) - boxp->y2;
    } else {

    }
    if ((int )t2p->tiff_orientation == 5) {
      boxp->x1 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x1;
      boxp->x2 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x2;
    } else
    if ((int )t2p->tiff_orientation == 6) {
      boxp->x1 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x1;
      boxp->x2 = (t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1) - boxp->x2;
    } else {

    }
    if ((int )t2p->tiff_orientation > 4) {
      f = boxp->x1;
      boxp->x1 = boxp->y1;
      boxp->y1 = f;
      f = boxp->x2;
      boxp->x2 = boxp->y2;
      boxp->y2 = f;
      t2p_compose_pdf_page_orient_flip(boxp, t2p->tiff_orientation);
    } else {
      t2p_compose_pdf_page_orient(boxp, t2p->tiff_orientation);
    }
    i ++;
  }
  return;
}
}
void t2p_compose_pdf_page_orient(T2P_BOX *boxp , uint16 orientation ) 
{ 
  float m1[9] ;
  float f ;

  {
  f = (float )0.0;
  if (boxp->x1 > boxp->x2) {
    f = boxp->x1;
    boxp->x1 = boxp->x2;
    boxp->x2 = f;
  } else {

  }
  if (boxp->y1 > boxp->y2) {
    f = boxp->y1;
    boxp->y1 = boxp->y2;
    boxp->y2 = f;
  } else {

  }
  m1[0] = boxp->x2 - boxp->x1;
  boxp->mat[0] = m1[0];
  m1[1] = (float )0.0;
  boxp->mat[1] = m1[1];
  m1[2] = (float )0.0;
  boxp->mat[2] = m1[2];
  m1[3] = (float )0.0;
  boxp->mat[3] = m1[3];
  m1[4] = boxp->y2 - boxp->y1;
  boxp->mat[4] = m1[4];
  m1[5] = (float )0.0;
  boxp->mat[5] = m1[5];
  m1[6] = boxp->x1;
  boxp->mat[6] = m1[6];
  m1[7] = boxp->y1;
  boxp->mat[7] = m1[7];
  m1[8] = (float )1.0;
  boxp->mat[8] = m1[8];
  switch ((int )orientation) {
  case 1: 
  case 0: 
  break;
  case 2: 
  boxp->mat[0] = 0.0F - m1[0];
  boxp->mat[6] += m1[0];
  break;
  case 3: 
  boxp->mat[0] = 0.0F - m1[0];
  boxp->mat[4] = 0.0F - m1[4];
  boxp->mat[6] += m1[0];
  boxp->mat[7] += m1[4];
  break;
  case 4: 
  boxp->mat[4] = 0.0F - m1[4];
  boxp->mat[7] += m1[4];
  break;
  case 5: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = 0.0F - m1[0];
  boxp->mat[3] = 0.0F - m1[4];
  boxp->mat[4] = 0.0F;
  boxp->mat[6] += m1[4];
  boxp->mat[7] += m1[0];
  break;
  case 6: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = 0.0F - m1[0];
  boxp->mat[3] = m1[4];
  boxp->mat[4] = 0.0F;
  boxp->mat[7] += m1[0];
  break;
  case 7: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = m1[0];
  boxp->mat[3] = m1[4];
  boxp->mat[4] = 0.0F;
  break;
  case 8: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = m1[0];
  boxp->mat[3] = 0.0F - m1[4];
  boxp->mat[4] = 0.0F;
  boxp->mat[6] += m1[4];
  break;
  }
  return;
}
}
void t2p_compose_pdf_page_orient_flip(T2P_BOX *boxp , uint16 orientation ) 
{ 
  float m1[9] ;
  float f ;

  {
  f = (float )0.0;
  if (boxp->x1 > boxp->x2) {
    f = boxp->x1;
    boxp->x1 = boxp->x2;
    boxp->x2 = f;
  } else {

  }
  if (boxp->y1 > boxp->y2) {
    f = boxp->y1;
    boxp->y1 = boxp->y2;
    boxp->y2 = f;
  } else {

  }
  m1[0] = boxp->x2 - boxp->x1;
  boxp->mat[0] = m1[0];
  m1[1] = 0.0F;
  boxp->mat[1] = m1[1];
  m1[2] = 0.0F;
  boxp->mat[2] = m1[2];
  m1[3] = 0.0F;
  boxp->mat[3] = m1[3];
  m1[4] = boxp->y2 - boxp->y1;
  boxp->mat[4] = m1[4];
  m1[5] = 0.0F;
  boxp->mat[5] = m1[5];
  m1[6] = boxp->x1;
  boxp->mat[6] = m1[6];
  m1[7] = boxp->y1;
  boxp->mat[7] = m1[7];
  m1[8] = 1.0F;
  boxp->mat[8] = m1[8];
  switch ((int )orientation) {
  case 5: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = 0.0F - m1[4];
  boxp->mat[3] = 0.0F - m1[0];
  boxp->mat[4] = 0.0F;
  boxp->mat[6] += m1[0];
  boxp->mat[7] += m1[4];
  break;
  case 6: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = 0.0F - m1[4];
  boxp->mat[3] = m1[0];
  boxp->mat[4] = 0.0F;
  boxp->mat[7] += m1[4];
  break;
  case 7: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = m1[4];
  boxp->mat[3] = m1[0];
  boxp->mat[4] = 0.0F;
  break;
  case 8: 
  boxp->mat[0] = 0.0F;
  boxp->mat[1] = m1[4];
  boxp->mat[3] = 0.0F - m1[0];
  boxp->mat[4] = 0.0F;
  boxp->mat[6] += m1[0];
  break;
  }
  return;
}
}
tsize_t t2p_write_pdf_page_content_stream(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  ttile_t i ;
  char buffer[512] ;
  int buflen ;
  T2P_BOX box ;
  char const   *tmp ;
  tsize_t tmp___0 ;
  char const   *tmp___1 ;
  tsize_t tmp___2 ;

  {
  written = (tsize_t )0;
  i = (ttile_t )0;
  buflen = 0;
  if ((t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount > 0U) {
    i = (ttile_t )0;
    while (i < (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount) {
      box = ((t2p->tiff_tiles + t2p->pdf_page)->tiles_tiles + i)->tile_box;
      if (t2p->tiff_transferfunctioncount) {
        tmp = "/GS1 gs ";
      } else {
        tmp = "";
      }
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"q %s %.4f %.4f %.4f %.4f %.4f %.4f cm /Im%d_%ld Do Q\n",
                       tmp, (double )box.mat[0], (double )box.mat[1],
                       (double )box.mat[3], (double )box.mat[4],
                       (double )box.mat[6], (double )box.mat[7],
                       (int )t2p->pdf_page + 1, (long )(i + 1U));
      tmp___0 = t2p_write_pdf_stream((tdata_t )(buffer), (tsize_t )buflen,
                                     output);
      written += tmp___0;
      i ++;
    }
  } else {
    box = t2p->pdf_imagebox;
    if (t2p->tiff_transferfunctioncount) {
      tmp___1 = "/GS1 gs ";
    } else {
      tmp___1 = "";
    }
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"q %s %.4f %.4f %.4f %.4f %.4f %.4f cm /Im%d Do Q\n",
                     tmp___1, (double )box.mat[0], (double )box.mat[1],
                     (double )box.mat[3], (double )box.mat[4],
                     (double )box.mat[6], (double )box.mat[7],
                     (int )t2p->pdf_page + 1);
    tmp___2 = t2p_write_pdf_stream((tdata_t )(buffer), (tsize_t )buflen, output);
    written += tmp___2;
  }
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_stream_dict(ttile_t tile , T2P *t2p ,
                                          TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  int tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  int tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  tmsize_t tmp___11 ;
  tmsize_t tmp___12 ;
  tsize_t tmp___13 ;
  tmsize_t tmp___14 ;
  tsize_t tmp___15 ;
  tsize_t tmp___16 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2p_write_pdf_stream_dict((tsize_t )0, t2p->pdf_xrefcount + 1U, output);
  written += tmp;
  tmp___0 = t2pWriteFile(output,
                         (tdata_t )"/Type /XObject \n/Subtype /Image \n/Name /Im",
                         (tmsize_t )42);
  written += tmp___0;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%u",
                   (int )t2p->pdf_page + 1);
  tmp___1 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___1;
  if (tile != 0U) {
    tmp___2 = t2pWriteFile(output, (tdata_t )"_", (tmsize_t )1);
    written += tmp___2;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )tile);
    tmp___3 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___3;
  } else {

  }
  tmp___4 = t2pWriteFile(output, (tdata_t )"\n/Width ", (tmsize_t )8);
  written += tmp___4;
  _TIFFmemset((tdata_t )(buffer), 0, (tmsize_t )16);
  if (tile == 0U) {
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )t2p->tiff_width);
  } else {
    tmp___5 = t2p_tile_is_right_edge(*(t2p->tiff_tiles + t2p->pdf_page),
                                     tile - 1U);
    if (tmp___5 != 0) {
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilewidth);
    } else {
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth);
    }
  }
  tmp___6 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___6;
  tmp___7 = t2pWriteFile(output, (tdata_t )"\n/Height ", (tmsize_t )9);
  written += tmp___7;
  _TIFFmemset((tdata_t )(buffer), 0, (tmsize_t )16);
  if (tile == 0U) {
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )t2p->tiff_length);
  } else {
    tmp___8 = t2p_tile_is_bottom_edge(*(t2p->tiff_tiles + t2p->pdf_page),
                                      tile - 1U);
    if (tmp___8 != 0) {
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilelength);
    } else {
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
    }
  }
  tmp___9 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___9;
  tmp___10 = t2pWriteFile(output, (tdata_t )"\n/BitsPerComponent ",
                          (tmsize_t )19);
  written += tmp___10;
  _TIFFmemset((tdata_t )(buffer), 0, (tmsize_t )16);
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%u",
                   (int )t2p->tiff_bitspersample);
  tmp___11 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___11;
  tmp___12 = t2pWriteFile(output, (tdata_t )"\n/ColorSpace ", (tmsize_t )13);
  written += tmp___12;
  tmp___13 = t2p_write_pdf_xobject_cs(t2p, output);
  written += tmp___13;
  if (t2p->pdf_image_interpolate) {
    tmp___14 = t2pWriteFile(output, (tdata_t )"\n/Interpolate true",
                            (tmsize_t )18);
    written += tmp___14;
  } else {

  }
  if ((int )t2p->pdf_switchdecode != 0) {
    if ((unsigned int )t2p->pdf_colorspace == 1U) {
      if ((unsigned int )t2p->pdf_compression == 1U) {

      } else {
        tmp___15 = t2p_write_pdf_xobject_decode(t2p, output);
        written += tmp___15;
      }
    } else {
      tmp___15 = t2p_write_pdf_xobject_decode(t2p, output);
      written += tmp___15;
    }
  } else {

  }
  tmp___16 = t2p_write_pdf_xobject_stream_filter(tile, t2p, output);
  written += tmp___16;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_cs(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[128] ;
  int buflen ;
  float X_W ;
  float Y_W ;
  float Z_W ;
  tsize_t tmp ;
  tmsize_t tmp___0 ;
  tsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  tmsize_t tmp___11 ;
  tmsize_t tmp___12 ;
  tmsize_t tmp___13 ;
  tmsize_t tmp___14 ;
  tmsize_t tmp___15 ;
  tmsize_t tmp___16 ;
  tmsize_t tmp___17 ;
  tmsize_t tmp___18 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  X_W = (float )1.0;
  Y_W = (float )1.0;
  Z_W = (float )1.0;
  if (((unsigned int )t2p->pdf_colorspace & 128U) != 0U) {
    tmp = t2p_write_pdf_xobject_icccs(t2p, output);
    written += tmp;
    return (written);
  } else {

  }
  if (((unsigned int )t2p->pdf_colorspace & 4096U) != 0U) {
    tmp___0 = t2pWriteFile(output, (tdata_t )"[ /Indexed ", (tmsize_t )11);
    written += tmp___0;
    t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace ^ 4096U);
    tmp___1 = t2p_write_pdf_xobject_cs(t2p, output);
    written += tmp___1;
    t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace | 4096U);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%u",
                     (1 << (int )t2p->tiff_bitspersample) - 1);
    tmp___2 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___2;
    tmp___3 = t2pWriteFile(output, (tdata_t )" ", (tmsize_t )1);
    written += tmp___3;
    _TIFFmemset((void *)(buffer), 0, (tmsize_t )16);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )t2p->pdf_palettecs);
    tmp___4 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___4;
    tmp___5 = t2pWriteFile(output, (tdata_t )" 0 R ]\n", (tmsize_t )7);
    written += tmp___5;
    return (written);
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 1U) {
    tmp___6 = t2pWriteFile(output, (tdata_t )"/DeviceGray \n", (tmsize_t )13);
    written += tmp___6;
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 2U) {
    if ((unsigned int )t2p->pdf_colorspace & 32U) {
      tmp___7 = t2p_write_pdf_xobject_calcs(t2p, output);
      written += tmp___7;
    } else {
      tmp___8 = t2pWriteFile(output, (tdata_t )"/DeviceGray \n", (tmsize_t )13);
      written += tmp___8;
    }
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 4U) {
    if ((unsigned int )t2p->pdf_colorspace & 64U) {
      tmp___9 = t2p_write_pdf_xobject_calcs(t2p, output);
      written += tmp___9;
    } else {
      tmp___10 = t2pWriteFile(output, (tdata_t )"/DeviceRGB \n", (tmsize_t )12);
      written += tmp___10;
    }
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 8U) {
    tmp___11 = t2pWriteFile(output, (tdata_t )"/DeviceCMYK \n", (tmsize_t )13);
    written += tmp___11;
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 16U) {
    tmp___12 = t2pWriteFile(output, (tdata_t )"[/Lab << \n", (tmsize_t )10);
    written += tmp___12;
    tmp___13 = t2pWriteFile(output, (tdata_t )"/WhitePoint ", (tmsize_t )12);
    written += tmp___13;
    X_W = t2p->tiff_whitechromaticities[0];
    Y_W = t2p->tiff_whitechromaticities[1];
    Z_W = 1.0F - (X_W + Y_W);
    X_W /= Y_W;
    Z_W /= Y_W;
    Y_W = 1.0F;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"[%.4f %.4f %.4f] \n",
                     (double )X_W, (double )Y_W, (double )Z_W);
    tmp___14 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___14;
    X_W = 0.3457F;
    Y_W = 0.3585F;
    Z_W = 1.0F - (X_W + Y_W);
    X_W /= Y_W;
    Z_W /= Y_W;
    Y_W = 1.0F;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"[%.4f %.4f %.4f] \n",
                     (double )X_W, (double )Y_W, (double )Z_W);
    tmp___15 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___15;
    tmp___16 = t2pWriteFile(output, (tdata_t )"/Range ", (tmsize_t )7);
    written += tmp___16;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"[%d %d %d %d] \n",
                     t2p->pdf_labrange[0], t2p->pdf_labrange[1],
                     t2p->pdf_labrange[2], t2p->pdf_labrange[3]);
    tmp___17 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___17;
    tmp___18 = t2pWriteFile(output, (tdata_t )">>] \n", (tmsize_t )5);
    written += tmp___18;
  } else {

  }
  return (written);
}
}
tsize_t t2p_write_pdf_transfer(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"<< /Type /ExtGState \n/TR ",
                     (tmsize_t )25);
  written += tmp;
  if ((int )t2p->tiff_transferfunctioncount == 1) {
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )(t2p->pdf_xrefcount + 1U));
    tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___0;
    tmp___1 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___1;
  } else {
    tmp___2 = t2pWriteFile(output, (tdata_t )"[ ", (tmsize_t )2);
    written += tmp___2;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )(t2p->pdf_xrefcount + 1U));
    tmp___3 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___3;
    tmp___4 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___4;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )(t2p->pdf_xrefcount + 2U));
    tmp___5 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___5;
    tmp___6 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___6;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )(t2p->pdf_xrefcount + 3U));
    tmp___7 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___7;
    tmp___8 = t2pWriteFile(output, (tdata_t )" 0 R ", (tmsize_t )5);
    written += tmp___8;
    tmp___9 = t2pWriteFile(output, (tdata_t )"/Identity ] ", (tmsize_t )12);
    written += tmp___9;
  }
  tmp___10 = t2pWriteFile(output, (tdata_t )" >> \n", (tmsize_t )5);
  written += tmp___10;
  return (written);
}
}
tsize_t t2p_write_pdf_transfer_dict(T2P *t2p , TIFF *output , uint16 i ) 
{ 
  tsize_t written ;
  char buffer[32] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tsize_t tmp___4 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"/FunctionType 0 \n", (tmsize_t )17);
  written += tmp;
  tmp___0 = t2pWriteFile(output, (tdata_t )"/Domain [0.0 1.0] \n", (tmsize_t )19);
  written += tmp___0;
  tmp___1 = t2pWriteFile(output, (tdata_t )"/Range [0.0 1.0] \n", (tmsize_t )18);
  written += tmp___1;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"/Size [%u] \n",
                   1 << (int )t2p->tiff_bitspersample);
  tmp___2 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___2;
  tmp___3 = t2pWriteFile(output, (tdata_t )"/BitsPerSample 16 \n", (tmsize_t )19);
  written += tmp___3;
  tmp___4 = t2p_write_pdf_stream_dict(1L << ((int )t2p->tiff_bitspersample + 1),
                                      (uint32 )0, output);
  written += tmp___4;
  return (written);
}
}
tsize_t t2p_write_pdf_transfer_stream(T2P *t2p , TIFF *output , uint16 i ) 
{ 
  tsize_t written ;
  tsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2p_write_pdf_stream((tdata_t )t2p->tiff_transferfunction[i],
                             1L << ((int )t2p->tiff_bitspersample + 1), output);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_calcs(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[128] ;
  int buflen ;
  float X_W ;
  float Y_W ;
  float Z_W ;
  float X_R ;
  float Y_R ;
  float Z_R ;
  float X_G ;
  float Y_G ;
  float Z_G ;
  float X_B ;
  float Y_B ;
  float Z_B ;
  float x_w ;
  float y_w ;
  float z_w ;
  float x_r ;
  float y_r ;
  float x_g ;
  float y_g ;
  float x_b ;
  float y_b ;
  float R ;
  float G ;
  float B ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  tmsize_t tmp___11 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  X_W = (float )0.0;
  Y_W = (float )0.0;
  Z_W = (float )0.0;
  X_R = (float )0.0;
  Y_R = (float )0.0;
  Z_R = (float )0.0;
  X_G = (float )0.0;
  Y_G = (float )0.0;
  Z_G = (float )0.0;
  X_B = (float )0.0;
  Y_B = (float )0.0;
  Z_B = (float )0.0;
  x_w = (float )0.0;
  y_w = (float )0.0;
  z_w = (float )0.0;
  x_r = (float )0.0;
  y_r = (float )0.0;
  x_g = (float )0.0;
  y_g = (float )0.0;
  x_b = (float )0.0;
  y_b = (float )0.0;
  R = (float )1.0;
  G = (float )1.0;
  B = (float )1.0;
  tmp = t2pWriteFile(output, (tdata_t )"[", (tmsize_t )1);
  written += tmp;
  if ((unsigned int )t2p->pdf_colorspace & 32U) {
    tmp___0 = t2pWriteFile(output, (tdata_t )"/CalGray ", (tmsize_t )9);
    written += tmp___0;
    X_W = t2p->tiff_whitechromaticities[0];
    Y_W = t2p->tiff_whitechromaticities[1];
    Z_W = 1.0F - (X_W + Y_W);
    X_W /= Y_W;
    Z_W /= Y_W;
    Y_W = 1.0F;
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 64U) {
    tmp___1 = t2pWriteFile(output, (tdata_t )"/CalRGB ", (tmsize_t )8);
    written += tmp___1;
    x_w = t2p->tiff_whitechromaticities[0];
    y_w = t2p->tiff_whitechromaticities[1];
    x_r = t2p->tiff_primarychromaticities[0];
    y_r = t2p->tiff_primarychromaticities[1];
    x_g = t2p->tiff_primarychromaticities[2];
    y_g = t2p->tiff_primarychromaticities[3];
    x_b = t2p->tiff_primarychromaticities[4];
    y_b = t2p->tiff_primarychromaticities[5];
    z_w = y_w * (((x_g - x_b) * y_r - (x_r - x_b) * y_g) + (x_r - x_g) * y_b);
    Y_R = ((y_r / R) * (((x_g - x_b) * y_w - (x_w - x_b) * y_g) + (x_w - x_g) * y_b)) / z_w;
    X_R = (Y_R * x_r) / y_r;
    Z_R = Y_R * (((float )1 - x_r) / y_r - (float )1);
    Y_G = (((0.0F - y_g) / G) * (((x_r - x_b) * y_w - (x_w - x_b) * y_r) + (x_w - x_r) * y_b)) / z_w;
    X_G = (Y_G * x_g) / y_g;
    Z_G = Y_G * (((float )1 - x_g) / y_g - (float )1);
    Y_B = ((y_b / B) * (((x_r - x_g) * y_w - (x_w - x_g) * y_r) + (x_w - x_r) * y_g)) / z_w;
    X_B = (Y_B * x_b) / y_b;
    Z_B = Y_B * (((float )1 - x_b) / y_b - (float )1);
    X_W = (X_R * R + X_G * G) + X_B * B;
    Y_W = (Y_R * R + Y_G * G) + Y_B * B;
    Z_W = (Z_R * R + Z_G * G) + Z_B * B;
    X_W /= Y_W;
    Z_W /= Y_W;
    Y_W = (float )1.0;
  } else {

  }
  tmp___2 = t2pWriteFile(output, (tdata_t )"<< \n", (tmsize_t )4);
  written += tmp___2;
  if ((unsigned int )t2p->pdf_colorspace & 32U) {
    tmp___3 = t2pWriteFile(output, (tdata_t )"/WhitePoint ", (tmsize_t )12);
    written += tmp___3;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"[%.4f %.4f %.4f] \n",
                     (double )X_W, (double )Y_W, (double )Z_W);
    tmp___4 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___4;
    tmp___5 = t2pWriteFile(output, (tdata_t )"/Gamma 2.2 \n", (tmsize_t )12);
    written += tmp___5;
  } else {

  }
  if ((unsigned int )t2p->pdf_colorspace & 64U) {
    tmp___6 = t2pWriteFile(output, (tdata_t )"/WhitePoint ", (tmsize_t )12);
    written += tmp___6;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"[%.4f %.4f %.4f] \n",
                     (double )X_W, (double )Y_W, (double )Z_W);
    tmp___7 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___7;
    tmp___8 = t2pWriteFile(output, (tdata_t )"/Matrix ", (tmsize_t )8);
    written += tmp___8;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"[%.4f %.4f %.4f %.4f %.4f %.4f %.4f %.4f %.4f] \n",
                     (double )X_R, (double )Y_R, (double )Z_R, (double )X_G,
                     (double )Y_G, (double )Z_G, (double )X_B, (double )Y_B,
                     (double )Z_B);
    tmp___9 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___9;
    tmp___10 = t2pWriteFile(output, (tdata_t )"/Gamma [2.2 2.2 2.2] \n",
                            (tmsize_t )22);
    written += tmp___10;
  } else {

  }
  tmp___11 = t2pWriteFile(output, (tdata_t )">>] \n", (tmsize_t )5);
  written += tmp___11;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_icccs(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"[/ICCBased ", (tmsize_t )11);
  written += tmp;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )t2p->pdf_icccs);
  tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___0;
  tmp___1 = t2pWriteFile(output, (tdata_t )" 0 R] \n", (tmsize_t )7);
  written += tmp___1;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_icccs_dict(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tsize_t tmp___2 ;
  tsize_t tmp___3 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  tmp = t2pWriteFile(output, (tdata_t )"/N ", (tmsize_t )3);
  written += tmp;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%u \n",
                   (int )t2p->tiff_samplesperpixel);
  tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___0;
  tmp___1 = t2pWriteFile(output, (tdata_t )"/Alternate ", (tmsize_t )11);
  written += tmp___1;
  t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace ^ 128U);
  tmp___2 = t2p_write_pdf_xobject_cs(t2p, output);
  written += tmp___2;
  t2p->pdf_colorspace = (t2p_cs_t )((unsigned int )t2p->pdf_colorspace | 128U);
  tmp___3 = t2p_write_pdf_stream_dict((tsize_t )t2p->tiff_iccprofilelength,
                                      (uint32 )0, output);
  written += tmp___3;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_icccs_stream(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  tsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2p_write_pdf_stream(t2p->tiff_iccprofile,
                             (tsize_t )t2p->tiff_iccprofilelength, output);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_palettecs_stream(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  tsize_t tmp ;

  {
  written = (tsize_t )0;
  tmp = t2p_write_pdf_stream((tdata_t )t2p->pdf_palette,
                             (tsize_t )t2p->pdf_palettesize, output);
  written += tmp;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_decode(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  int i ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;

  {
  written = (tsize_t )0;
  i = 0;
  tmp = t2pWriteFile(output, (tdata_t )"/Decode [ ", (tmsize_t )10);
  written += tmp;
  i = 0;
  while (i < (int )t2p->tiff_samplesperpixel) {
    tmp___0 = t2pWriteFile(output, (tdata_t )"1 0 ", (tmsize_t )4);
    written += tmp___0;
    i ++;
  }
  tmp___1 = t2pWriteFile(output, (tdata_t )"]\n", (tmsize_t )2);
  written += tmp___1;
  return (written);
}
}
tsize_t t2p_write_pdf_xobject_stream_filter(ttile_t tile , T2P *t2p ,
                                            TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[16] ;
  int buflen ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  int tmp___11 ;
  tmsize_t tmp___12 ;
  tmsize_t tmp___13 ;
  tmsize_t tmp___14 ;
  tmsize_t tmp___15 ;
  int tmp___16 ;
  tmsize_t tmp___17 ;
  tmsize_t tmp___18 ;
  tmsize_t tmp___19 ;
  tmsize_t tmp___20 ;
  tmsize_t tmp___21 ;
  tmsize_t tmp___22 ;
  tmsize_t tmp___23 ;
  tmsize_t tmp___24 ;
  tmsize_t tmp___25 ;
  tmsize_t tmp___26 ;
  tmsize_t tmp___27 ;
  tmsize_t tmp___28 ;
  tmsize_t tmp___29 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  if ((unsigned int )t2p->pdf_compression == 0U) {
    return (written);
  } else {

  }
  tmp = t2pWriteFile(output, (tdata_t )"/Filter ", (tmsize_t )8);
  written += tmp;
  switch ((unsigned int )t2p->pdf_compression) {
  case 1U: 
  tmp___0 = t2pWriteFile(output, (tdata_t )"/CCITTFaxDecode ", (tmsize_t )16);
  written += tmp___0;
  tmp___1 = t2pWriteFile(output, (tdata_t )"/DecodeParms ", (tmsize_t )13);
  written += tmp___1;
  tmp___2 = t2pWriteFile(output, (tdata_t )"<< /K -1 ", (tmsize_t )9);
  written += tmp___2;
  if (tile == 0U) {
    tmp___3 = t2pWriteFile(output, (tdata_t )"/Columns ", (tmsize_t )9);
    written += tmp___3;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )t2p->tiff_width);
    tmp___4 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___4;
    tmp___5 = t2pWriteFile(output, (tdata_t )" /Rows ", (tmsize_t )7);
    written += tmp___5;
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )t2p->tiff_length);
    tmp___6 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___6;
  } else {
    tmp___11 = t2p_tile_is_right_edge(*(t2p->tiff_tiles + t2p->pdf_page),
                                      tile - 1U);
    if (tmp___11 == 0) {
      tmp___7 = t2pWriteFile(output, (tdata_t )"/Columns ", (tmsize_t )9);
      written += tmp___7;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_tilewidth);
      tmp___8 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___8;
    } else {
      tmp___9 = t2pWriteFile(output, (tdata_t )"/Columns ", (tmsize_t )9);
      written += tmp___9;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilewidth);
      tmp___10 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___10;
    }
    tmp___16 = t2p_tile_is_bottom_edge(*(t2p->tiff_tiles + t2p->pdf_page),
                                       tile - 1U);
    if (tmp___16 == 0) {
      tmp___12 = t2pWriteFile(output, (tdata_t )" /Rows ", (tmsize_t )7);
      written += tmp___12;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_tilelength);
      tmp___13 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___13;
    } else {
      tmp___14 = t2pWriteFile(output, (tdata_t )" /Rows ", (tmsize_t )7);
      written += tmp___14;
      buflen = sprintf((char */* __restrict  */)(buffer),
                       (char const   */* __restrict  */)"%lu",
                       (unsigned long )(t2p->tiff_tiles + t2p->pdf_page)->tiles_edgetilelength);
      tmp___15 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
      written += tmp___15;
    }
  }
  if ((int )t2p->pdf_switchdecode == 0) {
    tmp___17 = t2pWriteFile(output, (tdata_t )" /BlackIs1 true ", (tmsize_t )16);
    written += tmp___17;
  } else {

  }
  tmp___18 = t2pWriteFile(output, (tdata_t )">>\n", (tmsize_t )3);
  written += tmp___18;
  break;
  case 4U: 
  tmp___19 = t2pWriteFile(output, (tdata_t )"/FlateDecode ", (tmsize_t )13);
  written += tmp___19;
  if ((int )t2p->pdf_compressionquality % 100) {
    tmp___20 = t2pWriteFile(output, (tdata_t )"/DecodeParms ", (tmsize_t )13);
    written += tmp___20;
    tmp___21 = t2pWriteFile(output, (tdata_t )"<< /Predictor ", (tmsize_t )14);
    written += tmp___21;
    _TIFFmemset((void *)(buffer), 0, (tmsize_t )16);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%u",
                     (int )t2p->pdf_compressionquality % 100);
    tmp___22 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___22;
    tmp___23 = t2pWriteFile(output, (tdata_t )" /Columns ", (tmsize_t )10);
    written += tmp___23;
    _TIFFmemset((void *)(buffer), 0, (tmsize_t )16);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%lu",
                     (unsigned long )t2p->tiff_width);
    tmp___24 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___24;
    tmp___25 = t2pWriteFile(output, (tdata_t )" /Colors ", (tmsize_t )9);
    written += tmp___25;
    _TIFFmemset((void *)(buffer), 0, (tmsize_t )16);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%u",
                     (int )t2p->tiff_samplesperpixel);
    tmp___26 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___26;
    tmp___27 = t2pWriteFile(output, (tdata_t )" /BitsPerComponent ",
                            (tmsize_t )19);
    written += tmp___27;
    _TIFFmemset((void *)(buffer), 0, (tmsize_t )16);
    buflen = sprintf((char */* __restrict  */)(buffer),
                     (char const   */* __restrict  */)"%u",
                     (int )t2p->tiff_bitspersample);
    tmp___28 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
    written += tmp___28;
    tmp___29 = t2pWriteFile(output, (tdata_t )">>\n", (tmsize_t )3);
    written += tmp___29;
  } else {

  }
  break;
  default: 
  break;
  }
  return (written);
}
}
tsize_t t2p_write_pdf_xreftable(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[21] ;
  int buflen ;
  uint32 i ;
  tmsize_t tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  i = (uint32 )0;
  tmp = t2pWriteFile(output, (tdata_t )"xref\n0 ", (tmsize_t )7);
  written += tmp;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )(t2p->pdf_xrefcount + 1U));
  tmp___0 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___0;
  tmp___1 = t2pWriteFile(output, (tdata_t )" \n0000000000 65535 f \n",
                         (tmsize_t )22);
  written += tmp___1;
  i = (uint32 )0;
  while (i < t2p->pdf_xrefcount) {
    sprintf((char */* __restrict  */)(buffer),
            (char const   */* __restrict  */)"%.10lu 00000 n \n",
            (unsigned long )*(t2p->pdf_xrefoffsets + i));
    tmp___2 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )20);
    written += tmp___2;
    i ++;
  }
  return (written);
}
}
tsize_t t2p_write_pdf_trailer(T2P *t2p , TIFF *output ) 
{ 
  tsize_t written ;
  char buffer[32] ;
  int buflen ;
  char fileidbuf[16] ;
  int i ;
  void *tmp ;
  tmsize_t tmp___0 ;
  tmsize_t tmp___1 ;
  tmsize_t tmp___2 ;
  tmsize_t tmp___3 ;
  tmsize_t tmp___4 ;
  tmsize_t tmp___5 ;
  tmsize_t tmp___6 ;
  tmsize_t tmp___7 ;
  tmsize_t tmp___8 ;
  tmsize_t tmp___9 ;
  tmsize_t tmp___10 ;
  tmsize_t tmp___11 ;
  tmsize_t tmp___12 ;

  {
  written = (tsize_t )0;
  buflen = 0;
  i = 0;
  *((int *)(fileidbuf) + 0) = rand();
  *((int *)(fileidbuf) + 1) = rand();
  *((int *)(fileidbuf) + 2) = rand();
  *((int *)(fileidbuf) + 3) = rand();
  tmp = _TIFFmalloc((tmsize_t )33);
  t2p->pdf_fileid = (unsigned char *)tmp;
  if ((unsigned int )t2p->pdf_fileid == (unsigned int )((void *)0)) {
    TIFFError("tiff2pdf",
              "Can\'t allocate %u bytes of memory for t2p_write_pdf_trailer", 33);
    t2p->t2p_error = (t2p_err_t )1;
    return ((tsize_t )0);
  } else {

  }
  _TIFFmemset((void *)t2p->pdf_fileid, 0, (tmsize_t )33);
  i = 0;
  while (i < 16) {
    sprintf((char */* __restrict  */)((char *)t2p->pdf_fileid + 2 * i),
            (char const   */* __restrict  */)"%.2hhX", (int )fileidbuf[i]);
    i ++;
  }
  tmp___0 = t2pWriteFile(output, (tdata_t )"trailer\n<<\n/Size ", (tmsize_t )17);
  written += tmp___0;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )(t2p->pdf_xrefcount + 1U));
  tmp___1 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___1;
  _TIFFmemset((void *)(buffer), 0, (tmsize_t )32);
  tmp___2 = t2pWriteFile(output, (tdata_t )"\n/Root ", (tmsize_t )7);
  written += tmp___2;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )t2p->pdf_catalog);
  tmp___3 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___3;
  _TIFFmemset((void *)(buffer), 0, (tmsize_t )32);
  tmp___4 = t2pWriteFile(output, (tdata_t )" 0 R \n/Info ", (tmsize_t )12);
  written += tmp___4;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )t2p->pdf_info);
  tmp___5 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___5;
  _TIFFmemset((void *)(buffer), 0, (tmsize_t )32);
  tmp___6 = t2pWriteFile(output, (tdata_t )" 0 R \n/ID[<", (tmsize_t )11);
  written += tmp___6;
  tmp___7 = t2pWriteFile(output, (tdata_t )t2p->pdf_fileid, (tmsize_t )32);
  written += tmp___7;
  tmp___8 = t2pWriteFile(output, (tdata_t )"><", (tmsize_t )2);
  written += tmp___8;
  tmp___9 = t2pWriteFile(output, (tdata_t )t2p->pdf_fileid, (tmsize_t )32);
  written += tmp___9;
  tmp___10 = t2pWriteFile(output, (tdata_t )">]\n>>\nstartxref\n", (tmsize_t )16);
  written += tmp___10;
  buflen = sprintf((char */* __restrict  */)(buffer),
                   (char const   */* __restrict  */)"%lu",
                   (unsigned long )t2p->pdf_startxref);
  tmp___11 = t2pWriteFile(output, (tdata_t )(buffer), (tmsize_t )buflen);
  written += tmp___11;
  _TIFFmemset((void *)(buffer), 0, (tmsize_t )32);
  tmp___12 = t2pWriteFile(output, (tdata_t )"\n%%EOF\n", (tmsize_t )7);
  written += tmp___12;
  return (written);
}
}
tsize_t t2p_write_pdf(T2P *t2p , TIFF *input , TIFF *output ) 
{ 
  tsize_t written ;
  ttile_t i2 ;
  tsize_t streamlen ;
  uint16 i ;
  void *tmp ;
  tsize_t tmp___0 ;
  uint32 tmp___1 ;
  tsize_t tmp___2 ;
  tsize_t tmp___3 ;
  tsize_t tmp___4 ;
  uint32 tmp___5 ;
  tsize_t tmp___6 ;
  tsize_t tmp___7 ;
  tsize_t tmp___8 ;
  uint32 tmp___9 ;
  tsize_t tmp___10 ;
  tsize_t tmp___11 ;
  tsize_t tmp___12 ;
  uint32 tmp___13 ;
  tsize_t tmp___14 ;
  tsize_t tmp___15 ;
  tsize_t tmp___16 ;
  uint32 tmp___17 ;
  tsize_t tmp___18 ;
  tsize_t tmp___19 ;
  tsize_t tmp___20 ;
  tsize_t tmp___21 ;
  tsize_t tmp___22 ;
  tsize_t tmp___23 ;
  tsize_t tmp___24 ;
  tsize_t tmp___25 ;
  uint32 tmp___26 ;
  tsize_t tmp___27 ;
  tsize_t tmp___28 ;
  tsize_t tmp___29 ;
  uint32 tmp___30 ;
  tsize_t tmp___31 ;
  tsize_t tmp___32 ;
  tsize_t tmp___33 ;
  uint32 tmp___34 ;
  tsize_t tmp___35 ;
  tsize_t tmp___36 ;
  tsize_t tmp___37 ;
  tsize_t tmp___38 ;
  tsize_t tmp___39 ;
  tsize_t tmp___40 ;
  tsize_t tmp___41 ;
  tsize_t tmp___42 ;
  uint32 tmp___43 ;
  tsize_t tmp___44 ;
  tsize_t tmp___45 ;
  tsize_t tmp___46 ;
  tsize_t tmp___47 ;
  tsize_t tmp___48 ;
  tsize_t tmp___49 ;
  tsize_t tmp___50 ;
  tsize_t tmp___51 ;
  uint32 tmp___52 ;
  tsize_t tmp___53 ;
  tsize_t tmp___54 ;
  tsize_t tmp___55 ;
  tsize_t tmp___56 ;
  tsize_t tmp___57 ;
  tsize_t tmp___58 ;
  tsize_t tmp___59 ;
  tsize_t tmp___60 ;
  uint32 tmp___61 ;
  tsize_t tmp___62 ;
  tsize_t tmp___63 ;
  tsize_t tmp___64 ;
  tsize_t tmp___65 ;
  tsize_t tmp___66 ;
  tsize_t tmp___67 ;
  tsize_t tmp___68 ;
  tsize_t tmp___69 ;
  uint32 tmp___70 ;
  tsize_t tmp___71 ;
  tsize_t tmp___72 ;
  tsize_t tmp___73 ;
  uint32 tmp___74 ;
  tsize_t tmp___75 ;
  tsize_t tmp___76 ;
  tsize_t tmp___77 ;
  tsize_t tmp___78 ;
  tsize_t tmp___79 ;
  tsize_t tmp___80 ;
  tsize_t tmp___81 ;
  tsize_t tmp___82 ;
  uint32 tmp___83 ;
  tsize_t tmp___84 ;
  tsize_t tmp___85 ;
  tsize_t tmp___86 ;
  tsize_t tmp___87 ;
  tsize_t tmp___88 ;

  {
  written = (tsize_t )0;
  i2 = (ttile_t )0;
  streamlen = (tsize_t )0;
  i = (uint16 )0;
  t2p_read_tiff_init(t2p, input);
  if ((unsigned int )t2p->t2p_error != 0U) {
    return ((tsize_t )0);
  } else {

  }
  tmp = _TIFFmalloc((tmsize_t )(t2p->pdf_xrefcount * sizeof(uint32 )));
  t2p->pdf_xrefoffsets = (uint32 *)tmp;
  if ((unsigned int )t2p->pdf_xrefoffsets == (unsigned int )((void *)0)) {
    TIFFError("tiff2pdf",
              "Can\'t allocate %u bytes of memory for t2p_write_pdf",
              t2p->pdf_xrefcount * sizeof(uint32 ));
    return (written);
  } else {

  }
  t2p->pdf_xrefcount = (uint32 )0;
  t2p->pdf_catalog = (uint32 )1;
  t2p->pdf_info = (uint32 )2;
  t2p->pdf_pages = (uint32 )3;
  tmp___0 = t2p_write_pdf_header(t2p, output);
  written += tmp___0;
  tmp___1 = t2p->pdf_xrefcount;
  (t2p->pdf_xrefcount) ++;
  *(t2p->pdf_xrefoffsets + tmp___1) = (uint32 )written;
  t2p->pdf_catalog = t2p->pdf_xrefcount;
  tmp___2 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
  written += tmp___2;
  tmp___3 = t2p_write_pdf_catalog(t2p, output);
  written += tmp___3;
  tmp___4 = t2p_write_pdf_obj_end(output);
  written += tmp___4;
  tmp___5 = t2p->pdf_xrefcount;
  (t2p->pdf_xrefcount) ++;
  *(t2p->pdf_xrefoffsets + tmp___5) = (uint32 )written;
  t2p->pdf_info = t2p->pdf_xrefcount;
  tmp___6 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
  written += tmp___6;
  tmp___7 = t2p_write_pdf_info(t2p, input, output);
  written += tmp___7;
  tmp___8 = t2p_write_pdf_obj_end(output);
  written += tmp___8;
  tmp___9 = t2p->pdf_xrefcount;
  (t2p->pdf_xrefcount) ++;
  *(t2p->pdf_xrefoffsets + tmp___9) = (uint32 )written;
  t2p->pdf_pages = t2p->pdf_xrefcount;
  tmp___10 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
  written += tmp___10;
  tmp___11 = t2p_write_pdf_pages(t2p, output);
  written += tmp___11;
  tmp___12 = t2p_write_pdf_obj_end(output);
  written += tmp___12;
  t2p->pdf_page = (tdir_t )0;
  while ((int )t2p->pdf_page < (int )t2p->tiff_pagecount) {
    t2p_read_tiff_data(t2p, input);
    if ((unsigned int )t2p->t2p_error != 0U) {
      return ((tsize_t )0);
    } else {

    }
    tmp___13 = t2p->pdf_xrefcount;
    (t2p->pdf_xrefcount) ++;
    *(t2p->pdf_xrefoffsets + tmp___13) = (uint32 )written;
    tmp___14 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
    written += tmp___14;
    tmp___15 = t2p_write_pdf_page(t2p->pdf_xrefcount, t2p, output);
    written += tmp___15;
    tmp___16 = t2p_write_pdf_obj_end(output);
    written += tmp___16;
    tmp___17 = t2p->pdf_xrefcount;
    (t2p->pdf_xrefcount) ++;
    *(t2p->pdf_xrefoffsets + tmp___17) = (uint32 )written;
    tmp___18 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
    written += tmp___18;
    tmp___19 = t2p_write_pdf_stream_dict_start(output);
    written += tmp___19;
    tmp___20 = t2p_write_pdf_stream_dict((tsize_t )0, t2p->pdf_xrefcount + 1U,
                                         output);
    written += tmp___20;
    tmp___21 = t2p_write_pdf_stream_dict_end(output);
    written += tmp___21;
    tmp___22 = t2p_write_pdf_stream_start(output);
    written += tmp___22;
    streamlen = written;
    tmp___23 = t2p_write_pdf_page_content_stream(t2p, output);
    written += tmp___23;
    streamlen = written - streamlen;
    tmp___24 = t2p_write_pdf_stream_end(output);
    written += tmp___24;
    tmp___25 = t2p_write_pdf_obj_end(output);
    written += tmp___25;
    tmp___26 = t2p->pdf_xrefcount;
    (t2p->pdf_xrefcount) ++;
    *(t2p->pdf_xrefoffsets + tmp___26) = (uint32 )written;
    tmp___27 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
    written += tmp___27;
    tmp___28 = t2p_write_pdf_stream_length(streamlen, output);
    written += tmp___28;
    tmp___29 = t2p_write_pdf_obj_end(output);
    written += tmp___29;
    if ((int )t2p->tiff_transferfunctioncount != 0) {
      tmp___30 = t2p->pdf_xrefcount;
      (t2p->pdf_xrefcount) ++;
      *(t2p->pdf_xrefoffsets + tmp___30) = (uint32 )written;
      tmp___31 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
      written += tmp___31;
      tmp___32 = t2p_write_pdf_transfer(t2p, output);
      written += tmp___32;
      tmp___33 = t2p_write_pdf_obj_end(output);
      written += tmp___33;
      i = (uint16 )0;
      while ((int )i < (int )t2p->tiff_transferfunctioncount) {
        tmp___34 = t2p->pdf_xrefcount;
        (t2p->pdf_xrefcount) ++;
        *(t2p->pdf_xrefoffsets + tmp___34) = (uint32 )written;
        tmp___35 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
        written += tmp___35;
        tmp___36 = t2p_write_pdf_stream_dict_start(output);
        written += tmp___36;
        tmp___37 = t2p_write_pdf_transfer_dict(t2p, output, i);
        written += tmp___37;
        tmp___38 = t2p_write_pdf_stream_dict_end(output);
        written += tmp___38;
        tmp___39 = t2p_write_pdf_stream_start(output);
        written += tmp___39;
        streamlen = written;
        tmp___40 = t2p_write_pdf_transfer_stream(t2p, output, i);
        written += tmp___40;
        streamlen = written - streamlen;
        tmp___41 = t2p_write_pdf_stream_end(output);
        written += tmp___41;
        tmp___42 = t2p_write_pdf_obj_end(output);
        written += tmp___42;
        i = (uint16 )((int )i + 1);
      }
    } else {

    }
    if (((unsigned int )t2p->pdf_colorspace & 4096U) != 0U) {
      tmp___43 = t2p->pdf_xrefcount;
      (t2p->pdf_xrefcount) ++;
      *(t2p->pdf_xrefoffsets + tmp___43) = (uint32 )written;
      t2p->pdf_palettecs = t2p->pdf_xrefcount;
      tmp___44 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
      written += tmp___44;
      tmp___45 = t2p_write_pdf_stream_dict_start(output);
      written += tmp___45;
      tmp___46 = t2p_write_pdf_stream_dict((tsize_t )t2p->pdf_palettesize,
                                           (uint32 )0, output);
      written += tmp___46;
      tmp___47 = t2p_write_pdf_stream_dict_end(output);
      written += tmp___47;
      tmp___48 = t2p_write_pdf_stream_start(output);
      written += tmp___48;
      streamlen = written;
      tmp___49 = t2p_write_pdf_xobject_palettecs_stream(t2p, output);
      written += tmp___49;
      streamlen = written - streamlen;
      tmp___50 = t2p_write_pdf_stream_end(output);
      written += tmp___50;
      tmp___51 = t2p_write_pdf_obj_end(output);
      written += tmp___51;
    } else {

    }
    if (((unsigned int )t2p->pdf_colorspace & 128U) != 0U) {
      tmp___52 = t2p->pdf_xrefcount;
      (t2p->pdf_xrefcount) ++;
      *(t2p->pdf_xrefoffsets + tmp___52) = (uint32 )written;
      t2p->pdf_icccs = t2p->pdf_xrefcount;
      tmp___53 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
      written += tmp___53;
      tmp___54 = t2p_write_pdf_stream_dict_start(output);
      written += tmp___54;
      tmp___55 = t2p_write_pdf_xobject_icccs_dict(t2p, output);
      written += tmp___55;
      tmp___56 = t2p_write_pdf_stream_dict_end(output);
      written += tmp___56;
      tmp___57 = t2p_write_pdf_stream_start(output);
      written += tmp___57;
      streamlen = written;
      tmp___58 = t2p_write_pdf_xobject_icccs_stream(t2p, output);
      written += tmp___58;
      streamlen = written - streamlen;
      tmp___59 = t2p_write_pdf_stream_end(output);
      written += tmp___59;
      tmp___60 = t2p_write_pdf_obj_end(output);
      written += tmp___60;
    } else {

    }
    if ((t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount != 0U) {
      i2 = (ttile_t )0;
      while (i2 < (t2p->tiff_tiles + t2p->pdf_page)->tiles_tilecount) {
        tmp___61 = t2p->pdf_xrefcount;
        (t2p->pdf_xrefcount) ++;
        *(t2p->pdf_xrefoffsets + tmp___61) = (uint32 )written;
        tmp___62 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
        written += tmp___62;
        tmp___63 = t2p_write_pdf_stream_dict_start(output);
        written += tmp___63;
        tmp___64 = t2p_write_pdf_xobject_stream_dict(i2 + 1U, t2p, output);
        written += tmp___64;
        tmp___65 = t2p_write_pdf_stream_dict_end(output);
        written += tmp___65;
        tmp___66 = t2p_write_pdf_stream_start(output);
        written += tmp___66;
        streamlen = written;
        t2p_read_tiff_size_tile(t2p, input, i2);
        tmp___67 = t2p_readwrite_pdf_image_tile(t2p, input, output, i2);
        written += tmp___67;
        t2p_write_advance_directory(t2p, output);
        if ((unsigned int )t2p->t2p_error != 0U) {
          return ((tsize_t )0);
        } else {

        }
        streamlen = written - streamlen;
        tmp___68 = t2p_write_pdf_stream_end(output);
        written += tmp___68;
        tmp___69 = t2p_write_pdf_obj_end(output);
        written += tmp___69;
        tmp___70 = t2p->pdf_xrefcount;
        (t2p->pdf_xrefcount) ++;
        *(t2p->pdf_xrefoffsets + tmp___70) = (uint32 )written;
        tmp___71 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
        written += tmp___71;
        tmp___72 = t2p_write_pdf_stream_length(streamlen, output);
        written += tmp___72;
        tmp___73 = t2p_write_pdf_obj_end(output);
        written += tmp___73;
        i2 ++;
      }
    } else {
      tmp___74 = t2p->pdf_xrefcount;
      (t2p->pdf_xrefcount) ++;
      *(t2p->pdf_xrefoffsets + tmp___74) = (uint32 )written;
      tmp___75 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
      written += tmp___75;
      tmp___76 = t2p_write_pdf_stream_dict_start(output);
      written += tmp___76;
      tmp___77 = t2p_write_pdf_xobject_stream_dict((ttile_t )0, t2p, output);
      written += tmp___77;
      tmp___78 = t2p_write_pdf_stream_dict_end(output);
      written += tmp___78;
      tmp___79 = t2p_write_pdf_stream_start(output);
      written += tmp___79;
      streamlen = written;
      t2p_read_tiff_size(t2p, input);
      tmp___80 = t2p_readwrite_pdf_image(t2p, input, output);
      written += tmp___80;
      t2p_write_advance_directory(t2p, output);
      if ((unsigned int )t2p->t2p_error != 0U) {
        return ((tsize_t )0);
      } else {

      }
      streamlen = written - streamlen;
      tmp___81 = t2p_write_pdf_stream_end(output);
      written += tmp___81;
      tmp___82 = t2p_write_pdf_obj_end(output);
      written += tmp___82;
      tmp___83 = t2p->pdf_xrefcount;
      (t2p->pdf_xrefcount) ++;
      *(t2p->pdf_xrefoffsets + tmp___83) = (uint32 )written;
      tmp___84 = t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
      written += tmp___84;
      tmp___85 = t2p_write_pdf_stream_length(streamlen, output);
      written += tmp___85;
      tmp___86 = t2p_write_pdf_obj_end(output);
      written += tmp___86;
    }
    t2p->pdf_page = (tdir_t )((int )t2p->pdf_page + 1);
  }
  t2p->pdf_startxref = (uint32 )written;
  tmp___87 = t2p_write_pdf_xreftable(t2p, output);
  written += tmp___87;
  tmp___88 = t2p_write_pdf_trailer(t2p, output);
  written += tmp___88;
  t2p_disable(output);
  return (written);
}
}
