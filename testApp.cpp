#include "testApp.h"
#include "CyclicEllipseBulletPattern.h"
#include "RadialBulletPattern.h"
#include "Player.h"

bool moving = false;
vector<BulletPattern*> patterns;
vector<BulletPattern*>::iterator cur_pattern;
Player *player;

//--------------------------------------------------------------
void testApp::setup(){
    player = new Player(kControlTypeKeyboard);
    patterns.push_back(new CyclicEllipseBulletPattern(30, ofVec2f(400,200)));
    patterns.push_back(new RadialBulletPattern(20, ofVec2f(400, 200), .1, .2));
    cur_pattern = patterns.begin();
}

//--------------------------------------------------------------
void testApp::update(){
    float deltatime = ofGetLastFrameTime();
    (*cur_pattern)->update(deltatime);
    if (moving) {
        (*cur_pattern)->origin.x = 400+100*sin(ofGetElapsedTimef());
    }
    player->update(deltatime);
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(255, 255, 255);
    int r = ofMap(mouseX, 0, ofGetWidth(), 0, 255);
    int g = ofMap(mouseY, 0, ofGetHeight(), 0, 255);
    int b = ofMap(mouseX, 0, ofGetWidth(), 0, 255);
    ofSetColor(r, g, b);
    ofFill();
    (*cur_pattern)->draw();
    player->draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    player->keyPressed(key);
    if (key == ' ') {
        if (cur_pattern == patterns.end() - 1) {
            cur_pattern = patterns.begin();
        } else {
            cur_pattern++;
        }
    } else if (key == 'z') {
        moving = moving ? false : true;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    player->keyReleased(key);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    player->mouseMoved(x, y);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}