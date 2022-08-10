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
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/







	// x axis
glColor3f(224,0,0);
glBegin(GL_LINES);
glVertex3f(-10.0,0.0,0.0);
glVertex3f(10.0,0.0,0.0);
glEnd();


//y axis
glColor3f(11,233,0);
glBegin(GL_LINES);
glVertex3f(0.0,-1.0,0.0);
glVertex3f(0.0,1.0,0.0);
glEnd();

//points

glColor3f(11,233,0);
glPointSize(8);
glBegin(GL_POINTS);
glVertex3f(-0.5,0.0,0.0);

glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,0.0);
glVertex3f(0.2,0.2,0.0);
glVertex3f(0.3,0.3,0.0);
glVertex3f(0.4,0.2,0.0);
glEnd();

/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}

/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutCreateWindow ("Test");
glutInitWindowSize(640,500);
glutDisplayFunc(display);



glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
