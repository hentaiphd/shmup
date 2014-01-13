//
//  Bullet.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "Bullet.h"

Bullet::Bullet(ofVec2f pos, ofVec2f dir){
    this->pos = pos;
    this->dir = dir;
    this->radius = 10;
    this->hasfired = false;
    
    printf("pos.x: %0.2f x %0.2f\n", this->pos.x, this->pos.y);
    
    this->fire();
}

void Bullet::draw(){
    ofCircle(this->pos.x, this->pos.y, this->radius);
}

void Bullet::fire(){
    this->hasfired = true;
}

void Bullet::update(float deltatime){
    if(this->hasfired){
        GameObject::update(deltatime);
    }
}