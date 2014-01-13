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
    this->radius = 8;
    this->hasfired = false;
    
    this->fire();
}

void Bullet::draw(){
    ofCircle(this->pos.x, this->pos.y, this->radius);
}

void Bullet::fire(){
    this->hasfired = true;
}

void Bullet::mouseMoved(int x, int y) {}

void Bullet::update(float deltatime){
    if(this->hasfired){
        GameObject::update(deltatime);
    }
}