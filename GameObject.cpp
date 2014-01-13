//
//  GameObject.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "GameObject.h"

void GameObject::update(float deltatime){
    this->pos += this->dir*ceil(deltatime/MIN_DELTA);
}

bool GameObject::is_onscreen(){
    return (this->pos.x <= ofGetWidth() && this->pos.x >= 0 &&
            this->pos.y <= ofGetHeight() && this->pos.y >= 0);
}