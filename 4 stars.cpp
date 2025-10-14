#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 1.0f, 1.0f); //red
    glLineWidth(3.0);
    glBegin(GL_POLYGON);  //left
        glVertex2f( 0.2f,  -0.1f);
        glVertex2f( 0.3f,  -0.3f);
        glVertex2f( 0.4f,  -0.1f);
        glVertex2f( 0.6f,  0.0f);
        glVertex2f( 0.4f,  0.1f);
        glVertex2f( 0.3f,  0.3f);
        glVertex2f( 0.2f,  0.1f);
        glVertex2f( 0.0f,  0.0f);
        glEnd();

    glColor3f(1.0f, 0.0f, 0.0f); // white
     glBegin(GL_POLYGON);  //right
        glVertex2f( -0.2f,  -0.1f);
        glVertex2f( -0.3f,  -0.3f);
        glVertex2f( -0.4f,  -0.1f);
        glVertex2f( -0.6f,  0.0f);
        glVertex2f( -0.4f,  0.1f);
        glVertex2f( -0.3f,  0.3f);
        glVertex2f( -0.2f,  0.1f);
        glVertex2f( -0.0f,  0.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f); //blue
     glBegin(GL_POLYGON);  // bottom
        glVertex2f( -0.1f,  -0.4f);
        glVertex2f( -0.0f,  -0.6f);
        glVertex2f( 0.1f,  -0.4f);
        glVertex2f( 0.3f,  -0.3f);
        glVertex2f( 0.1f, -0.2f);
        glVertex2f( -0.0f,  0.0f);
        glVertex2f( -0.1f,  -0.2f);
        glVertex2f( -0.3f,  -0.3f);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f); //orange
     glBegin(GL_POLYGON);    // top
        glVertex2f( -0.1f,  0.2f);
        glVertex2f( 0.0f,  0.0f);
        glVertex2f( 0.1f,  0.2f);
        glVertex2f( 0.3f,  0.3f);
        glVertex2f( 0.1f, 0.4f);
        glVertex2f( 0.0f,  0.6f);
        glVertex2f( -0.1f,  0.4f);
        glVertex2f( -0.3f,  0.3f);
    glEnd();
    glFlush();
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);  // black background
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("8-Point Star with One Polygon");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
