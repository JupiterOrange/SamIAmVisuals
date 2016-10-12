#include "ofApp.h"

void ofApp::setup(){

    ofSetFullscreen(true);
    ofSetBackgroundAuto(true);
    ofSetFrameRate(60);
    ofBackground(255,255,255);
    

    int i_x = 8;
    int i_y = 8;

    int delta_x = (ofGetWindowWidth()-400)/i_x;
    int delta_y = (ofGetWindowHeight()-500)/i_y;
    
    ofxParticleGroup pg;
    for (int i=0;i<20;i++){
        pgs.push_back(pg);
        pgs[i].setup(100    ,(i+1)*40);
    }

}


//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0;i<20;i++){
        pgs[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i=0;i<20;i++){
        pgs[i].draw();
    }

    //ofSetColor(200,10,20);
    //ofFill();
    //ofDrawCircle(100, 100, 200);

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}




//    int it = 0;
//    for (int i=0;i<i_x;i++){
//        for (int j=0;j<i_y;j++){
//            ofVec2f cent = ofVec2f(200+delta_x/2+i*delta_x, 250+delta_y/2+j*delta_y);
//            pg[it].InitialPositions(cent);
//            if (it<=63){
//                it += 1;
//                //ofLog(OF_LOG_NOTICE,"%d",it);
//            }
//        }
//    }


