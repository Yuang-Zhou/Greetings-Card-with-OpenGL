// A simple introductory program; its main window contains a static picture
// of a triangle, whose three vertices are red, green and blue.  The program
// illustrates viewing with default viewing parameters only.


#include <GL/glut.h>

char txt[] = {"Happy Birthday"};
// Clears the current window and draws a triangle.
void display() {

  // Set every pixel in the frame buffer to the current clear color.
  glClear(GL_COLOR_BUFFER_BIT);

  // Drawing is done by specifying a sequence of vertices.  The way these
  // vertices are connected (or not connected) depends on the argument to
  // glBegin.  GL_POLYGON constructs a filled polygon.
  glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.196078);
    glVertex3f(-1, -1, 0);
    glVertex3f(-1, 1, 0);
    glVertex3f(1, 1, 0);
    glVertex3f(1, -1, 0);

  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.30, 0.30, 1.0);
    glVertex3f(-0.7, -1, 0);
    glVertex3f(-0.7, 1, 0);
    glVertex3f(-0.65, 1, 0);
    glVertex3f(-0.65, -1, 0);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.61);
    glVertex3f(-0.9, -1, 0);
    glVertex3f(-0.9, 1, 0);
    glVertex3f(-0.85, 1, 0);
    glVertex3f(-0.85, -1, 0);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.498039, 0.0, 1.0);
    glVertex3f(-0.75, -1, 0);
  glVertex3f(-0.75, 1, 0);
  glVertex3f(-0.8, 1, 0);
    glVertex3f(-0.8, -1, 0);


  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.74902, 0.847059, 0.847059);
    glVertex3f(-0.6, -1, 0);
    glVertex3f(-0.6, 1, 0);
    glVertex3f(-0.55, 1, 0);
    glVertex3f(-0.55, -1, 0);
  glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-1, -.6, 0);
    glVertex3f(-1, -.4, 0);
    glVertex3f(1, -.4, 0);
    glVertex3f(1, -.6, 0);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.196078);
    glVertex3f(.25, -.55, 0);
    glVertex3f(.35, -.55, 0);
    glVertex3f(.35, -.45, 0);
    glVertex3f(.25, -.45, 0);
  glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.196078);
    glVertex3f(.45, -.55, 0);
    glVertex3f(.55, -.55, 0);
    glVertex3f(.55, -.45, 0);
    glVertex3f(.45, -.45, 0);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.196078);
    glVertex3f(.75, -.55, 0);
    glVertex3f(.65, -.55, 0);
    glVertex3f(.65, -.45, 0);
    glVertex3f(.75, -.45, 0);
  glEnd();
glColor3f(0,0,0);
	glRasterPos2f(-.7,-.52);
for(int i=0;txt[i]!='\0';i++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,txt[i]);

  // Flush drawing command buffer to make drawing happen as soon as possible.
  glFlush();
}

// Initializes GLUT, the display mode, and main window; registers callbacks;
// enters the main event loop.
int main(int argc, char** argv) {

  // Use a single buffered window in RGB mode (as opposed to a double-buffered
  // window or color-index mode).
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // Position window at (80,80)-(480,380) and give it a title.
  glutInitWindowPosition(140, 10);
  glutInitWindowSize(400, 620);
  glutCreateWindow("Greetings Card");

  // Tell GLUT that whenever the main window needs to be repainted that it
  // should call the function display().
  glutDisplayFunc(display);

  // Tell GLUT to start reading and processing events.  This function
  // never returns; the program only exits when the user closes the main
  // window or kills the process.
  glutMainLoop();
}
