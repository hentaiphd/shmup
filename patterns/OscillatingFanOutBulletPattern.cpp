//
//  OscillatingFanOutBulletPattern.cpp
//  shmup
//
//  Created by Emmett Butler on 1/13/14.
//
//

#include "OscillatingFanOutBulletPattern.h"

OscillatingFanOutBulletPattern::OscillatingFanOutBulletPattern()
: FanOutBulletPattern()
{
}

OscillatingFanOutBulletPattern::OscillatingFanOutBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout, ofVec2f direction)
: FanOutBulletPattern(count, origin, bulletspeed, volley_timeout, 0, direction)
{
}

void OscillatingFanOutBulletPattern::volley() {
    static int orig_count = this->count;
    FanOutBulletPattern::volley();
    this->width = PI+(PI*sin(ofGetElapsedTimef()));
    if (this->width < PI) {
        this->count = orig_count/3;
    } else {
        this->count = orig_count;
    }
}