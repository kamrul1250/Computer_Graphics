#include <windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
    // Draw the house body (large rectangle)
    glColor3f(0.6f, 0.4f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(-2.0f, -1.5f); // Bottom-left
        glVertex2f(2.0f, -1.5f);  // Bottom-right
        glVertex2f(2.0f, 1.5f);   // Top-right
        glVertex2f(-2.0f, 1.5f);  // Top-left
    glEnd();

    // Draw the roof (triangle)
    glColor3f(0.5f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-2.5f, 1.5f);  // Left base
        glVertex2f(2.5f, 1.5f);   // Right base
        glVertex2f(0.0f, 3.0f);   // Apex


    glEnd();






    // Draw the door (smaller rectangle)
    glColor3f(0.0f, 0.0f, 1.0f); // Blue color for door
    glBegin(GL_POLYGON);
        glVertex2f(-0.5f, -1.5f); // Bottom-left
        glVertex2f(0.5f, -1.5f);  // Bottom-right
        glVertex2f(0.5f, 0.0f);   // Top-right
        glVertex2f(-0.5f, 0.0f);  // Top-left
    glEnd();

    // Draw the window (small rectangle)
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1.0f, 0.0f);   // Bottom-left
        glVertex2f(1.8f, 0.0f);   // Bottom-right
        glVertex2f(1.8f, 0.8f);   // Top-right
        glVertex2f(1.0f, 0.8f);   // Top-left
    glEnd();

    glFlush(); // Flush the OpenGL pipeline
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(500, 500); // Set window size
    glutInitWindowPosition(50, 50); // Set window position
    glutCreateWindow("House with Door and Window"); // Create window
    glutDisplayFunc(display); // Register display callback
    glutMainLoop(); // Enter the GLUT event loop
    return 0;
}

