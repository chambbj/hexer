/*****************************************************************************

    (c) 2013 Hobu, Inc. hobu.inc@gmail.com

    Author: Andrew Bell andrew.bell.ia at gmail.com

    This is free software; you can redistribute and/or modify it under the
    terms of the GNU Lesser General Licence as published by the Free Software
    Foundation. See the COPYING file for more information.

    This software is distributed WITHOUT ANY WARRANTY and without even the
    implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************************/


#define HEXER_VERSION_MAJOR    1
#define HEXER_VERSION_MINOR    0
#define HEXER_VERSION_REVISION 0

#include <hexer/hexer_defines.h>

#include <stdexcept>

namespace hexer
{
    
class hexer_error : public std::runtime_error
{
public:
    hexer_error(std::string const& msg)
        : std::runtime_error(msg)
    {}
};

}