//
//  FanOutBulletPattern.h
//  shmup
//
//  Created by Emmett Butler on 1/13/14.
//
//
#pragma once

#ifndef __shmup__FanOutBulletPattern__
#define __shmup__FanOutBulletPattern__

#include <iostream>
#include "BulletPattern.h"

#endif /* defined(__shmup__FanOutBulletPattern__) */

class FanOutBulletPattern : public BulletPattern {
public:
    float width;  // fanout angle in radians
    float rotation_speed;  // amount to rotate per volley in radians
    ofVec2f direction;  // normalized vector indicating direction of fanout
    
    FanOutBulletPattern();
    FanOutBulletPattern(float width, ofVec2f direction);
    FanOutBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout, float width, ofVec2f direction);
    FanOutBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout, float width, ofVec2f direction, float rotation_speed);
    void volley();
};