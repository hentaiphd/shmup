//
//  TargetedBulletPattern.cpp
//  emptyExample
//
//  Created by Emmett Butler on 3/29/14.
//
//

#include "TargetedBulletPattern.h"
#include "Player.h"

TargetedBulletPattern::TargetedBulletPattern(int count, ofVec2f origin)
: BulletPattern(count, origin)
{
}

TargetedBulletPattern::TargetedBulletPattern(int count, ofVec2f origin, float bulletspeed, float volley_timeout)
: BulletPattern(count, origin, bulletspeed, volley_timeout)
{
}

void TargetedBulletPattern::volley(){
    Player *player = (*(this->players)).front();
    cout << player->pos.x << endl;
}
