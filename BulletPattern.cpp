//
//  BulletPattern.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "BulletPattern.h"

BulletPattern::BulletPattern(){
    this->init(30, ofVec2f(0,0), .05, 1);
}

BulletPattern::BulletPattern(int count) {
    this->init(count, ofVec2f(0,0), .05, 1);
}

BulletPattern::BulletPattern(int count, ofVec2f origin) {
    this->init(count, origin, .05, 1);
}

BulletPattern::BulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout){
    this->init(count, origin, bulletspeed, volley_timeout);
}

void BulletPattern::init(int count, ofVec2f origin, float bulletspeed, float volley_timeout) {
    this->volley_timeout = volley_timeout;
    this->count = count;
    this->bulletspeed = bulletspeed;
    this->origin = origin;
    this->last_volley = 0;
    this->frame_lifetime = 0;
    this->isrunning = false;
    this->start();
}

void BulletPattern::start(){
    this->isrunning = true;
}

void BulletPattern::update(float deltatime){
    vector<Bullet>::iterator it = bullets.begin();
    while(it != bullets.end()){
        it->update(deltatime);
        if (!it->is_onscreen()) {
            it = bullets.erase(it);
        } else {
            ++it;
        }
    }
    
    if (!this->isrunning) {
        return;
    }
    
    this->frame_lifetime += deltatime;
    
    if (this->frame_lifetime > this->last_volley+this->volley_timeout) {
        this->last_volley += this->volley_timeout;
        this->volley();
    }
}

void BulletPattern::draw(){
    for(vector<Bullet>::iterator it = bullets.begin(); it != bullets.end(); it++){
        it->draw();
    }
}