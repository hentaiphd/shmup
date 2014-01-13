//
//  RadialBulletPattern.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "RadialBulletPattern.h"

RadialBulletPattern::RadialBulletPattern(ofVec2f origin, float bulletspeed, float volley_timeout){
    this->volley_timeout = volley_timeout;
    this->origin = origin;
    this->bulletspeed = bulletspeed;
    this->lastangle = 0;
}

void RadialBulletPattern::volley(){
    float angle = 1+this->lastangle++;
    float radius = 70;
    int loopy = 60;
    
    for(int i = 0; i < loopy; i++){
        ofVec2f thispos = ofVec2f(radius*sin(angle),radius*cos(angle));
        Bullet *b = new Bullet(this->origin+thispos, thispos*this->bulletspeed);
        bullets.push_back(*b);
        angle += (2*PI)/loopy;
    }
}
