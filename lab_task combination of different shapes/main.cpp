
#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);  //graph paper size xl,xu,yl,yp
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);//clear background color
 //upper left triangle
   glColor3f( 0 ,0, 1);  //background color
   glBegin(GL_POLYGON);  //initalize primitives

   glVertex2f(.49,.95);//a
   glVertex2f(.49,.75);//b
   glVertex2f(.45,.75);//c

   glEnd();
   //lb
   glColor3f( 0 ,1, 0);  //background color
   glBegin(GL_POLYGON);  //initalize primitives

   glVertex2f(.49,.95);//a
   glVertex2f(.61,.95);//b
   glVertex2f(.61,.75);//c
   glVertex2f(.49,.75);//d
   glEnd();
    //upper right
   glColor3f( 0 ,0, 1);  //background color
   glBegin(GL_POLYGON);  //initalize primitives

   glVertex2f(.61,.95);//a
   glVertex2f(.65,.75);//b
   glVertex2f(.61,.75);//c

   glEnd();


 //wall
   glColor3f( 1 ,0, 0);  //background color
   glBegin(GL_POLYGON);  //initalize primitives

   glVertex2f(.25,.25);//a
   glVertex2f(.85,.25);//b
   glVertex2f(.85,.75);//c
   glVertex2f(.25,.75);//d

   glEnd();
   //lb
   glColor3f( 0 ,1, 0);  //background color
   glBegin(GL_POLYGON);  //initalize primitives

   glVertex2f(.33,.25);//a
   glVertex2f(.45,.25);//b
   glVertex2f(.45,.10);//c
   glVertex2f(.33,.10);//d
   glEnd();
   //rb
   glColor3f( 0 ,1, 0);  //background color
   glBegin(GL_POLYGON);  //initalize primitives

   glVertex2f(.65,.25);//a
   glVertex2f(.77,.25);//b
   glVertex2f(.77,.10);//c
   glVertex2f(.65,.10);//d
   glEnd();



// Write your Code


glutSwapBuffers(); //frame buffer-display process and backend buffer-represent frame
//glflush(
}

int main(int argc,char **argv){


    glutInit(&argc,argv);   //initilaization
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );  //display mode allow display on double buffer window
    glutInitWindowPosition(0,0);   //window position
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab task201-15-3737");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop(); //for keyboard use
    return 0;
}
