#include <windows.h> 
#include <GL/glut.h> 

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background 
    gluOrtho2D(-300, 300, -300, 300);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // roof Green color 
    glVertex2d(-150, 120);
    glVertex2d(150, 120);
    glVertex2d(0, 240);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); //house White color 
    glVertex2d(-130, -120);
    glVertex2d(130, -120);
    glVertex2d(130, 120);
    glVertex2d(-130, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.72f, 0.53f, 0.04f); // the door 
    glVertex2d(-40, -120);
    glVertex2d(40, -120);
    glVertex2d(40, 50);
    glVertex2d(-40, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65f, 0.16f, 0.16f); // Brown color for the left window 
    glVertex2d(-100, 30);
    glVertex2d(-50, 30);
    glVertex2d(-50, 80);
    glVertex2d(-100, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65f, 0.16f, 0.16f); // Brown color for the right window  
    glVertex2d(50, 30);
    glVertex2d(100, 30);
    glVertex2d(100, 80);
    glVertex2d(50, 80);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple House");
    glutInitWindowSize(480, 480);
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}