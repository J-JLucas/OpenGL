// Compile: clang++ -o helloSquare helloSquare.cpp -lGL -lGLU -lglut
// basic program from copilot to confirm that OpenGL is working

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display(void)
{
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

  glClear(GL_COLOR_BUFFER_BIT);

  // Draw a red square
  glBegin(GL_QUADS);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex2f(-0.5f, -0.5f);
  glVertex2f(0.5f, -0.5f);
  glVertex2f(0.5f, 0.5f);
  glVertex2f(-0.5f, 0.5f);
  glEnd();

  glFlush();
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutCreateWindow("OpenGL Test");
  glutInitWindowSize(800, 600);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
