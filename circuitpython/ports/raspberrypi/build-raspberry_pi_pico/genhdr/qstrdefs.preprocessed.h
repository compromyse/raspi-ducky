# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 29 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 45 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 30 "./mpconfigport.h"
# 1 "sdk/src/rp2040/hardware_regs/include/hardware/platform_defs.h" 1 3 4
# 31 "./mpconfigport.h" 2
# 44 "./mpconfigport.h"
# 1 "../../py/circuitpy_mpconfig.h" 1
# 34 "../../py/circuitpy_mpconfig.h"
# 1 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h" 1 3 4
# 34 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h" 3 4

# 34 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 35 "../../py/circuitpy_mpconfig.h" 2
# 1 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdatomic.h" 1 3 4
# 29 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdatomic.h" 3 4
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;


typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic long unsigned int atomic_char32_t;
typedef _Atomic unsigned int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic long int atomic_int_least32_t;
typedef _Atomic long unsigned int atomic_uint_least32_t;
typedef _Atomic long long int atomic_int_least64_t;
typedef _Atomic long long unsigned int atomic_uint_least64_t;
typedef _Atomic int atomic_int_fast8_t;
typedef _Atomic unsigned int atomic_uint_fast8_t;
typedef _Atomic int atomic_int_fast16_t;
typedef _Atomic unsigned int atomic_uint_fast16_t;
typedef _Atomic int atomic_int_fast32_t;
typedef _Atomic unsigned int atomic_uint_fast32_t;
typedef _Atomic long long int atomic_int_fast64_t;
typedef _Atomic long long unsigned int atomic_uint_fast64_t;
typedef _Atomic int atomic_intptr_t;
typedef _Atomic unsigned int atomic_uintptr_t;
typedef _Atomic unsigned int atomic_size_t;
typedef _Atomic int atomic_ptrdiff_t;
typedef _Atomic long long int atomic_intmax_t;
typedef _Atomic long long unsigned int atomic_uintmax_t;
# 92 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdatomic.h" 3 4
extern void atomic_thread_fence (memory_order);

extern void atomic_signal_fence (memory_order);
# 218 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stdatomic.h" 3 4
typedef _Atomic struct
{

  _Bool __val;



} atomic_flag;




extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);


extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);



extern void atomic_flag_clear (volatile atomic_flag *);

extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);
# 36 "../../py/circuitpy_mpconfig.h" 2
# 52 "../../py/circuitpy_mpconfig.h"

# 52 "../../py/circuitpy_mpconfig.h"
extern void common_hal_mcu_disable_interrupts(void);
extern void common_hal_mcu_enable_interrupts(void);
# 182 "../../py/circuitpy_mpconfig.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;


_Static_assert(sizeof(mp_int_t) == sizeof(void *));
_Static_assert(sizeof(mp_uint_t) == sizeof(void *));

typedef long mp_off_t;
# 208 "../../py/circuitpy_mpconfig.h"
# 1 "boards/raspberry_pi_pico/mpconfigboard.h" 1
# 209 "../../py/circuitpy_mpconfig.h" 2
# 337 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t nvm_module;
# 410 "../../py/circuitpy_mpconfig.h"
# 1 "/usr/include/newlib/alloca.h" 1 3
# 10 "/usr/include/newlib/alloca.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 10 "/usr/include/newlib/_ansi.h" 3
# 1 "/usr/include/newlib/newlib.h" 1 3
# 14 "/usr/include/newlib/newlib.h" 3
# 1 "/usr/include/newlib/_newlib_version.h" 1 3
# 15 "/usr/include/newlib/newlib.h" 2 3
# 11 "/usr/include/newlib/_ansi.h" 2 3
# 1 "/usr/include/newlib/sys/config.h" 1 3



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3
# 5 "/usr/include/newlib/sys/config.h" 2 3
# 1 "/usr/include/newlib/sys/features.h" 1 3
# 6 "/usr/include/newlib/sys/config.h" 2 3
# 12 "/usr/include/newlib/_ansi.h" 2 3
# 11 "/usr/include/newlib/alloca.h" 2 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 209 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 321 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 415 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
} max_align_t;
# 15 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 24 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 350 "/usr/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/usr/include/newlib/sys/_types.h" 2 3


# 1 "/usr/include/newlib/machine/_types.h" 1 3






# 1 "/usr/include/newlib/machine/_default_types.h" 1 3
# 41 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 8 "/usr/include/newlib/machine/_types.h" 2 3
# 28 "/usr/include/newlib/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/usr/include/newlib/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/usr/include/newlib/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/usr/include/newlib/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 34 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3
# 11 "/usr/include/newlib/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 35 "/usr/include/newlib/sys/reent.h" 2 3
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 122 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 186 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 324 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 613 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 819 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/include/newlib/alloca.h" 2 3
# 411 "../../py/circuitpy_mpconfig.h" 2



# 1 "../../supervisor/flash_root_pointers.h" 1
# 32 "../../supervisor/flash_root_pointers.h"
# 1 "./supervisor/internal_flash_root_pointers.h" 1
# 33 "../../supervisor/flash_root_pointers.h" 2
# 415 "../../py/circuitpy_mpconfig.h" 2



# 417 "../../py/circuitpy_mpconfig.h"
struct _supervisor_allocation_node;
# 432 "../../py/circuitpy_mpconfig.h"
void supervisor_run_background_tasks_if_tick(void);
# 45 "./mpconfigport.h" 2
# 46 "../../py/mpconfig.h" 2
# 799 "../../py/mpconfig.h"
typedef float mp_float_t;
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (1))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)


Q(.frozen)



Q(pystack exhausted)


Q( )

Q(%#o)

Q(%#x)

Q(*)

Q(*)

Q(.frozen)

Q(.frozen)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/lib)

Q(<dictcomp>)

Q(<dictcomp>)

Q(<genexpr>)

Q(<genexpr>)

Q(<lambda>)

Q(<lambda>)

Q(<listcomp>)

Q(<listcomp>)

Q(<module>)

Q(<module>)

Q(<setcomp>)

Q(<setcomp>)

Q(<string>)

Q(A0)

Q(A1)

Q(A2)

Q(A3)

Q(AES)

Q(AES)

Q(AES)

Q(AUTO_RELOAD)

Q(AUTO_RELOAD)

Q(Adapter)

Q(Adapter)

Q(Address)

Q(Address)

Q(AlphaFunc)

Q(AnalogIn)

Q(AnalogIn)

Q(AnalogOut)

Q(AnalogOut)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(Atkinson)

Q(Atkinson)

Q(Attribute)

Q(Attribute)

Q(AttributeError)

Q(AttributeError)

Q(BGR)

Q(BGR555)

Q(BGR555)

Q(BGR555_SWAPPED)

Q(BGR555_SWAPPED)

Q(BGR565)

Q(BGR565)

Q(BGR565_SWAPPED)

Q(BGR565_SWAPPED)

Q(BOOTLOADER)

Q(BOOTLOADER)

Q(BROADCAST)

Q(BROWNOUT)

Q(BROWNOUT)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(Begin)

Q(Bitmap)

Q(Bitmap)

Q(BitmapExtFormat)

Q(BitmapHandle)

Q(BitmapLayout)

Q(BitmapLayoutH)

Q(BitmapSize)

Q(BitmapSizeH)

Q(BitmapSource)

Q(BitmapSwizzle)

Q(BitmapTransformA)

Q(BitmapTransformB)

Q(BitmapTransformC)

Q(BitmapTransformD)

Q(BitmapTransformE)

Q(BitmapTransformF)

Q(BlendFunc)

Q(BluetoothError)

Q(BluetoothError)

Q(BrokenPipeError)

Q(BrokenPipeError)

Q(BuiltinFont)

Q(BuiltinFont)

Q(ByteArray)

Q(ByteArray)

Q(BytesIO)

Q(BytesIO)

Q(C)

Q(CONSUMER_CONTROL)

Q(Call)

Q(CancelledError)

Q(Cell)

Q(Characteristic)

Q(Characteristic)

Q(CharacteristicBuffer)

Q(CharacteristicBuffer)

Q(Circle)

Q(Circle)

Q(Clear)

Q(ClearColorA)

Q(ClearColorRGB)

Q(ClearStencil)

Q(ClearTag)

Q(ColorA)

Q(ColorConverter)

Q(ColorConverter)

Q(ColorMask)

Q(ColorRGB)

Q(ColorSpace)

Q(Colorspace)

Q(Connection)

Q(Connection)

Q(ConnectionError)

Q(ConnectionError)

Q(Counter)

Q(Counter)

Q(DEEP_SLEEP_ALARM)

Q(DEEP_SLEEP_ALARM)

Q(DOWN)

Q(DOWN)

Q(DeepSleepRequest)

Q(Descriptor)

Q(Descriptor)

Q(Device)

Q(Device)

Q(DigitalInOut)

Q(DigitalInOut)

Q(Direction)

Q(Direction)

Q(Direction)

Q(Display)

Q(Display)

Q(Display)

Q(DitherAlgorithm)

Q(DitherAlgorithm)

Q(DriveMode)

Q(DriveMode)

Q(DriveMode)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(ENCRYPT_NO_MITM)

Q(ENCRYPT_WITH_MITM)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(EPaperDisplay)

Q(EPaperDisplay)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(EVEN)

Q(EVEN)

Q(EVEN_BYTES)

Q(EVEN_BYTES)

Q(EVERY_BYTE)

Q(EVERY_BYTE)

Q(Edge)

Q(Edge)

Q(Ellipsis)

Q(Ellipsis)

Q(End)

Q(Event)

Q(Event)

Q(EventQueue)

Q(EventQueue)

Q(Exception)

Q(Exception)

Q(ExtType)

Q(ExtType)

Q(FALL)

Q(FALL)

Q(FONT)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(FloydStenberg)

Q(FloydStenberg)

Q(FourWire)

Q(FourWire)

Q(FramebufferDisplay)

Q(FramebufferDisplay)

Q(GP0)

Q(GP1)

Q(GP10)

Q(GP11)

Q(GP12)

Q(GP13)

Q(GP14)

Q(GP15)

Q(GP16)

Q(GP17)

Q(GP18)

Q(GP19)

Q(GP2)

Q(GP20)

Q(GP21)

Q(GP22)

Q(GP23)

Q(GP24)

Q(GP25)

Q(GP26)

Q(GP26_A0)

Q(GP27)

Q(GP27_A1)

Q(GP28)

Q(GP28_A2)

Q(GP3)

Q(GP4)

Q(GP5)

Q(GP6)

Q(GP7)

Q(GP8)

Q(GP9)

Q(GPIO0)

Q(GPIO1)

Q(GPIO10)

Q(GPIO11)

Q(GPIO12)

Q(GPIO13)

Q(GPIO14)

Q(GPIO15)

Q(GPIO16)

Q(GPIO17)

Q(GPIO18)

Q(GPIO19)

Q(GPIO2)

Q(GPIO20)

Q(GPIO21)

Q(GPIO22)

Q(GPIO23)

Q(GPIO24)

Q(GPIO25)

Q(GPIO26)

Q(GPIO27)

Q(GPIO28)

Q(GPIO29)

Q(GPIO3)

Q(GPIO4)

Q(GPIO5)

Q(GPIO6)

Q(GPIO7)

Q(GPIO8)

Q(GPIO9)

Q(GeneratorExit)

Q(GeneratorExit)

Q(GifWriter)

Q(GifWriter)

Q(GifWriter)

Q(Glyph)

Q(Glyph)

Q(Group)

Q(Group)

Q(Group)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2CDevice)

Q(I2CDevice)

Q(I2CDisplay)

Q(I2CDisplay)

Q(I2SOut)

Q(I2SOut)

Q(INDICATE)

Q(INPUT)

Q(INPUT)

Q(IV)

Q(ImportError)

Q(ImportError)

Q(IncrementalEncoder)

Q(IncrementalEncoder)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(Jump)

Q(KEYBOARD)

Q(KeyError)

Q(KeyError)

Q(KeyMatrix)

Q(KeyMatrix)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(Keys)

Q(Keys)

Q(L8)

Q(L8)

Q(LED)

Q(LESC_ENCRYPT_WITH_MITM)

Q(LineWidth)

Q(LookupError)

Q(LookupError)

Q(M)

Q(MISO)

Q(MISO)

Q(MODE_CBC)

Q(MODE_CTR)

Q(MODE_ECB)

Q(MOSI)

Q(MOSI)

Q(MOUSE)

Q(MP3Decoder)

Q(MP3Decoder)

Q(Macro)

Q(MemoryError)

Q(MemoryError)

Q(MidiTrack)

Q(MidiTrack)

Q(Mixer)

Q(Mixer)

Q(MixerVoice)

Q(MpyError)

Q(MpyError)

Q(NORMAL)

Q(NORMAL)

Q(NOTIFY)

Q(NO_ACCESS)

Q(NaN)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(Nop)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ODD)

Q(ODD)

Q(ODD_BYTES)

Q(ODD_BYTES)

Q(OPEN)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUTPUT)

Q(OUTPUT)

Q(OnDiskBitmap)

Q(OnDiskBitmap)

Q(OneWire)

Q(OneWire)

Q(OneWire)

Q(OneWire)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PDMIn)

Q(PDMIn)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(POWER_ON)

Q(POWER_ON)

Q(PUBLIC)

Q(PUSH_PULL)

Q(PUSH_PULL)

Q(PWMAudioOut)

Q(PWMAudioOut)

Q(PWMOut)

Q(PWMOut)

Q(PacketBuffer)

Q(PacketBuffer)

Q(Palette)

Q(Palette)

Q(PaletteSource)

Q(ParallelBus)

Q(ParallelBus)

Q(ParallelBus)

Q(ParallelImageCapture)

Q(ParallelImageCapture)

Q(Parity)

Q(Parity)

Q(Parity)

Q(Pin)

Q(Pin)

Q(Pin)

Q(Pin)

Q(Pin)

Q(PinAlarm)

Q(PinAlarm)

Q(PixelBuf)

Q(PixelBuf)

Q(PixelPolicy)

Q(PixelPolicy)

Q(PointSize)

Q(Polygon)

Q(Polygon)

Q(PortIn)

Q(PortIn)

Q(PortOut)

Q(PortOut)

Q(Processor)

Q(Processor)

Q(Pull)

Q(Pull)

Q(Pull)

Q(Pull)

Q(PulseIn)

Q(PulseIn)

Q(PulseIn)

Q(PulseIn)

Q(PulseOut)

Q(PulseOut)

Q(QRDecoder)

Q(QRDecoder)

Q(QRDecoder)

Q(QRInfo)

Q(QRInfo)

Q(RAISE)

Q(RAISE)

Q(RANDOM_PRIVATE_NON_RESOLVABLE)

Q(RANDOM_PRIVATE_RESOLVABLE)

Q(RANDOM_STATIC)

Q(READ)

Q(REPL_RELOAD)

Q(REPL_RELOAD)

Q(RESCUE_DEBUG)

Q(RESCUE_DEBUG)

Q(RESET)

Q(RESET)

Q(RESET_PIN)

Q(RESET_PIN)

Q(RGB555)

Q(RGB555)

Q(RGB555_SWAPPED)

Q(RGB555_SWAPPED)

Q(RGB565)

Q(RGB565)

Q(RGB565_SWAPPED)

Q(RGB565_SWAPPED)

Q(RGB888)

Q(RGB888)

Q(RGBMatrix)

Q(RGBMatrix)

Q(RGBMatrix)

Q(RISE)

Q(RISE)

Q(RISE_AND_FALL)

Q(RISE_AND_FALL)

Q(RTC)

Q(RTC)

Q(RawSample)

Q(RawSample)

Q(Rectangle)

Q(Rectangle)

Q(ReloadException)

Q(ReloadException)

Q(ResetReason)

Q(ResetReason)

Q(RestoreContext)

Q(Return)

Q(RoleError)

Q(RoleError)

Q(RunMode)

Q(RunMode)

Q(RunMode)

Q(RunReason)

Q(RunReason)

Q(Runtime)

Q(RuntimeError)

Q(RuntimeError)

Q(SAFE_MODE)

Q(SAFE_MODE)

Q(SDCard)

Q(SDCard)

Q(SH1107_addressing)

Q(SH1107_addressing)

Q(SIGNED_NO_MITM)

Q(SIGNED_WITH_MITM)

Q(SMPS_MODE)

Q(SOFTWARE)

Q(SOFTWARE)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPIDevice)

Q(SPIDevice)

Q(STARTUP)

Q(STARTUP)

Q(SUPERVISOR_RELOAD)

Q(SUPERVISOR_RELOAD)

Q(SaveContext)

Q(ScanEntry)

Q(ScanEntry)

Q(ScanResults)

Q(ScanResults)

Q(ScissorSize)

Q(ScissorXY)

Q(SecurityError)

Q(SecurityError)

Q(Serial)

Q(Serial)

Q(Service)

Q(Service)

Q(Shape)

Q(Shape)

Q(SharpMemoryFramebuffer)

Q(SharpMemoryFramebuffer)

Q(ShiftRegisterKeys)

Q(ShiftRegisterKeys)

Q(SleepMemory)

Q(SleepMemory)

Q(StateMachine)

Q(StateMachine)

Q(StencilFunc)

Q(StencilMask)

Q(StencilOp)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(Tag)

Q(TagMask)

Q(Task)

Q(Task)

Q(TaskQueue)

Q(TaskQueue)

Q(Terminal)

Q(Terminal)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(TileGrid)

Q(TileGrid)

Q(TimeAlarm)

Q(TimeAlarm)

Q(TimeoutError)

Q(TimeoutError)

Q(TouchAlarm)

Q(TouchAlarm)

Q(TouchIn)

Q(TouchIn)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UF2)

Q(UF2)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UP)

Q(UP)

Q(UUID)

Q(UUID)

Q(UnicodeError)

Q(UnicodeError)

Q(VBUS_SENSE)

Q(VOLTAGE_MONITOR)

Q(ValueError)

Q(ValueError)

Q(VectorShape)

Q(Vertex2f)

Q(Vertex2ii)

Q(VertexFormat)

Q(VertexTranslateX)

Q(VertexTranslateY)

Q(VfsFat)

Q(VfsFat)

Q(WATCHDOG)

Q(WATCHDOG)

Q(WRITE)

Q(WRITE_NO_RESPONSE)

Q(WatchDogMode)

Q(WatchDogMode)

Q(WatchDogMode)

Q(WatchDogTimeout)

Q(WatchDogTimeout)

Q(WatchDogTimer)

Q(WaveFile)

Q(WaveFile)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(_EVE)

Q(_EVE)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__await__)

Q(__await__)

Q(__await__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__bytes__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__floordiv__)

Q(__future__)

Q(__future__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__radd__)

Q(__rand__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rfloordiv__)

Q(__rlshift__)

Q(__rmatmul__)

Q(__rmod__)

Q(__rmul__)

Q(__ror__)

Q(__rpow__)

Q(__rrshift__)

Q(__rshift__)

Q(__rsub__)

Q(__rtruediv__)

Q(__rxor__)

Q(__set__)

Q(__set__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__traceback__)

Q(__truediv__)

Q(__version__)

Q(__xor__)

Q(_asyncio)

Q(_asyncio)

Q(_bleio)

Q(_bleio)

Q(_eve)

Q(_eve)

Q(_task_queue)

Q(_transmit)

Q(a)

Q(a2b_base64)

Q(abs)

Q(acos)

Q(acos)

Q(acosh)

Q(active)

Q(adafruit_bus_device)

Q(adafruit_bus_device)

Q(adafruit_bus_device.i2c_device)

Q(adafruit_bus_device.spi_device)

Q(adafruit_pixelbuf)

Q(adafruit_pixelbuf)

Q(adapter)

Q(adapter)

Q(add)

Q(add_frame)

Q(add_to_characteristic)

Q(add_to_service)

Q(addr_pins)

Q(addr_pins)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address)

Q(address_bytes)

Q(address_type)

Q(advertisement_bytes)

Q(advertising)

Q(aesio)

Q(aesio)

Q(alarm)

Q(alarm)

Q(algorithm)

Q(all)

Q(all)

Q(all)

Q(alphablend)

Q(always_toggle_chip_select)

Q(analogio)

Q(analogio)

Q(angle)

Q(annotations)

Q(anonymous)

Q(any)

Q(any)

Q(append)

Q(append)

Q(append)

Q(append)

Q(arange)

Q(arctan2)

Q(argmax)

Q(argmin)

Q(args)

Q(argsort)

Q(argv)

Q(around)

Q(array)

Q(array)

Q(array)

Q(array)

Q(array)

Q(arrayblit)

Q(asin)

Q(asin)

Q(asinh)

Q(atan)

Q(atan)

Q(atan2)

Q(atanh)

Q(atexit)

Q(atexit)

Q(audiobusio)

Q(audiobusio)

Q(audiocore)

Q(audiocore)

Q(audiomixer)

Q(audiomixer)

Q(audiomp3)

Q(audiomp3)

Q(audiopwmio)

Q(audiopwmio)

Q(auto_brightness)

Q(auto_brightness)

Q(auto_brightness)

Q(auto_pull)

Q(auto_push)

Q(auto_refresh)

Q(auto_refresh)

Q(auto_refresh)

Q(auto_refresh)

Q(auto_write)

Q(auto_write)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(axis)

Q(b2a_base64)

Q(background_write)

Q(backlight_on_high)

Q(backlight_pin)

Q(base)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(binascii)

Q(binascii)

Q(bisect)

Q(bit_clock)

Q(bit_depth)

Q(bit_depth)

Q(bit_length)

Q(bit_transpose)

Q(bitbangio)

Q(bitbangio)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmap)

Q(bitmaptools)

Q(bitmaptools)

Q(bitmaptools)

Q(bitops)

Q(bitops)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits_per_pixel)

Q(bits_per_sample)

Q(bits_per_sample)

Q(bits_per_sample)

Q(black_bits_inverted)

Q(blit)

Q(block_size)

Q(board)

Q(board)

Q(board)

Q(board_id)

Q(bond)

Q(bool)

Q(bool)

Q(bool)

Q(boot_device)

Q(boot_device)

Q(bound_method)

Q(bound_method)

Q(bound_method)

Q(boundary_fill)

Q(bpp)

Q(brightness)

Q(brightness)

Q(brightness)

Q(brightness)

Q(brightness)

Q(brightness)

Q(brightness)

Q(brightness_command)

Q(buf)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer_in)

Q(buffer_out)

Q(buffer_size)

Q(buffer_size)

Q(buffer_size)

Q(buffer_size)

Q(buffer_size)

Q(buffer_size)

Q(buffering)

Q(builtins)

Q(builtins)

Q(bus)

Q(bus)

Q(busio)

Q(busio)

Q(busio)

Q(busy)

Q(busy_pin)

Q(busy_state)

Q(bytearray)

Q(bytearray)

Q(bytecode)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_per_cell)

Q(byteswap)

Q(byteswap)

Q(calcsize)

Q(calibration)

Q(callable)

Q(cancel)

Q(capture)

Q(cast)

Q(cc)

Q(ceil)

Q(ceil)

Q(center)

Q(center)

Q(chain)

Q(chain)

Q(channel_count)

Q(channel_count)

Q(channel_count)

Q(channel_count)

Q(characteristic)

Q(characteristic)

Q(characteristic)

Q(characteristic)

Q(characteristic)

Q(characteristic)

Q(characteristic)

Q(characteristics)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chip_select)

Q(chip_select)

Q(chip_select)

Q(chip_select)

Q(cho_solve)

Q(choice)

Q(cholesky)

Q(chr)

Q(circuitpython)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear_rxfifo)

Q(clear_txstall)

Q(clip)

Q(clock)

Q(clock)

Q(clock)

Q(clock)

Q(clock_pin)

Q(clock_pin)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(cmd)

Q(cmd0)

Q(code)

Q(code)

Q(codepoint)

Q(collect)

Q(collections)

Q(collections)

Q(color_bits_inverted)

Q(color_count)

Q(color_depth)

Q(color_depth)

Q(color_index)

Q(color_index)

Q(color_index)

Q(color_index)

Q(color_index)

Q(color_index)

Q(colorspace)

Q(colorspace)

Q(colorwheel)

Q(colstart)

Q(colstart)

Q(column)

Q(column_pins)

Q(column_pins)

Q(columns_to_anodes)

Q(command)

Q(command)

Q(command)

Q(compile)

Q(complex)

Q(complex)

Q(compress)

Q(concatenate)

Q(configure)

Q(configure)

Q(configure)

Q(connect)

Q(connectable)

Q(connectable)

Q(connected)

Q(connected)

Q(connected)

Q(connection_interval)

Q(connections)

Q(console)

Q(console)

Q(console)

Q(const)

Q(const)

Q(contains)

Q(contains)

Q(contains)

Q(continuous_capture_get_frame)

Q(continuous_capture_start)

Q(continuous_capture_stop)

Q(convert)

Q(convolve)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(coro)

Q(coroutine)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(counter)

Q(countio)

Q(countio)

Q(countio)

Q(cp437)

Q(cp874)

Q(cpu)

Q(cpus)

Q(crc32)

Q(cross)

Q(cs)

Q(cs_active_value)

Q(cts)

Q(cts)

Q(cts)

Q(cur_task)

Q(cur_task)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data0)

Q(data_as_commands)

Q(data_pin)

Q(data_pins)

Q(data_pins)

Q(data_pins)

Q(data_type)

Q(datetime)

Q(datetime)

Q(ddof)

Q(decimals)

Q(decode)

Q(decode)

Q(decode)

Q(decode)

Q(decompress)

Q(decrypt_into)

Q(default)

Q(default)

Q(default_tile)

Q(degrees)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(delay)

Q(delay)

Q(delay)

Q(delay_us)

Q(deleter)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_bitmap)

Q(dest_clip0)

Q(dest_clip1)

Q(det)

Q(device_address)

Q(device_address)

Q(devices)

Q(devices)

Q(devices)

Q(devices)

Q(diag)

Q(dict)

Q(dict)

Q(dict)

Q(dict_view)

Q(diff)

Q(difference)

Q(difference)

Q(difference_update)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(dir)

Q(directed_to)

Q(directed_to)

Q(direction)

Q(dirty)

Q(disable)

Q(disable)

Q(disable)

Q(disable)

Q(disable_autoreload)

Q(disable_ble_workflow)

Q(disable_concurrent_write_protection)

Q(disable_interrupts)

Q(disable_usb_drive)

Q(discard)

Q(disconnect)

Q(discover_remote_services)

Q(display_bus)

Q(display_bus)

Q(displayio)

Q(displayio)

Q(displayio)

Q(dither)

Q(dither)

Q(dither)

Q(dither)

Q(divisor)

Q(divisor)

Q(divmod)

Q(doc)

Q(done)

Q(dot)

Q(doublebuffer)

Q(draw_line)

Q(drive_mode)

Q(drive_mode)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dtype)

Q(dump)

Q(dumps)

Q(duty_cycle)

Q(duty_cycle)

Q(duty_cycle)

Q(dx)

Q(dx)

Q(dy)

Q(e)

Q(e)

Q(edge)

Q(edge)

Q(edge)

Q(edgeitems)

Q(edgeitems)

Q(eig)

Q(element_size)

Q(empty)

Q(enable)

Q(enable)

Q(enable)

Q(enable)

Q(enable_autoreload)

Q(enable_interrupts)

Q(enable_usb_drive)

Q(enabled)

Q(encode)

Q(encoding)

Q(encoding)

Q(encrypt_into)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(endpoint)

Q(endpoint)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(epoch_time)

Q(equal)

Q(erase_bonding)

Q(erase_filesystem)

Q(erf)

Q(erfc)

Q(errno)

Q(errno)

Q(errno)

Q(errno)

Q(errorcode)

Q(etype)

Q(etype)

Q(eval)

Q(event)

Q(events)

Q(events)

Q(events)

Q(exclusive_pin_use)

Q(exec)

Q(exit)

Q(exit_and_deep_sleep_until_alarms)

Q(exp)

Q(exp)

Q(expm1)

Q(ext_hook)

Q(extend)

Q(extend)

Q(extend)

Q(extended)

Q(extra_clocks)

Q(eye)

Q(fabs)

Q(factor_1)

Q(factor_2)

Q(fatol)

Q(feed)

Q(fft)

Q(fft)

Q(fft)

Q(file)

Q(file)

Q(file)

Q(file)

Q(file)

Q(file)

Q(file)

Q(file)

Q(filename)

Q(filename)

Q(filename2)

Q(filesystem)

Q(fill)

Q(fill)

Q(fill_color_value)

Q(fill_region)

Q(fill_row)

Q(fill_row)

Q(filter)

Q(filter)

Q(find)

Q(find)

Q(find)

Q(first_in_pin)

Q(first_out_pin)

Q(first_set_pin)

Q(first_sideset_pin)

Q(fixed_length)

Q(fixed_length)

Q(flat)

Q(flatiter)

Q(flatten)

Q(flip)

Q(flip_x)

Q(flip_y)

Q(float)

Q(float)

Q(float)

Q(float)

Q(floor)

Q(floor)

Q(floppyio)

Q(floppyio)

Q(flush)

Q(flush)

Q(flush)

Q(flush)

Q(flush)

Q(flux_readinto)

Q(fmin)

Q(fmod)

Q(font)

Q(font)

Q(fontio)

Q(fontio)

Q(format)

Q(format)

Q(format)

Q(format_exception)

Q(framebuffer)

Q(framebuffer)

Q(framebuffer)

Q(framebufferio)

Q(framebufferio)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frexp)

Q(from_bytes)

Q(from_file)

Q(from_int16_buffer)

Q(from_int32_buffer)

Q(from_uint16_buffer)

Q(from_uint32_buffer)

Q(frombuffer)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(full)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gamma)

Q(gammaln)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get)

Q(get_boot_device)

Q(get_bounding_box)

Q(get_glyph)

Q(get_into)

Q(get_last_received_report)

Q(get_previous_traceback)

Q(get_printoptions)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getmount)

Q(getpass)

Q(getpass)

Q(getpass)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(gifio)

Q(gifio)

Q(globals)

Q(grayscale)

Q(grayscale)

Q(group)

Q(groups)

Q(half_duplex)

Q(hasattr)

Q(hash)

Q(header)

Q(header)

Q(heap_lock)

Q(heap_unlock)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(help)

Q(help)

Q(hex)

Q(hexlify)

Q(hidden)

Q(hidden)

Q(highlight_color)

Q(href)

Q(i)

Q(i2c)

Q(i2c_bus)

Q(i2c_bus)

Q(i2c_device)

Q(i2c_device)

Q(id)

Q(idle_state)

Q(ifft)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(imagecapture)

Q(imagecapture)

Q(implementation)

Q(in_buffer)

Q(in_buffer)

Q(in_buffer)

Q(in_buffer)

Q(in_buffer)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_end)

Q(in_pin_count)

Q(in_report_lengths)

Q(in_report_lengths)

Q(in_report_lengths)

Q(in_shift_right)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_start)

Q(in_waiting)

Q(in_waiting)

Q(in_waiting)

Q(in_waiting)

Q(incoming_packet_length)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(indicate)

Q(indices)

Q(inf)

Q(inf)

Q(init)

Q(init_sequence)

Q(initial_out_pin_direction)

Q(initial_out_pin_state)

Q(initial_set_pin_direction)

Q(initial_set_pin_state)

Q(initial_sideset_pin_direction)

Q(initial_sideset_pin_state)

Q(initial_value)

Q(initial_value)

Q(inplace)

Q(input)

Q(input)

Q(input)

Q(input_colorspace)

Q(insert)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int16)

Q(int8)

Q(interp)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(interval)

Q(interval)

Q(interval)

Q(interval)

Q(interval)

Q(interval)

Q(interval)

Q(interval)

Q(inv)

Q(io)

Q(io)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(is_transparent)

Q(isalpha)

Q(isalpha)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isfinite)

Q(isinf)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(iso_8859-1)

Q(iso_8859-13)

Q(iso_8859-15)

Q(iso_8859-2)

Q(iso_8859-3)

Q(iso_8859-4)

Q(iso_8859-5)

Q(iso_8859-6)

Q(iso_8859-7)

Q(iso_8859-8)

Q(iso_8859-9)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(itemsize)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(jmp_pin)

Q(jmp_pin_pull)

Q(jmp_pull)

Q(join)

Q(join)

Q(json)

Q(json)

Q(k)

Q(k)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(key_count)

Q(key_count)

Q(key_count)

Q(key_count)

Q(key_count)

Q(key_number)

Q(key_number)

Q(key_number)

Q(key_number)

Q(key_number_to_row_column)

Q(key_size)

Q(keypad)

Q(keypad)

Q(keys)

Q(keys)

Q(label)

Q(last_received_report)

Q(latch)

Q(latch_pin)

Q(ldexp)

Q(left)

Q(left_channel)

Q(left_justified)

Q(len)

Q(length)

Q(level)

Q(level)

Q(light_sleep_until_alarms)

Q(limit)

Q(limit)

Q(linalg)

Q(linalg)

Q(linalg)

Q(linalg)

Q(linspace)

Q(list)

Q(list)

Q(list)

Q(listdir)

Q(little)

Q(little)

Q(little)

Q(little)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(location)

Q(location)

Q(location)

Q(log)

Q(log)

Q(log10)

Q(log2)

Q(logspace)

Q(loop)

Q(loop)

Q(loop)

Q(loop)

Q(loop)

Q(loop)

Q(lower)

Q(lower)

Q(lower)

Q(lstrip)

Q(lstrip)

Q(machine)

Q(make_opaque)

Q(make_opaque)

Q(make_transparent)

Q(make_transparent)

Q(map)

Q(map)

Q(match)

Q(match)

Q(match)

Q(match_all)

Q(matches)

Q(math)

Q(math)

Q(max)

Q(max)

Q(max_events)

Q(max_events)

Q(max_events)

Q(max_events)

Q(max_events)

Q(max_events)

Q(max_length)

Q(max_length)

Q(max_packet_length)

Q(max_packet_size)

Q(maximum)

Q(maxiter)

Q(maxiter)

Q(maxiter)

Q(maxlen)

Q(maxlen)

Q(maxsize)

Q(mean)

Q(median)

Q(mem_alloc)

Q(mem_free)

Q(memoryview)

Q(memoryview)

Q(mfm_readinto)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(min)

Q(minimum)

Q(minimum_frames_per_second)

Q(minimum_frames_per_second)

Q(minimum_rssi)

Q(mirror_x)

Q(mirror_y)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(mono)

Q(monotonic)

Q(monotonic_ns)

Q(monotonic_time)

Q(monotonic_time)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount_path)

Q(mount_path)

Q(mpy)

Q(msgpack)

Q(msgpack)

Q(n)

Q(name)

Q(name)

Q(namedtuple)

Q(nan)

Q(native)

Q(native_frames_per_second)

Q(ndarray)

Q(ndarray)

Q(ndinfo)

Q(neopixel_write)

Q(neopixel_write)

Q(neopixel_write)

Q(newton)

Q(next)

Q(nodename)

Q(norm)

Q(not_equal)

Q(notify)

Q(num)

Q(num)

Q(numpy)

Q(numpy)

Q(nvm)

Q(nvm)

Q(obj)

Q(object)

Q(object)

Q(oct)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(on_next_reset)

Q(once)

Q(ones)

Q(onewireio)

Q(onewireio)

Q(open)

Q(open)

Q(open)

Q(open)

Q(opt_level)

Q(optimize)

Q(optimize)

Q(ord)

Q(order)

Q(os)

Q(os)

Q(otypes)

Q(out)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_buffer)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_end)

Q(out_pin_count)

Q(out_report_lengths)

Q(out_report_lengths)

Q(out_report_lengths)

Q(out_shift_right)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_start)

Q(out_waiting)

Q(outgoing_packet_length)

Q(output)

Q(output_enable_pin)

Q(overflowed)

Q(oversample)

Q(ox)

Q(oy)

Q(pack)

Q(pack)

Q(pack_into)

Q(pack_into)

Q(pair)

Q(paired)

Q(paralleldisplay)

Q(paralleldisplay)

Q(parity)

Q(partition)

Q(partition)

Q(path)

Q(pause)

Q(pause)

Q(pause)

Q(paused)

Q(paused)

Q(paused)

Q(payload)

Q(peek)

Q(pend_throw)

Q(pending)

Q(ph_key)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(pi)

Q(pi)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin_a)

Q(pin_b)

Q(pins)

Q(pins_are_sequential)

Q(pixel_policy)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixel_shader)

Q(pixels_in_byte_share_row)

Q(platform)

Q(play)

Q(play)

Q(play)

Q(play)

Q(playing)

Q(playing)

Q(playing)

Q(playing)

Q(point)

Q(point)

Q(point)

Q(points)

Q(points)

Q(points)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(polyfit)

Q(polyval)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop_head)

Q(popitem)

Q(popleft)

Q(ports)

Q(ports)

Q(position)

Q(pow)

Q(pow)

Q(prefixes)

Q(prefixes)

Q(pressed)

Q(pressed)

Q(print)

Q(print_exception)

Q(probe)

Q(program)

Q(prompt)

Q(properties)

Q(properties)

Q(property)

Q(property)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_audiosample)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_draw)

Q(protocol_framebuffer)

Q(protocol_framebuffer)

Q(protocol_framebuffer)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_vfs)

Q(protocol_vfs)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull)

Q(pull_in_pin_down)

Q(pull_in_pin_up)

Q(pull_threshold)

Q(pulseio)

Q(pulseio)

Q(push_head)

Q(push_sorted)

Q(push_threshold)

Q(pwmio)

Q(pwmio)

Q(px)

Q(py)

Q(pystack exhausted)

Q(pystack_use)

Q(qr)

Q(qrio)

Q(qrio)

Q(qrio)

Q(quiescent_value)

Q(r)

Q(r)

Q(radians)

Q(radians)

Q(radius)

Q(radius)

Q(radius)

Q(rainbowio)

Q(rainbowio)

Q(ram_height)

Q(ram_width)

Q(randint)

Q(random)

Q(random)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(raw_value)

Q(rb)

Q(rb)

Q(re)

Q(re)

Q(re)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_bit)

Q(read_perm)

Q(read_perm)

Q(readblocks)

Q(readblocks)

Q(readblocks)

Q(readfrom_into)

Q(readfrom_into)

Q(readfrom_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readonly)

Q(readonly)

Q(readonly)

Q(real)

Q(receiver_buffer_size)

Q(record)

Q(reduced)

Q(reference_voltage)

Q(refresh)

Q(refresh)

Q(refresh)

Q(refresh)

Q(refresh_display_command)

Q(refresh_time)

Q(register)

Q(register)

Q(register)

Q(rekey)

Q(release)

Q(release_displays)

Q(released)

Q(reload)

Q(reload_on_error)

Q(reload_on_success)

Q(remote)

Q(remount)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(rename)

Q(rename)

Q(rename)

Q(rename)

Q(replace)

Q(replace)

Q(replaced_color_value)

Q(report_descriptor)

Q(report_id)

Q(report_id)

Q(report_id)

Q(report_ids)

Q(report_ids)

Q(report_ids)

Q(report_ids)

Q(report_ids)

Q(repr)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(reset_input_buffer)

Q(reset_input_buffer)

Q(reset_input_buffer)

Q(reset_output_buffer)

Q(reset_reason)

Q(reset_terminal)

Q(reshape)

Q(restart)

Q(resume)

Q(resume)

Q(resume)

Q(retstep)

Q(reverse)

Q(reverse)

Q(reverse_bytes_in_word)

Q(reverse_pixels_in_byte)

Q(reverse_pixels_in_element)

Q(reverse_rows)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rfind)

Q(rgb_pins)

Q(rgb_pins)

Q(rgbmatrix)

Q(rgbmatrix)

Q(right)

Q(right_channel)

Q(rindex)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rms_level)

Q(roll)

Q(root_group)

Q(rotaryio)

Q(rotaryio)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotozoom)

Q(round)

Q(row)

Q(row_column_to_key_number)

Q(row_pins)

Q(row_pins)

Q(row_pins)

Q(rowstart)

Q(rowstart)

Q(rp2pio)

Q(rp2pio)

Q(rpartition)

Q(rpartition)

Q(rs485_dir)

Q(rs485_invert)

Q(rsplit)

Q(rsplit)

Q(rssi)

Q(rstrip)

Q(rstrip)

Q(rtc)

Q(rtc)

Q(rtol)

Q(rts)

Q(rts)

Q(rts)

Q(run)

Q(run_reason)

Q(runtime)

Q(rx)

Q(rxstall)

Q(sample)

Q(sample)

Q(sample)

Q(sample)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(sample_rate)

Q(samplerate)

Q(samples_decoded)

Q(samples_signed)

Q(scale)

Q(scale)

Q(scale)

Q(scale)

Q(scale)

Q(scan)

Q(scan)

Q(scan_response)

Q(scan_response)

Q(scipy)

Q(scipy)

Q(scl)

Q(scl)

Q(sda)

Q(sda)

Q(sdcardio)

Q(sdcardio)

Q(search)

Q(search)

Q(secondary)

Q(secondary)

Q(seconds_per_frame)

Q(seconds_per_frame)

Q(seed)

Q(seek)

Q(seek)

Q(segment_size)

Q(select)

Q(select)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send_report)

Q(sep)

Q(sep)

Q(separators)

Q(serial_bytes_available)

Q(serial_connected)

Q(serpentine)

Q(service)

Q(service)

Q(service_uuids_whitelist)

Q(set)

Q(set)

Q(set)

Q(set_adapter)

Q(set_boundary)

Q(set_cccd)

Q(set_column_command)

Q(set_column_window_command)

Q(set_current_column_command)

Q(set_current_row_command)

Q(set_next_code_file)

Q(set_next_stack_limit)

Q(set_pin_count)

Q(set_printoptions)

Q(set_rgb_status_brightness)

Q(set_row_command)

Q(set_row_window_command)

Q(set_time_source)

Q(set_vertical_scroll)

Q(setattr)

Q(setdefault)

Q(setter)

Q(shape)

Q(shape)

Q(shape)

Q(sharpdisplay)

Q(sharpdisplay)

Q(shift_underscore_jis)

Q(shift_x)

Q(shift_y)

Q(show)

Q(show)

Q(show)

Q(show)

Q(sideset_enable)

Q(sideset_pin_count)

Q(signal)

Q(signal)

Q(signed)

Q(sin)

Q(sin)

Q(single_byte_bounds)

Q(sinh)

Q(size)

Q(size)

Q(size)

Q(skip_index)

Q(skip_index)

Q(skip_index)

Q(sleep)

Q(sleep_memory)

Q(slice)

Q(slice)

Q(solve_triangular)

Q(sort)

Q(sort)

Q(sort)

Q(sort)

Q(sorted)

Q(sos)

Q(sosfilt)

Q(source_bitmap)

Q(source_bitmap)

Q(source_bitmap)

Q(source_bitmap)

Q(source_bitmap)

Q(source_bitmap_1)

Q(source_bitmap_1)

Q(source_bitmap_2)

Q(source_bitmap_2)

Q(source_clip0)

Q(source_clip1)

Q(source_colorspace)

Q(span)

Q(special)

Q(special)

Q(spectrogram)

Q(spi)

Q(spi)

Q(spi_bus)

Q(spi_bus)

Q(spi_bus)

Q(spi_device)

Q(spi_device)

Q(split)

Q(split)

Q(split)

Q(splitlines)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start_advertising)

Q(start_scan)

Q(start_sequence)

Q(start_sequence)

Q(startswith)

Q(startswith)

Q(startup_delay)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(state)

Q(state)

Q(staticmethod)

Q(staticmethod)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(std)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(sticky_on_error)

Q(sticky_on_reload)

Q(sticky_on_success)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop_advertising)

Q(stop_background_write)

Q(stop_scan)

Q(stop_sequence)

Q(stop_voice)

Q(storage)

Q(storage)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(stream)

Q(stream)

Q(stream)

Q(strerror)

Q(strides)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(struct_time)

Q(struct_time)

Q(sub)

Q(sub)

Q(sum)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(supervisor)

Q(supervisor)

Q(supervisor)

Q(swap)

Q(swap)

Q(swap)

Q(swap_bytes_in_element)

Q(swap_in)

Q(swap_out)

Q(switch_to_input)

Q(switch_to_output)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sync)

Q(synthio)

Q(synthio)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(tan)

Q(tanh)

Q(target_frames_per_second)

Q(target_frames_per_second)

Q(tb)

Q(tb)

Q(tb)

Q(tell)

Q(tell)

Q(temperature)

Q(tempo)

Q(terminalio)

Q(terminalio)

Q(threshold)

Q(threshold)

Q(threshold)

Q(throw)

Q(throw)

Q(ticks_ms)

Q(tile)

Q(tile_height)

Q(tile_height)

Q(tile_index)

Q(tile_width)

Q(tile_width)

Q(tilegrid)

Q(tilegrid)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time_to_refresh)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timestamp)

Q(timestamp)

Q(tm_hour)

Q(tm_isdst)

Q(tm_mday)

Q(tm_min)

Q(tm_mon)

Q(tm_sec)

Q(tm_wday)

Q(tm_yday)

Q(tm_year)

Q(to_bytes)

Q(tobytes)

Q(toggle_every_byte)

Q(tol)

Q(tolist)

Q(touch)

Q(touch)

Q(touchio)

Q(touchio)

Q(trace)

Q(traceback)

Q(traceback)

Q(traceback)

Q(traceback)

Q(trailer)

Q(transpose)

Q(transpose_xy)

Q(trapz)

Q(trigger_duration)

Q(trunc)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(try_lock)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tuple)

Q(two_byte_sequence_length)

Q(tx)

Q(tx_power)

Q(txstall)

Q(type)

Q(type)

Q(type)

Q(uart)

Q(uart)

Q(uid)

Q(uint16)

Q(uint8)

Q(ulab)

Q(ulab)

Q(ulab)

Q(ulab.fft)

Q(ulab.linalg)

Q(ulab.numpy)

Q(ulab.scipy)

Q(ulab.scipy.linalg)

Q(ulab.scipy.optimize)

Q(ulab.scipy.signal)

Q(ulab.scipy.special)

Q(ulab.utils)

Q(umount)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(union)

Q(union)

Q(unlink)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unlock)

Q(unpack)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(unregister)

Q(update)

Q(update)

Q(update_refresh_mode)

Q(upper)

Q(upper)

Q(urandom)

Q(usage)

Q(usage)

Q(usage)

Q(usage_page)

Q(usage_page)

Q(usage_page)

Q(usb_cdc)

Q(usb_cdc)

Q(usb_connected)

Q(usb_hid)

Q(usb_hid)

Q(usb_midi)

Q(usb_midi)

Q(use_list)

Q(uselect)

Q(uselect)

Q(user_description)

Q(user_interruptible)

Q(utf-8)

Q(utf-8)

Q(utf-8)

Q(utf-8)

Q(utils)

Q(utils)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid)

Q(uuid128)

Q(uuid16)

Q(v)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value_to_latch)

Q(value_when_pressed)

Q(value_when_pressed)

Q(values)

Q(variable_frequency)

Q(vectorio)

Q(vectorio)

Q(vectorize)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(voice)

Q(voice)

Q(voice)

Q(voice)

Q(voice_count)

Q(voltage)

Q(vsync)

Q(wait_for_txstall)

Q(wake_alarm)

Q(wake_alarm)

Q(wake_alarm)

Q(watchdog)

Q(watchdog)

Q(watchdog)

Q(watchdog)

Q(wb)

Q(where)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(window)

Q(word_select)

Q(wrap)

Q(wrap)

Q(wrap_target)

Q(wrap_target)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_bit)

Q(write_black_ram_command)

Q(write_color_ram_command)

Q(write_perm)

Q(write_perm)

Q(write_ram_command)

Q(write_readinto)

Q(write_readinto)

Q(write_readinto)

Q(write_then_readinto)

Q(write_timeout)

Q(write_value)

Q(write_value)

Q(writeblocks)

Q(writeblocks)

Q(writeblocks)

Q(writeto)

Q(writeto)

Q(writeto)

Q(writeto)

Q(writeto_then_readfrom)

Q(writeto_then_readfrom)

Q(writeto_then_readfrom)

Q(writing)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x1)

Q(x1)

Q(x1)

Q(x1)

Q(x1)

Q(x2)

Q(x2)

Q(x2)

Q(x2)

Q(x2)

Q(xatol)

Q(xtol)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y1)

Q(y1)

Q(y1)

Q(y1)

Q(y1)

Q(y2)

Q(y2)

Q(y2)

Q(y2)

Q(y2)

Q(zeros)

Q(zi)

Q(zip)

Q(zip)

Q(zlib)

Q(zlib)

Q({_colon_#b})

TRANSLATE("  File \"%q\", line %d")

TRANSLATE(" is of type %q\n")

TRANSLATE(" not found.\n")

TRANSLATE(" output:\n")

TRANSLATE("%%c requires int or char")

TRANSLATE("%%c requires int or char")

TRANSLATE("%d address pins, %d rgb pins and %d tiles indicate a height of %d, not %d")

TRANSLATE("%q and %q contain duplicate pins")

TRANSLATE("%q contains duplicate pins")

TRANSLATE("%q in use")

TRANSLATE("%q index out of range")

TRANSLATE("%q index out of range")

TRANSLATE("%q index out of range")

TRANSLATE("%q index out of range")

TRANSLATE("%q index out of range")

TRANSLATE("%q index out of range")

TRANSLATE("%q indices must be integers, not %s")

TRANSLATE("%q length must be %d-%d")

TRANSLATE("%q length must be >= 1")

TRANSLATE("%q length must be >= 1")

TRANSLATE("%q length must be >= 1")

TRANSLATE("%q must be %d-%d")

TRANSLATE("%q must be 1 when %q is True")

TRANSLATE("%q must be <= %d")

TRANSLATE("%q must be <= %d")

TRANSLATE("%q must be >= %d")

TRANSLATE("%q must be >= 0")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be >= 1")

TRANSLATE("%q must be a string")

TRANSLATE("%q must be a tuple of length 2")

TRANSLATE("%q must be between %d and %d")

TRANSLATE("%q must be of type %q or None")

TRANSLATE("%q must be of type %q")

TRANSLATE("%q out of range")

TRANSLATE("%q should be an int")

TRANSLATE("%q with a report ID of 0 must be of length 1")

TRANSLATE("%q, %q, and %q must all be the same length")

TRANSLATE("'%q' argument required")

TRANSLATE("'%q' object is not an iterator")

TRANSLATE("'%q' object is not an iterator")

TRANSLATE("'%q' object is not callable")

TRANSLATE("'%q' object is not callable")

TRANSLATE("'%q' object is not callable")

TRANSLATE("'%q' object is not iterable")

TRANSLATE("'%s' object doesn't support item assignment")

TRANSLATE("'%s' object doesn't support item deletion")

TRANSLATE("'%s' object has no attribute '%q'")

TRANSLATE("'%s' object has no attribute '%q'")

TRANSLATE("'%s' object isn't subscriptable")

TRANSLATE("'=' alignment not allowed in string format specifier")

TRANSLATE("'await' outside function")

TRANSLATE("'await', 'async for' or 'async with' outside async function")

TRANSLATE("'break' outside loop")

TRANSLATE("'continue' outside loop")

TRANSLATE("'coroutine' object is not an iterator")

TRANSLATE("'return' outside function")

TRANSLATE("'yield from' inside async function")

TRANSLATE("'yield' outside function")

TRANSLATE("(x,y) integers required")

TRANSLATE("*x must be assignment target")

TRANSLATE(", in %q\n")

TRANSLATE("0.0 to a complex power")

TRANSLATE("64 bit types")

TRANSLATE("Adapter not enabled")

TRANSLATE("Address must be %d bytes long")

TRANSLATE("Address type out of range")

TRANSLATE("All UART peripherals are in use")

TRANSLATE("All channels in use")

TRANSLATE("All state machines in use")

TRANSLATE("All state machines in use")

TRANSLATE("All timers for this pin are in use")

TRANSLATE("All timers in use")

TRANSLATE("All timers in use")

TRANSLATE("Already advertising")

TRANSLATE("AnalogOut functionality not supported")

TRANSLATE("AnalogOut is only 16 bits. Value must be less than 65536.")

TRANSLATE("Array must contain halfwords (type 'H')")

TRANSLATE("Array values should be single bytes.")

TRANSLATE("Array values should be single bytes.")

TRANSLATE("At most %d %q may be specified (not %d)")

TRANSLATE("Attempted heap allocation when VM not running.")

TRANSLATE("Attribute not found")

TRANSLATE("Attribute not long")

TRANSLATE("Audio conversion not implemented")

TRANSLATE("Auto-reload is off.\n")

TRANSLATE("Auto-reload is on. Simply save files over USB to run them or enter REPL to disable.\n")

TRANSLATE("Below minimum frame rate")

TRANSLATE("Below minimum frame rate")

TRANSLATE("Bit clock and word select must be sequential pins")

TRANSLATE("Bit depth must be from 1 to 6 inclusive, not %d")

TRANSLATE("Bit depth must be multiple of 8.")

TRANSLATE("Bitmap size and bits per value must match")

TRANSLATE("Boot device must be first device (interface #0).")

TRANSLATE("Brightness must be 0-1.0")

TRANSLATE("Brightness must be 0-1.0")

TRANSLATE("Brightness must be 0-1.0")

TRANSLATE("Brightness not adjustable")

TRANSLATE("Brightness not adjustable")

TRANSLATE("Brightness not adjustable")

TRANSLATE("Brightness not adjustable")

TRANSLATE("Brightness not adjustable")

TRANSLATE("Buffer + offset too small %d %d %d")

TRANSLATE("Buffer elements must be 4 bytes long or less")

TRANSLATE("Buffer elements must be 4 bytes long or less")

TRANSLATE("Buffer elements must be 4 bytes long or less")

TRANSLATE("Buffer incorrect size. Should be %d bytes.")

TRANSLATE("Buffer is not a bytearray.")

TRANSLATE("Buffer is too small")

TRANSLATE("Buffer is too small")

TRANSLATE("Buffer length must be a multiple of 512")

TRANSLATE("Buffer length must be a multiple of 512")

TRANSLATE("Buffer must be a multiple of 512 bytes")

TRANSLATE("Buffer must be at least length 1")

TRANSLATE("Buffer too large and unable to allocate")

TRANSLATE("Buffer too short by %d bytes")

TRANSLATE("Bus pin %d is already in use")

TRANSLATE("Bus pin %d is already in use")

TRANSLATE("Byte buffer must be 16 bytes.")

TRANSLATE("Bytes must be between 0 and 255.")

TRANSLATE("Bytes must be between 0 and 255.")

TRANSLATE("CBC blocks must be multiples of 16 bytes")

TRANSLATE("CIRCUITPY drive could not be found or created.")

TRANSLATE("Call super().__init__() before accessing native object.")

TRANSLATE("Can't set CCCD on local Characteristic")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot change USB devices now")

TRANSLATE("Cannot delete values")

TRANSLATE("Cannot delete values")

TRANSLATE("Cannot get pull while in output mode")

TRANSLATE("Cannot have scan responses for extended, connectable advertisements.")

TRANSLATE("Cannot read without MISO pin.")

TRANSLATE("Cannot record to a file")

TRANSLATE("Cannot remount '/' when visible via USB.")

TRANSLATE("Cannot set value when direction is input.")

TRANSLATE("Cannot subclass slice")

TRANSLATE("Cannot transfer without MOSI and MISO pins.")

TRANSLATE("Cannot vary frequency on a timer that is already in use")

TRANSLATE("Cannot write without MOSI pin.")

TRANSLATE("Characteristic can only be added to most recently added service")

TRANSLATE("Characteristic not writable")

TRANSLATE("CharacteristicBuffer writing not provided")

TRANSLATE("CircuitPython core code crashed hard. Whoops!\n")

TRANSLATE("CircuitPython was unable to allocate the heap.")

TRANSLATE("Clock pin init failed.")

TRANSLATE("Clock stretch too long")

TRANSLATE("Command must be an int between 0 and 255")

TRANSLATE("Command must be an int between 0 and 255")

TRANSLATE("Command must be an int between 0 and 255")

TRANSLATE("Connection has been disconnected and can no longer be used. Create a new connection.")

TRANSLATE("Corrupt .mpy file")

TRANSLATE("Could not get max advertising length")

TRANSLATE("Could not read BLE buffer info")

TRANSLATE("Could not read BLE features")

TRANSLATE("Could not read HCI version")

TRANSLATE("Could not set address")

TRANSLATE("Could not set event mask")

TRANSLATE("Could not start PWM")

TRANSLATE("Couldn't allocate decoder")

TRANSLATE("Couldn't allocate first buffer")

TRANSLATE("Couldn't allocate first buffer")

TRANSLATE("Couldn't allocate first buffer")

TRANSLATE("Couldn't allocate input buffer")

TRANSLATE("Couldn't allocate second buffer")

TRANSLATE("Couldn't allocate second buffer")

TRANSLATE("Couldn't allocate second buffer")

TRANSLATE("Crash into the HardFault_Handler.")

TRANSLATE("DB out of sync")

TRANSLATE("Data chunk must follow fmt chunk")

TRANSLATE("Data length needs extended advertising, but this adapter does not support it")

TRANSLATE("Data too large for advertisement packet")

TRANSLATE("Descriptor can only be added to most recently added characteristic")

TRANSLATE("Destination capacity is smaller than destination_length.")

TRANSLATE("Display must have a 16 bit colorspace.")

TRANSLATE("Display must have a 16 bit colorspace.")

TRANSLATE("Display rotation must be in 90 degree increments")

TRANSLATE("Display rotation must be in 90 degree increments")

TRANSLATE("Display rotation must be in 90 degree increments")

TRANSLATE("Drive mode not used when direction is input.")

TRANSLATE("Drive mode not used when direction is input.")

TRANSLATE("ECB only operates on 16 bytes at a time")

TRANSLATE("Encryption key size")

TRANSLATE("Error in ATT protocol code")

TRANSLATE("Error in MIDI stream at position %d")

TRANSLATE("Error in MIDI stream at position %d")

TRANSLATE("Error in MIDI stream at position %d")

TRANSLATE("Error in MIDI stream at position %d")

TRANSLATE("Error in MIDI stream at position %d")

TRANSLATE("Error in regex")

TRANSLATE("Error reading from HCI adapter")

TRANSLATE("Error writing to HCI adapter")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected an alarm")

TRANSLATE("Expected tuple of length %d, got %d")

TRANSLATE("Extended advertisements with scan response not supported.")

TRANSLATE("FFT is defined for ndarrays only")

TRANSLATE("FFT is defined for ndarrays only")

TRANSLATE("FFT is implemented for linear arrays only")

TRANSLATE("FFT is implemented for linear arrays only")

TRANSLATE("Failed to add service")

TRANSLATE("Failed to allocate %q buffer")

TRANSLATE("Failed to allocate RX buffer of %d bytes")

TRANSLATE("Failed to allocate RX buffer")

TRANSLATE("Failed to connect: internal error")

TRANSLATE("Failed to parse MP3 file")

TRANSLATE("Failed to write internal flash.")

TRANSLATE("Fatal error.")

TRANSLATE("File exists")

TRANSLATE("For L8 colorspace, input bitmap must have 8 bits per pixel")

TRANSLATE("For RGB colorspaces, input bitmap must have 16 bits per pixel")

TRANSLATE("Framebuffer requires %d bytes")

TRANSLATE("Frequency must match existing PWMOut using this timer")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Group already used")

TRANSLATE("Group already used")

TRANSLATE("Group already used")

TRANSLATE("HCI packet size mismatch")

TRANSLATE("HCI status error: %02x")

TRANSLATE("Half duplex SPI is not implemented")

TRANSLATE("I/O operation on closed file")

TRANSLATE("I2C peripheral in use")

TRANSLATE("IV must be %d bytes long")

TRANSLATE("IV must be %d bytes long")

TRANSLATE("In-buffer elements must be <= 4 bytes long")

TRANSLATE("Incompatible .mpy file. Please update all .mpy files. See http://adafru.it/mpy-update for more info.")

TRANSLATE("Init program size invalid")

TRANSLATE("Initial set pin direction conflicts with initial out pin direction")

TRANSLATE("Initial set pin state conflicts with initial out pin state")

TRANSLATE("Input buffer length (%d) must be a multiple of the strand count (%d)")

TRANSLATE("Input/output error")

TRANSLATE("Instruction %d shifts in more bits than pin count")

TRANSLATE("Instruction %d shifts out more bits than pin count")

TRANSLATE("Instruction %d uses extra pin")

TRANSLATE("Instruction %d waits on input outside of count")

TRANSLATE("Insufficient authentication")

TRANSLATE("Insufficient encryption")

TRANSLATE("Insufficient resources")

TRANSLATE("Internal audio buffer too small")

TRANSLATE("Internal audio buffer too small")

TRANSLATE("Internal error #%d")

TRANSLATE("Invalid %q")

TRANSLATE("Invalid BLE attribute")

TRANSLATE("Invalid BMP file")

TRANSLATE("Invalid MIDI file")

TRANSLATE("Invalid MIDI file")

TRANSLATE("Invalid MIDI file")

TRANSLATE("Invalid PDU")

TRANSLATE("Invalid PWM frequency")

TRANSLATE("Invalid PWM frequency")

TRANSLATE("Invalid PWM frequency")

TRANSLATE("Invalid argument")

TRANSLATE("Invalid argument")

TRANSLATE("Invalid attribute length")

TRANSLATE("Invalid bits per value")

TRANSLATE("Invalid buffer size")

TRANSLATE("Invalid byteorder string")

TRANSLATE("Invalid byteorder string")

TRANSLATE("Invalid byteorder string")

TRANSLATE("Invalid byteorder string")

TRANSLATE("Invalid channel count")

TRANSLATE("Invalid direction.")

TRANSLATE("Invalid file")

TRANSLATE("Invalid format chunk size")

TRANSLATE("Invalid handle")

TRANSLATE("Invalid memory access.")

TRANSLATE("Invalid mode")

TRANSLATE("Invalid number of bits")

TRANSLATE("Invalid number of bits")

TRANSLATE("Invalid offset")

TRANSLATE("Invalid phase")

TRANSLATE("Invalid phase")

TRANSLATE("Invalid phase")

TRANSLATE("Invalid pin")

TRANSLATE("Invalid pin")

TRANSLATE("Invalid pins")

TRANSLATE("Invalid pins")

TRANSLATE("Invalid pins")

TRANSLATE("Invalid polarity")

TRANSLATE("Invalid polarity")

TRANSLATE("Invalid polarity")

TRANSLATE("Invalid properties")

TRANSLATE("Invalid run mode.")

TRANSLATE("Invalid security_mode")

TRANSLATE("Invalid voice count")

TRANSLATE("Invalid voice")

TRANSLATE("Invalid voice")

TRANSLATE("Invalid wave file")

TRANSLATE("Invalid word/bit length")

TRANSLATE("Key must be 16, 24, or 32 bytes long")

TRANSLATE("Key must be 16, 24, or 32 bytes long")

TRANSLATE("LHS of keyword arg must be an id")

TRANSLATE("Layer already in a group.")

TRANSLATE("Layer already in a group.")

TRANSLATE("Layer must be a Group or TileGrid subclass.")

TRANSLATE("MISO pin init failed.")

TRANSLATE("MOSI pin init failed.")

TRANSLATE("Maximum x value when mirrored is %d")

TRANSLATE("Microphone startup delay must be in range 0.0 to 1.0")

TRANSLATE("Mismatched data size")

TRANSLATE("Mismatched data size")

TRANSLATE("Mismatched swap flag")

TRANSLATE("Missing first_in_pin. Instruction %d reads pin(s)")

TRANSLATE("Missing first_in_pin. Instruction %d shifts in from pin(s)")

TRANSLATE("Missing first_in_pin. Instruction %d waits based on pin")

TRANSLATE("Missing first_out_pin. Instruction %d shifts out to pin(s)")

TRANSLATE("Missing first_out_pin. Instruction %d writes pin(s)")

TRANSLATE("Missing first_set_pin. Instruction %d sets pin(s)")

TRANSLATE("Missing jmp_pin. Instruction %d jumps on pin")

TRANSLATE("More than %d report ids not supported")

TRANSLATE("Must be a %q subclass.")

TRANSLATE("Must be a %q subclass.")

TRANSLATE("Must provide MISO or MOSI pin")

TRANSLATE("Must use a multiple of 6 rgb pins, not %d")

TRANSLATE("NLR jump failed. Likely memory corruption.")

TRANSLATE("Name too long")

TRANSLATE("New bitmap must be same size as old bitmap")

TRANSLATE("New bitmap must be same size as old bitmap")

TRANSLATE("New bitmap must be same size as old bitmap")

TRANSLATE("No CCCD for this Characteristic")

TRANSLATE("No DMA channel found")

TRANSLATE("No DMA channel found")

TRANSLATE("No DMA pacing timer found")

TRANSLATE("No I2C device at address: 0x%x")

TRANSLATE("No RX pin")

TRANSLATE("No TX pin")

TRANSLATE("No connection: length cannot be determined")

TRANSLATE("No connection: length cannot be determined")

TRANSLATE("No default %q bus")

TRANSLATE("No default %q bus")

TRANSLATE("No default %q bus")

TRANSLATE("No hardware random available")

TRANSLATE("No in in program")

TRANSLATE("No in or out in program")

TRANSLATE("No key was specified")

TRANSLATE("No key was specified")

TRANSLATE("No more than %d HID devices allowed")

TRANSLATE("No out in program")

TRANSLATE("No pull up found on SDA or SCL; check your wiring")

TRANSLATE("No pulldown on pin; 1Mohm recommended")

TRANSLATE("No space left on device")

TRANSLATE("No such device")

TRANSLATE("No such file/directory")

TRANSLATE("No timer available")

TRANSLATE("Not connected")

TRANSLATE("Not connected")

TRANSLATE("Not playing")

TRANSLATE("Not playing")

TRANSLATE("Not supported")

TRANSLATE("Object has been deinitialized and can no longer be used. Create a new object.")

TRANSLATE("Only 8 or 16 bit mono with " "64" "x oversampling is supported.")

TRANSLATE("Only Windows format, uncompressed BMP supported: given header size is %d")

TRANSLATE("Only connectable advertisements can be directed")

TRANSLATE("Only monochrome, indexed 4bpp or 8bpp, and 16bpp or greater BMPs supported: %d bpp given")

TRANSLATE("Only one alarm.time alarm can be set.")

TRANSLATE("Only one color can be transparent at a time")

TRANSLATE("Only tx_power=0 supported")

TRANSLATE("Operation not permitted")

TRANSLATE("Out-buffer elements must be <= 4 bytes long")

TRANSLATE("Output buffer must be at least %d bytes")

TRANSLATE("Oversample must be multiple of 8.")

TRANSLATE("PWM duty_cycle must be between 0 and 65535 inclusive (16 bit resolution)")

TRANSLATE("PWM slice already in use")

TRANSLATE("PWM slice channel A already in use")

TRANSLATE("Permission denied")

TRANSLATE("Pin count must be at least 1")

TRANSLATE("Pin count must be at least 1")

TRANSLATE("Pin count must be at least 1")

TRANSLATE("Pin count must be at least 1")

TRANSLATE("Pin count too large")

TRANSLATE("Pin does not have ADC capabilities")

TRANSLATE("Pin is input only")

TRANSLATE("Pin is input only")

TRANSLATE("Pin is input only")

TRANSLATE("Pin must be on PWM Channel B")

TRANSLATE("Pinout uses %d bytes per element, which consumes more than the ideal %d bytes.  If this cannot be avoided, pass allow_inefficient=True to the constructor")

TRANSLATE("Pins must be sequential GPIO pins")

TRANSLATE("Pins must be sequential")

TRANSLATE("Pins must share PWM slice")

TRANSLATE("Plus any modules on the filesystem\n")

TRANSLATE("Polygon needs at least 3 points")

TRANSLATE("Prefix buffer must be on the heap")

TRANSLATE("Prepare queue full")

TRANSLATE("Press any key to enter the REPL. Use CTRL-D to reload.\n")

TRANSLATE("Pretending to deep sleep until alarm, CTRL-C or file write.\n")

TRANSLATE("Program does IN without loading ISR")

TRANSLATE("Program does OUT without loading OSR")

TRANSLATE("Program must contain at least one 16-bit instruction.")

TRANSLATE("Program size invalid")

TRANSLATE("Program too large")

TRANSLATE("Pull not used when direction is output.")

TRANSLATE("Pull not used when direction is output.")

TRANSLATE("RAISE mode is not implemented")

TRANSLATE("RISE_AND_FALL not available on this chip")

TRANSLATE("RTC calibration is not supported on this board")

TRANSLATE("RTC is not supported on this board")

TRANSLATE("RTC is not supported on this board")

TRANSLATE("Read not permitted")

TRANSLATE("Read-only filesystem")

TRANSLATE("Read-only filesystem")

TRANSLATE("Read-only object")

TRANSLATE("Read-only")

TRANSLATE("Refresh too soon")

TRANSLATE("Requested AES mode is unsupported")

TRANSLATE("Requested AES mode is unsupported")

TRANSLATE("Running in safe mode! Not running saved code.\n")

TRANSLATE("SD card CSD format not supported")

TRANSLATE("SPI peripheral in use")

TRANSLATE("Sample rate must be positive")

TRANSLATE("Scan already in progess. Stop with stop_scan.")

TRANSLATE("Set pin count must be between 1 and 5")

TRANSLATE("Side set pin count must be between 1 and 5")

TRANSLATE("Sleep Memory not available")

TRANSLATE("Sleep Memory not available")

TRANSLATE("Sleep Memory not available")

TRANSLATE("Slice and value different lengths.")

TRANSLATE("Slice and value different lengths.")

TRANSLATE("Slices not supported")

TRANSLATE("Slices not supported")

TRANSLATE("Slices not supported")

TRANSLATE("Slices not supported")

TRANSLATE("Source and destination buffers must be the same length")

TRANSLATE("Specify exactly one of data0 or data_pins")

TRANSLATE("Splitting with sub-captures")

TRANSLATE("Stack size must be at least 256")

TRANSLATE("Stereo left must be on PWM channel A")

TRANSLATE("Stereo right must be on PWM channel B")

TRANSLATE("Supply one of monotonic_time or epoch_time")

TRANSLATE("The CircuitPython heap was corrupted because the stack was too small.\nIncrease the stack size if you know how. If not:")

TRANSLATE("The `microcontroller` module was used to boot into safe mode. Press reset to exit safe mode.")

TRANSLATE("The length of rgb_pins must be 6, 12, 18, 24, or 30")

TRANSLATE("The microcontroller's power dipped. Make sure your power supply provides\nenough power for the whole circuit and press reset (after ejecting CIRCUITPY).")

TRANSLATE("The sample's bits_per_sample does not match the mixer's")

TRANSLATE("The sample's channel count does not match the mixer's")

TRANSLATE("The sample's sample rate does not match the mixer's")

TRANSLATE("The sample's signedness does not match the mixer's")

TRANSLATE("This microcontroller does not support continuous capture.")

TRANSLATE("This microcontroller does not support continuous capture.")

TRANSLATE("This microcontroller does not support continuous capture.")

TRANSLATE("This microcontroller only supports data0=, not data_pins=, because it requires contiguous pins.")

TRANSLATE("Tile height must exactly divide bitmap height")

TRANSLATE("Tile index out of bounds")

TRANSLATE("Tile index out of bounds")

TRANSLATE("Tile value out of bounds")

TRANSLATE("Tile width must exactly divide bitmap width")

TRANSLATE("Time is in the past.")

TRANSLATE("Timeout is too long: Maximum timeout length is %d seconds")

TRANSLATE("Timeout waiting for HCI response")

TRANSLATE("Timeout waiting to write HCI request")

TRANSLATE("To exit, please reset the board without ")

TRANSLATE("Too many Adapters")

TRANSLATE("Too many channels in sample.")

TRANSLATE("Too many display busses")

TRANSLATE("Too many displays")

TRANSLATE("Total data to write is larger than outgoing_packet_length")

TRANSLATE("Touch alarms not available")

TRANSLATE("Traceback (most recent call last):\n")

TRANSLATE("Tuple or struct_time argument required")

TRANSLATE("Tuple or struct_time argument required")

TRANSLATE("USB busy")

TRANSLATE("USB devices need more endpoints than are available.")

TRANSLATE("USB devices specify too many interface names.")

TRANSLATE("USB error")

TRANSLATE("UUID integer value must be 0-0xffff")

TRANSLATE("UUID string not 'xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx'")

TRANSLATE("UUID value is not str, int or byte buffer")

TRANSLATE("Unable to allocate buffers for signed conversion")

TRANSLATE("Unable to allocate buffers for signed conversion")

TRANSLATE("Unable to find I2C Display at %x")

TRANSLATE("Unable to init parser")

TRANSLATE("Unable to read color palette data")

TRANSLATE("Unable to write to nvm.")

TRANSLATE("Unable to write to nvm.")

TRANSLATE("Unable to write to sleep_memory.")

TRANSLATE("Unable to write to sleep_memory.")

TRANSLATE("Unknown ATT error: 0x%02x")

TRANSLATE("Unknown hci_result_t: %d")

TRANSLATE("Unknown reason.")

TRANSLATE("Unlikely")

TRANSLATE("Unmatched number of items on RHS (expected %d, got %d).")

TRANSLATE("Unsupported baudrate")

TRANSLATE("Unsupported colorspace")

TRANSLATE("Unsupported display bus type")

TRANSLATE("Unsupported format")

TRANSLATE("Unsupported group type")

TRANSLATE("Value length != required fixed length")

TRANSLATE("Value length != required fixed length")

TRANSLATE("Value length > max_length")

TRANSLATE("Value length > max_length")

TRANSLATE("Value not allowed")

TRANSLATE("WARNING: Your code filename has two extensions\n")

TRANSLATE("WatchDogTimer cannot be deinitialized once mode is set to RESET")

TRANSLATE("WatchDogTimer is not currently running")

TRANSLATE("WatchDogTimer.mode cannot be changed once set to WatchDogMode.RESET")

TRANSLATE("WatchDogTimer.timeout must be greater than 0")

TRANSLATE("Watchdog timer expired.")

TRANSLATE("Welcome to Adafruit CircuitPython %s!\n\nVisit circuitpython.org for more information.\n\nTo list built-in modules type `help(\"modules\")`.\n")

TRANSLATE("Woken up by alarm.\n")

TRANSLATE("Write not permitted")

TRANSLATE("Writes not supported on Characteristic")

TRANSLATE("You are in safe mode because:\n")

TRANSLATE("You pressed the reset button during boot. Press again to exit safe mode.")

TRANSLATE("You requested starting safe mode by ")

TRANSLATE("\nCode done running.\n")

TRANSLATE("\nCode stopped by auto-reload. Reloading soon.\n")

TRANSLATE("\nPlease file an issue with the contents of your CIRCUITPY drive at \nhttps://github.com/adafruit/circuitpython/issues\n")

TRANSLATE("__init__() should return None, not '%q'")

TRANSLATE("__new__ arg must be a user-type")

TRANSLATE("a bytes-like object is required")

TRANSLATE("a bytes-like object is required")

TRANSLATE("abort() called")

TRANSLATE("arg is an empty sequence")

TRANSLATE("argsort argument must be an ndarray")

TRANSLATE("argsort is not implemented for flattened arrays")

TRANSLATE("argument has wrong type")

TRANSLATE("argument has wrong type")

TRANSLATE("argument name reused")

TRANSLATE("argument num/types mismatch")

TRANSLATE("argument num/types mismatch")

TRANSLATE("argument should be a '%q' not a '%q'")

TRANSLATE("arguments must be ndarrays")

TRANSLATE("arguments must be ndarrays")

TRANSLATE("array and index length must be equal")

TRANSLATE("array/bytes required on right side")

TRANSLATE("array/bytes required on right side")

TRANSLATE("array/bytes required on right side")

TRANSLATE("attempt to get (arg)min/(arg)max of empty sequence")

TRANSLATE("attempt to get argmin/argmax of an empty sequence")

TRANSLATE("attributes not supported yet")

TRANSLATE("axis is out of bounds")

TRANSLATE("axis must be None, or an integer")

TRANSLATE("axis must be None, or an integer")

TRANSLATE("axis must be None, or an integer")

TRANSLATE("axis too long")

TRANSLATE("background value out of range of target")

TRANSLATE("bad conversion specifier")

TRANSLATE("bad typecode")

TRANSLATE("bad typecode")

TRANSLATE("bitmap sizes must match")

TRANSLATE("bits must be in range 5 to 9")

TRANSLATE("bits_per_sample must be 8 or 16")

TRANSLATE("buffer is smaller than requested size")

TRANSLATE("buffer is smaller than requested size")

TRANSLATE("buffer size must be a multiple of element size")

TRANSLATE("buffer size must be a multiple of element size")

TRANSLATE("buffer size must match format")

TRANSLATE("buffer slices must be of equal length")

TRANSLATE("buffer slices must be of equal length")

TRANSLATE("buffer too small")

TRANSLATE("buffer too small")

TRANSLATE("buffer too small")

TRANSLATE("buffer too small")

TRANSLATE("byteorder is not a string")

TRANSLATE("bytes length not a multiple of item size")

TRANSLATE("bytes value out of range")

TRANSLATE("can only be registered in one parent")

TRANSLATE("can't add special method to already-subclassed class")

TRANSLATE("can't assign to expression")

TRANSLATE("can't assign to expression")

TRANSLATE("can't assign to expression")

TRANSLATE("can't cancel self")

TRANSLATE("can't convert %q to %q")

TRANSLATE("can't convert %q to %q")

TRANSLATE("can't convert %q to %q")

TRANSLATE("can't convert %q to %q")

TRANSLATE("can't convert %q to int")

TRANSLATE("can't convert %s to complex")

TRANSLATE("can't convert '%q' object to %q implicitly")

TRANSLATE("can't declare nonlocal in outer code")

TRANSLATE("can't delete expression")

TRANSLATE("can't do truncated division of a complex number")

TRANSLATE("can't have multiple **x")

TRANSLATE("can't have multiple *x")

TRANSLATE("can't perform relative import")

TRANSLATE("can't send non-None value to a just-started generator")

TRANSLATE("can't set 512 block size")

TRANSLATE("can't set attribute")

TRANSLATE("can't switch from automatic field numbering to manual field specification")

TRANSLATE("can't switch from manual field specification to automatic field numbering")

TRANSLATE("cannot assign new shape")

TRANSLATE("cannot cast output with casting rule")

TRANSLATE("cannot create '%q' instances")

TRANSLATE("cannot import name %q")

TRANSLATE("cannot import name %q")

TRANSLATE("chr() arg not in range(0x110000)")

TRANSLATE("circle can only be registered in one parent")

TRANSLATE("clip point must be (x,y) tuple")

TRANSLATE("code outside range 0~127")

TRANSLATE("code outside range 0~127")

TRANSLATE("color buffer must be 3 bytes (RGB) or 4 bytes (RGB + pad byte)")

TRANSLATE("color buffer must be a buffer, tuple, list, or int")

TRANSLATE("color buffer must be a bytearray or array of type 'b' or 'B'")

TRANSLATE("color must be between 0x000000 and 0xffffff")

TRANSLATE("color should be an int")

TRANSLATE("complex division by zero")

TRANSLATE("constant must be an integer")

TRANSLATE("convolve arguments must be linear arrays")

TRANSLATE("convolve arguments must be ndarrays")

TRANSLATE("convolve arguments must not be empty")

TRANSLATE("could not invert Vandermonde matrix")

TRANSLATE("couldn't determine SD card version")

TRANSLATE("cross is defined for 1D arrays of length 3")

TRANSLATE("data type not understood")

TRANSLATE("default 'except' must be last")

TRANSLATE("default is not a function")

TRANSLATE("destination buffer must be a bytearray or array of type 'B' for bit_depth = 8")

TRANSLATE("destination buffer must be an array of type 'H' for bit_depth = 16")

TRANSLATE("destination_length must be an int >= 0")

TRANSLATE("dict update sequence has wrong length")

TRANSLATE("diff argument must be an ndarray")

TRANSLATE("differentiation order out of range")

TRANSLATE("differentiation order out of range")

TRANSLATE("dimensions do not match")

TRANSLATE("divide by zero")

TRANSLATE("divide by zero")

TRANSLATE("division by zero")

TRANSLATE("division by zero")

TRANSLATE("empty heap")

TRANSLATE("empty separator")

TRANSLATE("empty separator")

TRANSLATE("empty separator")

TRANSLATE("empty sequence")

TRANSLATE("end_x should be an int")

TRANSLATE("exceptions must derive from BaseException")

TRANSLATE("expected ':' after format specifier")

TRANSLATE("expecting just a value for set")

TRANSLATE("expecting key:value for dict")

TRANSLATE("ext_hook is not a function")

TRANSLATE("extra keyword arguments given")

TRANSLATE("extra positional arguments given")

TRANSLATE("file must be a file opened in byte mode")

TRANSLATE("file must be a file opened in byte mode")

TRANSLATE("file must be a file opened in byte mode")

TRANSLATE("file must be a file opened in byte mode")

TRANSLATE("file must be a file opened in byte mode")

TRANSLATE("file must be a file opened in byte mode")

TRANSLATE("filesystem must provide mount method")

TRANSLATE("first argument must be a callable")

TRANSLATE("first argument must be a function")

TRANSLATE("first argument must be a function")

TRANSLATE("first argument must be a function")

TRANSLATE("first argument must be a tuple of ndarrays")

TRANSLATE("first argument must be an ndarray")

TRANSLATE("first argument to super() must be type")

TRANSLATE("first two arguments must be ndarrays")

TRANSLATE("first two arguments must be ndarrays")

TRANSLATE("flattening order must be either 'C', or 'F'")

TRANSLATE("flip argument must be an ndarray")

TRANSLATE("format requires a dict")

TRANSLATE("frequency is read-only for this board")

TRANSLATE("function doesn't take keyword arguments")

TRANSLATE("function expected at most %d arguments, got %d")

TRANSLATE("function got multiple values for argument '%q'")

TRANSLATE("function got multiple values for argument '%q'")

TRANSLATE("function has the same sign at the ends of interval")

TRANSLATE("function is defined for ndarrays only")

TRANSLATE("function missing %d required positional arguments")

TRANSLATE("function missing keyword-only argument")

TRANSLATE("function missing required keyword argument '%q'")

TRANSLATE("function missing required positional argument #%d")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes exactly 9 arguments")

TRANSLATE("generator already executing")

TRANSLATE("generator already executing")

TRANSLATE("generator ignored GeneratorExit")

TRANSLATE("generator raised StopIteration")

TRANSLATE("generator raised StopIteration")

TRANSLATE("identifier redefined as global")

TRANSLATE("identifier redefined as nonlocal")

TRANSLATE("import * not at module level")

TRANSLATE("incompatible native .mpy architecture")

TRANSLATE("incomplete format key")

TRANSLATE("incomplete format")

TRANSLATE("incorrect padding")

TRANSLATE("index is out of bounds")

TRANSLATE("index is out of bounds")

TRANSLATE("index out of range")

TRANSLATE("index out of range")

TRANSLATE("index out of range")

TRANSLATE("indices must be integers, slices, or Boolean lists")

TRANSLATE("initial_value length is wrong")

TRANSLATE("initial_value length is wrong")

TRANSLATE("input and output shapes are not compatible")

TRANSLATE("input argument must be an integer, a tuple, or a list")

TRANSLATE("input array length must be power of 2")

TRANSLATE("input arrays are not compatible")

TRANSLATE("input arrays are not compatible")

TRANSLATE("input data must be an iterable")

TRANSLATE("input data must be an iterable")

TRANSLATE("input matrix is asymmetric")

TRANSLATE("input matrix is asymmetric")

TRANSLATE("input matrix is singular")

TRANSLATE("input matrix is singular")

TRANSLATE("input must be a dense ndarray")

TRANSLATE("input must be a dense ndarray")

TRANSLATE("input must be a tensor of rank 2")

TRANSLATE("input must be an ndarray")

TRANSLATE("input must be one-dimensional")

TRANSLATE("input must be square matrix")

TRANSLATE("input must be tuple, list, range, or ndarray")

TRANSLATE("input must be tuple, list, range, or ndarray")

TRANSLATE("input vectors must be of equal length")

TRANSLATE("inputs are not iterable")

TRANSLATE("int() arg 2 must be >= 2 and <= 36")

TRANSLATE("interp is defined for 1D iterables of equal length")

TRANSLATE("interval must be in range %s-%s")

TRANSLATE("interval must be in range %s-%s")

TRANSLATE("invalid bits_per_pixel %d, must be, 1, 2, 4, 8, 16, 24, or 32")

TRANSLATE("invalid element size %d for bits_per_pixel %d\n")

TRANSLATE("invalid element_size %d, must be, 1, 2, or 4")

TRANSLATE("invalid exception")

TRANSLATE("invalid format specifier")

TRANSLATE("invalid micropython decorator")

TRANSLATE("invalid micropython decorator")

TRANSLATE("invalid step")

TRANSLATE("invalid syntax for integer with base %d")

TRANSLATE("invalid syntax for number")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("invalid traceback")

TRANSLATE("issubclass() arg 1 must be a class")

TRANSLATE("issubclass() arg 2 must be a class or a tuple of classes")

TRANSLATE("iterations did not converge")

TRANSLATE("join expects a list of str/bytes objects consistent with self object")

TRANSLATE("keyword argument(s) not yet implemented - use normal args instead")

TRANSLATE("keywords must be strings")

TRANSLATE("length argument not allowed for this type")

TRANSLATE("level must be between 0 and 1")

TRANSLATE("lhs and rhs should be compatible")

TRANSLATE("local variable referenced before assignment")

TRANSLATE("malformed f-string")

TRANSLATE("math domain error")

TRANSLATE("matrix is not positive definite")

TRANSLATE("max_length must be 0-%d when fixed_length is %s")

TRANSLATE("max_length must be <= 512")

TRANSLATE("max_length must be >= 0")

TRANSLATE("max_length must be >= 0")

TRANSLATE("maximum number of dimensions is 4")

TRANSLATE("maximum recursion depth exceeded")

TRANSLATE("maxiter must be > 0")

TRANSLATE("maxiter must be > 0")

TRANSLATE("maxiter should be > 0")

TRANSLATE("median argument must be an ndarray")

TRANSLATE("memory allocation failed, allocating %u bytes")

TRANSLATE("memory allocation failed, heap is locked")

TRANSLATE("memoryview: length is not a multiple of itemsize")

TRANSLATE("mode must be complete, or reduced")

TRANSLATE("more degrees of freedom than data points")

TRANSLATE("more degrees of freedom than data points")

TRANSLATE("multiple *x in assignment")

TRANSLATE("multiple bases have instance lay-out conflict")

TRANSLATE("must use keyword argument for key function")

TRANSLATE("name '%q' is not defined")

TRANSLATE("need more than %d values to unpack")

TRANSLATE("need more than %d values to unpack")

TRANSLATE("negative shift count")

TRANSLATE("negative shift count")

TRANSLATE("negative shift count")

TRANSLATE("no SD card")

TRANSLATE("no active exception to reraise")

TRANSLATE("no binding for nonlocal found")

TRANSLATE("no default packer")

TRANSLATE("no module named '%q'")

TRANSLATE("no reset pin available")

TRANSLATE("no reset pin available")

TRANSLATE("no reset pin available")

TRANSLATE("no response from SD card")

TRANSLATE("non-Device in %q")

TRANSLATE("non-default argument follows default argument")

TRANSLATE("non-hex digit found")

TRANSLATE("non-keyword arg after */**")

TRANSLATE("non-keyword arg after keyword arg")

TRANSLATE("non-zero timeout must be >= interval")

TRANSLATE("not a 128-bit UUID")

TRANSLATE("not all arguments converted during string formatting")

TRANSLATE("not enough arguments for format string")

TRANSLATE("number of points must be at least 2")

TRANSLATE("number of points must be at least 2")

TRANSLATE("object ")

TRANSLATE("object '%s' isn't a tuple or list")

TRANSLATE("object not in sequence")

TRANSLATE("object not in sequence")

TRANSLATE("object of type '%s' has no len()")

TRANSLATE("object with buffer protocol required")

TRANSLATE("odd-length string")

TRANSLATE("offset is too large")

TRANSLATE("offset is too large")

TRANSLATE("offset must be non-negative and no greater than buffer length")

TRANSLATE("offset out of bounds")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("opcode")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operands could not be broadcast together")

TRANSLATE("operation is defined for 2D arrays only")

TRANSLATE("operation is defined for ndarrays only")

TRANSLATE("operation is implemented for 1D Boolean arrays only")

TRANSLATE("operation is not implemented on ndarrays")

TRANSLATE("operation is not supported for given type")

TRANSLATE("ord() expected a character, but string of length %d found")

TRANSLATE("out array is too small")

TRANSLATE("out must be a float dense array")

TRANSLATE("out of range of source")

TRANSLATE("out of range of target")

TRANSLATE("out of range of target")

TRANSLATE("out of range of target")

TRANSLATE("out of range of target")

TRANSLATE("out of range of target")

TRANSLATE("out of range of target")

TRANSLATE("overflow converting long int to machine word")

TRANSLATE("overflow converting long int to machine word")

TRANSLATE("palette_index should be an int")

TRANSLATE("palette_index should be an int")

TRANSLATE("palette_index should be an int")

TRANSLATE("pixel coordinates out of bounds")

TRANSLATE("pixel coordinates out of bounds")

TRANSLATE("pixel value requires too many bits")

TRANSLATE("pixel value requires too many bits")

TRANSLATE("pixel_shader must be displayio.Palette or displayio.ColorConverter")

TRANSLATE("pixel_shader must be displayio.Palette or displayio.ColorConverter")

TRANSLATE("polygon can only be registered in one parent")

TRANSLATE("pop from empty %q")

TRANSLATE("pop from empty %q")

TRANSLATE("pop from empty %q")

TRANSLATE("pop from empty %q")

TRANSLATE("pow() 3rd argument cannot be 0")

TRANSLATE("pow() with 3 arguments requires integers")

TRANSLATE("pull masks conflict with direction masks")

TRANSLATE("pull_threshold must be between 1 and 32")

TRANSLATE("push_threshold must be between 1 and 32")

TRANSLATE("raw f-strings are not supported")

TRANSLATE("real and imaginary parts must be of equal length")

TRANSLATE("requested length %d but object has length %d")

TRANSLATE("results cannot be cast to specified type")

TRANSLATE("results cannot be cast to specified type")

TRANSLATE("rgb_pins[%d] duplicates another pin assignment")

TRANSLATE("rgb_pins[%d] is not on the same port as clock")

TRANSLATE("roll argument must be an ndarray")

TRANSLATE("rsplit(None,n)")

TRANSLATE("sample_source buffer must be a bytearray or array of type 'h', 'H', 'b' or 'B'")

TRANSLATE("sampling rate out of range")

TRANSLATE("shape must be a tuple")

TRANSLATE("short read")

TRANSLATE("sign not allowed in string format specifier")

TRANSLATE("sign not allowed with integer format specifier 'c'")

TRANSLATE("single '}' encountered in format string")

TRANSLATE("size is defined for ndarrays only")

TRANSLATE("sleep length must be non-negative")

TRANSLATE("slice step cannot be zero")

TRANSLATE("small int overflow")

TRANSLATE("soft reboot\n")

TRANSLATE("sort argument must be an ndarray")

TRANSLATE("sos array must be of shape (n_section, 6)")

TRANSLATE("sos[:, 3] should be all ones")

TRANSLATE("sosfilt requires iterable arguments")

TRANSLATE("source palette too large")

TRANSLATE("source palette too large")

TRANSLATE("source_bitmap must have value_count of 2 or 65536")

TRANSLATE("source_bitmap must have value_count of 65536")

TRANSLATE("source_bitmap must have value_count of 8")

TRANSLATE("start/end indices")

TRANSLATE("start_x should be an int")

TRANSLATE("step must be non-zero")

TRANSLATE("stop must be 1 or 2")

TRANSLATE("stop not reachable from start")

TRANSLATE("stop not reachable from start")

TRANSLATE("stream operation not supported")

TRANSLATE("string indices must be integers, not %q")

TRANSLATE("string not supported; use bytes or bytearray")

TRANSLATE("substring not found")

TRANSLATE("substring not found")

TRANSLATE("super() can't find self")

TRANSLATE("syntax error in JSON")

TRANSLATE("threshold must be in the range 0-65536")

TRANSLATE("tile must be greater than zero")

TRANSLATE("time.struct_time() takes a 9-sequence")

TRANSLATE("timeout duration exceeded the maximum supported value")

TRANSLATE("timeout must be 0.0-100.0 seconds")

TRANSLATE("timeout must be >= 0.0")

TRANSLATE("timeout waiting for v1 card")

TRANSLATE("timeout waiting for v2 card")

TRANSLATE("timestamp out of range for platform time_t")

TRANSLATE("timestamp out of range for platform time_t")

TRANSLATE("tobytes can be invoked for dense arrays only")

TRANSLATE("too many arguments provided with the given format")

TRANSLATE("too many dimensions")

TRANSLATE("too many dimensions")

TRANSLATE("too many indices")

TRANSLATE("too many values to unpack (expected %d)")

TRANSLATE("trapz is defined for 1D arrays of equal length")

TRANSLATE("trapz is defined for 1D iterables")

TRANSLATE("tx and rx cannot both be None")

TRANSLATE("type '%q' is not an acceptable base type")

TRANSLATE("type is not an acceptable base type")

TRANSLATE("type object '%q' has no attribute '%q'")

TRANSLATE("type object 'generator' has no attribute '__await__'")

TRANSLATE("type takes 1 or 3 arguments")

TRANSLATE("unexpected indent")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unicode name escapes")

TRANSLATE("unindent doesn't match any outer indent level")

TRANSLATE("unknown format code '%c' for object of type '%q'")

TRANSLATE("unknown format code '%c' for object of type '%q'")

TRANSLATE("unknown format code '%c' for object of type '%q'")

TRANSLATE("unmatched '{' in format")

TRANSLATE("unreadable attribute")

TRANSLATE("unreadable attribute")

TRANSLATE("unreadable attribute")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported %q type")

TRANSLATE("unsupported colorspace for GifWriter")

TRANSLATE("unsupported colorspace for dither")

TRANSLATE("unsupported format character '%c' (0x%x) at index %d")

TRANSLATE("unsupported type for %q: '%q'")

TRANSLATE("unsupported types for %q: '%q', '%q'")

TRANSLATE("value must fit in %d byte(s)")

TRANSLATE("value must fit in %d byte(s)")

TRANSLATE("value out of range of target")

TRANSLATE("value_count must be > 0")

TRANSLATE("watchdog timeout must be greater than 0")

TRANSLATE("width must be from 2 to 8 (inclusive), not %d")

TRANSLATE("width must be greater than zero")

TRANSLATE("window must be <= interval")

TRANSLATE("wrong axis index")

TRANSLATE("wrong axis index")

TRANSLATE("wrong axis specified")

TRANSLATE("wrong input type")

TRANSLATE("wrong input type")

TRANSLATE("wrong length of condition array")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong output type")

TRANSLATE("wrong output type")

TRANSLATE("x value out of bounds")

TRANSLATE("y should be an int")

TRANSLATE("y value out of bounds")

TRANSLATE("zero step")

TRANSLATE("zi must be an ndarray")

TRANSLATE("zi must be of float type")

TRANSLATE("zi must be of shape (n_section, 2)")
