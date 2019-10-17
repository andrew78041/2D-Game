#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <glut.h>
#include <stdlib.h> 
#include <cmath>
#include <glut.h>
#include <iostream>
#include <mmsystem.h>
#include <ctime>    
#include "OpenGL2DTemplate.h"
using namespace std;
int p0[2];
int p1[2];
int p2[2];
int p3[2];
int tar = 4;
double ann = 100;
double ann2 = 200;
float t = 0.0;
float t2 = 1.0;
int* p;
double ironman = 0;
bool ironhit = false;
bool ironup = false;
bool assup = false;
bool asshit = false;
double assasins = 0;
using namespace std;
int passX = 0;
int passY = 0;
bool middleY = false;
time_t now;
int redD = 1;
int greenD = 1;
int blueD = 1;
bool done = false;
int cpr = 0;
int cpg = 0;
int cpr2 = 0;
int cpg2 = 0;
double scalee = 0;

double backRed = 0;
double backGreen = 0;
double backBlue = 0.5;
time_t last;
double difference;
double actX = 80.0;
double elapsed_secs = 0;
double middle = 0;
double actY = 80.0;
int live1 = 0;
int result = 0;
int live2 = 0;
bool pos1 = false;
bool pos2 = false;
bool pos3 = false;
bool pos4 = false;
bool pos5 = false;
bool pos6 = false;
int livesPlayer1 = 0;
int colorr1 = 0;
int colorr2 = 0;
int colorg1 = 1;
int colorg2 = 1;
int colorb1 = 0;
int colorb2 = 0;

double mar = 200;
double mar2 = 220;
int backup1 = 0;
int backup2 = 0;
int livesPlayer2 = 0;
bool played = false;
int currentTime = 0;
bool perfect = false;
bool up = false;
bool down = false;
int lastTime = 0;
clock_t begin;
clock_t end;
bool timeFlag = false;
int keyX = 0;
int keyY = 0;
int keyC = 0;
double livex = 90.0;
double livex2 = 90.0;
int speX = 0;
int speY = 0;
int speC = 0;
double times = 1.0;
double times2 = 1.0;
double times3 = 1.0;
double times4 = 1.0;

bool flag = false;
bool ok = false;
bool flag2 = false;
bool flag3 = false;
double buttonPressed = 0.0;
double buttonReleased = 0.0;
bool turn = false;
bool turn2 = false;
double tme = 0.0;
double cl1 = 0;
double cl2 = 0;


int* bezier(float t, int* p0, int* p1, int* p2, int* p3)
{
	int res[2];
	res[0] = pow((1 - t), 3) * p0[0] + 3 * t * pow((1 - t), 2) * p1[0] + 3 * pow(t, 2) * (1 - t) * p2[0] + pow(t, 3) * p3[0];
	res[1] = pow((1 - t), 3) * p0[1] + 3 * t * pow((1 - t), 2) * p1[1] + 3 * pow(t, 2) * (1 - t) * p2[1] + pow(t, 3) * p3[1];

	return res;
}


int* bezier2(float t, int* p0, int* p1, int* p2, int* p3)
{
	int res[2];
	actX = pow((1 - t), 3) * p0[0] + 3 * t * pow((1 - t), 2) * p1[0] + 3 * pow(t, 2) * (1 - t) * p2[0] + pow(t, 3) * p3[0];
	actY = pow((1 - t), 3) * p0[1] + 3 * t * pow((1 - t), 2) * p1[1] + 3 * pow(t, 2) * (1 - t) * p2[1] + pow(t, 3) * p3[1];

	return res;
}

void Display() {



	glClearColor(0, 0, 0.2, 0.0f);//the background color is changed in the timer function after 1 sec by changing these parameters.

	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glTranslated(0, ann2, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(10.0f, 10.0f, 0.0f);
	glVertex3f(10.0f, 10.0f, 0.0f);
	glVertex3f(10.0f, 10.0f, 0.0f);
	glVertex3f(10.0f, 10.0f, 0.0f);
	glEnd();
	glPopMatrix();







	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.8, 0.8, 0.8);
	glTranslatef(115, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(340.0f, 100.0f, 0.0f);
	glVertex3f(340.0f, 150.0f, 0.0f);
	glVertex3f(380.0f, 150.0f, 0.0f);
	glVertex3f(380.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslatef(115, 0, 0);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(345.0f, 145.0f, 0.0f);
	glVertex3f(345.0f, 135.0f, 0.0f);
	glVertex3f(355.0f, 135.0f, 0.0f);
	glVertex3f(355.0f, 145.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslatef(115, 0, 0);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(375.0f, 145.0f, 0.0f);
	glVertex3f(375.0f, 135.0f, 0.0f);
	glVertex3f(365.0f, 135.0f, 0.0f);
	glVertex3f(365.0f, 145.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslatef(115, 0, 0);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(350.0f, 100.0f, 0.0f);
	glVertex3f(350.0f, 125.0f, 0.0f);
	glVertex3f(370.0f, 125.0f, 0.0f);
	glVertex3f(370.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.8, 0.8, 0.8);
	glTranslatef(115, 0, 0);

	glBegin(GL_TRIANGLES); // GL_QUAD_STRIP
	glVertex3f(360.0f, 170.0f, 0.0f);
	glVertex3f(340.0f, 150.0f, 0.0f);
	glVertex3f(380.0f, 150.0f, 0.0f);
	glEnd();
	glPopMatrix();





	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.8, 0.8, 0.8);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(340.0f, 100.0f, 0.0f);
	glVertex3f(340.0f, 150.0f, 0.0f);
	glVertex3f(380.0f, 150.0f, 0.0f);
	glVertex3f(380.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(345.0f, 145.0f, 0.0f);
	glVertex3f(345.0f, 135.0f, 0.0f);
	glVertex3f(355.0f, 135.0f, 0.0f);
	glVertex3f(355.0f, 145.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(375.0f, 145.0f, 0.0f);
	glVertex3f(375.0f, 135.0f, 0.0f);
	glVertex3f(365.0f, 135.0f, 0.0f);
	glVertex3f(365.0f, 145.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(350.0f, 100.0f, 0.0f);
	glVertex3f(350.0f, 125.0f, 0.0f);
	glVertex3f(370.0f, 125.0f, 0.0f);
	glVertex3f(370.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_TRIANGLES); // GL_QUAD_STRIP
	glVertex3f(360.0f, 170.0f, 0.0f);
	glVertex3f(340.0f, 150.0f, 0.0f);
	glVertex3f(380.0f, 150.0f, 0.0f);
	glEnd();
	glPopMatrix();



	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.8, 0.8, 0.8);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(30.0f, 100.0f, 0.0f);
	glVertex3f(30.0f, 170.0f, 0.0f);
	glVertex3f(65.0f, 170.0f, 0.0f);
	glVertex3f(65.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();



	glPushMatrix();//draws a red pixel at the origin
	glColor3f(colorr2, colorg2, colorb2);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(10.0f, 220.0f, 0.0f);
	glVertex3f(10.0f, 245.0f, 0.0f);
	glVertex3f(livex2, 245.0f, 0.0f);
	glVertex3f(livex2, 220.0f, 0.0f);
	glEnd();
	glPopMatrix();




	glPushMatrix();//draws a red pixel at the origin
	glColor3f(colorr1, colorg1, colorb1);
	glTranslated(400, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(10.0f, 220.0f, 0.0f);
	glVertex3f(10.0f, 245.0f, 0.0f);
	glVertex3f(livex, 245.0f, 0.0f);
	glVertex3f(livex, 220.0f, 0.0f);
	glEnd();
	glPopMatrix();



	/*glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(440.0f, 10.0f, 0.0f);
	glVertex3f(440.0f, 100.0f, 0.0f);
	glVertex3f(490.0f, 100.0f, 0.0f);
	glVertex3f(490.0f, 10.0f, 0.0f);
	glEnd();
	glPopMatrix();*/




	glPushMatrix();
	glColor3f(0, 0.3, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 100.0f, 0.0f);
	glVertex3f(500.0f, 100.0f, 0.0f);
	glVertex3f(500.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin

	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(220.0f, 0.0f, 0.0f);
	glVertex3f(220.0f, 105.0f, 0.0f);
	glVertex3f(270.0f, 105.0f, 0.0f);
	glVertex3f(270.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(224.0f, 4.0f, 0.0f);
	glVertex3f(224.0f, 101.0f, 0.0f);
	glVertex3f(266.0f, 101.0f, 0.0f);
	glVertex3f(266.0f, 4.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(226.0f, 6.0f, 0.0f);
	glVertex3f(226.0f, 99.0f, 0.0f);
	glVertex3f(264.0f, 99.0f, 0.0f);
	glVertex3f(264.0f, 6.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(80.0f, 0.0f, 0.0f);
	glVertex3f(80.0f, 50.0f, 0.0f);
	glVertex3f(90.0f, 50.0f, 0.0f);
	glVertex3f(90.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 1, 1);
	glTranslated(320, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(80.0f, 0.0f, 0.0f);
	glVertex3f(80.0f, 50.0f, 0.0f);
	glVertex3f(90.0f, 50.0f, 0.0f);
	glVertex3f(90.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	if (turn == false) {
		glColor3f(cpr, cpg, 0);
		glScalef(1, times3 * 0.05, 0);
	}
	else {
		glScalef(1, 0, 0);
	}
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(80.0f, 0.0f, 0.0f);
	glVertex3f(80.0f, 10.0f, 0.0f);
	glVertex3f(90.0f, 10.0f, 0.0f);
	glVertex3f(90.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	if (turn == true) {
		glColor3f(cpr2, cpg2, 0);
		glScalef(1, times4 * 0.05, 0);
	}
	else {
		glScalef(1, 0, 0);
	}
	glTranslatef(320, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(80.0f, 0.0f, 0.0f);
	glVertex3f(80.0f, 10.0f, 0.0f);
	glVertex3f(90.0f, 10.0f, 0.0f);
	glVertex3f(90.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();







	//batman
	/*glPushMatrix();
	//glTranslated(actX, actY, 0);

	glScaled(0, 0, 0);
	glRotated(passX, 0, 0, 1);



	glBegin(GL_LINES);

	for (double xcord = 7; xcord >= 4; xcord -= 0.01)
	{
		double ycordPos = 2 * sqrt((double)(-1 * (abs(abs(xcord) - 1)) * abs(3 - abs(xcord)) / ((abs(xcord) - 1) * (3 - abs(xcord))))) *
			(1 + abs(abs(xcord) - 3) / (abs(xcord) - 3)) * sqrt((double)(1 - pow((xcord / 7), 2))) +
			(5 + 0.97 * (abs(xcord - 0.5) + abs(xcord + 0.5)) - 3 * (abs(xcord - 0.75) + abs(xcord + 0.75))) *

			(1 + abs(1 - abs(xcord)) / (1 - abs(xcord)));

		double ycordNeg = -3 * sqrt((double)(1 - pow((xcord / 7), 2))) * sqrt((double)(abs(abs(xcord) - 4) / (abs(xcord) - 4)));

		glVertex3d(-xcord, ycordPos, 0);
		glVertex3d(-xcord, ycordNeg, 0);

		glVertex3d(xcord, ycordPos, 0);
		glVertex3d(xcord, ycordNeg, 0);
	}

	for (double xcord = 3.99; xcord >= 0; xcord -= 0.01)
	{
		double ycordPos;
		if (xcord >= 3 || xcord <= 1)
		{
			ycordPos = 2 * sqrt((double)(-1 * (abs(abs(xcord) - 1)) * abs(3 - abs(xcord)) / ((abs(xcord) - 1) * (3 - abs(xcord))))) *
				(1 + abs(abs(xcord) - 3) / (abs(xcord) - 3)) * sqrt((double)(1 - pow((xcord / 7), 2))) +
				(5 + 0.97 * (abs(xcord - 0.5) + abs(xcord + 0.5)) - 3 * (abs(xcord - 0.75) + abs(xcord + 0.75))) *
				(1 + abs(1 - abs(xcord)) / (1 - abs(xcord)));
		}
		else
		{
			ycordPos = 2.71052 + (1.5 - 0.5 * abs(xcord)) - 1.35526 * sqrt((double)(4 - pow(abs(xcord) - 1, 2))) *
				sqrt((double)(abs(abs(xcord) - 1) / (abs(xcord) - 1))) + 0.9;
		}

		double ycordNeg = abs(xcord / 2) - 0.0913722 * pow(xcord, 2) - 3 + sqrt((double)(1 - pow((abs(abs(xcord) - 2) - 1), 2)));
		glVertex3d(-xcord, ycordPos, 0);

		glVertex3d(-xcord, ycordNeg, 0);

		glVertex3d(xcord, ycordNeg, 0);

		glVertex3d(xcord, ycordPos, 0);
	}

	glEnd();
	glPopMatrix();
	*/
	glPushMatrix();



	glPointSize(2);

	glBegin(GL_POINTS);
	glColor3f(1, 0, 0);
	glVertex3f(p0[0], p0[1], 0);
	glColor3f(0, 1, 0);
	glVertex3f(p1[0], p1[1], 0);
	glColor3f(0, 0, 1);
	glVertex3f(p2[0], p2[1], 0);
	glColor3f(1, 1, 1);
	glVertex3f(p3[0], p3[1], 0);
	glEnd();

	//ironman from x: 3->76 y:0->120:

	glPushMatrix(); int i;
	glTranslated(0, ironman, 0);
	glColor3f(1, 0, 0);
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * 3.14;

	glBegin(GL_TRIANGLE_FAN);

	glVertex2f(35, 100); // center of circle
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			35 + (20.0 * cos(i * twicePi / triangleAmount)),
			100 + (20.0 * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();




	glPushMatrix(); int aq2;


	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(47, 170); // center of circle
	for (aq2 = 0; aq2 <= triangleAmount; aq2++) {
		glVertex2f(
			47 + (20.0 * cos(aq2 * twicePi / triangleAmount)),
			190 + (20.0 * sin(aq2 * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix(); int aq;


	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(47, 170); // center of circle
	for (aq = 0; aq <= triangleAmount; aq++) {
		glVertex2f(
			47 + (18.8 * cos(aq * twicePi / triangleAmount)),
			190 + (18.8 * sin(aq * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();




	glPushMatrix(); int as;

	glTranslatef(-60, -30, 0);
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(240, 250); // center of circle
	for (as = 0; as <= triangleAmount; as++) {
		glVertex2f(
			240 + (30.0 * cos(as * twicePi / triangleAmount)),
			250 + (30.0 * sin(as * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix(); int ap;
	glColor3f(0, 0, 0.2);
	glTranslatef(-60, -30, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(255, 250); // center of circle
	for (ap = 0; ap <= triangleAmount; ap++) {
		glVertex2f(
			255 + (30.0 * cos(ap * twicePi / triangleAmount)),
			250 + (30.0 * sin(ap * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();



	//coluds
	glPushMatrix(); int l;
	glTranslated(cl1, 0, 0);
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(20, 200); // center of circle
	for (l = 0; l <= triangleAmount; l++) {
		glVertex2f(
			20 + (15.0 * cos(l * twicePi / triangleAmount)),
			200 + (15.0 * sin(l * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix(); int b;
	glTranslated(actX - 35, actY - 20, 0);

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(50, 20); // center of circle
	for (b = 0; b <= triangleAmount; b++) {
		glVertex2f(
			50 + (15.0 * cos(b * twicePi / triangleAmount)),
			20 + (15.0 * sin(b * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();








	glPushMatrix();
	glTranslated(actX - 35, actY - 20, 0);
	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(40.0f, 10.0f, 0.0f);
	glVertex3f(60.0f, 10.0f, 0.0f);
	glVertex3f(50.0f, 35.0f, 0.0f);
	glEnd();
	glPopMatrix();




	glPushMatrix(); int u;
	glTranslated(actX - 35, actY - 20, 0);

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(50, 20); // center of circle
	for (u = 0; u <= triangleAmount; u++) {
		glVertex2f(
			50 + (10.0 * cos(u * twicePi / triangleAmount)),
			20 + (10.0 * sin(u * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();



	glPushMatrix(); int m;
	glTranslated(cl1, 0, 0);
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(50, 200); // center of circle
	for (m = 0; m <= triangleAmount; m++) {
		glVertex2f(
			50 + (24.0 * cos(m * twicePi / triangleAmount)),
			200 + (24.0 * sin(m * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix(); int n;
	glTranslated(cl1, 0, 0);
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(80, 200); // center of circle
	for (n = 0; n <= triangleAmount; n++) {
		glVertex2f(
			80 + (20.0 * cos(n * twicePi / triangleAmount)),
			200 + (20.0 * sin(n * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();




	//clouds2
	glPushMatrix(); int o;
	glColor3f(1, 1, 1);
	glTranslated(cl2, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(180, 200); // center of circle
	for (o = 0; o <= triangleAmount; o++) {
		glVertex2f(
			180 + (15.0 * cos(o * twicePi / triangleAmount)),
			200 + (15.0 * sin(o * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix(); int q;
	glTranslated(cl2, 0, 0);

	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(210, 200); // center of circle
	for (q = 0; q <= triangleAmount; q++) {
		glVertex2f(
			210 + (24.0 * cos(q * twicePi / triangleAmount)),
			200 + (24.0 * sin(q * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix(); int r;
	glTranslated(cl2, 0, 0);
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(240, 200); // center of circle
	for (r = 0; r <= triangleAmount; r++) {
		glVertex2f(
			240 + (20.0 * cos(r * twicePi / triangleAmount)),
			200 + (20.0 * sin(r * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();


	//ra2abto
	glPushMatrix();//draws a red pixel at the origin
	glTranslated(0, ironman, 0);
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(30.0f, 82.0f, 0.0f);
	glVertex3f(30.0f, 76.0f, 0.0f);
	glVertex3f(40.0f, 76.0f, 0.0f);
	glVertex3f(40.0f, 82.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//gesmo
	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 76.0f, 0.0f);
	glVertex3f(15.0f, 20.0f, 0.0f);
	glVertex3f(55.0f, 20.0f, 0.0f);
	glVertex3f(55.0f, 76.0f, 0.0f);
	glEnd();
	glPopMatrix();


	//heart
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslated(0, ironman, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(25.0f, 68.0f, 0.0f);
	glVertex3f(45.0f, 68.0f, 0.0f);
	glVertex3f(35.0f, 53.0f, 0.0f);
	glEnd();
	glPopMatrix();
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslated(0, ironman, 0);
	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex3f(30.0f, 65.0f, 0.0f);
	glVertex3f(40.0f, 65.0f, 0.0f);
	glVertex3f(35.0f, 57.0f, 0.0f);
	glEnd();
	glPopMatrix();
	glEnd();
	glPopMatrix();





	//yellow shade

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.9, 0.9, 0);
	glTranslated(0, ironman, 0);
	glBegin(GL_TRIANGLE_STRIP); // GL_QUAD_STRIP
	glVertex3f(18.0f, 95.0f, 0.0f);
	glVertex3f(25.0f, 115.0f, 0.0f);
	glVertex3f(35.0f, 82.0f, 0.0f);

	glVertex3f(35.0f, 110.0f, 0.0f);
	glVertex3f(52.0f, 95.0f, 0.0f);
	glVertex3f(45.0f, 115.0f, 0.0f);


	glEnd();
	glPopMatrix();


	//eyes
	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.9, 0.9, 0.9);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(25.0f, 100.0f, 0.0f);
	glVertex3f(25.0f, 105.0f, 0.0f);
	glVertex3f(35.0f, 105.0f, 0.0f);
	glVertex3f(35.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.9, 0.9, 0.9);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(38.0f, 100.0f, 0.0f);
	glVertex3f(38.0f, 105.0f, 0.0f);
	glVertex3f(48.0f, 105.0f, 0.0f);
	glVertex3f(48.0f, 100.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//legs

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 20.0f, 0.0f);
	glVertex3f(15.0f, 0.0f, 0.0f);
	glVertex3f(32.0f, 0.0f, 0.0f);
	glVertex3f(32.0f, 20.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 1, 0);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 20.0f, 0.0f);
	glVertex3f(15.0f, 17.0f, 0.0f);
	glVertex3f(32.0f, 17.0f, 0.0f);
	glVertex3f(32.0f, 20.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(37.0f, 20.0f, 0.0f);
	glVertex3f(37.0f, 0.0f, 0.0f);
	glVertex3f(55.0f, 0.0f, 0.0f);
	glVertex3f(55.0f, 20.0f, 0.0f);
	glEnd();
	glPopMatrix();


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 1, 0);
	glTranslated(0, ironman, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(37.0f, 20.0f, 0.0f);
	glVertex3f(37.0f, 17.0f, 0.0f);
	glVertex3f(55.0f, 17.0f, 0.0f);
	glVertex3f(55.0f, 20.0f, 0.0f);
	glEnd();
	glPopMatrix();


	//hands
	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 76.0f, 0.0f);
	glVertex3f(14.0f, 26.0f, 0.0f);
	glVertex3f(5.0f, 26.0f, 0.0f);
	glVertex3f(5.0f, 76.0f, 0.0f);
	glEnd();
	glPopMatrix();

	if (turn == false) {
		if (250 - passY > 0 & 250 - passY < 76) {
			glPushMatrix();//draws a red pixel at the origin
			glColor3f(1, 0, 0);
			glBegin(GL_QUADS); // GL_QUAD_STRIP
			glVertex3f(55.0f, 76.0f, 0.0f);
			glVertex3f(56.0f, 26.0, 0.0f);
			glVertex3f(65.0f, 26.0, 0.0f);
			glVertex3f(65.0f, 76.0f, 0.0f);
			glEnd();
			glPopMatrix();
			pos1 = true;
			pos2 = false;
			pos3 = false;
		}
		else {
			if (250 - passY > 76 && 250 - passY < 140) {
				glPushMatrix();//draws a red pixel at the origin
				glColor3f(1, 0, 0);
				glBegin(GL_QUADS); // GL_QUAD_STRIP
				glVertex3f(55.0f, 76.0f, 0.0f);
				glVertex3f(55.0f, 66.0, 0.0f);
				glVertex3f(110.0f, 66.0, 0.0f);
				glVertex3f(110.0f, 76.0f, 0.0f);
				glEnd();
				glPopMatrix();
				pos1 = false;
				pos2 = true;
				pos3 = false;
			}
			else {
				glPushMatrix();//draws a red pixel at the origin
				glColor3f(1, 0, 0);
				glBegin(GL_QUADS); // GL_QUAD_STRIP
				glVertex3f(55.0f, 76.0f, 0.0f);
				glVertex3f(75.0f, 115.0, 0.0f);
				glVertex3f(85.0f, 105.0f, 0.0f);
				glVertex3f(55.0f, 60.0, 0.0f);

				glEnd();
				glPopMatrix();
				pos1 = false;
				pos2 = false;
				pos3 = true;

			}
		}
	}
	else {
		glPushMatrix();//draws a red pixel at the origin
		glColor3f(1, 0, 0);
		glBegin(GL_QUADS); // GL_QUAD_STRIP
		glVertex3f(55.0f, 76.0f, 0.0f);
		glVertex3f(56.0f, 26.0, 0.0f);
		glVertex3f(65.0f, 26.0, 0.0f);
		glVertex3f(65.0f, 76.0f, 0.0f);
		glEnd();
		glPopMatrix();
		pos1 = true;
		pos2 = false;
		pos3 = false;

	}


	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 1, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 38.0f, 0.0f);
	glVertex3f(15.0f, 32.0f, 0.0f);
	glVertex3f(55.0f, 32.0f, 0.0f);
	glVertex3f(55.0f, 38.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//avengers





	glPushMatrix(); int v;
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(245, 135); // center of circle
	for (v = 0; v <= triangleAmount; v++) {
		glVertex2f(
			245 + (30.0 * cos(v * twicePi / triangleAmount)),
			135 + (30.0 * sin(v * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix(); int w;
	glColor3f(0.2, 0.2, .2);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(245, 135); // center of circle
	for (w = 0; w <= triangleAmount; w++) {
		glVertex2f(
			245 + (20.0 * cos(w * twicePi / triangleAmount)),
			135 + (20.0 * sin(w * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();



	glPushMatrix(); int e;
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(245, 135); // center of circle
	for (e = 0; e <= triangleAmount; e++) {
		glVertex2f(
			245 + (10.0 * cos(e * twicePi / triangleAmount)),
			135 + (10.0 * sin(e * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix(); int t;
	if (passX < 100) {
		glTranslatef(-5, 0, 0);
	}
	else {
		if (passX < 200) {
			glTranslatef(-2, 0, 0);
		}
		else {
			if (passX < 300) {
				glTranslatef(0, 0, 0);
			}
			else {
				if (passX < 400) {
					glTranslatef(2, 0, 0);
				}
				else {
					if (passX < 500) {
						glTranslatef(5, 0, 0);
					}

				}
			}
		}
	}

	if (250 - passY < 50) {
		glTranslatef(0, -5, 0);
	}
	else {
		if (250 - passY < 100) {
			glTranslatef(0, -2, 0);
		}
		else {
			if (250 - passY < 150) {
				glTranslatef(0, 0, 0);
			}
			else {
				if (250 - passY < 200) {
					glTranslatef(0, 2, 0);
				}
				else {
					if (250 - passY < 250) {
						glTranslatef(0, 5, 0);
					}

				}
			}
		}
	}

	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(245, 135); // center of circle
	for (t = 0; t <= triangleAmount; t++) {
		glVertex2f(
			245 + (5.0 * cos(t * twicePi / triangleAmount)),
			135 + (5.0 * sin(t * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();


	//assasins creed

	glPushMatrix(); int k;
	glColor3f(0.9, 0.9, 0.9);
	glTranslatef(0, assasins, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(465, 100); // center of circle
	for (k = 0; k <= triangleAmount; k++) {
		glVertex2f(
			465 + (20.0 * cos(k * twicePi / triangleAmount)),
			100 + (20.0 * sin(k * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();

	//ra2abto
	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.9, 0.9, 0.9);
	glTranslated(430, assasins, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(30.0f, 82.0f, 0.0f);
	glVertex3f(30.0f, 76.0f, 0.0f);
	glVertex3f(40.0f, 76.0f, 0.0f);
	glVertex3f(40.0f, 82.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//gesmo
	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.9, 0.9, 0.9);
	glTranslated(430, assasins, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 90.0f, 0.0f);
	glVertex3f(15.0f, 20.0f, 0.0f);
	glVertex3f(55.0f, 20.0f, 0.0f);
	glVertex3f(55.0f, 90.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslated(430, assasins, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(33.0f, 90.0f, 0.0f);
	glVertex3f(33.0f, 20.0f, 0.0f);
	glVertex3f(37.0f, 20.0f, 0.0f);
	glVertex3f(37.0f, 90.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//black shade

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslated(430, 0, 0);
	glBegin(GL_TRIANGLE_STRIP); // GL_QUAD_STRIP
	glVertex3f(18.0f, 95.0f, 0.0f);
	glVertex3f(25.0f, 115.0f, 0.0f);
	glVertex3f(35.0f, 82.0f, 0.0f);

	glVertex3f(35.0f, 99.0f, 0.0f);
	glVertex3f(52.0f, 95.0f, 0.0f);
	glVertex3f(45.0f, 115.0f, 0.0f);


	glEnd();
	glPopMatrix();





	glPushMatrix();//draws a red pixel at the origin
	glColor3f(1, 0, 0);
	glTranslated(430, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 58.0f, 0.0f);
	glVertex3f(15.0f, 52.0f, 0.0f);
	glVertex3f(55.0f, 52.0f, 0.0f);
	glVertex3f(55.0f, 58.0f, 0.0f);
	glEnd();
	glPopMatrix();


	// eyes



	//accessories
	glPushMatrix();
	glTranslated(430, 0, 0);

	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(28.0f, 55.0f, 0.0f);
	glVertex3f(42.0f, 55.0f, 0.0f);
	glVertex3f(35.0f, 69.0f, 0.0f);
	glEnd();
	glPopMatrix();
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(430, 0, 0);
	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(28.0f, 53.0f, 0.0f);
	glVertex3f(42.0f, 53.0f, 0.0f);
	glVertex3f(35.0f, 40.0f, 0.0f);
	glEnd();
	glPopMatrix();
	glEnd();
	glPopMatrix();




	//


	//

	// 2eedo

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0.9, 0.9, 0.9);
	glTranslated(480.9, 10, 0);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 76.0f, 0.0f);
	glVertex3f(15.0f, 26.0f, 0.0f);
	glVertex3f(5.0f, 26.0f, 0.0f);
	glVertex3f(4.0f, 76.0f, 0.0f);
	glEnd();
	glPopMatrix();

	if (turn == true) {
		if (250 - passY > 0 & 250 - passY < 76) {
			glPushMatrix();//draws a red pixel at the origin
			glTranslated(380, 10, 0);

			glColor3f(0.9, 0.9, 0.9);
			glBegin(GL_QUADS); // GL_QUAD_STRIP
			glVertex3f(56.0f, 76.0f, 0.0f);
			glVertex3f(56.0f, 26.0, 0.0f);
			glVertex3f(64.0f, 26.0, 0.0f);
			glVertex3f(65.0f, 76.0f, 0.0f);
			glEnd();
			glPopMatrix();
			pos4 = true;
			pos6 = false;
			pos5 = false;
		}
		else {
			if (250 - passY > 76 && 250 - passY < 140) {
				glPushMatrix();//draws a red pixel at the origin
				glColor3f(0.9, 0.9, 0.9);
				glBegin(GL_QUADS); // GL_QUAD_STRIP
				glVertex3f(445.0f, 86.0f, 0.0f);
				glVertex3f(445.0f, 76.0, 0.0f);
				glVertex3f(400.0f, 76.0, 0.0f);
				glVertex3f(400.0f, 86.0f, 0.0f);
				glEnd();
				glPopMatrix();
				pos5 = true;
				pos6 = false;
				pos4 = false;
			}
			else {
				glPushMatrix();//draws a red pixel at the origin
				glColor3f(0.9, 0.9, 0.9);
				glBegin(GL_QUADS); // GL_QUAD_STRIP
				glVertex3f(445.0f, 86.0f, 0.0f);
				glVertex3f(445.0f, 76.0, 0.0f);
				glVertex3f(405.0f, 105.0, 0.0f);
				glVertex3f(405.0f, 115.0f, 0.0f);
				glEnd();
				glPopMatrix();
				pos6 = true;
				pos5 = false;
				pos4 = false;
			}
		}
	}
	else {
		glPushMatrix();//draws a red pixel at the origin
		glTranslated(380, 10, 0);

		glColor3f(0.9, 0.9, 0.9);
		glBegin(GL_QUADS); // GL_QUAD_STRIP
		glVertex3f(56.0f, 76.0f, 0.0f);
		glVertex3f(56.0f, 26.0, 0.0f);
		glVertex3f(64.0f, 26.0, 0.0f);
		glVertex3f(65.0f, 76.0f, 0.0f);
		glEnd();
		glPopMatrix();
		pos4 = true;
		pos6 = false;
		pos5 = false;
	}

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslated(430, 0, 0);

	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 20.0f, 0.0f);
	glVertex3f(15.0f, 0.0f, 0.0f);
	glVertex3f(32.0f, 0.0f, 0.0f);
	glVertex3f(32.0f, 20.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslated(453, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(15.0f, 20.0f, 0.0f);
	glVertex3f(15.0f, 0.0f, 0.0f);
	glVertex3f(32.0f, 0.0f, 0.0f);
	glVertex3f(32.0f, 20.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//elrope
	glPushMatrix();//draws a red pixel at the origin
	glColor3f(0, 0, 0);
	glTranslated(430, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP
	glVertex3f(33.0f, 90.0f, 0.0f);
	glVertex3f(33.0f, 20.0f, 0.0f);
	glVertex3f(37.0f, 20.0f, 0.0f);
	glVertex3f(37.0f, 90.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(430, 18, 0);
	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(30.0f, 65.0f, 0.0f);
	glVertex3f(40.0f, 65.0f, 0.0f);
	glVertex3f(35.0f, 57.0f, 0.0f);
	glEnd();
	glPopMatrix();
	glEnd();
	glPopMatrix();


	//



	//eyes




	glPushMatrix();
	glColor3f(0.9, 0.9, 0.9);
	glTranslated(ann, 0, 0);
	glBegin(GL_QUADS); // GL_QUAD_STRIP

	glVertex3f(100.0f, 170.0f, 0.0f);
	glVertex3f(100.0f, 200.0f, 0.0f);
	glVertex3f(200.0f, 200.0f, 0.0f);
	glVertex3f(200.0f, 170.0f, 0.0f);

	glEnd();
	glPopMatrix();




	glPushMatrix(); int g;
	glTranslated(ann, 0, 0);
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(150, 185); // center of circle
	for (g = 0; g <= triangleAmount; g++) {
		glVertex2f(
			150 + (15.0 * cos(g * twicePi / triangleAmount)),
			185 + (15.0 * sin(g * twicePi / triangleAmount))
		);
	}
	glEnd();
	glPopMatrix();






	glPushMatrix();

	glPointSize(6);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);

	p = bezier(t, p0, p1, p2, p3);
	glVertex3f(p[0], p[1], 0);

	glEnd();
	glPopMatrix();

	//

	glFlush();

}
void passM(int x, int y)//passive motion function takes 2 parameters the x and y positions of the mouse
						//it allows the user to make use of the mouse motion without clicking on the mouse buttons
{
	if (done == false) {
		passX = x;//it moves the red square center to the mouse location.
		passY = y;
		if (turn == false) {
			if (pos1 == true) {
				actX = 77;
				actY = 23;
			}
			else {
				if (pos2 == true) {
					actX = 110;
					actY = 76;
				}
				else {
					if (pos3 == true) {
						actX = 85;
						actY = 115;
					}

				}
			}

		}
		else {
			if (pos4 == true) {
				actX = 400.0;
				actY = 26;
			}
			else {
				if (pos5 == true) {
					actX = 370;
					actY = 86;
				}
				else {
					if (pos6 == true) {
						actX = 370;
						actY = 115;
					}

				}
			}
		}

		if (turn == false) {
			if (x < 150) {
				p0[0] = 0;
				p0[1] = 0;

				p1[0] = x;
				p1[1] = 250 - y;

				p2[0] = x + 400;
				p2[1] = 250 - y;

				p3[0] = x + 490;
			}
		}
		else {
			if (x > 350)
			{
				p0[0] = x - 400;

				p2[0] = x;
				p2[1] = 250 - y;

				p3[0] = 490;
				p3[1] = 0;



				p1[0] = x - 400;
				p1[1] = 350 - y;
				glutPostRedisplay();
			}
		}
	}
}
void actM(int button, int state, int x, int y)//mouse function takes 4 parameters: button: which button has been clicked (GLUT_RIGHT_BUTTON or GLUT_LEFT_BUTTON),
											//state wether the button is clicked or released (GLUT_UP or GLUT_DOWN)
											// x and y are the position of the mouse cursor
{
	if (done == false) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)//if the left button has been clicked then translate the square to the mouse position
		{
			timeFlag = true;
			played = false;
			flag2 = true;
			buttonPressed = 0;
			times = 0;
			middleY = false;
			times4 = 0;
			times3 = 0;
			times2 = 0;
			t = 0.25;
			t2 = 0.85;
			done = true;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)//if the right button has been clicked, translate  the square to the origin (0,0)
	{
		middle = ((p1[1] + p2[1]) / 2);
		timeFlag = false;
		played = true;
		flag2 = false;
		times = 0;

	}

	glutPostRedisplay();//redisplay to update the screen with the new paraeters
}



void anim(void);
void main(int argc, char** argr) {
	glutInit(&argc, argr);

	glutInitWindowSize(500, 250);
	glutInitWindowPosition(350, 250);

	glutCreateWindow("Control");
	glutDisplayFunc(Display);
	glutPassiveMotionFunc(passM);	//call the passive motion function
	glutMouseFunc(actM);
	p0[0] = 10;
	p0[1] = 10;

	p1[0] = 10;
	p1[1] = 300;

	p2[0] = 490;
	p2[1] = 300;

	p3[0] = 490;
	p3[1] = 10;
	glClear(GL_COLOR_BUFFER_BIT);
	//glutTimerFunc(0,time,0);		//call the timer function

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	gluOrtho2D(0.0, 500, 0.0, 250);
	glutIdleFunc(anim);
	glutMainLoop();//don't call any method after this line as it will not be reached.
}

void anim() {

	glClear(GL_COLOR_BUFFER_BIT);
	if (flag2 == true) {
		if (timeFlag == true) {

			glBegin(GL_POINTS);
			for (float t = 0; t < 1; t += 0.01)
			{
				p = bezier(t, p0, p1, p2, p3);
				glVertex3f(p[0], p[1], 0);

			}

			if (turn == false) {
				p0[0] = 10;
				p0[1] = 10;

				p1[0] = passX + times;
				p1[1] = 250 - passY + times;

				p2[0] = passX + times + 400;
				p2[1] = 250 - passY + times;

				p3[0] = 490 + times;
				p3[1] = 10 + times;
				times += 0.08;
				times2 += 0.04;

			}
			else {

				p3[0] = 490;
				p3[1] = 10;

				p2[0] = passX - times;
				p2[1] = (250 - passY) + times;

				p1[0] = passX - 400 - times;
				p1[1] = (250 - passY) + times;

				p0[0] = (passX - 400) - times;
				p0[1] = 10 - times;

				times += 0.08;
				times2 += 0.04;

			}

		}
		else {
			times = 0;

		}
		played = false;
		buttonPressed += 0.01;
	}


	if (flag2 == false && buttonPressed > 0.0) {

		flag3 = true;
	}



	if (buttonPressed > 0.0 && buttonPressed < 0.2) {
		down = true;
		perfect = false;
		up = false;
	}
	else {

		if (buttonPressed > 2.0 && buttonPressed < 3.0) {
			down = false;
			up = false;

			perfect = true;
		}
		else {
			if (buttonPressed > 4.0) {
				down = false;
				perfect = false;
				up = true;
			}
		}
	}



	if (perfect == true) {
		result = 1;
	}
	else {
		if (up == true) {
			result = 9;
		}
		else {
			if (down == true) {
				result = 0;
			}
		}
	}



	if (flag3 == true) {
		if (played) {
			if (turn == false) {
				if (t < 1) {
					t += 0.0001;
				}
				p = bezier2(t, p0, p1, p2, p3);
				glVertex3f(p[0], p[1], 0);


			}
			else {
				if (t2 > 0) {
					t2 -= 0.0001;
				}
				p = bezier2(t2, p0, p1, p2, p3);
				glVertex3f(p[0], p[1], 0);
			}
		}

	}



	if (ann >= 350.0) {
		flag = true;
	}
	if (ann <= -150.0) {
		flag = false;
	}
	if (flag == true) {
		ann -= 0.01;
	}
	else {
		ann += 0.01;
	}




	if (actX >= 3.0 && actX <= 73.0 && actY >= 0.0 && actY <= 120.0) {
		if (turn2 == true) {
			livesPlayer1++;
			backup1 = livesPlayer1;
			turn2 = !turn;
			ironhit = true;

		}
	}


	if (actX >= 433.0 && actX <= 500.0 && actY >= 0.0 && actY <= 120.0) {
		if (turn2 == false) {
			livesPlayer2++;
			backup2 = livesPlayer2;
			turn2 = !turn;
			asshit = true;
		}
	}
	if (actX >= (100.0 + ann) && actX <= (200.0 + ann)) {
		if (actY >= 170.0 && actY <= 200.0) {
			if (turn == false) {
				actX = 410.0;
				actY = 70.0;
				flag = true;
				flag2 = false;
				flag3 = false;
				buttonPressed = 0.0;
				buttonReleased = 0.0;
				turn2 = !turn;
				turn = true;
				done = false;


			}

			else {
				actX = 80.0;
				actY = 80.0;
				flag = false;
				flag2 = false;
				flag3 = false;
				buttonPressed = 0.0;
				buttonReleased = 0.0;
				turn2 = !turn;
				turn = false;
				done = false;

			}
			ann = -200;
		}
	}

	if (actX >= 500.0) {
		actX = 410.0;
		actY = 70.0;
		flag = true;
		flag2 = false;
		flag3 = false;
		buttonPressed = 0.0;
		buttonReleased = 0.0;
		turn2 = !turn;
		turn = true;
		done = false;
	}
	else {
		if (actX >= 220.0 && actX <= 270.0) {
			if (actY >= 0.0 && actY <= 160.0) {
				if (turn == false) {
					actX = 410.0;
					actY = 70.0;
					flag = true;
					flag2 = false;
					flag3 = false;
					buttonPressed = 0.0;
					buttonReleased = 0.0;
					turn2 = !turn;
					turn = true;
					done = false;
				}
				else {
					actX = 80.0;
					actY = 80.0;
					flag = false;
					flag2 = false;
					flag3 = false;
					buttonPressed = 0.0;
					buttonReleased = 0.0;
					turn2 = !turn;
					turn = false;
					done = false;
				}

			}
		}
	}
	if (actX < 0.0) {
		actX = 80.0;
		actY = 80.0;

		flag = false;

		flag2 = false;
		flag3 = false;
		buttonPressed = 0.0;
		buttonReleased = 0.0;
		turn2 = !turn;
		turn = false;
		done = false;
	}

	if (actY <= 0.0) {
		if (turn == false) {
			actX = 410.0;
			actY = 70.0;
			flag = true;
			flag2 = false;
			flag3 = false;
			buttonPressed = 0.0;
			buttonReleased = 0.0;
			turn2 = !turn;
			turn = true;
			done = false;
		}
		else {
			actX = 80.0;
			actY = 80.0;
			flag = false;
			flag2 = false;
			flag3 = false;
			buttonPressed = 0.0;
			buttonReleased = 0.0;
			turn2 = !turn;
			turn = false;
			done = false;
		}
	}

	if (backup1 == 1) {
		live2 = 1;
	}
	if (backup2 == 1) {
		live1 = 1;
	}
	if (backup1 == 2) {
		live2 = 2;

	}
	if (backup2 == 2) {
		live1 = 2;
	}
	if (backup1 >= 3) {
		live2 = 3;
	}
	if (backup2 >= 3) {

		live1 = 3;
	}
	up = false;
	down = false;
	perfect = false;

	if (cl1 > 500) {
		cl1 = -20;
	}
	if (cl2 > 500) {
		cl2 = -150;
	}




	if (live1 == 0) {
		livex = 90.0;
	}
	else {
		if (live1 == 1) {
			livex = 50.0;
			colorb1 = 1;
			colorg1 = 0;
		}
		else {
			if (live1 == 2) {
				livex = 20.0;
				colorb1 = 0;
				colorg1 = 0;
				colorr1 = 1;
			}
			else {
				livex = 10.0;
				exit(EXIT_SUCCESS);

			}
		}
	}

	if (live2 == 0) {
		livex2 = 90.0;
	}
	else {
		if (live2 == 1) {
			livex2 = 50.0;
			colorb2 = 1;
			colorg2 = 0;
			colorr2 = 0;
		}
		else {
			if (live2 == 2) {
				livex2 = 20.0;
				colorb2 = 0;
				colorg2 = 0;
				colorr2 = 1;
			}
			else {
				livex2 = 10.0;
				exit(EXIT_SUCCESS);
			}
		}
	}

	cl1 += 0.01;

	cl2 += 0.015;

	if (times2 < 20) {
		if (turn == false) {
			cpr = 1;
			cpg = 1;
		}
		else {
			cpr2 = 1;
			cpg2 = 1;

		}
	}
	else {
		if (times2 < 40) {
			if (turn == false) {
				cpr = 0;
				cpg = 1;
			}
			else {
				cpr2 = 0;
				cpg2 = 1;

			}
		}
		else {
			if (turn == false) {
				cpr = 1;
				cpg = 0;
			}
			else {
				cpr2 = 1;
				cpg2 = 0;

			}
		}
	}

	if (times < 100) {
		if (turn == false) {

			times3 = times;
			times4 = 0;
		}
		else {
			times4 = times;
			times3 = 0;
		}

	}
	else {
		if (turn == false) {

			times3 = 100;
			times4 = 0;
		}
		else {
			times4 = 100;
			times3 = 0;
		}
	}


	if (ironhit == true) {
		if (ironman > 30.0) {
			ironup = true;
		}
		if (ironup == false) {
			ironman += 0.1;
		}
		else {
			ironman -= 0.1;
		}

		if (ironman < 0.0) {

			ironman = 0;
			ironup = false;
			ironhit = false;


		}

	}

	if (asshit == true) {
		if (assasins > 30.0) {
			assup = true;
		}
		if (assup == false) {
			assasins += 0.1;
		}
		else {
			assasins -= 0.1;
		}

		if (assasins < 0.0) {
			assasins = 0;
			assup = false;
			asshit = false;
		}

	}





	glutPostRedisplay();


}

