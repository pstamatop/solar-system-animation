# 1 "main.cpp"
# 1 "<command-line>"
# 1 "main.cpp"

# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 533 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 534 "/usr/include/sys/cdefs.h" 2 3 4
# 599 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 600 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 172 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 173 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
extern "C" {

int renameat(int, const char *, int, const char *) ;

}
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {
extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
}
# 230 "/usr/include/stdio.h" 3 4
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);



FILE *fopen(const char * , const char * ) __asm("_" "fopen" );

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" );
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen" );
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * , ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * , va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
}
# 292 "/usr/include/stdio.h" 3 4
extern "C" {



char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
}
# 314 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );

}
# 336 "/usr/include/stdio.h" 3 4
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
}







inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 373 "/usr/include/stdio.h" 3 4
extern "C" {
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
}
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4

extern "C" {
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
}



extern "C" {
int snprintf(char * , size_t, const char * , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * , va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * , size_t, const char * , va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
}
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4

extern "C" {
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char ** , size_t * , int, FILE * ) ;
ssize_t getline(char ** , size_t * , FILE * ) ;
}







extern "C" {
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
}
# 3 "main.cpp" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 83 "/usr/include/sys/signal.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal(int, void (*)(int)))(int);
}
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include/stdint.h" 1 3 4


# 1 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 1 3 4
# 27 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;





# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 63 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 64 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include-fixed/stdint.h" 2 3 4
# 4 "/opt/local/lib/gcc47/gcc/x86_64-apple-darwin14/4.7.4/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 382 "/usr/include/sys/resource.h" 3 4
extern "C" {
int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
}
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{



    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;

}
# 91 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 247 "/usr/include/sys/wait.h" 3 4
extern "C" {
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 31 "/usr/include/alloca.h" 3 4
extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4
# 76 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 127 "/usr/include/stdlib.h" 3 4
extern "C" {
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
int posix_memalign(void **, size_t, size_t) ;
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) ;
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );






# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) ;
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) ;







char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((deprecated)) ;
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));




int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));




void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) ;




void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) ;




void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);






}
# 4 "main.cpp" 2

# 1 "/usr/include/time.h" 1 3 4
# 67 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4


# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 71 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 72 "/usr/include/time.h" 2 3 4

struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 96 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime" );
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );

}
# 6 "main.cpp" 2
# 1 "/System/Library/Frameworks/openGL.framework/Headers/gl.h" 1 3
# 40 "/System/Library/Frameworks/openGL.framework/Headers/gl.h" 3
# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/gltypes.h" 1 3
# 9 "/System/Library/Frameworks/OpenGL.framework/Headers/gltypes.h" 3
typedef uint32_t GLbitfield;
typedef uint8_t GLboolean;
typedef int8_t GLbyte;
typedef float GLclampf;
typedef uint32_t GLenum;
typedef float GLfloat;
typedef int32_t GLint;
typedef int16_t GLshort;
typedef int32_t GLsizei;
typedef uint8_t GLubyte;
typedef uint32_t GLuint;
typedef uint16_t GLushort;
typedef void GLvoid;


typedef char GLchar;


typedef char GLcharARB;
typedef void *GLhandleARB;

typedef double GLdouble;
typedef double GLclampd;

typedef int32_t GLfixed;


typedef uint16_t GLhalf;


typedef uint16_t GLhalfARB;


typedef int64_t GLint64;
typedef struct __GLsync *GLsync;
typedef uint64_t GLuint64;


typedef int64_t GLint64EXT;
typedef uint64_t GLuint64EXT;


typedef intptr_t GLintptr;
typedef intptr_t GLsizeiptr;


typedef intptr_t GLintptrARB;
typedef intptr_t GLsizeiptrARB;
# 41 "/System/Library/Frameworks/openGL.framework/Headers/gl.h" 2 3


# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 1 3
# 11 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern "C" {
# 2152 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glClampColorARB(GLenum target, GLenum clamp);







extern void glDrawBuffersARB(GLsizei n, const GLenum *bufs);
# 2171 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint base_vertex);
extern void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint base_vertex);
extern void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint base_vertex);
extern void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, const GLint *base_vertex);
# 2183 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
extern void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
# 2211 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern GLboolean glIsRenderbuffer(GLuint renderbuffer);
extern void glBindRenderbuffer(GLenum target, GLuint renderbuffer);
extern void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers);
extern void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers);
extern void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params);
extern GLboolean glIsFramebuffer(GLuint framebuffer);
extern void glBindFramebuffer(GLenum target, GLuint framebuffer);
extern void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers);
extern void glGenFramebuffers(GLsizei n, GLuint *framebuffers);
extern GLenum glCheckFramebufferStatus(GLenum target);
extern void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern void glGenerateMipmap(GLenum target);
extern void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);







extern void glVertexAttribDivisorARB(GLuint index, GLuint divisor);







extern void glSampleCoverageARB(GLclampf value, GLboolean invert);
# 2287 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glActiveTextureARB(GLenum texture);
extern void glClientActiveTextureARB(GLenum texture);
extern void glMultiTexCoord1dARB(GLenum target, GLdouble s);
extern void glMultiTexCoord1dvARB(GLenum target, const GLdouble *v);
extern void glMultiTexCoord1fARB(GLenum target, GLfloat s);
extern void glMultiTexCoord1fvARB(GLenum target, const GLfloat *v);
extern void glMultiTexCoord1iARB(GLenum target, GLint s);
extern void glMultiTexCoord1ivARB(GLenum target, const GLint *v);
extern void glMultiTexCoord1sARB(GLenum target, GLshort s);
extern void glMultiTexCoord1svARB(GLenum target, const GLshort *v);
extern void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
extern void glMultiTexCoord2dvARB(GLenum target, const GLdouble *v);
extern void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
extern void glMultiTexCoord2fvARB(GLenum target, const GLfloat *v);
extern void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
extern void glMultiTexCoord2ivARB(GLenum target, const GLint *v);
extern void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
extern void glMultiTexCoord2svARB(GLenum target, const GLshort *v);
extern void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void glMultiTexCoord3dvARB(GLenum target, const GLdouble *v);
extern void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void glMultiTexCoord3fvARB(GLenum target, const GLfloat *v);
extern void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
extern void glMultiTexCoord3ivARB(GLenum target, const GLint *v);
extern void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
extern void glMultiTexCoord3svARB(GLenum target, const GLshort *v);
extern void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glMultiTexCoord4dvARB(GLenum target, const GLdouble *v);
extern void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glMultiTexCoord4fvARB(GLenum target, const GLfloat *v);
extern void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void glMultiTexCoord4ivARB(GLenum target, const GLint *v);
extern void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void glMultiTexCoord4svARB(GLenum target, const GLshort *v);
# 2335 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glGenQueriesARB(GLsizei n, GLuint *ids);
extern void glDeleteQueriesARB(GLsizei n, const GLuint *ids);
extern GLboolean glIsQueryARB(GLuint id);
extern void glBeginQueryARB(GLenum target, GLuint id);
extern void glEndQueryARB(GLenum target);
extern void glGetQueryivARB(GLenum target, GLenum pname, GLint *params);
extern void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params);
extern void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params);
# 2351 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPointParameterfARB(GLenum pname, GLfloat param);
extern void glPointParameterfvARB(GLenum pname, const GLfloat *params);







extern void glProvokingVertex(GLenum mode);
# 2406 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glDeleteObjectARB(GLhandleARB obj);
extern GLhandleARB glGetHandleARB(GLenum pname);
extern void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj);
extern GLhandleARB glCreateShaderObjectARB(GLenum shaderType);
extern void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB* const *string, const GLint *length);
extern void glCompileShaderARB(GLhandleARB shaderObj);
extern GLhandleARB glCreateProgramObjectARB(void);
extern void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj);
extern void glLinkProgramARB(GLhandleARB programObj);
extern void glUseProgramObjectARB(GLhandleARB programObj);
extern void glValidateProgramARB(GLhandleARB programObj);
extern void glUniform1fARB(GLint location, GLfloat v0);
extern void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1);
extern void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void glUniform1iARB(GLint location, GLint v0);
extern void glUniform2iARB(GLint location, GLint v0, GLint v1);
extern void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2);
extern void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void glUniform1fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform2fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform3fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform4fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform1ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniform2ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniform3ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniform4ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params);
extern void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params);
extern void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
extern void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
extern GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name);
extern void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params);
extern void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params);
extern void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
# 2458 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern GLsync glFenceSync(GLenum condition, GLbitfield flags);
extern GLboolean glIsSync(GLsync sync);
extern void glDeleteSync(GLsync sync);
extern GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
extern void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
extern void glGetInteger64v(GLenum pname, GLint64 *params);
extern void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
# 2478 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glGetCompressedTexImageARB(GLenum target, GLint level, GLvoid *data);
# 2495 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glLoadTransposeMatrixfARB(const GLfloat *m);
extern void glLoadTransposeMatrixdARB(const GLdouble *m);
extern void glMultTransposeMatrixfARB(const GLfloat *m);
extern void glMultTransposeMatrixdARB(const GLdouble *m);
# 2515 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glWeightbvARB(GLint size, const GLbyte *weights);
extern void glWeightsvARB(GLint size, const GLshort *weights);
extern void glWeightivARB(GLint size, const GLint *weights);
extern void glWeightfvARB(GLint size, const GLfloat *weights);
extern void glWeightdvARB(GLint size, const GLdouble *weights);
extern void glWeightubvARB(GLint size, const GLubyte *weights);
extern void glWeightusvARB(GLint size, const GLushort *weights);
extern void glWeightuivARB(GLint size, const GLuint *weights);
extern void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glVertexBlendARB(GLint count);
# 2542 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindBufferARB(GLenum target, GLuint buffer);
extern void glDeleteBuffersARB(GLsizei n, const GLuint *buffers);
extern void glGenBuffersARB(GLsizei n, GLuint *buffers);
extern GLboolean glIsBufferARB(GLuint buffer);
extern void glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);
extern void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);
extern void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data);
extern GLvoid *glMapBufferARB(GLenum target, GLenum access);
extern GLboolean glUnmapBufferARB(GLenum target);
extern void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params);
extern void glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid **params);
# 2582 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindProgramARB(GLenum target, GLuint program);
extern void glDeleteProgramsARB(GLsizei n, const GLuint *programs);
extern void glGenProgramsARB(GLsizei n, GLuint *programs);
extern GLboolean glIsProgramARB(GLuint program);
extern void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params);
extern void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);
extern void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params);
extern void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);
extern void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params);
extern void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params);

extern void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params);

extern void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params);
extern void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params);
extern void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string);
extern void glGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string);
extern void glGetProgramivARB(GLenum target, GLenum pname, GLint *params);
# 2614 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name);
extern void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name);
# 2666 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glVertexAttrib1dARB(GLuint index, GLdouble x);
extern void glVertexAttrib1dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib1fARB(GLuint index, GLfloat x);
extern void glVertexAttrib1fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib1sARB(GLuint index, GLshort x);
extern void glVertexAttrib1svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y);
extern void glVertexAttrib2dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y);
extern void glVertexAttrib2fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y);
extern void glVertexAttrib2svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void glVertexAttrib3dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void glVertexAttrib3fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z);
extern void glVertexAttrib3svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib4NbvARB(GLuint index, const GLbyte *v);
extern void glVertexAttrib4NivARB(GLuint index, const GLint *v);
extern void glVertexAttrib4NsvARB(GLuint index, const GLshort *v);
extern void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void glVertexAttrib4NubvARB(GLuint index, const GLubyte *v);
extern void glVertexAttrib4NuivARB(GLuint index, const GLuint *v);
extern void glVertexAttrib4NusvARB(GLuint index, const GLushort *v);
extern void glVertexAttrib4bvARB(GLuint index, const GLbyte *v);
extern void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertexAttrib4dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertexAttrib4fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib4ivARB(GLuint index, const GLint *v);
extern void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertexAttrib4svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib4ubvARB(GLuint index, const GLubyte *v);
extern void glVertexAttrib4uivARB(GLuint index, const GLuint *v);
extern void glVertexAttrib4usvARB(GLuint index, const GLushort *v);
extern void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
extern void glDisableVertexAttribArrayARB(GLuint index);
extern void glEnableVertexAttribArrayARB(GLuint index);
extern void glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid **pointer);
extern void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params);
extern void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params);
# 2731 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glWindowPos2dARB(GLdouble x, GLdouble y);
extern void glWindowPos2dvARB(const GLdouble *p);
extern void glWindowPos2fARB(GLfloat x, GLfloat y);
extern void glWindowPos2fvARB(const GLfloat *p);
extern void glWindowPos2iARB(GLint x, GLint y);
extern void glWindowPos2ivARB(const GLint *p);
extern void glWindowPos2sARB(GLshort x, GLshort y);
extern void glWindowPos2svARB(const GLshort *p);
extern void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z);
extern void glWindowPos3dvARB(const GLdouble *p);
extern void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z);
extern void glWindowPos3fvARB(const GLfloat *p);
extern void glWindowPos3iARB(GLint x, GLint y, GLint z);
extern void glWindowPos3ivARB(const GLint *p);
extern void glWindowPos3sARB(GLshort x, GLshort y, GLshort z);
extern void glWindowPos3svARB(const GLshort *p);
# 2756 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer);
extern GLint glGetUniformBufferSizeEXT(GLuint program, GLint location);
extern GLintptr glGetUniformOffsetEXT(GLuint program, GLint location);







extern void glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);







extern void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha);







extern void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);







extern void glBlendEquationEXT(GLenum mode);
# 2867 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar *label);
extern void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
# 2878 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glInsertEventMarkerEXT(GLsizei length, const char *marker);
extern void glPushGroupMarkerEXT(GLsizei length, const char *marker);
extern void glPopGroupMarkerEXT(void);







extern void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax);
# 2899 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
extern void glEnableIndexedEXT(GLenum target, GLuint index);
extern void glDisableIndexedEXT(GLenum target, GLuint index);
extern GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index);







extern void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
# 2922 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glFogCoordfEXT(GLfloat coord);
extern void glFogCoordfvEXT(const GLfloat *coord);
extern void glFogCoorddEXT(GLdouble coord);
extern void glFogCoorddvEXT(const GLdouble *coord);
extern void glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer);







extern void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);







extern void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
# 2966 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern GLboolean glIsRenderbufferEXT(GLuint renderbuffer);
extern void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer);
extern void glDeleteRenderbuffersEXT(GLsizei n, const GLuint *renderbuffers);
extern void glGenRenderbuffersEXT(GLsizei n, GLuint *renderbuffers);
extern void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint *params);
extern GLboolean glIsFramebufferEXT(GLuint framebuffer);
extern void glBindFramebufferEXT(GLenum target, GLuint framebuffer);
extern void glDeleteFramebuffersEXT(GLsizei n, const GLuint *framebuffers);
extern void glGenFramebuffersEXT(GLsizei n, GLuint *framebuffers);
extern GLenum glCheckFramebufferStatusEXT(GLenum target);
extern void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern void glGenerateMipmapEXT(GLenum target);
# 2992 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value);
extern void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level);
extern void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);







extern void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
# 3043 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glVertexAttribI1iEXT(GLuint index, GLint x);
extern void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y);
extern void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z);
extern void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void glVertexAttribI1uiEXT(GLuint index, GLuint x);
extern void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y);
extern void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z);
extern void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void glVertexAttribI1ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI2ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI3ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI4ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI1uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI2uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI3uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI4uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI4bvEXT(GLuint index, const GLbyte *v);
extern void glVertexAttribI4svEXT(GLuint index, const GLshort *v);
extern void glVertexAttribI4ubvEXT(GLuint index, const GLubyte *v);
extern void glVertexAttribI4usvEXT(GLuint index, const GLushort *v);
extern void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint *params);
extern void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint *params);
extern void glUniform1uiEXT(GLint location, GLuint v0);
extern void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1);
extern void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2);
extern void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern void glUniform1uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glUniform2uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glUniform3uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glUniform4uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glGetUniformuivEXT(GLuint program, GLint location, GLuint *params);
extern void glBindFragDataLocationEXT(GLuint program, GLuint colorNumber, const GLchar *name);
extern GLint glGetFragDataLocationEXT(GLuint program, const GLchar *name);
# 3111 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount);
# 3144 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glProvokingVertexEXT(GLenum mode);
# 3168 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue);
extern void glSecondaryColor3bvEXT(const GLbyte *v);
extern void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue);
extern void glSecondaryColor3dvEXT(const GLdouble *v);
extern void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue);
extern void glSecondaryColor3fvEXT(const GLfloat *v);
extern void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue);
extern void glSecondaryColor3ivEXT(const GLint *v);
extern void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue);
extern void glSecondaryColor3svEXT(const GLshort *v);
extern void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue);
extern void glSecondaryColor3ubvEXT(const GLubyte *v);
extern void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue);
extern void glSecondaryColor3uivEXT(const GLuint *v);
extern void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue);
extern void glSecondaryColor3usvEXT(const GLushort *v);
extern void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);







extern void glActiveStencilFaceEXT(GLenum face);
# 3225 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glClearColorIiEXT( GLint r, GLint g, GLint b, GLint a );
extern void glClearColorIuiEXT( GLuint r, GLuint g, GLuint b, GLuint a );
extern void glTexParameterIivEXT( GLenum target, GLenum pname, GLint *params );
extern void glTexParameterIuivEXT( GLenum target, GLenum pname, GLuint *params );
extern void glGetTexParameterIivEXT( GLenum target, GLenum pname, GLint *params);
extern void glGetTexParameterIuivEXT( GLenum target, GLenum pname, GLuint *params);
# 3257 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64EXT *params);
extern void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64EXT *params);
# 3272 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
extern void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer);
extern void glBeginTransformFeedbackEXT(GLenum primitiveMode);
extern void glEndTransformFeedbackEXT(void);
extern void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar* const *varyings, GLenum bufferMode);
extern void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
# 3287 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glGetIntegerIndexedvEXT(GLenum param, GLuint index, GLint *values);
extern void glGetBooleanIndexedvEXT(GLenum param, GLuint index, GLboolean *values);
# 3324 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glElementPointerAPPLE(GLenum type, const GLvoid *pointer);
extern void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count);
extern void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
extern void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
# 3343 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glGenFencesAPPLE(GLsizei n, GLuint *fences);
extern void glDeleteFencesAPPLE(GLsizei n, const GLuint *fences);
extern void glSetFenceAPPLE(GLuint fence);
extern GLboolean glIsFenceAPPLE(GLuint fence);
extern GLboolean glTestFenceAPPLE(GLuint fence);
extern void glFinishFenceAPPLE(GLuint fence);
extern GLboolean glTestObjectAPPLE(GLenum object, GLuint name);
extern void glFinishObjectAPPLE(GLenum object, GLuint name);
# 3359 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param);
extern void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size);
# 3370 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glFlushRenderAPPLE(void);
extern void glFinishRenderAPPLE(void);
extern void glSwapAPPLE(void);
# 3382 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option);
extern GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option);
extern void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint *params);
# 3393 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glTextureRangeAPPLE(GLenum target, GLsizei length, const GLvoid *pointer);
extern void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, GLvoid **params);
# 3405 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindVertexArrayAPPLE(GLuint id);
extern void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint *ids);
extern void glGenVertexArraysAPPLE(GLsizei n, GLuint *ids);
extern GLboolean glIsVertexArrayAPPLE(GLuint id);
# 3418 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glVertexArrayRangeAPPLE(GLsizei length, const GLvoid *pointer);
extern void glFlushVertexArrayRangeAPPLE(GLsizei length, const GLvoid *pointer);
extern void glVertexArrayParameteriAPPLE(GLenum pname, GLint param);
# 3429 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPointSizePointerAPPLE(GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glVertexPointSizefAPPLE(GLfloat size);
# 3444 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glEnableVertexAttribAPPLE(GLuint index, GLenum pname);
extern void glDisableVertexAttribAPPLE(GLuint index, GLenum pname);
extern GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname);
extern void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);







extern void glBlendEquationSeparateATI(GLenum equationRGB, GLenum equationAlpha);
# 3477 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
# 3497 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBeginConditionalRenderNV(GLuint id, GLenum mode);
extern void glEndConditionalRenderNV(void);
# 3507 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPointParameteriNV(GLenum pname, GLint param);
extern void glPointParameterivNV(GLenum pname, const GLint *params);
# 3558 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glTextureBarrierNV (void);
# 3727 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
}
# 44 "/System/Library/Frameworks/openGL.framework/Headers/gl.h" 2 3



extern "C" {
# 2378 "/System/Library/Frameworks/openGL.framework/Headers/gl.h" 3
extern void glAccum (GLenum op, GLfloat value);
extern void glAlphaFunc (GLenum func, GLclampf ref);
extern GLboolean glAreTexturesResident (GLsizei n, const GLuint *textures, GLboolean *residences);
extern void glArrayElement (GLint i);
extern void glBegin (GLenum mode);
extern void glBindTexture (GLenum target, GLuint texture);
extern void glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
extern void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glBlendEquation (GLenum mode);
extern void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
extern void glBlendFunc (GLenum sfactor, GLenum dfactor);
extern void glCallList (GLuint list);
extern void glCallLists (GLsizei n, GLenum type, const GLvoid *lists);
extern void glClear (GLbitfield mask);
extern void glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glClearDepth (GLclampd depth);
extern void glClearIndex (GLfloat c);
extern void glClearStencil (GLint s);
extern void glClipPlane (GLenum plane, const GLdouble *equation);
extern void glColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void glColor3bv (const GLbyte *v);
extern void glColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void glColor3dv (const GLdouble *v);
extern void glColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void glColor3fv (const GLfloat *v);
extern void glColor3i (GLint red, GLint green, GLint blue);
extern void glColor3iv (const GLint *v);
extern void glColor3s (GLshort red, GLshort green, GLshort blue);
extern void glColor3sv (const GLshort *v);
extern void glColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void glColor3ubv (const GLubyte *v);
extern void glColor3ui (GLuint red, GLuint green, GLuint blue);
extern void glColor3uiv (const GLuint *v);
extern void glColor3us (GLushort red, GLushort green, GLushort blue);
extern void glColor3usv (const GLushort *v);
extern void glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
extern void glColor4bv (const GLbyte *v);
extern void glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
extern void glColor4dv (const GLdouble *v);
extern void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void glColor4fv (const GLfloat *v);
extern void glColor4i (GLint red, GLint green, GLint blue, GLint alpha);
extern void glColor4iv (const GLint *v);
extern void glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha);
extern void glColor4sv (const GLshort *v);
extern void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
extern void glColor4ubv (const GLubyte *v);
extern void glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha);
extern void glColor4uiv (const GLuint *v);
extern void glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha);
extern void glColor4usv (const GLushort *v);
extern void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern void glColorMaterial (GLenum face, GLenum mode);
extern void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
extern void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
extern void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params);
extern void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glConvolutionParameteri (GLenum target, GLenum pname, GLint params);
extern void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
extern void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
extern void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCullFace (GLenum mode);
extern void glDeleteLists (GLuint list, GLsizei range);
extern void glDeleteTextures (GLsizei n, const GLuint *textures);
extern void glDepthFunc (GLenum func);
extern void glDepthMask (GLboolean flag);
extern void glDepthRange (GLclampd zNear, GLclampd zFar);
extern void glDisable (GLenum cap);
extern void glDisableClientState (GLenum array);
extern void glDrawArrays (GLenum mode, GLint first, GLsizei count);
extern void glDrawBuffer (GLenum mode);
extern void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
extern void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
extern void glEdgeFlag (GLboolean flag);
extern void glEdgeFlagPointer (GLsizei stride, const GLvoid *pointer);
extern void glEdgeFlagv (const GLboolean *flag);
extern void glEnable (GLenum cap);
extern void glEnableClientState (GLenum array);
extern void glEnd (void);
extern void glEndList (void);
extern void glEvalCoord1d (GLdouble u);
extern void glEvalCoord1dv (const GLdouble *u);
extern void glEvalCoord1f (GLfloat u);
extern void glEvalCoord1fv (const GLfloat *u);
extern void glEvalCoord2d (GLdouble u, GLdouble v);
extern void glEvalCoord2dv (const GLdouble *u);
extern void glEvalCoord2f (GLfloat u, GLfloat v);
extern void glEvalCoord2fv (const GLfloat *u);
extern void glEvalMesh1 (GLenum mode, GLint i1, GLint i2);
extern void glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
extern void glEvalPoint1 (GLint i);
extern void glEvalPoint2 (GLint i, GLint j);
extern void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer);
extern void glFinish (void);
extern void glFlush (void);
extern void glFogf (GLenum pname, GLfloat param);
extern void glFogfv (GLenum pname, const GLfloat *params);
extern void glFogi (GLenum pname, GLint param);
extern void glFogiv (GLenum pname, const GLint *params);
extern void glFrontFace (GLenum mode);
extern void glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern GLuint glGenLists (GLsizei range);
extern void glGenTextures (GLsizei n, GLuint *textures);
extern void glGetBooleanv (GLenum pname, GLboolean *params);
extern void glGetClipPlane (GLenum plane, GLdouble *equation);
extern void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table);
extern void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image);
extern void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetDoublev (GLenum pname, GLdouble *params);
extern GLenum glGetError (void);
extern void glGetFloatv (GLenum pname, GLfloat *params);
extern void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetIntegerv (GLenum pname, GLint *params);
extern void glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
extern void glGetLightiv (GLenum light, GLenum pname, GLint *params);
extern void glGetMapdv (GLenum target, GLenum query, GLdouble *v);
extern void glGetMapfv (GLenum target, GLenum query, GLfloat *v);
extern void glGetMapiv (GLenum target, GLenum query, GLint *v);
extern void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
extern void glGetMaterialiv (GLenum face, GLenum pname, GLint *params);
extern void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetPixelMapfv (GLenum map, GLfloat *values);
extern void glGetPixelMapuiv (GLenum map, GLuint *values);
extern void glGetPixelMapusv (GLenum map, GLushort *values);
extern void glGetPointerv (GLenum pname, GLvoid **params);
extern void glGetPolygonStipple (GLubyte *mask);
extern void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
extern const GLubyte *glGetString (GLenum name);
extern void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexEnviv (GLenum target, GLenum pname, GLint *params);
extern void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params);
extern void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params);
extern void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params);
extern void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
extern void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
extern void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
extern void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glHint (GLenum target, GLenum mode);
extern void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern void glIndexMask (GLuint mask);
extern void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glIndexd (GLdouble c);
extern void glIndexdv (const GLdouble *c);
extern void glIndexf (GLfloat c);
extern void glIndexfv (const GLfloat *c);
extern void glIndexi (GLint c);
extern void glIndexiv (const GLint *c);
extern void glIndexs (GLshort c);
extern void glIndexsv (const GLshort *c);
extern void glIndexub (GLubyte c);
extern void glIndexubv (const GLubyte *c);
extern void glInitNames (void);
extern void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer);
extern GLboolean glIsEnabled (GLenum cap);
extern GLboolean glIsList (GLuint list);
extern GLboolean glIsTexture (GLuint texture);
extern void glLightModelf (GLenum pname, GLfloat param);
extern void glLightModelfv (GLenum pname, const GLfloat *params);
extern void glLightModeli (GLenum pname, GLint param);
extern void glLightModeliv (GLenum pname, const GLint *params);
extern void glLightf (GLenum light, GLenum pname, GLfloat param);
extern void glLightfv (GLenum light, GLenum pname, const GLfloat *params);
extern void glLighti (GLenum light, GLenum pname, GLint param);
extern void glLightiv (GLenum light, GLenum pname, const GLint *params);
extern void glLineStipple (GLint factor, GLushort pattern);
extern void glLineWidth (GLfloat width);
extern void glListBase (GLuint base);
extern void glLoadIdentity (void);
extern void glLoadMatrixd (const GLdouble *m);
extern void glLoadMatrixf (const GLfloat *m);
extern void glLoadName (GLuint name);
extern void glLogicOp (GLenum opcode);
extern void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
extern void glMapGrid1d (GLint un, GLdouble u1, GLdouble u2);
extern void glMapGrid1f (GLint un, GLfloat u1, GLfloat u2);
extern void glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
extern void glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
extern void glMaterialf (GLenum face, GLenum pname, GLfloat param);
extern void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
extern void glMateriali (GLenum face, GLenum pname, GLint param);
extern void glMaterialiv (GLenum face, GLenum pname, const GLint *params);
extern void glMatrixMode (GLenum mode);
extern void glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
extern void glMultMatrixd (const GLdouble *m);
extern void glMultMatrixf (const GLfloat *m);
extern void glNewList (GLuint list, GLenum mode);
extern void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
extern void glNormal3bv (const GLbyte *v);
extern void glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz);
extern void glNormal3dv (const GLdouble *v);
extern void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
extern void glNormal3fv (const GLfloat *v);
extern void glNormal3i (GLint nx, GLint ny, GLint nz);
extern void glNormal3iv (const GLint *v);
extern void glNormal3s (GLshort nx, GLshort ny, GLshort nz);
extern void glNormal3sv (const GLshort *v);
extern void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern void glPassThrough (GLfloat token);
extern void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values);
extern void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values);
extern void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values);
extern void glPixelStoref (GLenum pname, GLfloat param);
extern void glPixelStorei (GLenum pname, GLint param);
extern void glPixelTransferf (GLenum pname, GLfloat param);
extern void glPixelTransferi (GLenum pname, GLint param);
extern void glPixelZoom (GLfloat xfactor, GLfloat yfactor);
extern void glPointSize (GLfloat size);
extern void glPolygonMode (GLenum face, GLenum mode);
extern void glPolygonOffset (GLfloat factor, GLfloat units);
extern void glPolygonStipple (const GLubyte *mask);
extern void glPopAttrib (void);
extern void glPopClientAttrib (void);
extern void glPopMatrix (void);
extern void glPopName (void);
extern void glPrioritizeTextures (GLsizei n, const GLuint *textures, const GLclampf *priorities);
extern void glPushAttrib (GLbitfield mask);
extern void glPushClientAttrib (GLbitfield mask);
extern void glPushMatrix (void);
extern void glPushName (GLuint name);
extern void glRasterPos2d (GLdouble x, GLdouble y);
extern void glRasterPos2dv (const GLdouble *v);
extern void glRasterPos2f (GLfloat x, GLfloat y);
extern void glRasterPos2fv (const GLfloat *v);
extern void glRasterPos2i (GLint x, GLint y);
extern void glRasterPos2iv (const GLint *v);
extern void glRasterPos2s (GLshort x, GLshort y);
extern void glRasterPos2sv (const GLshort *v);
extern void glRasterPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void glRasterPos3dv (const GLdouble *v);
extern void glRasterPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void glRasterPos3fv (const GLfloat *v);
extern void glRasterPos3i (GLint x, GLint y, GLint z);
extern void glRasterPos3iv (const GLint *v);
extern void glRasterPos3s (GLshort x, GLshort y, GLshort z);
extern void glRasterPos3sv (const GLshort *v);
extern void glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glRasterPos4dv (const GLdouble *v);
extern void glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glRasterPos4fv (const GLfloat *v);
extern void glRasterPos4i (GLint x, GLint y, GLint z, GLint w);
extern void glRasterPos4iv (const GLint *v);
extern void glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w);
extern void glRasterPos4sv (const GLshort *v);
extern void glReadBuffer (GLenum mode);
extern void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
extern void glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
extern void glRectdv (const GLdouble *v1, const GLdouble *v2);
extern void glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
extern void glRectfv (const GLfloat *v1, const GLfloat *v2);
extern void glRecti (GLint x1, GLint y1, GLint x2, GLint y2);
extern void glRectiv (const GLint *v1, const GLint *v2);
extern void glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
extern void glRectsv (const GLshort *v1, const GLshort *v2);
extern GLint glRenderMode (GLenum mode);
extern void glResetHistogram (GLenum target);
extern void glResetMinmax (GLenum target);
extern void glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
extern void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
extern void glScaled (GLdouble x, GLdouble y, GLdouble z);
extern void glScalef (GLfloat x, GLfloat y, GLfloat z);
extern void glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
extern void glSelectBuffer (GLsizei size, GLuint *buffer);
extern void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
extern void glShadeModel (GLenum mode);
extern void glStencilFunc (GLenum func, GLint ref, GLuint mask);
extern void glStencilMask (GLuint mask);
extern void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
extern void glTexCoord1d (GLdouble s);
extern void glTexCoord1dv (const GLdouble *v);
extern void glTexCoord1f (GLfloat s);
extern void glTexCoord1fv (const GLfloat *v);
extern void glTexCoord1i (GLint s);
extern void glTexCoord1iv (const GLint *v);
extern void glTexCoord1s (GLshort s);
extern void glTexCoord1sv (const GLshort *v);
extern void glTexCoord2d (GLdouble s, GLdouble t);
extern void glTexCoord2dv (const GLdouble *v);
extern void glTexCoord2f (GLfloat s, GLfloat t);
extern void glTexCoord2fv (const GLfloat *v);
extern void glTexCoord2i (GLint s, GLint t);
extern void glTexCoord2iv (const GLint *v);
extern void glTexCoord2s (GLshort s, GLshort t);
extern void glTexCoord2sv (const GLshort *v);
extern void glTexCoord3d (GLdouble s, GLdouble t, GLdouble r);
extern void glTexCoord3dv (const GLdouble *v);
extern void glTexCoord3f (GLfloat s, GLfloat t, GLfloat r);
extern void glTexCoord3fv (const GLfloat *v);
extern void glTexCoord3i (GLint s, GLint t, GLint r);
extern void glTexCoord3iv (const GLint *v);
extern void glTexCoord3s (GLshort s, GLshort t, GLshort r);
extern void glTexCoord3sv (const GLshort *v);
extern void glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glTexCoord4dv (const GLdouble *v);
extern void glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glTexCoord4fv (const GLfloat *v);
extern void glTexCoord4i (GLint s, GLint t, GLint r, GLint q);
extern void glTexCoord4iv (const GLint *v);
extern void glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q);
extern void glTexCoord4sv (const GLshort *v);
extern void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glTexEnvf (GLenum target, GLenum pname, GLfloat param);
extern void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexEnvi (GLenum target, GLenum pname, GLint param);
extern void glTexEnviv (GLenum target, GLenum pname, const GLint *params);
extern void glTexGend (GLenum coord, GLenum pname, GLdouble param);
extern void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params);
extern void glTexGenf (GLenum coord, GLenum pname, GLfloat param);
extern void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params);
extern void glTexGeni (GLenum coord, GLenum pname, GLint param);
extern void glTexGeniv (GLenum coord, GLenum pname, const GLint *params);
extern void glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
extern void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexParameteri (GLenum target, GLenum pname, GLint param);
extern void glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTranslated (GLdouble x, GLdouble y, GLdouble z);
extern void glTranslatef (GLfloat x, GLfloat y, GLfloat z);
extern void glVertex2d (GLdouble x, GLdouble y);
extern void glVertex2dv (const GLdouble *v);
extern void glVertex2f (GLfloat x, GLfloat y);
extern void glVertex2fv (const GLfloat *v);
extern void glVertex2i (GLint x, GLint y);
extern void glVertex2iv (const GLint *v);
extern void glVertex2s (GLshort x, GLshort y);
extern void glVertex2sv (const GLshort *v);
extern void glVertex3d (GLdouble x, GLdouble y, GLdouble z);
extern void glVertex3dv (const GLdouble *v);
extern void glVertex3f (GLfloat x, GLfloat y, GLfloat z);
extern void glVertex3fv (const GLfloat *v);
extern void glVertex3i (GLint x, GLint y, GLint z);
extern void glVertex3iv (const GLint *v);
extern void glVertex3s (GLshort x, GLshort y, GLshort z);
extern void glVertex3sv (const GLshort *v);
extern void glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertex4dv (const GLdouble *v);
extern void glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertex4fv (const GLfloat *v);
extern void glVertex4i (GLint x, GLint y, GLint z, GLint w);
extern void glVertex4iv (const GLint *v);
extern void glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertex4sv (const GLshort *v);
extern void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glViewport (GLint x, GLint y, GLsizei width, GLsizei height);

extern void glSampleCoverage (GLclampf value, GLboolean invert);

extern void glLoadTransposeMatrixf (const GLfloat *m);
extern void glLoadTransposeMatrixd (const GLdouble *m);
extern void glMultTransposeMatrixf (const GLfloat *m);
extern void glMultTransposeMatrixd (const GLdouble *m);

extern void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glGetCompressedTexImage (GLenum target, GLint lod, GLvoid *img);

extern void glActiveTexture (GLenum texture);
extern void glClientActiveTexture (GLenum texture);
extern void glMultiTexCoord1d (GLenum target, GLdouble s);
extern void glMultiTexCoord1dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord1f (GLenum target, GLfloat s);
extern void glMultiTexCoord1fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord1i (GLenum target, GLint s);
extern void glMultiTexCoord1iv (GLenum target, const GLint *v);
extern void glMultiTexCoord1s (GLenum target, GLshort s);
extern void glMultiTexCoord1sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t);
extern void glMultiTexCoord2dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t);
extern void glMultiTexCoord2fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord2i (GLenum target, GLint s, GLint t);
extern void glMultiTexCoord2iv (GLenum target, const GLint *v);
extern void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t);
extern void glMultiTexCoord2sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void glMultiTexCoord3dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void glMultiTexCoord3fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r);
extern void glMultiTexCoord3iv (GLenum target, const GLint *v);
extern void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r);
extern void glMultiTexCoord3sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glMultiTexCoord4dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glMultiTexCoord4fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void glMultiTexCoord4iv (GLenum target, const GLint *v);
extern void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void glMultiTexCoord4sv (GLenum target, const GLshort *v);

extern void glFogCoordf (GLfloat coord);
extern void glFogCoordfv (const GLfloat *coord);
extern void glFogCoordd (GLdouble coord);
extern void glFogCoorddv (const GLdouble *coord);
extern void glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer);

extern void glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void glSecondaryColor3bv (const GLbyte *v);
extern void glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void glSecondaryColor3dv (const GLdouble *v);
extern void glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void glSecondaryColor3fv (const GLfloat *v);
extern void glSecondaryColor3i (GLint red, GLint green, GLint blue);
extern void glSecondaryColor3iv (const GLint *v);
extern void glSecondaryColor3s (GLshort red, GLshort green, GLshort blue);
extern void glSecondaryColor3sv (const GLshort *v);
extern void glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void glSecondaryColor3ubv (const GLubyte *v);
extern void glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue);
extern void glSecondaryColor3uiv (const GLuint *v);
extern void glSecondaryColor3us (GLushort red, GLushort green, GLushort blue);
extern void glSecondaryColor3usv (const GLushort *v);
extern void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

extern void glPointParameterf (GLenum pname, GLfloat param);
extern void glPointParameterfv (GLenum pname, const GLfloat *params);
extern void glPointParameteri (GLenum pname, GLint param);
extern void glPointParameteriv (GLenum pname, const GLint *params);

extern void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

extern void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount);

extern void glWindowPos2d (GLdouble x, GLdouble y);
extern void glWindowPos2dv (const GLdouble *v);
extern void glWindowPos2f (GLfloat x, GLfloat y);
extern void glWindowPos2fv (const GLfloat *v);
extern void glWindowPos2i (GLint x, GLint y);
extern void glWindowPos2iv (const GLint *v);
extern void glWindowPos2s (GLshort x, GLshort y);
extern void glWindowPos2sv (const GLshort *v);
extern void glWindowPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void glWindowPos3dv (const GLdouble *v);
extern void glWindowPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void glWindowPos3fv (const GLfloat *v);
extern void glWindowPos3i (GLint x, GLint y, GLint z);
extern void glWindowPos3iv (const GLint *v);
extern void glWindowPos3s (GLshort x, GLshort y, GLshort z);
extern void glWindowPos3sv (const GLshort *v);

extern void glGenQueries (GLsizei n, GLuint *ids);
extern void glDeleteQueries (GLsizei n, const GLuint *ids);
extern GLboolean glIsQuery (GLuint id);
extern void glBeginQuery (GLenum target, GLuint id);
extern void glEndQuery (GLenum target);
extern void glGetQueryiv (GLenum target, GLenum pname, GLint *params);
extern void glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params);
extern void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params);

extern void glBindBuffer (GLenum target, GLuint buffer);
extern void glDeleteBuffers (GLsizei n, const GLuint *buffers);
extern void glGenBuffers (GLsizei n, GLuint *buffers);
extern GLboolean glIsBuffer (GLuint buffer);
extern void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
extern void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
extern void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data);
extern GLvoid *glMapBuffer (GLenum target, GLenum access);
extern GLboolean glUnmapBuffer (GLenum target);
extern void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetBufferPointerv (GLenum target, GLenum pname, GLvoid **params);

extern void glDrawBuffers (GLsizei n, const GLenum *bufs);
extern void glVertexAttrib1d (GLuint index, GLdouble x);
extern void glVertexAttrib1dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib1f (GLuint index, GLfloat x);
extern void glVertexAttrib1fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib1s (GLuint index, GLshort x);
extern void glVertexAttrib1sv (GLuint index, const GLshort *v);
extern void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y);
extern void glVertexAttrib2dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
extern void glVertexAttrib2fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib2s (GLuint index, GLshort x, GLshort y);
extern void glVertexAttrib2sv (GLuint index, const GLshort *v);
extern void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void glVertexAttrib3dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void glVertexAttrib3fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z);
extern void glVertexAttrib3sv (GLuint index, const GLshort *v);
extern void glVertexAttrib4Nbv (GLuint index, const GLbyte *v);
extern void glVertexAttrib4Niv (GLuint index, const GLint *v);
extern void glVertexAttrib4Nsv (GLuint index, const GLshort *v);
extern void glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void glVertexAttrib4Nubv (GLuint index, const GLubyte *v);
extern void glVertexAttrib4Nuiv (GLuint index, const GLuint *v);
extern void glVertexAttrib4Nusv (GLuint index, const GLushort *v);
extern void glVertexAttrib4bv (GLuint index, const GLbyte *v);
extern void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertexAttrib4dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertexAttrib4fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib4iv (GLuint index, const GLint *v);
extern void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertexAttrib4sv (GLuint index, const GLshort *v);
extern void glVertexAttrib4ubv (GLuint index, const GLubyte *v);
extern void glVertexAttrib4uiv (GLuint index, const GLuint *v);
extern void glVertexAttrib4usv (GLuint index, const GLushort *v);
extern void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
extern void glEnableVertexAttribArray (GLuint index);
extern void glDisableVertexAttribArray (GLuint index);
extern void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params);
extern void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
extern void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid **pointer);
extern void glDeleteShader (GLuint shader);
extern void glDetachShader (GLuint program, GLuint shader);
extern GLuint glCreateShader (GLenum type);
extern void glShaderSource (GLuint shader, GLsizei count, const GLchar* const *string, const GLint *length);
extern void glCompileShader (GLuint shader);
extern GLuint glCreateProgram (void);
extern void glAttachShader (GLuint program, GLuint shader);
extern void glLinkProgram (GLuint program);
extern void glUseProgram (GLuint program);
extern void glDeleteProgram (GLuint program);
extern void glValidateProgram (GLuint program);
extern void glUniform1f (GLint location, GLfloat v0);
extern void glUniform2f (GLint location, GLfloat v0, GLfloat v1);
extern void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void glUniform1i (GLint location, GLint v0);
extern void glUniform2i (GLint location, GLint v0, GLint v1);
extern void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
extern void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void glUniform1fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform2fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform3fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform4fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform1iv (GLint location, GLsizei count, const GLint *value);
extern void glUniform2iv (GLint location, GLsizei count, const GLint *value);
extern void glUniform3iv (GLint location, GLsizei count, const GLint *value);
extern void glUniform4iv (GLint location, GLsizei count, const GLint *value);
extern void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern GLboolean glIsShader (GLuint shader);
extern GLboolean glIsProgram (GLuint program);
extern void glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
extern void glGetProgramiv (GLuint program, GLenum pname, GLint *params);
extern void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
extern void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern GLint glGetUniformLocation (GLuint program, const GLchar *name);
extern void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern void glGetUniformfv (GLuint program, GLint location, GLfloat *params);
extern void glGetUniformiv (GLuint program, GLint location, GLint *params);
extern void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
extern void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name);
extern void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern GLint glGetAttribLocation (GLuint program, const GLchar *name);
extern void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
extern void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
extern void glStencilMaskSeparate (GLenum face, GLuint mask);

extern void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);





}
# 7 "main.cpp" 2
# 1 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 1 3
# 59 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/OpenGLAvailability.h" 1 3
# 60 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 2 3
# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/gl.h" 1 3
# 61 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 2 3
# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/glu.h" 1 3
# 12 "/System/Library/Frameworks/OpenGL.framework/Headers/glu.h" 3
extern "C" {
# 219 "/System/Library/Frameworks/OpenGL.framework/Headers/glu.h" 3
class GLUnurbs;
class GLUquadric;
class GLUtesselator;

typedef class GLUnurbs GLUnurbsObj __attribute__((deprecated));
typedef class GLUquadric GLUquadricObj __attribute__((deprecated));
typedef class GLUtesselator GLUtesselatorObj __attribute__((deprecated));
typedef class GLUtesselator GLUtriangulatorObj __attribute__((deprecated));
# 240 "/System/Library/Frameworks/OpenGL.framework/Headers/glu.h" 3
extern void gluBeginCurve (GLUnurbs* nurb) __attribute__((deprecated));
extern void gluBeginPolygon (GLUtesselator* tess) __attribute__((deprecated));
extern void gluBeginSurface (GLUnurbs* nurb) __attribute__((deprecated));
extern void gluBeginTrim (GLUnurbs* nurb) __attribute__((deprecated));
extern GLint gluBuild1DMipmapLevels (GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data) __attribute__((deprecated));
extern GLint gluBuild1DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void *data) __attribute__((deprecated));
extern GLint gluBuild2DMipmapLevels (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data) __attribute__((deprecated));
extern GLint gluBuild2DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data) __attribute__((deprecated));
extern GLint gluBuild3DMipmapLevels (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data) __attribute__((deprecated));
extern GLint gluBuild3DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) __attribute__((deprecated));
extern GLboolean gluCheckExtension (const GLubyte *extName, const GLubyte *extString) __attribute__((deprecated));
extern void gluCylinder (GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks) __attribute__((deprecated));
extern void gluDeleteNurbsRenderer (GLUnurbs* nurb) __attribute__((deprecated));
extern void gluDeleteQuadric (GLUquadric* quad) __attribute__((deprecated));
extern void gluDeleteTess (GLUtesselator* tess) __attribute__((deprecated));
extern void gluDisk (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops) __attribute__((deprecated));
extern void gluEndCurve (GLUnurbs* nurb) __attribute__((deprecated));
extern void gluEndPolygon (GLUtesselator* tess) __attribute__((deprecated));
extern void gluEndSurface (GLUnurbs* nurb) __attribute__((deprecated));
extern void gluEndTrim (GLUnurbs* nurb) __attribute__((deprecated));
extern const GLubyte * gluErrorString (GLenum error) __attribute__((deprecated));
extern void gluGetNurbsProperty (GLUnurbs* nurb, GLenum property, GLfloat* data) __attribute__((deprecated));
extern const GLubyte * gluGetString (GLenum name) __attribute__((deprecated));
extern void gluGetTessProperty (GLUtesselator* tess, GLenum which, GLdouble* data) __attribute__((deprecated));
extern void gluLoadSamplingMatrices (GLUnurbs* nurb, const GLfloat *model, const GLfloat *perspective, const GLint *view) __attribute__((deprecated));
extern void gluLookAt (GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ) __attribute__((deprecated));
extern GLUnurbs* gluNewNurbsRenderer (void) __attribute__((deprecated));
extern GLUquadric* gluNewQuadric (void) __attribute__((deprecated));
extern GLUtesselator* gluNewTess (void) __attribute__((deprecated));
extern void gluNextContour (GLUtesselator* tess, GLenum type) __attribute__((deprecated));
extern void gluNurbsCallback (GLUnurbs* nurb, GLenum which, GLvoid (*CallBackFunc)()) __attribute__((deprecated));
extern void gluNurbsCallbackData (GLUnurbs* nurb, GLvoid* userData) __attribute__((deprecated));
extern void gluNurbsCallbackDataEXT (GLUnurbs* nurb, GLvoid* userData) __attribute__((deprecated));
extern void gluNurbsCurve (GLUnurbs* nurb, GLint knotCount, GLfloat *knots, GLint stride, GLfloat *control, GLint order, GLenum type) __attribute__((deprecated));
extern void gluNurbsProperty (GLUnurbs* nurb, GLenum property, GLfloat value) __attribute__((deprecated));
extern void gluNurbsSurface (GLUnurbs* nurb, GLint sKnotCount, GLfloat* sKnots, GLint tKnotCount, GLfloat* tKnots, GLint sStride, GLint tStride, GLfloat* control, GLint sOrder, GLint tOrder, GLenum type) __attribute__((deprecated));
extern void gluOrtho2D (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top) __attribute__((deprecated));
extern void gluPartialDisk (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep) __attribute__((deprecated));
extern void gluPerspective (GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar) __attribute__((deprecated));
extern void gluPickMatrix (GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport) __attribute__((deprecated));
extern GLint gluProject (GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ) __attribute__((deprecated));
extern void gluPwlCurve (GLUnurbs* nurb, GLint count, GLfloat* data, GLint stride, GLenum type) __attribute__((deprecated));
extern void gluQuadricCallback (GLUquadric* quad, GLenum which, GLvoid (*CallBackFunc)()) __attribute__((deprecated));
extern void gluQuadricDrawStyle (GLUquadric* quad, GLenum draw) __attribute__((deprecated));
extern void gluQuadricNormals (GLUquadric* quad, GLenum normal) __attribute__((deprecated));
extern void gluQuadricOrientation (GLUquadric* quad, GLenum orientation) __attribute__((deprecated));
extern void gluQuadricTexture (GLUquadric* quad, GLboolean texture) __attribute__((deprecated));
extern GLint gluScaleImage (GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut) __attribute__((deprecated));
extern void gluSphere (GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks) __attribute__((deprecated));
extern void gluTessBeginContour (GLUtesselator* tess) __attribute__((deprecated));
extern void gluTessBeginPolygon (GLUtesselator* tess, GLvoid* data) __attribute__((deprecated));
extern void gluTessCallback (GLUtesselator* tess, GLenum which, GLvoid (*CallBackFunc)()) __attribute__((deprecated));
extern void gluTessEndContour (GLUtesselator* tess) __attribute__((deprecated));
extern void gluTessEndPolygon (GLUtesselator* tess) __attribute__((deprecated));
extern void gluTessNormal (GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ) __attribute__((deprecated));
extern void gluTessProperty (GLUtesselator* tess, GLenum which, GLdouble data) __attribute__((deprecated));
extern void gluTessVertex (GLUtesselator* tess, GLdouble *location, GLvoid* data) __attribute__((deprecated));
extern GLint gluUnProject (GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ) __attribute__((deprecated));
extern GLint gluUnProject4 (GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble nearPlane, GLdouble farPlane, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW) __attribute__((deprecated));


}
# 62 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 2 3
# 75 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern "C" {
# 268 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void *glutStrokeRoman;
extern void *glutStrokeMonoRoman;






extern void *glutBitmap9By15;
extern void *glutBitmap8By13;
extern void *glutBitmapTimesRoman10;
extern void *glutBitmapTimesRoman24;
extern void *glutBitmapHelvetica10;
extern void *glutBitmapHelvetica12;
extern void *glutBitmapHelvetica18;
# 431 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void glutInit(int *argcp, char **argv) __attribute__((deprecated));
extern void glutInitDisplayMode(unsigned int mode) __attribute__((deprecated));

extern void glutInitDisplayString(const char *string) __attribute__((deprecated));

extern void glutInitWindowPosition(int x, int y) __attribute__((deprecated));
extern void glutInitWindowSize(int width, int height) __attribute__((deprecated));
extern void glutMainLoop(void) __attribute__((deprecated));


extern int glutCreateWindow(const char *title) __attribute__((deprecated));
extern int glutCreateSubWindow(int win, int x, int y, int width, int height) __attribute__((deprecated));
extern void glutDestroyWindow(int win) __attribute__((deprecated));
extern void glutPostRedisplay(void) __attribute__((deprecated));

extern void glutPostWindowRedisplay(int win) __attribute__((deprecated));

extern void glutSwapBuffers(void) __attribute__((deprecated));
extern int glutGetWindow(void) __attribute__((deprecated));
extern void glutSetWindow(int win) __attribute__((deprecated));
extern void glutSetWindowTitle(const char *title) __attribute__((deprecated));
extern void glutSetIconTitle(const char *title) __attribute__((deprecated));
extern void glutPositionWindow(int x, int y) __attribute__((deprecated));
extern void glutReshapeWindow(int width, int height) __attribute__((deprecated));
extern void glutPopWindow(void) __attribute__((deprecated));
extern void glutPushWindow(void) __attribute__((deprecated));
extern void glutIconifyWindow(void) __attribute__((deprecated));
extern void glutShowWindow(void) __attribute__((deprecated));
extern void glutHideWindow(void) __attribute__((deprecated));

extern void glutFullScreen(void) __attribute__((deprecated));
extern void glutSetCursor(int cursor) __attribute__((deprecated));

extern void glutWarpPointer(int x, int y) __attribute__((deprecated));





extern void glutSurfaceTexture (GLenum target, GLenum internalformat, int surfacewin) __attribute__((deprecated));



extern void glutWMCloseFunc(void (*func)(void)) __attribute__((deprecated));
extern void glutCheckLoop(void) __attribute__((deprecated));




extern void glutEstablishOverlay(void) __attribute__((deprecated));
extern void glutRemoveOverlay(void) __attribute__((deprecated));
extern void glutUseLayer(GLenum layer) __attribute__((deprecated));
extern void glutPostOverlayRedisplay(void) __attribute__((deprecated));

extern void glutPostWindowOverlayRedisplay(int win) __attribute__((deprecated));

extern void glutShowOverlay(void) __attribute__((deprecated));
extern void glutHideOverlay(void) __attribute__((deprecated));



extern int glutCreateMenu(void (*)(int)) __attribute__((deprecated));
extern void glutDestroyMenu(int menu) __attribute__((deprecated));
extern int glutGetMenu(void) __attribute__((deprecated));
extern void glutSetMenu(int menu) __attribute__((deprecated));
extern void glutAddMenuEntry(const char *label, int value) __attribute__((deprecated));
extern void glutAddSubMenu(const char *label, int submenu) __attribute__((deprecated));
extern void glutChangeToMenuEntry(int item, const char *label, int value) __attribute__((deprecated));
extern void glutChangeToSubMenu(int item, const char *label, int submenu) __attribute__((deprecated));
extern void glutRemoveMenuItem(int item) __attribute__((deprecated));
extern void glutAttachMenu(int button) __attribute__((deprecated));
extern void glutDetachMenu(int button) __attribute__((deprecated));


extern void glutDisplayFunc(void (*func)(void)) __attribute__((deprecated));
extern void glutReshapeFunc(void (*func)(int width, int height)) __attribute__((deprecated));
extern void glutKeyboardFunc(void (*func)(unsigned char key, int x, int y)) __attribute__((deprecated));
extern void glutMouseFunc(void (*func)(int button, int state, int x, int y)) __attribute__((deprecated));
extern void glutMotionFunc(void (*func)(int x, int y)) __attribute__((deprecated));
extern void glutPassiveMotionFunc(void (*func)(int x, int y)) __attribute__((deprecated));
extern void glutEntryFunc(void (*func)(int state)) __attribute__((deprecated));
extern void glutVisibilityFunc(void (*func)(int state)) __attribute__((deprecated));
extern void glutIdleFunc(void (*func)(void)) __attribute__((deprecated));
extern void glutTimerFunc(unsigned int millis, void (*func)(int value), int value) __attribute__((deprecated));
extern void glutMenuStateFunc(void (*func)(int state)) __attribute__((deprecated));

extern void glutSpecialFunc(void (*func)(int key, int x, int y)) __attribute__((deprecated));
extern void glutSpaceballMotionFunc(void (*func)(int x, int y, int z)) __attribute__((deprecated));
extern void glutSpaceballRotateFunc(void (*func)(int x, int y, int z)) __attribute__((deprecated));
extern void glutSpaceballButtonFunc(void (*func)(int button, int state)) __attribute__((deprecated));
extern void glutButtonBoxFunc(void (*func)(int button, int state)) __attribute__((deprecated));
extern void glutDialsFunc(void (*func)(int dial, int value)) __attribute__((deprecated));
extern void glutTabletMotionFunc(void (*func)(int x, int y)) __attribute__((deprecated));
extern void glutTabletButtonFunc(void (*func)(int button, int state, int x, int y)) __attribute__((deprecated));

extern void glutMenuStatusFunc(void (*func)(int status, int x, int y)) __attribute__((deprecated));
extern void glutOverlayDisplayFunc(void (*func)(void)) __attribute__((deprecated));

extern void glutWindowStatusFunc(void (*func)(int state)) __attribute__((deprecated));


extern void glutKeyboardUpFunc(void (*func)(unsigned char key, int x, int y)) __attribute__((deprecated));
extern void glutSpecialUpFunc(void (*func)(int key, int x, int y)) __attribute__((deprecated));
extern void glutJoystickFunc(void (*func)(unsigned int buttonMask, int x, int y, int z), int pollInterval) __attribute__((deprecated));





extern void glutSetColor(int, GLfloat red, GLfloat green, GLfloat blue) __attribute__((deprecated));
extern GLfloat glutGetColor(int ndx, int component) __attribute__((deprecated));
extern void glutCopyColormap(int win) __attribute__((deprecated));


extern int glutGet(GLenum type) __attribute__((deprecated));
extern int glutDeviceGet(GLenum type) __attribute__((deprecated));


extern int glutExtensionSupported(const char *name) __attribute__((deprecated));


extern int glutGetModifiers(void) __attribute__((deprecated));
extern int glutLayerGet(GLenum type) __attribute__((deprecated));


extern void * glutGetProcAddress(const char *procName) __attribute__((deprecated));



extern void glutBitmapCharacter(void *font, int character) __attribute__((deprecated));
extern int glutBitmapWidth(void *font, int character) __attribute__((deprecated));
extern void glutStrokeCharacter(void *font, int character) __attribute__((deprecated));
extern int glutStrokeWidth(void *font, int character) __attribute__((deprecated));

extern int glutBitmapLength(void *font, const unsigned char *string) __attribute__((deprecated));
extern int glutStrokeLength(void *font, const unsigned char *string) __attribute__((deprecated));



extern void glutWireSphere(GLdouble radius, GLint slices, GLint stacks) __attribute__((deprecated));
extern void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks) __attribute__((deprecated));
extern void glutWireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks) __attribute__((deprecated));
extern void glutSolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks) __attribute__((deprecated));
extern void glutWireCube(GLdouble size) __attribute__((deprecated));
extern void glutSolidCube(GLdouble size) __attribute__((deprecated));
extern void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings) __attribute__((deprecated));
extern void glutSolidTorus(GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings) __attribute__((deprecated));
extern void glutWireDodecahedron(void) __attribute__((deprecated));
extern void glutSolidDodecahedron(void) __attribute__((deprecated));
extern void glutWireTeapot(GLdouble size) __attribute__((deprecated));
extern void glutSolidTeapot(GLdouble size) __attribute__((deprecated));
extern void glutWireOctahedron(void) __attribute__((deprecated));
extern void glutSolidOctahedron(void) __attribute__((deprecated));
extern void glutWireTetrahedron(void) __attribute__((deprecated));
extern void glutSolidTetrahedron(void) __attribute__((deprecated));
extern void glutWireIcosahedron(void) __attribute__((deprecated));
extern void glutSolidIcosahedron(void) __attribute__((deprecated));



extern int glutVideoResizeGet(GLenum param) __attribute__((deprecated));
extern void glutSetupVideoResizing(void) __attribute__((deprecated));
extern void glutStopVideoResizing(void) __attribute__((deprecated));
extern void glutVideoResize(int x, int y, int width, int height) __attribute__((deprecated));
extern void glutVideoPan(int x, int y, int width, int height) __attribute__((deprecated));


extern void glutReportErrors(void) __attribute__((deprecated));
# 614 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void glutIgnoreKeyRepeat(int ignore) __attribute__((deprecated));
extern void glutSetKeyRepeat(int repeatMode) __attribute__((deprecated));
extern void glutForceJoystickFunc(void) __attribute__((deprecated));
# 628 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void glutGameModeString(const char *string) __attribute__((deprecated));
extern int glutEnterGameMode(void) __attribute__((deprecated));
extern void glutLeaveGameMode(void) __attribute__((deprecated));
extern int glutGameModeGet(GLenum mode) __attribute__((deprecated));



}
# 8 "main.cpp" 2
# 1 "visuals.h" 1
# 11 "visuals.h"
using namespace std;

typedef struct point
{
    double x;
    double y;
    double z;
}point;

typedef struct face
{
    int vtx[3];
}face;

typedef struct model
{
    point *obj_points;
    face *obj_faces;
    int vertices;
    int faces;
}model;

void star_pos();
void sun(float r);
void star(int i);
void starposition();
void Render();
void Resize(int w, int h);
int Load();
void Setup();
void Idle();
void DisplayModel(model md);
void DestroyModel();
void Keyboard(unsigned char key,int x,int y);
void SpecialKeys(int key,int x,int y);
# 9 "main.cpp" 2

int main(int argc, char * argv[]) {
    srand (time(__null));
    glutInit(&argc, argv);
    glutInitDisplayMode(0|2);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(30,30);
    glutCreateWindow("SolarSystem");
    star_pos();
    Setup();
    Load();
    glutDisplayFunc(Render);
    glutReshapeFunc(Resize);
    glutIdleFunc(Idle);
    glutKeyboardFunc(Keyboard);
    glutSpecialFunc(SpecialKeys);
    glutMainLoop();
    DestroyModel();
    return 0;

}
