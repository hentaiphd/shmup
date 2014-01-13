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

void CyclicEllipseBulletPattern::volley(){
    static float angle = 1;
    static float mult = 1;
    float radius = 20;
    
    for(int i = 0; i < this->count; i++){
        ofVec2f thispos = ofVec2f(radius*sin(angle),radius*cos(angle)*mult);
        Bullet *b = new Bullet(this->origin+thispos, thispos*this->bulletspeed);
        bullets.push_back(*b);
        angle += (2*PI)/this->count;
    }
    angle++;
    mult = 3*sin(ofGetElapsedTimef());
}