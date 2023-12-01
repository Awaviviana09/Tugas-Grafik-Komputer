#include <GL/glut.h>
void display() {
glClear(GL_COLOR_BUFFER_BIT);
// Segitiga pertama - Fill warna Light Blue
glColor3f(0.678, 0.847, 0.902); // Light Blue (R,G,B)
glBegin(GL_TRIANGLES);
glVertex2f(-0.7, -0.7);
glVertex2f(-0.1, -0.7);
glVertex2f(-0.4, 0.1);
glEnd();
// Segitiga kedua - Fill warna Rosy Brown
glColor3f(0.737, 0.561, 0.561); // Rosy Brown (R,G,B)
glBegin(GL_TRIANGLES);
glVertex2f(0.2, 0.4);
glVertex2f(0.8, 0.4);
glVertex2f(0.5, -0.4);
glEnd();
glFlush();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutCreateWindow("Dua Segitiga dengan OpenGL");
glClearColor(1.0, 1.0, 1.0, 1.0); // Warna latar putih (R,G,B)
gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

