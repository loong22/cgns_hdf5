/* ------------------------------------------------------------------------- *
 * CGNS - CFD General Notation System (http://www.cgns.org)                  *
 * CGNS/MLL - Mid-Level Library header file                                  *
 * Please see cgnsconfig.h file for this local installation configuration    *
 * ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- *

  This software is provided 'as-is', without any express or implied warranty.
  In no event will the authors be held liable for any damages arising from
  the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.

  2. Altered source versions must be plainly marked as such, and must not
     be misrepresented as being the original software.

  3. This notice may not be removed or altered from any source distribution.

 * ------------------------------------------------------------------------- */

#ifndef CGNSTYPES_H
#define CGNSTYPES_H

#define CG_BUILD_HDF5   1
#define CG_BUILD_LEGACY 1
#define CG_BUILD_64BIT  0
#define CG_BUILD_SCOPE  1
#define CG_BUILD_BASESCOPE 0
#define CG_BUILD_PARALLEL  1
#define CG_BUILD_COMPLEX_C99_EXT 0

#define CG_MAX_INT32 0x7FFFFFFF

#include <stdint.h>   /* For C9x types */
#include <inttypes.h> /* C99/POSIX.1 header for uint64_t, PRIu64 */
#define CG_LONG_T int64_t
#define CG_U_LONG_T uint64_t

#if CG_BUILD_HDF5

/* ----------------------------------------------------------------
 * convert between HDF5 and ADF ids
 * ---------------------------------------------------------------- */

#define to_ADF_ID(ID,ADF_ID) memcpy(&(ADF_ID),&(ID),sizeof(hid_t))
#define to_HDF_ID(ADF_ID,ID) memcpy(&(ID),&(ADF_ID),sizeof(hid_t))

/* Determine if hdf5 has multi-dataset read/write capabilities */

#define HDF5_HAVE_MULTI_DATASETS 0

/* Determine if hdf5 has collective metadata APIs  */

#define HDF5_HAVE_COLL_METADATA 0

/* Determine if hdf5 H5Pset_file_space_strategy */

#define HDF5_HAVE_FILE_SPACE_STRATEGY 0

#endif

#define  CG_HAVE_STAT64_STRUCT 1

#if CG_BUILD_LEGACY
#include <limits.h>
# define CG_SIZEOF_SIZE    32
# define CG_SIZE_DATATYPE "I4"
# define cgerr_t  int
# define cgint_t  int
# define cgsize_t int
# define cgid_t   double
# define PRIdCGSIZE "d"
# define CG_SIZE_MAX INT_MAX
#else
# if CG_BUILD_64BIT
#  define CG_SIZEOF_SIZE    64
#  define CG_SIZE_DATATYPE "I8"
#  define PRIdCGSIZE PRId64
   typedef int64_t cgsize_t;
#  define CG_SIZE_MAX INT64_MAX
# else
#  define CG_SIZEOF_SIZE    32
#  define CG_SIZE_DATATYPE "I4"
#  define PRIdCGSIZE PRId32
   typedef int32_t cgsize_t;
#  define CG_SIZE_MAX INT32_MAX
# endif
  typedef int cgerr_t;
  typedef int cgint_t;
  typedef double cgid_t;
#endif

/* Define an int type that is interoperabable with Fortran's INTEGER */
#define FORTRAN_DEFAULT_INTEGER_C_INT64_T 0
#if FORTRAN_DEFAULT_INTEGER_C_INT64_T == 1
  typedef CG_LONG_T cgint_f;
#else
  typedef int cgint_f;
#endif


typedef CG_LONG_T cglong_t;
typedef CG_U_LONG_T cgulong_t;

#endif
