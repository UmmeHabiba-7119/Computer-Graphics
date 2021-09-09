

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

float theta;

void init(){
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-50,50,-50,50,-3,3);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);

    glColor3f(1,1,1);
    glPushMatrix();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theta = i*3.1416/180;
            glVertex2d(6*cos(theta), 4*sin(theta));
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,4.5,0);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theta = i*3.1416/180;
            glVertex2d(4*cos(theta), 2.5*sin(theta));
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,6,0);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theta = i*3.1416/180;
            glVertex2d(3*cos(theta), 2*sin(theta));
        }
        glEnd();
    glPopMatrix();

    glColor3f(1,1,1);
        glLineWidth(3);
        glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-5,1);
            glVertex2f(-12,0);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-12,0);
            glVertex2f(-13.5,-4);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-13.5,-4);
            glVertex2f(-11.5,-8);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-4,3);
            glVertex2f(-10,2.5);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-10,2.5);
            glVertex2f(-15,0.5);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-15,0.5);
            glVertex2f(-15,-2);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-3,4.5);
            glVertex2f(-10,4.5);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-10,4.5);
            glVertex2f(-13,7.5);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-13,7.5);
            glVertex2f(-12,9.5);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-2,6.5);
            glVertex2f(-5.5,8);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-5.5,8);
            glVertex2f(-7.5,10);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(-7.5,10);
            glVertex2f(-6,13);
        glEnd();
        glPopMatrix();

        //////////////////
        glPushMatrix();
        glBegin(GL_LINES);
            glVertex2f(2,8);
            glVertex2f(5,10);
        glEnd();
        glPopMatrix();

    glFlush();
}


int main()
{
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB);

    glutCreateWindow("Window");

    glutDisplayFunc(display);
    init();

    glutMainLoop();

    return EXIT_SUCCESS;
}
