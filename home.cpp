
#include <GL/glut.h>

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);      // Clear the screen

    glColor3f(1.0, 0.0, 0.0);           // Blue color
    glLineWidth(3.0);                   // Line thickness

    glBegin(GL_LINES);                  // Start drawing lines

       //Square
       glVertex2f(-0.5f, -0.5f);
       glVertex2f(0.5f, -0.5f);

        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.5f, 0.5f);

        glVertex2f(0.5f, 0.5f);
        glVertex2f(-0.5f, 0.5f);

        glVertex2f(-0.5f, 0.5f);
        glVertex2f(-0.5f, -0.5f);


        //Roof
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.0f, 0.9f);

        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.5f, 0.5f);

        glVertex2f(-0.4f, 0.5f);
        glVertex2f(0.0f, 0.8f);

        glVertex2f(0.4f, 0.5f);
        glVertex2f(0.0f, 0.8f);

        glVertex2f(-0.3f, 0.5f);
        glVertex2f(0.0f, 0.7f);

        glVertex2f(0.3f, 0.5f);
        glVertex2f(0.0f, 0.7f);

        glVertex2f(-0.2f, 0.5f);
        glVertex2f(0.0f, 0.6f);

        glVertex2f(0.2f, 0.5f);
        glVertex2f(0.0f, 0.6f);







        //Door
        glVertex2f(-0.2f, 0.3f);
        glVertex2f(-0.2f, -0.5f);

        glVertex2f(0.2f, 0.3f);
        glVertex2f(0.2f, -0.5f);

        glVertex2f(-0.2f, 0.3f);
        glVertex2f(0.2f, 0.3f);


        /*glVertex2f(-0.1f, 0.0f);
        glVertex2f(-0.1f, -0.5f);

        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.1f, -0.5f);*/




        //Window
        glVertex2f(-0.4f, 0.0f);
        glVertex2f(-0.4f, 0.2f);
        glVertex2f(-0.3f, 0.0f);
        glVertex2f(-0.3f, 0.2f);
        glVertex2f(-0.4f, 0.0f);
        glVertex2f(-0.2f, 0.0f);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(-0.4f, 0.2f);


        glVertex2f(0.4f, 0.0f);
        glVertex2f(0.4f, 0.2f);
        glVertex2f(0.2f, 0.0f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(0.4f, 0.0f);
        glVertex2f(0.2f, 0.0f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(0.4f, 0.2f);

       /* glVertex2f(-0.3f, 0.0f);
        glVertex2f(-0.3f, 0.2f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(-0.4f, 0.1f);
        glVertex2f(-0.2f, 0.1f);
        glVertex2f(0.4f, 0.1f);
        glVertex2f(0.2f, 0.1f);  */


    glEnd();

    glFlush();                          // Render now
}

// Initialization
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);   // White background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);   // Set coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Drawing Lines");
    init();
    glutDisplayFunc(display);           // Register display callback
    glutMainLoop();                     // Enter event-processing loop
    return 0;
}
