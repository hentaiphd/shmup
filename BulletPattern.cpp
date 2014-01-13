//
//  BulletPattern.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "BulletPattern.h"

BulletPattern::BulletPattern(){
    this->volley_timeout = 1;
    this->frame_lifetime = 0;
    this->last_volley = 0;
    this->isrunning = false;
    this->start();
}

void BulletPattern::start(){
    this->isrunning = true;
}

void BulletPattern::update(float deltatime){
    for(vector<Bullet>::iterator it = bullets.begin(); it != bullets.end(); it++){
        it->update(deltatime);
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