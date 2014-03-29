//
//  TargetedBulletPattern.h
//  emptyExample
//
//  Created by Emmett Butler on 3/29/14.
//
//

#ifndef __emptyExample__TargetedBulletPattern__
#define __emptyExample__TargetedBulletPattern__

#include <iostream>
#include "BulletPattern.h"

#endif /* defined(__emptyExample__TargetedBulletPattern__) */

class TargetedBulletPattern : public BulletPattern{
public:
    TargetedBulletPattern(int count, ofVec2f origin);
    TargetedBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout);
    void volley();
};