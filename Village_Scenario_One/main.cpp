#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include<math.h>

float x_position = -70.0;
int state = 1;

float x_position2 = -20.0;
int state2 = 1;

float f_position1 = 0 , f_position2 = 0 , theta2 = 0 ;
int j=0;

void init(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(-100,100,00,100,-3,3);
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    float theta;

    glColor3f(0.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex2f(100,100);
        glVertex2f(100,0);
        glVertex2f(-100,0);
        glVertex2f(-100,100);
    glEnd();

    glColor3f(0.53f,0.81f,0.92f);
    glBegin(GL_QUADS);
        glVertex2f(100,100);
        glVertex2f(100,70);
        glVertex2f(-100,70);
        glVertex2f(-100,100);
    glEnd();

    glColor3f(.12,0.56,1);
    glBegin(GL_POLYGON);
        glVertex2f(100,70);
        glVertex2f(100,0);
        glVertex2f(-20,0);
        glVertex2f(-10,5);
        glVertex2f(-5,10);
        glVertex2f(-5,15);
        glVertex2f(0,20);
        glVertex2f(5,25);
        glVertex2f(5,30);
        glVertex2f(10,35);
        glVertex2f(15,40);
        glVertex2f(15,45);
        glVertex2f(10,50);
        glVertex2f(10,55);
        glVertex2f(15,60);
        glVertex2f(20,65);
        glVertex2f(15,70);
    glEnd();

    glColor3f(0,0,0);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(-100,70);
        glVertex2f(100,70);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(70+7*cos(theta)*2, 90+7*sin(theta));
        }
    glEnd();


    glColor3f(0.133,0.545,0.133);
    glBegin(GL_TRIANGLES);
        glVertex2f(-46,56);
        glVertex2f(-26,57);
        glVertex2f(-36,63);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(-46,60.5);
        glVertex2f(-26,61);
        glVertex2f(-36,68);
    glEnd();


    glBegin(GL_POLYGON);
        glVertex2f(4,54);
        glVertex2f(6,41);
        glVertex2f(-8,41);
        glVertex2f(-6,54);
    glEnd();

    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(-6+4*cos(theta)*2, 55.5+4*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(4+4*cos(theta)*2, 55.5+4*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(-4+3.5*cos(theta)*2, 59.75+3.5*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(2+3.5*cos(theta)*2, 59.75+3.5*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(-1+3*cos(theta)*2, 63.5+3*sin(theta));
        }
    glEnd();


    glColor3f(1,1,1);

    glBegin(GL_TRIANGLES);
        glVertex2f(-75,50);
        glVertex2f(-45,49);
        glVertex2f(-60,56);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_QUADS);

        glVertex2f(-20,58);
        glVertex2f(-5,51);
        glVertex2f(-45,49);
        glVertex2f(-60,56);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-45,49);
        glVertex2f(-45,36);
        glVertex2f(-75,37);
        glVertex2f(-75,50);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
        glVertex2f(-5,51);
        glVertex2f(-5,39);
        glVertex2f(-45,36);
        glVertex2f(-45,49);
    glEnd();

    glLineWidth(4);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(-45,36);
        glVertex2f(-75,37);
    glEnd();

    glBegin(GL_LINES);
        glVertex2f(-5,39);
        glVertex2f(-45,36);
    glEnd();

    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-55,46);
        glVertex2f(-55,40.5);
        glVertex2f(-65,41);
        glVertex2f(-65,46.5);
    glEnd();

    glColor3f(0,0,0);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(-55,46);
        glVertex2f(-55,40.5);
        glVertex2f(-65,41);
        glVertex2f(-65,46.5);
        glVertex2f(-55,40.5);
        glVertex2f(-65,41);
        glVertex2f(-55,46);
        glVertex2f(-65,46.5);

        glVertex2f(-60,46);
        glVertex2f(-60,40.5);

        glVertex2f(-55,43.25);
        glVertex2f(-65,43.75);
    glEnd();

    glColor3f(0,1,1);
    glBegin(GL_QUADS);
        glVertex2f(-18,47.5);
        glVertex2f(-18,38.25);
        glVertex2f(-30,37.5);
        glVertex2f(-30,47);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(-18,47.5);
        glVertex2f(-24,44);

        glVertex2f(-18,38.25);
        glVertex2f(-24,41);

        glVertex2f(-30,37.5);
        glVertex2f(-24,41);

        glVertex2f(-30,47);
        glVertex2f(-24,44);

        glVertex2f(-24,44);
        glVertex2f(-24,41);
    glEnd();

    glPointSize(3.5);
    glBegin(GL_POINTS);
        glVertex2f(-25.5,42.25);
        glVertex2f(-22.5,42.5);
    glEnd();

    glColor3f(0.133,0.545,0.133);

    glBegin(GL_TRIANGLES);
        glVertex2f(-96,57.5);
        glVertex2f(-76,58);
        glVertex2f(-86,65);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(-96,53);
        glVertex2f(-76,53.35);
        glVertex2f(-86,60);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(-96,48.5);
        glVertex2f(-76,48.75);
        glVertex2f(-86,56);
    glEnd();

    glBegin(GL_POLYGON);

        glVertex2f(-82,49);
        glVertex2f(-80,36);
        glVertex2f(-94,36);
        glVertex2f(-92,49);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(49,25.75);
        glVertex2f(20,25.75);
        glVertex2f(18.5,26);
        glVertex2f(15.5,27);
        glVertex2f(13.25,28.5);
        glVertex2f(12,30);
        glVertex2f(57,30);
        glVertex2f(55.75,28.5);
        glVertex2f(53.5,27);
        glVertex2f(50.5,26);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

        glVertex2f(57,30);
        glVertex2f(50,29.25);
        glVertex2f(43,28.85);
        glVertex2f(36,28.5);
        glVertex2f(28,28.85);
        glVertex2d(20,29.25);
        glVertex2f(12,30);
    glEnd();

    glColor3f(0.53f,0.81f,0.92f);
    glBegin(GL_POLYGON);
        for(int i=0;i<=90;i++){
            theta = i*3.1416/180;
            glVertex2f(25+15.75*sin(theta)*2, 30+7*cos(theta));
        }
        glVertex2f(25,30);
    glEnd();

    glLineWidth(1);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(25,35.5);
        glVertex2f(44.5,35.5);

        glVertex2f(25,33.75);
        glVertex2f(51.75,33.75);

        glVertex2f(25,31.5);
        glVertex2f(55.75,31.5);

        glVertex2f(28.5,30);
        glVertex2f(28.5,37);

        glVertex2f(36,30);
        glVertex2f(36,36.5);

        glVertex2f(45,30);
        glVertex2f(45,35.5);

        glVertex2f(50,30);
        glVertex2f(50,34);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position+-80+3*cos(theta)*2, 85+3*sin(theta));
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position+-72+3*cos(theta)*2, 85+3*sin(theta));
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position+-80+3*cos(theta)*2, 81+3*sin(theta));
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position+-72+3*cos(theta)*2, 81+3*sin(theta));
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position+-85+3*cos(theta)*2, 83+3*sin(theta));
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position+-67+3*cos(theta)*2, 83+3*sin(theta));
        }
    glEnd();



    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-94+2*cos(theta)*2, 92+2*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-90.5+2*cos(theta)*2, 93+2*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-90.5+2*cos(theta)*2, 91+2*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-87+2*cos(theta)*2, 92+2*sin(theta));
        }
    glEnd();



    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-90+2*cos(theta)*2, 84+2*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-86.5+2*cos(theta)*2, 85+2*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-86.5+2*cos(theta)*2, 83+2*sin(theta));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++){
            theta = i*3.1416/180;
            glVertex2f(x_position2+-83+2*cos(theta)*2, 84+2*sin(theta));
        }
    glEnd();

    if(f_position1>0 || f_position2>0){
    glBegin(GL_POLYGON);
        glVertex2f(f_position1+32,f_position2+18);
        glVertex2f(f_position1+25,f_position2+16.35);
        glVertex2f(f_position1+20,f_position2+16);
        glVertex2f(f_position1+16,f_position2+18);
        glVertex2f(f_position1+20,f_position2+20);
        glVertex2f(f_position1+25,f_position2+19.55);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(f_position1+32,f_position2+18);
        glVertex2f(f_position1+33.75,f_position2+19.5);
        glVertex2f(f_position1+33.75,f_position2+16.5);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(f_position1+21.5,f_position2+19.75);
        glVertex2f(f_position1+27,f_position2+20.5);
        glVertex2f(f_position1+27,f_position2+19);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POINTS);
        glVertex2f(f_position1+18.5,f_position2+18.5);
    glEnd();
    }

    glFlush();
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    switch(state2)
    {
    case 1:
        if(x_position2<=200){
            x_position2 += .45;
        }
        else{
            state2 = -1;
        }
        break;
    case -1:
        x_position2 = -20.0;
        state2 = 1;
        break;
    }

    switch(state)
    {
    case 1:
        if(x_position<=200){
            x_position += .4;
        }
        else{
            state = -1;
        }
        break;
    case -1:
        x_position = -70.0;
        state = 1;
        break;
    }

    if(j<=220){
        theta2 = j*3.1416/180;
        f_position1 = cos(theta2)*15;
        f_position2 = sin(theta2)*5;
        j+=2.5;
    }
    else if(j>=180 && j<=450){
        j++;
    }
    else{
        j=0;
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

