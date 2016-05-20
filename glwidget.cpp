#include "glwidget.h"
#include <GL/glut.h>

GLWidget::GLWidget(QWidget *parent):
    QGLWidget(parent)
{

}
void GLWidget::initializeGL()
{
    glClearColor(0.2,0.2,0.2,1);
    //glEnable(GL_DEPTH_TEST);
    //glEnable(GL_LIGHT0);
    //glEnable(GL_LIGHTING);
}
void GLWidget::paintGL()
{
    //glClear(GL_COLOR_BUFFER_BIT);// | GL_DEPTH_BUFFER_BIT);

    //glRotate(0.5,1,1,1);
    glColor3f(1,0.6,0);
	glutWireTeapot(0.6);
	
	/*glBegin(GL_POLYGON);
	glVertex3d(0.5, 0.2, 0.0);
	glVertex3d(0.8, 0.5, 0.0);
	glVertex3d(0.5, 0.8, 0.0);
	glVertex3d(0.2, 0.5, 0.0);
	glEnd();
	glFlush();
	*/

}
void GLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();
    gluPerspective(45, (float)w/h, 0.01, 100.0);
    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
    gluLookAt(0,0,5, 0,0,0, 0,1,0);
}
