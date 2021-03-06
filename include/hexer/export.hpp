/*****************************************************************************

    (c) 2013 Hobu, Inc. hobu.inc@gmail.com

    Author: Andrew Bell andrew.bell.ia at gmail.com

    This is free software; you can redistribute and/or modify it under the
    terms of the GNU Lesser General Licence as published by the Free Software
    Foundation. See the COPYING file for more information.

    This software is distributed WITHOUT ANY WARRANTY and without even the
    implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************************/

#ifndef INCLUDED_HEXER_EXPORT_HPP
#define INCLUDED_HEXER_EXPORT_HPP

#include <hexer/hexer_defines.h>

#ifndef HEXER_DLL
#if defined(HEXER_COMPILER_MSVC) && !defined(HEXER_DISABLE_DLL)
#if defined(HEXER_DLL_EXPORT)
#   define HEXER_DLL   __declspec(dllexport)
#elif defined(HEXER_DLL_IMPORT)
#   define HEXER_DLL   __declspec(dllimport)
#else
#   define HEXER_DLL
#endif
#else
#  if defined(USE_GCC_VISIBILITY_FLAG)
#    define HEXER_DLL     __attribute__ ((visibility("default")))
#  else
#    define HEXER_DLL
#  endif
#endif
#endif

#ifdef HEXER_COMPILER_MSVC
#pragma warning(disable:4251)// [templated class] needs to have dll-interface...
#endif

#endif
