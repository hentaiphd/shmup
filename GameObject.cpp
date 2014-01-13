//
//  GameObject.cpp
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#include "GameObject.h"

void GameObject::update(float deltatime){
    this->pos += this->dir;
}