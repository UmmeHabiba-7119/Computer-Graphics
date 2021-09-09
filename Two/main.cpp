#include<windows.h>
#ifdef __APPLE__
//#include <GLUT/glut.h>
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

    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
       glVertex2f(2.0,2.0);
       glVertex2f(2.0,-2.0);
       glVertex2f(-2.0,-2.0);
       glVertex2f(-2.0,2.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(4.0,9.0);
        glVertex2f(4.0,6.0);
        glVertex2f(6.0,6.0);
    glEnd();

    glColor3f(0.0f,0.0f,1.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.0,5.0);
        glVertex2f(4.0,2.5);
        glVertex2f(8.0,2.5);
    glEnd();

    glLineWidth(4.0);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex2f(-8.0,8.0);
        glVertex2f(-6.0,8.0);
        glVertex2f(-6.0,8.0);
        glVertex2f(-6.0,6.0);
    glEnd();

    glPointSize(5.0);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POINTS);
        glVertex2f(-8.0,0.0);
        glVertex2f(-6.0,0.0);
        glVertex2f(-8.0,-2.0);
        glVertex2f(-6.0,-2.0);
    glEnd();

    glColor3f(0.0f,1.0f,0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(4.0,-3.0);
        glVertex2f(3.0,-4.0);
        glVertex2f(6.0,-9.0);
        glVertex2f(9.0,-4.0);
        glVertex2f(8.0,-3.0);
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

