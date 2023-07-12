#include <GL/glut.h>
#include <cmath>

// Function to draw a rectangle using Bresenham's algorithm
void drawRectangleBresenham(int left, int right, int bottom, int top)
{
    glBegin(GL_LINE_LOOP);
    glVertex2i(left, bottom);
    glVertex2i(right, bottom);
    glVertex2i(right, top);
    glVertex2i(left, top);
    glEnd();
}

// Function to draw a circle using Midpoint algorithm
void drawCircleMidpoint(int centerX, int centerY, int radius)
{
    int x = 0;
    int y = radius;
    int p = 1 - radius;

    while (x <= y)
    {
        // Draw eight symmetric points
        glVertex2i(centerX + x, centerY + y);
        glVertex2i(centerX + x, centerY - y);
        glVertex2i(centerX - x, centerY + y);
        glVertex2i(centerX - x, centerY - y);
        glVertex2i(centerX + y, centerY + x);
        glVertex2i(centerX + y, centerY - x);
        glVertex2i(centerX - y, centerY + x);
        glVertex2i(centerX - y, centerY - x);

        if (p < 0)
        {
            p += 2 * x + 3;
        }
        else
        {
            p += 2 * (x - y) + 5;
            y--;
        }

        x++;
    }
}

// Function to display the scene
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0); // Set color to white

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50, 50, -50, 50); // Set the coordinate system

    // Draw the rectangle using Bresenham's algorithm
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    drawRectangleBresenham(-40, 40, -30, 30);

    // Draw the circle using Midpoint algorithm
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glPointSize(2.0);
    glBegin(GL_POINTS);
    drawCircleMidpoint(0, 0, 15);
    glEnd();

    glFlush();
}

// Main function
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Rectangle with Bresenham, Circle with Midpoint");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
