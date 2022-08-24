/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void cirle()
{
    glPushMatrix();
    glColor3f(1.000,0.000,.00);
    glScalef(1,2,0);
    glutSolidSphere(15.5,100,100);

    glPopMatrix();
    glEnd();
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    cirle();
    glPopMatrix();
    glutSwapBuffers();
    glFlush();
}

void base(void)
{
    glClearColor(0.00,1.00,0.00,0);
    glOrtho(-50.0,50.0,-50.0,50.0,-1.0,1.0);

}
void init (void)
{
/* select clearing (background) color */
glClearColor (1.0, 1.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
int main(int argc,char **argv)
{   glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,400);
    glutInitWindowPosition(0,0);

    glutCreateWindow("Flag");

     base();

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
