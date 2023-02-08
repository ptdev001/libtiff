# Copyright © 2015 Open Microscopy Environment / University of Dundee
# Copyright © 2021 Roger Leigh <rleigh@codelibre.net>
# Written by Roger Leigh <rleigh@codelibre.net>
#
# Permission to use, copy, modify, distribute, and sell this software and
# its documentation for any purpose is hereby granted without fee, provided
# that (i) the above copyright notices and this permission notice appear in
# all copies of the software and related documentation, and (ii) the names of
# Sam Leffler and Silicon Graphics may not be used in any advertising or
# publicity relating to the software without the specific, prior written
# permission of Sam Leffler and Silicon Graphics.
#
# THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND,
# EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
# WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
#
# IN NO EVENT SHALL SAM LEFFLER OR SILICON GRAPHICS BE LIABLE FOR
# ANY SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
# OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
# WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF
# LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
# OF THIS SOFTWARE.

cmake_minimum_required (VERSION 2.8.3)
# name of the library
project(LibTiff)
 
option(tiff-deprecated "build TIFF deprecated features" OFF)

 # Disable deprecated features to ensure clean build
if (tiff-deprecated)
  add_definitions(-DTIFF_DISABLE_DEPRECATED)
endif()

set(SOURCES
    tif_aux.c
    tif_close.c
    tif_codec.c
    tif_color.c
    tif_compress.c
    tif_dir.c
    tif_dirinfo.c
    tif_dirread.c
    tif_dirwrite.c
    tif_dumpmode.c
    tif_error.c
    tif_extension.c
    tif_fax3.c
    tif_fax3sm.c
    tif_flush.c
    tif_getimage.c
    tif_jpeg.c
    tif_luv.c
    tif_lzw.c
    tif_next.c
    tif_ojpeg.c
    tif_open.c
    tif_packbits.c
    tif_pixarlog.c
    tif_predict.c
    tif_print.c
    tif_read.c
    tif_strip.c
    tif_swab.c
    tif_thunder.c
    tif_tile.c
    tif_unix.c
    tif_version.c
    tif_warning.c
    tif_write.c
    tif_zip.c
    )
 
set(PUBLICHEADERS
        tiff.h
        tiffio.h
        tiffvers.h
        tiffconf.h
        )

set(PRIVATE PRIVATEHEADERS
        t4.h
        tif_dir.h
        tiffiop.h
        tif_predict.h
        uvcode.h
        tif_config.h
        )

 
# if static library
add_library(LibTiff STATIC ${SOURCES} ${PUBLICHEADERS} ${PRIVATEHEADERS})
 
# we need consistent naming windows and unix
set_target_properties(LibTiff PROPERTIES PREFIX "")
 
set_target_properties(LibTiff PROPERTIES OUTPUT_NAME "libtiff")


# import for static library
set_property(TARGET LibTiff PROPERTY POSITION_INDEPENDENT_CODE ON)
 
# wo definded PROJECT_VERSION, cMake would not work
set(PROJECT_VERSION "1.0")

set_target_properties(LibTiff PROPERTIES
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER ${PUBLICHEADERS}
    PRIVATE_HEADER ${PRIVATEHEADERS})


# specify content of install directory
install(TARGETS LibTiff DESTINATION lib)
install(FILES ${PUBLICHEADERS} DESTINATION include)