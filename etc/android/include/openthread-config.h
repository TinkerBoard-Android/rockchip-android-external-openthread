/* include/openthread-config.h.  Generated from openthread-config.h.in by configure.  */
/* include/openthread-config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if your C++ compiler doesn't accept -c and -o together. */
/* #undef CXX_NO_MINUS_C_MINUS_O */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `memcpy' function. */
/* #undef HAVE_MEMCPY */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if stdbool.h conforms to C99. */
/* #undef HAVE_STDBOOL_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to 1 if you want to enable CoAP to an application. */
#define OPENTHREAD_ENABLE_APPLICATION_COAP 0

/* Define to 1 if you want to enable log for certification test */
#define OPENTHREAD_ENABLE_CERT_LOG 0

/* Define to 1 to enable the commissioner role. */
#define OPENTHREAD_ENABLE_COMMISSIONER 0

/* Define to 1 if you want to enable default logging */
#define OPENTHREAD_ENABLE_DEFAULT_LOGGING 0

/* Define to 1 if you want to enable DHCPv6 Client */
#define OPENTHREAD_ENABLE_DHCP6_CLIENT 0

/* Define to 1 if you want to enable DHCPv6 Server */
#define OPENTHREAD_ENABLE_DHCP6_SERVER 0

/* Define to 1 if you want to use diagnostics module */
#define OPENTHREAD_ENABLE_DIAG 0

/* Define to 1 to enable dtls support. */
#define OPENTHREAD_ENABLE_DTLS 0

/* Define to 1 if you want to use jam detection feature */
#define OPENTHREAD_ENABLE_JAM_DETECTION 0

/* Define to 1 to enable the joiner role. */
#define OPENTHREAD_ENABLE_JOINER 0

/* Define to 1 if you want to use legacy network support */
#define OPENTHREAD_ENABLE_LEGACY 0

/* Define to 1 if you want to use MAC whitelist/blacklist feature */
#define OPENTHREAD_ENABLE_MAC_WHITELIST 1

/* Define to 1 if you want to enable raw link-layer API */
#define OPENTHREAD_ENABLE_RAW_LINK_API 1

/* OpenThread examples */
#define OPENTHREAD_EXAMPLES posix

/* Define to 1 if you want to use cc2538 examples */
/* #undef OPENTHREAD_EXAMPLES_CC2538 */

/* Define to 1 if you want to use da15000 examples */
/* #undef OPENTHREAD_EXAMPLES_DA15000 */

/* Define to 1 if you want to use nrf52840 examples */
/* #undef OPENTHREAD_EXAMPLES_NRF52840 */

/* Define to 1 if you want to use posix examples */
#define OPENTHREAD_EXAMPLES_POSIX 1

/* Name of package */
#define PACKAGE "openthread"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "openthread-devel@googlegroups.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "OPENTHREAD"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "OPENTHREAD g5c755a30"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "openthread"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://github.com/openthread/openthread"

/* Define to the version of this package. */
#define PACKAGE_VERSION "g5c755a30"

/* OpenThread platform information */
#define PLATFORM_INFO "none"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "g5c755a30"

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */
