//
//  GameObject.h
//  emptyExample
//
//  Created by Nina Freeman on 1/12/14.
//
//

#ifndef __emptyExample__GameObject__
#define __emptyExample__GameObject__

#include "ofMain.h"
#include <iostream>

#endif /* defined(__emptyExample__GameObject__) */

#define MIN_DELTA .03

class GameObject{
public:
    ofVec2f pos, dir;
    
    virtual void draw() = 0;
    virtual void update(float deltatime);
    bool is_onscreen();
};