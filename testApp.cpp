#include "testApp.h"
#include "CyclicEllipseBulletPattern.h"
#include "RadialBulletPattern.h"
#include "Player.h"

int loopy;
BulletPattern *pattern, *pattern2;
Player *player;

//--------------------------------------------------------------
void testApp::setup(){
    ofSeedRandom();
    loopy = 20;
    player = new Player(kControlTypeKeyboard);
    pattern = new CyclicEllipseBulletPattern(30, ofVec2f(100,100));
    pattern2 = new RadialBulletPattern(30, ofVec2f(200, 200));
}

//--------------------------------------------------------------
void testApp::update(){
    float deltatime = ofGetLastFrameTime();
    pattern2->update(deltatime);
    pattern->update(deltatime);
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
    pattern2->draw();
    pattern->draw();
    player->draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    player->keyPressed(key);
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