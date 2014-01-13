//
//  CyclicEllipseBulletPattern.cpp
//  shmup
//
//  Created by Emmett Butler on 1/13/14.
//
//

#include "CyclicEllipseBulletPattern.h"

CyclicEllipseBulletPattern::CyclicEllipseBulletPattern(int count, ofVec2f origin)
    : BulletPattern(count, origin)
{
}

CyclicEllipseBulletPattern::CyclicEllipseBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout)
: BulletPattern(count, origin, bulletspeed, volley_timeout)
{
}

void CyclicEllipseBulletPattern::volley(){
    static float angle = 1;
    static float mult = 1;
    float radius = 20;
    float speed_multiplier;
    
    for(int i = 0; i < this->count; i++){
        ofVec2f thispos = ofVec2f(radius*sin(angle),radius*cos(angle)*mult);
        speed_multiplier = this->bulletspeed*.01;
        Bullet *b = new Bullet(this->origin+thispos, thispos*speed_multiplier);
        bullets.push_back(*b);
        angle += (2*PI)/this->count;
    }
    angle++;
    mult = 3*sin(ofGetElapsedTimef());
}