#include "Arbol.h"

void Arbol::DibujarArbol(float x, float y, float z) {
    glPushMatrix();
        glTranslatef(x, y, z);
        glRotatef(90, 1, 0, 0);
        glutSolidSphere(0.5, 20, 20);
        glutSolidCylinder(0.25, 1, 20, 20);
    glPopMatrix();
}