//===========================================================================
/*
    This file is part of the CHAI 3D visualization and haptics libraries.
    Copyright (C) 2003-2004 by CHAI 3D. All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License("GPL") version 2
    as published by the Free Software Foundation.

    For using the CHAI 3D libraries with software that can not be combined
    with the GNU GPL, and for taking advantage of the additional benefits
    of our support services, please contact CHAI 3D about acquiring a
    Professional Edition License.

    \author:    <http://www.chai3d.org>
    \author:    Dan Morris
    \version    1.0
    \date       05/2005
*/
//===========================================================================

//---------------------------------------------------------------------------
#ifndef chaiGlobalsH
#define chaiGlobalsH
//---------------------------------------------------------------------------
#if (defined(_MSC_VER) && (!(defined(_MSVC))))
#define _MSVC
#endif

#ifdef _MSVC
#include <conio.h>
#define CHAI_DEBUG_PRINT _cprintf
#else 
#define CHAI_DEBUG_PRINT printf
#endif

#endif

