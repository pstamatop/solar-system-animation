#include <iostream>
#include <fstream>
#include <openGL/gl.h>
#include <GLUT/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include "visuals.h"
#define STARS 3000

model md;

int camdir=0 ;       // 1 up or down , 2 right or left
float cam;           // angle for camera rotation
float angle = 0.0;   // angle for spin and rotation around the sun
char key;            // for user interaction
int key_n = 0;       // number of times that user pressed the key
bool animate = true; // if false stop animation

float star_in[STARS];   // star's radius
float star_out[STARS];  // star's glow radius
float star_p[STARS][3]; // star's position

float temp_star_out[STARS]; // temporary star's glow radius

float rsun = 1500.0; // sun's glow radius

using namespace std;

void sun(float rsun){
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glColor3f(1.0, 0.79, 0.0);
    glutSolidSphere( 1100.0, 30, 24); // create sun
    glColor4f(1.0, 0.82, 0.0, 0.4);
    glTranslatef(0.0,0.0,0.0);
    glutSolidSphere( rsun , 30, rsun*0.3); // create sun's glow
    glPopMatrix();
}

void starposition(){ // set stars' position and radius
    int x,y,z,r1,r2;
    double size;
    for(int i=0 ; i<STARS ; i++){
        r1 = rand() % 5000 + 1;
        r2 = rand() % 5000 + 1;
        x = r1 - r2;
        r1 = rand() % 5000 + 1;
        r2 = rand() % 5000 + 1;
        y = r1 - r2;
        r1 = rand() % 5000 + 1;
        r2 = rand() % 5000 + 1;
        z = r1 - r2;
        star_p[i][0] = x;
        star_p[i][1] = y;
        star_p[i][2] = z;
        r1 = rand() %  20 + 3;
        size = double(( 1.0 / r1 )*50) ;
        star_in[i] = size;
        star_out[i] = size+size * 1/2;
        temp_star_out[i] = star_out[i];
    }
}

void star(int i){
    int x,y,z,r1,r2;
    double size;
    glPushMatrix();
    glTranslatef(star_p[i][0], star_p[i][1], star_p[i][2]);
    glutSolidSphere( star_in[i] ,30,80);//Create star
    glColor4f(1.0, 1.0, 6.0, 0.4);
    glutSolidSphere( temp_star_out[i] , 30, 3000*temp_star_out[i]);//Create star's glow
    glPopMatrix();
}

void star_pos(){
    starposition();
}

void Render(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
 
    glLoadIdentity();
    
    if(camdir==1){ //For moving the camera
        glRotatef(cam , 1.0, 0.0 , 0.0);
    }
    else if(camdir==2){
        glRotatef(cam, 0.0, 1.0, 0.0);
    }
    for(int i=0 ; i<3000; i++){
        star(i);
    }
    
    glPushMatrix(); //blue planet
    glColor3f(0.5, 0.6, 0.9);
    glScalef(1.7,1.7,1.690001);
   
    glTranslatef(0.0, 0.0 , 0.0);
    glRotatef(angle, 0.0, 0.0 , 0.1);//Rotation around the sun
    glTranslatef(-500.0, 1800.0 , 0.0);
    
    glScalef(0.62f,0.62f,0.62f);
    glRotatef(angle, 0.0, 0.0 , 0.1);//Spin
    DisplayModel(md);
    
    glPopMatrix(); //purple planet

    glPushMatrix();
    glColor3f(0.42, 0.11, 0.8);
    glScalef(1.7,1.7,1.690001);
    glScalef(0.8f,0.8f,0.8f);
    
    glTranslatef(0.0, 0.0 , 0.0);
    glRotatef(angle, 0.0, 0.0 , 0.1); //Rotation around the sun
    glTranslatef(2000.0, 100.0 , 0.0);
    
    glRotatef(angle, 0.0, 0.0 , 0.1); //Spin
    DisplayModel(md);
    glPopMatrix();
    
    sun(rsun);
    
    glPushMatrix(); //green planet
    glColor3f(0.0, 0.5, 0.0);
    glScalef(1.7f,1.7f,1.690001f);
    glScalef(0.7f,0.7f,0.7f);
    
    glTranslatef( 0.0, 0.0 , 0.0);
    glRotatef(angle, 0.0, 0.0 , 0.1); // Rotation around the sun
    glTranslatef(-2300.0, 90.0 , 0.0);
    
    glRotatef(angle, 0.0, 0.0 , 0.1); // Spin
    DisplayModel(md);
    glPopMatrix();
    
    glPushMatrix(); // Βeige planet
    glColor3f(0.6, 0.6, 0.4);
    glScalef(1.7f,1.7f,1.690001f);
    glScalef(0.45f,0.45f,0.45f);
    
    glTranslatef( 0.0, 0.0 , 0.0);
    glRotatef(angle, 0.0, 0.0 , 0.1); // Rotation around the sun
    glTranslatef(-100, -2800.0 , 0.0);
    
    glRotatef(angle, 0.0, 0.0 , 0.1); // Spin
    DisplayModel(md);
    glPopMatrix();
    glutSwapBuffers();
}

void Resize(int w, int h){   
    // w and h are window sizes returned by glut
    // define the visible area of the window (in pixels)
    
    if (h==0) h=1;
    glViewport(0,0,w,h);
    
    // Setup viewing volume
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
 
    glOrtho (-5000.0f, 5000.0f, -5000.0f, 5000.0f, 10000.0f, -10000.0f);
    
}

void Idle(){
    if(animate){
        float max = 1500.0; //Max sun's radius
        float dt = 0.01;
        if (rsun>=max)	rsun-=1500*0.1; //For sun's glow
        else 	rsun+=1500*0.1;
        for(int i=0 ; i<STARS ; i++){ //For stars' glow
            if(temp_star_out[i]>=star_out[i]) temp_star_out[i] -=0.2*40;
            else temp_star_out[i] +=0.2*40;
        }
        angle = angle + 30; //For rotation and spin
    }
        glutPostRedisplay();
}

void Setup(){
    glShadeModel (GL_SMOOTH);
    
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glClearDepth(1);
    
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial( GL_FRONT, GL_AMBIENT_AND_DIFFUSE );
    
    GLfloat light_position[] = { 0.0, 0.0, 0.0 , 0.0 }; //Light position is the middle (the sun is the light source)
    glLightfv( GL_LIGHT0, GL_POSITION, light_position);
    
    GLfloat ambientLight[] = { 0.3, 0.3, 0.3, 1.0 };
    GLfloat diffuseLight[] = { 0.8, 0.8, 0.8, 1.0 };
    GLfloat specularLight[] = { 1.0, 1.0, 1.0, 1.0 };
    
	   
    glLightfv( GL_LIGHT0, GL_AMBIENT, ambientLight );
    glLightfv( GL_LIGHT0, GL_DIFFUSE, diffuseLight );
    
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);

    glEnable(GL_CULL_FACE);
    glFrontFace(GL_CW);
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    // Black background
    glClearColor(0.0f,0.0f,0.0f,1.0f);
}

int Load(){
    int dum1,dum2,dum3;
    string line;
    FILE * file = fopen("/Users/Maria-IsabellaManolaki/Documents/planet.obj", "r");
    if( file == NULL ){
        printf("Cannot open file !\n");
        return -1 ;
    }
    while( 1 ){
        char lineHeader[128];
        // Read the first word of the line
        int res = fscanf(file, "%s", lineHeader);
        if (res == EOF)
            break;
        if ( strcmp( lineHeader, "v" ) == 0 ){ //Count vertices
            md.vertices ++;
        }
        else if ( strcmp( lineHeader, "f" ) == 0 ){ //Count faces
            md.faces ++;
        }
    }
    md.obj_points = (point*)malloc(md.vertices*sizeof(point));//Allocate memory for vertices
    md.obj_faces = (face*)malloc(md.faces*sizeof(face));      //and faces
    fclose(file);
    file = fopen("/Users/Maria-IsabellaManolaki/Documents/planet.obj", "r");
    int v=0,f=0;
    while( 1 ){
        char lineHeader[128];
        int res = fscanf(file, "%s", lineHeader);
        if (res == EOF)
            break;
        //Read vertices' x,y and z and store them
        if ( strcmp( lineHeader, "v" ) == 0 ){
            fscanf(file, "%lf %lf %lf\n", &(md.obj_points[v].x),&(md.obj_points[v].y), &(md.obj_points[v].z));
            v++;
            
        }
        //Read faces' vertices and store them
        else if ( strcmp( lineHeader, "f" ) == 0 ){
            int matches = fscanf(file, "%d//%d %d//%d %d//%d\n", &(md.obj_faces[f].vtx[0]) , &dum1 , &(md.obj_faces[f].vtx[1]) , &dum2 , &(md.obj_faces[f].vtx[2]) , &dum3);
            if (matches != 6){
                printf("File can't be read.");
                return -1;
            }
            f++;
        }
    }
    fclose(file);
    return 1;
}

void Keyboard(unsigned char key,int x,int y){
    //Starts and stops animation if space character is pressed
    if(key==32)
        key_n++;
    if(key_n%2!=0)
        animate = false;
    else
        animate = true;
    
}

void SpecialKeys(int key,int x,int y){
    //Moves the camera around x and y axes
    if(key==GLUT_KEY_UP){
        cam = cam + 30;
        camdir = 1;
    }
    else if(key == GLUT_KEY_DOWN){
        cam = cam - 30;
        camdir = 1;
    }
    else if (key == GLUT_KEY_RIGHT){
        cam = cam + 30;
        camdir = 2;
    }
    else if (key == GLUT_KEY_LEFT){
        cam = cam  - 30;
        camdir = 2;
    }
}

void DisplayModel(model md){
    //Draws Model
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    
    for (int i = 0; i < md.faces; i++)
    {
        glVertex3d(md.obj_points[md.obj_faces[i].vtx[0]-1].x,md.obj_points[md.obj_faces[i].vtx[0]-1].y,md.obj_points[md.obj_faces[i].vtx[0]-1].z);
        glVertex3d(md.obj_points[md.obj_faces[i].vtx[1]-1].x,md.obj_points[md.obj_faces[i].vtx[1]-1].y,md.obj_points[md.obj_faces[i].vtx[1]-1].z);
        glVertex3d(md.obj_points[md.obj_faces[i].vtx[2]-1].x,md.obj_points[md.obj_faces[i].vtx[2]-1].y,md.obj_points[md.obj_faces[i].vtx[2]-1].z);
    }
    glEnd();
    glPopMatrix();
}

void DestroyModel(){
    free(md.obj_faces);
    free(md.obj_points);
}

