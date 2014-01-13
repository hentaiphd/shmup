//
//  OscillatingFanOutBulletPattern.h
//  shmup
//
//  Created by Emmett Butler on 1/13/14.
//
//

#ifndef __shmup__OscillatingFanOutBulletPattern__
#define __shmup__OscillatingFanOutBulletPattern__

#include <iostream>
#include "FanOutBulletPattern.h"

#endif /* defined(__shmup__OscillatingFanOutBulletPattern__) */

class OscillatingFanOutBulletPattern : public FanOutBulletPattern {
public:
    OscillatingFanOutBulletPattern();
    OscillatingFanOutBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout, ofVec2f direction);
    void volley();
};