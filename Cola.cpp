#include "Cola.h"


void Cola::DibujarCola(float Angulo, float x, float y, float z, int n) {

		glPushMatrix();
		glTranslatef(x, y, z);

		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0); glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		for (int i = 0; i < n; i++) {
			for (int i = 0; i < n; i++) {
				glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
				glTranslatef(1.0, 0.0, 0.0); glPushMatrix();
				glScalef(2.0, 0.4, 1.0);
				glutSolidCube(1.0);
				glPopMatrix();
				glTranslatef(1.0, 0.0, 0.0);
				glRotatef((GLfloat)Angulo + i * 10000, 0.0, 0.0, 1.0);
				glTranslatef(1.0, 0.0, 0.0);
				glPushMatrix();
				glScalef(2.0, 0.4, 1.0);
				glutSolidCube(1.0);
				glPopMatrix();
			}

			glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
			glTranslatef(1.0, 0.0, 0.0); glPushMatrix();
			glScalef(2.0, 0.4, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
			glTranslatef(1.0, 0.0, 0.0);
			glRotatef((GLfloat)Angulo+i*10000, 0.0, 0.0, 1.0);
			glTranslatef(1.0, 0.0, 0.0);
			glPushMatrix();
			glScalef(2.0, 0.4, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}

		glPopMatrix();	
}