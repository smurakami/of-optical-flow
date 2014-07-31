//
//  Particle.cpp
//  OpticalFlow
//
//  Created by 村上 晋太郎 on 2014/07/08.
//
//

#include "Particle.h"

Particle::Particle(ofVec2f pos, ofVec2f speed, ofxCv::FlowFarneback * farneback) {
  _x = pos.x;
  _y = pos.y;
//  _vx = speed.x;
//  _vy = speed.y;
  _farneback = farneback;
  _age = 0;
}

Particle::~Particle(){

}

void Particle::update(){
  ofRectangle rect(0, 0, ofGetWidth(), ofGetHeight());
  ofVec2f offset(rect.x,rect.y);
  ofVec2f scale(rect.width/_farneback->getFlow().cols, rect.height/_farneback->getFlow().rows);
  
  ofVec2f index = (ofVec2f(_x, _y) - offset) / scale;
  int iy = int(index.y);
  int ix = int(index.x);
  
  ofVec2f off = _farneback->getFlowOffset(ix, iy) * scale + offset;
//  ofVec2f off = _farneback->getFlowOffset(_x, _y) * scale + offset;
  
  _vx = off.x;
  _vy = off.y;
  
  _x += _vx;
  _y += _vy;
  _age++;
}

void Particle::draw(){
//  ofLine(_x - _vx, _y - _vy, _x, _y);
  ofCircle(_x, _y, 3.0);
}