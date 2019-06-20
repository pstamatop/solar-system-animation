
#ifndef solarsystem_visuals_h
#define solarsystem_visuals_h
#include <openGL/gl.h>
#include <GLUT/glut.h>

#define POINTS_PER_VERTEX 3
#define POINTS_PER_NORMAL 3
#define TOTAL_FLOATS_IN_TRIANGLE 9

using namespace std;

typedef struct point
{
    double x;
    double y;
    double z;
}point;

typedef struct face
{
    int vtx[3];
}face;

typedef struct model
{
    point *obj_points;
    face *obj_faces;
    int vertices;
    int faces;
}model;

void star_pos();
void sun(float r);
void star(int i);
void starposition();
void Render();
void Resize(int w, int h);
int Load();
void Setup();
void Idle();
void DisplayModel(model md);
void DestroyModel();
void Keyboard(unsigned char key,int x,int y);
void SpecialKeys(int key,int x,int y);

#endif
