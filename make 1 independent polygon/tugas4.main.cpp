#include <GL/glut.h>
#include <cmath>
void display() {
glClear(GL_COLOR_BUFFER_BIT);
// Poligon bebas - Fill warna Light Coral
glColor3f(0.941, 0.502, 0.502); // Light Coral (R,G,B)
glBegin(GL_POLYGON);
// Menggunakan segi lima sebagai contoh
int sides = 5;
float radius = 0.4;
float angle = 360.0 / sides;
for (int i = 0; i < sides; ++i) {
float x = radius * cos(angle * i * 3.14159 / 180.0);
float y = radius * sin(angle * i * 3.14159 / 180.0);
glVertex2f(x, y);
}
glEnd();
glFlush();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutCreateWindow("Poligon Bebas dengan OpenGL");
glClearColor(1.0, 1.0, 1.0, 1.0); // Warna latar putih (R,G,B)
gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
