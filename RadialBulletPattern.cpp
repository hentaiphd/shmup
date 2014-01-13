//
//  RadialBulletPattern.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "RadialBulletPattern.h"

RadialBulletPattern::RadialBulletPattern(int count, ofVec2f origin)
    : BulletPattern(count, origin)
{
}

void RadialBulletPattern::volley(){
    static float angle = 1;
    float radius = 20;
    
    for(int i = 0; i < this->count; i++){
        ofVec2f thispos = ofVec2f(radius*sin(angle),radius*cos(angle));
        Bullet *b = new Bullet(this->origin+thispos, thispos*this->bulletspeed);
        bullets.push_back(*b);
        angle += (2*PI)/this->count;
    }
    angle++;
}
