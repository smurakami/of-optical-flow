//
//  Particle.cpp
//  OpticalFlow
//
//  Created by 村上 晋太郎 on 2014/07/08.
//
//

#include "Particle.h"
#include "ofMain.h"

Particle::Particle(float x, float y, float vx, float vy) {
  _x = x;
  _y = y;
  _vx = vx;
  _vy = vy;
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