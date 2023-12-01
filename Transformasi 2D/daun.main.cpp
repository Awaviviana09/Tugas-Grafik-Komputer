#include <GL/glut.h>
void display();
void reshape(int, int);
void timer(int);
void myinit()
{
glClearColor(0.902f, 0.902f, 0.980f, 1.0f);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
glutInitWindowPosition(0, 0);
glutInitWindowSize(600, 600);
glutCreateWindow("DAUN :)");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutTimerFunc(1000, timer, 0);
myinit();
glutMainLoop();
}
float x_position = -10.0;
int state = 1;
float size = 2.0; // Ukuran objek lebih besar
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0f, 0.5f, 0.0f); // Warna hijau untuk bentuk daun
glLoadIdentity();
glBegin(GL_POLYGON);
glVertex2f(x_position, size);
glVertex2f(x_position - 0.5 * size, 1.5 * size);
glVertex2f(x_position - 0.25 * size, size);
glVertex2f(x_position, 1.5 * size);
glVertex2f(x_position + 0.25 * size, size);
glVertex2f(x_position + 0.5 * size, 1.5 * size);
glEnd();
glutSwapBuffers();
}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-10, 10, -10, 10);
glMatrixMode(GL_MODELVIEW);
}
void timer(int)
{
glutPostRedisplay();
glutTimerFunc(1000 / 60, timer, 0);
switch (state)
{
case 1:
if (x_position < 8)
x_position += 0.15;
else
state = -1;
break;
case -1:
if (x_position > -10)
x_position -= 0.15;
else
state = 1;
break;
}
}
