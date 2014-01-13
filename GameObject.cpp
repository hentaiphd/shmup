//
//  GameObject.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "GameObject.h"

void GameObject::update(float deltatime){
    // scale the movement by the number of MIN_DELTAs in deltatime
    // to account for slower framerates
    float scale = ceil(deltatime/MIN_DELTA);
    this->pos += this->dir*scale;
}

bool GameObject::is_onscreen(){
    return (this->pos.x <= ofGetWidth() && this->pos.x >= 0 &&
            this->pos.y <= ofGetHeight() && this->pos.y >= 0);
}

void GameObject::keyPressed(int key){
}

void GameObject::keyReleased(int key){
}

void GameObject::mouseMoved(int x, int y){
}