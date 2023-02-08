/* libtiff/tif_config.h.in.  Not generated, but originated from autoheader.  */
#ifndef _tif_config_h
#define _tif_config_h
#include "tiffconf.h"

#ifdef _WIN32
  #pragma warning(disable : 4013)  // 'function' undefined; assuming extern returning int
  #pragma warning(disable : 4244)  // 'argument' : conversion from 'type1' to 'type2', possible loss of data
  #pragma warning(disable : 4305)  // 'identifier' : truncation from 'type1' to 'type2'
  #pragma warning(disable : 4306)  // 'identifier' : conversion from ' type1 ' to ' type2 ' of greater size
  #pragma warning(disable : 4311)  // 'variable' : pointer truncation from 'type' to 'type'
  #pragma warning(disable : 4312)  // 'operation' : conversion from 'type1' to 'type2' of greater size
  #pragma warning(disable : 4334)  // 'operator' : result of 32-bit shift implicitly converted to 64 bits (was 64-bit
                                   // shift intended?)
  #pragma warning(disable : 4456)  // declaration of 'identifier' hides previous local declaration
  #pragma warning(disable : 4457)  // declaration of 'identifier' hides function parameter
  #pragma warning(disable : 4706)  // assignment within conditional expression
#endif

/* Support CCITT Group 3 & 4 algorithms */
#define CCITT_SUPPORT 1

/* Pick up YCbCr subsampling info from the JPEG data stream to support files
   lacking the tag (default enabled). */
#define CHECK_JPEG_YCBCR_SUBSAMPLING 1

/* enable partial strip reading for large strips (experimental) */
/* #define CHUNKY_STRIP_READ_SUPPORT 1*/

/* Support C++ stream API (requires C++ compiler) */
#define CXX_SUPPORT 1

/* enable deferred strip/tile offset/size loading */
/* #define DEFER_STRILE_LOAD 1 */

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the declaration of `optarg', and to 0 if you don't.
 */
#define HAVE_DECL_OPTARG 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
/* define HAVE_FSEEKO 1 */

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the <GLUT/glut.h> header file. */
#define HAVE_GLUT_GLUT_H 1

/* Define to 1 if you have the <GL/glut.h> header file. */
#define HAVE_GL_GLUT_H 1

/* Define to 1 if you have the <GL/glu.h> header file. */
#define HAVE_GL_GLU_H 1

/* Define to 1 if you have the <GL/gl.h> header file. */
#define HAVE_GL_GL_H 1

/* Define to 1 if you have the <io.h> header file. */
#ifdef _WIN32
  #define HAVE_IO_H 1
#endif

/* Define to 1 if you have the `jbg_newlen' function. */
/* #define HAVE_JBG_NEWLEN */

#ifndef _WIN32 /* XXX GOM */
  /* Define to 1 if you have the `mmap' function. */
  #define HAVE_MMAP 1
#else
/* #define HAVE_MMAP */
#endif
#ifndef _WIN32 /* XXX GOM */
  /* Define to 1 if you have the <search.h> header file. */
  #define HAVE_SEARCH_H 1
#else
  #undef HAVE_SEARCH
#endif

/* Define to 1 if you have the <OpenGL/glu.h> header file. */
#define HAVE_OPENGL_GLU_H 1

/* Define to 1 if you have the <OpenGL/gl.h> header file. */
#define HAVE_OPENGL_GL_H 1

/* Define to 1 if you have the `setmode' function. */
#define HAVE_SETMODE 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

#ifdef _WIN32 /* XXX GOM */
  /* Define to 1 if you have the <unistd.h> header file. */
  /* #define HAVE_UNISTD_H */
  #define HAVE_WINDOWS_H 1
#else
  #define HAVE_UNISTD_H 1
#endif

/* 8/12 bit libjpeg dual mode enabled */
/* #define JPEG_DUAL_MODE_8_12 1 */

/* Support LERC compression */
/* #define LERC_SUPPORT 1 */

/* 12bit libjpeg primary include file with path */
/* #define LIBJPEG_12_PATH 1 */

/* Support LZMA2 compression */
/* #define LZMA_SUPPORT 1 */

/* Name of package */
#define PACKAGE "tiff"

/* Define to the address where bug reports for this package should be sent. */
/* #define PACKAGE_BUGREPORT "tiff@lists.maptools.org"*/

/* Define to the full name of this package. */
#define PACKAGE_NAME "LibTIFF Software"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "LibTIFF Software 4.4.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "tiff"

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.0"

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* Default size of the strip in bytes (when strip chopping enabled) */
#define STRIP_SIZE_DEFAULT 8192

/* define to use win32 IO system */
#ifdef _WIN32
  #define USE_WIN32_FILEIO 1
#endif

/* Version number of package */
/* #undef VERSION */

/* Support webp compression */
/* #undef WEBP_SUPPORT */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
  #if defined __BIG_ENDIAN__
    #define WORDS_BIGENDIAN 1
  #endif
#else
  #ifndef WORDS_BIGENDIAN
    #undef WORDS_BIGENDIAN
  #endif
#endif

/* Support zstd compression */
/* #undef ZSTD_SUPPORT */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
  #define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

#if !defined(__MINGW32__)
  #define TIFF_SIZE_FORMAT "zu"
#endif
#if SIZEOF_SIZE_T == 8
  #define TIFF_SSIZE_FORMAT PRId64
  #if defined(__MINGW32__)
    #define TIFF_SIZE_FORMAT PRIu64
  #endif
#elif SIZEOF_SIZE_T == 4
  #define TIFF_SSIZE_FORMAT PRId32
  #if defined(__MINGW32__)
    #define TIFF_SIZE_FORMAT PRIu32
  #endif
#else
  #error "Unsupported size_t size; please submit a bug report"
#endif
#endif
