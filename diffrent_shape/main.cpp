#include<GL/gl.h>
#include<GL/glut.h>
void display(void){

glClear (GL_COLOR_BUFFER_BIT);


glColor3f (1.0,1.0,1.0);

glBegin(GL_QUADS);

glVertex3f(0.3f,0.4f ,0.9f);
glVertex3f(0.3f,0.4f ,0.9f);
glVertex3f(0.3f,0.4f ,0.9f);
glVertex3f(0.3f,0.4f ,0.9f);

glEnd();



glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
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
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
