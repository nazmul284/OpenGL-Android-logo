#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void circle(float x, float y, float r)
{
    float theta;
    int i;

	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
}


void half_circle(float x, float y, float r)
{
    float theta;
    int i;


	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
}



void half_circle2(float x, float y, float r)
{
    float theta;
    int i;


	glBegin(GL_POLYGON);
	for(i=180;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    glColor3f(0.631, 0.796, 0.310);
    half_circle(200,200,100);

    glColor3f(1.0, 1.0, 1.0);
    circle(150,250,10);

    glColor3f(1.0, 1.0, 1.0);
    circle(250,250,10);

    glLineWidth(3);
    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_LINES);
		glVertex2i(150, 280);
		glVertex2i(120, 320);
	glEnd();

	glLineWidth(3);
    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_LINES);
		glVertex2i(250, 280);
		glVertex2i(280, 320);
	glEnd();

    glLineWidth(3);
    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_LINES);
		glVertex2i(100, 200);
		glVertex2i(300, 200);
	glEnd();

    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_QUADS);
		glVertex2i(100, 195);
		glVertex2i(100, 80);
		glVertex2i(300, 80);
		glVertex2i(300, 195);
	glEnd();

	///HEND

	glColor3f(0.631, 0.796, 0.310);
	half_circle(75,185,16);
	glColor3f(0.631, 0.796, 0.310);
	half_circle2(75,107.5,16);

    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_QUADS);
		glVertex2i(60, 185);
		glVertex2i(60, 107);
		glVertex2i(91.5, 107);
		glVertex2i(91.5, 185);
	glEnd();

	glColor3f(0.631, 0.796, 0.310);
    half_circle(325,185,16);
    glColor3f(0.631, 0.796, 0.310);
	half_circle2(325,107.5,16);

    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_QUADS);
		glVertex2i(309, 185);
		glVertex2i(309, 107);
		glVertex2i(341.5, 107);
		glVertex2i(341.5, 185);
	glEnd();

/// LEG

	glColor3f(0.631, 0.796, 0.310);
	half_circle2(157,40,23);

    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_QUADS);
		glVertex2i(134, 85);
		glVertex2i(134, 40);
		glVertex2i(180, 40);
		glVertex2i(180, 85);
	glEnd();

	glColor3f(0.631, 0.796, 0.310);
	half_circle2(251,40,22);

    glColor3f(0.631, 0.796, 0.310);
    glBegin(GL_QUADS);
		glVertex2i(228, 90);
		glVertex2i(228, 40);
		glVertex2i(274, 40);
		glVertex2i(274, 90);
	glEnd();





    glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}


