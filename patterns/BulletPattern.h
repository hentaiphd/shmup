//
//  BulletPattern.h
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//
#pragma once

#ifndef __emptyExample__BulletPattern__
#define __emptyExample__BulletPattern__

#include <iostream>
#include "Bullet.h"

#endif /* defined(__emptyExample__BulletPattern__) */

class BulletPattern{
public:
    vector<Bullet> bullets;
    ofVec2f origin;
    float volley_timeout, bulletspeed;
    bool isrunning;
    int count;
    
    BulletPattern();
    BulletPattern(int count);
    BulletPattern(int count, ofVec2f origin);
    BulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout);
    void init(int count, ofVec2f origin, float bulletspeed, float volley_timeout);
    void draw();
    void update(float deltatime);
    void start();
    
private:
    float frame_lifetime, last_volley;
    virtual void volley() = 0;
};