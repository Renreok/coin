/**************************************************************************\
 *
 *  Copyright (C) 1998-2000 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
\**************************************************************************/

#ifndef COIN_SOHANDLEEVENTACTION_H
#define COIN_SOHANDLEEVENTACTION_H

#include <Inventor/actions/SoAction.h>
#include <Inventor/actions/SoSubAction.h>
#include <Inventor/SbViewportRegion.h>

class SoEvent;
class SoPickedPoint;
class SoPickedPointList;
class SoRayPickAction;


class SoHandleEventAction : public SoAction {
  typedef SoAction inherited;

  SO_ACTION_HEADER(SoHandleEventAction);

public:
  SoHandleEventAction(const SbViewportRegion & viewportRegion);
  virtual ~SoHandleEventAction();
  static void initClass(void);

  void setViewportRegion(const SbViewportRegion & newRegion);
  const SbViewportRegion & getViewportRegion(void) const;
  void setEvent(const SoEvent * ev);
  const SoEvent * getEvent(void) const;
  void setHandled(void);
  SbBool isHandled(void) const;
  void setGrabber(SoNode * node);
  void releaseGrabber(void);
  SoNode * getGrabber(void) const;
  void setPickRoot(SoNode * node);
  SoNode * getPickRoot(void) const;
  void setPickRadius(const float radiusInPixels);
  const SoPickedPoint * getPickedPoint(void);
  const SoPickedPointList & getPickedPointList(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:

  SoRayPickAction *getPickAction();

  SbViewportRegion viewport;
  const SoEvent *event;
  SoNode *grabber;
  SoNode *pickRoot;
  SbBool pickValid;
  SbBool didPickAll;
  SoRayPickAction *pickAction;
  SoNode *applyNode;
};

#endif // !COIN_SOHANDLEEVENTACTION_H
