#ifndef __RADIAL_3D__H__
#define __RADIAL_3D__H__

#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

float r_angle = 0.0f;
float r_dx = 0.0f, r_dy = 0.0f, r_dz = -1.0f;
float r_x = 0.0f, r_y = 1.0f, r_z = 5.0f;
float r_dangle = 0.0f;
float r_dmove = 0;

void rDie(const char* /*err_msg*/);
int rInit(int /*argc*/, char** /*argv*/,
	  const char* /*title*/,
	  int /*width*/, int /*height*/,
	  int /*xpos*/, int /*ypos*/);
void rRender();
void rReshape();
int rRun();

// User Defined Functions
void rudfDrawGround();
void rudfDrawObstacles();
void rudfKeyboard(unsigned char /*key*/, int /*x*/, int /*y*/);

#endif
