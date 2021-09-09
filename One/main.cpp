#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(-10,10,-10,10,-3,3);
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    /*glColor3f(0,1,0);
    glBegin(GL_QUADS);
        glVertex2f(2,2);
        glVertex2f(2,0);
        glVertex2f(0,0);
        glVertex2f(0,2);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1,2);
        glVertex2f(3,2);
        glVertex2f(1,3);
    glEnd();

    glLineWidth(3);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
       glVertex2f(-1,0);
       glVertex2f(3,0);
    glEnd();

    glPointSize(8);
    glBegin(GL_POINTS);
        glVertex2f(4,4);
    glEnd();*/

    glColor3f(0,1,1);
    glBegin(GL_QUADS);
    glVertex2f(3,3);
    glVertex2f(5,0);
    glVertex2f(0,0);
    glVertex2f(2,3);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(4.5,0);
    glVertex2f(4.5,-3.5);
    glVertex2f(0.5,-3.5);
    glVertex2f(0.5,0);
    glEnd();

    glFlush();
}


int main(){
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(600,600);

    glutCreateWindow("Window 1");

    glutDisplayFunc(display);
    init();

    glutMainLoop();
    return 0;
}

