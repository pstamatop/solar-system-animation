
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <openGL/gl.h>
#include <GLUT/glut.h>
#include "visuals.h"

int main(int argc, char * argv[]) {
    srand (time(NULL));
    glutInit(&argc, argv); //Initialize Glut library state
    glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE); //
    glutInitWindowSize(600,600);
    glutInitWindowPosition(30,30);
    glutCreateWindow("SolarSystem");
    star_pos();//Sets stars' positions
    Setup();
    Load();
    glutDisplayFunc(Render);
    glutReshapeFunc(Resize);
    glutIdleFunc(Idle);
    glutKeyboardFunc(Keyboard);
    glutSpecialFunc(SpecialKeys);//Gets special characters from the user
    glutMainLoop();
    DestroyModel();
    return 0;
    
}
