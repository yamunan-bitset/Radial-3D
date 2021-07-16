#include "radial.h"

void rDie(const char* err_msg) { fprintf(stderr, "\033[31m%s\n", err_msg); }

int rInit(int argc, char** argv,
	   const char* title,
	   int width, int height,
	   int xpos, int ypos)
{ // TODO: Error Handling
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(width, height);
  glutInitWindowSize(xpos, ypos);
  glutCreateWindow(title);
  gluOrtho2D(0, width, height, 0);
}

void rRender()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  gluLookAt(r_x, r_y, r_z,
	    r_x + r_dx, r_y + r_dy, r_z + r_dz,
	    0.0f, 1.0f, 0.0f);
  rudfDrawGround();
  rudfDrawObstacles();
  glutSwapBuffers();
}

void rReshape()
{ // TODO
}

int rRun()
{ // TODO: Error Handling
  glutDisplayFunc(rRender);
  glutReshapeFunc(rReshape);
  glutKeyboardFunc(rudfKeyboard);
  glutMainLoop();
}
