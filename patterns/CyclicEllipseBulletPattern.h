//
//  CyclicEllipseBulletPattern.h
//  shmup
//
//  Created by Emmett Butler on 1/13/14.
//
//

#ifndef __shmup__CyclicEllipseBulletPattern__
#define __shmup__CyclicEllipseBulletPattern__

#include <iostream>
#include "BulletPattern.h"

#endif /* defined(__shmup__CyclicEllipseBulletPattern__) */

class CyclicEllipseBulletPattern : public BulletPattern{
public:
    CyclicEllipseBulletPattern(int count, ofVec2f origin);
    CyclicEllipseBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout);
    void volley();
};