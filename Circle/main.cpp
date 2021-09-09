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
    glOrtho(-100,100,-100,100,-3,3);
}

void display(){
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f,1.0f,1.0f);

    glPointSize(2.0);
    glBegin(GL_POINTS);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(40+20*cos(theta), 40+20*sin(theta));
    }
    glEnd();

    glPointSize(2.0);
    glBegin(GL_POINTS);
    for(int i=0;i<360;i++){
        theta = i*3.1416/180;
        glVertex2f(20*cos(theta), 20*sin(theta));
    }
    glEnd();
    const int sides = 20;  // The amount of segment to create the circle
    const double radius = 5; // The radius of the circle

    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);

    for (int a = 0; a < 360; a += 360 / sides)
    {
        double heading = a * 3.1415926535897932384626433832795 / 180;
        glVertex2d(-40+4*cos(heading) * radius, -40+4*sin(heading) * radius);
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

