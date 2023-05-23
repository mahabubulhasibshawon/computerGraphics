#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;


float _moveA = 0.0f;
float _moveB = 0.0f;
float _moveC = 0.0f;
float _angle1 = 0.0f;
float speed = 0.02f;
void drawScene() {
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(135,206,250);
    glVertex2f(38.0f,3.0f);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);

    glEnd();

     ///sun///
    glPushMatrix();
    glColor3d(255,255,0);
    glTranslatef(30.0, 7.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();

    ///cloud 1///
    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();




///cloud 2///


    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

     glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();

  ///cloud 3///

    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();


  ///sea portion///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(65,105,225);
    glVertex2f(38.0f,-19.0f);
    glVertex2f(38.0f,3.0f);
    glVertex2f(-12.0f,3.0f);
    glVertex2f(-12.0f,-19.0f);

    glEnd();


    //field
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(30,255,50);

    glVertex2f(38.0f,-10.0f);
    glVertex2f(38.0f,3.0f);
    glVertex2f(-12.0f,3.0f);
    glVertex2f(-12.0f,-10.0f);
    glEnd();


    ///shaheed minar///



    //left collumn
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(255,255,255);

    glVertex2f(1.0f,-5.0f);//a
    glVertex2f(1.0f,1.0f);//b
    glVertex2f(-1.0f,1.0f);//c
    glVertex2f(-1.0f,-5.0f);//d
    glEnd();


    //inner green
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,255,0);

    glVertex2f(.5f,-5.0f);//a
    glVertex2f(.50f,0.0f);//b
    glVertex2f(-.50f,0.0f);//c
    glVertex2f(-.50f,-5.0f);//d
    glEnd();


//middle
    //middle collumn
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(255,255,255);

    glVertex2f(6.0f,-5.0f);//a
    glVertex2f(6.0f,2.0f);//b
    glVertex2f(2.0f,2.0f);//c
    glVertex2f(2.0f,-5.0f);//d
    glEnd();


    //middle top

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(6.0f,2.0f);//a
    glVertex2f(7.0f,4.0f);//b
    glVertex2f(6.2f,4.0f);//c
    glVertex2f(5.0f,2.0f);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(4.5f,2.0f);//a
    glVertex2f(4.6f,4.0f);//b
    glVertex2f(3.4f,4.0f);//c
    glVertex2f(3.5f,2.0f);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(3.0f,2.0f);//a
    glVertex2f(2.0f,4.0f);//b
    glVertex2f(1.0f,4.0f);//c
    glVertex2f(2.0f,2.0f);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(6.7f,3.7f);//a
    glVertex2f(7.0f,4.0f);//b
    glVertex2f(1.0f,4.0f);//c
    glVertex2f(1.3f,3.7f);//d
    glEnd();

    //inner green
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,255,0);

    glVertex2f(5.0f,-5.0f);//a
    glVertex2f(5.0f,1.5f);//b
    glVertex2f(3.0f,1.5f);//c
    glVertex2f(3.0f,-5.0f);//d
    glEnd();

    //inner white
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(4.5f,-5.0f);//a
    glVertex2f(4.5f,1.5f);//b
    glVertex2f(3.5f,1.5f);//c
    glVertex2f(3.5f,-5.0f);//d
    glEnd();


    //right collumn
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(255,255,255);

    glVertex2f(9.0f,-5.0f);//a
    glVertex2f(9.0f,1.0f);//b
    glVertex2f(7.0f,1.0f);//c
    glVertex2f(7.0f,-5.0f);//d
    glEnd();


    //inner green
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,255,0);

    glVertex2f(8.5f,-5.0f);//a
    glVertex2f(8.50f,0.0f);//b
    glVertex2f(7.50f,0.0f);//c
    glVertex2f(7.50f,-5.0f);//d
    glEnd();


    //red footer
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(255,0,0);

    glVertex2f(9.0f,-5.5f);//a
    glVertex2f(9.0f,-5.0f);//b
    glVertex2f(-1.0f,-5.0f);//c
    glVertex2f(-1.0f,-5.5f);//d
    glEnd();

    ///sun///
    glPushMatrix();
    glColor3d(255,0,0);
    glTranslatef(4.0, -1.0, 0);
    glutSolidSphere(2.5, 25, 250);
    glPopMatrix();

///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-11.5,4.5);
    glVertex2f(-7.5,4.5);
    glVertex2f(-7,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11.5,4.5);
    glVertex2f(-11,5.5);
    glVertex2f(-8,5.5);
    glVertex2f(-7.5,4.5);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11,5.5);
    glVertex2f(-10.5,6);
    glVertex2f(-8.5,6);
    glVertex2f(-8,5.5);
    //glVertex2f();
    glEnd();

//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.5,6);
    glVertex2f(-10.3,6.2);
    glVertex2f(-8.7,6.2);
    glVertex2f(-8.5,6);
    //glVertex2f();
    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.3,6.2);
    glVertex2f(-10.2,6.3);
    glVertex2f(-8.8,6.3);
    glVertex2f(-8.7,6);
    //glVertex2f();
    glEnd();

////Hill 2///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-7,3);
    glVertex2f(-6.5,4);
    glVertex2f(-4.5,4);
    glVertex2f(-4,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-6.5,4);
    glVertex2f(-6,4.5);
    glVertex2f(-5,4.5);
    glVertex2f(-4.5,4);
    //glVertex2f();
    glEnd();

///Hill 3///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-4,3);
    glVertex2f(-3.5,4.5);
    glVertex2f(-1.5,4.5);
    glVertex2f(-1,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-3.5,4.5);
    glVertex2f(-3,5);
    glVertex2f(-2,5);
    glVertex2f(-1.5,4.5);
    //glVertex2f();
    glEnd();


///hill 6///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 7///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(15,5);
    glVertex2f(20,5);
    glVertex2f(21,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(15,5);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(20,5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(17.5,6.5);
    glEnd();

///hill 8///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(21,3);
    glVertex2f(22,5);
    glVertex2f(24,5);
    glVertex2f(25,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(22,5);
    glVertex2f(22.5,5.5);
    glVertex2f(23.5,5.5);
    glVertex2f(24,5);
    //glVertex2f();
    glEnd();

///hill 9///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25,3);
    glVertex2f(25.5,4.5);
    glVertex2f(28.5,4.5);
    glVertex2f(29,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25.5,4.5);
    glVertex2f(26,5);
    glVertex2f(28,5);
    glVertex2f(28.5,4.5);
    //glVertex2f();
    glEnd();

///hill 10///
//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 11///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(33,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(32,5);
    glEnd();

///hill 12///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();




///boat-1 motion left to right
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveA, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(1.0f, -14.0f);
        glVertex2f(1.50f, -13.0f);
        glVertex2f(-2.0f, -13.0f);
        glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(2.0f, -14.5f);
        glVertex2f(2.0f, -14.0f);
        glVertex2f(-3.0f, -14.0f);
        glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(-3.0f, -14.5f);
        glVertex2f(-3.0f, -14.0f);
        glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(2.0f, -14.5f);
        glVertex2f(3.5f, -13.7f);
        glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(2.0f, -14.0f);
        glVertex2f(1.5f, -13.0f);
        glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();



    ///////////////
    ///boat-2 motion right to left
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(22.0f, -17.5f);
        glVertex2f(21.0f, -16.5f);
        glVertex2f(17.50f, -16.5f);
        glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -18.0f);
        glVertex2f(22.0f, -17.5f);
        glVertex2f(17.0f, -17.5f);
        glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
        glVertex2f(20.5f, -16.5f);
        glVertex2f(21.0f, -14.5f);
        glVertex2f(18.5f, -14.5f);
        glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(19.8f, -14.5f);
        glVertex2f(19.8f, -14.0f);
        glVertex2f(19.7f, -14.0f);
        glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -18.0f);
        glVertex2f(17.0f, -17.5f);
        glVertex2f(15.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -17.5f);
        glVertex2f(22.0f, -18.0f);
        glVertex2f(23.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -17.5f);
        glVertex2f(18.0f, -17.5f);
        glVertex2f(17.5f, -16.5f);

    glEnd();

    glPopMatrix();



///windmill structure///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);
    //glColor3ub(0,206,209);

    glVertex2f(31.0f,2.0f);
    glVertex2f(30.0f,-6.0f);
    glVertex2f(34.0f,-6.0f);
    glVertex2f(33.0f,2.0f);
    glVertex2f(32.5f,3.0f);
    glVertex2f(31.5f,3.0f);



    glEnd();


     //circle//
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(32.0f,3.0f,0.0f);
    glutSolidSphere(0.5,150,150);
	glRotatef(_angle1, 0.0f, 0.0f,1.0f);


    glBegin(GL_QUADS);// first stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(5.0f,0.0f);
    glVertex2f(5.0f,0.25f);
    glVertex2f(0.0f,0.25f);
    glEnd();

    glBegin(GL_QUADS);// second stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,5.0f);
    glVertex2f(-0.25f,5.0f);
    glVertex2f(-0.25f,0.0f);
    glEnd();

    glBegin(GL_QUADS);// third stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,-0.25f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-5.0f,0.0f);
    glVertex2f(-5.0f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);// fourth stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-5.0f);
    glVertex2f(0.25f,-5.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// first triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.25f,0.0f);
    glVertex2f(5.0f,-2.5f);
    glVertex2f(5.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// second triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.0f,0.025f);
    glVertex2f(2.5f,5.0f);
    glVertex2f(0.0f,5.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// third triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-5.0f,2.5f);
    glVertex2f(-5.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// fourth triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.0f,-0.025f);
    glVertex2f(-2.5f,-5.0f);
    glVertex2f(0.0f,-5.0f);
    glEnd();


    glPopMatrix();


    glutSwapBuffers();

}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);


}


void update1(int value) {

    _moveA += speed;
    if(_moveA > 38)
    {
        _moveA = -38;
    }
     //Notify GLUT that the display has changed

//_moveA += 0.11;

    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y) {

if (button == GLUT_LEFT_BUTTON)
	{
	    speed += 0.05f;
    }


else if (button == GLUT_RIGHT_BUTTON)
	{
	    speed -= 0.05f;
	}
glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's'://stops
    speed = 0.0f;
    break;
case 'r'://runs
    speed = 0.02f;
    break;
glutPostRedisplay();
	}}

void update2(int value) {


    if(_moveB < -36)
    {
        _moveB = +38;
    }
     //Notify GLUT that the display has changed

_moveB -= 0.13;

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}
//function for windlmill
void update3(int value) {

    _angle1-=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, update3, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update4(int value) {


    if(_moveC > +36)
    {
        _moveC = -38;
    }
     //Notify GLUT that the display has changed

_moveC += 0.13;

    glutTimerFunc(20, update4, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);


    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Transformation");


    init();

    glutDisplayFunc(drawScene);
    glutTimerFunc(20, update1, 0); //Add a timer
    glutTimerFunc(20, update2, 0); //Add a timer

    glutTimerFunc(10, update3, 0);
    glutTimerFunc(20, update4, 0);
    glutKeyboardFunc(handleKeypress);

    glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}
