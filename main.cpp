#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <windows.h>
void objek(void) {
    glPointSize(4.0);
    glBegin(GL_POINTS);
        glColor3f(0.6,1.0,1.0);
        glVertex3f(0.7, -0.3, 0.0);

        glColor3f(0.8,0.6,0.9);
        glVertex3f(0.2, 0.6, 0.9);

        glColor3f(0.0,0.3,0.0);
        glVertex3f(0.4, -0.3, 0.0);

        glColor3f(1.0,0.0,0.5);
        glVertex3f(0.2, -0.5, 0.0);

        glColor3f(0.5,0.5,1.0);
        glVertex3f(0.6, -0.7, 0.0);

        glColor3f(0.0,0.0,0.8);
        glVertex3f(-0.6, 0.3, 0.0);
    glEnd();
    glFlush();

}
void display(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(2.0);
    glutSwapBuffers();

}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("Titik");
glutDisplayFunc(objek);
glutMainLoop();
return 0;
}

