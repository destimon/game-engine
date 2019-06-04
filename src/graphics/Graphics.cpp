//
// Created by desta on 03.06.2019.
//

#include "Graphics.h"
#include <windows.h>
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GL/gl.h>

Graphics::Graphics() {}

Graphics::~Graphics() {

}

void display()
{
    glClearColor(6.0,6.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    // gluOrtho2D(0.0,100.0,0,100.0);
    glFlush();
}

int Graphics::createWindow(int *argc, char **argv) {

    glutDisplayFunc(display);
    glutMainLoop();
    return (0);
}

int Graphics::init(int *argc, char **argv) {
    glutInit(argc,argv);			//Line A
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
    glutInitWindowSize(640,480);
    glutInitWindowPosition(1000,200);
    glutCreateWindow("Simple Window");
    createWindow(argc, argv);
    return 0;
}
