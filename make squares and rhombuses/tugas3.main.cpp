#include <GL/glut.h>
void display() {
glClear(GL_COLOR_BUFFER_BIT);
// Bujur sangkar - Fill warna Dark Sea Green
glColor3f(0.561, 0.737, 0.561); // Dark Sea Green (R,G,B)
glBegin(GL_QUADS);
glVertex2f(-0.7, -0.7);
glVertex2f(-0.7, -0.2);
glVertex2f(-0.2, -0.2);
glVertex2f(-0.2, -0.7);
glEnd();
// Belah ketupat - Fill warna Tan
glColor3f(0.824, 0.706, 0.549); // Tan (R,G,B)
glBegin(GL_QUADS);
glVertex2f(0.3, 0.6);
glVertex2f(0.6, 0.3);
glVertex2f(0.3, 0.0);
glVertex2f(0.0, 0.3);
glEnd();
glFlush();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutCreateWindow("Bujur Sangkar dan Belah Ketupat dengan OpenGL");
glClearColor(1.0, 1.0, 1.0, 1.0); // Warna latar putih (R,G,B)
gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
