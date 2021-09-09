#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

float x_position = -9.0;
int state = 1;

float x_position2 = -9.0;
int state2 = 1;

void init(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(-10,10,-10,10,-3,3);
}

void display(){
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f,1.0f,1.0f);

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(x_position+cos(theta), 4+sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(1.4+x_position+cos(theta)*1.2, 5+sin(theta)*1.2);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(2.9+x_position+cos(theta)*1.2, 5+sin(theta)*1.2);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(1.4+x_position+cos(theta)*1.4, 3.7+sin(theta)*1.4);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(2.9+x_position+cos(theta)*1.4, 3.7+sin(theta)*1.4);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(3.9+x_position+cos(theta)*1.1, 4+sin(theta)*1.1);
    }
    glEnd();



    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(x_position2+cos(theta), sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(1.4+x_position2+cos(theta)*1.2, 1+sin(theta)*1.2);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(2.9+x_position2+cos(theta)*1.2, 1+sin(theta)*1.2);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(1.4+x_position2+cos(theta)*1.4, -.3+sin(theta)*1.4);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(2.9+x_position2+cos(theta)*1.4, -.3+sin(theta)*1.4);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(3.9+x_position2+cos(theta)*1.1, sin(theta)*1.1);
    }
    glEnd();



    glFlush();
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    switch(state)
    {
    case 1:
        if(x_position<=5){
            x_position += 0.1;
        }
        else{
            state = -1;
        }
        break;
    case -1:
        if(x_position >= -9){
            x_position -= 0.1;
        }
        else{
            state = 1;
        }
        break;
    }

    switch(state2)
    {
    case 1:
        if(x_position2<=11){
            x_position2 += 0.1;
        }
        else{
            state2 = -1;
        }
        break;
    case -1:
        x_position2 = -16.0;
        state2 = 1;
        break;
    }
}


int main(){
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(600,600);

    glutCreateWindow("Window 1");

    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);

    init();

    glutMainLoop();
    return 0;
}

