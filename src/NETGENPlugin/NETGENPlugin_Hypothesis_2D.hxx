//  NETGENPlugin : C++ implementation
//
//  Copyright (C) 2006  OPEN CASCADE, CEA/DEN, EDF R&D
// 
//  This library is free software; you can redistribute it and/or 
//  modify it under the terms of the GNU Lesser General Public 
//  License as published by the Free Software Foundation; either 
//  version 2.1 of the License. 
// 
//  This library is distributed in the hope that it will be useful, 
//  but WITHOUT ANY WARRANTY; without even the implied warranty of 
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
//  Lesser General Public License for more details. 
// 
//  You should have received a copy of the GNU Lesser General Public 
//  License along with this library; if not, write to the Free Software 
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA 
// 
//  See http://www.opencascade.org/SALOME/ or email : webmaster.salome@opencascade.org 
//
//
// File      : NETGENPlugin_Hypothesis_2D.hxx
// Author    : Michael Sazonov (OCN)
// Date      : 27/03/2006
// Project   : SALOME
// $Header$
//=============================================================================

#ifndef _NETGENPlugin_Hypothesis_2D_HXX_
#define _NETGENPlugin_Hypothesis_2D_HXX_

#include "NETGENPlugin_Hypothesis.hxx"
#include "Utils_SALOME_Exception.hxx"

//  Parameters for work of NETGEN.
// This class is just to give 2D dimension, actually
// it inherits all behaviour of the parent 

class NETGENPlugin_Hypothesis_2D: public NETGENPlugin_Hypothesis
{
public:

  NETGENPlugin_Hypothesis_2D(int hypId, int studyId, SMESH_Gen * gen);

  void SetQuadAllowed(bool theVal);
  bool GetQuadAllowed() const { return _quadAllowed; }
  static bool GetDefaultQuadAllowed();

  // Persistence
  virtual ostream & SaveTo(ostream & save);
  virtual istream & LoadFrom(istream & load);

private:
  bool _quadAllowed;
};

#endif