#include<windows.h>
#ifdef __APPLE__
//#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

float x_position = -10.0;
int state = 1;

void init(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(-10,10,-10,10,3,-3);
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
       glVertex2f(x_position+2.0,1.0);
       glVertex2f(x_position+2.0,-1.0);
       glVertex2f(x_position,-1.0);
       glVertex2f(x_position,1.0);
    glEnd();



    glFlush();
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    switch(state)
    {
    case 1:
        if(x_position<8){
            x_position += 0.1;
        }
        else{
            state = -1;
        }
        break;
    case -1:
        if(x_position > -10){
            x_position -= 0.1;
        }
        else{
            state = 1;
        }
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

