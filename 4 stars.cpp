#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.6f, 0.0f);  // Orange color
    glLineWidth(3.0);
    glBegin(GL_POLYGON);



        glVertex2f( 0.4f,  0.4f);

        glVertex2f( 0.5f,  0.1f);
        glVertex2f( 0.6f,  0.4f);

        glVertex2f( 0.9f,  0.5f);
        glVertex2f( 0.6f,  0.6f);

        glVertex2f( 0.5f,  0.9f);
        glVertex2f( 0.4f,  0.6f);

        glVertex2f( 0.1f,  0.5f);






    glEnd();


    glFlush();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // White background
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
