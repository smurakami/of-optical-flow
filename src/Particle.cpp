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
  _vx = speed.x;
  _vy = speed.y;
  _farneback = farneback;
  _age = 0;
}

Particle::~Particle(){

}

void Particle::update(){
  _x += _vx;
  _y += _vy;
  _age++;
}

void Particle::draw(){
  ofLine(_x - _vx, _y - _vy, _x, _y);
}