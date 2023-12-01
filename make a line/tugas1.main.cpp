#include <GL/glut.h>
void display() {
glClear(GL_COLOR_BUFFER_BIT);
// Menggambar garis horizontal dengan warna Light Coral dan ketebalan 3
glColor3f(0.941, 0.502,0.502); // Light Coral (R,G,B)
glLineWidth(3.0); // Ketebalan garis 3
glBegin(GL_LINES);
glVertex2f(-0.8, 0.5);
glVertex2f(0.8, 0.5);
glEnd();
// Menggambar garis vertikal dengan warna Lavender dan ketebalan 5
glColor3f(0.902, 0.902, 0.980); // Lavender (R,G,B)
glLineWidth(5.0); // Ketebalan garis 5
glBegin(GL_LINES);
glVertex2f(-0.5, -0.8);
glVertex2f(-0.5, 0.8);
glEnd();
// Menggambar garis diagonal dengan warna Tan dan ketebalan 2
glColor3f(0.824, 0.706, 0.549); // Warna Tan (R,G,B)
glLineWidth(2.0); // Ketebalan garis 2
glBegin(GL_LINES);
glVertex2f(-0.8, -0.8);
glVertex2f(0.8, 0.8);
glEnd();
// Menggambar garis bebas dengan warna Aquamarine dan ketebalan 4
glColor3f(0.498, 1.000, 0.831); // Warna Aquamarine (R,G,B)
glLineWidth(4.0); // Ketebalan garis 4
glBegin(GL_LINES);
glVertex2f(0.2, 0.9); // Mengubah posisi garis bebas
glVertex2f(0.7, 0.2); // Mengubah posisi garis bebas
glEnd();
glFlush();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutCreateWindow("Empat Garis dengan OpenGL");
glClearColor(0.0, 0.0, 0.0, 1.0); // Warna latar hitam (R,G,B)
gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
