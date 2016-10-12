//
//  ofxParticleGroup.cpp
//  SamIAm_Show12_10_2016
//
//  Created by Ravi Heugle on 9/11/16.

#include "ofxParticleGroup.h"
#include "ofxParticle.h"

ofxParticleGroup::ofxParticleGroup(){
    
}

//Setup a particle group - specify the number of particles to be made part of the group, radius of rotation
void ofxParticleGroup::setup(int num, int rad){
    
    N = num;
    
    for (int i=0;i<N;i++){
        ofxParticle newp;
        newp.setup(rad);
        particles.push_back(newp);
    }    
}

void ofxParticleGroup::update(){

    for (int i=0;i<particles.size();i++){
        particles[i].update();
    }
    
}

void ofxParticleGroup::draw(){

    for (int i=0;i<particles.size();i++){
        particles[i].draw();
    }
    
    for (int i=0;i<particles.size();i++){
        for (int j=0;j<particles.size();j++){
            if (j!=i){
                ofVec2f dist = particles[j].pos-particles[i].pos;
                if (particles[j].pos.distance(particles[i].pos)<20){
                    ofDrawLine(particles[i].pos, particles[j].pos);
                }
            }
        }
    }
}

void ofxParticleGroup::InitialPositions(ofVec2f center){
    
    for (int i=0;i<N;i++){
        
        float theta_d = 2*PI/N;
        //float theta_d = ofRandom(0,PI/4);
        
        float theta = theta_d*i;
        float r = 200;
        float x = r*cos(theta) + center.x;
        float y = r*sin(theta) + center.y;
        
        particles[i].pos = ofVec2f(x,y);
        
    }
}

/*
 void ofxParticleGroup::display(){
 
 /*
 for (int i=0;i<size;i++){
 for (int j=0;j<size;j++){
 
 if (j!=i){
 ofLine(particles[i].pos, particles[j].pos);
 ofVec2f dist = particles[j].pos-particles[i].pos;
 ofVec2f dir = dist;
 float dt = 0.1;
 dir.normalize();
 particles[i].vel += dir*dt;
 
 }
 }
 }
 
 }
 */

