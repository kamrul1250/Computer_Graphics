#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
float x1,y1,x2,y2,m;
float dx,dy;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
//glEnd();

glColor3f (1.0, 0.0, 0.0);
glPointSize(3);

glBegin(GL_POINTS);
//when 0<m<=1
if(m>0 && m<=1)
{
while(x1<=x2 && y1<=y2)
{
    x1=x1+1;
    y1=y1+m;
    glVertex2f(x1/100,y1/100);


}
}


//when m>1
else if(m>1)
{
    while(x1<=x2 && y1<=y2)
{
    x1=x1+(1/m);
    y1=y1+1;
   glVertex2f(x1/100,y1/100);

}
}


//when -1<m<=0
if(m>-1 && m<=0){
   while(x1<=x2 && y1>=y2)
{
    x1=x1+1;
    y1=y1+m;
    glVertex2f(x1/100,y1/100);


}
}

//when m<-1
else if(m<-1)
{
    while(x1<=x2 && y1>=y2)
{
    x1=x1+(1/(-m));
    y1=y1-1;
   glVertex2f(x1/100,y1/100);

}
}

glEnd();


/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}


void init (void)
{
/* select clearing (background) color */
glClearColor (1.0, 1.0, 1.0, 1.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1.0, 0.0, 1.0);
}

int main(int argc, char** argv)
{

    //Enter start and end points
    printf("Enter first point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter second point: ");
    scanf("%f %f",&x2,&y2);

    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx;


glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("DDA Line Drawing");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


