//
//  Particle.h
//  OpticalFlow
//
//  Created by 村上 晋太郎 on 2014/07/08.
//
//

#ifndef __OpticalFlow__Particle__
#define __OpticalFlow__Particle__

#include <iostream>

class Particle {
  float _x;
  float _y;
  float _vx;
  float _vy;
  int _age;
  
public:
  Particle(float x, float y, float vx, float vy);
  ~Particle();
  void update();
  void draw();
};
#endif /* defined(__OpticalFlow__Particle__) */
