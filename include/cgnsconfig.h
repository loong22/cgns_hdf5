/* ------------------------------------------------------------------------- *
 * CGNS - CFD General Notation System (http://www.cgns.org)                  *
 * CGNS/MLL - Mid-Level Library header file                                  *
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

/* ------------------------------------------------------------------------- *
   This file has been generated during the CGNS/MLL installation.
   This is a snapshot of the parameters used for CGNS/MLL production and
   some PATHS parameters (headers or shared libs) may change or
   disappear (for example in case of cross-compilation).
 * ------------------------------------------------------------------------- */

#ifndef CGNSCONFIG_H
#define CGNSCONFIG_H

#define CG_BUILD_DEBUG     0
#define CG_BUILD_FORTRAN   0
#define CG_BUILD_BASESCOPE 0

#define HDF5_INCLUDE_PATH ""
#define HDF5_LIBRARY      "hdf5-shared"

#define HDF5_NEED_MPI     1
#define HDF5_NEED_SZIP    1
#define HDF5_NEED_ZLIB    1

#define MPI_INCLUDE_PATH "C:\msys64\10.1.12498.18\winx64\Include"
#define MPI_LIBRARY      "C:\msys64\10.1.12498.18\winx64\Lib\x64\msmpi.lib"
#define SZIP_LIBRARY     "C:\Users\Loong\Downloads\szip-2.1.1\build-release\bin\libszip-static.a"
#define ZLIB_LIBRARY     "C:\Users\Loong\Downloads\zlib-1.3.1\build-release\libzlibstatic.a"

#define MPI_INC          "C:\msys64\10.1.12498.18\winx64\Include"
#define MPI_LIBS         "C:\msys64\10.1.12498.18\winx64\Lib\x64\msmpi.lib"

#include "cgnstypes.h"

#endif
