//  ofxParticle.hpp
//  SamIAm_Show12_10_2016

//  Created by Ravi Heugle on 9/11/16.

#ifndef ofxParticle_h
#define ofxParticle_h

#include <stdio.h>
#include "ofMain.h"

class ofxParticle {
public:
    
    //Constructor
    ofxParticle();
    
    //Properties
    float WIDTH;
    float HEIGHT;
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f weight;
    ofVec2f force;
    
    float time;
    float lifeTime;
    
    
    float theta_delta;
    float r;
    float theta;
    
    float particle_radius;
    
    //Color
    ofColor col;

    //Methods
    void draw();
    //void updatePosition();
    void update();
    void setup(int rad);
    
    float delta;
    

};

#endif /* ofxParticle_hpp */
