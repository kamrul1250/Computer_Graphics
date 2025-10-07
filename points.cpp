#include <GL/glut.h>  // Include GLUT and OpenGL headers

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);    // Clear the screen

    glColor3f(1.0, 0.0, 0.0);         // Set drawing color to red
    glPointSize(5.0);                 // Set point size (optional)

    glBegin(GL_POINTS);               // Start drawing points
        glVertex2f(-0.5f, -0.5f);     // Point at (-0.5, -0.5)
        glVertex2f( 0.0f,  0.0f);     // Point at (0, 0)
        glVertex2f( 0.5f,  0.5f);     // Point at (0.5, 0.5)
    glEnd();

    glFlush(); // Render now
}

// Initialization
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // White background
    glColor3f(0.0, 0.0, 0.0);         // Black drawing color
    glPointSize(4.0);                 // Point size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Drawing Points");
    init();
    glutDisplayFunc(display);  // Register display callback
    glutMainLoop();             // Enter event-processing loop
    return 0;
}

