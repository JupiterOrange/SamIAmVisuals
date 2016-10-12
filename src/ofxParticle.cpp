//
//  ofxParticle.cpp
//  SamIAm_Show12_10_2016
//
//  Created by Ravi Heugle on 9/11/16.
//
//

#include "ofxParticle.h"

ofxParticle::ofxParticle(){
    
}

void ofxParticle::setup(int rad){
    
    WIDTH = ofGetWindowWidth();
    HEIGHT = ofGetWindowHeight();
    
    r = ofRandom(rad-20,rad+20);

    theta = ofRandom(2*PI);
    theta_delta = ofRandom(-0.01,0.01);

    pos = ofVec2f(WIDTH/2+r*cos(theta),HEIGHT/2+r*sin(theta));
    col = ofColor(220,10,100);
    delta = 0;
    vel = ofVec2f(0,0);
    particle_radius = ofRandom(2,4);
    
}

void ofxParticle::update(){
    
    float dt = 0.01;
    
    if (pos.x <0 || pos.x>WIDTH) vel.x=-vel.x;
    if (pos.y <0 || pos.y>HEIGHT) vel.y=-vel.y;
    
    pos += vel * dt;
    theta += theta_delta;
    pos = ofVec2f(WIDTH/2+r*cos(theta),HEIGHT/2+r*sin(theta));

}

void ofxParticle::draw(){
    
    ofSetColor(col);
    ofFill();
    //ofNoFill();
    ofDrawCircle(pos.x, pos.y, particle_radius);
}


/*
void ofxParticle::updatePosition(){
    
    int h = 0;
    switch (int(h)){
            
            //RandomWalk
        case 0:
            pos.x += ofRandom(-1,1);
            pos.y += ofRandom(-1,1);
            
    }
}

*/







