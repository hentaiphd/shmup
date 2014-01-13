//
//  Bullet.h
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#ifndef __emptyExample__Bullet__
#define __emptyExample__Bullet__

#include "ofMain.h"
#include "GameObject.h"
#include <iostream>

#endif /* defined(__emptyExample__Bullet__) */

class Bullet : public GameObject {
public:
    float radius;
    bool hasfired;
    
    Bullet();
    Bullet(ofVec2f pos, ofVec2f dir);
    void fire();
    void draw();
    void mouseMoved(int x, int y);
    void update(float deltatime);
};
