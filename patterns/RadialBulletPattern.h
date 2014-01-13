//
//  RadialBulletPattern.h
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#ifndef __emptyExample__RadialBulletPattern__
#define __emptyExample__RadialBulletPattern__

#include <iostream>
#include "BulletPattern.h"

#endif /* defined(__emptyExample__RadialBulletPattern__) */

class RadialBulletPattern : public BulletPattern{
public:
    RadialBulletPattern(int count, ofVec2f origin);
    RadialBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout);
    void volley();
};