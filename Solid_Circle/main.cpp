#include<windows.h>
#ifdef __APPLE__
//#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

void init(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(-10,10,-10,10,-3,3);
}

void display(){
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f,1.0f,0.0f);

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex3f(-5+cos(theta)/5,sin(theta)/5,0.0);
        }
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex3f(-3+cos(theta)/2,sin(theta)/2,0.0);
        }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(cos(theta), sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(3.5+2*cos(theta), 2*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(cos(-theta), 3-sin(theta));
    }
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

