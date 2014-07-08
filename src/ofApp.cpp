#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

#define CAMERA_WIDTH 320
#define CAMERA_HEIGHT 240

//--------------------------------------------------------------
void ofApp::setup(){
  // Initialize cv
  camera.initGrabber(CAMERA_WIDTH, CAMERA_HEIGHT);
  
  // GUI
  gui.setup();
  gui.add(pyrScale.setup("pyrScale", .5, 0, 1));
  gui.add(levels.setup("levels", 4, 1, 8));
  gui.add(winsize.setup("levels", 8, 4, 64));
  gui.add(iterations.setup("iterations", 2, 1, 8));
  gui.add(polyN.setup("polyN", 7, 5, 10));
  gui.add(polySigma.setup("polySigma", 1.5, 1.1, 2));
  gui.add(OPTFLOW_FARNEBACK_GAUSSIAN.setup("OPTFLOW_FARNEBACK_GAUSSIAN", false));
  
  gui.add(useFarneback.setup("useFarneback", true));
  gui.add(winSize.setup("winSize", 32, 4, 64));
  gui.add(maxLevel.setup("maxLevel", 3, 0, 8));
  
  gui.add(levels.setup("maxFeatures", 200, 1, 1000));
  gui.add(qualityLevel.setup("maxFeatures", 0.01, 0.001, 0.02));
  gui.add(minDistance.setup("minDistance", 4, 1, 16));
  
  curFlow = &farneback;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
