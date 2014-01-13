//
//  Player.h
//  shmup
//
//  Created by Emmett Butler on 1/13/14.
//
//

#ifndef __shmup__Player__
#define __shmup__Player__

#include <iostream>
#include "GameObject.h"

#endif /* defined(__shmup__Player__) */

typedef enum _controlType {
    kControlTypeKeyboard, kControlTypeMouse
} controlType;

class Player : public GameObject {
public:
    float speed;
    
    Player(controlType control_type);
    void draw();
    void update(float deltatime);
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);

private:
    controlType control_type;
};