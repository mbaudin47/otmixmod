/***************************************************************************
                             SRC/MIXMOD/XEMError.h  description
    copyright            : (C) MIXMOD Team - 2001-2011
    email                : contact@mixmod.org
***************************************************************************/

/***************************************************************************
    This file is part of MIXMOD

    MIXMOD is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MIXMOD is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MIXMOD.  If not, see <http://www.gnu.org/licenses/>.

    All informations available on : http://www.mixmod.org
***************************************************************************/
#ifndef XEMERROR_H
#define XEMERROR_H

#include "XEMUtil.h"

/**
   @brief Base class for Error(s)
   @author F Langrognet & A Echenim
*/

class XEMError{

 public:

  /// Default constructor
  XEMError();

  /// Constructor
  XEMError(XEMErrorType errorType);

  /// Destructor
  ~XEMError();


  /// Run method
  void run(ostream & flux=std::cout);


 private :

  /// Type of error
  XEMErrorType _errorType;
};

#endif