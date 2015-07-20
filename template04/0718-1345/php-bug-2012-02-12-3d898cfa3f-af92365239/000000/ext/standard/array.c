typedef unsigned int size_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_1 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_2 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_1 __wait_terminated ;
   struct __anonstruct___wait_stopped_2 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_3 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_3  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_4 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_4 div_t;
struct __anonstruct_ldiv_t_5 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_5 ldiv_t;
struct __anonstruct_lldiv_t_6 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_6 lldiv_t;
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
struct __anonstruct___fsid_t_7 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_7 __fsid_t;
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
typedef __ino_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
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
struct __anonstruct___sigset_t_8 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_8 __sigset_t;
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
struct __anonstruct_fd_set_9 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_9 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_10 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_10 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_12 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_12 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_11 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_13 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_13 pthread_mutexattr_t;
struct __anonstruct___data_15 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_14 {
   struct __anonstruct___data_15 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_14 pthread_cond_t;
union __anonunion_pthread_condattr_t_16 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_16 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_18 {
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
union __anonunion_pthread_rwlock_t_17 {
   struct __anonstruct___data_18 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_17 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_19 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_19 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_20 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_20 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_21 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_21 pthread_barrierattr_t;
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
typedef long double float_t;
typedef long double double_t;
enum __anonenum_22 {
    FP_NAN = 0,
    FP_INFINITE = 1,
    FP_ZERO = 2,
    FP_SUBNORMAL = 3,
    FP_NORMAL = 4
} ;
enum __anonenum__LIB_VERSION_TYPE_23 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;
typedef enum __anonenum__LIB_VERSION_TYPE_23 _LIB_VERSION_TYPE;
struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};
union __anonunion___u_24 {
   float __f ;
   int __i ;
};
union __anonunion___u_25 {
   double __d ;
   int __i[2] ;
};
union __anonunion___u_26 {
   long double __l ;
   int __i[3] ;
};
union __anonunion___n_27 {
   long double __xld ;
   unsigned int __xi[3] ;
};
union __anonunion_28 {
   double __d ;
   int __i[2] ;
};
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_30 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_29 {
   int __count ;
   union __anonunion___value_30 __value ;
};
typedef struct __anonstruct___mbstate_t_29 __mbstate_t;
struct __anonstruct__G_fpos_t_31 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_31 _G_fpos_t;
struct __anonstruct__G_fpos64_t_32 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_32 _G_fpos64_t;
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
struct __anonstruct__IO_cookie_io_functions_t_33 {
   __io_read_fn *read ;
   __io_write_fn *write ;
   __io_seek_fn *seek ;
   __io_close_fn *close ;
};
typedef struct __anonstruct__IO_cookie_io_functions_t_33 _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
struct _IO_cookie_file;
typedef __gnuc_va_list va_list;
typedef _G_fpos_t fpos_t;
typedef _G_fpos64_t fpos64_t;
struct obstack;
struct obstack;
typedef long Lmid_t;
struct __anonstruct_Dl_info_34 {
   char const   *dli_fname ;
   void *dli_fbase ;
   char const   *dli_sname ;
   void *dli_saddr ;
};
typedef struct __anonstruct_Dl_info_34 Dl_info;
enum __anonenum_35 {
    RTLD_DL_SYMENT = 1,
    RTLD_DL_LINKMAP = 2
} ;
enum __anonenum_36 {
    RTLD_DI_LMID = 1,
    RTLD_DI_LINKMAP = 2,
    RTLD_DI_CONFIGADDR = 3,
    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,
    RTLD_DI_ORIGIN = 6,
    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,
    RTLD_DI_TLS_MODID = 9,
    RTLD_DI_TLS_DATA = 10,
    RTLD_DI_MAX = 10
} ;
struct __anonstruct_Dl_serpath_37 {
   char *dls_name ;
   unsigned int dls_flags ;
};
typedef struct __anonstruct_Dl_serpath_37 Dl_serpath;
struct __anonstruct_Dl_serinfo_38 {
   size_t dls_size ;
   unsigned int dls_cnt ;
   Dl_serpath dls_serpath[1] ;
};
typedef struct __anonstruct_Dl_serinfo_38 Dl_serinfo;
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
struct __anonstruct_str_39 {
   char *val ;
   int len ;
};
union _zvalue_value {
   long lval ;
   double dval ;
   struct __anonstruct_str_39 str ;
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
struct __anonstruct_user_41 {
   char const   *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char const   *doc_comment ;
   zend_uint doc_comment_len ;
};
struct _zend_function_entry;
struct _zend_module_entry;
struct __anonstruct_internal_42 {
   struct _zend_function_entry  const  *builtin_functions ;
   struct _zend_module_entry *module ;
};
union __anonunion_info_40 {
   struct __anonstruct_user_41 user ;
   struct __anonstruct_internal_42 internal ;
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
   union __anonunion_info_40 info ;
};
typedef size_t (*zend_stream_fsizer_t)(void *handle );
typedef size_t (*zend_stream_reader_t)(void *handle , char *buf , size_t len );
typedef void (*zend_stream_closer_t)(void *handle );
enum __anonenum_zend_stream_type_43 {
    ZEND_HANDLE_FILENAME = 0,
    ZEND_HANDLE_FD = 1,
    ZEND_HANDLE_FP = 2,
    ZEND_HANDLE_STREAM = 3,
    ZEND_HANDLE_MAPPED = 4
} ;
typedef enum __anonenum_zend_stream_type_43 zend_stream_type;
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
union __anonunion_handle_44 {
   int fd ;
   FILE *fp ;
   zend_stream stream ;
};
struct _zend_file_handle {
   zend_stream_type type ;
   char const   *filename ;
   char *opened_path ;
   union __anonunion_handle_44 handle ;
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
   void (*block_interruptions)(void) ;
   void (*unblock_interruptions)(void) ;
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
union __anonunion_u_45 {
   zval *pz ;
   zend_object_handlers const   *handlers ;
};
struct _gc_root_buffer {
   struct _gc_root_buffer *prev ;
   struct _gc_root_buffer *next ;
   zend_object_handle handle ;
   union __anonunion_u_45 u ;
};
typedef struct _gc_root_buffer gc_root_buffer;
union __anonunion_u_46 {
   gc_root_buffer *buffered ;
   struct _zval_gc_info *next ;
};
struct _zval_gc_info {
   zval z ;
   union __anonunion_u_46 u ;
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
typedef int error_t;
enum __anonenum_zend_error_handling_t_47 {
    EH_NORMAL = 0,
    EH_SUPPRESS = 1,
    EH_THROW = 2
} ;
typedef enum __anonenum_zend_error_handling_t_47 zend_error_handling_t;
struct __anonstruct_zend_error_handling_48 {
   zend_error_handling_t handling ;
   zend_class_entry *exception ;
   zval *user_handler ;
};
typedef struct __anonstruct_zend_error_handling_48 zend_error_handling;
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
union __anonunion_u_49 {
   znode_op op ;
   zval constant ;
   zend_op_array *op_array ;
};
struct _znode {
   int op_type ;
   union __anonunion_u_49 u ;
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
struct __anonstruct_common_50 {
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
   struct __anonstruct_common_50 common ;
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
struct __anonstruct_free_list_51 {
   int next ;
};
union _store_bucket {
   struct _store_object obj ;
   struct __anonstruct_free_list_51 free_list ;
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
struct _zend_ini_entry;
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
struct __anonstruct_var_52 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
};
struct __anonstruct_str_offset_53 {
   zval **ptr_ptr ;
   zval *str ;
   zend_uint offset ;
};
struct __anonstruct_fe_54 {
   zval **ptr_ptr ;
   zval *ptr ;
   HashPointer fe_pos ;
};
union _temp_variable {
   zval tmp_var ;
   struct __anonstruct_var_52 var ;
   struct __anonstruct_str_offset_53 str_offset ;
   struct __anonstruct_fe_54 fe ;
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
enum __anonenum_55 {
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
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_56 {
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
enum __anonenum_57 {
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
enum __anonenum_58 {
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
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
typedef int bool_int;
enum __anonenum_boolean_e_59 {
    NO = 0,
    YES = 1
} ;
typedef enum __anonenum_boolean_e_59 boolean_e;
enum __anonenum_length_modifier_e_60 {
    LM_STD = 0,
    LM_INTMAX_T = 1,
    LM_PTRDIFF_T = 2,
    LM_LONG_LONG = 3,
    LM_SIZE_T = 4,
    LM_LONG = 5,
    LM_LONG_DOUBLE = 6
} ;
typedef enum __anonenum_length_modifier_e_60 length_modifier_e;
typedef long long wide_int;
typedef unsigned long long u_wide_int;
enum _php_output_handler_status_t {
    PHP_OUTPUT_HANDLER_FAILURE = 0,
    PHP_OUTPUT_HANDLER_SUCCESS = 1,
    PHP_OUTPUT_HANDLER_NO_DATA = 2
} ;
typedef enum _php_output_handler_status_t php_output_handler_status_t;
enum _php_output_handler_hook_t {
    PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ = 0,
    PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS = 1,
    PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL = 2,
    PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE = 3,
    PHP_OUTPUT_HANDLER_HOOK_DISABLE = 4,
    PHP_OUTPUT_HANDLER_HOOK_LAST = 5
} ;
typedef enum _php_output_handler_hook_t php_output_handler_hook_t;
struct _php_output_buffer {
   char *data ;
   size_t size ;
   size_t used ;
   uint free : 1 ;
   uint _res : 31 ;
};
typedef struct _php_output_buffer php_output_buffer;
struct _php_output_context {
   int op ;
   php_output_buffer in ;
   php_output_buffer out ;
};
typedef struct _php_output_context php_output_context;
typedef void (*php_output_handler_func_t)(char *output , uint output_len ,
                                          char **handled_output ,
                                          uint *handled_output_len , int mode );
typedef int (*php_output_handler_context_func_t)(void **handler_context ,
                                                 php_output_context *output_context );
typedef void (*php_output_handler_context_dtor_t)(void *opaq );
typedef int (*php_output_handler_conflict_check_t)(char const   *handler_name ,
                                                   size_t handler_name_len );
struct _php_output_handler;
typedef struct _php_output_handler *(*php_output_handler_alias_ctor_t)(char const   *handler_name ,
                                                                       size_t handler_name_len ,
                                                                       size_t chunk_size ,
                                                                       int flags );
struct _php_output_handler_user_func_t {
   zend_fcall_info fci ;
   zend_fcall_info_cache fcc ;
   zval *zoh ;
};
typedef struct _php_output_handler_user_func_t php_output_handler_user_func_t;
union __anonunion_func_61 {
   php_output_handler_user_func_t *user ;
   int (*internal)(void **handler_context , php_output_context *output_context ) ;
};
struct _php_output_handler {
   char *name ;
   size_t name_len ;
   int flags ;
   int level ;
   size_t size ;
   php_output_buffer buffer ;
   void *opaq ;
   void (*dtor)(void *opaq ) ;
   union __anonunion_func_61 func ;
};
typedef struct _php_output_handler php_output_handler;
struct _zend_output_globals {
   int flags ;
   zend_stack handlers ;
   php_output_handler *active ;
   php_output_handler *running ;
   char const   *output_start_filename ;
   int output_start_lineno ;
};
typedef struct _zend_output_globals zend_output_globals;
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
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
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
struct _php_stream;
typedef struct _php_stream php_stream;
struct _php_stream_wrapper;
typedef struct _php_stream_wrapper php_stream_wrapper;
struct _php_stream_context;
typedef struct _php_stream_context php_stream_context;
struct _php_stream_filter;
typedef struct _php_stream_filter php_stream_filter;
typedef void (*php_stream_notification_func)(php_stream_context *context ,
                                             int notifycode , int severity ,
                                             char *xmsg , int xcode ,
                                             size_t bytes_sofar ,
                                             size_t bytes_max , void *ptr );
struct _php_stream_notifier;
typedef struct _php_stream_notifier php_stream_notifier;
struct _php_stream_notifier {
   void (*func)(php_stream_context *context , int notifycode , int severity ,
                char *xmsg , int xcode , size_t bytes_sofar , size_t bytes_max ,
                void *ptr ) ;
   void (*dtor)(php_stream_notifier *notifier ) ;
   void *ptr ;
   int mask ;
   size_t progress ;
   size_t progress_max ;
};
struct _php_stream_context {
   php_stream_notifier *notifier ;
   zval *options ;
   zval *links ;
   int rsrc_id ;
};
struct _php_stream_bucket;
typedef struct _php_stream_bucket php_stream_bucket;
struct _php_stream_bucket_brigade;
typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;
struct _php_stream_bucket {
   php_stream_bucket *next ;
   php_stream_bucket *prev ;
   php_stream_bucket_brigade *brigade ;
   char *buf ;
   size_t buflen ;
   int own_buf ;
   int is_persistent ;
   int refcount ;
};
struct _php_stream_bucket_brigade {
   php_stream_bucket *head ;
   php_stream_bucket *tail ;
};
enum __anonenum_php_stream_filter_status_t_62 {
    PSFS_ERR_FATAL = 0,
    PSFS_FEED_ME = 1,
    PSFS_PASS_ON = 2
} ;
typedef enum __anonenum_php_stream_filter_status_t_62 php_stream_filter_status_t;
struct _php_stream_filter_ops {
   php_stream_filter_status_t (*filter)(php_stream *stream ,
                                        php_stream_filter *thisfilter ,
                                        php_stream_bucket_brigade *buckets_in ,
                                        php_stream_bucket_brigade *buckets_out ,
                                        size_t *bytes_consumed , int flags ) ;
   void (*dtor)(php_stream_filter *thisfilter ) ;
   char const   *label ;
};
typedef struct _php_stream_filter_ops php_stream_filter_ops;
struct _php_stream_filter_chain {
   php_stream_filter *head ;
   php_stream_filter *tail ;
   php_stream *stream ;
};
typedef struct _php_stream_filter_chain php_stream_filter_chain;
struct _php_stream_filter {
   php_stream_filter_ops *fops ;
   void *abstract ;
   php_stream_filter *next ;
   php_stream_filter *prev ;
   int is_persistent ;
   php_stream_filter_chain *chain ;
   php_stream_bucket_brigade buffer ;
   int rsrc_id ;
};
struct _php_stream_filter_factory {
   php_stream_filter *(*create_filter)(char const   *filtername ,
                                       zval *filterparams , int persistent ) ;
};
typedef struct _php_stream_filter_factory php_stream_filter_factory;
struct _php_stream_statbuf {
   struct stat sb ;
};
typedef struct _php_stream_statbuf php_stream_statbuf;
struct _php_stream_dirent {
   char d_name[4096] ;
};
typedef struct _php_stream_dirent php_stream_dirent;
struct _php_stream_ops {
   size_t (*write)(php_stream *stream , char const   *buf , size_t count ) ;
   size_t (*read)(php_stream *stream , char *buf , size_t count ) ;
   int (*close)(php_stream *stream , int close_handle ) ;
   int (*flush)(php_stream *stream ) ;
   char const   *label ;
   int (*seek)(php_stream *stream , off_t offset , int whence ,
               off_t *newoffset ) ;
   int (*cast)(php_stream *stream , int castas , void **ret ) ;
   int (*stat)(php_stream *stream , php_stream_statbuf *ssb ) ;
   int (*set_option)(php_stream *stream , int option , int value ,
                     void *ptrparam ) ;
};
typedef struct _php_stream_ops php_stream_ops;
struct _php_stream_wrapper_ops {
   php_stream *(*stream_opener)(php_stream_wrapper *wrapper , char *filename ,
                                char *mode , int options , char **opened_path ,
                                php_stream_context *context ) ;
   int (*stream_closer)(php_stream_wrapper *wrapper , php_stream *stream ) ;
   int (*stream_stat)(php_stream_wrapper *wrapper , php_stream *stream ,
                      php_stream_statbuf *ssb ) ;
   int (*url_stat)(php_stream_wrapper *wrapper , char *url , int flags ,
                   php_stream_statbuf *ssb , php_stream_context *context ) ;
   php_stream *(*dir_opener)(php_stream_wrapper *wrapper , char *filename ,
                             char *mode , int options , char **opened_path ,
                             php_stream_context *context ) ;
   char const   *label ;
   int (*unlink)(php_stream_wrapper *wrapper , char *url , int options ,
                 php_stream_context *context ) ;
   int (*rename)(php_stream_wrapper *wrapper , char *url_from , char *url_to ,
                 int options , php_stream_context *context ) ;
   int (*stream_mkdir)(php_stream_wrapper *wrapper , char *url , int mode ,
                       int options , php_stream_context *context ) ;
   int (*stream_rmdir)(php_stream_wrapper *wrapper , char *url , int options ,
                       php_stream_context *context ) ;
   int (*stream_metadata)(php_stream_wrapper *wrapper , char *url ,
                          int options , void *value ,
                          php_stream_context *context ) ;
};
typedef struct _php_stream_wrapper_ops php_stream_wrapper_ops;
struct _php_stream_wrapper {
   php_stream_wrapper_ops *wops ;
   void *abstract ;
   int is_url ;
   int err_count ;
   char **err_stack ;
};
struct _php_stream {
   php_stream_ops *ops ;
   void *abstract ;
   php_stream_filter_chain readfilters ;
   php_stream_filter_chain writefilters ;
   php_stream_wrapper *wrapper ;
   void *wrapperthis ;
   zval *wrapperdata ;
   int fgetss_state ;
   int is_persistent ;
   char mode[16] ;
   int rsrc_id ;
   int in_free ;
   int fclose_stdiocast ;
   FILE *stdiocast ;
   char *orig_path ;
   php_stream_context *context ;
   int flags ;
   off_t position ;
   unsigned char *readbuf ;
   size_t readbuflen ;
   off_t readpos ;
   off_t writepos ;
   size_t chunk_size ;
   int eof ;
   struct _php_stream *enclosing_stream ;
};
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
enum __anonenum_63 {
    MSG_OOB = 1,
    MSG_PEEK = 2,
    MSG_DONTROUTE = 4,
    MSG_TRYHARD = 4,
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
struct mmsghdr {
   struct msghdr msg_hdr ;
   unsigned int msg_len ;
};
struct cmsghdr {
   size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
   unsigned char __cmsg_data[] ;
};
enum __anonenum_64 {
    SCM_RIGHTS = 1,
    SCM_CREDENTIALS = 2
} ;
struct ucred {
   pid_t pid ;
   uid_t uid ;
   gid_t gid ;
};
struct linger {
   int l_onoff ;
   int l_linger ;
};
struct osockaddr {
   unsigned short sa_family ;
   unsigned char sa_data[14] ;
};
enum __anonenum_65 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;
struct sockaddr_at;
struct sockaddr_ax25;
struct sockaddr_dl;
struct sockaddr_eon;
struct sockaddr_in;
struct sockaddr_in6;
struct sockaddr_inarp;
struct sockaddr_ipx;
struct sockaddr_iso;
struct sockaddr_ns;
struct sockaddr_un;
struct sockaddr_x25;
union __anonunion___SOCKADDR_ARG_66 {
   struct sockaddr * __restrict  __sockaddr__ ;
   struct sockaddr_at * __restrict  __sockaddr_at__ ;
   struct sockaddr_ax25 * __restrict  __sockaddr_ax25__ ;
   struct sockaddr_dl * __restrict  __sockaddr_dl__ ;
   struct sockaddr_eon * __restrict  __sockaddr_eon__ ;
   struct sockaddr_in * __restrict  __sockaddr_in__ ;
   struct sockaddr_in6 * __restrict  __sockaddr_in6__ ;
   struct sockaddr_inarp * __restrict  __sockaddr_inarp__ ;
   struct sockaddr_ipx * __restrict  __sockaddr_ipx__ ;
   struct sockaddr_iso * __restrict  __sockaddr_iso__ ;
   struct sockaddr_ns * __restrict  __sockaddr_ns__ ;
   struct sockaddr_un * __restrict  __sockaddr_un__ ;
   struct sockaddr_x25 * __restrict  __sockaddr_x25__ ;
};
typedef union __anonunion___SOCKADDR_ARG_66  __attribute__((__transparent_union__)) __SOCKADDR_ARG;
union __anonunion___CONST_SOCKADDR_ARG_67 {
   struct sockaddr  const  * __restrict  __sockaddr__ ;
   struct sockaddr_at  const  * __restrict  __sockaddr_at__ ;
   struct sockaddr_ax25  const  * __restrict  __sockaddr_ax25__ ;
   struct sockaddr_dl  const  * __restrict  __sockaddr_dl__ ;
   struct sockaddr_eon  const  * __restrict  __sockaddr_eon__ ;
   struct sockaddr_in  const  * __restrict  __sockaddr_in__ ;
   struct sockaddr_in6  const  * __restrict  __sockaddr_in6__ ;
   struct sockaddr_inarp  const  * __restrict  __sockaddr_inarp__ ;
   struct sockaddr_ipx  const  * __restrict  __sockaddr_ipx__ ;
   struct sockaddr_iso  const  * __restrict  __sockaddr_iso__ ;
   struct sockaddr_ns  const  * __restrict  __sockaddr_ns__ ;
   struct sockaddr_un  const  * __restrict  __sockaddr_un__ ;
   struct sockaddr_x25  const  * __restrict  __sockaddr_x25__ ;
};
typedef union __anonunion___CONST_SOCKADDR_ARG_67  __attribute__((__transparent_union__)) __CONST_SOCKADDR_ARG;
typedef php_stream *php_stream_transport_factory_func(char const   *proto ,
                                                      long protolen ,
                                                      char *resourcename ,
                                                      long resourcenamelen ,
                                                      char const   *persistent_id ,
                                                      int options , int flags ,
                                                      struct timeval *timeout ,
                                                      php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;
enum php_stream_xport_send_recv_flags {
    STREAM_OOB = 1,
    STREAM_PEEK = 2
} ;
enum __anonenum_stream_shutdown_t_68 {
    STREAM_SHUT_RD = 0,
    STREAM_SHUT_WR = 1,
    STREAM_SHUT_RDWR = 2
} ;
typedef enum __anonenum_stream_shutdown_t_68 stream_shutdown_t;
enum __anonenum_op_69 {
    STREAM_XPORT_OP_BIND = 0,
    STREAM_XPORT_OP_CONNECT = 1,
    STREAM_XPORT_OP_LISTEN = 2,
    STREAM_XPORT_OP_ACCEPT = 3,
    STREAM_XPORT_OP_CONNECT_ASYNC = 4,
    STREAM_XPORT_OP_GET_NAME = 5,
    STREAM_XPORT_OP_GET_PEER_NAME = 6,
    STREAM_XPORT_OP_RECV = 7,
    STREAM_XPORT_OP_SEND = 8,
    STREAM_XPORT_OP_SHUTDOWN = 9
} ;
struct __anonstruct_inputs_70 {
   char *name ;
   long namelen ;
   int backlog ;
   struct timeval *timeout ;
   struct sockaddr *addr ;
   socklen_t addrlen ;
   char *buf ;
   size_t buflen ;
   long flags ;
};
struct __anonstruct_outputs_71 {
   php_stream *client ;
   int returncode ;
   struct sockaddr *addr ;
   socklen_t addrlen ;
   char *textaddr ;
   long textaddrlen ;
   char *error_text ;
   int error_code ;
};
struct _php_stream_xport_param {
   enum __anonenum_op_69 op ;
   unsigned int want_addr : 1 ;
   unsigned int want_textaddr : 1 ;
   unsigned int want_errortext : 1 ;
   unsigned int how : 2 ;
   struct __anonstruct_inputs_70 inputs ;
   struct __anonstruct_outputs_71 outputs ;
};
typedef struct _php_stream_xport_param php_stream_xport_param;
enum __anonenum_php_stream_xport_crypt_method_t_72 {
    STREAM_CRYPTO_METHOD_SSLv2_CLIENT = 0,
    STREAM_CRYPTO_METHOD_SSLv3_CLIENT = 1,
    STREAM_CRYPTO_METHOD_SSLv23_CLIENT = 2,
    STREAM_CRYPTO_METHOD_TLS_CLIENT = 3,
    STREAM_CRYPTO_METHOD_SSLv2_SERVER = 4,
    STREAM_CRYPTO_METHOD_SSLv3_SERVER = 5,
    STREAM_CRYPTO_METHOD_SSLv23_SERVER = 6,
    STREAM_CRYPTO_METHOD_TLS_SERVER = 7
} ;
typedef enum __anonenum_php_stream_xport_crypt_method_t_72 php_stream_xport_crypt_method_t;
enum __anonenum_op_73 {
    STREAM_XPORT_CRYPTO_OP_SETUP = 0,
    STREAM_XPORT_CRYPTO_OP_ENABLE = 1
} ;
struct __anonstruct_inputs_74 {
   int activate ;
   php_stream_xport_crypt_method_t method ;
   php_stream *session ;
};
struct __anonstruct_outputs_75 {
   int returncode ;
};
struct _php_stream_xport_crypto_param {
   enum __anonenum_op_73 op ;
   struct __anonstruct_inputs_74 inputs ;
   struct __anonstruct_outputs_75 outputs ;
};
typedef struct _php_stream_xport_crypto_param php_stream_xport_crypto_param;
enum __anonenum_php_stream_mmap_operation_t_76 {
    PHP_STREAM_MMAP_SUPPORTED = 0,
    PHP_STREAM_MMAP_MAP_RANGE = 1,
    PHP_STREAM_MMAP_UNMAP = 2
} ;
typedef enum __anonenum_php_stream_mmap_operation_t_76 php_stream_mmap_operation_t;
enum __anonenum_php_stream_mmap_access_t_77 {
    PHP_STREAM_MAP_MODE_READONLY = 0,
    PHP_STREAM_MAP_MODE_READWRITE = 1,
    PHP_STREAM_MAP_MODE_SHARED_READONLY = 2,
    PHP_STREAM_MAP_MODE_SHARED_READWRITE = 3
} ;
typedef enum __anonenum_php_stream_mmap_access_t_77 php_stream_mmap_access_t;
struct __anonstruct_php_stream_mmap_range_78 {
   size_t offset ;
   size_t length ;
   php_stream_mmap_access_t mode ;
   char *mapped ;
};
typedef struct __anonstruct_php_stream_mmap_range_78 php_stream_mmap_range;
struct _php_core_globals;
typedef struct _php_core_globals php_core_globals;
struct _php_tick_function_entry;
struct _php_tick_function_entry;
struct _arg_separators {
   char *output ;
   char *input ;
};
typedef struct _arg_separators arg_separators;
struct _php_core_globals {
   zend_bool implicit_flush ;
   long output_buffering ;
   zend_bool sql_safe_mode ;
   zend_bool enable_dl ;
   char *output_handler ;
   char *unserialize_callback_func ;
   long serialize_precision ;
   long memory_limit ;
   long max_input_time ;
   zend_bool track_errors ;
   zend_bool display_errors ;
   zend_bool display_startup_errors ;
   zend_bool log_errors ;
   long log_errors_max_len ;
   zend_bool ignore_repeated_errors ;
   zend_bool ignore_repeated_source ;
   zend_bool report_memleaks ;
   char *error_log ;
   char *doc_root ;
   char *user_dir ;
   char *include_path ;
   char *open_basedir ;
   char *extension_dir ;
   char *php_binary ;
   char *upload_tmp_dir ;
   long upload_max_filesize ;
   char *error_append_string ;
   char *error_prepend_string ;
   char *auto_prepend_file ;
   char *auto_append_file ;
   arg_separators arg_separator ;
   char *variables_order ;
   HashTable rfc1867_protected_variables ;
   short connection_status ;
   short ignore_user_abort ;
   unsigned char header_is_being_sent ;
   zend_llist tick_functions ;
   zval *http_globals[6] ;
   zend_bool expose_php ;
   zend_bool register_argc_argv ;
   zend_bool auto_globals_jit ;
   char *docref_root ;
   char *docref_ext ;
   zend_bool html_errors ;
   zend_bool xmlrpc_errors ;
   long xmlrpc_error_number ;
   zend_bool activated_auto_globals[8] ;
   zend_bool modules_activated ;
   zend_bool file_uploads ;
   zend_bool during_request_startup ;
   zend_bool allow_url_fopen ;
   zend_bool enable_post_data_reading ;
   zend_bool always_populate_raw_post_data ;
   zend_bool report_zend_debug ;
   int last_error_type ;
   char *last_error_message ;
   char *last_error_file ;
   int last_error_lineno ;
   char *disable_functions ;
   char *disable_classes ;
   zend_bool allow_url_include ;
   zend_bool exit_on_timeout ;
   long max_input_nesting_level ;
   long max_input_vars ;
   zend_bool in_user_include ;
   char *user_ini_filename ;
   long user_ini_cache_ttl ;
   char *request_order ;
   zend_bool mail_x_header ;
   char *mail_log ;
   zend_bool in_error_log ;
};
struct _zend_ini_entry {
   int module_number ;
   int modifiable ;
   char *name ;
   uint name_length ;
   int (*on_modify)(zend_ini_entry *entry , char *new_value ,
                    uint new_value_length , void *mh_arg1 , void *mh_arg2 ,
                    void *mh_arg3 , int stage ) ;
   void *mh_arg1 ;
   void *mh_arg2 ;
   void *mh_arg3 ;
   char *value ;
   uint value_length ;
   char *orig_value ;
   uint orig_value_length ;
   int orig_modifiable ;
   int modified ;
   void (*displayer)(zend_ini_entry *ini_entry , int type ) ;
};
typedef void (*zend_ini_parser_cb_t)(zval *arg1 , zval *arg2 , zval *arg3 ,
                                     int callback_type , void *arg );
struct _zend_ini_parser_param {
   void (*ini_parser_cb)(zval *arg1 , zval *arg2 , zval *arg3 ,
                         int callback_type , void *arg ) ;
   void *arg ;
};
typedef struct _zend_ini_parser_param zend_ini_parser_param;
struct utimbuf {
   __time_t actime ;
   __time_t modtime ;
};
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
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
enum __anonenum_79 {
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
struct _cwd_state {
   char *cwd ;
   int cwd_length ;
};
typedef struct _cwd_state cwd_state;
typedef int (*verify_path_func)(cwd_state const   * );
struct _realpath_cache_bucket {
   unsigned long key ;
   char *path ;
   int path_len ;
   char *realpath ;
   int realpath_len ;
   int is_dir ;
   time_t expires ;
   struct _realpath_cache_bucket *next ;
};
typedef struct _realpath_cache_bucket realpath_cache_bucket;
struct _virtual_cwd_globals {
   cwd_state cwd ;
   long realpath_cache_size ;
   long realpath_cache_size_limit ;
   long realpath_cache_ttl ;
   realpath_cache_bucket *realpath_cache[1024] ;
};
typedef struct _virtual_cwd_globals virtual_cwd_globals;
struct _zend_constant {
   zval value ;
   int flags ;
   char *name ;
   uint name_len ;
   int module_number ;
};
typedef struct _zend_constant zend_constant;
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
struct _zend_user_iterator {
   zend_object_iterator it ;
   zend_class_entry *ce ;
   zval *value ;
};
typedef struct _zend_user_iterator zend_user_iterator;
struct _zend_array_globals {
   int *multisort_flags[2] ;
   int (*compare_func)(zval *result , zval *op1 , zval *op2 ) ;
};
typedef struct _zend_array_globals zend_array_globals;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct tm;
typedef int php_stat_len;
struct _zend_syntax_highlighter_ini {
   char *highlight_html ;
   char *highlight_comment ;
   char *highlight_default ;
   char *highlight_string ;
   char *highlight_keyword ;
};
typedef struct _zend_syntax_highlighter_ini zend_syntax_highlighter_ini;
struct __anonstruct_smart_str_80 {
   char *c ;
   size_t len ;
   size_t a ;
};
typedef struct __anonstruct_smart_str_80 smart_str;
struct __anonstruct_url_adapt_state_ex_t_81 {
   smart_str tag ;
   smart_str arg ;
   smart_str val ;
   smart_str buf ;
   smart_str result ;
   smart_str form_app ;
   smart_str url_app ;
   int active ;
   char *lookup_data ;
   int state ;
   HashTable *tags ;
};
typedef struct __anonstruct_url_adapt_state_ex_t_81 url_adapt_state_ex_t;
typedef unsigned int php_uint32;
typedef int php_int32;
struct __anonstruct_serialize_82 {
   void *var_hash ;
   unsigned int level ;
};
struct __anonstruct_unserialize_83 {
   void *var_hash ;
   unsigned int level ;
};
struct _php_basic_globals {
   HashTable *user_shutdown_function_names ;
   HashTable putenv_ht ;
   zval *strtok_zval ;
   char *strtok_string ;
   char *locale_string ;
   char *strtok_last ;
   char strtok_table[256] ;
   ulong strtok_len ;
   char str_ebuf[40] ;
   zend_fcall_info array_walk_fci ;
   zend_fcall_info_cache array_walk_fci_cache ;
   zend_fcall_info user_compare_fci ;
   zend_fcall_info_cache user_compare_fci_cache ;
   zend_llist *user_tick_functions ;
   zval *active_ini_file_section ;
   long page_uid ;
   long page_gid ;
   long page_inode ;
   time_t page_mtime ;
   char *CurrentStatFile ;
   char *CurrentLStatFile ;
   php_stream_statbuf ssb ;
   php_stream_statbuf lssb ;
   php_uint32 state[625] ;
   php_uint32 *next ;
   int left ;
   unsigned int rand_seed ;
   zend_bool rand_is_seeded ;
   zend_bool mt_rand_is_seeded ;
   char *syslog_device ;
   zend_class_entry *incomplete_class ;
   unsigned int serialize_lock ;
   struct __anonstruct_serialize_82 serialize ;
   struct __anonstruct_unserialize_83 unserialize ;
   url_adapt_state_ex_t url_adapt_state_ex ;
   void *mmap_file ;
   size_t mmap_len ;
   HashTable *user_filter_map ;
   int umask ;
};
typedef struct _php_basic_globals php_basic_globals;
struct __anonstruct_putenv_entry_84 {
   char *putenv_string ;
   char *previous_value ;
   char *key ;
   int key_len ;
};
typedef struct __anonstruct_putenv_entry_84 putenv_entry;
struct _php_shutdown_function_entry {
   zval **arguments ;
   int arg_count ;
};
typedef struct _php_shutdown_function_entry php_shutdown_function_entry;
struct lconv;
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
struct _zend_spl_globals {
   char *autoload_extensions ;
   HashTable *autoload_functions ;
   int autoload_running ;
   int autoload_extensions_len ;
   intptr_t hash_mask_handle ;
   intptr_t hash_mask_handlers ;
   int hash_mask_init ;
};
typedef struct _zend_spl_globals zend_spl_globals;
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
   unsigned char **mark ;
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
enum __anonenum_85 {
    __LC_CTYPE = 0,
    __LC_NUMERIC = 1,
    __LC_TIME = 2,
    __LC_COLLATE = 3,
    __LC_MONETARY = 4,
    __LC_MESSAGES = 5,
    __LC_ALL = 6,
    __LC_PAPER = 7,
    __LC_NAME = 8,
    __LC_ADDRESS = 9,
    __LC_TELEPHONE = 10,
    __LC_MEASUREMENT = 11,
    __LC_IDENTIFICATION = 12
} ;
struct lconv {
   char *decimal_point ;
   char *thousands_sep ;
   char *grouping ;
   char *int_curr_symbol ;
   char *currency_symbol ;
   char *mon_decimal_point ;
   char *mon_thousands_sep ;
   char *mon_grouping ;
   char *positive_sign ;
   char *negative_sign ;
   char int_frac_digits ;
   char frac_digits ;
   char p_cs_precedes ;
   char p_sep_by_space ;
   char n_cs_precedes ;
   char n_sep_by_space ;
   char p_sign_posn ;
   char n_sign_posn ;
   char int_p_cs_precedes ;
   char int_p_sep_by_space ;
   char int_n_cs_precedes ;
   char int_n_sep_by_space ;
   char int_p_sign_posn ;
   char int_n_sign_posn ;
};
struct __anonstruct_pcre_cache_entry_86 {
   pcre *re ;
   pcre_extra *extra ;
   int preg_options ;
   char *locale ;
   unsigned char const   *tables ;
   int compile_options ;
   int refcount ;
};
typedef struct __anonstruct_pcre_cache_entry_86 pcre_cache_entry;
struct _zend_pcre_globals {
   HashTable pcre_cache ;
   long backtrack_limit ;
   long recursion_limit ;
   int error_code ;
};
typedef struct _zend_pcre_globals zend_pcre_globals;
enum __anonenum_dual_it_type_87 {
    DIT_Default = 0,
    DIT_FilterIterator = 0,
    DIT_RecursiveFilterIterator = 0,
    DIT_ParentIterator = 0,
    DIT_LimitIterator = 1,
    DIT_CachingIterator = 2,
    DIT_RecursiveCachingIterator = 3,
    DIT_IteratorIterator = 4,
    DIT_NoRewindIterator = 5,
    DIT_InfiniteIterator = 6,
    DIT_AppendIterator = 7,
    DIT_RegexIterator = 8,
    DIT_RecursiveRegexIterator = 9,
    DIT_CallbackFilterIterator = 10,
    DIT_RecursiveCallbackFilterIterator = 11,
    DIT_Unknown = -1
} ;
typedef enum __anonenum_dual_it_type_87 dual_it_type;
enum __anonenum_recursive_it_it_type_88 {
    RIT_Default = 0,
    RIT_RecursiveIteratorIterator = 0,
    RIT_RecursiveTreeIterator = 1,
    RIT_Unknow = -1
} ;
typedef enum __anonenum_recursive_it_it_type_88 recursive_it_it_type;
enum __anonenum_89 {
    CIT_CALL_TOSTRING = 1,
    CIT_TOSTRING_USE_KEY = 2,
    CIT_TOSTRING_USE_CURRENT = 4,
    CIT_TOSTRING_USE_INNER = 8,
    CIT_CATCH_GET_CHILD = 16,
    CIT_FULL_CACHE = 256,
    CIT_PUBLIC = 65535,
    CIT_VALID = 65536,
    CIT_HAS_CHILDREN = 131072
} ;
enum __anonenum_90 {
    REGIT_USE_KEY = 1,
    REGIT_INVERTED = 2
} ;
enum __anonenum_regex_mode_91 {
    REGIT_MODE_MATCH = 0,
    REGIT_MODE_GET_MATCH = 1,
    REGIT_MODE_ALL_MATCHES = 2,
    REGIT_MODE_SPLIT = 3,
    REGIT_MODE_REPLACE = 4,
    REGIT_MODE_MAX = 5
} ;
typedef enum __anonenum_regex_mode_91 regex_mode;
struct _spl_cbfilter_it_intern {
   zend_fcall_info fci ;
   zend_fcall_info_cache fcc ;
};
typedef struct _spl_cbfilter_it_intern _spl_cbfilter_it_intern;
struct __anonstruct_inner_92 {
   zval *zobject ;
   zend_class_entry *ce ;
   zend_object *object ;
   zend_object_iterator *iterator ;
};
struct __anonstruct_current_93 {
   zval *data ;
   char *str_key ;
   uint str_key_len ;
   ulong int_key ;
   int key_type ;
   int pos ;
};
struct __anonstruct_limit_95 {
   long offset ;
   long count ;
};
struct __anonstruct_caching_96 {
   long flags ;
   zval *zstr ;
   zval *zchildren ;
   zval *zcache ;
};
struct __anonstruct_append_97 {
   zval *zarrayit ;
   zend_object_iterator *iterator ;
};
struct __anonstruct_regex_98 {
   int use_flags ;
   long flags ;
   regex_mode mode ;
   long preg_flags ;
   pcre_cache_entry *pce ;
   char *regex ;
   uint regex_len ;
};
union __anonunion_u_94 {
   struct __anonstruct_limit_95 limit ;
   struct __anonstruct_caching_96 caching ;
   struct __anonstruct_append_97 append ;
   struct __anonstruct_regex_98 regex ;
   _spl_cbfilter_it_intern *cbfilter ;
};
struct _spl_dual_it_object {
   zend_object std ;
   struct __anonstruct_inner_92 inner ;
   struct __anonstruct_current_93 current ;
   dual_it_type dit_type ;
   union __anonunion_u_94 u ;
};
typedef struct _spl_dual_it_object spl_dual_it_object;
typedef int (*spl_iterator_apply_func_t)(zend_object_iterator *iter ,
                                         void *puser );
struct bucketindex {
   Bucket *b ;
   unsigned int i ;
};
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
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemp64)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemps)(char *__template ,
                                                       int __suffixlen ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemps64)(char *__template ,
                                                         int __suffixlen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mkdtemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemp)(char *__template ,
                                                       int __flags ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemp64)(char *__template ,
                                                         int __flags ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemps)(char *__template ,
                                                        int __suffixlen ,
                                                        int __flags ) ;
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
  union __anonunion___u_24 __u ;

  {
  __u.__f = __x;
  return (__u.__i < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
__inline extern int __signbit(double __x ) 
{ 
  union __anonunion___u_25 __u ;

  {
  __u.__d = __x;
  return (__u.__i[1] < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
__inline extern int __signbitl(long double __x ) 
{ 
  union __anonunion___u_26 __u ;

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
  union __anonunion___n_27 __n ;

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
  union __anonunion_28 __constr_expr_0 ;

  {
  __constr_expr_0.__d = __x;
  return ((int )((((unsigned int )__constr_expr_0.__i[1] | 2148532223U) + 1U) >> 31));
}
}
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
extern FILE *tmpfile(void) ;
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
                   char const   * __restrict  __modes ) ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
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
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
extern __off_t ftello(FILE *__stream ) ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;
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
extern  __attribute__((__nothrow__)) void _dl_mcount_wrapper_check(void *__selfpc ) ;
extern  __attribute__((__nothrow__)) void *dlopen(char const   *__file ,
                                                  int __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) dlclose)(void *__handle ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(2))) dlsym)(void * __restrict  __handle ,
                                                                                    char const   * __restrict  __name ) ;
extern  __attribute__((__nothrow__)) void *dlmopen(Lmid_t __nsid ,
                                                   char const   *__file ,
                                                   int __mode ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(2,3))) dlvsym)(void * __restrict  __handle ,
                                                                                       char const   * __restrict  __name ,
                                                                                       char const   * __restrict  __version ) ;
extern  __attribute__((__nothrow__)) char *dlerror(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) dladdr)(void const   *__address ,
                                                                                   Dl_info *__info ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) dladdr1)(void const   *__address ,
                                                                                    Dl_info *__info ,
                                                                                    void **__extra_info ,
                                                                                    int __flags ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,3))) dlinfo)(void * __restrict  __handle ,
                                                                                     int __request ,
                                                                                     void * __restrict  __arg ) ;
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
extern void __attribute__((__visibility__("default")))  (*zend_block_interruptions)(void) ;
extern void __attribute__((__visibility__("default")))  (*zend_unblock_interruptions)(void) ;
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
extern char *program_invocation_name ;
extern char *program_invocation_short_name ;
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
extern void __attribute__((__visibility__("default")))  _zval_ptr_dtor(zval **zval_ptr ) ;
extern void __attribute__((__visibility__("default")))  _zval_internal_dtor(zval *zvalue ) ;
extern void __attribute__((__visibility__("default")))  _zval_internal_ptr_dtor(zval **zvalue ) ;
extern void __attribute__((__visibility__("default")))  _zval_dtor_wrapper(zval *zvalue ) ;
extern void __attribute__((__visibility__("default")))  zval_add_ref(zval **p ) ;
extern void __attribute__((__visibility__("default")))  zend_save_error_handling(zend_error_handling *current ) ;
extern void __attribute__((__visibility__("default")))  zend_replace_error_handling(zend_error_handling_t error_handling ,
                                                                                    zend_class_entry *exception_class ,
                                                                                    zend_error_handling *current ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_error_handling(zend_error_handling *saved ) ;
extern void __attribute__((__visibility__("default")))  zend_qsort(void *base ,
                                                                   size_t nmemb ,
                                                                   size_t siz ,
                                                                   int (*compare)(void const   * ,
                                                                                  void const   * ) ) ;
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
extern HashTable __attribute__((__visibility__("default")))  module_registry ;
extern void module_destructor(zend_module_entry *module ) ;
extern int module_registry_cleanup(zend_module_entry *module ) ;
extern int module_registry_request_startup(zend_module_entry *module ) ;
extern int module_registry_unload_temp(zend_module_entry const   *module ) ;
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
extern void __attribute__((__visibility__("default")))  (*zend_execute)(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  (*zend_execute_internal)(zend_execute_data *execute_data_ptr ,
                                                                                 int return_value_used ) ;
extern void init_executor(void) ;
extern void shutdown_executor(void) ;
extern void shutdown_destructors(void) ;
extern void __attribute__((__visibility__("default")))  execute(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  execute_internal(zend_execute_data *execute_data_ptr ,
                                                                         int return_value_used ) ;
extern int __attribute__((__visibility__("default")))  zend_is_true(zval *op ) ;
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
extern int __attribute__((__visibility__("default")))  zend_lookup_class(char const   *name ,
                                                                         int name_length ,
                                                                         zend_class_entry ***ce ) ;
extern int __attribute__((__visibility__("default")))  zend_lookup_class_ex(char const   *name ,
                                                                            int name_length ,
                                                                            zend_literal const   *key ,
                                                                            int use_autoload ,
                                                                            zend_class_entry ***ce ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_string(char *str ,
                                                                        zval *retval_ptr ,
                                                                        char *string_name ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_stringl(char *str ,
                                                                         int str_len ,
                                                                         zval *retval_ptr ,
                                                                         char *string_name ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_string_ex(char *str ,
                                                                           zval *retval_ptr ,
                                                                           char *string_name ,
                                                                           int handle_exceptions ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_stringl_ex(char *str ,
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
extern int __attribute__((__visibility__("default")))  zval_update_constant(zval **pp ,
                                                                            void *arg ) ;
extern int __attribute__((__visibility__("default")))  zval_update_constant_inline_change(zval **pp ,
                                                                                          void *arg ) ;
extern int __attribute__((__visibility__("default")))  zval_update_constant_no_inline_change(zval **pp ,
                                                                                             void *arg ) ;
extern int __attribute__((__visibility__("default")))  zval_update_constant_ex(zval **pp ,
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
extern void execute_new_code(void) ;
extern char const __attribute__((__visibility__("default")))  *get_active_class_name(char const   **space ) ;
extern char const __attribute__((__visibility__("default")))  *get_active_function_name(void) ;
extern char const __attribute__((__visibility__("default")))  *zend_get_executed_filename(void) ;
extern uint __attribute__((__visibility__("default")))  zend_get_executed_lineno(void) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_executing(void) ;
extern void __attribute__((__visibility__("default")))  zend_set_timeout(long seconds ,
                                                                         int reset_signals ) ;
extern void __attribute__((__visibility__("default")))  zend_unset_timeout(void) ;
extern void __attribute__((__visibility__("default")))  zend_timeout(int dummy ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class(char const   *class_name ,
                                                                                      uint class_name_len ,
                                                                                      int fetch_type ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class_by_name(char const   *class_name ,
                                                                                              uint class_name_len ,
                                                                                              zend_literal const   *key ,
                                                                                              int fetch_type ) ;
extern void zend_verify_abstract_class(zend_class_entry *ce ) ;
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
extern int __attribute__((__visibility__("default")))  call_user_function(HashTable *function_table ,
                                                                          zval **object_pp ,
                                                                          zval *function_name ,
                                                                          zval *retval_ptr ,
                                                                          zend_uint param_count ,
                                                                          zval **params ) ;
extern int __attribute__((__visibility__("default")))  call_user_function_ex(HashTable *function_table ,
                                                                             zval **object_pp ,
                                                                             zval *function_name ,
                                                                             zval **retval_ptr_ptr ,
                                                                             zend_uint param_count ,
                                                                             zval ***params ,
                                                                             int no_separation ,
                                                                             HashTable *symbol_table ) ;
extern zend_fcall_info const __attribute__((__visibility__("default")))  empty_fcall_info ;
extern zend_fcall_info_cache const __attribute__((__visibility__("default")))  empty_fcall_info_cache ;
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
extern int __attribute__((__visibility__("default")))  zend_call_function(zend_fcall_info *fci ,
                                                                          zend_fcall_info_cache *fci_cache ) ;
extern int __attribute__((__visibility__("default")))  zend_set_hash_symbol(zval *symbol ,
                                                                            char const   *name ,
                                                                            int name_length ,
                                                                            zend_bool is_ref ,
                                                                            int num_symbol_tables 
                                                                            , ...) ;
extern void __attribute__((__visibility__("default")))  zend_delete_variable(zend_execute_data *ex ,
                                                                             HashTable *ht ,
                                                                             char const   *name ,
                                                                             int name_len ,
                                                                             ulong hash_value ) ;
extern int __attribute__((__visibility__("default")))  zend_delete_global_variable(char const   *name ,
                                                                                   int name_len ) ;
extern int __attribute__((__visibility__("default")))  zend_delete_global_variable_ex(char const   *name ,
                                                                                      int name_len ,
                                                                                      ulong hash_value ) ;
extern void __attribute__((__visibility__("default")))  zend_reset_all_cv(HashTable *symbol_table ) ;
extern void __attribute__((__visibility__("default")))  zend_rebuild_symbol_table(void) ;
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
extern size_t __attribute__((__visibility__("default")))  php_strlcpy(char *dst ,
                                                                      char const   *src ,
                                                                      size_t siz ) ;
extern size_t __attribute__((__visibility__("default")))  php_strlcat(char *dst ,
                                                                      char const   *src ,
                                                                      size_t siz ) ;
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
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset ,
                                                   int __whence ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek64(int __fd ,
                                                       __off64_t __offset ,
                                                       int __whence ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off_t __offset ) ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __n ,
                      __off_t __offset ) ;
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
                                                                                     __off_t __length ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) truncate64)(char const   *__file ,
                                                                                       __off64_t __length ) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length ) ;
extern  __attribute__((__nothrow__)) int ftruncate64(int __fd ,
                                                     __off64_t __length ) ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int lockf(int __fd , int __cmd , __off_t __len ) ;
extern int lockf64(int __fd , int __cmd , __off64_t __len ) ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) crypt)(char const   *__key ,
                                                                                      char const   *__salt ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) encrypt)(char *__block ,
                                                                                     int __edflag ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) swab)(void const   * __restrict  __from ,
                                                                                    void * __restrict  __to ,
                                                                                    ssize_t __n ) ;
extern void setpwent(void) ;
extern void endpwent(void) ;
extern struct passwd *getpwent(void) ;
extern struct passwd *fgetpwent(FILE *__stream ) ;
extern int putpwent(struct passwd  const  * __restrict  __p ,
                    FILE * __restrict  __f ) ;
extern struct passwd *getpwuid(__uid_t __uid ) ;
extern struct passwd *getpwnam(char const   *__name ) ;
extern int getpwent_r(struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;
extern int getpwuid_r(__uid_t __uid , struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;
extern int getpwnam_r(char const   * __restrict  __name ,
                      struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;
extern int fgetpwent_r(FILE * __restrict  __stream ,
                       struct passwd * __restrict  __resultbuf ,
                       char * __restrict  __buffer , size_t __buflen ,
                       struct passwd ** __restrict  __result ) ;
extern int getpw(__uid_t __uid , char *__buffer ) ;
extern int __attribute__((__visibility__("default")))  ap_php_slprintf(char *buf ,
                                                                       size_t len ,
                                                                       char const   *format 
                                                                       , ...) ;
extern int __attribute__((__visibility__("default")))  ap_php_vslprintf(char *buf ,
                                                                        size_t len ,
                                                                        char const   *format ,
                                                                        va_list ap ) ;
extern int __attribute__((__visibility__("default")))  ap_php_snprintf(char * ,
                                                                       size_t  ,
                                                                       char const   * 
                                                                       , ...) ;
extern int __attribute__((__visibility__("default")))  ap_php_vsnprintf(char * ,
                                                                        size_t  ,
                                                                        char const   * ,
                                                                        va_list ap ) ;
extern int __attribute__((__visibility__("default")))  ap_php_vasprintf(char **buf ,
                                                                        char const   *format ,
                                                                        va_list ap ) ;
extern int __attribute__((__visibility__("default")))  ap_php_asprintf(char **buf ,
                                                                       char const   *format 
                                                                       , ...) ;
extern int __attribute__((__visibility__("default")))  ( /* format attribute */  php_sprintf)(char *s ,
                                                                                              char const   *format 
                                                                                              , ...) ;
extern char __attribute__((__visibility__("default")))  *php_gcvt(double value ,
                                                                  int ndigit ,
                                                                  char dec_point ,
                                                                  char exponent ,
                                                                  char *buf ) ;
extern char __attribute__((__visibility__("default")))  *php_conv_fp(char format ,
                                                                     double num ,
                                                                     boolean_e add_dp ,
                                                                     int precision ,
                                                                     char dec_point ,
                                                                     bool_int *is_negative ,
                                                                     char *buf ,
                                                                     int *len ) ;
extern char *ap_php_conv_10(wide_int num , bool_int is_unsigned ,
                            bool_int *is_negative , char *buf_end , int *len ) ;
extern char *ap_php_conv_p2(u_wide_int num , int nbits , char format ,
                            char *buf_end , int *len ) ;
extern int __attribute__((__visibility__("default")))  ( /* format attribute */  spprintf)(char **pbuf ,
                                                                                           size_t max_len ,
                                                                                           char const   *format 
                                                                                           , ...) ;
extern int __attribute__((__visibility__("default")))  ( /* format attribute */  vspprintf)(char **pbuf ,
                                                                                            size_t max_len ,
                                                                                            char const   *format ,
                                                                                            va_list ap ) ;
extern void phperror(char *error ) ;
extern int __attribute__((__visibility__("default")))  php_write(void *buf ,
                                                                 uint size ) ;
extern int __attribute__((__visibility__("default")))  ( /* format attribute */  php_printf)(char const   *format 
                                                                                             , ...) ;
extern int __attribute__((__visibility__("default")))  php_get_module_initialized(void) ;
extern void __attribute__((__visibility__("default")))  php_log_err(char *log_message ) ;
extern int ( /* format attribute */  Debug)(char *format  , ...) ;
extern int cfgparse(void) ;
__inline static void __attribute__((__deprecated__))  php_set_error_handling(zend_error_handling_t error_handling ,
                                                                             zend_class_entry *exception_class ) 
{ 


  {
  zend_replace_error_handling(error_handling, exception_class,
                              (zend_error_handling *)((void *)0));
  return;
}
}
__inline static void __attribute__((__deprecated__))  php_std_error_handling(void) 
{ 


  {
  return;
}
}
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  php_verror)(char const   *docref ,
                                                                                              char const   *params ,
                                                                                              int type ,
                                                                                              char const   *format ,
                                                                                              va_list args ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  php_error_docref0)(char const   *docref ,
                                                                                                     int type ,
                                                                                                     char const   *format 
                                                                                                     , ...) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  php_error_docref1)(char const   *docref ,
                                                                                                     char const   *param1 ,
                                                                                                     int type ,
                                                                                                     char const   *format 
                                                                                                     , ...) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  php_error_docref2)(char const   *docref ,
                                                                                                     char const   *param1 ,
                                                                                                     char const   *param2 ,
                                                                                                     int type ,
                                                                                                     char const   *format 
                                                                                                     , ...) ;
extern int __attribute__((__visibility__("default")))  (*php_register_internal_extensions_func)(void) ;
extern int __attribute__((__visibility__("default")))  php_register_internal_extensions(void) ;
extern int __attribute__((__visibility__("default")))  php_mergesort(void *base ,
                                                                     size_t nmemb ,
                                                                     size_t size ,
                                                                     int (*cmp)(void const   * ,
                                                                                void const   * ) ) ;
extern void __attribute__((__visibility__("default")))  php_register_pre_request_shutdown(void (*func)(void * ) ,
                                                                                          void *userdata ) ;
extern void __attribute__((__visibility__("default")))  php_com_initialize(void) ;
extern char __attribute__((__visibility__("default")))  *php_get_current_user(void) ;
extern char const   php_output_default_handler_name[sizeof("default output handler")] ;
extern char const   php_output_devnull_handler_name[sizeof("null output handler")] ;
extern void __attribute__((__visibility__("default")))  php_output_startup(void) ;
extern void __attribute__((__visibility__("default")))  php_output_shutdown(void) ;
extern void __attribute__((__visibility__("default")))  php_output_register_constants(void) ;
extern int __attribute__((__visibility__("default")))  php_output_activate(void) ;
extern void __attribute__((__visibility__("default")))  php_output_deactivate(void) ;
extern void __attribute__((__visibility__("default")))  php_output_set_status(int status ) ;
extern int __attribute__((__visibility__("default")))  php_output_get_status(void) ;
extern void __attribute__((__visibility__("default")))  php_output_set_implicit_flush(int flush ) ;
extern char const __attribute__((__visibility__("default")))  *php_output_get_start_filename(void) ;
extern int __attribute__((__visibility__("default")))  php_output_get_start_lineno(void) ;
extern int __attribute__((__visibility__("default")))  php_output_write_unbuffered(char const   *str ,
                                                                                   size_t len ) ;
extern int __attribute__((__visibility__("default")))  php_output_write(char const   *str ,
                                                                        size_t len ) ;
extern int __attribute__((__visibility__("default")))  php_output_flush(void) ;
extern void __attribute__((__visibility__("default")))  php_output_flush_all(void) ;
extern int __attribute__((__visibility__("default")))  php_output_clean(void) ;
extern void __attribute__((__visibility__("default")))  php_output_clean_all(void) ;
extern int __attribute__((__visibility__("default")))  php_output_end(void) ;
extern void __attribute__((__visibility__("default")))  php_output_end_all(void) ;
extern int __attribute__((__visibility__("default")))  php_output_discard(void) ;
extern void __attribute__((__visibility__("default")))  php_output_discard_all(void) ;
extern int __attribute__((__visibility__("default")))  php_output_get_contents(zval *p ) ;
extern int __attribute__((__visibility__("default")))  php_output_get_length(zval *p ) ;
extern int __attribute__((__visibility__("default")))  php_output_get_level(void) ;
extern php_output_handler __attribute__((__visibility__("default")))  *php_output_get_active_handler(void) ;
extern int __attribute__((__visibility__("default")))  php_output_start_default(void) ;
extern int __attribute__((__visibility__("default")))  php_output_start_devnull(void) ;
extern int __attribute__((__visibility__("default")))  php_output_start_user(zval *output_handler ,
                                                                             size_t chunk_size ,
                                                                             int flags ) ;
extern int __attribute__((__visibility__("default")))  php_output_start_internal(char const   *name ,
                                                                                 size_t name_len ,
                                                                                 void (*output_handler)(char *output ,
                                                                                                        uint output_len ,
                                                                                                        char **handled_output ,
                                                                                                        uint *handled_output_len ,
                                                                                                        int mode ) ,
                                                                                 size_t chunk_size ,
                                                                                 int flags ) ;
extern php_output_handler __attribute__((__visibility__("default")))  *php_output_handler_create_user(zval *handler ,
                                                                                                      size_t chunk_size ,
                                                                                                      int flags ) ;
extern php_output_handler __attribute__((__visibility__("default")))  *php_output_handler_create_internal(char const   *name ,
                                                                                                          size_t name_len ,
                                                                                                          int (*handler)(void **handler_context ,
                                                                                                                         php_output_context *output_context ) ,
                                                                                                          size_t chunk_size ,
                                                                                                          int flags ) ;
extern void __attribute__((__visibility__("default")))  php_output_handler_set_context(php_output_handler *handler ,
                                                                                       void *opaq ,
                                                                                       void (*dtor)(void * ) ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_start(php_output_handler *handler ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_started(char const   *name ,
                                                                                  size_t name_len ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_hook(php_output_handler_hook_t type ,
                                                                               void *arg ) ;
extern void __attribute__((__visibility__("default")))  php_output_handler_dtor(php_output_handler *handler ) ;
extern void __attribute__((__visibility__("default")))  php_output_handler_free(php_output_handler **handler ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_conflict(char const   *handler_new ,
                                                                                   size_t handler_new_len ,
                                                                                   char const   *handler_set ,
                                                                                   size_t handler_set_len ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_conflict_register(char const   *handler_name ,
                                                                                            size_t handler_name_len ,
                                                                                            int (*check_func)(char const   *handler_name ,
                                                                                                              size_t handler_name_len ) ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_reverse_conflict_register(char const   *handler_name ,
                                                                                                    size_t handler_name_len ,
                                                                                                    int (*check_func)(char const   *handler_name ,
                                                                                                                      size_t handler_name_len ) ) ;
extern php_output_handler_alias_ctor_t __attribute__((__visibility__("default")))  *php_output_handler_alias(char const   *handler_name ,
                                                                                                             size_t handler_name_len ) ;
extern int __attribute__((__visibility__("default")))  php_output_handler_alias_register(char const   *handler_name ,
                                                                                         size_t handler_name_len ,
                                                                                         struct _php_output_handler *(*func)(char const   *handler_name ,
                                                                                                                             size_t handler_name_len ,
                                                                                                                             size_t chunk_size ,
                                                                                                                             int flags ) ) ;
extern void zif_ob_start(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_ob_flush(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_ob_clean(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_ob_end_flush(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_ob_end_clean(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_ob_get_flush(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_ob_get_clean(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_ob_get_contents(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) ;
extern void zif_ob_get_length(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_ob_get_level(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_ob_get_status(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_ob_implicit_flush(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;
extern void zif_ob_list_handlers(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_output_add_rewrite_var(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;
extern void zif_output_reset_rewrite_vars(int ht , zval *return_value ,
                                          zval **return_value_ptr ,
                                          zval *this_ptr ,
                                          int return_value_used ) ;
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
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat64)(char const   * __restrict  __path ,
                                                                                              struct stat64 * __restrict  __statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat64)(int __fd ,
                                                                                             struct stat64 *__statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                               char const   * __restrict  __filename ,
                                                                                               struct stat * __restrict  __statbuf ,
                                                                                               int __flag ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat64)(int __fd ,
                                                                                                 char const   * __restrict  __filename ,
                                                                                                 struct stat64 * __restrict  __statbuf ,
                                                                                                 int __flag ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf ) ;
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
                                                                                     struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __xstat)(int __ver ,
                                                                                      char const   *__filename ,
                                                                                      struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __lxstat)(int __ver ,
                                                                                       char const   *__filename ,
                                                                                       struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4))) __fxstatat)(int __ver ,
                                                                                         int __fildes ,
                                                                                         char const   *__filename ,
                                                                                         struct stat *__stat_buf ,
                                                                                         int __flag ) ;
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
                                                                                            struct stat * __restrict  __statbuf ) ;
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
                                                                                             struct stat * __restrict  __statbuf ) ;
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
                                                                                           struct stat *__statbuf ) ;
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
                                                                                               int __flag ) ;
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
extern int __attribute__((__visibility__("default")))  php_file_le_stream(void) ;
extern int __attribute__((__visibility__("default")))  php_file_le_pstream(void) ;
extern int __attribute__((__visibility__("default")))  php_file_le_stream_filter(void) ;
extern void __attribute__((__visibility__("default")))  php_stream_context_free(php_stream_context *context ) ;
extern php_stream_context __attribute__((__visibility__("default")))  *php_stream_context_alloc(void) ;
extern int __attribute__((__visibility__("default")))  php_stream_context_get_option(php_stream_context *context ,
                                                                                     char const   *wrappername ,
                                                                                     char const   *optionname ,
                                                                                     zval ***optionvalue ) ;
extern int __attribute__((__visibility__("default")))  php_stream_context_set_option(php_stream_context *context ,
                                                                                     char const   *wrappername ,
                                                                                     char const   *optionname ,
                                                                                     zval *optionvalue ) ;
extern int __attribute__((__visibility__("default")))  php_stream_context_get_link(php_stream_context *context ,
                                                                                   char const   *hostent ,
                                                                                   php_stream **stream ) ;
extern int __attribute__((__visibility__("default")))  php_stream_context_set_link(php_stream_context *context ,
                                                                                   char const   *hostent ,
                                                                                   php_stream *stream ) ;
extern int __attribute__((__visibility__("default")))  php_stream_context_del_link(php_stream_context *context ,
                                                                                   php_stream *stream ) ;
extern php_stream_notifier __attribute__((__visibility__("default")))  *php_stream_notification_alloc(void) ;
extern void __attribute__((__visibility__("default")))  php_stream_notification_free(php_stream_notifier *notifier ) ;
extern void __attribute__((__visibility__("default")))  php_stream_notification_notify(php_stream_context *context ,
                                                                                       int notifycode ,
                                                                                       int severity ,
                                                                                       char *xmsg ,
                                                                                       int xcode ,
                                                                                       size_t bytes_sofar ,
                                                                                       size_t bytes_max ,
                                                                                       void *ptr ) ;
extern php_stream_context __attribute__((__visibility__("default")))  *php_stream_context_set(php_stream *stream ,
                                                                                              php_stream_context *context ) ;
extern php_stream_bucket __attribute__((__visibility__("default")))  *php_stream_bucket_new(php_stream *stream ,
                                                                                            char *buf ,
                                                                                            size_t buflen ,
                                                                                            int own_buf ,
                                                                                            int buf_persistent ) ;
extern int __attribute__((__visibility__("default")))  php_stream_bucket_split(php_stream_bucket *in ,
                                                                               php_stream_bucket **left ,
                                                                               php_stream_bucket **right ,
                                                                               size_t length ) ;
extern void __attribute__((__visibility__("default")))  php_stream_bucket_delref(php_stream_bucket *bucket ) ;
extern void __attribute__((__visibility__("default")))  php_stream_bucket_prepend(php_stream_bucket_brigade *brigade ,
                                                                                  php_stream_bucket *bucket ) ;
extern void __attribute__((__visibility__("default")))  php_stream_bucket_append(php_stream_bucket_brigade *brigade ,
                                                                                 php_stream_bucket *bucket ) ;
extern void __attribute__((__visibility__("default")))  php_stream_bucket_unlink(php_stream_bucket *bucket ) ;
extern php_stream_bucket __attribute__((__visibility__("default")))  *php_stream_bucket_make_writeable(php_stream_bucket *bucket ) ;
extern void __attribute__((__visibility__("default")))  _php_stream_filter_prepend(php_stream_filter_chain *chain ,
                                                                                   php_stream_filter *filter ) ;
extern int __attribute__((__visibility__("default")))  php_stream_filter_prepend_ex(php_stream_filter_chain *chain ,
                                                                                    php_stream_filter *filter ) ;
extern void __attribute__((__visibility__("default")))  _php_stream_filter_append(php_stream_filter_chain *chain ,
                                                                                  php_stream_filter *filter ) ;
extern int __attribute__((__visibility__("default")))  php_stream_filter_append_ex(php_stream_filter_chain *chain ,
                                                                                   php_stream_filter *filter ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_filter_flush(php_stream_filter *filter ,
                                                                                int finish ) ;
extern php_stream_filter __attribute__((__visibility__("default")))  *php_stream_filter_remove(php_stream_filter *filter ,
                                                                                               int call_dtor ) ;
extern void __attribute__((__visibility__("default")))  php_stream_filter_free(php_stream_filter *filter ) ;
extern php_stream_filter __attribute__((__visibility__("default")))  *_php_stream_filter_alloc(php_stream_filter_ops *fops ,
                                                                                               void *abstract ,
                                                                                               int persistent ) ;
extern int __attribute__((__visibility__("default")))  php_stream_filter_register_factory(char const   *filterpattern ,
                                                                                          php_stream_filter_factory *factory ) ;
extern int __attribute__((__visibility__("default")))  php_stream_filter_unregister_factory(char const   *filterpattern ) ;
extern int __attribute__((__visibility__("default")))  php_stream_filter_register_factory_volatile(char const   *filterpattern ,
                                                                                                   php_stream_filter_factory *factory ) ;
extern php_stream_filter __attribute__((__visibility__("default")))  *php_stream_filter_create(char const   *filtername ,
                                                                                               zval *filterparams ,
                                                                                               int persistent ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_alloc(php_stream_ops *ops ,
                                                                                 void *abstract ,
                                                                                 char const   *persistent_id ,
                                                                                 char const   *mode ) ;
extern php_stream __attribute__((__visibility__("default")))  *php_stream_encloses(php_stream *enclosing ,
                                                                                   php_stream *enclosed ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_free_enclosed(php_stream *stream_enclosed ,
                                                                                 int close_options ) ;
extern int __attribute__((__visibility__("default")))  php_stream_from_persistent_id(char const   *persistent_id ,
                                                                                     php_stream **stream ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_free(php_stream *stream ,
                                                                        int close_options ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_seek(php_stream *stream ,
                                                                        off_t offset ,
                                                                        int whence ) ;
extern off_t __attribute__((__visibility__("default")))  _php_stream_tell(php_stream *stream ) ;
extern size_t __attribute__((__visibility__("default")))  _php_stream_read(php_stream *stream ,
                                                                           char *buf ,
                                                                           size_t count ) ;
extern size_t __attribute__((__visibility__("default")))  _php_stream_write(php_stream *stream ,
                                                                            char const   *buf ,
                                                                            size_t count ) ;
extern size_t __attribute__((__visibility__("default")))  ( /* format attribute */  _php_stream_printf)(php_stream *stream ,
                                                                                                        char const   *fmt 
                                                                                                        , ...) ;
extern int __attribute__((__visibility__("default")))  _php_stream_eof(php_stream *stream ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_getc(php_stream *stream ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_putc(php_stream *stream ,
                                                                        int c ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_flush(php_stream *stream ,
                                                                         int closing ) ;
extern char __attribute__((__visibility__("default")))  *_php_stream_get_line(php_stream *stream ,
                                                                              char *buf ,
                                                                              size_t maxlen ,
                                                                              size_t *returned_len ) ;
extern char __attribute__((__visibility__("default")))  *php_stream_get_record(php_stream *stream ,
                                                                               size_t maxlen ,
                                                                               size_t *returned_len ,
                                                                               char *delim ,
                                                                               size_t delim_len ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_puts(php_stream *stream ,
                                                                        char *buf ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_stat(php_stream *stream ,
                                                                        php_stream_statbuf *ssb ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_stat_path(char *path ,
                                                                             int flags ,
                                                                             php_stream_statbuf *ssb ,
                                                                             php_stream_context *context ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_mkdir(char *path ,
                                                                         int mode ,
                                                                         int options ,
                                                                         php_stream_context *context ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_rmdir(char *path ,
                                                                         int options ,
                                                                         php_stream_context *context ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_opendir(char *path ,
                                                                                   int options ,
                                                                                   php_stream_context *context ) ;
extern php_stream_dirent __attribute__((__visibility__("default")))  *_php_stream_readdir(php_stream *dirstream ,
                                                                                          php_stream_dirent *ent ) ;
extern int __attribute__((__visibility__("default")))  php_stream_dirent_alphasort(char const   **a ,
                                                                                   char const   **b ) ;
extern int __attribute__((__visibility__("default")))  php_stream_dirent_alphasortr(char const   **a ,
                                                                                    char const   **b ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_scandir(char *dirname ,
                                                                           char ***namelist ,
                                                                           int flags ,
                                                                           php_stream_context *context ,
                                                                           int (*compare)(char const   **a ,
                                                                                          char const   **b ) ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_set_option(php_stream *stream ,
                                                                              int option ,
                                                                              int value ,
                                                                              void *ptrparam ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_truncate_set_size(php_stream *stream ,
                                                                                     size_t newsize ) ;
extern size_t __attribute__((__visibility__("default"),
__deprecated__))  _php_stream_copy_to_stream(php_stream *src ,
                                             php_stream *dest , size_t maxlen ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_copy_to_stream_ex(php_stream *src ,
                                                                                     php_stream *dest ,
                                                                                     size_t maxlen ,
                                                                                     size_t *len ) ;
extern size_t __attribute__((__visibility__("default")))  _php_stream_copy_to_mem(php_stream *src ,
                                                                                  char **buf ,
                                                                                  size_t maxlen ,
                                                                                  int persistent ) ;
extern size_t __attribute__((__visibility__("default")))  _php_stream_passthru(php_stream *src ) ;
extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t preadv(int __fd , struct iovec  const  *__iovec , int __count ,
                      __off_t __offset ) ;
extern ssize_t pwritev(int __fd , struct iovec  const  *__iovec , int __count ,
                       __off_t __offset ) ;
extern ssize_t preadv64(int __fd , struct iovec  const  *__iovec , int __count ,
                        __off64_t __offset ) ;
extern ssize_t pwritev64(int __fd , struct iovec  const  *__iovec ,
                         int __count , __off64_t __offset ) ;
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
                                              struct sockaddr  const  * __restrict  __addr ,
                                              socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int getsockname(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
extern int connect(int __fd , struct sockaddr  const  * __restrict  __addr ,
                   socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int getpeername(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) ;
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
extern ssize_t sendto(int __fd , void const   *__buf , size_t __n ,
                      int __flags ,
                      struct sockaddr  const  * __restrict  __addr ,
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
extern int accept4(int __fd , struct sockaddr * __restrict  __addr ,
                   socklen_t * __restrict  __addr_len , int __flags ) ;
extern  __attribute__((__nothrow__)) int shutdown(int __fd , int __how ) ;
extern  __attribute__((__nothrow__)) int sockatmark(int __fd ) ;
extern  __attribute__((__nothrow__)) int isfdtype(int __fd , int __fdtype ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_register(char *protocol ,
                                                                                 php_stream_transport_factory factory ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_unregister(char *protocol ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_xport_create(char const   *name ,
                                                                                        long namelen ,
                                                                                        int options ,
                                                                                        int flags ,
                                                                                        char const   *persistent_id ,
                                                                                        struct timeval *timeout ,
                                                                                        php_stream_context *context ,
                                                                                        char **error_string ,
                                                                                        int *error_code ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_bind(php_stream *stream ,
                                                                             char const   *name ,
                                                                             long namelen ,
                                                                             char **error_text ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_connect(php_stream *stream ,
                                                                                char const   *name ,
                                                                                long namelen ,
                                                                                int asynchronous ,
                                                                                struct timeval *timeout ,
                                                                                char **error_text ,
                                                                                int *error_code ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_listen(php_stream *stream ,
                                                                               int backlog ,
                                                                               char **error_text ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_accept(php_stream *stream ,
                                                                               php_stream **client ,
                                                                               char **textaddr ,
                                                                               int *textaddrlen ,
                                                                               void **addr ,
                                                                               socklen_t *addrlen ,
                                                                               struct timeval *timeout ,
                                                                               char **error_text ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_get_name(php_stream *stream ,
                                                                                 int want_peer ,
                                                                                 char **textaddr ,
                                                                                 int *textaddrlen ,
                                                                                 void **addr ,
                                                                                 socklen_t *addrlen ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_recvfrom(php_stream *stream ,
                                                                                 char *buf ,
                                                                                 size_t buflen ,
                                                                                 long flags ,
                                                                                 void **addr ,
                                                                                 socklen_t *addrlen ,
                                                                                 char **textaddr ,
                                                                                 int *textaddrlen ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_sendto(php_stream *stream ,
                                                                               char const   *buf ,
                                                                               size_t buflen ,
                                                                               long flags ,
                                                                               void *addr ,
                                                                               socklen_t addrlen ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_shutdown(php_stream *stream ,
                                                                                 stream_shutdown_t how ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_crypto_setup(php_stream *stream ,
                                                                                     php_stream_xport_crypt_method_t crypto_method ,
                                                                                     php_stream *session_stream ) ;
extern int __attribute__((__visibility__("default")))  php_stream_xport_crypto_enable(php_stream *stream ,
                                                                                      int activate ) ;
extern HashTable __attribute__((__visibility__("default")))  *php_stream_xport_get_hash(void) ;
extern php_stream_transport_factory_func __attribute__((__visibility__("default")))  php_stream_generic_socket_factory ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_stream_stdio_ops ;
extern php_stream_wrapper __attribute__((__visibility__("default")))  php_plain_files_wrapper ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen(char const   *filename ,
                                                                                 char const   *mode ,
                                                                                 char **opened_path ,
                                                                                 int options ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen_with_path(char *filename ,
                                                                                           char *mode ,
                                                                                           char *path ,
                                                                                           char **opened_path ,
                                                                                           int options ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen_from_file(FILE *file ,
                                                                                           char const   *mode ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen_from_fd(int fd ,
                                                                                         char const   *mode ,
                                                                                         char const   *persistent_id ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen_from_pipe(FILE *file ,
                                                                                           char const   *mode ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen_tmpfile(int dummy ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_fopen_temporary_file(char const   *dir ,
                                                                                                char const   *pfx ,
                                                                                                char **opened_path ) ;
extern FILE __attribute__((__visibility__("default")))  *_php_stream_open_wrapper_as_file(char *path ,
                                                                                          char *mode ,
                                                                                          int options ,
                                                                                          char **opened_path ) ;
extern php_stream_wrapper __attribute__((__visibility__("default")))  php_glob_stream_wrapper ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_glob_stream_ops ;
extern char __attribute__((__visibility__("default")))  *_php_glob_stream_get_path(php_stream *stream ,
                                                                                   int copy ,
                                                                                   int *plen ) ;
extern char __attribute__((__visibility__("default")))  *_php_glob_stream_get_pattern(php_stream *stream ,
                                                                                      int copy ,
                                                                                      int *plen ) ;
extern int __attribute__((__visibility__("default")))  _php_glob_stream_get_count(php_stream *stream ,
                                                                                  int *pflags ) ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_stream_userspace_ops ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_stream_userspace_dir_ops ;
extern char __attribute__((__visibility__("default")))  *_php_stream_mmap_range(php_stream *stream ,
                                                                                size_t offset ,
                                                                                size_t length ,
                                                                                php_stream_mmap_operation_t mode ,
                                                                                size_t *mapped_len ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_mmap_unmap(php_stream *stream ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_mmap_unmap_ex(php_stream *stream ,
                                                                                 off_t readden ) ;
extern int __attribute__((__visibility__("default")))  _php_stream_cast(php_stream *stream ,
                                                                        int castas ,
                                                                        void **ret ,
                                                                        int show_err ) ;
extern int php_init_stream_wrappers(int module_number ) ;
extern int php_shutdown_stream_wrappers(int module_number ) ;
extern void php_shutdown_stream_hashes(void) ;
extern int zm_deactivate_streams(int type , int module_number ) ;
extern int __attribute__((__visibility__("default")))  php_register_url_stream_wrapper(char *protocol ,
                                                                                       php_stream_wrapper *wrapper ) ;
extern int __attribute__((__visibility__("default")))  php_unregister_url_stream_wrapper(char *protocol ) ;
extern int __attribute__((__visibility__("default")))  php_register_url_stream_wrapper_volatile(char *protocol ,
                                                                                                php_stream_wrapper *wrapper ) ;
extern int __attribute__((__visibility__("default")))  php_unregister_url_stream_wrapper_volatile(char *protocol ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_open_wrapper_ex(char *path ,
                                                                                           char *mode ,
                                                                                           int options ,
                                                                                           char **opened_path ,
                                                                                           php_stream_context *context ) ;
extern php_stream_wrapper __attribute__((__visibility__("default")))  *php_stream_locate_url_wrapper(char const   *path ,
                                                                                                     char **path_for_open ,
                                                                                                     int options ) ;
extern char __attribute__((__visibility__("default")))  *php_stream_locate_eol(php_stream *stream ,
                                                                               char *buf ,
                                                                               size_t buf_len ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  php_stream_wrapper_log_error)(php_stream_wrapper *wrapper ,
                                                                                                                int options ,
                                                                                                                char const   *fmt 
                                                                                                                , ...) ;
extern int __attribute__((__visibility__("default")))  _php_stream_make_seekable(php_stream *origstream ,
                                                                                 php_stream **newstream ,
                                                                                 int flags ) ;
extern HashTable __attribute__((__visibility__("default")))  *_php_stream_get_url_stream_wrappers_hash(void) ;
extern HashTable __attribute__((__visibility__("default")))  *php_stream_get_url_stream_wrappers_hash_global(void) ;
extern HashTable __attribute__((__visibility__("default")))  *_php_get_stream_filters_hash(void) ;
extern HashTable __attribute__((__visibility__("default")))  *php_get_stream_filters_hash_global(void) ;
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_memory_create(int mode ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_memory_open(int mode ,
                                                                                       char *buf ,
                                                                                       size_t length ) ;
extern char __attribute__((__visibility__("default")))  *_php_stream_memory_get_buffer(php_stream *stream ,
                                                                                       size_t *length ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_temp_create(int mode ,
                                                                                       size_t max_memory_usage ) ;
extern php_stream __attribute__((__visibility__("default")))  *_php_stream_temp_open(int mode ,
                                                                                     size_t max_memory_usage ,
                                                                                     char *buf ,
                                                                                     size_t length ) ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_stream_memory_ops ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_stream_temp_ops ;
extern php_stream_ops __attribute__((__visibility__("default")))  php_stream_rfc2397_ops ;
extern php_stream_wrapper __attribute__((__visibility__("default")))  php_stream_rfc2397_wrapper ;
extern struct _php_core_globals  __attribute__((__visibility__("default"))) core_globals ;
extern int __attribute__((__visibility__("default")))  zend_ini_startup(void) ;
extern int __attribute__((__visibility__("default")))  zend_ini_shutdown(void) ;
extern int __attribute__((__visibility__("default")))  zend_ini_global_shutdown(void) ;
extern int __attribute__((__visibility__("default")))  zend_ini_deactivate(void) ;
extern int __attribute__((__visibility__("default")))  zend_copy_ini_directives(void) ;
extern void __attribute__((__visibility__("default")))  zend_ini_sort_entries(void) ;
extern int __attribute__((__visibility__("default")))  zend_register_ini_entries(zend_ini_entry const   *ini_entry ,
                                                                                 int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_unregister_ini_entries(int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_ini_refresh_caches(int stage ) ;
extern int __attribute__((__visibility__("default")))  zend_alter_ini_entry(char *name ,
                                                                            uint name_length ,
                                                                            char *new_value ,
                                                                            uint new_value_length ,
                                                                            int modify_type ,
                                                                            int stage ) ;
extern int __attribute__((__visibility__("default")))  zend_alter_ini_entry_ex(char *name ,
                                                                               uint name_length ,
                                                                               char *new_value ,
                                                                               uint new_value_length ,
                                                                               int modify_type ,
                                                                               int stage ,
                                                                               int force_change ) ;
extern int __attribute__((__visibility__("default")))  zend_restore_ini_entry(char *name ,
                                                                              uint name_length ,
                                                                              int stage ) ;
extern void __attribute__((__visibility__("default")))  display_ini_entries(zend_module_entry *module ) ;
extern long __attribute__((__visibility__("default")))  zend_ini_long(char *name ,
                                                                      uint name_length ,
                                                                      int orig ) ;
extern double __attribute__((__visibility__("default")))  zend_ini_double(char *name ,
                                                                          uint name_length ,
                                                                          int orig ) ;
extern char __attribute__((__visibility__("default")))  *zend_ini_string(char *name ,
                                                                         uint name_length ,
                                                                         int orig ) ;
extern char __attribute__((__visibility__("default")))  *zend_ini_string_ex(char *name ,
                                                                            uint name_length ,
                                                                            int orig ,
                                                                            zend_bool *exists ) ;
extern int __attribute__((__visibility__("default")))  zend_ini_register_displayer(char *name ,
                                                                                   uint name_length ,
                                                                                   void (*displayer)(zend_ini_entry *ini_entry ,
                                                                                                     int type ) ) ;
extern void __attribute__((__visibility__("default")))  zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry ,
                                                                                      int type ) ;
extern void __attribute__((__visibility__("default")))  zend_ini_color_displayer_cb(zend_ini_entry *ini_entry ,
                                                                                    int type ) ;
extern void __attribute__((__visibility__("default")))  display_link_numbers(zend_ini_entry *ini_entry ,
                                                                             int type ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateBool(zend_ini_entry *entry ,
                                                                    char *new_value ,
                                                                    uint new_value_length ,
                                                                    void *mh_arg1 ,
                                                                    void *mh_arg2 ,
                                                                    void *mh_arg3 ,
                                                                    int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateLong(zend_ini_entry *entry ,
                                                                    char *new_value ,
                                                                    uint new_value_length ,
                                                                    void *mh_arg1 ,
                                                                    void *mh_arg2 ,
                                                                    void *mh_arg3 ,
                                                                    int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateLongGEZero(zend_ini_entry *entry ,
                                                                          char *new_value ,
                                                                          uint new_value_length ,
                                                                          void *mh_arg1 ,
                                                                          void *mh_arg2 ,
                                                                          void *mh_arg3 ,
                                                                          int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateReal(zend_ini_entry *entry ,
                                                                    char *new_value ,
                                                                    uint new_value_length ,
                                                                    void *mh_arg1 ,
                                                                    void *mh_arg2 ,
                                                                    void *mh_arg3 ,
                                                                    int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateString(zend_ini_entry *entry ,
                                                                      char *new_value ,
                                                                      uint new_value_length ,
                                                                      void *mh_arg1 ,
                                                                      void *mh_arg2 ,
                                                                      void *mh_arg3 ,
                                                                      int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateStringUnempty(zend_ini_entry *entry ,
                                                                             char *new_value ,
                                                                             uint new_value_length ,
                                                                             void *mh_arg1 ,
                                                                             void *mh_arg2 ,
                                                                             void *mh_arg3 ,
                                                                             int stage ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_ini_file(zend_file_handle *fh ,
                                                                           zend_bool unbuffered_errors ,
                                                                           int scanner_mode ,
                                                                           void (*ini_parser_cb)(zval *arg1 ,
                                                                                                 zval *arg2 ,
                                                                                                 zval *arg3 ,
                                                                                                 int callback_type ,
                                                                                                 void *arg ) ,
                                                                           void *arg ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_ini_string(char *str ,
                                                                             zend_bool unbuffered_errors ,
                                                                             int scanner_mode ,
                                                                             void (*ini_parser_cb)(zval *arg1 ,
                                                                                                   zval *arg2 ,
                                                                                                   zval *arg3 ,
                                                                                                   int callback_type ,
                                                                                                   void *arg ) ,
                                                                             void *arg ) ;
extern void __attribute__((__visibility__("default")))  config_zval_dtor(zval *zvalue ) ;
extern int php_init_config(void) ;
extern int php_shutdown_config(void) ;
extern void php_ini_register_extensions(void) ;
extern zval __attribute__((__visibility__("default")))  *cfg_get_entry(char const   *name ,
                                                                       uint name_length ) ;
extern int __attribute__((__visibility__("default")))  cfg_get_long(char const   *varname ,
                                                                    long *result ) ;
extern int __attribute__((__visibility__("default")))  cfg_get_double(char const   *varname ,
                                                                      double *result ) ;
extern int __attribute__((__visibility__("default")))  cfg_get_string(char const   *varname ,
                                                                      char **result ) ;
extern int __attribute__((__visibility__("default")))  php_parse_user_ini_file(char const   *dirname ,
                                                                               char *ini_filename ,
                                                                               HashTable *target_hash ) ;
extern void __attribute__((__visibility__("default")))  php_ini_activate_config(HashTable *source_hash ,
                                                                                int modify_type ,
                                                                                int stage ) ;
extern int __attribute__((__visibility__("default")))  php_ini_has_per_dir_config(void) ;
extern int __attribute__((__visibility__("default")))  php_ini_has_per_host_config(void) ;
extern void __attribute__((__visibility__("default")))  php_ini_activate_per_dir_config(char *path ,
                                                                                        uint path_len ) ;
extern void __attribute__((__visibility__("default")))  php_ini_activate_per_host_config(char const   *host ,
                                                                                         uint host_len ) ;
extern HashTable __attribute__((__visibility__("default")))  *php_ini_get_configuration_hash(void) ;
extern int __attribute__((__visibility__("default")))  php_fopen_primary_script(zend_file_handle *file_handle ) ;
extern char __attribute__((__visibility__("default")))  *expand_filepath(char const   *filepath ,
                                                                         char *real_path ) ;
extern char __attribute__((__visibility__("default")))  *expand_filepath_ex(char const   *filepath ,
                                                                            char *real_path ,
                                                                            char const   *relative_to ,
                                                                            size_t relative_to_len ) ;
extern char __attribute__((__visibility__("default")))  *expand_filepath_with_mode(char const   *filepath ,
                                                                                   char *real_path ,
                                                                                   char const   *relative_to ,
                                                                                   size_t relative_to_len ,
                                                                                   int use_realpath ) ;
extern int __attribute__((__visibility__("default")))  php_check_open_basedir(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  php_check_open_basedir_ex(char const   *path ,
                                                                                 int warn ) ;
extern int __attribute__((__visibility__("default")))  php_check_specific_open_basedir(char const   *basedir ,
                                                                                       char const   *path ) ;
extern int __attribute__((__visibility__("default")))  php_check_safe_mode_include_dir(char const   *path ) ;
extern char __attribute__((__visibility__("default")))  *php_resolve_path(char const   *filename ,
                                                                          int filename_len ,
                                                                          char const   *path ) ;
extern FILE __attribute__((__visibility__("default")))  *php_fopen_with_path(char const   *filename ,
                                                                             char const   *mode ,
                                                                             char const   *path ,
                                                                             char **opened_path ) ;
extern char __attribute__((__visibility__("default")))  *php_strip_url_passwd(char *path ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateBaseDir(zend_ini_entry *entry ,
                                                                       char *new_value ,
                                                                       uint new_value_length ,
                                                                       void *mh_arg1 ,
                                                                       void *mh_arg2 ,
                                                                       void *mh_arg3 ,
                                                                       int stage ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) utime)(char const   *__file ,
                                                                                  struct utimbuf  const  *__file_times ) ;
extern DIR *( __attribute__((__nonnull__(1))) opendir)(char const   *__name ) ;
extern DIR *fdopendir(int __fd ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp ) ;
extern struct dirent64 *( __attribute__((__nonnull__(1))) readdir64)(DIR *__dirp ) ;
extern int ( __attribute__((__nonnull__(1,2,3))) readdir_r)(DIR * __restrict  __dirp ,
                                                            struct dirent * __restrict  __entry ,
                                                            struct dirent ** __restrict  __result ) ;
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
                                                                     struct dirent  const  ** ) ) ;
extern int ( __attribute__((__nonnull__(1,2))) scandir64)(char const   * __restrict  __dir ,
                                                          struct dirent64 *** __restrict  __namelist ,
                                                          int (*__selector)(struct dirent64  const  * ) ,
                                                          int (*__cmp)(struct dirent64  const  ** ,
                                                                       struct dirent64  const  ** ) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) alphasort)(struct dirent  const  **__e1 ,
                                                                                        struct dirent  const  **__e2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) alphasort64)(struct dirent64  const  **__e1 ,
                                                                                          struct dirent64  const  **__e2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) __ssize_t ( __attribute__((__nonnull__(2,4))) getdirentries)(int __fd ,
                                                                                                  char * __restrict  __buf ,
                                                                                                  size_t __nbytes ,
                                                                                                  __off_t * __restrict  __basep ) ;
extern  __attribute__((__nothrow__)) __ssize_t ( __attribute__((__nonnull__(2,4))) getdirentries64)(int __fd ,
                                                                                                    char * __restrict  __buf ,
                                                                                                    size_t __nbytes ,
                                                                                                    __off64_t * __restrict  __basep ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) versionsort)(struct dirent  const  **__e1 ,
                                                                                          struct dirent  const  **__e2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) versionsort64)(struct dirent64  const  **__e1 ,
                                                                                            struct dirent64  const  **__e2 )  __attribute__((__pure__)) ;
extern void __attribute__((__visibility__("default")))  virtual_cwd_startup(void) ;
extern void __attribute__((__visibility__("default")))  virtual_cwd_shutdown(void) ;
extern char __attribute__((__visibility__("default")))  *virtual_getcwd_ex(size_t *length ) ;
extern char __attribute__((__visibility__("default")))  *virtual_getcwd(char *buf ,
                                                                        size_t size ) ;
extern int __attribute__((__visibility__("default")))  virtual_chdir(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  virtual_chdir_file(char const   *path ,
                                                                          int (*p_chdir)(char const   *path ) ) ;
extern int __attribute__((__visibility__("default")))  virtual_filepath(char const   *path ,
                                                                        char **filepath ) ;
extern int __attribute__((__visibility__("default")))  virtual_filepath_ex(char const   *path ,
                                                                           char **filepath ,
                                                                           int (*verify_path)(cwd_state const   * ) ) ;
extern char __attribute__((__visibility__("default")))  *virtual_realpath(char const   *path ,
                                                                          char *real_path ) ;
extern FILE __attribute__((__visibility__("default")))  *virtual_fopen(char const   *path ,
                                                                       char const   *mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_open(char const   *path ,
                                                                    int flags 
                                                                    , ...) ;
extern int __attribute__((__visibility__("default")))  virtual_creat(char const   *path ,
                                                                     mode_t mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_rename(char *oldname ,
                                                                      char *newname ) ;
extern int __attribute__((__visibility__("default")))  virtual_stat(char const   *path ,
                                                                    struct stat *buf ) ;
extern int __attribute__((__visibility__("default")))  virtual_lstat(char const   *path ,
                                                                     struct stat *buf ) ;
extern int __attribute__((__visibility__("default")))  virtual_unlink(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  virtual_mkdir(char const   *pathname ,
                                                                     mode_t mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_rmdir(char const   *pathname ) ;
extern DIR __attribute__((__visibility__("default")))  *virtual_opendir(char const   *pathname ) ;
extern FILE __attribute__((__visibility__("default")))  *virtual_popen(char const   *command ,
                                                                       char const   *type ) ;
extern int __attribute__((__visibility__("default")))  virtual_access(char const   *pathname ,
                                                                      int mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_utime(char const   *filename ,
                                                                     struct utimbuf *buf ) ;
extern int __attribute__((__visibility__("default")))  virtual_chmod(char const   *filename ,
                                                                     mode_t mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_chown(char const   *filename ,
                                                                     uid_t owner ,
                                                                     gid_t group ,
                                                                     int link ) ;
extern int __attribute__((__visibility__("default")))  virtual_file_ex(cwd_state *state ,
                                                                       char const   *path ,
                                                                       int (*verify_path)(cwd_state const   * ) ,
                                                                       int use_realpath ) ;
extern char __attribute__((__visibility__("default")))  *tsrm_realpath(char const   *path ,
                                                                       char *real_path ) ;
extern virtual_cwd_globals cwd_globals ;
extern void __attribute__((__visibility__("default")))  realpath_cache_clean(void) ;
extern void __attribute__((__visibility__("default")))  realpath_cache_del(char const   *path ,
                                                                           int path_len ) ;
extern realpath_cache_bucket __attribute__((__visibility__("default")))  *realpath_cache_lookup(char const   *path ,
                                                                                                int path_len ,
                                                                                                time_t t ) ;
extern int __attribute__((__visibility__("default")))  realpath_cache_size(void) ;
extern int __attribute__((__visibility__("default")))  realpath_cache_max_buckets(void) ;
extern realpath_cache_bucket __attribute__((__visibility__("default")))  **realpath_cache_get_buckets(void) ;
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
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_traversable ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_aggregate ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_iterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_arrayaccess ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_serializable ;
extern zval __attribute__((__visibility__("default")))  *zend_call_method(zval **object_pp ,
                                                                          zend_class_entry *obj_ce ,
                                                                          zend_function **fn_proxy ,
                                                                          char const   *function_name ,
                                                                          int function_name_len ,
                                                                          zval **retval_ptr_ptr ,
                                                                          int param_count ,
                                                                          zval *arg1 ,
                                                                          zval *arg2 ) ;
extern void __attribute__((__visibility__("default")))  zend_user_it_rewind(zend_object_iterator *_iter ) ;
extern int __attribute__((__visibility__("default")))  zend_user_it_valid(zend_object_iterator *_iter ) ;
extern int __attribute__((__visibility__("default")))  zend_user_it_get_current_key(zend_object_iterator *_iter ,
                                                                                    char **str_key ,
                                                                                    uint *str_key_len ,
                                                                                    ulong *int_key ) ;
extern void __attribute__((__visibility__("default")))  zend_user_it_get_current_data(zend_object_iterator *_iter ,
                                                                                      zval ***data ) ;
extern void __attribute__((__visibility__("default")))  zend_user_it_move_forward(zend_object_iterator *_iter ) ;
extern void __attribute__((__visibility__("default")))  zend_user_it_invalidate_current(zend_object_iterator *_iter ) ;
extern zval __attribute__((__visibility__("default")))  *zend_user_it_new_iterator(zend_class_entry *ce ,
                                                                                   zval *object ) ;
extern zend_object_iterator __attribute__((__visibility__("default")))  *zend_user_it_get_new_iterator(zend_class_entry *ce ,
                                                                                                       zval *object ,
                                                                                                       int by_ref ) ;
extern void __attribute__((__visibility__("default")))  zend_register_interfaces(void) ;
extern int __attribute__((__visibility__("default")))  zend_user_serialize(zval *object ,
                                                                           unsigned char **buffer ,
                                                                           zend_uint *buf_len ,
                                                                           zend_serialize_data *data ) ;
extern int __attribute__((__visibility__("default")))  zend_user_unserialize(zval **object ,
                                                                             zend_class_entry *ce ,
                                                                             unsigned char const   *buf ,
                                                                             zend_uint buf_len ,
                                                                             zend_unserialize_data *data ) ;
extern int __attribute__((__visibility__("default")))  zend_class_serialize_deny(zval *object ,
                                                                                 unsigned char **buffer ,
                                                                                 zend_uint *buf_len ,
                                                                                 zend_serialize_data *data ) ;
extern int __attribute__((__visibility__("default")))  zend_class_unserialize_deny(zval **object ,
                                                                                   zend_class_entry *ce ,
                                                                                   unsigned char const   *buf ,
                                                                                   zend_uint buf_len ,
                                                                                   zend_unserialize_data *data ) ;
int zm_startup_array(int type , int module_number ) ;
int zm_shutdown_array(int type , int module_number ) ;
void zif_ksort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_krsort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;
void zif_natsort(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;
void zif_natcasesort(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
void zif_asort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_arsort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;
void zif_sort(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) ;
void zif_rsort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_usort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_uasort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;
void zif_uksort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;
void zif_array_walk(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_walk_recursive(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
void zif_count(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_end(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) ;
void zif_prev(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) ;
void zif_next(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) ;
void zif_reset(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_current(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;
void zif_key(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) ;
void zif_min(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) ;
void zif_max(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) ;
void zif_in_array(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) ;
void zif_array_search(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
void zif_extract(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;
void zif_compact(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;
void zif_array_fill(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_fill_keys(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
void zif_range(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;
void zif_shuffle(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;
void zif_array_multisort(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
void zif_array_push(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_pop(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
void zif_array_shift(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
void zif_array_unshift(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
void zif_array_splice(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
void zif_array_slice(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
void zif_array_merge(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
void zif_array_merge_recursive(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
void zif_array_replace(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
void zif_array_replace_recursive(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
void zif_array_keys(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_values(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
void zif_array_count_values(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
void zif_array_reverse(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
void zif_array_reduce(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
void zif_array_pad(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
void zif_array_flip(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_change_key_case(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
void zif_array_rand(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_unique(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
void zif_array_intersect(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
void zif_array_intersect_key(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
void zif_array_intersect_ukey(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
void zif_array_uintersect(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
void zif_array_intersect_assoc(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
void zif_array_uintersect_assoc(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) ;
void zif_array_intersect_uassoc(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) ;
void zif_array_uintersect_uassoc(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
void zif_array_diff(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
void zif_array_diff_key(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
void zif_array_diff_ukey(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
void zif_array_udiff(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
void zif_array_diff_assoc(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
void zif_array_udiff_assoc(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
void zif_array_diff_uassoc(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
void zif_array_udiff_uassoc(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
void zif_array_sum(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
void zif_array_product(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
void zif_array_filter(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
void zif_array_map(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
void zif_array_key_exists(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
void zif_array_chunk(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
void zif_array_combine(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
HashTable __attribute__((__visibility__("default")))  *php_splice(HashTable *in_hash ,
                                                                  int offset ,
                                                                  int length ,
                                                                  zval ***list ,
                                                                  int list_count ,
                                                                  HashTable **removed ) ;
int __attribute__((__visibility__("default")))  php_array_merge(HashTable *dest ,
                                                                HashTable *src ,
                                                                int recursive ) ;
int __attribute__((__visibility__("default")))  php_array_replace_recursive(HashTable *dest ,
                                                                            HashTable *src ) ;
int __attribute__((__visibility__("default")))  php_multisort_compare(void const   *a ,
                                                                      void const   *b ) ;
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
extern int zm_activate_filestat(int type , int module_number ) ;
extern int zm_deactivate_filestat(int type , int module_number ) ;
extern void zif_realpath_cache_size(int ht , zval *return_value ,
                                    zval **return_value_ptr , zval *this_ptr ,
                                    int return_value_used ) ;
extern void zif_realpath_cache_get(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;
extern void zif_clearstatcache(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_fileatime(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_filectime(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_filegroup(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_fileinode(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_filemtime(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_fileowner(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_fileperms(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_filesize(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_filetype(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_is_writable(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_is_readable(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_is_executable(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_is_file(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_is_dir(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_is_link(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_file_exists(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void php_if_stat(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void php_if_lstat(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_disk_total_space(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_disk_free_space(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) ;
extern void zif_chown(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_chgrp(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_lchown(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_lchgrp(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_chmod(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_touch(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void __attribute__((__visibility__("default")))  php_clear_stat_cache(zend_bool clear_realpath_cache ,
                                                                             char const   *filename ,
                                                                             int filename_len ) ;
extern void __attribute__((__visibility__("default")))  php_stat(char const   *filename ,
                                                                 php_stat_len filename_length ,
                                                                 int type ,
                                                                 zval *return_value ) ;
extern void __attribute__((__visibility__("default")))  zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;
extern void __attribute__((__visibility__("default")))  zend_strip(void) ;
extern int __attribute__((__visibility__("default")))  highlight_file(char *filename ,
                                                                      zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;
extern int __attribute__((__visibility__("default")))  highlight_string(zval *str ,
                                                                        zend_syntax_highlighter_ini *syntax_highlighter_ini ,
                                                                        char *str_name ) ;
extern void __attribute__((__visibility__("default")))  zend_html_putc(char c ) ;
extern void __attribute__((__visibility__("default")))  zend_html_puts(char const   *s ,
                                                                       uint len ) ;
extern zend_syntax_highlighter_ini syntax_highlighter_ini ;
extern int zm_startup_url_scanner_ex(int type , int module_number ) ;
extern int zm_shutdown_url_scanner_ex(int type , int module_number ) ;
extern int zm_activate_url_scanner_ex(int type , int module_number ) ;
extern int zm_deactivate_url_scanner_ex(int type , int module_number ) ;
extern char __attribute__((__visibility__("default")))  *php_url_scanner_adapt_single_url(char const   *url ,
                                                                                          size_t urllen ,
                                                                                          char const   *name ,
                                                                                          char const   *value ,
                                                                                          size_t *newlen ) ;
extern int __attribute__((__visibility__("default")))  php_url_scanner_add_var(char *name ,
                                                                               int name_len ,
                                                                               char *value ,
                                                                               int value_len ,
                                                                               int urlencode ) ;
extern int __attribute__((__visibility__("default")))  php_url_scanner_reset_vars(void) ;
extern zend_module_entry basic_functions_module ;
extern int zm_startup_basic(int type , int module_number ) ;
extern int zm_shutdown_basic(int type , int module_number ) ;
extern int zm_activate_basic(int type , int module_number ) ;
extern int zm_deactivate_basic(int type , int module_number ) ;
extern void zm_info_basic(zend_module_entry *zend_module ) ;
extern void zif_constant(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_sleep(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_usleep(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_time_nanosleep(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_time_sleep_until(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_flush(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void php_inet_ntop(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void php_inet_pton(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_ip2long(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_long2ip(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_getenv(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_putenv(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_getopt(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_get_current_user(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_set_time_limit(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_header_register_callback(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;
extern void zif_get_cfg_var(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_set_magic_quotes_runtime(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;
extern void zif_get_magic_quotes_runtime(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;
extern void zif_get_magic_quotes_gpc(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;
extern void zif_error_log(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_error_get_last(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_call_user_func(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_call_user_func_array(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;
extern void zif_call_user_method(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_call_user_method_array(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;
extern void zif_forward_static_call(int ht , zval *return_value ,
                                    zval **return_value_ptr , zval *this_ptr ,
                                    int return_value_used ) ;
extern void zif_forward_static_call_array(int ht , zval *return_value ,
                                          zval **return_value_ptr ,
                                          zval *this_ptr ,
                                          int return_value_used ) ;
extern void zif_register_shutdown_function(int ht , zval *return_value ,
                                           zval **return_value_ptr ,
                                           zval *this_ptr ,
                                           int return_value_used ) ;
extern void zif_highlight_file(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_highlight_string(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_php_strip_whitespace(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;
extern void __attribute__((__visibility__("default")))  php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;
extern void zif_ini_get(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_ini_get_all(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_ini_set(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_ini_restore(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_get_include_path(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_set_include_path(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_restore_include_path(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;
extern void zif_print_r(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_fprintf(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_vfprintf(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_connection_aborted(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;
extern void zif_connection_status(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;
extern void zif_ignore_user_abort(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;
extern void zif_getservbyname(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_getservbyport(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_getprotobyname(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_getprotobynumber(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void php_if_crc32(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_register_tick_function(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;
extern void zif_unregister_tick_function(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;
extern void zif_sys_getloadavg(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_is_uploaded_file(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_move_uploaded_file(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;
extern void zif_parse_ini_file(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_parse_ini_string(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_str_rot13(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_stream_get_filters(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;
extern void zif_stream_filter_register(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;
extern void zif_stream_bucket_make_writeable(int ht , zval *return_value ,
                                             zval **return_value_ptr ,
                                             zval *this_ptr ,
                                             int return_value_used ) ;
extern void zif_stream_bucket_prepend(int ht , zval *return_value ,
                                      zval **return_value_ptr , zval *this_ptr ,
                                      int return_value_used ) ;
extern void zif_stream_bucket_append(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;
extern void zif_stream_bucket_new(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;
extern int zm_startup_user_filters(int type , int module_number ) ;
extern int zm_deactivate_user_filters(int type , int module_number ) ;
extern int zm_deactivate_browscap(int type , int module_number ) ;
extern int __attribute__((__visibility__("default")))  _php_error_log(int opt_err ,
                                                                      char *message ,
                                                                      char *opt ,
                                                                      char *headers ) ;
extern int __attribute__((__visibility__("default")))  _php_error_log_ex(int opt_err ,
                                                                         char *message ,
                                                                         int message_len ,
                                                                         char *opt ,
                                                                         char *headers ) ;
int __attribute__((__visibility__("default")))  php_prefix_varname(zval *result ,
                                                                   zval *prefix ,
                                                                   char *var_name ,
                                                                   int var_name_len ,
                                                                   zend_bool add_underscore ) ;
extern php_basic_globals __attribute__((__visibility__("default")))  basic_globals ;
extern double __attribute__((__visibility__("default")))  php_get_nan(void) ;
extern double __attribute__((__visibility__("default")))  php_get_inf(void) ;
extern zend_bool __attribute__((__visibility__("default")))  register_user_shutdown_function(char *function_name ,
                                                                                             size_t function_len ,
                                                                                             php_shutdown_function_entry *shutdown_function_entry ) ;
extern zend_bool __attribute__((__visibility__("default")))  remove_user_shutdown_function(char *function_name ,
                                                                                           size_t function_len ) ;
extern zend_bool __attribute__((__visibility__("default")))  append_user_shutdown_function(php_shutdown_function_entry shutdown_function_entry ) ;
extern void zif_strspn(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_strcspn(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_str_replace(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_str_ireplace(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_rtrim(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_trim(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;
extern void zif_ltrim(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_soundex(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_levenshtein(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_count_chars(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_wordwrap(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_explode(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_implode(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_strtok(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_strtoupper(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_strtolower(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_basename(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_dirname(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_pathinfo(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_strstr(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_strpos(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_stripos(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_strrpos(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_strripos(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_strrchr(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_substr(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_quotemeta(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_ucfirst(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_lcfirst(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_ucwords(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_strtr(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_strrev(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_hebrev(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_hebrevc(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_user_sprintf(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_user_printf(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_vprintf(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_vsprintf(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;
extern void zif_addcslashes(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_addslashes(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_stripcslashes(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_stripslashes(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_chr(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
extern void zif_ord(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;
extern void zif_nl2br(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;
extern void zif_setlocale(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_localeconv(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_nl_langinfo(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_stristr(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_chunk_split(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_parse_str(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_str_getcsv(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_bin2hex(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_hex2bin(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_similar_text(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_strip_tags(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_str_repeat(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void zif_substr_replace(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_strnatcmp(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_strnatcasecmp(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_substr_count(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern void zif_str_pad(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_sscanf(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;
extern void zif_str_shuffle(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_str_word_count(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_str_split(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;
extern void zif_strpbrk(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_substr_compare(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_strcoll(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;
extern void zif_money_format(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;
extern int zm_startup_nl_langinfo(int type , int module_number ) ;
extern int __attribute__((__visibility__("default")))  strnatcmp_ex(char const   *a ,
                                                                    size_t a_len ,
                                                                    char const   *b ,
                                                                    size_t b_len ,
                                                                    int fold_case ) ;
extern struct lconv  __attribute__((__visibility__("default"))) *localeconv_r(struct lconv *out ) ;
extern char __attribute__((__visibility__("default")))  *php_strtoupper(char *s ,
                                                                        size_t len ) ;
extern char __attribute__((__visibility__("default")))  *php_strtolower(char *s ,
                                                                        size_t len ) ;
extern char __attribute__((__visibility__("default")))  *php_strtr(char *str ,
                                                                   int len ,
                                                                   char *str_from ,
                                                                   char *str_to ,
                                                                   int trlen ) ;
extern char __attribute__((__visibility__("default")))  *php_addslashes(char *str ,
                                                                        int length ,
                                                                        int *new_length ,
                                                                        int freeit ) ;
extern char __attribute__((__visibility__("default")))  *php_addcslashes(char const   *str ,
                                                                         int length ,
                                                                         int *new_length ,
                                                                         int freeit ,
                                                                         char *what ,
                                                                         int wlength ) ;
extern void __attribute__((__visibility__("default")))  php_stripslashes(char *str ,
                                                                         int *len ) ;
extern void __attribute__((__visibility__("default")))  php_stripcslashes(char *str ,
                                                                          int *len ) ;
extern void __attribute__((__visibility__("default")))  php_basename(char const   *s ,
                                                                     size_t len ,
                                                                     char *suffix ,
                                                                     size_t sufflen ,
                                                                     char **p_ret ,
                                                                     size_t *p_len ) ;
extern size_t __attribute__((__visibility__("default")))  php_dirname(char *str ,
                                                                      size_t len ) ;
extern char __attribute__((__visibility__("default")))  *php_stristr(char *s ,
                                                                     char *t ,
                                                                     size_t s_len ,
                                                                     size_t t_len ) ;
extern char __attribute__((__visibility__("default")))  *php_str_to_str_ex(char *haystack ,
                                                                           int length ,
                                                                           char *needle ,
                                                                           int needle_len ,
                                                                           char *str ,
                                                                           int str_len ,
                                                                           int *_new_length ,
                                                                           int case_sensitivity ,
                                                                           int *replace_count ) ;
extern char __attribute__((__visibility__("default")))  *php_str_to_str(char *haystack ,
                                                                        int length ,
                                                                        char *needle ,
                                                                        int needle_len ,
                                                                        char *str ,
                                                                        int str_len ,
                                                                        int *_new_length ) ;
extern char __attribute__((__visibility__("default")))  *php_trim(char *c ,
                                                                  int len ,
                                                                  char *what ,
                                                                  int what_len ,
                                                                  zval *return_value ,
                                                                  int mode ) ;
extern size_t __attribute__((__visibility__("default")))  php_strip_tags(char *rbuf ,
                                                                         int len ,
                                                                         int *state ,
                                                                         char *allow ,
                                                                         int allow_len ) ;
extern size_t __attribute__((__visibility__("default")))  php_strip_tags_ex(char *rbuf ,
                                                                            int len ,
                                                                            int *stateptr ,
                                                                            char *allow ,
                                                                            int allow_len ,
                                                                            zend_bool allow_tag_spaces ) ;
extern int __attribute__((__visibility__("default")))  php_char_to_str_ex(char *str ,
                                                                          uint len ,
                                                                          char from ,
                                                                          char *to ,
                                                                          int to_len ,
                                                                          zval *result ,
                                                                          int case_sensitivity ,
                                                                          int *replace_count ) ;
extern int __attribute__((__visibility__("default")))  php_char_to_str(char *str ,
                                                                       uint len ,
                                                                       char from ,
                                                                       char *to ,
                                                                       int to_len ,
                                                                       zval *result ) ;
extern void __attribute__((__visibility__("default")))  php_implode(zval *delim ,
                                                                    zval *arr ,
                                                                    zval *return_value ) ;
extern void __attribute__((__visibility__("default")))  php_explode(zval *delim ,
                                                                    zval *str ,
                                                                    zval *return_value ,
                                                                    long limit ) ;
extern size_t __attribute__((__visibility__("default")))  php_strspn(char *s1 ,
                                                                     char *s2 ,
                                                                     char *s1_end ,
                                                                     char *s2_end ) ;
extern size_t __attribute__((__visibility__("default")))  php_strcspn(char *s1 ,
                                                                      char *s2 ,
                                                                      char *s1_end ,
                                                                      char *s2_end ) ;
extern int __attribute__((__visibility__("default")))  string_natural_compare_function_ex(zval *result ,
                                                                                          zval *op1 ,
                                                                                          zval *op2 ,
                                                                                          zend_bool case_insensitive ) ;
extern int __attribute__((__visibility__("default")))  string_natural_compare_function(zval *result ,
                                                                                       zval *op1 ,
                                                                                       zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_natural_case_compare_function(zval *result ,
                                                                                            zval *op1 ,
                                                                                            zval *op2 ) ;
extern void register_string_constants(int type , int module_number ) ;
extern void __attribute__((__visibility__("default")))  php_srand(long seed ) ;
extern long __attribute__((__visibility__("default")))  php_rand(void) ;
extern void __attribute__((__visibility__("default")))  php_mt_srand(php_uint32 seed ) ;
extern php_uint32 __attribute__((__visibility__("default")))  php_mt_rand(void) ;
__inline static char *smart_str_print_long(char *buf , long num ) 
{ 
  char *r ;
  char *__p ;
  unsigned long __num ;
  char *__p___0 ;
  unsigned long __num___0 ;

  {
  while (1) {
    if (num < 0L) {
      while (1) {
        __p = buf;
        __num = (unsigned long )(- num);
        *__p = (char )'\000';
        while (1) {
          __p --;
          *__p = (char )((int )((char )(__num % 10UL)) + 48);
          __num /= 10UL;
          if (__num > 0UL) {

          } else {
            break;
          }
        }
        r = __p;
        break;
      }
      r --;
      *r = (char )'-';
    } else {
      while (1) {
        __p___0 = buf;
        __num___0 = (unsigned long )num;
        *__p___0 = (char )'\000';
        while (1) {
          __p___0 --;
          *__p___0 = (char )((int )((char )(__num___0 % 10UL)) + 48);
          __num___0 /= 10UL;
          if (__num___0 > 0UL) {

          } else {
            break;
          }
        }
        r = __p___0;
        break;
      }
    }
    break;
  }
  return (r);
}
}
__inline static char *smart_str_print_unsigned(char *buf , long num ) 
{ 
  char *r ;
  char *__p ;
  unsigned long __num ;

  {
  while (1) {
    __p = buf;
    __num = (unsigned long )num;
    *__p = (char )'\000';
    while (1) {
      __p --;
      *__p = (char )((int )((char )(__num % 10UL)) + 48);
      __num /= 10UL;
      if (__num > 0UL) {

      } else {
        break;
      }
    }
    r = __p;
    break;
  }
  return (r);
}
}
extern zend_module_entry spl_module_entry ;
extern int zm_startup_spl(int type , int module_number ) ;
extern int zm_shutdown_spl(int type , int module_number ) ;
extern int zm_activate_spl(int type , int module_number ) ;
extern int zm_deactivate_spl(int type , int module_number ) ;
extern void zm_info_spl(zend_module_entry *zend_module ) ;
extern zend_spl_globals spl_globals ;
extern void zif_spl_classes(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;
extern void zif_class_parents(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;
extern void zif_class_implements(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;
extern void zif_class_uses(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) ;
extern void __attribute__((__visibility__("default")))  php_spl_object_hash(zval *obj ,
                                                                            char *md5str ) ;
extern void *(*php_pcre_malloc)(size_t  ) ;
extern void (*php_pcre_free)(void * ) ;
extern void *(*php_pcre_stack_malloc)(size_t  ) ;
extern void (*php_pcre_stack_free)(void * ) ;
extern int (*php_pcre_callout)(pcre_callout_block * ) ;
extern pcre *php_pcre_compile(char const   * , int  , char const   ** , int * ,
                              unsigned char const   * ) ;
extern pcre *php_pcre_compile2(char const   * , int  , int * , char const   ** ,
                               int * , unsigned char const   * ) ;
extern int php_pcre_config(int  , void * ) ;
extern int php_pcre_copy_named_substring(pcre const   * , char const   * ,
                                         int * , int  , char const   * ,
                                         char * , int  ) ;
extern int php_pcre_copy_substring(char const   * , int * , int  , int  ,
                                   char * , int  ) ;
extern int pcre_dfa_exec(pcre const   * , pcre_extra const   * ,
                         char const   * , int  , int  , int  , int * , int  ,
                         int * , int  ) ;
extern int php_pcre_exec(pcre const   * , pcre_extra const   * ,
                         char const   * , int  , int  , int  , int * , int  ) ;
extern void php_pcre_free_substring(char const   * ) ;
extern void php_pcre_free_substring_list(char const   ** ) ;
extern int php_pcre_fullinfo(pcre const   * , pcre_extra const   * , int  ,
                             void * ) ;
extern int php_pcre_get_named_substring(pcre const   * , char const   * ,
                                        int * , int  , char const   * ,
                                        char const   ** ) ;
extern int php_pcre_get_stringnumber(pcre const   * , char const   * ) ;
extern int php_pcre_get_stringtable_entries(pcre const   * , char const   * ,
                                            char ** , char ** ) ;
extern int php_pcre_get_substring(char const   * , int * , int  , int  ,
                                  char const   ** ) ;
extern int php_pcre_get_substring_list(char const   * , int * , int  ,
                                       char const   *** ) ;
extern int pcre_info(pcre const   * , int * , int * ) ;
extern unsigned char const   *php_pcre_maketables(void) ;
extern int php_pcre_refcount(pcre * , int  ) ;
extern pcre_extra *php_pcre_study(pcre const   * , int  , char const   ** ) ;
extern char const   *php_pcre_version(void) ;
extern  __attribute__((__nothrow__)) char *setlocale(int __category ,
                                                     char const   *__locale ) ;
extern  __attribute__((__nothrow__)) struct lconv *localeconv(void) ;
extern  __attribute__((__nothrow__)) __locale_t newlocale(int __category_mask ,
                                                          char const   *__locale ,
                                                          __locale_t __base ) ;
extern  __attribute__((__nothrow__)) __locale_t duplocale(__locale_t __dataset ) ;
extern  __attribute__((__nothrow__)) void freelocale(__locale_t __dataset ) ;
extern  __attribute__((__nothrow__)) __locale_t uselocale(__locale_t __dataset ) ;
extern char __attribute__((__visibility__("default")))  *php_pcre_replace(char *regex ,
                                                                          int regex_len ,
                                                                          char *subject ,
                                                                          int subject_len ,
                                                                          zval *replace_val ,
                                                                          int is_callable_replace ,
                                                                          int *result_len ,
                                                                          int limit ,
                                                                          int *replace_count ) ;
extern pcre __attribute__((__visibility__("default")))  *pcre_get_compiled_regex(char *regex ,
                                                                                 pcre_extra **extra ,
                                                                                 int *options ) ;
extern pcre __attribute__((__visibility__("default")))  *pcre_get_compiled_regex_ex(char *regex ,
                                                                                    pcre_extra **extra ,
                                                                                    int *preg_options ,
                                                                                    int *coptions ) ;
extern zend_module_entry pcre_module_entry ;
extern pcre_cache_entry __attribute__((__visibility__("default")))  *pcre_get_compiled_regex_cache(char *regex ,
                                                                                                   int regex_len ) ;
extern void __attribute__((__visibility__("default")))  php_pcre_match_impl(pcre_cache_entry *pce ,
                                                                            char *subject ,
                                                                            int subject_len ,
                                                                            zval *return_value ,
                                                                            zval *subpats ,
                                                                            int global ,
                                                                            int use_flags ,
                                                                            long flags ,
                                                                            long start_offset ) ;
extern char __attribute__((__visibility__("default")))  *php_pcre_replace_impl(pcre_cache_entry *pce ,
                                                                               char *subject ,
                                                                               int subject_len ,
                                                                               zval *return_value ,
                                                                               int is_callable_replace ,
                                                                               int *result_len ,
                                                                               int limit ,
                                                                               int *replace_count ) ;
extern void __attribute__((__visibility__("default")))  php_pcre_split_impl(pcre_cache_entry *pce ,
                                                                            char *subject ,
                                                                            int subject_len ,
                                                                            zval *return_value ,
                                                                            long limit_val ,
                                                                            long flags ) ;
extern void __attribute__((__visibility__("default")))  php_pcre_grep_impl(pcre_cache_entry *pce ,
                                                                           zval *input ,
                                                                           zval *return_value ,
                                                                           long flags ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveIteratorIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveTreeIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_FilterIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveFilterIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_ParentIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_SeekableIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_LimitIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_CachingIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveCachingIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_OuterIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_IteratorIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_NoRewindIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_InfiniteIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_EmptyIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_AppendIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RegexIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveRegexIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_Countable ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_CallbackFilterIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveCallbackFilterIterator ;
extern int zm_startup_spl_iterators(int type , int module_number ) ;
extern void zif_iterator_to_array(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;
extern void zif_iterator_count(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern void zif_iterator_apply(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;
extern int __attribute__((__visibility__("default")))  spl_iterator_apply(zval *obj ,
                                                                          int (*apply_func)(zend_object_iterator *iter ,
                                                                                            void *puser ) ,
                                                                          void *puser ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_ArrayObject ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_ArrayIterator ;
extern zend_class_entry __attribute__((__visibility__("default")))  *spl_ce_RecursiveArrayIterator ;
extern int zm_startup_spl_array(int type , int module_number ) ;
extern void spl_array_iterator_append(zval *object , zval *append_value ) ;
extern void spl_array_iterator_key(zval *object , zval *return_value ) ;
zend_array_globals array_globals  ;
static void php_array_init_globals(zend_array_globals *array_globals___0 ) 
{ 


  {
  memset((void *)array_globals___0, 0, sizeof(zend_array_globals ));
  return;
}
}
int zm_startup_array(int type , int module_number ) 
{ 


  {
  php_array_init_globals(& array_globals);
  zend_register_long_constant("EXTR_OVERWRITE", sizeof("EXTR_OVERWRITE"), 0L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("EXTR_SKIP", sizeof("EXTR_SKIP"), 1L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("EXTR_PREFIX_SAME", sizeof("EXTR_PREFIX_SAME"),
                              2L, 1 | (1 << 1), module_number);
  zend_register_long_constant("EXTR_PREFIX_ALL", sizeof("EXTR_PREFIX_ALL"), 3L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("EXTR_PREFIX_INVALID",
                              sizeof("EXTR_PREFIX_INVALID"), 4L, 1 | (1 << 1),
                              module_number);
  zend_register_long_constant("EXTR_PREFIX_IF_EXISTS",
                              sizeof("EXTR_PREFIX_IF_EXISTS"), 5L, 1 | (1 << 1),
                              module_number);
  zend_register_long_constant("EXTR_IF_EXISTS", sizeof("EXTR_IF_EXISTS"), 6L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("EXTR_REFS", sizeof("EXTR_REFS"), 256L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("SORT_ASC", sizeof("SORT_ASC"), 4L, 1 | (1 << 1),
                              module_number);
  zend_register_long_constant("SORT_DESC", sizeof("SORT_DESC"), 3L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("SORT_REGULAR", sizeof("SORT_REGULAR"), 0L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("SORT_NUMERIC", sizeof("SORT_NUMERIC"), 1L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("SORT_STRING", sizeof("SORT_STRING"), 2L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("SORT_LOCALE_STRING",
                              sizeof("SORT_LOCALE_STRING"), 5L, 1 | (1 << 1),
                              module_number);
  zend_register_long_constant("SORT_NATURAL", sizeof("SORT_NATURAL"), 6L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("SORT_FLAG_CASE", sizeof("SORT_FLAG_CASE"), 8L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("CASE_LOWER", sizeof("CASE_LOWER"), 0L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("CASE_UPPER", sizeof("CASE_UPPER"), 1L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("COUNT_NORMAL", sizeof("COUNT_NORMAL"), 0L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant("COUNT_RECURSIVE", sizeof("COUNT_RECURSIVE"), 1L,
                              1 | (1 << 1), module_number);
  return (0);
}
}
int zm_shutdown_array(int type , int module_number ) 
{ 


  {
  return (0);
}
}
static void php_set_compare_func(int sort_type ) 
{ 


  {
  switch (sort_type & -9) {
  case 1: 
  array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& numeric_compare_function);
  break;
  case 2: 
  if (sort_type & 8) {
    array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& string_case_compare_function);
  } else {
    array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& string_compare_function);
  }
  break;
  case 6: 
  if (sort_type & 8) {
    array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& string_natural_case_compare_function);
  } else {
    array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& string_natural_compare_function);
  }
  break;
  case 5: 
  array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& string_locale_compare_function);
  break;
  default: 
  case 0: 
  array_globals.compare_func = (int (*)(zval *result , zval *op1 , zval *op2 ))(& compare_function);
  break;
  }
  return;
}
}
static int php_array_key_compare(void const   *a , void const   *b ) 
{ 
  Bucket *f ;
  Bucket *s ;
  zval result ;
  zval first ;
  zval second ;
  int tmp ;

  {
  f = *((Bucket **)a);
  s = *((Bucket **)b);
  if (f->nKeyLength == 0U) {
    first.type = (zend_uchar )1;
    first.value.lval = (long )f->h;
  } else {
    first.type = (zend_uchar )6;
    first.value.str.val = (char *)f->arKey;
    first.value.str.len = (int )(f->nKeyLength - 1U);
  }
  if (s->nKeyLength == 0U) {
    second.type = (zend_uchar )1;
    second.value.lval = (long )s->h;
  } else {
    second.type = (zend_uchar )6;
    second.value.str.val = (char *)s->arKey;
    second.value.str.len = (int )(s->nKeyLength - 1U);
  }
  tmp = (*(array_globals.compare_func))(& result, & first, & second);
  if (tmp == -1) {
    return (0);
  } else {

  }
  if ((int )result.type == 2) {
    if (result.value.dval < (double )0) {
      return (-1);
    } else
    if (result.value.dval > (double )0) {
      return (1);
    } else {
      return (0);
    }
  } else {

  }
  convert_to_long(& result);
  if (result.value.lval < 0L) {
    return (-1);
  } else
  if (result.value.lval > 0L) {
    return (1);
  } else {

  }
  return (0);
}
}
static int php_array_reverse_key_compare(void const   *a , void const   *b ) 
{ 
  int tmp ;

  {
  tmp = php_array_key_compare(a, b);
  return (tmp * -1);
}
}
void zif_krsort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long sort_type ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___1 ;

  {
  sort_type = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___0 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_reverse_key_compare, 0);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_ksort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long sort_type ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___1 ;

  {
  sort_type = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___0 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_key_compare, 0);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )3;
    break;
  }
  return;
}
}
static int php_count_recursive(zval *array , long mode ) 
{ 
  long cnt ;
  zval **element ;
  int __attribute__((__visibility__("default")))  tmp ;
  HashPosition pos ;
  int tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  cnt = 0L;
  if ((int )array->type == 4) {
    if ((int )(array->value.ht)->nApplyCount > 1) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "recursion detected");
      return (0);
    } else {

    }
    tmp = zend_hash_num_elements((HashTable const   *)array->value.ht);
    cnt = (long )tmp;
    if (mode == 1L) {
      zend_hash_internal_pointer_reset_ex(array->value.ht, & pos);
      while (1) {
        tmp___1 = zend_hash_get_current_data_ex(array->value.ht,
                                                (void **)(& element), & pos);
        if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {

        } else {
          break;
        }
        (array->value.ht)->nApplyCount = (unsigned char )((int )(array->value.ht)->nApplyCount + 1);
        tmp___0 = php_count_recursive(*element, 1L);
        cnt += (long )tmp___0;
        (array->value.ht)->nApplyCount = (unsigned char )((int )(array->value.ht)->nApplyCount - 1);
        zend_hash_move_forward_ex(array->value.ht, & pos);
      }
    } else {

    }
  } else {

  }
  return ((int )cnt);
}
}
void zif_count(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long mode ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  int tmp___0 ;
  zval *retval ;
  zval *__z___1 ;
  int tmp___1 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  zend_uint tmp___3 ;
  zend_bool tmp___4 ;
  zval *__z___2 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___5 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___6 ;
  zval *__z___3 ;

  {
  mode = 0L;
  tmp = zend_parse_parameters(ht, "z|l", & array, & mode);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  switch ((int )array->type) {
  case 0: 
  __z = return_value;
  __z->value.lval = 0L;
  __z->type = (zend_uchar )1;
  return;
  break;
  case 4: 
  __z___0 = return_value;
  tmp___0 = php_count_recursive(array, mode);
  __z___0->value.lval = (long )tmp___0;
  __z___0->type = (zend_uchar )1;
  return;
  break;
  case 5: 
  if ((array->value.obj.handlers)->count_elements) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )1;
    tmp___1 = (*((array->value.obj.handlers)->count_elements))(array,
                                                               & return_value->value.lval);
    if (0 == tmp___1) {
      return;
    } else {

    }
  } else {

  }
  if ((array->value.obj.handlers)->get_class_entry) {
    tmp___5 = zend_get_class_entry((zval const   *)array);
    tmp___6 = instanceof_function((zend_class_entry const   *)tmp___5,
                                  (zend_class_entry const   *)spl_ce_Countable);
    if (tmp___6) {
      zend_call_method(& array, (zend_class_entry *)((void *)0),
                       (zend_function **)((void *)0), "count",
                       (int )(sizeof("count") - 1U), & retval, 0,
                       (zval *)((void *)0), (zval *)((void *)0));
      if (retval) {
        if ((int )retval->type != 1) {
          tmp___4 = zval_isref_p(retval);
          if (tmp___4) {

          } else {
            while (1) {
              tmp___3 = zval_refcount_p(retval);
              if (tmp___3 > 1U) {
                zval_delref_p(retval);
                while (1) {
                  tmp___2 = _emalloc(sizeof(zval_gc_info ));
                  new_zv = (zval *)tmp___2;
                  ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                  break;
                }
                while (1) {
                  while (1) {
                    new_zv->value = retval->value;
                    new_zv->type = retval->type;
                    break;
                  }
                  zval_set_refcount_p(new_zv, (zend_uint )1);
                  zval_unset_isref_p(new_zv);
                  break;
                }
                retval = new_zv;
                _zval_copy_ctor(new_zv);
              } else {

              }
              break;
            }
          }
          convert_to_long(retval);
        } else {

        }
        __z___2 = return_value;
        __z___2->value.lval = retval->value.lval;
        __z___2->type = (zend_uchar )1;
        _zval_ptr_dtor(& retval);
      } else {

      }
      return;
    } else {

    }
  } else {

  }
  default: 
  __z___3 = return_value;
  __z___3->value.lval = 1L;
  __z___3->type = (zend_uchar )1;
  return;
  break;
  }
  return;
}
}
static int php_array_data_compare(void const   *a , void const   *b ) 
{ 
  Bucket *f ;
  Bucket *s ;
  zval result ;
  zval *first ;
  zval *second ;
  int tmp ;

  {
  f = *((Bucket **)a);
  s = *((Bucket **)b);
  first = *((zval **)f->pData);
  second = *((zval **)s->pData);
  tmp = (*(array_globals.compare_func))(& result, first, second);
  if (tmp == -1) {
    return (0);
  } else {

  }
  if ((int )result.type == 2) {
    if (result.value.dval < (double )0) {
      return (-1);
    } else
    if (result.value.dval > (double )0) {
      return (1);
    } else {
      return (0);
    }
  } else {

  }
  convert_to_long(& result);
  if (result.value.lval < 0L) {
    return (-1);
  } else
  if (result.value.lval > 0L) {
    return (1);
  } else {

  }
  return (0);
}
}
static int php_array_reverse_data_compare(void const   *a , void const   *b ) 
{ 
  int tmp ;

  {
  tmp = php_array_data_compare(a, b);
  return (tmp * -1);
}
}
static int php_array_natural_general_compare(void const   *a , void const   *b ,
                                             int fold_case ) 
{ 
  Bucket *f ;
  Bucket *s ;
  zval *fval ;
  zval *sval ;
  zval first ;
  zval second ;
  int result ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  f = *((Bucket **)a);
  s = *((Bucket **)b);
  fval = *((zval **)f->pData);
  sval = *((zval **)s->pData);
  first = *fval;
  second = *sval;
  if ((int )fval->type != 6) {
    _zval_copy_ctor(& first);
    if ((int )first.type != 6) {
      _convert_to_string(& first);
    } else {

    }
  } else {

  }
  if ((int )sval->type != 6) {
    _zval_copy_ctor(& second);
    if ((int )second.type != 6) {
      _convert_to_string(& second);
    } else {

    }
  } else {

  }
  tmp = strnatcmp_ex((char const   *)first.value.str.val,
                     (size_t )first.value.str.len,
                     (char const   *)second.value.str.val,
                     (size_t )second.value.str.len, fold_case);
  result = (int )tmp;
  if ((int )fval->type != 6) {
    _zval_dtor(& first);
  } else {

  }
  if ((int )sval->type != 6) {
    _zval_dtor(& second);
  } else {

  }
  return (result);
}
}
static int php_array_natural_compare(void const   *a , void const   *b ) 
{ 
  int tmp ;

  {
  tmp = php_array_natural_general_compare(a, b, 0);
  return (tmp);
}
}
static int php_array_natural_case_compare(void const   *a , void const   *b ) 
{ 
  int tmp ;

  {
  tmp = php_array_natural_general_compare(a, b, 1);
  return (tmp);
}
}
static void php_natsort(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used , int fold_case ) 
{ 
  zval *array ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z ;

  {
  tmp = zend_parse_parameters(ht, "a", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (fold_case) {
    tmp___0 = zend_hash_sort(array->value.ht,
                             (void (*)(void * , size_t  ,
                                       size_t  , int (*)(void const   * ,
                                                         void const   * ) ))(& zend_qsort),
                             & php_array_natural_case_compare, 0);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
  } else {
    tmp___1 = zend_hash_sort(array->value.ht,
                             (void (*)(void * , size_t  ,
                                       size_t  , int (*)(void const   * ,
                                                         void const   * ) ))(& zend_qsort),
                             & php_array_natural_compare, 0);
    if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
  }
  while (1) {
    __z = return_value;
    __z->value.lval = 1L;
    __z->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_natsort(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 


  {
  php_natsort(ht, return_value, return_value_ptr, this_ptr, return_value_used, 0);
  return;
}
}
void zif_natcasesort(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 


  {
  php_natsort(ht, return_value, return_value_ptr, this_ptr, return_value_used, 1);
  return;
}
}
void zif_asort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long sort_type ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___1 ;

  {
  sort_type = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___0 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_data_compare, 0);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_arsort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long sort_type ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___1 ;

  {
  sort_type = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___0 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_reverse_data_compare, 0);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_sort(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long sort_type ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___1 ;

  {
  sort_type = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___0 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_data_compare, 1);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_rsort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  long sort_type ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___1 ;

  {
  sort_type = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___0 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_reverse_data_compare, 1);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = 1L;
    __z___1->type = (zend_uchar )3;
    break;
  }
  return;
}
}
static int php_array_user_compare(void const   *a , void const   *b ) 
{ 
  Bucket *f ;
  Bucket *s ;
  zval **args[2] ;
  zval *retval_ptr ;
  long retval ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_uint tmp___0 ;
  zend_bool tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  retval_ptr = (zval *)((void *)0);
  f = *((Bucket **)a);
  s = *((Bucket **)b);
  args[0] = (zval **)f->pData;
  args[1] = (zval **)s->pData;
  basic_globals.user_compare_fci.param_count = (zend_uint )2;
  basic_globals.user_compare_fci.params = args;
  basic_globals.user_compare_fci.retval_ptr_ptr = & retval_ptr;
  basic_globals.user_compare_fci.no_separation = (zend_bool )0;
  tmp___4 = zend_call_function(& basic_globals.user_compare_fci,
                               & basic_globals.user_compare_fci_cache);
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    if (retval_ptr) {
      if ((int )retval_ptr->type != 1) {
        tmp___1 = zval_isref_p(retval_ptr);
        if (tmp___1) {

        } else {
          while (1) {
            tmp___0 = zval_refcount_p(retval_ptr);
            if (tmp___0 > 1U) {
              zval_delref_p(retval_ptr);
              while (1) {
                tmp = _emalloc(sizeof(zval_gc_info ));
                new_zv = (zval *)tmp;
                ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv->value = retval_ptr->value;
                  new_zv->type = retval_ptr->type;
                  break;
                }
                zval_set_refcount_p(new_zv, (zend_uint )1);
                zval_unset_isref_p(new_zv);
                break;
              }
              retval_ptr = new_zv;
              _zval_copy_ctor(new_zv);
            } else {

            }
            break;
          }
        }
        convert_to_long(retval_ptr);
      } else {

      }
      retval = retval_ptr->value.lval;
      _zval_ptr_dtor(& retval_ptr);
      if (retval < 0L) {
        tmp___3 = -1;
      } else {
        if (retval > 0L) {
          tmp___2 = 1;
        } else {
          tmp___2 = 0;
        }
        tmp___3 = tmp___2;
      }
      return (tmp___3);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}
void zif_usort(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  unsigned int refcount ;
  zend_fcall_info old_user_compare_fci ;
  zend_fcall_info_cache old_user_compare_fci_cache ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  zval *__z___1 ;
  zend_uint tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zend_uint tmp___2 ;

  {
  old_user_compare_fci = basic_globals.user_compare_fci;
  old_user_compare_fci_cache = basic_globals.user_compare_fci_cache;
  basic_globals.user_compare_fci_cache = (zend_fcall_info_cache )empty_fcall_info_cache;
  tmp = zend_parse_parameters(ht, "af", & array,
                              & basic_globals.user_compare_fci,
                              & basic_globals.user_compare_fci_cache);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    basic_globals.user_compare_fci = old_user_compare_fci;
    basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
    return;
  } else {

  }
  zval_unset_isref_p(array);
  refcount = zval_refcount_p(array);
  tmp___1 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_user_compare, 1);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
  } else {
    tmp___0 = zval_refcount_p(array);
    if (refcount > tmp___0) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Array was modified by the user comparison function");
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (zend_uchar )3;
        break;
      }
    } else {
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 1L;
        __z___1->type = (zend_uchar )3;
        break;
      }
    }
  }
  tmp___2 = zval_refcount_p(array);
  if (tmp___2 > 1U) {
    zval_set_isref_p(array);
  } else {

  }
  basic_globals.user_compare_fci = old_user_compare_fci;
  basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
  return;
}
}
void zif_uasort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  unsigned int refcount ;
  zend_fcall_info old_user_compare_fci ;
  zend_fcall_info_cache old_user_compare_fci_cache ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  zval *__z___1 ;
  zend_uint tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zend_uint tmp___2 ;

  {
  old_user_compare_fci = basic_globals.user_compare_fci;
  old_user_compare_fci_cache = basic_globals.user_compare_fci_cache;
  basic_globals.user_compare_fci_cache = (zend_fcall_info_cache )empty_fcall_info_cache;
  tmp = zend_parse_parameters(ht, "af", & array,
                              & basic_globals.user_compare_fci,
                              & basic_globals.user_compare_fci_cache);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    basic_globals.user_compare_fci = old_user_compare_fci;
    basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
    return;
  } else {

  }
  zval_unset_isref_p(array);
  refcount = zval_refcount_p(array);
  tmp___1 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_user_compare, 0);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
  } else {
    tmp___0 = zval_refcount_p(array);
    if (refcount > tmp___0) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Array was modified by the user comparison function");
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (zend_uchar )3;
        break;
      }
    } else {
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 1L;
        __z___1->type = (zend_uchar )3;
        break;
      }
    }
  }
  tmp___2 = zval_refcount_p(array);
  if (tmp___2 > 1U) {
    zval_set_isref_p(array);
  } else {

  }
  basic_globals.user_compare_fci = old_user_compare_fci;
  basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
  return;
}
}
static int php_array_user_key_compare(void const   *a , void const   *b ) 
{ 
  Bucket *f ;
  Bucket *s ;
  zval *key1 ;
  zval *key2 ;
  zval **args[2] ;
  zval *retval_ptr ;
  long result ;
  void __attribute__((__visibility__("default")))  *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zend_uint tmp___4 ;
  zend_bool tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;

  {
  retval_ptr = (zval *)((void *)0);
  while (1) {
    tmp = _emalloc(sizeof(zval_gc_info ));
    key1 = (zval *)tmp;
    ((zval_gc_info *)key1)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  *key1 = (zval )zval_used_for_init;
  while (1) {
    tmp___0 = _emalloc(sizeof(zval_gc_info ));
    key2 = (zval *)tmp___0;
    ((zval_gc_info *)key2)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  *key2 = (zval )zval_used_for_init;
  args[0] = & key1;
  args[1] = & key2;
  f = *((Bucket **)a);
  s = *((Bucket **)b);
  if (f->nKeyLength == 0U) {
    key1->value.lval = (long )f->h;
    key1->type = (zend_uchar )1;
  } else {
    tmp___1 = _estrndup(f->arKey, f->nKeyLength - 1U);
    key1->value.str.val = (char *)tmp___1;
    key1->value.str.len = (int )(f->nKeyLength - 1U);
    key1->type = (zend_uchar )6;
  }
  if (s->nKeyLength == 0U) {
    key2->value.lval = (long )s->h;
    key2->type = (zend_uchar )1;
  } else {
    tmp___2 = _estrndup(s->arKey, s->nKeyLength - 1U);
    key2->value.str.val = (char *)tmp___2;
    key2->value.str.len = (int )(s->nKeyLength - 1U);
    key2->type = (zend_uchar )6;
  }
  basic_globals.user_compare_fci.param_count = (zend_uint )2;
  basic_globals.user_compare_fci.params = args;
  basic_globals.user_compare_fci.retval_ptr_ptr = & retval_ptr;
  basic_globals.user_compare_fci.no_separation = (zend_bool )0;
  tmp___6 = zend_call_function(& basic_globals.user_compare_fci,
                               & basic_globals.user_compare_fci_cache);
  if (tmp___6 == (int __attribute__((__visibility__("default")))  )0) {
    if (retval_ptr) {
      if ((int )retval_ptr->type != 1) {
        tmp___5 = zval_isref_p(retval_ptr);
        if (tmp___5) {

        } else {
          while (1) {
            tmp___4 = zval_refcount_p(retval_ptr);
            if (tmp___4 > 1U) {
              zval_delref_p(retval_ptr);
              while (1) {
                tmp___3 = _emalloc(sizeof(zval_gc_info ));
                new_zv = (zval *)tmp___3;
                ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv->value = retval_ptr->value;
                  new_zv->type = retval_ptr->type;
                  break;
                }
                zval_set_refcount_p(new_zv, (zend_uint )1);
                zval_unset_isref_p(new_zv);
                break;
              }
              retval_ptr = new_zv;
              _zval_copy_ctor(new_zv);
            } else {

            }
            break;
          }
        }
        convert_to_long(retval_ptr);
      } else {

      }
      result = retval_ptr->value.lval;
      _zval_ptr_dtor(& retval_ptr);
    } else {
      result = 0L;
    }
  } else {
    result = 0L;
  }
  _zval_ptr_dtor(& key1);
  _zval_ptr_dtor(& key2);
  return ((int )result);
}
}
void zif_uksort(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  unsigned int refcount ;
  zend_fcall_info old_user_compare_fci ;
  zend_fcall_info_cache old_user_compare_fci_cache ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  zval *__z___1 ;
  zend_uint tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zend_uint tmp___2 ;

  {
  old_user_compare_fci = basic_globals.user_compare_fci;
  old_user_compare_fci_cache = basic_globals.user_compare_fci_cache;
  basic_globals.user_compare_fci_cache = (zend_fcall_info_cache )empty_fcall_info_cache;
  tmp = zend_parse_parameters(ht, "af", & array,
                              & basic_globals.user_compare_fci,
                              & basic_globals.user_compare_fci_cache);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    basic_globals.user_compare_fci = old_user_compare_fci;
    basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
    return;
  } else {

  }
  zval_unset_isref_p(array);
  refcount = zval_refcount_p(array);
  tmp___1 = zend_hash_sort(array->value.ht,
                           (void (*)(void * , size_t  ,
                                     size_t  , int (*)(void const   * ,
                                                       void const   * ) ))(& zend_qsort),
                           & php_array_user_key_compare, 0);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
  } else {
    tmp___0 = zval_refcount_p(array);
    if (refcount > tmp___0) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Array was modified by the user comparison function");
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (zend_uchar )3;
        break;
      }
    } else {
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 1L;
        __z___1->type = (zend_uchar )3;
        break;
      }
    }
  }
  tmp___2 = zval_refcount_p(array);
  if (tmp___2 > 1U) {
    zval_set_isref_p(array);
  } else {

  }
  basic_globals.user_compare_fci = old_user_compare_fci;
  basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
  return;
}
}
void zif_end(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  zval **entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uchar is_ref ;
  zend_bool tmp___1 ;
  zend_uint refcount ;
  zend_uint tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "H", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  zend_hash_internal_pointer_end_ex(array, (HashPosition *)((void *)0));
  if (return_value_used) {
    tmp___0 = zend_hash_get_current_data_ex(array, (void **)(& entry),
                                            (HashPosition *)((void *)0));
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    tmp___1 = zval_isref_p(return_value);
    is_ref = tmp___1;
    tmp___2 = zval_refcount_p(return_value);
    refcount = tmp___2;
    while (1) {
      return_value->value = (*entry)->value;
      return_value->type = (*entry)->type;
      break;
    }
    _zval_copy_ctor(return_value);
    zval_set_isref_to_p(return_value, is_ref);
    zval_set_refcount_p(return_value, refcount);
    return;
  } else {

  }
  return;
}
}
void zif_prev(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  zval **entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uchar is_ref ;
  zend_bool tmp___1 ;
  zend_uint refcount ;
  zend_uint tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "H", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  zend_hash_move_backwards_ex(array, (HashPosition *)((void *)0));
  if (return_value_used) {
    tmp___0 = zend_hash_get_current_data_ex(array, (void **)(& entry),
                                            (HashPosition *)((void *)0));
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    tmp___1 = zval_isref_p(return_value);
    is_ref = tmp___1;
    tmp___2 = zval_refcount_p(return_value);
    refcount = tmp___2;
    while (1) {
      return_value->value = (*entry)->value;
      return_value->type = (*entry)->type;
      break;
    }
    _zval_copy_ctor(return_value);
    zval_set_isref_to_p(return_value, is_ref);
    zval_set_refcount_p(return_value, refcount);
    return;
  } else {

  }
  return;
}
}
void zif_next(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  zval **entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uchar is_ref ;
  zend_bool tmp___1 ;
  zend_uint refcount ;
  zend_uint tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "H", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  zend_hash_move_forward_ex(array, (HashPosition *)((void *)0));
  if (return_value_used) {
    tmp___0 = zend_hash_get_current_data_ex(array, (void **)(& entry),
                                            (HashPosition *)((void *)0));
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    tmp___1 = zval_isref_p(return_value);
    is_ref = tmp___1;
    tmp___2 = zval_refcount_p(return_value);
    refcount = tmp___2;
    while (1) {
      return_value->value = (*entry)->value;
      return_value->type = (*entry)->type;
      break;
    }
    _zval_copy_ctor(return_value);
    zval_set_isref_to_p(return_value, is_ref);
    zval_set_refcount_p(return_value, refcount);
    return;
  } else {

  }
  return;
}
}
void zif_reset(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  zval **entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uchar is_ref ;
  zend_bool tmp___1 ;
  zend_uint refcount ;
  zend_uint tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "H", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  zend_hash_internal_pointer_reset_ex(array, (HashPosition *)((void *)0));
  if (return_value_used) {
    tmp___0 = zend_hash_get_current_data_ex(array, (void **)(& entry),
                                            (HashPosition *)((void *)0));
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    tmp___1 = zval_isref_p(return_value);
    is_ref = tmp___1;
    tmp___2 = zval_refcount_p(return_value);
    refcount = tmp___2;
    while (1) {
      return_value->value = (*entry)->value;
      return_value->type = (*entry)->type;
      break;
    }
    _zval_copy_ctor(return_value);
    zval_set_isref_to_p(return_value, is_ref);
    zval_set_refcount_p(return_value, refcount);
    return;
  } else {

  }
  return;
}
}
void zif_current(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  zval **entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uchar is_ref ;
  zend_bool tmp___1 ;
  zend_uint refcount ;
  zend_uint tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "H", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_get_current_data_ex(array, (void **)(& entry),
                                          (HashPosition *)((void *)0));
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  tmp___1 = zval_isref_p(return_value);
  is_ref = tmp___1;
  tmp___2 = zval_refcount_p(return_value);
  refcount = tmp___2;
  while (1) {
    return_value->value = (*entry)->value;
    return_value->type = (*entry)->type;
    break;
  }
  _zval_copy_ctor(return_value);
  zval_set_isref_to_p(return_value, is_ref);
  zval_set_refcount_p(return_value, refcount);
  return;
}
}
void zif_key(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  char *string_key ;
  uint string_length ;
  ulong num_key ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  zval *__z___0 ;

  {
  tmp = zend_parse_parameters(ht, "H", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_get_current_key_ex((HashTable const   *)array,
                                         & string_key, & string_length,
                                         & num_key, (zend_bool )0,
                                         (HashPosition *)((void *)0));
  switch (tmp___0) {
  case (int __attribute__((__visibility__("default")))  )1: 
  while (1) {
    __s = (char const   *)string_key;
    __l = (int )(string_length - 1U);
    __z = return_value;
    __z->value.str.len = __l;
    tmp___1 = _estrndup(__s, (unsigned int )__l);
    __z->value.str.val = (char *)tmp___1;
    __z->type = (zend_uchar )6;
    break;
  }
  break;
  case (int __attribute__((__visibility__("default")))  )2: 
  __z___0 = return_value;
  __z___0->value.lval = (long )num_key;
  __z___0->type = (zend_uchar )1;
  break;
  case (int __attribute__((__visibility__("default")))  )3: 
  return;
  }
  return;
}
}
void zif_min(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) 
{ 
  int argc ;
  zval ***args ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval **result ;
  zend_uchar is_ref ;
  zend_bool tmp___0 ;
  zend_uint refcount ;
  zend_uint tmp___1 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  zval **min ;
  zval result___0 ;
  int i ;
  zend_uchar is_ref___0 ;
  zend_bool tmp___3 ;
  zend_uint refcount___0 ;
  zend_uint tmp___4 ;

  {
  args = (zval ***)((void *)0);
  tmp = zend_parse_parameters(ht, "+", & args, & argc);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  php_set_compare_func(0);
  if (argc == 1) {
    if ((int )(*(*(args + 0)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "When only one parameter is given, it must be an array");
      return_value->type = (zend_uchar )0;
    } else {
      tmp___2 = zend_hash_minmax((HashTable const   *)(*(*(args + 0)))->value.ht,
                                 & php_array_data_compare, 0,
                                 (void **)(& result));
      if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
        tmp___0 = zval_isref_p(return_value);
        is_ref = tmp___0;
        tmp___1 = zval_refcount_p(return_value);
        refcount = tmp___1;
        while (1) {
          return_value->value = (*result)->value;
          return_value->type = (*result)->type;
          break;
        }
        _zval_copy_ctor(return_value);
        zval_set_isref_to_p(return_value, is_ref);
        zval_set_refcount_p(return_value, refcount);
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Array must contain at least one element");
        while (1) {
          __z = return_value;
          __z->value.lval = 0L;
          __z->type = (zend_uchar )3;
          break;
        }
      }
    }
  } else {
    min = *(args + 0);
    i = 1;
    while (i < argc) {
      is_smaller_function(& result___0, *(*(args + i)), *min);
      if (result___0.value.lval == 1L) {
        min = *(args + i);
      } else {

      }
      i ++;
    }
    tmp___3 = zval_isref_p(return_value);
    is_ref___0 = tmp___3;
    tmp___4 = zval_refcount_p(return_value);
    refcount___0 = tmp___4;
    while (1) {
      return_value->value = (*min)->value;
      return_value->type = (*min)->type;
      break;
    }
    _zval_copy_ctor(return_value);
    zval_set_isref_to_p(return_value, is_ref___0);
    zval_set_refcount_p(return_value, refcount___0);
  }
  if (args) {
    _efree((void *)args);
  } else {

  }
  return;
}
}
void zif_max(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) 
{ 
  zval ***args ;
  int argc ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval **result ;
  zend_uchar is_ref ;
  zend_bool tmp___0 ;
  zend_uint refcount ;
  zend_uint tmp___1 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  zval **max ;
  zval result___0 ;
  int i ;
  zend_uchar is_ref___0 ;
  zend_bool tmp___3 ;
  zend_uint refcount___0 ;
  zend_uint tmp___4 ;

  {
  args = (zval ***)((void *)0);
  tmp = zend_parse_parameters(ht, "+", & args, & argc);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  php_set_compare_func(0);
  if (argc == 1) {
    if ((int )(*(*(args + 0)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "When only one parameter is given, it must be an array");
      return_value->type = (zend_uchar )0;
    } else {
      tmp___2 = zend_hash_minmax((HashTable const   *)(*(*(args + 0)))->value.ht,
                                 & php_array_data_compare, 1,
                                 (void **)(& result));
      if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
        tmp___0 = zval_isref_p(return_value);
        is_ref = tmp___0;
        tmp___1 = zval_refcount_p(return_value);
        refcount = tmp___1;
        while (1) {
          return_value->value = (*result)->value;
          return_value->type = (*result)->type;
          break;
        }
        _zval_copy_ctor(return_value);
        zval_set_isref_to_p(return_value, is_ref);
        zval_set_refcount_p(return_value, refcount);
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Array must contain at least one element");
        while (1) {
          __z = return_value;
          __z->value.lval = 0L;
          __z->type = (zend_uchar )3;
          break;
        }
      }
    }
  } else {
    max = *(args + 0);
    i = 1;
    while (i < argc) {
      is_smaller_or_equal_function(& result___0, *(*(args + i)), *max);
      if (result___0.value.lval == 0L) {
        max = *(args + i);
      } else {

      }
      i ++;
    }
    tmp___3 = zval_isref_p(return_value);
    is_ref___0 = tmp___3;
    tmp___4 = zval_refcount_p(return_value);
    refcount___0 = tmp___4;
    while (1) {
      return_value->value = (*max)->value;
      return_value->type = (*max)->type;
      break;
    }
    _zval_copy_ctor(return_value);
    zval_set_isref_to_p(return_value, is_ref___0);
    zval_set_refcount_p(return_value, refcount___0);
  }
  if (args) {
    _efree((void *)args);
  } else {

  }
  return;
}
}
static int php_array_walk(HashTable *target_hash , zval **userdata ,
                          int recursive ) 
{ 
  zval **args[3] ;
  zval *retval_ptr ;
  zval *key ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  HashPosition pos ;
  HashTable *thash ;
  zend_fcall_info orig_array_walk_fci ;
  zend_fcall_info_cache orig_array_walk_fci_cache ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_uint tmp___0 ;
  zend_bool tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;

  {
  key = (zval *)((void *)0);
  args[1] = & key;
  args[2] = userdata;
  if (userdata) {
    zval_addref_p(*userdata);
  } else {

  }
  zend_hash_internal_pointer_reset_ex(target_hash, & pos);
  basic_globals.array_walk_fci.retval_ptr_ptr = & retval_ptr;
  if (userdata) {
    basic_globals.array_walk_fci.param_count = (zend_uint )3;
  } else {
    basic_globals.array_walk_fci.param_count = (zend_uint )2;
  }
  basic_globals.array_walk_fci.params = args;
  basic_globals.array_walk_fci.no_separation = (zend_bool )0;
  while (1) {
    if (! executor_globals.exception) {
      tmp___6 = zend_hash_get_current_data_ex(target_hash, (void **)(& args[0]),
                                              & pos);
      if (tmp___6 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
    } else {
      break;
    }
    if (recursive) {
      if ((int )(*(args[0]))->type == 4) {
        tmp___1 = zval_isref_p(*(args[0]));
        if (tmp___1) {

        } else {
          while (1) {
            tmp___0 = zval_refcount_p(*(args[0]));
            if (tmp___0 > 1U) {
              zval_delref_p(*(args[0]));
              while (1) {
                tmp = _emalloc(sizeof(zval_gc_info ));
                new_zv = (zval *)tmp;
                ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv->value = (*(args[0]))->value;
                  new_zv->type = (*(args[0]))->type;
                  break;
                }
                zval_set_refcount_p(new_zv, (zend_uint )1);
                zval_unset_isref_p(new_zv);
                break;
              }
              *(args[0]) = new_zv;
              _zval_copy_ctor(new_zv);
            } else {

            }
            break;
          }
        }
        thash = (*(args[0]))->value.ht;
        if ((int )thash->nApplyCount > 1) {
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "recursion detected");
          if (userdata) {
            _zval_ptr_dtor(userdata);
          } else {

          }
          return (0);
        } else {

        }
        orig_array_walk_fci = basic_globals.array_walk_fci;
        orig_array_walk_fci_cache = basic_globals.array_walk_fci_cache;
        thash->nApplyCount = (unsigned char )((int )thash->nApplyCount + 1);
        php_array_walk(thash, userdata, recursive);
        thash->nApplyCount = (unsigned char )((int )thash->nApplyCount - 1);
        basic_globals.array_walk_fci = orig_array_walk_fci;
        basic_globals.array_walk_fci_cache = orig_array_walk_fci_cache;
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      while (1) {
        tmp___2 = _emalloc(sizeof(zval_gc_info ));
        key = (zval *)tmp___2;
        ((zval_gc_info *)key)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      key->refcount__gc = (zend_uint )1;
      key->is_ref__gc = (zend_uchar )0;
      tmp___3 = zend_hash_get_current_key_ex((HashTable const   *)target_hash,
                                             & string_key, & string_key_len,
                                             & num_key, (zend_bool )0, & pos);
      switch (tmp___3) {
      case (int __attribute__((__visibility__("default")))  )2: 
      key->type = (zend_uchar )1;
      key->value.lval = (long )num_key;
      break;
      case (int __attribute__((__visibility__("default")))  )1: 
      while (1) {
        __s = (char const   *)string_key;
        __l = (int )(string_key_len - 1U);
        __z = key;
        __z->value.str.len = __l;
        tmp___4 = _estrndup(__s, (unsigned int )__l);
        __z->value.str.val = (char *)tmp___4;
        __z->type = (zend_uchar )6;
        break;
      }
      break;
      }
      tmp___5 = zend_call_function(& basic_globals.array_walk_fci,
                                   & basic_globals.array_walk_fci_cache);
      if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {
        if (retval_ptr) {
          _zval_ptr_dtor(& retval_ptr);
        } else {

        }
      } else {
        if (key) {
          _zval_ptr_dtor(& key);
          key = (zval *)((void *)0);
        } else {

        }
        break;
      }
    }
    if (key) {
      _zval_ptr_dtor(& key);
      key = (zval *)((void *)0);
    } else {

    }
    zend_hash_move_forward_ex(target_hash, & pos);
  }
  if (userdata) {
    _zval_ptr_dtor(userdata);
  } else {

  }
  return (0);
}
}
void zif_array_walk(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 
  HashTable *array ;
  zval *userdata ;
  zend_fcall_info orig_array_walk_fci ;
  zend_fcall_info_cache orig_array_walk_fci_cache ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval **tmp___0 ;
  zval *__z ;

  {
  userdata = (zval *)((void *)0);
  orig_array_walk_fci = basic_globals.array_walk_fci;
  orig_array_walk_fci_cache = basic_globals.array_walk_fci_cache;
  tmp = zend_parse_parameters(ht, "Hf|z/", & array,
                              & basic_globals.array_walk_fci,
                              & basic_globals.array_walk_fci_cache, & userdata);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    basic_globals.array_walk_fci = orig_array_walk_fci;
    basic_globals.array_walk_fci_cache = orig_array_walk_fci_cache;
    return;
  } else {

  }
  if (userdata) {
    tmp___0 = & userdata;
  } else {
    tmp___0 = (zval **)((void *)0);
  }
  php_array_walk(array, tmp___0, 0);
  basic_globals.array_walk_fci = orig_array_walk_fci;
  basic_globals.array_walk_fci_cache = orig_array_walk_fci_cache;
  while (1) {
    __z = return_value;
    __z->value.lval = 1L;
    __z->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_array_walk_recursive(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) 
{ 
  HashTable *array ;
  zval *userdata ;
  zend_fcall_info orig_array_walk_fci ;
  zend_fcall_info_cache orig_array_walk_fci_cache ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval **tmp___0 ;
  zval *__z ;

  {
  userdata = (zval *)((void *)0);
  orig_array_walk_fci = basic_globals.array_walk_fci;
  orig_array_walk_fci_cache = basic_globals.array_walk_fci_cache;
  tmp = zend_parse_parameters(ht, "Hf|z/", & array,
                              & basic_globals.array_walk_fci,
                              & basic_globals.array_walk_fci_cache, & userdata);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    basic_globals.array_walk_fci = orig_array_walk_fci;
    basic_globals.array_walk_fci_cache = orig_array_walk_fci_cache;
    return;
  } else {

  }
  if (userdata) {
    tmp___0 = & userdata;
  } else {
    tmp___0 = (zval **)((void *)0);
  }
  php_array_walk(array, tmp___0, 1);
  basic_globals.array_walk_fci = orig_array_walk_fci;
  basic_globals.array_walk_fci_cache = orig_array_walk_fci_cache;
  while (1) {
    __z = return_value;
    __z->value.lval = 1L;
    __z->type = (zend_uchar )3;
    break;
  }
  return;
}
}
static void php_search_array(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used , int behavior ) 
{ 
  zval *value ;
  zval *array ;
  zval **entry ;
  zval res ;
  HashPosition pos ;
  zend_bool strict ;
  ulong num_key ;
  uint str_key_len ;
  char *string_key ;
  int (*is_equal_func)(zval * , zval * , zval * ) ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  char const   *__s ;
  int __l ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  zval *__z___2 ;

  {
  strict = (zend_bool )0;
  is_equal_func = (int (*)(zval * , zval * , zval * ))(& is_equal_function);
  tmp = zend_parse_parameters(ht, "za|b", & value, & array, & strict);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (strict) {
    is_equal_func = (int (*)(zval * , zval * , zval * ))(& is_identical_function);
  } else {

  }
  zend_hash_internal_pointer_reset_ex(array->value.ht, & pos);
  while (1) {
    tmp___2 = zend_hash_get_current_data_ex(array->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    (*is_equal_func)(& res, value, *entry);
    if (res.value.lval) {
      if (behavior == 0) {
        while (1) {
          __z = return_value;
          __z->value.lval = 1L;
          __z->type = (zend_uchar )3;
          break;
        }
        return;
      } else {
        tmp___0 = zend_hash_get_current_key_ex((HashTable const   *)array->value.ht,
                                               & string_key, & str_key_len,
                                               & num_key, (zend_bool )0, & pos);
        switch (tmp___0) {
        case (int __attribute__((__visibility__("default")))  )1: 
        while (1) {
          __s = (char const   *)string_key;
          __l = (int )(str_key_len - 1U);
          __z___0 = return_value;
          __z___0->value.str.len = __l;
          tmp___1 = _estrndup(__s, (unsigned int )__l);
          __z___0->value.str.val = (char *)tmp___1;
          __z___0->type = (zend_uchar )6;
          break;
        }
        return;
        break;
        case (int __attribute__((__visibility__("default")))  )2: 
        __z___1 = return_value;
        __z___1->value.lval = (long )num_key;
        __z___1->type = (zend_uchar )1;
        return;
        break;
        }
      }
    } else {

    }
    zend_hash_move_forward_ex(array->value.ht, & pos);
  }
  while (1) {
    __z___2 = return_value;
    __z___2->value.lval = 0L;
    __z___2->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_in_array(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) 
{ 


  {
  php_search_array(ht, return_value, return_value_ptr, this_ptr,
                   return_value_used, 0);
  return;
}
}
void zif_array_search(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 


  {
  php_search_array(ht, return_value, return_value_ptr, this_ptr,
                   return_value_used, 1);
  return;
}
}
static int php_valid_var_name(char *var_name , int var_name_len ) 
{ 
  int i ;
  int ch ;

  {
  if (! var_name) {
    return (0);
  } else
  if (! var_name_len) {
    return (0);
  } else {

  }
  ch = (int )*((unsigned char *)var_name + 0);
  if ((int )*(var_name + 0) != 95) {
    if (ch < 65) {
      goto _L___0;
    } else
    if (ch > 90) {
      _L___0: /* CIL Label */ 
      if (ch < 97) {
        goto _L;
      } else
      if (ch > 122) {
        _L: /* CIL Label */ 
        if (ch < 127) {
          return (0);
        } else
        if (ch > 255) {
          return (0);
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  if (var_name_len > 1) {
    i = 1;
    while (i < var_name_len) {
      ch = (int )*((unsigned char *)var_name + i);
      if ((int )*(var_name + i) != 95) {
        if (ch < 48) {
          goto _L___3;
        } else
        if (ch > 57) {
          _L___3: /* CIL Label */ 
          if (ch < 65) {
            goto _L___2;
          } else
          if (ch > 90) {
            _L___2: /* CIL Label */ 
            if (ch < 97) {
              goto _L___1;
            } else
            if (ch > 122) {
              _L___1: /* CIL Label */ 
              if (ch < 127) {
                return (0);
              } else
              if (ch > 255) {
                return (0);
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
      i ++;
    }
  } else {

  }
  return (1);
}
}
int __attribute__((__visibility__("default")))  php_prefix_varname(zval *result ,
                                                                   zval *prefix ,
                                                                   char *var_name ,
                                                                   int var_name_len ,
                                                                   zend_bool add_underscore ) 
{ 
  int tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;

  {
  if (add_underscore) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  result->value.str.len = (prefix->value.str.len + tmp) + var_name_len;
  result->type = (zend_uchar )6;
  tmp___0 = _emalloc((size_t )(result->value.str.len + 1));
  result->value.str.val = (char *)tmp___0;
  memcpy((void */* __restrict  */)result->value.str.val,
         (void const   */* __restrict  */)prefix->value.str.val,
         (size_t )prefix->value.str.len);
  if (add_underscore) {
    *(result->value.str.val + prefix->value.str.len) = (char )'_';
  } else {

  }
  if (add_underscore) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  memcpy((void */* __restrict  */)((result->value.str.val + prefix->value.str.len) + tmp___1),
         (void const   */* __restrict  */)var_name, (size_t )(var_name_len + 1));
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
void zif_extract(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 
  zval *var_array ;
  zval *prefix ;
  long extract_type ;
  zval **entry ;
  zval *data ;
  char *var_name ;
  ulong num_key ;
  uint var_name_len ;
  int var_exists ;
  int key_type ;
  int count ;
  int extract_refs ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int tmp___0 ;
  zval *original_var ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_bool tmp___2 ;
  zval final_name ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  zval num ;
  zval *__z ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___8 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___15 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  char const   *__s ;
  int __l ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___19 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___1 ;
  char __attribute__((__visibility__("default")))  *tmp___20 ;
  char const   *__s___1 ;
  int __l___1 ;
  zval *__z___2 ;
  char __attribute__((__visibility__("default")))  *tmp___21 ;
  int tmp___22 ;
  char const   *__s___2 ;
  int __l___2 ;
  zval *__z___3 ;
  char __attribute__((__visibility__("default")))  *tmp___23 ;
  zval **orig_var ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___24 ;
  zend_uint tmp___25 ;
  zend_bool tmp___26 ;
  int __attribute__((__visibility__("default")))  tmp___27 ;
  void __attribute__((__visibility__("default")))  *tmp___28 ;
  zval **orig_var___0 ;
  zend_uint tmp___29 ;
  zend_uint tmp___30 ;
  int __attribute__((__visibility__("default")))  tmp___31 ;
  zend_bool tmp___32 ;
  int tmp___33 ;
  int __attribute__((__visibility__("default")))  tmp___34 ;
  zval *__z___4 ;

  {
  prefix = (zval *)((void *)0);
  extract_type = 0L;
  count = 0;
  extract_refs = 0;
  tmp = zend_parse_parameters(ht, "a|lz/", & var_array, & extract_type, & prefix);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  extract_refs = (int )(extract_type & 256L);
  extract_type &= 255L;
  if (extract_type < 0L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Invalid extract type");
    return;
  } else
  if (extract_type > 6L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Invalid extract type");
    return;
  } else {

  }
  if (extract_type > 1L) {
    if (extract_type <= 5L) {
      if (ht < 3) {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "specified extract type requires the prefix parameter");
        return;
      } else {

      }
    } else {

    }
  } else {

  }
  if (prefix) {
    if ((int )prefix->type != 6) {
      _convert_to_string(prefix);
    } else {

    }
    if (prefix->value.str.len) {
      tmp___0 = php_valid_var_name(prefix->value.str.val, prefix->value.str.len);
      if (tmp___0) {

      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "prefix is not a valid identifier");
        return;
      }
    } else {

    }
  } else {

  }
  if (! executor_globals.active_symbol_table) {
    zend_rebuild_symbol_table();
  } else {

  }
  if (! extract_refs) {
    tmp___2 = zval_isref_p(var_array);
    if (tmp___2) {
      original_var = var_array;
      while (1) {
        tmp___1 = _emalloc(sizeof(zval_gc_info ));
        var_array = (zval *)tmp___1;
        ((zval_gc_info *)var_array)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      while (1) {
        while (1) {
          var_array->value = original_var->value;
          var_array->type = original_var->type;
          break;
        }
        zval_set_refcount_p(var_array, (zend_uint )1);
        zval_unset_isref_p(var_array);
        break;
      }
      _zval_copy_ctor(var_array);
    } else {
      zval_addref_p(var_array);
    }
  } else {

  }
  zend_hash_internal_pointer_reset_ex(var_array->value.ht, & pos);
  while (1) {
    tmp___34 = zend_hash_get_current_data_ex(var_array->value.ht,
                                             (void **)(& entry), & pos);
    if (tmp___34 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    final_name.type = (zend_uchar )0;
    tmp___3 = zend_hash_get_current_key_ex((HashTable const   *)var_array->value.ht,
                                           & var_name, & var_name_len,
                                           & num_key, (zend_bool )0, & pos);
    key_type = (int )tmp___3;
    var_exists = 0;
    if (key_type == 1) {
      var_name_len --;
      tmp___4 = zend_hash_exists((HashTable const   *)executor_globals.active_symbol_table,
                                 (char const   *)var_name, var_name_len + 1U);
      var_exists = (int )tmp___4;
    } else
    if (key_type == 2) {
      if (extract_type == 3L) {
        goto _L;
      } else
      if (extract_type == 4L) {
        _L: /* CIL Label */ 
        __z = & num;
        __z->value.lval = (long )num_key;
        __z->type = (zend_uchar )1;
        if ((int )num.type != 6) {
          _convert_to_string(& num);
        } else {

        }
        php_prefix_varname(& final_name, prefix, num.value.str.val,
                           num.value.str.len, (zend_bool )1);
        _zval_dtor(& num);
      } else {
        zend_hash_move_forward_ex(var_array->value.ht, & pos);
        continue;
      }
    } else {
      zend_hash_move_forward_ex(var_array->value.ht, & pos);
      continue;
    }
    switch (extract_type) {
    case 6L: 
    if (! var_exists) {
      break;
    } else {

    }
    case 0L: 
    if (var_exists) {
      if (var_name_len == sizeof("GLOBALS") - 1U) {
        if (0) {
          __s1_len = strlen((char const   *)var_name);
          __s2_len = strlen("GLOBALS");
          if (! ((size_t )((void const   *)(var_name + 1)) - (size_t )((void const   *)var_name) == 1U)) {
            goto _L___1;
          } else
          if (__s1_len >= 4U) {
            _L___1: /* CIL Label */ 
            if (! ((size_t )((void const   *)("GLOBALS" + 1)) - (size_t )((void const   *)"GLOBALS") == 1U)) {
              tmp___11 = 1;
            } else
            if (__s2_len >= 4U) {
              tmp___11 = 1;
            } else {
              tmp___11 = 0;
            }
          } else {
            tmp___11 = 0;
          }
          if (tmp___11) {
            tmp___6 = __builtin_strcmp((char const   *)var_name, "GLOBALS");
            tmp___10 = tmp___6;
          } else {
            tmp___9 = __builtin_strcmp((char const   *)var_name, "GLOBALS");
            tmp___10 = tmp___9;
          }
        } else {
          tmp___9 = __builtin_strcmp((char const   *)var_name, "GLOBALS");
          tmp___10 = tmp___9;
        }
        if (tmp___10) {

        } else {
          break;
        }
      } else {

      }
    } else {

    }
    if (var_exists) {
      if (var_name_len == sizeof("this") - 1U) {
        if (0) {
          __s1_len___0 = strlen((char const   *)var_name);
          __s2_len___0 = strlen("this");
          if (! ((size_t )((void const   *)(var_name + 1)) - (size_t )((void const   *)var_name) == 1U)) {
            goto _L___3;
          } else
          if (__s1_len___0 >= 4U) {
            _L___3: /* CIL Label */ 
            if (! ((size_t )((void const   *)("this" + 1)) - (size_t )((void const   *)"this") == 1U)) {
              tmp___18 = 1;
            } else
            if (__s2_len___0 >= 4U) {
              tmp___18 = 1;
            } else {
              tmp___18 = 0;
            }
          } else {
            tmp___18 = 0;
          }
          if (tmp___18) {
            tmp___13 = __builtin_strcmp((char const   *)var_name, "this");
            tmp___17 = tmp___13;
          } else {
            tmp___16 = __builtin_strcmp((char const   *)var_name, "this");
            tmp___17 = tmp___16;
          }
        } else {
          tmp___16 = __builtin_strcmp((char const   *)var_name, "this");
          tmp___17 = tmp___16;
        }
        if (tmp___17) {

        } else
        if (executor_globals.scope) {
          if ((executor_globals.scope)->name_length != 0U) {
            break;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
    while (1) {
      __s = (char const   *)var_name;
      __l = (int )var_name_len;
      __z___0 = & final_name;
      __z___0->value.str.len = __l;
      tmp___19 = _estrndup(__s, (unsigned int )__l);
      __z___0->value.str.val = (char *)tmp___19;
      __z___0->type = (zend_uchar )6;
      break;
    }
    break;
    case 5L: 
    if (var_exists) {
      php_prefix_varname(& final_name, prefix, var_name, (int )var_name_len,
                         (zend_bool )1);
    } else {

    }
    break;
    case 2L: 
    if (! var_exists) {
      if (var_name_len != 0U) {
        while (1) {
          __s___0 = (char const   *)var_name;
          __l___0 = (int )var_name_len;
          __z___1 = & final_name;
          __z___1->value.str.len = __l___0;
          tmp___20 = _estrndup(__s___0, (unsigned int )__l___0);
          __z___1->value.str.val = (char *)tmp___20;
          __z___1->type = (zend_uchar )6;
          break;
        }
      } else {

      }
    } else {

    }
    case 3L: 
    if ((int )final_name.type == 0) {
      if (var_name_len != 0U) {
        php_prefix_varname(& final_name, prefix, var_name, (int )var_name_len,
                           (zend_bool )1);
      } else {

      }
    } else {

    }
    break;
    case 4L: 
    if ((int )final_name.type == 0) {
      tmp___22 = php_valid_var_name(var_name, (int )var_name_len);
      if (tmp___22) {
        while (1) {
          __s___1 = (char const   *)var_name;
          __l___1 = (int )var_name_len;
          __z___2 = & final_name;
          __z___2->value.str.len = __l___1;
          tmp___21 = _estrndup(__s___1, (unsigned int )__l___1);
          __z___2->value.str.val = (char *)tmp___21;
          __z___2->type = (zend_uchar )6;
          break;
        }
      } else {
        php_prefix_varname(& final_name, prefix, var_name, (int )var_name_len,
                           (zend_bool )1);
      }
    } else {

    }
    break;
    default: 
    if (! var_exists) {
      while (1) {
        __s___2 = (char const   *)var_name;
        __l___2 = (int )var_name_len;
        __z___3 = & final_name;
        __z___3->value.str.len = __l___2;
        tmp___23 = _estrndup(__s___2, (unsigned int )__l___2);
        __z___3->value.str.val = (char *)tmp___23;
        __z___3->type = (zend_uchar )6;
        break;
      }
    } else {

    }
    break;
    }
    if ((int )final_name.type != 0) {
      tmp___33 = php_valid_var_name(final_name.value.str.val,
                                    final_name.value.str.len);
      if (tmp___33) {
        if (extract_refs) {
          tmp___26 = zval_isref_p(*entry);
          if (tmp___26) {

          } else {
            while (1) {
              tmp___25 = zval_refcount_p(*entry);
              if (tmp___25 > 1U) {
                zval_delref_p(*entry);
                while (1) {
                  tmp___24 = _emalloc(sizeof(zval_gc_info ));
                  new_zv = (zval *)tmp___24;
                  ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                  break;
                }
                while (1) {
                  while (1) {
                    new_zv->value = (*entry)->value;
                    new_zv->type = (*entry)->type;
                    break;
                  }
                  zval_set_refcount_p(new_zv, (zend_uint )1);
                  zval_unset_isref_p(new_zv);
                  break;
                }
                *entry = new_zv;
                _zval_copy_ctor(new_zv);
              } else {

              }
              break;
            }
            zval_set_isref_p(*entry);
          }
          zval_add_ref(entry);
          tmp___27 = zend_hash_find((HashTable const   *)executor_globals.active_symbol_table,
                                    (char const   *)final_name.value.str.val,
                                    (uint )(final_name.value.str.len + 1),
                                    (void **)(& orig_var));
          if (tmp___27 == (int __attribute__((__visibility__("default")))  )0) {
            _zval_ptr_dtor(orig_var);
            *orig_var = *entry;
          } else {
            _zend_hash_add_or_update(executor_globals.active_symbol_table,
                                     (char const   *)final_name.value.str.val,
                                     (uint )(final_name.value.str.len + 1),
                                     (void *)((void **)entry), sizeof(zval *),
                                     (void **)((void *)0), 1);
          }
        } else {
          while (1) {
            tmp___28 = _emalloc(sizeof(zval_gc_info ));
            data = (zval *)tmp___28;
            ((zval_gc_info *)data)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          data->refcount__gc = (zend_uint )1;
          data->is_ref__gc = (zend_uchar )0;
          *data = *(*entry);
          _zval_copy_ctor(data);
          tmp___31 = zend_hash_find((HashTable const   *)executor_globals.active_symbol_table,
                                    (char const   *)final_name.value.str.val,
                                    (uint )(final_name.value.str.len + 1),
                                    (void **)(& orig_var___0));
          if (tmp___31 == (int __attribute__((__visibility__("default")))  )0) {
            tmp___32 = zval_isref_p(*orig_var___0);
            if (tmp___32) {
              tmp___29 = zval_refcount_p(*orig_var___0);
              zval_set_refcount_p(data, tmp___29);
              zval_set_isref_p(data);
              tmp___30 = zval_refcount_p(data);
              zval_set_refcount_p(data, (tmp___30 + 1U) - 1U);
              _zval_dtor(*orig_var___0);
              *(*orig_var___0) = *data;
              while (1) {
                if ((gc_root_buffer *)((zend_uintptr_t )((zval_gc_info *)data)->u.buffered & 4294967292UL)) {
                  gc_remove_zval_from_buffer(data);
                } else {

                }
                _efree((void *)data);
                break;
              }
            } else {
              zval_set_isref_to_p(data, (zend_bool )0);
              zval_set_refcount_p(data, (zend_uint )1);
              _zend_hash_add_or_update(executor_globals.active_symbol_table,
                                       (char const   *)final_name.value.str.val,
                                       (uint )(final_name.value.str.len + 1),
                                       (void *)(& data), sizeof(zval *),
                                       (void **)((void *)0), 1);
            }
          } else {
            zval_set_isref_to_p(data, (zend_bool )0);
            zval_set_refcount_p(data, (zend_uint )1);
            _zend_hash_add_or_update(executor_globals.active_symbol_table,
                                     (char const   *)final_name.value.str.val,
                                     (uint )(final_name.value.str.len + 1),
                                     (void *)(& data), sizeof(zval *),
                                     (void **)((void *)0), 1);
          }
        }
        count ++;
      } else {

      }
    } else {

    }
    _zval_dtor(& final_name);
    zend_hash_move_forward_ex(var_array->value.ht, & pos);
  }
  if (! extract_refs) {
    _zval_ptr_dtor(& var_array);
  } else {

  }
  __z___4 = return_value;
  __z___4->value.lval = (long )count;
  __z___4->type = (zend_uchar )1;
  return;
}
}
static void php_compact_var(HashTable *eg_active_symbol_table ,
                            zval *return_value , zval *entry ) 
{ 
  zval **value_ptr ;
  zval *value ;
  zval *data ;
  void __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  if ((int )entry->type == 6) {
    tmp___0 = zend_hash_find((HashTable const   *)eg_active_symbol_table,
                             (char const   *)entry->value.str.val,
                             (uint )(entry->value.str.len + 1),
                             (void **)(& value_ptr));
    if (tmp___0 != (int __attribute__((__visibility__("default")))  )-1) {
      value = *value_ptr;
      while (1) {
        tmp = _emalloc(sizeof(zval_gc_info ));
        data = (zval *)tmp;
        ((zval_gc_info *)data)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      while (1) {
        while (1) {
          data->value = value->value;
          data->type = value->type;
          break;
        }
        zval_set_refcount_p(data, (zend_uint )1);
        zval_unset_isref_p(data);
        break;
      }
      _zval_copy_ctor(data);
      _zend_hash_add_or_update(return_value->value.ht,
                               (char const   *)entry->value.str.val,
                               (uint )(entry->value.str.len + 1),
                               (void *)(& data), sizeof(zval *),
                               (void **)((void *)0), 1);
    } else {

    }
  } else
  if ((int )entry->type == 4) {
    if ((int )(entry->value.ht)->nApplyCount > 1) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "recursion detected");
      return;
    } else {

    }
    (entry->value.ht)->nApplyCount = (unsigned char )((int )(entry->value.ht)->nApplyCount + 1);
    zend_hash_internal_pointer_reset_ex(entry->value.ht, & pos);
    while (1) {
      tmp___1 = zend_hash_get_current_data_ex(entry->value.ht,
                                              (void **)(& value_ptr), & pos);
      if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
      value = *value_ptr;
      php_compact_var(eg_active_symbol_table, return_value, value);
      zend_hash_move_forward_ex(entry->value.ht, & pos);
    }
    (entry->value.ht)->nApplyCount = (unsigned char )((int )(entry->value.ht)->nApplyCount - 1);
  } else {

  }
  return;
}
}
void zif_compact(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 
  zval ***args ;
  int num_args ;
  int i ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  args = (zval ***)((void *)0);
  tmp = zend_parse_parameters(ht, "+", & args, & num_args);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (! executor_globals.active_symbol_table) {
    zend_rebuild_symbol_table();
  } else {

  }
  if (ht == 1) {
    if ((int )(*(*(args + 0)))->type == 4) {
      tmp___0 = zend_hash_num_elements((HashTable const   *)(*(*(args + 0)))->value.ht);
      _array_init(return_value, (uint )tmp___0);
    } else {
      _array_init(return_value, (uint )ht);
    }
  } else {
    _array_init(return_value, (uint )ht);
  }
  i = 0;
  while (i < ht) {
    php_compact_var(executor_globals.active_symbol_table, return_value,
                    *(*(args + i)));
    i ++;
  }
  if (args) {
    _efree((void *)args);
  } else {

  }
  return;
}
}
void zif_array_fill(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 
  zval *val ;
  long start_key ;
  long num ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  long tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "llz", & start_key, & num, & val);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (num < 1L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Number of elements must be positive");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  _array_init(return_value, (uint )num);
  num --;
  {

  }
  {
  tmp___0 = _zend_hash_index_update_or_next_insert(return_value->value.ht,
                                                   (ulong )start_key,
                                                   (void *)(& val),
                                                   sizeof(zval *),
                                                   (void **)((void *)0), 1);
  zval_add_ref(& val);
  }
  {

  }
  while (1) {
    tmp___2 = num;
    num --;
    if (tmp___2) {

    } else {
      break;
    }
    {

    }
    {
    tmp___1 = _zend_hash_index_update_or_next_insert(return_value->value.ht,
                                                     (ulong )0, (void *)(& val),
                                                     sizeof(zval *),
                                                     (void **)((void *)0),
                                                     1 << 2);
    zval_add_ref(& val);
    }
    {

    }
  }
  return;
}
}
void zif_array_fill_keys(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) 
{ 
  zval *keys ;
  zval *val ;
  zval **entry ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval key ;
  zval *key_ptr ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_parse_parameters(ht, "az", & keys, & val);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)keys->value.ht);
  _array_init(return_value, (uint )tmp___0);
  zend_hash_internal_pointer_reset_ex(keys->value.ht, & pos);
  while (1) {
    tmp___1 = zend_hash_get_current_data_ex(keys->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if ((int )(*entry)->type == 1) {
      zval_add_ref(& val);
      _zend_hash_index_update_or_next_insert(return_value->value.ht,
                                             (ulong )(*entry)->value.lval,
                                             (void *)(& val), sizeof(zval *),
                                             (void **)((void *)0), 1);
    } else {
      key_ptr = *entry;
      if ((int )(*entry)->type != 6) {
        key = *(*entry);
        _zval_copy_ctor(& key);
        if ((int )key.type != 6) {
          _convert_to_string(& key);
        } else {

        }
        key_ptr = & key;
      } else {

      }
      zval_add_ref(& val);
      zend_symtable_update(return_value->value.ht,
                           (char const   *)key_ptr->value.str.val,
                           (uint )(key_ptr->value.str.len + 1), (void *)(& val),
                           sizeof(zval *), (void **)((void *)0));
      if ((unsigned int )key_ptr != (unsigned int )*entry) {
        _zval_dtor(& key);
      } else {

      }
    }
    zend_hash_move_forward_ex(keys->value.ht, & pos);
  }
  return;
}
}
void zif_range(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 
  zval *zlow ;
  zval *zhigh ;
  zval *zstep ;
  int err ;
  int is_step_double ;
  double step ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zend_uchar tmp___0 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uint tmp___2 ;
  zend_bool tmp___3 ;
  int type1 ;
  int type2 ;
  unsigned char *low ;
  unsigned char *high ;
  long lstep ;
  zend_uchar tmp___4 ;
  zend_uchar tmp___5 ;
  unsigned char ch ;
  unsigned char ch___0 ;
  double low___0 ;
  double high___0 ;
  double value ;
  long i ;
  double low___1 ;
  double high___1 ;
  long lstep___0 ;
  zval *__z___0 ;

  {
  zstep = (zval *)((void *)0);
  err = 0;
  is_step_double = 0;
  step = 1.0;
  tmp = zend_parse_parameters(ht, "z/z/|z/", & zlow, & zhigh, & zstep);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  if (zstep) {
    if ((int )zstep->type == 2) {
      is_step_double = 1;
    } else
    if ((int )zstep->type == 6) {
      tmp___0 = is_numeric_string((char const   *)zstep->value.str.val,
                                  zstep->value.str.len, (long *)((void *)0),
                                  (double *)((void *)0), 0);
      if ((int )tmp___0 == 2) {
        is_step_double = 1;
      } else {

      }
    } else {

    }
    if ((int )zstep->type != 2) {
      tmp___3 = zval_isref_p(zstep);
      if (tmp___3) {

      } else {
        while (1) {
          tmp___2 = zval_refcount_p(zstep);
          if (tmp___2 > 1U) {
            zval_delref_p(zstep);
            while (1) {
              tmp___1 = _emalloc(sizeof(zval_gc_info ));
              new_zv = (zval *)tmp___1;
              ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
              break;
            }
            while (1) {
              while (1) {
                new_zv->value = zstep->value;
                new_zv->type = zstep->type;
                break;
              }
              zval_set_refcount_p(new_zv, (zend_uint )1);
              zval_unset_isref_p(new_zv);
              break;
            }
            zstep = new_zv;
            _zval_copy_ctor(new_zv);
          } else {

          }
          break;
        }
      }
      convert_to_double(zstep);
    } else {

    }
    step = zstep->value.dval;
    if (step < 0.0) {
      step *= (double )-1;
    } else {

    }
  } else {

  }
  _array_init(return_value, (uint )0);
  if ((int )zlow->type == 6) {
    if ((int )zhigh->type == 6) {
      if (zlow->value.str.len >= 1) {
        if (zhigh->value.str.len >= 1) {
          lstep = (long )step;
          tmp___4 = is_numeric_string((char const   *)zlow->value.str.val,
                                      zlow->value.str.len, (long *)((void *)0),
                                      (double *)((void *)0), 0);
          type1 = (int )tmp___4;
          tmp___5 = is_numeric_string((char const   *)zhigh->value.str.val,
                                      zhigh->value.str.len, (long *)((void *)0),
                                      (double *)((void *)0), 0);
          type2 = (int )tmp___5;
          if (type1 == 2) {
            goto _L;
          } else
          if (type2 == 2) {
            goto _L;
          } else
          if (is_step_double) {
            goto _L;
          } else
          if (type1 == 1) {
            goto long_str;
          } else
          if (type2 == 1) {
            goto long_str;
          } else {

          }
          if ((int )zlow->type != 6) {
            _convert_to_string(zlow);
          } else {

          }
          if ((int )zhigh->type != 6) {
            _convert_to_string(zhigh);
          } else {

          }
          low = (unsigned char *)zlow->value.str.val;
          high = (unsigned char *)zhigh->value.str.val;
          if ((int )*low > (int )*high) {
            ch = *low;
            if (lstep <= 0L) {
              err = 1;
              goto err;
            } else {

            }
            while ((int )ch >= (int )*high) {
              add_next_index_stringl(return_value, (char const   *)(& ch),
                                     (uint )1, 1);
              if ((long )((int )ch) - lstep < 0L) {
                break;
              } else {

              }
              ch = (unsigned char )((unsigned int )ch - (unsigned int )lstep);
            }
          } else
          if ((int )*high > (int )*low) {
            ch___0 = *low;
            if (lstep <= 0L) {
              err = 1;
              goto err;
            } else {

            }
            while ((int )ch___0 <= (int )*high) {
              add_next_index_stringl(return_value, (char const   *)(& ch___0),
                                     (uint )1, 1);
              if ((long )((int )ch___0) + lstep > 255L) {
                break;
              } else {

              }
              ch___0 = (unsigned char )((unsigned int )ch___0 + (unsigned int )lstep);
            }
          } else {
            add_next_index_stringl(return_value, (char const   *)low, (uint )1,
                                   1);
          }
        } else {
          goto _L___2;
        }
      } else {
        goto _L___2;
      }
    } else {
      goto _L___2;
    }
  } else
  _L___2: /* CIL Label */ 
  _L___1: /* CIL Label */ 
  _L___0: /* CIL Label */ 
  if ((int )zlow->type == 2) {
    goto _L;
  } else
  if ((int )zhigh->type == 2) {
    goto _L;
  } else
  if (is_step_double) {
    _L: /* CIL Label */ 
    double_str: 
    convert_to_double(zlow);
    convert_to_double(zhigh);
    low___0 = zlow->value.dval;
    high___0 = zhigh->value.dval;
    i = 0L;
    if (low___0 > high___0) {
      if (low___0 - high___0 < step) {
        err = 1;
        goto err;
      } else
      if (step <= (double )0) {
        err = 1;
        goto err;
      } else {

      }
      value = low___0;
      while (value >= high___0 - 0.000000000000001) {
        add_next_index_double(return_value, value);
        i ++;
        value = low___0 - (double )i * step;
      }
    } else
    if (high___0 > low___0) {
      if (high___0 - low___0 < step) {
        err = 1;
        goto err;
      } else
      if (step <= (double )0) {
        err = 1;
        goto err;
      } else {

      }
      value = low___0;
      while (value <= high___0 + 0.000000000000001) {
        add_next_index_double(return_value, value);
        i ++;
        value = low___0 + (double )i * step;
      }
    } else {
      add_next_index_double(return_value, low___0);
    }
  } else {
    long_str: 
    convert_to_double(zlow);
    convert_to_double(zhigh);
    low___1 = zlow->value.dval;
    high___1 = zhigh->value.dval;
    lstep___0 = (long )step;
    if (low___1 > high___1) {
      if (low___1 - high___1 < (double )lstep___0) {
        err = 1;
        goto err;
      } else
      if (lstep___0 <= 0L) {
        err = 1;
        goto err;
      } else {

      }
      while (low___1 >= high___1) {
        add_next_index_long(return_value, (long )low___1);
        low___1 -= (double )lstep___0;
      }
    } else
    if (high___1 > low___1) {
      if (high___1 - low___1 < (double )lstep___0) {
        err = 1;
        goto err;
      } else
      if (lstep___0 <= 0L) {
        err = 1;
        goto err;
      } else {

      }
      while (low___1 <= high___1) {
        add_next_index_long(return_value, (long )low___1);
        low___1 += (double )lstep___0;
      }
    } else {
      add_next_index_long(return_value, (long )low___1);
    }
  }
  err: 
  if (err) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "step exceeds the specified range");
    _zval_dtor(return_value);
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  return;
}
}
static void php_array_data_shuffle(zval *array ) 
{ 
  Bucket **elems ;
  Bucket *temp ;
  HashTable *hash ;
  int j ;
  int n_elems ;
  int rnd_idx ;
  int n_left ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;
  long __attribute__((__visibility__("default")))  tmp___2 ;
  int tmp___3 ;

  {
  tmp = zend_hash_num_elements((HashTable const   *)array->value.ht);
  n_elems = (int )tmp;
  if (n_elems < 1) {
    return;
  } else {

  }
  tmp___0 = _safe_emalloc((size_t )n_elems, sizeof(Bucket *), (size_t )0);
  elems = (Bucket **)tmp___0;
  hash = array->value.ht;
  n_left = n_elems;
  j = 0;
  temp = hash->pListHead;
  while (temp) {
    tmp___1 = j;
    j ++;
    *(elems + tmp___1) = temp;
    temp = temp->pListNext;
  }
  while (1) {
    n_left --;
    if (n_left) {

    } else {
      break;
    }
    tmp___2 = php_rand();
    rnd_idx = (int )tmp___2;
    rnd_idx = (int )((long )((((double )n_left - (double )0) + 1.0) * ((double )rnd_idx / ((double )2147483647 + 1.0))));
    if (rnd_idx != n_left) {
      temp = *(elems + n_left);
      *(elems + n_left) = *(elems + rnd_idx);
      *(elems + rnd_idx) = temp;
    } else {

    }
  }
  if (zend_block_interruptions) {
    (*zend_block_interruptions)();
  } else {

  }
  hash->pListHead = *(elems + 0);
  hash->pListTail = (Bucket *)((void *)0);
  hash->pInternalPointer = hash->pListHead;
  j = 0;
  while (j < n_elems) {
    if (hash->pListTail) {
      (hash->pListTail)->pListNext = *(elems + j);
    } else {

    }
    (*(elems + j))->pListLast = hash->pListTail;
    (*(elems + j))->pListNext = (struct bucket *)((void *)0);
    hash->pListTail = *(elems + j);
    j ++;
  }
  temp = hash->pListHead;
  j = 0;
  while ((unsigned int )temp != (unsigned int )((void *)0)) {
    temp->nKeyLength = (uint )0;
    tmp___3 = j;
    j ++;
    temp->h = (ulong )tmp___3;
    temp = temp->pListNext;
  }
  hash->nNextFreeElement = (ulong )n_elems;
  zend_hash_rehash(hash);
  if (zend_unblock_interruptions) {
    (*zend_unblock_interruptions)();
  } else {

  }
  _efree((void *)elems);
  return;
}
}
void zif_shuffle(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z___0 ;

  {
  tmp = zend_parse_parameters(ht, "a", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  php_array_data_shuffle(array);
  while (1) {
    __z___0 = return_value;
    __z___0->value.lval = 1L;
    __z___0->type = (zend_uchar )3;
    break;
  }
  return;
}
}
HashTable __attribute__((__visibility__("default")))  *php_splice(HashTable *in_hash ,
                                                                  int offset ,
                                                                  int length ,
                                                                  zval ***list ,
                                                                  int list_count ,
                                                                  HashTable **removed ) 
{ 
  HashTable *out_hash ;
  int num_in ;
  int pos ;
  int i ;
  Bucket *p ;
  zval *entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;

  {
  out_hash = (HashTable *)((void *)0);
  if (! in_hash) {
    return ((HashTable __attribute__((__visibility__("default")))  *)((void *)0));
  } else {

  }
  tmp = zend_hash_num_elements((HashTable const   *)in_hash);
  num_in = (int )tmp;
  if (offset > num_in) {
    offset = num_in;
  } else
  if (offset < 0) {
    offset = num_in + offset;
    if (offset < 0) {
      offset = 0;
    } else {

    }
  } else {

  }
  if (length < 0) {
    length = (num_in - offset) + length;
  } else
  if ((unsigned int )offset + (unsigned int )length > (unsigned int )num_in) {
    length = num_in - offset;
  } else {

  }
  tmp___0 = _emalloc(sizeof(HashTable ));
  out_hash = (HashTable *)tmp___0;
  if (length > 0) {
    tmp___1 = num_in - length;
  } else {
    tmp___1 = 0;
  }
  _zend_hash_init(out_hash, (uint )(tmp___1 + list_count),
                  (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                  (void (*)(void * ))(& _zval_ptr_dtor), (zend_bool )0);
  pos = 0;
  p = in_hash->pListHead;
  while (1) {
    if (pos < offset) {
      if (p) {

      } else {
        break;
      }
    } else {
      break;
    }
    entry = *((zval **)p->pData);
    zval_addref_p(entry);
    if (p->nKeyLength == 0U) {
      _zend_hash_index_update_or_next_insert(out_hash, (ulong )0,
                                             (void *)(& entry), sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
    } else {
      _zend_hash_quick_add_or_update(out_hash, p->arKey, p->nKeyLength, p->h,
                                     (void *)(& entry), sizeof(zval *),
                                     (void **)((void *)0), 1);
    }
    pos ++;
    p = p->pListNext;
  }
  if ((unsigned int )removed != (unsigned int )((void *)0)) {
    while (1) {
      if (pos < offset + length) {
        if (p) {

        } else {
          break;
        }
      } else {
        break;
      }
      entry = *((zval **)p->pData);
      zval_addref_p(entry);
      if (p->nKeyLength == 0U) {
        _zend_hash_index_update_or_next_insert(*removed, (ulong )0,
                                               (void *)(& entry),
                                               sizeof(zval *),
                                               (void **)((void *)0), 1 << 2);
      } else {
        _zend_hash_quick_add_or_update(*removed, p->arKey, p->nKeyLength, p->h,
                                       (void *)(& entry), sizeof(zval *),
                                       (void **)((void *)0), 1);
      }
      pos ++;
      p = p->pListNext;
    }
  } else {
    while (1) {
      if (pos < offset + length) {
        if (p) {

        } else {
          break;
        }
      } else {
        break;
      }
      pos ++;
      p = p->pListNext;
    }
  }
  if ((unsigned int )list != (unsigned int )((void *)0)) {
    i = 0;
    while (i < list_count) {
      entry = *(*(list + i));
      zval_addref_p(entry);
      _zend_hash_index_update_or_next_insert(out_hash, (ulong )0,
                                             (void *)(& entry), sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
      i ++;
    }
  } else {

  }
  while (p) {
    entry = *((zval **)p->pData);
    zval_addref_p(entry);
    if (p->nKeyLength == 0U) {
      _zend_hash_index_update_or_next_insert(out_hash, (ulong )0,
                                             (void *)(& entry), sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
    } else {
      _zend_hash_quick_add_or_update(out_hash, p->arKey, p->nKeyLength, p->h,
                                     (void *)(& entry), sizeof(zval *),
                                     (void **)((void *)0), 1);
    }
    p = p->pListNext;
  }
  zend_hash_internal_pointer_reset_ex(out_hash, (HashPosition *)((void *)0));
  return ((HashTable __attribute__((__visibility__("default")))  *)out_hash);
}
}
void zif_array_push(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 
  zval ***args ;
  zval *stack ;
  zval *new_var ;
  int i ;
  int argc ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_parse_parameters(ht, "a+", & stack, & args, & argc);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  i = 0;
  while (i < argc) {
    new_var = *(*(args + i));
    {

    }
    {
    tmp___0 = _zend_hash_index_update_or_next_insert(stack->value.ht, (ulong )0,
                                                     (void *)(& new_var),
                                                     sizeof(zval *),
                                                     (void **)((void *)0),
                                                     1 << 2);
    zval_addref_p(new_var);
    }
    {

    }
    i ++;
  }
  _efree((void *)args);
  __z___0 = return_value;
  tmp___1 = zend_hash_num_elements((HashTable const   *)stack->value.ht);
  __z___0->value.lval = (long )tmp___1;
  __z___0->type = (zend_uchar )1;
  return;
}
}
static void _phpi_pop(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used , int off_the_end ) 
{ 
  zval *stack ;
  zval **val ;
  char *key ;
  uint key_len ;
  ulong index___0 ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_uchar is_ref ;
  zend_bool tmp___1 ;
  zend_uint refcount ;
  zend_uint tmp___2 ;
  int tmp___3 ;
  unsigned int k ;
  int should_rehash ;
  Bucket *p ;
  unsigned int tmp___4 ;

  {
  key = (char *)((void *)0);
  key_len = (uint )0;
  tmp = zend_parse_parameters(ht, "a", & stack);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)stack->value.ht);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
    return;
  } else {

  }
  if (off_the_end) {
    zend_hash_internal_pointer_end_ex(stack->value.ht,
                                      (HashPosition *)((void *)0));
  } else {
    zend_hash_internal_pointer_reset_ex(stack->value.ht,
                                        (HashPosition *)((void *)0));
  }
  zend_hash_get_current_data_ex(stack->value.ht, (void **)(& val),
                                (HashPosition *)((void *)0));
  tmp___1 = zval_isref_p(return_value);
  is_ref = tmp___1;
  tmp___2 = zval_refcount_p(return_value);
  refcount = tmp___2;
  while (1) {
    return_value->value = (*val)->value;
    return_value->type = (*val)->type;
    break;
  }
  _zval_copy_ctor(return_value);
  zval_set_isref_to_p(return_value, is_ref);
  zval_set_refcount_p(return_value, refcount);
  zend_hash_get_current_key_ex((HashTable const   *)stack->value.ht, & key,
                               & key_len, & index___0, (zend_bool )0,
                               (HashPosition *)((void *)0));
  if (key) {
    if ((unsigned int )stack->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
      zend_delete_global_variable((char const   *)key, (int )(key_len - 1U));
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    if (key) {
      tmp___3 = 0;
    } else {
      tmp___3 = 1;
    }
    zend_hash_del_key_or_index(stack->value.ht, (char const   *)key, key_len,
                               index___0, tmp___3);
  }
  if (! off_the_end) {
    k = 0U;
    should_rehash = 0;
    p = (stack->value.ht)->pListHead;
    while ((unsigned int )p != (unsigned int )((void *)0)) {
      if (p->nKeyLength == 0U) {
        if (p->h != (ulong )k) {
          tmp___4 = k;
          k ++;
          p->h = (ulong )tmp___4;
          should_rehash = 1;
        } else {
          k ++;
        }
      } else {

      }
      p = p->pListNext;
    }
    (stack->value.ht)->nNextFreeElement = (ulong )k;
    if (should_rehash) {
      zend_hash_rehash(stack->value.ht);
    } else {

    }
  } else
  if (! key_len) {
    if (index___0 >= (stack->value.ht)->nNextFreeElement - 1UL) {
      ((stack->value.ht)->nNextFreeElement) --;
    } else {

    }
  } else {

  }
  zend_hash_internal_pointer_reset_ex(stack->value.ht,
                                      (HashPosition *)((void *)0));
  return;
}
}
void zif_array_pop(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ 


  {
  _phpi_pop(ht, return_value, return_value_ptr, this_ptr, return_value_used, 1);
  return;
}
}
void zif_array_shift(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 


  {
  _phpi_pop(ht, return_value, return_value_ptr, this_ptr, return_value_used, 0);
  return;
}
}
void zif_array_unshift(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ 
  zval ***args ;
  zval *stack ;
  HashTable *new_hash ;
  HashTable old_hash ;
  int argc ;
  int __attribute__((__visibility__("default")))  tmp ;
  HashTable __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_parse_parameters(ht, "a+", & stack, & args, & argc);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = php_splice(stack->value.ht, 0, 0, args + 0, argc,
                       (HashTable **)((void *)0));
  new_hash = (HashTable *)tmp___0;
  old_hash = *(stack->value.ht);
  if ((unsigned int )stack->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
    zend_reset_all_cv(& executor_globals.symbol_table);
  } else {

  }
  *(stack->value.ht) = *new_hash;
  _efree((void *)new_hash);
  zend_hash_destroy(& old_hash);
  _efree((void *)args);
  __z = return_value;
  tmp___1 = zend_hash_num_elements((HashTable const   *)stack->value.ht);
  __z->value.lval = (long )tmp___1;
  __z->type = (zend_uchar )1;
  return;
}
}
void zif_array_splice(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  zval *repl_array ;
  zval ***repl ;
  HashTable *new_hash ;
  HashTable **rem_hash ;
  HashTable old_hash ;
  Bucket *p ;
  long i ;
  long offset ;
  long length ;
  long repl_num ;
  int num_in ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  int size ;
  int tmp___3 ;
  HashTable __attribute__((__visibility__("default")))  *tmp___4 ;

  {
  repl_array = (zval *)((void *)0);
  repl = (zval ***)((void *)0);
  new_hash = (HashTable *)((void *)0);
  rem_hash = (HashTable **)((void *)0);
  length = 0L;
  repl_num = 0L;
  tmp = zend_parse_parameters(ht, "al|lz/", & array, & offset, & length,
                              & repl_array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)array->value.ht);
  num_in = (int )tmp___0;
  if (ht < 3) {
    length = (long )num_in;
  } else {

  }
  if (ht == 4) {
    convert_to_array(repl_array);
    tmp___1 = zend_hash_num_elements((HashTable const   *)repl_array->value.ht);
    repl_num = (long )tmp___1;
    tmp___2 = _safe_emalloc((size_t )repl_num, sizeof(zval **), (size_t )0);
    repl = (zval ***)tmp___2;
    p = (repl_array->value.ht)->pListHead;
    i = 0L;
    while (p) {
      *(repl + i) = (zval **)p->pData;
      p = p->pListNext;
      i ++;
    }
  } else {

  }
  if (return_value_used) {
    size = (int )length;
    if (offset > (long )num_in) {
      offset = (long )num_in;
    } else
    if (offset < 0L) {
      offset = (long )num_in + offset;
      if (offset < 0L) {
        offset = 0L;
      } else {

      }
    } else {

    }
    if (length < 0L) {
      size = (int )(((long )num_in - offset) + length);
    } else
    if ((unsigned long )offset + (unsigned long )length > (unsigned long )((unsigned int )num_in)) {
      size = (int )((long )num_in - offset);
    } else {

    }
    if (size > 0) {
      tmp___3 = size;
    } else {
      tmp___3 = 0;
    }
    _array_init(return_value, (uint )tmp___3);
    rem_hash = & return_value->value.ht;
  } else {

  }
  tmp___4 = php_splice(array->value.ht, (int )offset, (int )length, repl,
                       (int )repl_num, rem_hash);
  new_hash = (HashTable *)tmp___4;
  old_hash = *(array->value.ht);
  if ((unsigned int )array->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
    zend_reset_all_cv(& executor_globals.symbol_table);
  } else {

  }
  *(array->value.ht) = *new_hash;
  _efree((void *)new_hash);
  zend_hash_destroy(& old_hash);
  if (ht == 4) {
    _efree((void *)repl);
  } else {

  }
  return;
}
}
void zif_array_slice(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval **z_length ;
  zval **entry ;
  long offset ;
  long length ;
  zend_bool preserve_keys ;
  int num_in ;
  int pos ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  HashPosition hpos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uint tmp___2 ;
  zend_bool tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;

  {
  z_length = (zval **)((void *)0);
  length = 0L;
  preserve_keys = (zend_bool )0;
  tmp = zend_parse_parameters(ht, "al|Zb", & input, & offset, & z_length,
                              & preserve_keys);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  num_in = (int )tmp___0;
  if (ht < 3) {
    length = (long )num_in;
  } else
  if ((int )(*z_length)->type == 0) {
    length = (long )num_in;
  } else {
    if ((int )(*z_length)->type != 1) {
      tmp___3 = zval_isref_p(*z_length);
      if (tmp___3) {

      } else {
        while (1) {
          tmp___2 = zval_refcount_p(*z_length);
          if (tmp___2 > 1U) {
            zval_delref_p(*z_length);
            while (1) {
              tmp___1 = _emalloc(sizeof(zval_gc_info ));
              new_zv = (zval *)tmp___1;
              ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
              break;
            }
            while (1) {
              while (1) {
                new_zv->value = (*z_length)->value;
                new_zv->type = (*z_length)->type;
                break;
              }
              zval_set_refcount_p(new_zv, (zend_uint )1);
              zval_unset_isref_p(new_zv);
              break;
            }
            *z_length = new_zv;
            _zval_copy_ctor(new_zv);
          } else {

          }
          break;
        }
      }
      convert_to_long(*z_length);
    } else {

    }
    length = (*z_length)->value.lval;
  }
  if (offset > (long )num_in) {
    _array_init(return_value, (uint )0);
    return;
  } else
  if (offset < 0L) {
    offset = (long )num_in + offset;
    if (offset < 0L) {
      offset = 0L;
    } else {

    }
  } else {

  }
  if (length < 0L) {
    length = ((long )num_in - offset) + length;
  } else
  if ((unsigned long )offset + (unsigned long )length > (unsigned long )((unsigned int )num_in)) {
    length = (long )num_in - offset;
  } else {

  }
  if (length > 0L) {
    tmp___4 = length;
  } else {
    tmp___4 = 0L;
  }
  _array_init(return_value, (uint )tmp___4);
  if (length <= 0L) {
    return;
  } else {

  }
  pos = 0;
  zend_hash_internal_pointer_reset_ex(input->value.ht, & hpos);
  while (1) {
    if ((long )pos < offset) {
      tmp___5 = zend_hash_get_current_data_ex(input->value.ht,
                                              (void **)(& entry), & hpos);
      if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
    } else {
      break;
    }
    pos ++;
    zend_hash_move_forward_ex(input->value.ht, & hpos);
  }
  while (1) {
    if ((long )pos < offset + length) {
      tmp___7 = zend_hash_get_current_data_ex(input->value.ht,
                                              (void **)(& entry), & hpos);
      if (tmp___7 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
    } else {
      break;
    }
    zval_add_ref(entry);
    tmp___6 = zend_hash_get_current_key_ex((HashTable const   *)input->value.ht,
                                           & string_key, & string_key_len,
                                           & num_key, (zend_bool )0, & hpos);
    switch (tmp___6) {
    case (int __attribute__((__visibility__("default")))  )1: 
    _zend_hash_add_or_update(return_value->value.ht, (char const   *)string_key,
                             string_key_len, (void *)entry, sizeof(zval *),
                             (void **)((void *)0), 1);
    break;
    case (int __attribute__((__visibility__("default")))  )2: 
    if (preserve_keys) {
      _zend_hash_index_update_or_next_insert(return_value->value.ht, num_key,
                                             (void *)entry, sizeof(zval *),
                                             (void **)((void *)0), 1);
    } else {
      _zend_hash_index_update_or_next_insert(return_value->value.ht, (ulong )0,
                                             (void *)entry, sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
    }
    break;
    }
    pos ++;
    zend_hash_move_forward_ex(input->value.ht, & hpos);
  }
  return;
}
}
int __attribute__((__visibility__("default")))  php_array_merge(HashTable *dest ,
                                                                HashTable *src ,
                                                                int recursive ) 
{ 
  zval **src_entry ;
  zval **dest_entry ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  HashTable *thash ;
  HashTable *tmp___0 ;
  zend_bool tmp___1 ;
  zend_uint tmp___2 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zend_uint tmp___4 ;
  zval *new_zv___0 ;
  void __attribute__((__visibility__("default")))  *tmp___5 ;
  zend_uint tmp___6 ;
  zval *new_zv___1 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  zend_uint tmp___8 ;
  zend_bool tmp___9 ;
  zval *new_zv___2 ;
  void __attribute__((__visibility__("default")))  *tmp___10 ;
  zend_uint tmp___11 ;
  zend_bool tmp___12 ;
  zval *new_zv___3 ;
  void __attribute__((__visibility__("default")))  *tmp___13 ;
  zend_uint tmp___14 ;
  zend_bool tmp___15 ;
  zval *new_zv___4 ;
  void __attribute__((__visibility__("default")))  *tmp___16 ;
  zend_uint tmp___17 ;
  zend_bool tmp___18 ;
  int __attribute__((__visibility__("default")))  tmp___19 ;
  int __attribute__((__visibility__("default")))  tmp___20 ;
  int __attribute__((__visibility__("default")))  tmp___21 ;

  {
  zend_hash_internal_pointer_reset_ex(src, & pos);
  while (1) {
    tmp___21 = zend_hash_get_current_data_ex(src, (void **)(& src_entry), & pos);
    if (tmp___21 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    tmp = zend_hash_get_current_key_ex((HashTable const   *)src, & string_key,
                                       & string_key_len, & num_key,
                                       (zend_bool )0, & pos);
    switch (tmp) {
    case (int __attribute__((__visibility__("default")))  )1: 
    if (recursive) {
      tmp___20 = zend_hash_find((HashTable const   *)dest,
                                (char const   *)string_key, string_key_len,
                                (void **)(& dest_entry));
      if (tmp___20 == (int __attribute__((__visibility__("default")))  )0) {
        if ((int )(*dest_entry)->type == 4) {
          tmp___0 = (*dest_entry)->value.ht;
        } else {
          tmp___0 = (HashTable *)((void *)0);
        }
        thash = tmp___0;
        if (thash) {
          if ((int )thash->nApplyCount > 1) {
            php_error_docref0((char const   *)((void *)0), 1 << 1L,
                              "recursion detected");
            return ((int __attribute__((__visibility__("default")))  )0);
          } else {
            goto _L;
          }
        } else
        _L: /* CIL Label */ 
        if ((unsigned int )*src_entry == (unsigned int )*dest_entry) {
          tmp___1 = zval_isref_p(*dest_entry);
          if (tmp___1) {
            tmp___2 = zval_refcount_p(*dest_entry);
            if (tmp___2 % 2U) {
              php_error_docref0((char const   *)((void *)0), 1 << 1L,
                                "recursion detected");
              return ((int __attribute__((__visibility__("default")))  )0);
            } else {

            }
          } else {

          }
        } else {

        }
        while (1) {
          tmp___4 = zval_refcount_p(*dest_entry);
          if (tmp___4 > 1U) {
            zval_delref_p(*dest_entry);
            while (1) {
              tmp___3 = _emalloc(sizeof(zval_gc_info ));
              new_zv = (zval *)tmp___3;
              ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
              break;
            }
            while (1) {
              while (1) {
                new_zv->value = (*dest_entry)->value;
                new_zv->type = (*dest_entry)->type;
                break;
              }
              zval_set_refcount_p(new_zv, (zend_uint )1);
              zval_unset_isref_p(new_zv);
              break;
            }
            *dest_entry = new_zv;
            _zval_copy_ctor(new_zv);
          } else {

          }
          break;
        }
        while (1) {
          tmp___6 = zval_refcount_p(*src_entry);
          if (tmp___6 > 1U) {
            zval_delref_p(*src_entry);
            while (1) {
              tmp___5 = _emalloc(sizeof(zval_gc_info ));
              new_zv___0 = (zval *)tmp___5;
              ((zval_gc_info *)new_zv___0)->u.buffered = (gc_root_buffer *)((void *)0);
              break;
            }
            while (1) {
              while (1) {
                new_zv___0->value = (*src_entry)->value;
                new_zv___0->type = (*src_entry)->type;
                break;
              }
              zval_set_refcount_p(new_zv___0, (zend_uint )1);
              zval_unset_isref_p(new_zv___0);
              break;
            }
            *src_entry = new_zv___0;
            _zval_copy_ctor(new_zv___0);
          } else {

          }
          break;
        }
        if ((int )(*dest_entry)->type == 0) {
          if ((int )(*dest_entry)->type != 4) {
            tmp___9 = zval_isref_p(*dest_entry);
            if (tmp___9) {

            } else {
              while (1) {
                tmp___8 = zval_refcount_p(*dest_entry);
                if (tmp___8 > 1U) {
                  zval_delref_p(*dest_entry);
                  while (1) {
                    tmp___7 = _emalloc(sizeof(zval_gc_info ));
                    new_zv___1 = (zval *)tmp___7;
                    ((zval_gc_info *)new_zv___1)->u.buffered = (gc_root_buffer *)((void *)0);
                    break;
                  }
                  while (1) {
                    while (1) {
                      new_zv___1->value = (*dest_entry)->value;
                      new_zv___1->type = (*dest_entry)->type;
                      break;
                    }
                    zval_set_refcount_p(new_zv___1, (zend_uint )1);
                    zval_unset_isref_p(new_zv___1);
                    break;
                  }
                  *dest_entry = new_zv___1;
                  _zval_copy_ctor(new_zv___1);
                } else {

                }
                break;
              }
            }
            convert_to_array(*dest_entry);
          } else {

          }
          add_next_index_null(*dest_entry);
        } else
        if ((int )(*dest_entry)->type != 4) {
          tmp___12 = zval_isref_p(*dest_entry);
          if (tmp___12) {

          } else {
            while (1) {
              tmp___11 = zval_refcount_p(*dest_entry);
              if (tmp___11 > 1U) {
                zval_delref_p(*dest_entry);
                while (1) {
                  tmp___10 = _emalloc(sizeof(zval_gc_info ));
                  new_zv___2 = (zval *)tmp___10;
                  ((zval_gc_info *)new_zv___2)->u.buffered = (gc_root_buffer *)((void *)0);
                  break;
                }
                while (1) {
                  while (1) {
                    new_zv___2->value = (*dest_entry)->value;
                    new_zv___2->type = (*dest_entry)->type;
                    break;
                  }
                  zval_set_refcount_p(new_zv___2, (zend_uint )1);
                  zval_unset_isref_p(new_zv___2);
                  break;
                }
                *dest_entry = new_zv___2;
                _zval_copy_ctor(new_zv___2);
              } else {

              }
              break;
            }
          }
          convert_to_array(*dest_entry);
        } else {

        }
        if ((int )(*src_entry)->type == 0) {
          if ((int )(*src_entry)->type != 4) {
            tmp___15 = zval_isref_p(*src_entry);
            if (tmp___15) {

            } else {
              while (1) {
                tmp___14 = zval_refcount_p(*src_entry);
                if (tmp___14 > 1U) {
                  zval_delref_p(*src_entry);
                  while (1) {
                    tmp___13 = _emalloc(sizeof(zval_gc_info ));
                    new_zv___3 = (zval *)tmp___13;
                    ((zval_gc_info *)new_zv___3)->u.buffered = (gc_root_buffer *)((void *)0);
                    break;
                  }
                  while (1) {
                    while (1) {
                      new_zv___3->value = (*src_entry)->value;
                      new_zv___3->type = (*src_entry)->type;
                      break;
                    }
                    zval_set_refcount_p(new_zv___3, (zend_uint )1);
                    zval_unset_isref_p(new_zv___3);
                    break;
                  }
                  *src_entry = new_zv___3;
                  _zval_copy_ctor(new_zv___3);
                } else {

                }
                break;
              }
            }
            convert_to_array(*src_entry);
          } else {

          }
          add_next_index_null(*src_entry);
        } else
        if ((int )(*src_entry)->type != 4) {
          tmp___18 = zval_isref_p(*src_entry);
          if (tmp___18) {

          } else {
            while (1) {
              tmp___17 = zval_refcount_p(*src_entry);
              if (tmp___17 > 1U) {
                zval_delref_p(*src_entry);
                while (1) {
                  tmp___16 = _emalloc(sizeof(zval_gc_info ));
                  new_zv___4 = (zval *)tmp___16;
                  ((zval_gc_info *)new_zv___4)->u.buffered = (gc_root_buffer *)((void *)0);
                  break;
                }
                while (1) {
                  while (1) {
                    new_zv___4->value = (*src_entry)->value;
                    new_zv___4->type = (*src_entry)->type;
                    break;
                  }
                  zval_set_refcount_p(new_zv___4, (zend_uint )1);
                  zval_unset_isref_p(new_zv___4);
                  break;
                }
                *src_entry = new_zv___4;
                _zval_copy_ctor(new_zv___4);
              } else {

              }
              break;
            }
          }
          convert_to_array(*src_entry);
        } else {

        }
        if (thash) {
          thash->nApplyCount = (unsigned char )((int )thash->nApplyCount + 1);
        } else {

        }
        tmp___19 = php_array_merge((*dest_entry)->value.ht,
                                   (*src_entry)->value.ht, recursive);
        if (tmp___19) {

        } else {
          if (thash) {
            thash->nApplyCount = (unsigned char )((int )thash->nApplyCount - 1);
          } else {

          }
          return ((int __attribute__((__visibility__("default")))  )0);
        }
        if (thash) {
          thash->nApplyCount = (unsigned char )((int )thash->nApplyCount - 1);
        } else {

        }
      } else {
        zval_addref_p(*src_entry);
        _zend_hash_add_or_update(dest, (char const   *)string_key,
                                 string_key_len, (void *)src_entry,
                                 sizeof(zval *), (void **)((void *)0), 1);
      }
    } else {
      zval_addref_p(*src_entry);
      _zend_hash_add_or_update(dest, (char const   *)string_key, string_key_len,
                               (void *)src_entry, sizeof(zval *),
                               (void **)((void *)0), 1);
    }
    break;
    case (int __attribute__((__visibility__("default")))  )2: 
    zval_addref_p(*src_entry);
    _zend_hash_index_update_or_next_insert(dest, (ulong )0, (void *)src_entry,
                                           sizeof(zval *), (void **)((void *)0),
                                           1 << 2);
    break;
    }
    zend_hash_move_forward_ex(src, & pos);
  }
  return ((int __attribute__((__visibility__("default")))  )1);
}
}
int __attribute__((__visibility__("default")))  php_array_replace_recursive(HashTable *dest ,
                                                                            HashTable *src ) 
{ 
  zval **src_entry ;
  zval **dest_entry ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zend_bool tmp___2 ;
  zend_uint tmp___3 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  zend_uint tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;

  {
  zend_hash_internal_pointer_reset_ex(src, & pos);
  while (1) {
    tmp___7 = zend_hash_get_current_data_ex(src, (void **)(& src_entry), & pos);
    if (tmp___7 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    tmp = zend_hash_get_current_key_ex((HashTable const   *)src, & string_key,
                                       & string_key_len, & num_key,
                                       (zend_bool )0, & pos);
    switch (tmp) {
    case (int __attribute__((__visibility__("default")))  )1: 
    if ((int )(*src_entry)->type != 4) {
      zval_addref_p(*src_entry);
      _zend_hash_add_or_update(dest, (char const   *)string_key, string_key_len,
                               (void *)src_entry, sizeof(zval *),
                               (void **)((void *)0), 1);
      goto __Cont;
    } else {
      tmp___0 = zend_hash_find((HashTable const   *)dest,
                               (char const   *)string_key, string_key_len,
                               (void **)(& dest_entry));
      if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
        zval_addref_p(*src_entry);
        _zend_hash_add_or_update(dest, (char const   *)string_key,
                                 string_key_len, (void *)src_entry,
                                 sizeof(zval *), (void **)((void *)0), 1);
        goto __Cont;
      } else
      if ((int )(*dest_entry)->type != 4) {
        zval_addref_p(*src_entry);
        _zend_hash_add_or_update(dest, (char const   *)string_key,
                                 string_key_len, (void *)src_entry,
                                 sizeof(zval *), (void **)((void *)0), 1);
        goto __Cont;
      } else {

      }
    }
    break;
    case (int __attribute__((__visibility__("default")))  )2: 
    if ((int )(*src_entry)->type != 4) {
      zval_addref_p(*src_entry);
      _zend_hash_index_update_or_next_insert(dest, num_key, (void *)src_entry,
                                             sizeof(zval *),
                                             (void **)((void *)0), 1);
      goto __Cont;
    } else {
      tmp___1 = zend_hash_index_find((HashTable const   *)dest, num_key,
                                     (void **)(& dest_entry));
      if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
        zval_addref_p(*src_entry);
        _zend_hash_index_update_or_next_insert(dest, num_key, (void *)src_entry,
                                               sizeof(zval *),
                                               (void **)((void *)0), 1);
        goto __Cont;
      } else
      if ((int )(*dest_entry)->type != 4) {
        zval_addref_p(*src_entry);
        _zend_hash_index_update_or_next_insert(dest, num_key, (void *)src_entry,
                                               sizeof(zval *),
                                               (void **)((void *)0), 1);
        goto __Cont;
      } else {

      }
    }
    break;
    }
    if ((int )((*dest_entry)->value.ht)->nApplyCount > 1) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "recursion detected");
      return ((int __attribute__((__visibility__("default")))  )0);
    } else
    if ((int )((*src_entry)->value.ht)->nApplyCount > 1) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "recursion detected");
      return ((int __attribute__((__visibility__("default")))  )0);
    } else
    if ((unsigned int )*src_entry == (unsigned int )*dest_entry) {
      tmp___2 = zval_isref_p(*dest_entry);
      if (tmp___2) {
        tmp___3 = zval_refcount_p(*dest_entry);
        if (tmp___3 % 2U) {
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "recursion detected");
          return ((int __attribute__((__visibility__("default")))  )0);
        } else {

        }
      } else {

      }
    } else {

    }
    while (1) {
      tmp___5 = zval_refcount_p(*dest_entry);
      if (tmp___5 > 1U) {
        zval_delref_p(*dest_entry);
        while (1) {
          tmp___4 = _emalloc(sizeof(zval_gc_info ));
          new_zv = (zval *)tmp___4;
          ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        while (1) {
          while (1) {
            new_zv->value = (*dest_entry)->value;
            new_zv->type = (*dest_entry)->type;
            break;
          }
          zval_set_refcount_p(new_zv, (zend_uint )1);
          zval_unset_isref_p(new_zv);
          break;
        }
        *dest_entry = new_zv;
        _zval_copy_ctor(new_zv);
      } else {

      }
      break;
    }
    ((*dest_entry)->value.ht)->nApplyCount = (unsigned char )((int )((*dest_entry)->value.ht)->nApplyCount + 1);
    ((*src_entry)->value.ht)->nApplyCount = (unsigned char )((int )((*src_entry)->value.ht)->nApplyCount + 1);
    tmp___6 = php_array_replace_recursive((*dest_entry)->value.ht,
                                          (*src_entry)->value.ht);
    if (tmp___6) {

    } else {
      ((*dest_entry)->value.ht)->nApplyCount = (unsigned char )((int )((*dest_entry)->value.ht)->nApplyCount - 1);
      ((*src_entry)->value.ht)->nApplyCount = (unsigned char )((int )((*src_entry)->value.ht)->nApplyCount - 1);
      return ((int __attribute__((__visibility__("default")))  )0);
    }
    ((*dest_entry)->value.ht)->nApplyCount = (unsigned char )((int )((*dest_entry)->value.ht)->nApplyCount - 1);
    ((*src_entry)->value.ht)->nApplyCount = (unsigned char )((int )((*src_entry)->value.ht)->nApplyCount - 1);
    __Cont: /* CIL Label */ 
    zend_hash_move_forward_ex(src, & pos);
  }
  return ((int __attribute__((__visibility__("default")))  )1);
}
}
static void php_array_merge_or_replace_wrapper(int ht , zval *return_value ,
                                               zval **return_value_ptr ,
                                               zval *this_ptr ,
                                               int return_value_used ,
                                               int recursive , int replace ) 
{ 
  zval ***args ;
  int argc ;
  int i ;
  int init_size ;
  int __attribute__((__visibility__("default")))  tmp ;
  int num ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uint tmp___2 ;

  {
  args = (zval ***)((void *)0);
  init_size = 0;
  tmp = zend_parse_parameters(ht, "+", & args, & argc);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  i = 0;
  while (i < argc) {
    if ((int )(*(*(args + i)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is not an array", i + 1);
      _efree((void *)args);
      return_value->type = (zend_uchar )0;
      return;
    } else {
      tmp___0 = zend_hash_num_elements((HashTable const   *)(*(*(args + i)))->value.ht);
      num = (int )tmp___0;
      if (num > init_size) {
        init_size = num;
      } else {

      }
    }
    i ++;
  }
  _array_init(return_value, (uint )init_size);
  i = 0;
  while (i < argc) {
    while (1) {
      tmp___2 = zval_refcount_p(*(*(args + i)));
      if (tmp___2 > 1U) {
        zval_delref_p(*(*(args + i)));
        while (1) {
          tmp___1 = _emalloc(sizeof(zval_gc_info ));
          new_zv = (zval *)tmp___1;
          ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        while (1) {
          while (1) {
            new_zv->value = (*(*(args + i)))->value;
            new_zv->type = (*(*(args + i)))->type;
            break;
          }
          zval_set_refcount_p(new_zv, (zend_uint )1);
          zval_unset_isref_p(new_zv);
          break;
        }
        *(*(args + i)) = new_zv;
        _zval_copy_ctor(new_zv);
      } else {

      }
      break;
    }
    if (! replace) {
      php_array_merge(return_value->value.ht, (*(*(args + i)))->value.ht,
                      recursive);
    } else
    if (recursive) {
      if (i > 0) {
        php_array_replace_recursive(return_value->value.ht,
                                    (*(*(args + i)))->value.ht);
      } else {
        _zend_hash_merge(return_value->value.ht, (*(*(args + i)))->value.ht,
                         (void (*)(void *pElement ))(& zval_add_ref), (void *)0,
                         sizeof(zval *), 1);
      }
    } else {
      _zend_hash_merge(return_value->value.ht, (*(*(args + i)))->value.ht,
                       (void (*)(void *pElement ))(& zval_add_ref), (void *)0,
                       sizeof(zval *), 1);
    }
    i ++;
  }
  _efree((void *)args);
  return;
}
}
void zif_array_merge(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_merge_or_replace_wrapper(ht, return_value, return_value_ptr,
                                     this_ptr, return_value_used, 0, 0);
  return;
}
}
void zif_array_merge_recursive(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) 
{ 


  {
  php_array_merge_or_replace_wrapper(ht, return_value, return_value_ptr,
                                     this_ptr, return_value_used, 1, 0);
  return;
}
}
void zif_array_replace(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_merge_or_replace_wrapper(ht, return_value, return_value_ptr,
                                     this_ptr, return_value_used, 0, 1);
  return;
}
}
void zif_array_replace_recursive(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) 
{ 


  {
  php_array_merge_or_replace_wrapper(ht, return_value, return_value_ptr,
                                     this_ptr, return_value_used, 1, 1);
  return;
}
}
void zif_array_keys(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval *search_value ;
  zval **entry ;
  zval res ;
  zval *new_val ;
  int add_key ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  zend_bool strict ;
  HashPosition pos ;
  int (*is_equal_func)(zval * , zval * , zval * ) ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  search_value = (zval *)((void *)0);
  strict = (zend_bool )0;
  is_equal_func = (int (*)(zval * , zval * , zval * ))(& is_equal_function);
  tmp = zend_parse_parameters(ht, "a|zb", & input, & search_value, & strict);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (strict) {
    is_equal_func = (int (*)(zval * , zval * , zval * ))(& is_identical_function);
  } else {

  }
  if ((unsigned int )search_value != (unsigned int )((void *)0)) {
    _array_init(return_value, (uint )0);
  } else {
    tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
    _array_init(return_value, (uint )tmp___0);
  }
  add_key = 1;
  zend_hash_internal_pointer_reset_ex(input->value.ht, & pos);
  while (1) {
    tmp___5 = zend_hash_get_current_data_ex(input->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if ((unsigned int )search_value != (unsigned int )((void *)0)) {
      (*is_equal_func)(& res, search_value, *entry);
      tmp___1 = zval_is_true(& res);
      add_key = (int )tmp___1;
    } else {

    }
    if (add_key) {
      while (1) {
        tmp___2 = _emalloc(sizeof(zval_gc_info ));
        new_val = (zval *)tmp___2;
        ((zval_gc_info *)new_val)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      new_val->refcount__gc = (zend_uint )1;
      new_val->is_ref__gc = (zend_uchar )0;
      tmp___3 = zend_hash_get_current_key_ex((HashTable const   *)input->value.ht,
                                             & string_key, & string_key_len,
                                             & num_key, (zend_bool )1, & pos);
      switch (tmp___3) {
      case (int __attribute__((__visibility__("default")))  )1: 
      while (1) {
        __s = (char const   *)string_key;
        __l = (int )(string_key_len - 1U);
        __z = new_val;
        __z->value.str.len = __l;
        __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
        __z->type = (zend_uchar )6;
        break;
      }
      _zend_hash_index_update_or_next_insert(return_value->value.ht, (ulong )0,
                                             (void *)(& new_val),
                                             sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
      break;
      case (int __attribute__((__visibility__("default")))  )2: 
      new_val->type = (zend_uchar )1;
      new_val->value.lval = (long )num_key;
      _zend_hash_index_update_or_next_insert(return_value->value.ht, (ulong )0,
                                             (void *)(& new_val),
                                             sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
      break;
      }
    } else {

    }
    zend_hash_move_forward_ex(input->value.ht, & pos);
  }
  return;
}
}
void zif_array_values(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval **entry ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_parse_parameters(ht, "a", & input);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  _array_init(return_value, (uint )tmp___0);
  zend_hash_internal_pointer_reset_ex(input->value.ht, & pos);
  while (1) {
    tmp___1 = zend_hash_get_current_data_ex(input->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    zval_add_ref(entry);
    _zend_hash_index_update_or_next_insert(return_value->value.ht, (ulong )0,
                                           (void *)entry, sizeof(zval *),
                                           (void **)((void *)0), 1 << 2);
    zend_hash_move_forward_ex(input->value.ht, & pos);
  }
  return;
}
}
void zif_array_count_values(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) 
{ 
  zval *input ;
  zval **entry ;
  zval **tmp ;
  HashTable *myht ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *data ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  zval *data___0 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zval *__z___0 ;
  int tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___0 = zend_parse_parameters(ht, "a", & input);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, (uint )0);
  myht = input->value.ht;
  zend_hash_internal_pointer_reset_ex(myht, & pos);
  while (1) {
    tmp___5 = zend_hash_get_current_data_ex(myht, (void **)(& entry), & pos);
    if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if ((int )(*entry)->type == 1) {
      tmp___2 = zend_hash_index_find((HashTable const   *)return_value->value.ht,
                                     (ulong )(*entry)->value.lval,
                                     (void **)(& tmp));
      if (tmp___2 == (int __attribute__((__visibility__("default")))  )-1) {
        while (1) {
          tmp___1 = _emalloc(sizeof(zval_gc_info ));
          data = (zval *)tmp___1;
          ((zval_gc_info *)data)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        data->refcount__gc = (zend_uint )1;
        data->is_ref__gc = (zend_uchar )0;
        __z = data;
        __z->value.lval = 1L;
        __z->type = (zend_uchar )1;
        _zend_hash_index_update_or_next_insert(return_value->value.ht,
                                               (ulong )(*entry)->value.lval,
                                               (void *)(& data), sizeof(data),
                                               (void **)((void *)0), 1);
      } else {
        ((*tmp)->value.lval) ++;
      }
    } else
    if ((int )(*entry)->type == 6) {
      tmp___4 = zend_symtable_find(return_value->value.ht,
                                   (char const   *)(*entry)->value.str.val,
                                   (uint )((*entry)->value.str.len + 1),
                                   (void **)(& tmp));
      if (tmp___4 == -1) {
        while (1) {
          tmp___3 = _emalloc(sizeof(zval_gc_info ));
          data___0 = (zval *)tmp___3;
          ((zval_gc_info *)data___0)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        data___0->refcount__gc = (zend_uint )1;
        data___0->is_ref__gc = (zend_uchar )0;
        __z___0 = data___0;
        __z___0->value.lval = 1L;
        __z___0->type = (zend_uchar )1;
        zend_symtable_update(return_value->value.ht,
                             (char const   *)(*entry)->value.str.val,
                             (uint )((*entry)->value.str.len + 1),
                             (void *)(& data___0), sizeof(data___0),
                             (void **)((void *)0));
      } else {
        ((*tmp)->value.lval) ++;
      }
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Can only count STRING and INTEGER values!");
    }
    zend_hash_move_forward_ex(myht, & pos);
  }
  return;
}
}
void zif_array_reverse(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval **entry ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  zend_bool preserve_keys ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;

  {
  preserve_keys = (zend_bool )0;
  tmp = zend_parse_parameters(ht, "a|b", & input, & preserve_keys);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  _array_init(return_value, (uint )tmp___0);
  zend_hash_internal_pointer_end_ex(input->value.ht, & pos);
  while (1) {
    tmp___2 = zend_hash_get_current_data_ex(input->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    zval_add_ref(entry);
    tmp___1 = zend_hash_get_current_key_ex((HashTable const   *)input->value.ht,
                                           & string_key, & string_key_len,
                                           & num_key, (zend_bool )0, & pos);
    switch (tmp___1) {
    case (int __attribute__((__visibility__("default")))  )1: 
    _zend_hash_add_or_update(return_value->value.ht, (char const   *)string_key,
                             string_key_len, (void *)entry, sizeof(zval *),
                             (void **)((void *)0), 1);
    break;
    case (int __attribute__((__visibility__("default")))  )2: 
    if (preserve_keys) {
      _zend_hash_index_update_or_next_insert(return_value->value.ht, num_key,
                                             (void *)entry, sizeof(zval *),
                                             (void **)((void *)0), 1);
    } else {
      _zend_hash_index_update_or_next_insert(return_value->value.ht, (ulong )0,
                                             (void *)entry, sizeof(zval *),
                                             (void **)((void *)0), 1 << 2);
    }
    break;
    }
    zend_hash_move_backwards_ex(input->value.ht, & pos);
  }
  return;
}
}
void zif_array_pad(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval *pad_value ;
  zval ***pads ;
  HashTable *new_hash ;
  HashTable old_hash ;
  long pad_size ;
  long pad_size_abs ;
  int input_size ;
  int num_pads ;
  int do_pad ;
  int i ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int tmp___1 ;
  zval *__z ;
  zend_uchar is_ref ;
  zend_bool tmp___2 ;
  zend_uint refcount ;
  zend_uint tmp___3 ;
  zval *__z___0 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  HashTable __attribute__((__visibility__("default")))  *tmp___5 ;
  HashTable __attribute__((__visibility__("default")))  *tmp___6 ;

  {
  tmp = zend_parse_parameters(ht, "alz", & input, & pad_size, & pad_value);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  input_size = (int )tmp___0;
  tmp___1 = abs((int )pad_size);
  pad_size_abs = (long )tmp___1;
  if (pad_size_abs < 0L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "You may only pad up to 1048576 elements at a time");
    _zval_dtor(return_value);
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  if ((long )input_size >= pad_size_abs) {
    do_pad = 0;
  } else {
    do_pad = 1;
  }
  tmp___2 = zval_isref_p(return_value);
  is_ref = tmp___2;
  tmp___3 = zval_refcount_p(return_value);
  refcount = tmp___3;
  while (1) {
    return_value->value = input->value;
    return_value->type = input->type;
    break;
  }
  _zval_copy_ctor(return_value);
  zval_set_isref_to_p(return_value, is_ref);
  zval_set_refcount_p(return_value, refcount);
  if (! do_pad) {
    return;
  } else {

  }
  num_pads = (int )(pad_size_abs - (long )input_size);
  if (num_pads > 1048576) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "You may only pad up to 1048576 elements at a time");
    _zval_dtor(return_value);
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  tmp___4 = _safe_emalloc((size_t )num_pads, sizeof(zval **), (size_t )0);
  pads = (zval ***)tmp___4;
  i = 0;
  while (i < num_pads) {
    *(pads + i) = & pad_value;
    i ++;
  }
  if (pad_size > 0L) {
    tmp___5 = php_splice(return_value->value.ht, input_size, 0, pads, num_pads,
                         (HashTable **)((void *)0));
    new_hash = (HashTable *)tmp___5;
  } else {
    tmp___6 = php_splice(return_value->value.ht, 0, 0, pads, num_pads,
                         (HashTable **)((void *)0));
    new_hash = (HashTable *)tmp___6;
  }
  old_hash = *(return_value->value.ht);
  if ((unsigned int )return_value->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
    zend_reset_all_cv(& executor_globals.symbol_table);
  } else {

  }
  *(return_value->value.ht) = *new_hash;
  _efree((void *)new_hash);
  zend_hash_destroy(& old_hash);
  _efree((void *)pads);
  return;
}
}
void zif_array_flip(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  zval **entry ;
  zval *data ;
  char *string_key ;
  uint str_key_len ;
  ulong num_key ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  tmp = zend_parse_parameters(ht, "a", & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)array->value.ht);
  _array_init(return_value, (uint )tmp___0);
  zend_hash_internal_pointer_reset_ex(array->value.ht, & pos);
  while (1) {
    tmp___4 = zend_hash_get_current_data_ex(array->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    while (1) {
      tmp___1 = _emalloc(sizeof(zval_gc_info ));
      data = (zval *)tmp___1;
      ((zval_gc_info *)data)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    data->refcount__gc = (zend_uint )1;
    data->is_ref__gc = (zend_uchar )0;
    tmp___2 = zend_hash_get_current_key_ex((HashTable const   *)array->value.ht,
                                           & string_key, & str_key_len,
                                           & num_key, (zend_bool )1, & pos);
    switch (tmp___2) {
    case (int __attribute__((__visibility__("default")))  )1: 
    while (1) {
      __s = (char const   *)string_key;
      __l = (int )(str_key_len - 1U);
      __z = data;
      __z->value.str.len = __l;
      __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
      __z->type = (zend_uchar )6;
      break;
    }
    break;
    case (int __attribute__((__visibility__("default")))  )2: 
    data->type = (zend_uchar )1;
    data->value.lval = (long )num_key;
    break;
    }
    if ((int )(*entry)->type == 1) {
      _zend_hash_index_update_or_next_insert(return_value->value.ht,
                                             (ulong )(*entry)->value.lval,
                                             (void *)(& data), sizeof(data),
                                             (void **)((void *)0), 1);
    } else
    if ((int )(*entry)->type == 6) {
      zend_symtable_update(return_value->value.ht,
                           (char const   *)(*entry)->value.str.val,
                           (uint )((*entry)->value.str.len + 1),
                           (void *)(& data), sizeof(data), (void **)((void *)0));
    } else {
      _zval_ptr_dtor(& data);
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Can only flip STRING and INTEGER values!");
    }
    zend_hash_move_forward_ex(array->value.ht, & pos);
  }
  return;
}
}
void zif_array_change_key_case(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) 
{ 
  zval *array ;
  zval **entry ;
  char *string_key ;
  char *new_key ;
  uint str_key_len ;
  ulong num_key ;
  long change_to_upper ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  change_to_upper = 0L;
  tmp = zend_parse_parameters(ht, "a|l", & array, & change_to_upper);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)array->value.ht);
  _array_init(return_value, (uint )tmp___0);
  zend_hash_internal_pointer_reset_ex(array->value.ht, & pos);
  while (1) {
    tmp___3 = zend_hash_get_current_data_ex(array->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    zval_add_ref(entry);
    tmp___1 = zend_hash_get_current_key_ex((HashTable const   *)array->value.ht,
                                           & string_key, & str_key_len,
                                           & num_key, (zend_bool )0, & pos);
    switch (tmp___1) {
    case (int __attribute__((__visibility__("default")))  )2: 
    _zend_hash_index_update_or_next_insert(return_value->value.ht, num_key,
                                           (void *)entry, sizeof(entry),
                                           (void **)((void *)0), 1);
    break;
    case (int __attribute__((__visibility__("default")))  )1: 
    tmp___2 = _estrndup((char const   *)string_key, str_key_len - 1U);
    new_key = (char *)tmp___2;
    if (change_to_upper) {
      php_strtoupper(new_key, str_key_len - 1U);
    } else {
      php_strtolower(new_key, str_key_len - 1U);
    }
    _zend_hash_add_or_update(return_value->value.ht, (char const   *)new_key,
                             str_key_len, (void *)entry, sizeof(entry),
                             (void **)((void *)0), 1);
    _efree((void *)new_key);
    break;
    }
    zend_hash_move_forward_ex(array->value.ht, & pos);
  }
  return;
}
}
void zif_array_unique(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  zval *tmp ;
  Bucket *p ;
  struct bucketindex *arTmp ;
  struct bucketindex *cmpdata ;
  struct bucketindex *lastkept ;
  unsigned int i ;
  long sort_type ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  void *tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  void *tmp___4 ;
  zval *__z ;
  int tmp___5 ;

  {
  sort_type = 2L;
  tmp___0 = zend_parse_parameters(ht, "a|l", & array, & sort_type);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  php_set_compare_func((int )sort_type);
  tmp___1 = zend_hash_num_elements((HashTable const   *)array->value.ht);
  _array_init(return_value, (uint )tmp___1);
  zend_hash_copy(return_value->value.ht, array->value.ht,
                 (void (*)(void *pElement ))(& zval_add_ref), (void *)(& tmp),
                 sizeof(zval *));
  if ((array->value.ht)->nNumOfElements <= 1U) {
    return;
  } else {

  }
  if ((array->value.ht)->persistent) {
    tmp___2 = __zend_malloc(((array->value.ht)->nNumOfElements + 1U) * sizeof(struct bucketindex ));
    tmp___4 = tmp___2;
  } else {
    tmp___3 = _emalloc(((array->value.ht)->nNumOfElements + 1U) * sizeof(struct bucketindex ));
    tmp___4 = (void *)tmp___3;
  }
  arTmp = (struct bucketindex *)tmp___4;
  if (! arTmp) {
    _zval_dtor(return_value);
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  i = 0U;
  p = (array->value.ht)->pListHead;
  while (p) {
    (arTmp + i)->b = p;
    (arTmp + i)->i = i;
    i ++;
    p = p->pListNext;
  }
  (arTmp + i)->b = (Bucket *)((void *)0);
  zend_qsort((void *)arTmp, i, sizeof(struct bucketindex ),
             & php_array_data_compare);
  lastkept = arTmp;
  cmpdata = arTmp + 1;
  while (cmpdata->b) {
    tmp___5 = php_array_data_compare((void const   *)lastkept,
                                     (void const   *)cmpdata);
    if (tmp___5) {
      lastkept = cmpdata;
    } else {
      if (lastkept->i > cmpdata->i) {
        p = lastkept->b;
        lastkept = cmpdata;
      } else {
        p = cmpdata->b;
      }
      if (p->nKeyLength == 0U) {
        zend_hash_del_key_or_index(return_value->value.ht,
                                   (char const   *)((void *)0), (uint )0, p->h,
                                   1);
      } else
      if ((unsigned int )return_value->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
        zend_delete_global_variable(p->arKey, (int )(p->nKeyLength - 1U));
      } else {
        zend_hash_del_key_or_index(return_value->value.ht, p->arKey,
                                   p->nKeyLength, p->h, 2);
      }
    }
    cmpdata ++;
  }
  if ((array->value.ht)->persistent) {
    free((void *)arTmp);
  } else {
    _efree((void *)arTmp);
  }
  return;
}
}
static int zval_compare(zval **a , zval **b ) 
{ 
  zval result ;
  zval *first ;
  zval *second ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  first = *a;
  second = *b;
  tmp = string_compare_function(& result, first, second);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return (0);
  } else {

  }
  if ((int )result.type == 2) {
    if (result.value.dval < (double )0) {
      return (-1);
    } else
    if (result.value.dval > (double )0) {
      return (1);
    } else {
      return (0);
    }
  } else {

  }
  convert_to_long(& result);
  if (result.value.lval < 0L) {
    return (-1);
  } else
  if (result.value.lval > 0L) {
    return (1);
  } else {

  }
  return (0);
}
}
static int zval_user_compare(zval **a , zval **b ) 
{ 
  zval **args[2] ;
  zval *retval_ptr ;
  long retval ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_uint tmp___0 ;
  zend_bool tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  args[0] = a;
  args[1] = b;
  basic_globals.user_compare_fci.param_count = (zend_uint )2;
  basic_globals.user_compare_fci.params = args;
  basic_globals.user_compare_fci.retval_ptr_ptr = & retval_ptr;
  basic_globals.user_compare_fci.no_separation = (zend_bool )0;
  tmp___4 = zend_call_function(& basic_globals.user_compare_fci,
                               & basic_globals.user_compare_fci_cache);
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    if (retval_ptr) {
      if ((int )retval_ptr->type != 1) {
        tmp___1 = zval_isref_p(retval_ptr);
        if (tmp___1) {

        } else {
          while (1) {
            tmp___0 = zval_refcount_p(retval_ptr);
            if (tmp___0 > 1U) {
              zval_delref_p(retval_ptr);
              while (1) {
                tmp = _emalloc(sizeof(zval_gc_info ));
                new_zv = (zval *)tmp;
                ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv->value = retval_ptr->value;
                  new_zv->type = retval_ptr->type;
                  break;
                }
                zval_set_refcount_p(new_zv, (zend_uint )1);
                zval_unset_isref_p(new_zv);
                break;
              }
              retval_ptr = new_zv;
              _zval_copy_ctor(new_zv);
            } else {

            }
            break;
          }
        }
        convert_to_long(retval_ptr);
      } else {

      }
      retval = retval_ptr->value.lval;
      _zval_ptr_dtor(& retval_ptr);
      if (retval < 0L) {
        tmp___3 = -1;
      } else {
        if (retval > 0L) {
          tmp___2 = 1;
        } else {
          tmp___2 = 0;
        }
        tmp___3 = tmp___2;
      }
      return (tmp___3);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}
static void php_array_intersect_key(int ht , zval *return_value ,
                                    zval **return_value_ptr , zval *this_ptr ,
                                    int return_value_used ,
                                    int data_compare_type ) 
{ 
  Bucket *p ;
  int argc ;
  int i ;
  zval ***args ;
  int (*intersect_data_compare_func)(zval ** , zval ** ) ;
  zend_bool ok ;
  zval **data ;
  int req_args ;
  char *param_spec ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int tmp___3 ;

  {
  intersect_data_compare_func = (int (*)(zval ** , zval ** ))((void *)0);
  argc = ht;
  if (data_compare_type == 1) {
    req_args = 3;
    param_spec = (char *)"+f";
    intersect_data_compare_func = & zval_user_compare;
  } else {
    req_args = 2;
    param_spec = (char *)"+";
    if (data_compare_type == 0) {
      intersect_data_compare_func = & zval_compare;
    } else {

    }
  }
  if (argc < req_args) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "at least %d parameters are required, %d given", req_args,
                      argc);
    return;
  } else {

  }
  tmp = zend_parse_parameters(ht, (char const   *)param_spec, & args, & argc,
                              & basic_globals.user_compare_fci,
                              & basic_globals.user_compare_fci_cache);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  i = 0;
  while (i < argc) {
    if ((int )(*(*(args + i)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is not an array", i + 1);
      return_value->type = (zend_uchar )0;
      goto out;
    } else {

    }
    i ++;
  }
  _array_init(return_value, (uint )0);
  p = ((*(*(args + 0)))->value.ht)->pListHead;
  while ((unsigned int )p != (unsigned int )((void *)0)) {
    if (p->nKeyLength == 0U) {
      ok = (zend_bool )1;
      i = 1;
      while (i < argc) {
        tmp___0 = zend_hash_index_find((HashTable const   *)(*(*(args + i)))->value.ht,
                                       p->h, (void **)(& data));
        if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
          ok = (zend_bool )0;
          break;
        } else
        if (intersect_data_compare_func) {
          tmp___1 = (*intersect_data_compare_func)((zval **)p->pData, data);
          if (tmp___1 != 0) {
            ok = (zend_bool )0;
            break;
          } else {

          }
        } else {

        }
        i ++;
      }
      if (ok) {
        zval_addref_p(*((zval **)p->pData));
        _zend_hash_index_update_or_next_insert(return_value->value.ht, p->h,
                                               p->pData, sizeof(zval *),
                                               (void **)((void *)0), 1);
      } else {

      }
    } else {
      ok = (zend_bool )1;
      i = 1;
      while (i < argc) {
        tmp___2 = zend_hash_quick_find((HashTable const   *)(*(*(args + i)))->value.ht,
                                       p->arKey, p->nKeyLength, p->h,
                                       (void **)(& data));
        if (tmp___2 == (int __attribute__((__visibility__("default")))  )-1) {
          ok = (zend_bool )0;
          break;
        } else
        if (intersect_data_compare_func) {
          tmp___3 = (*intersect_data_compare_func)((zval **)p->pData, data);
          if (tmp___3 != 0) {
            ok = (zend_bool )0;
            break;
          } else {

          }
        } else {

        }
        i ++;
      }
      if (ok) {
        zval_addref_p(*((zval **)p->pData));
        _zend_hash_quick_add_or_update(return_value->value.ht, p->arKey,
                                       p->nKeyLength, p->h, p->pData,
                                       sizeof(zval *), (void **)((void *)0), 1);
      } else {

      }
    }
    p = p->pListNext;
  }
  out: 
  _efree((void *)args);
  return;
}
}
static void php_array_intersect(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used , int behavior ,
                                int data_compare_type , int key_compare_type ) 
{ 
  zval ***args ;
  HashTable *hash ;
  int arr_argc ;
  int i ;
  int c ;
  Bucket ***lists ;
  Bucket **list ;
  Bucket ***ptrs ;
  Bucket *p ;
  int req_args ;
  char *param_spec ;
  zend_fcall_info fci1 ;
  zend_fcall_info fci2 ;
  zend_fcall_info_cache fci1_cache ;
  zend_fcall_info_cache fci2_cache ;
  zend_fcall_info *fci_key ;
  zend_fcall_info *fci_data ;
  zend_fcall_info_cache *fci_key_cache ;
  zend_fcall_info_cache *fci_data_cache ;
  zend_fcall_info old_user_compare_fci ;
  zend_fcall_info_cache old_user_compare_fci_cache ;
  int (*intersect_key_compare_func)(void const   * , void const   * ) ;
  int (*intersect_data_compare_func)(void const   * , void const   * ) ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  void *tmp___3 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  void *tmp___5 ;
  zval *__z ;
  Bucket **tmp___6 ;
  zend_uchar is_ref ;
  zend_bool tmp___7 ;
  zend_uint refcount ;
  zend_uint tmp___8 ;
  HashTable *ht___0 ;
  zval *tmp___9 ;
  void __attribute__((__visibility__("default")))  *tmp___10 ;
  int __attribute__((__visibility__("default")))  tmp___11 ;
  int tmp___12 ;
  Bucket **tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
  args = (zval ***)((void *)0);
  c = 0;
  fci1_cache = empty_fcall_info_cache;
  fci2_cache = empty_fcall_info_cache;
  if (behavior == 1) {
    intersect_key_compare_func = & php_array_key_compare;
    if (data_compare_type == 0) {
      req_args = 2;
      param_spec = (char *)"+";
      intersect_data_compare_func = & php_array_data_compare;
    } else
    if (data_compare_type == 1) {
      req_args = 3;
      param_spec = (char *)"+f";
      intersect_data_compare_func = & php_array_user_compare;
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "data_compare_type is %d. This should never happen. Please report as a bug",
                        data_compare_type);
      return;
    }
    if (ht < req_args) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "at least %d parameters are required, %d given",
                        req_args, ht);
      return;
    } else {

    }
    tmp = zend_parse_parameters(ht, (char const   *)param_spec, & args,
                                & arr_argc, & fci1, & fci1_cache);
    if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
    fci_data = & fci1;
    fci_data_cache = & fci1_cache;
  } else
  if (behavior & 6) {
    intersect_key_compare_func = & php_array_key_compare;
    if (data_compare_type == 0) {
      if (key_compare_type == 0) {
        req_args = 2;
        param_spec = (char *)"+";
        intersect_key_compare_func = & php_array_key_compare;
        intersect_data_compare_func = & php_array_data_compare;
      } else {
        goto _L___1;
      }
    } else
    _L___1: /* CIL Label */ 
    if (data_compare_type == 1) {
      if (key_compare_type == 0) {
        req_args = 3;
        param_spec = (char *)"+f";
        intersect_key_compare_func = & php_array_key_compare;
        intersect_data_compare_func = & php_array_user_compare;
        fci_data = & fci1;
        fci_data_cache = & fci1_cache;
      } else {
        goto _L___0;
      }
    } else
    _L___0: /* CIL Label */ 
    if (data_compare_type == 0) {
      if (key_compare_type == 1) {
        req_args = 3;
        param_spec = (char *)"+f";
        intersect_key_compare_func = & php_array_user_key_compare;
        intersect_data_compare_func = & php_array_data_compare;
        fci_key = & fci1;
        fci_key_cache = & fci1_cache;
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if (data_compare_type == 1) {
      if (key_compare_type == 1) {
        req_args = 4;
        param_spec = (char *)"+ff";
        intersect_key_compare_func = & php_array_user_key_compare;
        intersect_data_compare_func = & php_array_user_compare;
        fci_data = & fci1;
        fci_data_cache = & fci1_cache;
        fci_key = & fci2;
        fci_key_cache = & fci2_cache;
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "data_compare_type is %d. key_compare_type is %d. This should never happen. Please report as a bug",
                          data_compare_type, key_compare_type);
        return;
      }
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "data_compare_type is %d. key_compare_type is %d. This should never happen. Please report as a bug",
                        data_compare_type, key_compare_type);
      return;
    }
    if (ht < req_args) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "at least %d parameters are required, %d given",
                        req_args, ht);
      return;
    } else {

    }
    tmp___0 = zend_parse_parameters(ht, (char const   *)param_spec, & args,
                                    & arr_argc, & fci1, & fci1_cache, & fci2,
                                    & fci2_cache);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
  } else {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "behavior is %d. This should never happen. Please report as a bug",
                      behavior);
    return;
  }
  old_user_compare_fci = basic_globals.user_compare_fci;
  old_user_compare_fci_cache = basic_globals.user_compare_fci_cache;
  basic_globals.user_compare_fci_cache = (zend_fcall_info_cache )empty_fcall_info_cache;
  tmp___1 = _safe_emalloc((size_t )arr_argc, sizeof(Bucket **), (size_t )0);
  lists = (Bucket ***)tmp___1;
  tmp___2 = _safe_emalloc((size_t )arr_argc, sizeof(Bucket **), (size_t )0);
  ptrs = (Bucket ***)tmp___2;
  php_set_compare_func(2);
  if (behavior == 1) {
    if (data_compare_type == 1) {
      basic_globals.user_compare_fci = *fci_data;
      basic_globals.user_compare_fci_cache = *fci_data_cache;
    } else {
      goto _L___2;
    }
  } else
  _L___2: /* CIL Label */ 
  if (behavior & 6) {
    if (key_compare_type == 1) {
      basic_globals.user_compare_fci = *fci_key;
      basic_globals.user_compare_fci_cache = *fci_key_cache;
    } else {

    }
  } else {

  }
  i = 0;
  while (i < arr_argc) {
    if ((int )(*(*(args + i)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is not an array", i + 1);
      arr_argc = i;
      goto out;
    } else {

    }
    hash = (*(*(args + i)))->value.ht;
    if (hash->persistent) {
      tmp___3 = __zend_malloc((hash->nNumOfElements + 1U) * sizeof(Bucket *));
      tmp___5 = tmp___3;
    } else {
      tmp___4 = _emalloc((hash->nNumOfElements + 1U) * sizeof(Bucket *));
      tmp___5 = (void *)tmp___4;
    }
    list = (Bucket **)tmp___5;
    if (! list) {
      basic_globals.user_compare_fci = old_user_compare_fci;
      basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
      _efree((void *)ptrs);
      _efree((void *)lists);
      _efree((void *)args);
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    *(lists + i) = list;
    *(ptrs + i) = list;
    p = hash->pListHead;
    while (p) {
      tmp___6 = list;
      list ++;
      *tmp___6 = p;
      p = p->pListNext;
    }
    *list = (Bucket *)((void *)0);
    if (behavior == 1) {
      zend_qsort((void *)*(lists + i), hash->nNumOfElements, sizeof(Bucket *),
                 intersect_data_compare_func);
    } else
    if (behavior & 6) {
      zend_qsort((void *)*(lists + i), hash->nNumOfElements, sizeof(Bucket *),
                 intersect_key_compare_func);
    } else {

    }
    i ++;
  }
  tmp___7 = zval_isref_p(return_value);
  is_ref = tmp___7;
  tmp___8 = zval_refcount_p(return_value);
  refcount = tmp___8;
  while (1) {
    return_value->value = (*(*(args + 0)))->value;
    return_value->type = (*(*(args + 0)))->type;
    break;
  }
  _zval_copy_ctor(return_value);
  zval_set_isref_to_p(return_value, is_ref);
  zval_set_refcount_p(return_value, refcount);
  if ((unsigned int )return_value->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
    tmp___10 = _emalloc(sizeof(HashTable ));
    ht___0 = (HashTable *)tmp___10;
    tmp___11 = zend_hash_num_elements((HashTable const   *)return_value->value.ht);
    _zend_hash_init(ht___0, (uint )tmp___11,
                    (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                    (void (*)(void * ))(& _zval_ptr_dtor), (zend_bool )0);
    zend_hash_copy(ht___0, return_value->value.ht,
                   (void (*)(void *pElement ))(& zval_add_ref),
                   (void *)(& tmp___9), sizeof(zval *));
    return_value->value.ht = ht___0;
  } else {

  }
  while (*(*(ptrs + 0))) {
    if (behavior & 6) {
      if (key_compare_type == 1) {
        basic_globals.user_compare_fci = *fci_key;
        basic_globals.user_compare_fci_cache = *fci_key_cache;
      } else {

      }
    } else {

    }
    i = 1;
    while (i < arr_argc) {
      if (behavior & 1) {
        while (1) {
          if (*(*(ptrs + i))) {
            c = (*intersect_data_compare_func)((void const   *)*(ptrs + 0),
                                               (void const   *)*(ptrs + i));
            if (0 < c) {

            } else {
              break;
            }
          } else {
            break;
          }
          (*(ptrs + i)) ++;
        }
      } else
      if (behavior & 6) {
        while (1) {
          if (*(*(ptrs + i))) {
            c = (*intersect_key_compare_func)((void const   *)*(ptrs + 0),
                                              (void const   *)*(ptrs + i));
            if (0 < c) {

            } else {
              break;
            }
          } else {
            break;
          }
          (*(ptrs + i)) ++;
        }
        if (! c) {
          if (*(*(ptrs + i))) {
            if (behavior == 6) {
              if (data_compare_type == 1) {
                basic_globals.user_compare_fci = *fci_data;
                basic_globals.user_compare_fci_cache = *fci_data_cache;
              } else {

              }
              tmp___12 = (*intersect_data_compare_func)((void const   *)*(ptrs + 0),
                                                        (void const   *)*(ptrs + i));
              if (tmp___12 != 0) {
                c = 1;
                if (key_compare_type == 1) {
                  basic_globals.user_compare_fci = *fci_key;
                  basic_globals.user_compare_fci_cache = *fci_key_cache;
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
      if (! *(*(ptrs + i))) {
        while (1) {
          tmp___13 = *(ptrs + 0);
          (*(ptrs + 0)) ++;
          p = *tmp___13;
          if (! p) {
            goto out;
          } else {

          }
          if (p->nKeyLength == 0U) {
            zend_hash_del_key_or_index(return_value->value.ht,
                                       (char const   *)((void *)0), (uint )0,
                                       p->h, 1);
          } else {
            zend_hash_del_key_or_index(return_value->value.ht, p->arKey,
                                       p->nKeyLength, p->h, 2);
          }
        }
      } else {

      }
      if (c) {
        break;
      } else {

      }
      (*(ptrs + i)) ++;
      i ++;
    }
    if (c) {
      while (1) {
        p = *(*(ptrs + 0));
        if (p->nKeyLength == 0U) {
          zend_hash_del_key_or_index(return_value->value.ht,
                                     (char const   *)((void *)0), (uint )0,
                                     p->h, 1);
        } else {
          zend_hash_del_key_or_index(return_value->value.ht, p->arKey,
                                     p->nKeyLength, p->h, 2);
        }
        (*(ptrs + 0)) ++;
        if (*(*(ptrs + 0))) {

        } else {
          goto out;
        }
        if (behavior == 1) {
          tmp___14 = (*intersect_data_compare_func)((void const   *)*(ptrs + 0),
                                                    (void const   *)*(ptrs + i));
          if (0 <= tmp___14) {
            break;
          } else {

          }
        } else
        if (behavior & 6) {
          break;
        } else {

        }
      }
    } else {
      while (1) {
        (*(ptrs + 0)) ++;
        if (*(*(ptrs + 0))) {

        } else {
          goto out;
        }
        if (behavior == 1) {
          tmp___15 = (*intersect_data_compare_func)((void const   *)(*(ptrs + 0) - 1),
                                                    (void const   *)*(ptrs + 0));
          if (tmp___15) {
            break;
          } else {

          }
        } else
        if (behavior & 6) {
          break;
        } else {

        }
      }
    }
  }
  out: 
  i = 0;
  while (i < arr_argc) {
    hash = (*(*(args + i)))->value.ht;
    if (hash->persistent) {
      free((void *)*(lists + i));
    } else {
      _efree((void *)*(lists + i));
    }
    i ++;
  }
  basic_globals.user_compare_fci = old_user_compare_fci;
  basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
  _efree((void *)ptrs);
  _efree((void *)lists);
  _efree((void *)args);
  return;
}
}
void zif_array_intersect_key(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) 
{ 


  {
  php_array_intersect_key(ht, return_value, return_value_ptr, this_ptr,
                          return_value_used, -1);
  return;
}
}
void zif_array_intersect_ukey(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) 
{ 


  {
  php_array_intersect(ht, return_value, return_value_ptr, this_ptr,
                      return_value_used, 2, 0, 1);
  return;
}
}
void zif_array_intersect(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_intersect(ht, return_value, return_value_ptr, this_ptr,
                      return_value_used, 1, 0, 0);
  return;
}
}
void zif_array_uintersect(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) 
{ 


  {
  php_array_intersect(ht, return_value, return_value_ptr, this_ptr,
                      return_value_used, 1, 1, 0);
  return;
}
}
void zif_array_intersect_assoc(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) 
{ 


  {
  php_array_intersect_key(ht, return_value, return_value_ptr, this_ptr,
                          return_value_used, 0);
  return;
}
}
void zif_array_intersect_uassoc(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) 
{ 


  {
  php_array_intersect(ht, return_value, return_value_ptr, this_ptr,
                      return_value_used, 6, 0, 1);
  return;
}
}
void zif_array_uintersect_assoc(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) 
{ 


  {
  php_array_intersect_key(ht, return_value, return_value_ptr, this_ptr,
                          return_value_used, 1);
  return;
}
}
void zif_array_uintersect_uassoc(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) 
{ 


  {
  php_array_intersect(ht, return_value, return_value_ptr, this_ptr,
                      return_value_used, 6, 1, 1);
  return;
}
}
static void php_array_diff_key(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used , int data_compare_type ) 
{ 
  Bucket *p ;
  int argc ;
  int i ;
  zval ***args ;
  int (*diff_data_compare_func)(zval ** , zval ** ) ;
  zend_bool ok ;
  zval **data ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int tmp___4 ;

  {
  diff_data_compare_func = (int (*)(zval ** , zval ** ))((void *)0);
  argc = ht;
  if (data_compare_type == 1) {
    if (argc < 3) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "at least 3 parameters are required, %d given", ht);
      return;
    } else {

    }
    tmp = zend_parse_parameters(ht, "+f", & args, & argc,
                                & basic_globals.user_compare_fci,
                                & basic_globals.user_compare_fci_cache);
    if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
    diff_data_compare_func = & zval_user_compare;
  } else {
    if (argc < 2) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "at least 2 parameters are required, %d given", ht);
      return;
    } else {

    }
    tmp___0 = zend_parse_parameters(ht, "+", & args, & argc);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
    if (data_compare_type == 0) {
      diff_data_compare_func = & zval_compare;
    } else {

    }
  }
  i = 0;
  while (i < argc) {
    if ((int )(*(*(args + i)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is not an array", i + 1);
      return_value->type = (zend_uchar )0;
      goto out;
    } else {

    }
    i ++;
  }
  _array_init(return_value, (uint )0);
  p = ((*(*(args + 0)))->value.ht)->pListHead;
  while ((unsigned int )p != (unsigned int )((void *)0)) {
    if (p->nKeyLength == 0U) {
      ok = (zend_bool )1;
      i = 1;
      while (i < argc) {
        tmp___1 = zend_hash_index_find((HashTable const   *)(*(*(args + i)))->value.ht,
                                       p->h, (void **)(& data));
        if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {
          if (! diff_data_compare_func) {
            ok = (zend_bool )0;
            break;
          } else {
            tmp___2 = (*diff_data_compare_func)((zval **)p->pData, data);
            if (tmp___2 == 0) {
              ok = (zend_bool )0;
              break;
            } else {

            }
          }
        } else {

        }
        i ++;
      }
      if (ok) {
        zval_addref_p(*((zval **)p->pData));
        _zend_hash_index_update_or_next_insert(return_value->value.ht, p->h,
                                               p->pData, sizeof(zval *),
                                               (void **)((void *)0), 1);
      } else {

      }
    } else {
      ok = (zend_bool )1;
      i = 1;
      while (i < argc) {
        tmp___3 = zend_hash_quick_find((HashTable const   *)(*(*(args + i)))->value.ht,
                                       p->arKey, p->nKeyLength, p->h,
                                       (void **)(& data));
        if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {
          if (! diff_data_compare_func) {
            ok = (zend_bool )0;
            break;
          } else {
            tmp___4 = (*diff_data_compare_func)((zval **)p->pData, data);
            if (tmp___4 == 0) {
              ok = (zend_bool )0;
              break;
            } else {

            }
          }
        } else {

        }
        i ++;
      }
      if (ok) {
        zval_addref_p(*((zval **)p->pData));
        _zend_hash_quick_add_or_update(return_value->value.ht, p->arKey,
                                       p->nKeyLength, p->h, p->pData,
                                       sizeof(zval *), (void **)((void *)0), 1);
      } else {

      }
    }
    p = p->pListNext;
  }
  out: 
  _efree((void *)args);
  return;
}
}
static void php_array_diff(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used , int behavior ,
                           int data_compare_type , int key_compare_type ) 
{ 
  zval ***args ;
  HashTable *hash ;
  int arr_argc ;
  int i ;
  int c ;
  Bucket ***lists ;
  Bucket **list ;
  Bucket ***ptrs ;
  Bucket *p ;
  int req_args ;
  char *param_spec ;
  zend_fcall_info fci1 ;
  zend_fcall_info fci2 ;
  zend_fcall_info_cache fci1_cache ;
  zend_fcall_info_cache fci2_cache ;
  zend_fcall_info *fci_key ;
  zend_fcall_info *fci_data ;
  zend_fcall_info_cache *fci_key_cache ;
  zend_fcall_info_cache *fci_data_cache ;
  zend_fcall_info old_user_compare_fci ;
  zend_fcall_info_cache old_user_compare_fci_cache ;
  int (*diff_key_compare_func)(void const   * , void const   * ) ;
  int (*diff_data_compare_func)(void const   * , void const   * ) ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  void *tmp___3 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  void *tmp___5 ;
  zval *__z ;
  Bucket **tmp___6 ;
  zend_uchar is_ref ;
  zend_bool tmp___7 ;
  zend_uint refcount ;
  zend_uint tmp___8 ;
  HashTable *ht___0 ;
  zval *tmp___9 ;
  void __attribute__((__visibility__("default")))  *tmp___10 ;
  int __attribute__((__visibility__("default")))  tmp___11 ;
  Bucket **ptr ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  args = (zval ***)((void *)0);
  fci1_cache = empty_fcall_info_cache;
  fci2_cache = empty_fcall_info_cache;
  if (behavior == 1) {
    diff_key_compare_func = & php_array_key_compare;
    if (data_compare_type == 0) {
      req_args = 2;
      param_spec = (char *)"+";
      diff_data_compare_func = & php_array_data_compare;
    } else
    if (data_compare_type == 1) {
      req_args = 3;
      param_spec = (char *)"+f";
      diff_data_compare_func = & php_array_user_compare;
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "data_compare_type is %d. This should never happen. Please report as a bug",
                        data_compare_type);
      return;
    }
    if (ht < req_args) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "at least %d parameters are required, %d given",
                        req_args, ht);
      return;
    } else {

    }
    tmp = zend_parse_parameters(ht, (char const   *)param_spec, & args,
                                & arr_argc, & fci1, & fci1_cache);
    if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
    fci_data = & fci1;
    fci_data_cache = & fci1_cache;
  } else
  if (behavior & 6) {
    if (data_compare_type == 0) {
      if (key_compare_type == 0) {
        req_args = 2;
        param_spec = (char *)"+";
        diff_key_compare_func = & php_array_key_compare;
        diff_data_compare_func = & php_array_data_compare;
      } else {
        goto _L___1;
      }
    } else
    _L___1: /* CIL Label */ 
    if (data_compare_type == 1) {
      if (key_compare_type == 0) {
        req_args = 3;
        param_spec = (char *)"+f";
        diff_key_compare_func = & php_array_key_compare;
        diff_data_compare_func = & php_array_user_compare;
        fci_data = & fci1;
        fci_data_cache = & fci1_cache;
      } else {
        goto _L___0;
      }
    } else
    _L___0: /* CIL Label */ 
    if (data_compare_type == 0) {
      if (key_compare_type == 1) {
        req_args = 3;
        param_spec = (char *)"+f";
        diff_key_compare_func = & php_array_user_key_compare;
        diff_data_compare_func = & php_array_data_compare;
        fci_key = & fci1;
        fci_key_cache = & fci1_cache;
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if (data_compare_type == 1) {
      if (key_compare_type == 1) {
        req_args = 4;
        param_spec = (char *)"+ff";
        diff_key_compare_func = & php_array_user_key_compare;
        diff_data_compare_func = & php_array_user_compare;
        fci_data = & fci1;
        fci_data_cache = & fci1_cache;
        fci_key = & fci2;
        fci_key_cache = & fci2_cache;
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "data_compare_type is %d. key_compare_type is %d. This should never happen. Please report as a bug",
                          data_compare_type, key_compare_type);
        return;
      }
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "data_compare_type is %d. key_compare_type is %d. This should never happen. Please report as a bug",
                        data_compare_type, key_compare_type);
      return;
    }
    if (ht < req_args) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "at least %d parameters are required, %d given",
                        req_args, ht);
      return;
    } else {

    }
    tmp___0 = zend_parse_parameters(ht, (char const   *)param_spec, & args,
                                    & arr_argc, & fci1, & fci1_cache, & fci2,
                                    & fci2_cache);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      return;
    } else {

    }
  } else {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "behavior is %d. This should never happen. Please report as a bug",
                      behavior);
    return;
  }
  old_user_compare_fci = basic_globals.user_compare_fci;
  old_user_compare_fci_cache = basic_globals.user_compare_fci_cache;
  basic_globals.user_compare_fci_cache = (zend_fcall_info_cache )empty_fcall_info_cache;
  tmp___1 = _safe_emalloc((size_t )arr_argc, sizeof(Bucket **), (size_t )0);
  lists = (Bucket ***)tmp___1;
  tmp___2 = _safe_emalloc((size_t )arr_argc, sizeof(Bucket **), (size_t )0);
  ptrs = (Bucket ***)tmp___2;
  php_set_compare_func(2);
  if (behavior == 1) {
    if (data_compare_type == 1) {
      basic_globals.user_compare_fci = *fci_data;
      basic_globals.user_compare_fci_cache = *fci_data_cache;
    } else {
      goto _L___2;
    }
  } else
  _L___2: /* CIL Label */ 
  if (behavior & 6) {
    if (key_compare_type == 1) {
      basic_globals.user_compare_fci = *fci_key;
      basic_globals.user_compare_fci_cache = *fci_key_cache;
    } else {

    }
  } else {

  }
  i = 0;
  while (i < arr_argc) {
    if ((int )(*(*(args + i)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is not an array", i + 1);
      arr_argc = i;
      goto out;
    } else {

    }
    hash = (*(*(args + i)))->value.ht;
    if (hash->persistent) {
      tmp___3 = __zend_malloc((hash->nNumOfElements + 1U) * sizeof(Bucket *));
      tmp___5 = tmp___3;
    } else {
      tmp___4 = _emalloc((hash->nNumOfElements + 1U) * sizeof(Bucket *));
      tmp___5 = (void *)tmp___4;
    }
    list = (Bucket **)tmp___5;
    if (! list) {
      basic_globals.user_compare_fci = old_user_compare_fci;
      basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
      _efree((void *)ptrs);
      _efree((void *)lists);
      _efree((void *)args);
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    *(lists + i) = list;
    *(ptrs + i) = list;
    p = hash->pListHead;
    while (p) {
      tmp___6 = list;
      list ++;
      *tmp___6 = p;
      p = p->pListNext;
    }
    *list = (Bucket *)((void *)0);
    if (behavior == 1) {
      zend_qsort((void *)*(lists + i), hash->nNumOfElements, sizeof(Bucket *),
                 diff_data_compare_func);
    } else
    if (behavior & 6) {
      zend_qsort((void *)*(lists + i), hash->nNumOfElements, sizeof(Bucket *),
                 diff_key_compare_func);
    } else {

    }
    i ++;
  }
  tmp___7 = zval_isref_p(return_value);
  is_ref = tmp___7;
  tmp___8 = zval_refcount_p(return_value);
  refcount = tmp___8;
  while (1) {
    return_value->value = (*(*(args + 0)))->value;
    return_value->type = (*(*(args + 0)))->type;
    break;
  }
  _zval_copy_ctor(return_value);
  zval_set_isref_to_p(return_value, is_ref);
  zval_set_refcount_p(return_value, refcount);
  if ((unsigned int )return_value->value.ht == (unsigned int )(& executor_globals.symbol_table)) {
    tmp___10 = _emalloc(sizeof(HashTable ));
    ht___0 = (HashTable *)tmp___10;
    tmp___11 = zend_hash_num_elements((HashTable const   *)return_value->value.ht);
    _zend_hash_init(ht___0, (uint )tmp___11,
                    (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0),
                    (void (*)(void * ))(& _zval_ptr_dtor), (zend_bool )0);
    zend_hash_copy(ht___0, return_value->value.ht,
                   (void (*)(void *pElement ))(& zval_add_ref),
                   (void *)(& tmp___9), sizeof(zval *));
    return_value->value.ht = ht___0;
  } else {

  }
  while (*(*(ptrs + 0))) {
    if (behavior & 6) {
      if (key_compare_type == 1) {
        basic_globals.user_compare_fci = *fci_key;
        basic_globals.user_compare_fci_cache = *fci_key_cache;
      } else {

      }
    } else {

    }
    c = 1;
    i = 1;
    while (i < arr_argc) {
      ptr = *(ptrs + i);
      if (behavior == 1) {
        while (1) {
          if (*(*(ptrs + i))) {
            c = (*diff_data_compare_func)((void const   *)*(ptrs + 0),
                                          (void const   *)*(ptrs + i));
            if (0 < c) {

            } else {
              break;
            }
          } else {
            break;
          }
          (*(ptrs + i)) ++;
        }
      } else
      if (behavior & 6) {
        while (1) {
          if (*ptr) {
            c = (*diff_key_compare_func)((void const   *)*(ptrs + 0),
                                         (void const   *)ptr);
            if (0 != c) {

            } else {
              break;
            }
          } else {
            break;
          }
          ptr ++;
        }
      } else {

      }
      if (! c) {
        if (behavior == 1) {
          if (*(*(ptrs + i))) {
            (*(ptrs + i)) ++;
          } else {

          }
          break;
        } else
        if (behavior == 6) {
          if (*ptr) {
            if (data_compare_type == 1) {
              basic_globals.user_compare_fci = *fci_data;
              basic_globals.user_compare_fci_cache = *fci_data_cache;
            } else {

            }
            tmp___12 = (*diff_data_compare_func)((void const   *)*(ptrs + 0),
                                                 (void const   *)ptr);
            if (tmp___12 != 0) {
              c = -1;
              if (key_compare_type == 1) {
                basic_globals.user_compare_fci = *fci_key;
                basic_globals.user_compare_fci_cache = *fci_key_cache;
              } else {

              }
            } else {
              break;
            }
          } else {

          }
        } else
        if (behavior == 2) {
          break;
        } else {

        }
      } else {

      }
      i ++;
    }
    if (! c) {
      while (1) {
        p = *(*(ptrs + 0));
        if (p->nKeyLength == 0U) {
          zend_hash_del_key_or_index(return_value->value.ht,
                                     (char const   *)((void *)0), (uint )0,
                                     p->h, 1);
        } else {
          zend_hash_del_key_or_index(return_value->value.ht, p->arKey,
                                     p->nKeyLength, p->h, 2);
        }
        (*(ptrs + 0)) ++;
        if (*(*(ptrs + 0))) {

        } else {
          goto out;
        }
        if (behavior == 1) {
          tmp___13 = (*diff_data_compare_func)((void const   *)(*(ptrs + 0) - 1),
                                               (void const   *)*(ptrs + 0));
          if (tmp___13) {
            break;
          } else {

          }
        } else
        if (behavior & 6) {
          break;
        } else {

        }
      }
    } else {
      while (1) {
        (*(ptrs + 0)) ++;
        if (*(*(ptrs + 0))) {

        } else {
          goto out;
        }
        if (behavior == 1) {
          tmp___14 = (*diff_data_compare_func)((void const   *)(*(ptrs + 0) - 1),
                                               (void const   *)*(ptrs + 0));
          if (tmp___14) {
            break;
          } else {

          }
        } else
        if (behavior & 6) {
          break;
        } else {

        }
      }
    }
  }
  out: 
  i = 0;
  while (i < arr_argc) {
    hash = (*(*(args + i)))->value.ht;
    if (hash->persistent) {
      free((void *)*(lists + i));
    } else {
      _efree((void *)*(lists + i));
    }
    i ++;
  }
  basic_globals.user_compare_fci = old_user_compare_fci;
  basic_globals.user_compare_fci_cache = old_user_compare_fci_cache;
  _efree((void *)ptrs);
  _efree((void *)lists);
  _efree((void *)args);
  return;
}
}
void zif_array_diff_key(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_diff_key(ht, return_value, return_value_ptr, this_ptr,
                     return_value_used, -1);
  return;
}
}
void zif_array_diff_ukey(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_diff(ht, return_value, return_value_ptr, this_ptr,
                 return_value_used, 2, 0, 1);
  return;
}
}
void zif_array_diff(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_diff(ht, return_value, return_value_ptr, this_ptr,
                 return_value_used, 1, 0, 0);
  return;
}
}
void zif_array_udiff(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 


  {
  php_array_diff(ht, return_value, return_value_ptr, this_ptr,
                 return_value_used, 1, 1, 0);
  return;
}
}
void zif_array_diff_assoc(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) 
{ 


  {
  php_array_diff_key(ht, return_value, return_value_ptr, this_ptr,
                     return_value_used, 0);
  return;
}
}
void zif_array_diff_uassoc(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) 
{ 


  {
  php_array_diff(ht, return_value, return_value_ptr, this_ptr,
                 return_value_used, 6, 0, 1);
  return;
}
}
void zif_array_udiff_assoc(int ht , zval *return_value ,
                           zval **return_value_ptr , zval *this_ptr ,
                           int return_value_used ) 
{ 


  {
  php_array_diff_key(ht, return_value, return_value_ptr, this_ptr,
                     return_value_used, 1);
  return;
}
}
void zif_array_udiff_uassoc(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) 
{ 


  {
  php_array_diff(ht, return_value, return_value_ptr, this_ptr,
                 return_value_used, 6, 1, 1);
  return;
}
}
int __attribute__((__visibility__("default")))  php_multisort_compare(void const   *a ,
                                                                      void const   *b ) 
{ 
  Bucket **ab ;
  Bucket **bb ;
  int r ;
  int result ;
  zval temp ;

  {
  ab = *((Bucket ***)a);
  bb = *((Bucket ***)b);
  result = 0;
  r = 0;
  while (1) {
    php_set_compare_func(*(array_globals.multisort_flags[1] + r));
    (*(array_globals.compare_func))(& temp, *((zval **)(*(ab + r))->pData),
                                    *((zval **)(*(bb + r))->pData));
    result = (int )((long )*(array_globals.multisort_flags[0] + r) * temp.value.lval);
    if (result != 0) {
      return ((int __attribute__((__visibility__("default")))  )result);
    } else {

    }
    r ++;
    if ((unsigned int )*(ab + r) != (unsigned int )((void *)0)) {

    } else {
      break;
    }
  }
  return ((int __attribute__((__visibility__("default")))  )result);
}
}
void zif_array_multisort(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) 
{ 
  zval ***args ;
  zval ***arrays ;
  Bucket ***indirect ;
  Bucket *p ;
  HashTable *hash ;
  int argc ;
  int array_size ;
  int num_arrays ;
  int parse_state[2] ;
  int sort_order ;
  int sort_type ;
  int i ;
  int k ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  zval *__z ;
  zval *__z___0 ;
  zval *__z___1 ;
  zval *__z___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  zval *__z___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  zval *__z___4 ;
  void __attribute__((__visibility__("default")))  *tmp___5 ;
  void __attribute__((__visibility__("default")))  *tmp___6 ;
  int tmp___7 ;
  zval *__z___5 ;

  {
  num_arrays = 0;
  sort_order = 4;
  sort_type = 0;
  tmp = zend_parse_parameters(ht, "+", & args, & argc);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = _ecalloc((size_t )argc, sizeof(zval **));
  arrays = (zval ***)tmp___0;
  i = 0;
  while (i < 2) {
    parse_state[i] = 0;
    tmp___1 = _ecalloc((size_t )argc, sizeof(int ));
    array_globals.multisort_flags[i] = (int *)tmp___1;
    i ++;
  }
  i = 0;
  while (i < argc) {
    if ((int )(*(*(args + i)))->type == 4) {
      if (i > 0) {
        *(array_globals.multisort_flags[0] + (num_arrays - 1)) = sort_order;
        *(array_globals.multisort_flags[1] + (num_arrays - 1)) = sort_type;
        sort_order = 4;
        sort_type = 0;
      } else {

      }
      tmp___2 = num_arrays;
      num_arrays ++;
      *(arrays + tmp___2) = *(args + i);
      k = 0;
      while (k < 2) {
        parse_state[k] = 1;
        k ++;
      }
    } else
    if ((int )(*(*(args + i)))->type == 1) {
      switch ((*(*(args + i)))->value.lval & -9L) {
      case 3L: 
      case 4L: 
      if (parse_state[0] == 1) {
        if ((*(*(args + i)))->value.lval == 3L) {
          sort_order = -1;
        } else {
          sort_order = 1;
        }
        parse_state[0] = 0;
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Argument #%d is expected to be an array or sorting flag that has not already been specified",
                          i + 1);
        k = 0;
        while (k < 2) {
          _efree((void *)array_globals.multisort_flags[k]);
          k ++;
        }
        _efree((void *)arrays);
        _efree((void *)args);
        while (1) {
          __z = return_value;
          __z->value.lval = 0L;
          __z->type = (zend_uchar )3;
          break;
        }
        return;
      }
      break;
      case 5L: 
      case 6L: 
      case 2L: 
      case 1L: 
      case 0L: 
      if (parse_state[1] == 1) {
        sort_type = (int )(*(*(args + i)))->value.lval;
        parse_state[1] = 0;
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Argument #%d is expected to be an array or sorting flag that has not already been specified",
                          i + 1);
        k = 0;
        while (k < 2) {
          _efree((void *)array_globals.multisort_flags[k]);
          k ++;
        }
        _efree((void *)arrays);
        _efree((void *)args);
        while (1) {
          __z___0 = return_value;
          __z___0->value.lval = 0L;
          __z___0->type = (zend_uchar )3;
          break;
        }
        return;
      }
      break;
      default: 
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is an unknown sort flag", i + 1);
      k = 0;
      while (k < 2) {
        _efree((void *)array_globals.multisort_flags[k]);
        k ++;
      }
      _efree((void *)arrays);
      _efree((void *)args);
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 0L;
        __z___1->type = (zend_uchar )3;
        break;
      }
      return;
      break;
      }
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d is expected to be an array or a sort flag",
                        i + 1);
      k = 0;
      while (k < 2) {
        _efree((void *)array_globals.multisort_flags[k]);
        k ++;
      }
      _efree((void *)arrays);
      _efree((void *)args);
      while (1) {
        __z___2 = return_value;
        __z___2->value.lval = 0L;
        __z___2->type = (zend_uchar )3;
        break;
      }
      return;
    }
    i ++;
  }
  *(array_globals.multisort_flags[0] + (num_arrays - 1)) = sort_order;
  *(array_globals.multisort_flags[1] + (num_arrays - 1)) = sort_type;
  tmp___3 = zend_hash_num_elements((HashTable const   *)(*(*(arrays + 0)))->value.ht);
  array_size = (int )tmp___3;
  i = 0;
  while (i < num_arrays) {
    tmp___4 = zend_hash_num_elements((HashTable const   *)(*(*(arrays + i)))->value.ht);
    if (tmp___4 != (int __attribute__((__visibility__("default")))  )array_size) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Array sizes are inconsistent");
      k = 0;
      while (k < 2) {
        _efree((void *)array_globals.multisort_flags[k]);
        k ++;
      }
      _efree((void *)arrays);
      _efree((void *)args);
      while (1) {
        __z___3 = return_value;
        __z___3->value.lval = 0L;
        __z___3->type = (zend_uchar )3;
        break;
      }
      return;
    } else {

    }
    i ++;
  }
  if (array_size < 1) {
    k = 0;
    while (k < 2) {
      _efree((void *)array_globals.multisort_flags[k]);
      k ++;
    }
    _efree((void *)arrays);
    _efree((void *)args);
    while (1) {
      __z___4 = return_value;
      __z___4->value.lval = 1L;
      __z___4->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  tmp___5 = _safe_emalloc((size_t )array_size, sizeof(Bucket **), (size_t )0);
  indirect = (Bucket ***)tmp___5;
  i = 0;
  while (i < array_size) {
    tmp___6 = _safe_emalloc((size_t )(num_arrays + 1), sizeof(Bucket *),
                            (size_t )0);
    *(indirect + i) = (Bucket **)tmp___6;
    i ++;
  }
  i = 0;
  while (i < num_arrays) {
    k = 0;
    p = ((*(*(arrays + i)))->value.ht)->pListHead;
    while (p) {
      *(*(indirect + k) + i) = p;
      p = p->pListNext;
      k ++;
    }
    i ++;
  }
  k = 0;
  while (k < array_size) {
    *(*(indirect + k) + num_arrays) = (Bucket *)((void *)0);
    k ++;
  }
  zend_qsort((void *)indirect, (size_t )array_size, sizeof(Bucket **),
             (int (*)(void const   * , void const   * ))(& php_multisort_compare));
  if (zend_block_interruptions) {
    (*zend_block_interruptions)();
  } else {

  }
  i = 0;
  while (i < num_arrays) {
    hash = (*(*(arrays + i)))->value.ht;
    hash->pListHead = *(*(indirect + 0) + i);
    hash->pListTail = (Bucket *)((void *)0);
    hash->pInternalPointer = hash->pListHead;
    k = 0;
    while (k < array_size) {
      if (hash->pListTail) {
        (hash->pListTail)->pListNext = *(*(indirect + k) + i);
      } else {

      }
      (*(*(indirect + k) + i))->pListLast = hash->pListTail;
      (*(*(indirect + k) + i))->pListNext = (struct bucket *)((void *)0);
      hash->pListTail = *(*(indirect + k) + i);
      k ++;
    }
    p = hash->pListHead;
    k = 0;
    while ((unsigned int )p != (unsigned int )((void *)0)) {
      if (p->nKeyLength == 0U) {
        tmp___7 = k;
        k ++;
        p->h = (ulong )tmp___7;
      } else {

      }
      p = p->pListNext;
    }
    hash->nNextFreeElement = (ulong )array_size;
    zend_hash_rehash(hash);
    i ++;
  }
  if (zend_unblock_interruptions) {
    (*zend_unblock_interruptions)();
  } else {

  }
  i = 0;
  while (i < array_size) {
    _efree((void *)*(indirect + i));
    i ++;
  }
  _efree((void *)indirect);
  k = 0;
  while (k < 2) {
    _efree((void *)array_globals.multisort_flags[k]);
    k ++;
  }
  _efree((void *)arrays);
  _efree((void *)args);
  while (1) {
    __z___5 = return_value;
    __z___5->value.lval = 1L;
    __z___5->type = (zend_uchar )3;
    break;
  }
  return;
}
}
void zif_array_rand(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  long randval ;
  long num_req ;
  int num_avail ;
  int key_type ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  long __attribute__((__visibility__("default")))  tmp___1 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  num_req = 1L;
  tmp = zend_parse_parameters(ht, "a|l", & input, & num_req);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  num_avail = (int )tmp___0;
  if (ht > 1) {
    if (num_req <= 0L) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Second argument has to be between 1 and the number of elements in the array");
      return;
    } else
    if (num_req > (long )num_avail) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Second argument has to be between 1 and the number of elements in the array");
      return;
    } else {

    }
  } else {

  }
  if (num_req > 1L) {
    _array_init(return_value, (uint )num_req);
  } else {

  }
  zend_hash_internal_pointer_reset_ex(input->value.ht, & pos);
  while (1) {
    if (num_req) {
      tmp___3 = zend_hash_get_current_key_ex((HashTable const   *)input->value.ht,
                                             & string_key, & string_key_len,
                                             & num_key, (zend_bool )0, & pos);
      key_type = (int )tmp___3;
      if (key_type != 3) {

      } else {
        break;
      }
    } else {
      break;
    }
    tmp___1 = php_rand();
    randval = (long )tmp___1;
    if ((double )randval / ((double )2147483647 + 1.0) < (double )num_req / (double )num_avail) {
      if ((int )return_value->type != 4) {
        if (key_type == 1) {
          while (1) {
            __s = (char const   *)string_key;
            __l = (int )(string_key_len - 1U);
            __z = return_value;
            __z->value.str.len = __l;
            tmp___2 = _estrndup(__s, (unsigned int )__l);
            __z->value.str.val = (char *)tmp___2;
            __z->type = (zend_uchar )6;
            break;
          }
          return;
        } else {
          __z___0 = return_value;
          __z___0->value.lval = (long )num_key;
          __z___0->type = (zend_uchar )1;
          return;
        }
      } else
      if (key_type == 1) {
        add_next_index_stringl(return_value, (char const   *)string_key,
                               string_key_len - 1U, 1);
      } else {
        add_next_index_long(return_value, (long )num_key);
      }
      num_req --;
    } else {

    }
    num_avail --;
    zend_hash_move_forward_ex(input->value.ht, & pos);
  }
  return;
}
}
void zif_array_sum(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval **entry ;
  zval entry_n ;
  HashPosition pos ;
  double dval ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "a", & input);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  __z = return_value;
  __z->value.lval = 0L;
  __z->type = (zend_uchar )1;
  zend_hash_internal_pointer_reset_ex(input->value.ht, & pos);
  while (1) {
    tmp___0 = zend_hash_get_current_data_ex(input->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if ((int )(*entry)->type == 4) {
      goto __Cont;
    } else
    if ((int )(*entry)->type == 5) {
      goto __Cont;
    } else {

    }
    entry_n = *(*entry);
    _zval_copy_ctor(& entry_n);
    convert_scalar_to_number(& entry_n);
    if ((int )entry_n.type == 1) {
      if ((int )return_value->type == 1) {
        dval = (double )return_value->value.lval + (double )entry_n.value.lval;
        if ((double )(-0x7FFFFFFF-1) <= dval) {
          if (dval <= (double )2147483647L) {
            return_value->value.lval += entry_n.value.lval;
            goto __Cont;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
    convert_to_double(return_value);
    convert_to_double(& entry_n);
    return_value->value.dval += entry_n.value.dval;
    __Cont: /* CIL Label */ 
    zend_hash_move_forward_ex(input->value.ht, & pos);
  }
  return;
}
}
void zif_array_product(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval **entry ;
  zval entry_n ;
  HashPosition pos ;
  double dval ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_parse_parameters(ht, "a", & input);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  __z = return_value;
  __z->value.lval = 1L;
  __z->type = (zend_uchar )1;
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  if (tmp___0) {

  } else {
    return;
  }
  zend_hash_internal_pointer_reset_ex(input->value.ht, & pos);
  while (1) {
    tmp___1 = zend_hash_get_current_data_ex(input->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if ((int )(*entry)->type == 4) {
      goto __Cont;
    } else
    if ((int )(*entry)->type == 5) {
      goto __Cont;
    } else {

    }
    entry_n = *(*entry);
    _zval_copy_ctor(& entry_n);
    convert_scalar_to_number(& entry_n);
    if ((int )entry_n.type == 1) {
      if ((int )return_value->type == 1) {
        dval = (double )return_value->value.lval * (double )entry_n.value.lval;
        if ((double )(-0x7FFFFFFF-1) <= dval) {
          if (dval <= (double )2147483647L) {
            return_value->value.lval *= entry_n.value.lval;
            goto __Cont;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
    convert_to_double(return_value);
    convert_to_double(& entry_n);
    return_value->value.dval *= entry_n.value.dval;
    __Cont: /* CIL Label */ 
    zend_hash_move_forward_ex(input->value.ht, & pos);
  }
  return;
}
}
void zif_array_reduce(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 
  zval *input ;
  zval **args[2] ;
  zval **operand ;
  zval *result ;
  zval *retval ;
  zend_fcall_info fci ;
  zend_fcall_info_cache fci_cache ;
  zval *initial ;
  HashPosition pos ;
  HashTable *htbl ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uchar is_ref ;
  zend_bool tmp___2 ;
  zend_uint refcount ;
  zend_uint tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  zend_uchar is_ref___0 ;
  zend_bool tmp___7 ;
  zend_uint refcount___0 ;
  zend_uint tmp___8 ;

  {
  result = (zval *)((void *)0);
  fci_cache = empty_fcall_info_cache;
  initial = (zval *)((void *)0);
  tmp = zend_parse_parameters(ht, "af|z", & input, & fci, & fci_cache, & initial);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (ht > 2) {
    while (1) {
      tmp___0 = _emalloc(sizeof(zval_gc_info ));
      result = (zval *)tmp___0;
      ((zval_gc_info *)result)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    while (1) {
      while (1) {
        result->value = initial->value;
        result->type = initial->type;
        break;
      }
      zval_set_refcount_p(result, (zend_uint )1);
      zval_unset_isref_p(result);
      break;
    }
    _zval_copy_ctor(result);
  } else {
    while (1) {
      tmp___1 = _emalloc(sizeof(zval_gc_info ));
      result = (zval *)tmp___1;
      ((zval_gc_info *)result)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    result->refcount__gc = (zend_uint )1;
    result->is_ref__gc = (zend_uchar )0;
    result->type = (zend_uchar )0;
  }
  htbl = input->value.ht;
  tmp___4 = zend_hash_num_elements((HashTable const   *)htbl);
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    if (result) {
      tmp___2 = zval_isref_p(return_value);
      is_ref = tmp___2;
      tmp___3 = zval_refcount_p(return_value);
      refcount = tmp___3;
      while (1) {
        return_value->value = result->value;
        return_value->type = result->type;
        break;
      }
      _zval_copy_ctor(return_value);
      _zval_ptr_dtor(& result);
      zval_set_isref_to_p(return_value, is_ref);
      zval_set_refcount_p(return_value, refcount);
    } else {

    }
    return;
  } else {

  }
  fci.retval_ptr_ptr = & retval;
  fci.param_count = (zend_uint )2;
  fci.no_separation = (zend_bool )0;
  zend_hash_internal_pointer_reset_ex(htbl, & pos);
  while (1) {
    tmp___6 = zend_hash_get_current_data_ex(htbl, (void **)(& operand), & pos);
    if (tmp___6 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if (result) {
      args[0] = & result;
      args[1] = operand;
      fci.params = args;
      tmp___5 = zend_call_function(& fci, & fci_cache);
      if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {
        if (retval) {
          _zval_ptr_dtor(& result);
          result = retval;
        } else {
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "An error occurred while invoking the reduction callback");
          return;
        }
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "An error occurred while invoking the reduction callback");
        return;
      }
    } else {
      result = *operand;
      zval_add_ref(& result);
    }
    zend_hash_move_forward_ex(htbl, & pos);
  }
  tmp___7 = zval_isref_p(return_value);
  is_ref___0 = tmp___7;
  tmp___8 = zval_refcount_p(return_value);
  refcount___0 = tmp___8;
  while (1) {
    return_value->value = result->value;
    return_value->type = result->type;
    break;
  }
  _zval_copy_ctor(return_value);
  _zval_ptr_dtor(& result);
  zval_set_isref_to_p(return_value, is_ref___0);
  zval_set_refcount_p(return_value, refcount___0);
  return;
}
}
void zif_array_filter(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 
  zval *array ;
  zval **operand ;
  zval **args[1] ;
  zval *retval ;
  zend_bool have_callback ;
  char *string_key ;
  zend_fcall_info fci ;
  zend_fcall_info_cache fci_cache ;
  uint string_key_len ;
  ulong num_key ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  retval = (zval *)((void *)0);
  have_callback = (zend_bool )0;
  fci = empty_fcall_info;
  fci_cache = empty_fcall_info_cache;
  tmp = zend_parse_parameters(ht, "a|f", & array, & fci, & fci_cache);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, (uint )0);
  tmp___0 = zend_hash_num_elements((HashTable const   *)array->value.ht);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
    return;
  } else {

  }
  if (ht > 1) {
    have_callback = (zend_bool )1;
    fci.no_separation = (zend_bool )0;
    fci.retval_ptr_ptr = & retval;
    fci.param_count = (zend_uint )1;
  } else {

  }
  zend_hash_internal_pointer_reset_ex(array->value.ht, & pos);
  while (1) {
    tmp___5 = zend_hash_get_current_data_ex(array->value.ht,
                                            (void **)(& operand), & pos);
    if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if (have_callback) {
      args[0] = operand;
      fci.params = args;
      tmp___2 = zend_call_function(& fci, & fci_cache);
      if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
        if (retval) {
          tmp___1 = zend_is_true(retval);
          if (tmp___1) {
            _zval_ptr_dtor(& retval);
          } else {
            _zval_ptr_dtor(& retval);
            goto __Cont;
          }
        } else {
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "An error occurred while invoking the filter callback");
          return;
        }
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "An error occurred while invoking the filter callback");
        return;
      }
    } else {
      tmp___3 = zend_is_true(*operand);
      if (tmp___3) {

      } else {
        goto __Cont;
      }
    }
    zval_add_ref(operand);
    tmp___4 = zend_hash_get_current_key_ex((HashTable const   *)array->value.ht,
                                           & string_key, & string_key_len,
                                           & num_key, (zend_bool )0, & pos);
    switch (tmp___4) {
    case (int __attribute__((__visibility__("default")))  )1: 
    _zend_hash_add_or_update(return_value->value.ht, (char const   *)string_key,
                             string_key_len, (void *)operand, sizeof(zval *),
                             (void **)((void *)0), 1);
    break;
    case (int __attribute__((__visibility__("default")))  )2: 
    _zend_hash_index_update_or_next_insert(return_value->value.ht, num_key,
                                           (void *)operand, sizeof(zval *),
                                           (void **)((void *)0), 1);
    break;
    }
    __Cont: /* CIL Label */ 
    zend_hash_move_forward_ex(array->value.ht, & pos);
  }
  return;
}
}
void zif_array_map(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ 
  zval ***arrays ;
  int n_arrays ;
  zval ***params ;
  zval *result ;
  zval *null ;
  HashPosition *array_pos ;
  zval **args ;
  zend_fcall_info fci ;
  zend_fcall_info_cache fci_cache ;
  int i ;
  int k ;
  int maxlen ;
  int *array_len ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zend_uint tmp___4 ;
  zend_bool tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  zend_uchar is_ref ;
  zend_bool tmp___7 ;
  zend_uint refcount ;
  zend_uint tmp___8 ;
  void __attribute__((__visibility__("default")))  *tmp___9 ;
  void __attribute__((__visibility__("default")))  *tmp___10 ;
  uint str_key_len ;
  ulong num_key ;
  char *str_key ;
  int key_type ;
  void __attribute__((__visibility__("default")))  *tmp___11 ;
  int __attribute__((__visibility__("default")))  tmp___12 ;
  int __attribute__((__visibility__("default")))  tmp___13 ;

  {
  arrays = (zval ***)((void *)0);
  n_arrays = 0;
  fci = empty_fcall_info;
  fci_cache = empty_fcall_info_cache;
  maxlen = 0;
  tmp = zend_parse_parameters(ht, "f!+", & fci, & fci_cache, & arrays,
                              & n_arrays);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  return_value->type = (zend_uchar )0;
  tmp___0 = _safe_emalloc((size_t )n_arrays, sizeof(zval *), (size_t )0);
  args = (zval **)tmp___0;
  tmp___1 = _safe_emalloc((size_t )n_arrays, sizeof(int ), (size_t )0);
  array_len = (int *)tmp___1;
  tmp___2 = _safe_emalloc((size_t )n_arrays, sizeof(HashPosition ), (size_t )0);
  array_pos = (HashPosition *)tmp___2;
  i = 0;
  while (i < n_arrays) {
    if ((int )(*(*(arrays + i)))->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument #%d should be an array", i + 2);
      _efree((void *)arrays);
      _efree((void *)args);
      _efree((void *)array_len);
      _efree((void *)array_pos);
      return;
    } else {

    }
    tmp___5 = zval_isref_p(*(*(arrays + i)));
    if (tmp___5) {

    } else {
      while (1) {
        tmp___4 = zval_refcount_p(*(*(arrays + i)));
        if (tmp___4 > 1U) {
          zval_delref_p(*(*(arrays + i)));
          while (1) {
            tmp___3 = _emalloc(sizeof(zval_gc_info ));
            new_zv = (zval *)tmp___3;
            ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          while (1) {
            while (1) {
              new_zv->value = (*(*(arrays + i)))->value;
              new_zv->type = (*(*(arrays + i)))->type;
              break;
            }
            zval_set_refcount_p(new_zv, (zend_uint )1);
            zval_unset_isref_p(new_zv);
            break;
          }
          *(*(arrays + i)) = new_zv;
          _zval_copy_ctor(new_zv);
        } else {

        }
        break;
      }
    }
    *(args + i) = *(*(arrays + i));
    tmp___6 = zend_hash_num_elements((HashTable const   *)(*(*(arrays + i)))->value.ht);
    *(array_len + i) = (int )tmp___6;
    if (*(array_len + i) > maxlen) {
      maxlen = *(array_len + i);
    } else {

    }
    zend_hash_internal_pointer_reset_ex((*(*(arrays + i)))->value.ht,
                                        array_pos + i);
    i ++;
  }
  _efree((void *)arrays);
  if (! (fci.size != 0U)) {
    if (n_arrays == 1) {
      tmp___7 = zval_isref_p(return_value);
      is_ref = tmp___7;
      tmp___8 = zval_refcount_p(return_value);
      refcount = tmp___8;
      while (1) {
        return_value->value = (*(args + 0))->value;
        return_value->type = (*(args + 0))->type;
        break;
      }
      _zval_copy_ctor(return_value);
      zval_set_isref_to_p(return_value, is_ref);
      zval_set_refcount_p(return_value, refcount);
      _efree((void *)array_len);
      _efree((void *)array_pos);
      _efree((void *)args);
      return;
    } else {

    }
  } else {

  }
  _array_init(return_value, (uint )maxlen);
  tmp___9 = _safe_emalloc((size_t )n_arrays, sizeof(zval **), (size_t )0);
  params = (zval ***)tmp___9;
  while (1) {
    tmp___10 = _emalloc(sizeof(zval_gc_info ));
    null = (zval *)tmp___10;
    ((zval_gc_info *)null)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  null->refcount__gc = (zend_uint )1;
  null->is_ref__gc = (zend_uchar )0;
  null->type = (zend_uchar )0;
  k = 0;
  while (k < maxlen) {
    key_type = 0;
    if (! (fci.size != 0U)) {
      while (1) {
        tmp___11 = _emalloc(sizeof(zval_gc_info ));
        result = (zval *)tmp___11;
        ((zval_gc_info *)result)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      result->refcount__gc = (zend_uint )1;
      result->is_ref__gc = (zend_uchar )0;
      _array_init(result, (uint )n_arrays);
    } else {

    }
    i = 0;
    while (i < n_arrays) {
      if (k < *(array_len + i)) {
        zend_hash_get_current_data_ex((*(args + i))->value.ht,
                                      (void **)(params + i), array_pos + i);
        if (n_arrays == 1) {
          tmp___12 = zend_hash_get_current_key_ex((HashTable const   *)(*(args + 0))->value.ht,
                                                  & str_key, & str_key_len,
                                                  & num_key, (zend_bool )0,
                                                  array_pos + i);
          key_type = (int )tmp___12;
        } else {

        }
        zend_hash_move_forward_ex((*(args + i))->value.ht, array_pos + i);
      } else {
        *(params + i) = & null;
      }
      if (! (fci.size != 0U)) {
        zval_add_ref(*(params + i));
        add_next_index_zval(result, *(*(params + i)));
      } else {

      }
      i ++;
    }
    if (fci.size != 0U) {
      fci.retval_ptr_ptr = & result;
      fci.param_count = (zend_uint )n_arrays;
      fci.params = params;
      fci.no_separation = (zend_bool )0;
      tmp___13 = zend_call_function(& fci, & fci_cache);
      if (tmp___13 != (int __attribute__((__visibility__("default")))  )0) {
        goto _L;
      } else
      if (! result) {
        _L: /* CIL Label */ 
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "An error occurred while invoking the map callback");
        _efree((void *)array_len);
        _efree((void *)args);
        _efree((void *)array_pos);
        _zval_dtor(return_value);
        _zval_ptr_dtor(& null);
        _efree((void *)params);
        return_value->type = (zend_uchar )0;
        return;
      } else {

      }
    } else {

    }
    if (n_arrays > 1) {
      add_next_index_zval(return_value, result);
    } else
    if (key_type == 1) {
      add_assoc_zval_ex(return_value, (char const   *)str_key, str_key_len,
                        result);
    } else {
      add_index_zval(return_value, num_key, result);
    }
    k ++;
  }
  _zval_ptr_dtor(& null);
  _efree((void *)params);
  _efree((void *)array_len);
  _efree((void *)array_pos);
  _efree((void *)args);
  return;
}
}
void zif_array_key_exists(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) 
{ 
  zval *key ;
  HashTable *array ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int tmp___0 ;
  zval *__z___0 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z___2 ;
  zval *__z___3 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  zval *__z___4 ;
  zval *__z___5 ;

  {
  tmp = zend_parse_parameters(ht, "zH", & key, & array);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  switch ((int )key->type) {
  case 6: 
  tmp___0 = zend_symtable_exists(array, (char const   *)key->value.str.val,
                                 (uint )(key->value.str.len + 1));
  if (tmp___0) {
    while (1) {
      __z = return_value;
      __z->value.lval = 1L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___0 = return_value;
    __z___0->value.lval = 0L;
    __z___0->type = (zend_uchar )3;
    break;
  }
  return;
  case 1: 
  tmp___1 = zend_hash_index_exists((HashTable const   *)array,
                                   (ulong )key->value.lval);
  if (tmp___1) {
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 1L;
      __z___1->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___2 = return_value;
    __z___2->value.lval = 0L;
    __z___2->type = (zend_uchar )3;
    break;
  }
  return;
  case 0: 
  tmp___2 = zend_hash_exists((HashTable const   *)array, "", (uint )1);
  if (tmp___2) {
    while (1) {
      __z___3 = return_value;
      __z___3->value.lval = 1L;
      __z___3->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  while (1) {
    __z___4 = return_value;
    __z___4->value.lval = 0L;
    __z___4->type = (zend_uchar )3;
    break;
  }
  return;
  default: 
  php_error_docref0((char const   *)((void *)0), 1 << 1L,
                    "The first argument should be either a string or an integer");
  while (1) {
    __z___5 = return_value;
    __z___5->value.lval = 0L;
    __z___5->type = (zend_uchar )3;
    break;
  }
  return;
  }
}
}
void zif_array_chunk(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 
  int argc ;
  int key_type ;
  int num_in ;
  long size ;
  long current ;
  char *str_key ;
  uint str_key_len ;
  ulong num_key ;
  zend_bool preserve_keys ;
  zval *input ;
  zval *chunk ;
  zval **entry ;
  HashPosition pos ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  argc = ht;
  current = 0L;
  preserve_keys = (zend_bool )0;
  input = (zval *)((void *)0);
  chunk = (zval *)((void *)0);
  tmp = zend_parse_parameters(argc, "al|b", & input, & size, & preserve_keys);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (size < 1L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Size parameter expected to be greater than 0");
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)input->value.ht);
  num_in = (int )tmp___0;
  if (size > (long )num_in) {
    if (num_in > 0) {
      size = (long )num_in;
    } else {
      size = 1L;
    }
  } else {

  }
  _array_init(return_value, (uint )((long )(num_in - 1) / size + 1L));
  zend_hash_internal_pointer_reset_ex(input->value.ht, & pos);
  while (1) {
    tmp___3 = zend_hash_get_current_data_ex(input->value.ht, (void **)(& entry),
                                            & pos);
    if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if (! chunk) {
      while (1) {
        tmp___1 = _emalloc(sizeof(zval_gc_info ));
        chunk = (zval *)tmp___1;
        ((zval_gc_info *)chunk)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      chunk->refcount__gc = (zend_uint )1;
      chunk->is_ref__gc = (zend_uchar )0;
      _array_init(chunk, (uint )size);
    } else {

    }
    zval_add_ref(entry);
    if (preserve_keys) {
      tmp___2 = zend_hash_get_current_key_ex((HashTable const   *)input->value.ht,
                                             & str_key, & str_key_len,
                                             & num_key, (zend_bool )0, & pos);
      key_type = (int )tmp___2;
      switch (key_type) {
      case 1: 
      add_assoc_zval_ex(chunk, (char const   *)str_key, str_key_len, *entry);
      break;
      default: 
      add_index_zval(chunk, num_key, *entry);
      break;
      }
    } else {
      add_next_index_zval(chunk, *entry);
    }
    current ++;
    if (current % size) {

    } else {
      add_next_index_zval(return_value, chunk);
      chunk = (zval *)((void *)0);
    }
    zend_hash_move_forward_ex(input->value.ht, & pos);
  }
  if (chunk) {
    add_next_index_zval(return_value, chunk);
  } else {

  }
  return;
}
}
void zif_array_combine(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ 
  zval *values ;
  zval *keys ;
  HashPosition pos_values ;
  HashPosition pos_keys ;
  zval **entry_keys ;
  zval **entry_values ;
  int num_keys ;
  int num_values ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z ;
  zval key ;
  zval *key_ptr ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  tmp = zend_parse_parameters(ht, "aa", & keys, & values);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_hash_num_elements((HashTable const   *)keys->value.ht);
  num_keys = (int )tmp___0;
  tmp___1 = zend_hash_num_elements((HashTable const   *)values->value.ht);
  num_values = (int )tmp___1;
  if (num_keys != num_values) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Both parameters should have an equal number of elements");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (zend_uchar )3;
      break;
    }
    return;
  } else {

  }
  _array_init(return_value, (uint )num_keys);
  if (! num_keys) {
    return;
  } else {

  }
  zend_hash_internal_pointer_reset_ex(keys->value.ht, & pos_keys);
  zend_hash_internal_pointer_reset_ex(values->value.ht, & pos_values);
  while (1) {
    tmp___2 = zend_hash_get_current_data_ex(keys->value.ht,
                                            (void **)(& entry_keys), & pos_keys);
    if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
      tmp___3 = zend_hash_get_current_data_ex(values->value.ht,
                                              (void **)(& entry_values),
                                              & pos_values);
      if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
    } else {
      break;
    }
    if ((int )(*entry_keys)->type == 1) {
      zval_add_ref(entry_values);
      add_index_zval(return_value, (ulong )(*entry_keys)->value.lval,
                     *entry_values);
    } else {
      key_ptr = *entry_keys;
      if ((int )(*entry_keys)->type != 6) {
        key = *(*entry_keys);
        _zval_copy_ctor(& key);
        if ((int )key.type != 6) {
          _convert_to_string(& key);
        } else {

        }
        key_ptr = & key;
      } else {

      }
      zval_add_ref(entry_values);
      add_assoc_zval_ex(return_value, (char const   *)key_ptr->value.str.val,
                        (uint )(key_ptr->value.str.len + 1), *entry_values);
      if ((unsigned int )key_ptr != (unsigned int )*entry_keys) {
        _zval_dtor(& key);
      } else {

      }
    }
    zend_hash_move_forward_ex(keys->value.ht, & pos_keys);
    zend_hash_move_forward_ex(values->value.ht, & pos_values);
  }
  return;
}
}
