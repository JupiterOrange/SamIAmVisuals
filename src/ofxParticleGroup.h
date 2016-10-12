//
//  ofxParticleGroup.hpp
//  SamIAm_Show12_10_2016
//
//  Created by Ravi Heugle on 9/11/16.
//
//

#ifndef ofxParticleGroup_h
#define ofxParticleGroup_h

#include <stdio.h>
#include "ofMain.h"
#include "ofxParticle.h"

class ofxParticleGroup{
public:

    //Constructor
    ofxParticleGroup();
    
    //Number of particles
    int N;
    
    //Array Containing Particles
    vector<ofxParticle> particles;
    
    //Methods
    void setup(int num, int rad);
    void display();
    void InitialPositions(ofVec2f center);
    void update();
    void draw();
    
    //Properties

};

#endif /* ofxParticleGroup_hpp */
