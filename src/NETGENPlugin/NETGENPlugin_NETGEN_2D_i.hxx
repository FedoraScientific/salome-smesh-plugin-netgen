//  NETGENPlugin : idl implementation
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
//  File   : NETGENPlugin_NETGEN_2D_i.hxx
//  Author : Michael Sazonov (OCN)
//  Module : NETGENPlugin
//  $Header$

#ifndef _NETGENPlugin_NETGEN_2D_I_HXX_
#define _NETGENPlugin_NETGEN_2D_I_HXX_

#include <SALOMEconfig.h>
#include CORBA_SERVER_HEADER(NETGENPlugin_Algorithm)

#include "SMESH_2D_Algo_i.hxx"
#include "NETGENPlugin_NETGEN_2D.hxx"

// ======================================================
// NETGEN 3d algorithm
// ======================================================
class NETGENPlugin_NETGEN_2D_i:
  public virtual POA_NETGENPlugin::NETGENPlugin_NETGEN_2D,
  public virtual SMESH_2D_Algo_i
{
public:
  // Constructor
  NETGENPlugin_NETGEN_2D_i( PortableServer::POA_ptr thePOA,
                            int                     theStudyId,
                            ::SMESH_Gen*            theGenImpl );
  // Destructor
  virtual ~NETGENPlugin_NETGEN_2D_i();
 
  // Get implementation
  ::NETGENPlugin_NETGEN_2D* GetImpl();
};

#endif