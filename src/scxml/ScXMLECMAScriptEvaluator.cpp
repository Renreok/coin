/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2008 by Kongsberg SIM.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Kongsberg SIM about acquiring
 *  a Coin Professional Edition License.
 *
 *  See http://www.coin3d.org/ for more information.
 *
 *  Kongsberg SIM, Postboks 1283, Pirsenteret, 7462 Trondheim, NORWAY.
 *  http://www.sim.no/  sales@sim.no  coin-support@coin3d.org
 *
\**************************************************************************/

#include <Inventor/scxml/ScXMLECMAScriptEvaluator.h>

/*!
  \class ScXMLECMAScriptEvaluator ScXMLECMAScriptEvaluator.h Inventor/scxml/ScXMLECMAScriptEvaluator.h
  \brief evaluator for the ECMAScript profile.

  \ingroup scxml
*/

#include <cassert>

class ScXMLECMAScriptEvaluator::PImpl {
public:
};

SCXML_OBJECT_SOURCE(ScXMLECMAScriptEvaluator);

void
ScXMLECMAScriptEvaluator::initClass(void)
{
  SCXML_OBJECT_INIT_CLASS(ScXMLECMAScriptEvaluator, ScXMLEvaluator, "ScXMLEvaluator");
}

void
ScXMLECMAScriptEvaluator::cleanClass(void)
{
  ScXMLECMAScriptEvaluator::classTypeId = SoType::badType();
}

ScXMLECMAScriptEvaluator::ScXMLECMAScriptEvaluator(void)
{
}

ScXMLECMAScriptEvaluator::~ScXMLECMAScriptEvaluator(void)
{
}

ScXMLDataObj *
ScXMLECMAScriptEvaluator::evaluate(const char * expression) const
{
  // FIXME: not implemented
  return NULL;
}

SbBool
ScXMLECMAScriptEvaluator::setAtLocation(const char * location, ScXMLDataObj * obj)
{
  // FIXME: not implemented
  return FALSE;
}

ScXMLDataObj *
ScXMLECMAScriptEvaluator::locate(const char * location) const
{
  // FIXME: not implemented
  return NULL;
}
