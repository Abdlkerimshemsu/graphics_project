
#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
float m = -250.0f;
void myInit()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 800, 0, 800, -10.0, 10.0);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)///radius_x,radius_y,centre_position_x,centre_position_y///
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = 3.1416f * i / 180;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();


}

float p = -10;
int i = -700;
float j = -250;
float k = 0;

void yellow_flower(float x, float y) {
    ///....Left side circle tree in Food court.....6 ///
    glColor3ub(139, 146, 22);
    circle(3, 6, x + 280, y + 101);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 275, y + 111);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 285, y + 111);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 290, y + 106);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 270, y + 121);


    glColor3ub(181, 106, 76);
    circle(5, 12, x + 275, y + 123);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 276, y + 123);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 280, y + 141);
    glColor3ub(139, 146, 22);
    circle(4, 10, x + 275, y + 136);
    glColor3ub(181, 106, 76);
    circle(4, 10, x + 277, y + 134);

    glColor3ub(139, 146, 22);
    circle(4, 10, x + 278, y + 133);

    glColor3ub(139, 146, 22);
    circle(5, 12, x + 290, y + 131);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 285, y + 131);
    glColor3ub(181, 106, 76);
    circle(5, 12, x + 284, y + 126);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 283, y + 125);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 295, y + 121);
    glColor3ub(181, 106, 76);
    circle(5, 12, x + 290, y + 116);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 289, y + 116);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 280, y + 119);
    glColor3ub(139, 146, 22);
    circle(5, 12, x + 292, y + 141);



    glColor3ub(227, 91, 137);         ///Full..........Food court .........comp.
    circle(1, 2, x + 280, y + 119);
    glColor3ub(227, 91, 137);
    circle(1, 2, x + 280, y + 133);
    glColor3ub(227, 91, 137);
    circle(1, 2, x + 290, y + 133);
    glColor3ub(227, 91, 137);
    circle(1, 2, x + 295, y + 128);
    glColor3ub(227, 91, 137);
    circle(1, 2, x + 269, y + 119);
    glColor3ub(227, 91, 137);
    circle(1, 2.5, x + 275, y + 134);
    glColor3ub(227, 91, 137);
    circle(1, 1.5, x + 276, y + 110);
    glColor3ub(227, 91, 137);
    circle(1, 2.5, x + 290, y + 106);
    glColor3ub(227, 91, 137);
    circle(1, 3, x + 295, y + 119);
    glColor3ub(227, 91, 137);
    circle(1, 3, x + 285, y + 103);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside Food Court ........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(x + 285, y + 90);
    glVertex2f(x + 288, y + 90);
    glVertex2f(x + 287, y + 100);
    glVertex2f(x + 282, y + 130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside Food Court........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(x + 285, y + 90);
    glVertex2f(x + 288, y + 90);
    glVertex2f(x + 284, y + 100);
    glVertex2f(x + 278, y + 110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........Food Court........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(x + 284, y + 90);
    glVertex2f(x + 288, y + 90);
    glVertex2f(x + 289, y + 110);
    glVertex2f(x + 292, y + 140);
    glEnd();
    ///End Left side circle tree///
}

void keyPressed(unsigned char key, int x, int y) {
    switch (key) {
    case 'R':
    case 'r':
        // Increase the value of 'j' to move the bus up
        k += 3.3f;
        break;
    case 's':
    case 'S':
        // Decrease the value of 'j' to move the bus down
        k += 0.8f;
    case 'B':
    case 'b':
        k =k;
        break;
    default:
        break;
    }

    // Redraw the scene with the updated value of 'j'
    glutPostRedisplay();
}


void window() {
    //WIDOWS
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(94, 310);
    glVertex2i(94, 380);
    glVertex2i(194, 380);
    glVertex2i(194, 310);
    glEnd();

    // to draw line FOR WINDOW
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2i(94, 340);
    glVertex2i(194, 340);
    glLineWidth(6);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2i(144, 380);
    glVertex2i(144, 310);
    glLineWidth(6);
    glEnd();
}




void windowUpper() {
    //WIDOWS
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(94, 450);
    glVertex2i(94, 520);
    glVertex2i(194, 520);
    glVertex2i(194, 450);
    glEnd();

    // to draw line FOR WINDOW
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2i(94, 485);
    glVertex2i(194, 485);
    glLineWidth(6);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2i(144, 520);
    glVertex2i(144, 450);
    glLineWidth(6);
    glEnd();
}



void windowLower() {
    //WIDOWS
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(94, 170);
    glVertex2i(94, 240);
    glVertex2i(194, 240);
    glVertex2i(194, 170);
    glEnd();

    // to draw line FOR WINDOW
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2i(94, 205);
    glVertex2i(194, 205);
    glLineWidth(6);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2i(144, 240);
    glVertex2i(144, 170);
    glLineWidth(6);
    glEnd();
}


void line() {
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2i(94, 170);
    glVertex2i(320, 170);
    glLineWidth(30);
    glEnd();

}

void displayText(float x, float y, const char* text) {
    glColor3f(0, 0, 1);
    glRasterPos2f(x, y);
    for (int i = 0; text[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}


void displayText2(float x, float y, const char* text) {
    glColor3f(1, 1, 1);
    glRasterPos2f(x, y);
    for (int i = 0; text[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
}




void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 147);
    glVertex2f(0, 100);
    glVertex2f(800, 100);
    glColor3ub(102, 204, 255);
    glVertex2f(800, 800);
    glVertex2f(0, 800);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(90, 147, 48);
    glVertex2f(0, 100);        ///2nd building font area
    glVertex2f(800, 100);
    glVertex2f(800, 119.5);
    glVertex2f(0, 119.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(0, 30);
    glVertex2f(800, 30);
    glVertex2f(800, 80);
    glVertex2f(0, 80);
    glEnd();

    glBegin(GL_LINES);//Road top bar
    glLineWidth(2);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(0, 81);
    glVertex2i(800, 81);
    glEnd();

    glBegin(GL_LINES);//Road middle bar
    glLineWidth(2);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(0, 62);
    glVertex2i(800, 62);
    glEnd();

    glBegin(GL_LINES);//Road Bottop bar
    glLineWidth(2);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(0, 39);
    glVertex2i(800, 39);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(90, 147, 48);
    glVertex2f(0, 82);
    glVertex2f(800, 82);
    glVertex2f(800, 90);
    glVertex2f(0, 90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(90, 147, 48);
    glVertex2f(0, 38);
    glVertex2f(800, 38);
    glVertex2f(800, 0);
    glVertex2f(0, 0);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree1   ///
    glColor3ub(75, 35, 5);
    glVertex3f(680, 0, 0);
    glVertex3f(685, 0, 0);
    glVertex3f(685, 20, 0);
    glVertex3f(680, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(675, 10, 0);
    glVertex3f(690, 10, 0);
    glVertex3f(682.5, 40, 0);
    glVertex3f(682.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(676, 15, 0);
    glVertex3f(689, 15, 0);
    glVertex3f(682.5, 45, 0);
    glVertex3f(682.5, 45, 0);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree2   ///
    glColor3ub(75, 35, 5);
    glVertex3f(580, 0, 0);
    glVertex3f(585, 0, 0);
    glVertex3f(585, 20, 0);
    glVertex3f(580, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(575, 10, 0);
    glVertex3f(590, 10, 0);
    glVertex3f(582.5, 40, 0);
    glVertex3f(582.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(576, 15, 0);
    glVertex3f(589, 15, 0);
    glVertex3f(582.5, 45, 0);
    glVertex3f(582.5, 45, 0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree3   ///
    glColor3ub(75, 35, 5);
    glVertex3f(480, 0, 0);
    glVertex3f(485, 0, 0);
    glVertex3f(485, 20, 0);
    glVertex3f(480, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(475, 10, 0);
    glVertex3f(490, 10, 0);
    glVertex3f(482.5, 40, 0);
    glVertex3f(482.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(476, 15, 0);
    glVertex3f(489, 15, 0);
    glVertex3f(482.5, 45, 0);
    glVertex3f(482.5, 45, 0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree4   ///
    glColor3ub(75, 35, 5);
    glVertex3f(380, 0, 0);
    glVertex3f(385, 0, 0);
    glVertex3f(385, 20, 0);
    glVertex3f(380, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(375, 10, 0);
    glVertex3f(390, 10, 0);
    glVertex3f(382.5, 40, 0);
    glVertex3f(382.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(376, 15, 0);
    glVertex3f(389, 15, 0);
    glVertex3f(382.5, 45, 0);
    glVertex3f(382.5, 45, 0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree5   ///
    glColor3ub(75, 35, 5);
    glVertex3f(280, 0, 0);
    glVertex3f(285, 0, 0);
    glVertex3f(285, 20, 0);
    glVertex3f(280, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(275, 10, 0);
    glVertex3f(290, 10, 0);
    glVertex3f(282.5, 40, 0);
    glVertex3f(282.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(276, 15, 0);
    glVertex3f(289, 15, 0);
    glVertex3f(282.5, 45, 0);
    glVertex3f(282.5, 45, 0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree6   ///
    glColor3ub(75, 35, 5);
    glVertex3f(180, 0, 0);
    glVertex3f(185, 0, 0);
    glVertex3f(185, 20, 0);
    glVertex3f(180, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(175, 10, 0);
    glVertex3f(190, 10, 0);
    glVertex3f(182.5, 40, 0);
    glVertex3f(182.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(176, 15, 0);
    glVertex3f(189, 15, 0);
    glVertex3f(182.5, 45, 0);
    glVertex3f(182.5, 45, 0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree7   ///
    glColor3ub(75, 35, 5);
    glVertex3f(80, 0, 0);
    glVertex3f(85, 0, 0);
    glVertex3f(85, 20, 0);
    glVertex3f(80, 20, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(75, 10, 0);
    glVertex3f(90, 10, 0);
    glVertex3f(82.5, 40, 0);
    glVertex3f(82.5, 40, 0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(76, 15, 0);
    glVertex3f(89, 15, 0);
    glVertex3f(82.5, 45, 0);
    glVertex3f(82.5, 45, 0);
    glEnd();
    ///End///


    /////////
    glBegin(GL_QUADS);//shade grey
    glColor3ub(96, 96, 96);
    glVertex3i(21, 40, 0);
    glVertex3i(6, 40, 0);
    glVertex3i(6, 46, 0);
    glVertex3i(21, 46, 0);
    glEnd();

    glBegin(GL_QUADS);//shade grey+green 1
    glColor3ub(0, 204, 0);
    glVertex3i(23, 40, 0);
    glVertex3i(21, 40, 0);
    glVertex3i(21, 46, 0);
    glVertex3i(23, 46, 0);
    glEnd();

    glBegin(GL_QUADS);//shade grey+green 2
    glColor3ub(0, 204, 0);
    glVertex3f(6.5, 40, 0);
    glVertex3f(4.5, 40, 0);
    glVertex3f(4.5, 46, 0);
    glVertex3f(6.5, 46, 0);
    glEnd();


    glBegin(GL_QUADS);//green rectangle 1
    glColor3ub(0, 204, 0);
    glVertex3i(7, 40, 0);
    glVertex3i(9, 40, 0);
    glVertex3i(9, 43, 0);
    glVertex3i(7, 43, 0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 2
    glColor3ub(0, 204, 0);
    glVertex3i(11, 46, 0);
    glVertex3i(9, 46, 0);
    glVertex3i(9, 43, 0);
    glVertex3i(11, 43, 0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 3
    glColor3ub(0, 204, 0);
    glVertex3i(11, 40, 0);
    glVertex3i(13, 40, 0);
    glVertex3i(13, 43, 0);
    glVertex3i(11, 43, 0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 4
    glColor3ub(0, 204, 0);
    glVertex3i(15, 46, 0);
    glVertex3i(13, 46, 0);
    glVertex3i(13, 43, 0);
    glVertex3i(15, 43, 0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 5
    glColor3ub(0, 204, 0);
    glVertex3i(15, 40, 0);
    glVertex3i(17, 40, 0);
    glVertex3i(17, 43, 0);
    glVertex3i(15, 43, 0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 6
    glColor3ub(0, 204, 0);
    glVertex3i(19, 46, 0);
    glVertex3i(17, 46, 0);
    glVertex3i(17, 43, 0);
    glVertex3i(19, 43, 0);
    glEnd();
    glBegin(GL_QUADS);//green rectangle 7
    glColor3ub(0, 204, 0);
    glVertex3i(19, 40, 0);
    glVertex3i(21, 40, 0);
    glVertex3i(21, 43, 0);
    glVertex3i(19, 43, 0);
    glEnd();



    glBegin(GL_LINES);//horizontal shade
    glColor3ub(0, 0, 0);
    glVertex3i(23, 43, 0);
    glVertex3f(4.5, 43, 0);
    glEnd();

    glBegin(GL_LINES);//horiz line 1
    glColor3ub(0, 0, 0);
    glVertex3i(23, 40, 0);
    glVertex3f(4.5, 40, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 2
    glColor3ub(0, 0, 0);
    glVertex3i(23, 46, 0);
    glVertex3f(4.5, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 3
    glColor3ub(0, 0, 0);
    glVertex3i(23, 40, 0);
    glVertex3i(23, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 4
    glColor3ub(0, 0, 0);
    glVertex3i(21, 40, 0);
    glVertex3i(21, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 5
    glColor3ub(0, 0, 0);
    glVertex3i(19, 40, 0);
    glVertex3i(19, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 6
    glColor3ub(0, 0, 0);
    glVertex3i(17, 40, 0);
    glVertex3i(17, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 7
    glColor3ub(0, 0, 0);
    glVertex3i(15, 40, 0);
    glVertex3i(15, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 8
    glColor3ub(0, 0, 0);
    glVertex3i(13, 40, 0);
    glVertex3i(13, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 9
    glColor3ub(0, 0, 0);
    glVertex3i(11, 40, 0);
    glVertex3i(11, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 10
    glColor3ub(0, 0, 0);
    glVertex3i(9, 40, 0);
    glVertex3i(9, 46, 0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 11
    glColor3ub(0, 0, 0);
    glVertex3i(7, 40, 0);
    glVertex3i(7, 46, 0);
    glEnd();


    glBegin(GL_LINES);//horizontal line 12
    glColor3ub(0, 0, 0);
    glVertex3i(5, 40, 0);
    glVertex3i(5, 46, 0);
    glEnd();



    glBegin(GL_QUADS);//body building up part
    glColor3ub(192, 192, 192);
    glVertex3i(22, 32, 0);
    glVertex3f(5.5, 32, 0);
    glVertex3f(5.5, 40, 0);
    glVertex3i(22, 40, 0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 1
    glColor3ub(0, 0, 0);
    glVertex3i(22, 32, 0);
    glVertex3i(22, 40, 0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 2
    glColor3ub(0, 0, 0);
    glVertex3f(5.5, 32, 0);
    glVertex3f(5.5, 40, 0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 3
    glColor3ub(255, 255, 255);
    glVertex3f(13.5, 32, 0);
    glVertex3f(13.5, 40, 0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 4
    glColor3ub(255, 255, 255);
    glVertex3f(17.75, 32, 0);
    glVertex3f(17.75, 40, 0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 5
    glColor3ub(255, 255, 255);
    glVertex3f(9.25, 32, 0);
    glVertex3f(9.25, 40, 0);
    glEnd();
    ///////////////////////////////////////////////////BUILDING 

    //side Wall
    glColor4f(0.8, 0.87, 0.74, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(80, 520);
    glVertex2i(720, 520);
    glVertex2i(720, 100);
    glVertex2i(80, 100);
    glEnd();

    //for left side 
    glColor3f(0.8, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(80, 100);
    glVertex2i(80, 520);
    glVertex2i(10, 520);
    glVertex2i(10, 100);
    glEnd();

    //for upper 
    glColor4f(0.75, 0.75, 0.75, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(720, 520);
    glVertex2i(670, 570);
    glVertex2i(30, 570);
    glVertex2i(80, 520);
    glEnd();

    //for upper triangle 
    glColor3f(1, 0.3, 0.3);
    glBegin(GL_TRIANGLES);
    glVertex2i(30, 570);
    glVertex2i(80, 520);
    glVertex2i(10, 520);
    glEnd();

    // to draw line that specify floors
    glPushMatrix();
    glTranslatef(1, 0, 0);
    line();
    glPopMatrix();

    // to draw line that specify floors
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2i(80, 380);
    glVertex2i(128, 380);
    glLineWidth(5);
    glEnd();

    // to draw line that specify mirror with build


    // to draw line that specify mirror with build
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2i(80, 450);
    glVertex2i(128, 450);
    glLineWidth(2);
    glEnd();

    // to draw line that specify mirror with build
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2i(80, 310);
    glVertex2i(128, 310);
    glLineWidth(2);
    glEnd();

    // Draw the first window
    glPushMatrix();
    glTranslatef(1, 0, 0);
    window();
    glPopMatrix();

    // Draw the second window
    glPushMatrix();
    glTranslatef(128, 0, 0);
    window();
    glPopMatrix();

    // Draw the second window
    glPushMatrix();
    glTranslatef(364, 0, 0);
    window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(500, 0, 0);
    window();
    glPopMatrix();

 //upper window
    glPushMatrix();
    glTranslatef(1, 0, 0);
    windowUpper();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(128, 0, 0);
    windowUpper();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(364, 0, 0);
    windowUpper();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(500, 0, 0);
    windowUpper();
    glPopMatrix();
    //Lower window
    glPushMatrix();
    glTranslatef(1, 0, 0);
    windowLower();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(128, 0, 0);
    windowLower();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(364, 0, 0);
    windowLower();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(500, 0, 0);
    windowLower();
    glPopMatrix();
    //KUAMI
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(320, 100);
    glVertex2i(330, 100);
    glVertex2i(330, 520);
    glVertex2i(320, 520);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(448, 100);
    glVertex2i(458, 100);
    glVertex2i(458, 520);
    glVertex2i(448, 520);
    glEnd();

  

    //MAIN GET COLOR
    glColor4f(0.9, 0.8,0.8, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(330, 100);
    glVertex2i(330, 520);
    glVertex2i(448, 520);
    glVertex2i( 448,100);
    glEnd();

    //ASHENDA
    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
    glVertex2i(80, 520);
    glVertex2i(80, 514);
    glVertex2i(720, 514);
    glVertex2i(720, 520);
    glEnd();

    // MAIN GET

    glColor4f(0.2, 0.1, 0.4, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(330, 210);
    glVertex2i(330, 200);
    glVertex2i(448, 200);
    glVertex2i(448, 210);
    glEnd();


    // MAIN GET

    glColor4f(0.5, 0.4, 0.6, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(330, 200);
    glVertex2i(330, 100);
    glVertex2i(448, 100);
    glVertex2i(448, 200);
    glEnd();


    //MAIN GET DOOR
    glColor4f(0.1, 0.2, 0.4, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(330, 100);
    glVertex2i(330, 200);
    glVertex2i(387, 200);
    glVertex2i(387, 100);
    glEnd();

    glColor4f(0.1, 0.2, 0.4, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(391, 100);
    glVertex2i(391, 200);
    glVertex2i(448, 200);
    glVertex2i(448, 100);
    glEnd();


    glColor4f(1, 1,  1, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(330, 148);
    glVertex2i(330, 152);
    glVertex2i(448, 152);
    glVertex2i(448, 148);
    glEnd();


    //COLOR FOR THE TEXT
    glColor4f(1, 1, 1, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(330, 210);
    glVertex2i(330, 285);
    glVertex2i(448, 285);
    glVertex2i(448, 210);
    glEnd();

    //COLOR FOR THE TEXT
    glColor4f(0, 0, 0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(0, 800);
    glVertex2i(200, 800);
    glVertex2i(200, 610);
    glVertex2i(0, 610);
    glEnd();

    float textX = 330.0f;
    float textY = 255.0f;
    float textZ = 235.0f;
    float textA = 30.0f;
    float textB = 780.0f;
    float textC = 760.0f;
    float textD = 740.0f;
    float textE = 720.0f;
    float textF = 700.0f;
    float textW = 150.0f;

    // Display the text
    displayText(textX, textY, "College of Natural and");
    displayText(textX, textZ, "Computational Science!");
    displayText(textA, textB, "Name!");
    displayText(textW, textB, "ID_NO!");
    displayText2(textA, textC, "1:Zulkif Azher");
    displayText2(textA, textD, "2:Abdlkerim Shemsu");
    displayText2(textA, textE, "3:Samson Derege");
    displayText2(textA, textF, "4:Amir Kemal");
    displayText2(textW, textC, "2652");
    displayText2(textW, textD, "0039");
    displayText2(textW, textE, "2074");
    displayText2(textW, textF, "0256");
    
    for (int i = 0; i <13; i++) {
        glPushMatrix();
        glTranslatef(i * -11, 0, 0);
        yellow_flower(i * -11, 0);
        glPopMatrix();
    }
   

     

    
   


    

    ///Lamp post///
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(133, 81);
    glVertex2f(134, 81);
    glVertex2f(134, 197);
    glVertex2f(133, 197);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(233, 81);
    glVertex2f(234, 81);
    glVertex2f(234, 197);
    glVertex2f(233, 197);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(333, 81);
    glVertex2f(334, 81);
    glVertex2f(334, 197);
    glVertex2f(333, 197);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(433, 81);
    glVertex2f(434, 81);
    glVertex2f(434, 197);
    glVertex2f(433, 197);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(533, 81);
    glVertex2f(534, 81);
    glVertex2f(534, 197);
    glVertex2f(533, 197);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(633, 81);
    glVertex2f(634, 81);
    glVertex2f(634, 197);
    glVertex2f(633, 197);
    glEnd();

    ///End//


    glColor3f(1, 1, 1);
    glRasterPos2i(385,580 );

    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'G');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'a');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'l');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'a');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'x');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'y');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'G ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'r');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'o');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'u');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'p');
     

    glColor3ub(139, 146, 22);
    circle(8, 22, 0, 150);
    glColor3ub(139, 146, 22);
    circle(8, 22, 10, 170);
    glColor3ub(139, 146, 22);
    circle(8, 22, 13, 140);
    glColor3ub(139, 146, 22);
    circle(7, 25, 22, 150);
    glColor3ub(139, 146, 22);
    circle(8, 22, 30, 150);
    glColor3ub(139, 146, 22);
    circle(10, 40, 0, 250);

    glColor3ub(139, 146, 22);
    circle(9, 22, 30, 295);
    glColor3ub(139, 146, 22);
    circle(8, 15, 30, 293);

    glColor3ub(139, 146, 22);
    circle(9, 22, 45, 285);
    glColor3ub(139, 146, 22);
    circle(9, 22, 45, 280);
    glColor3ub(139, 146, 22);
    circle(8, 15, 45, 275);

    glColor3ub(139, 146, 22);
    circle(9, 22, 55, 235);
    glColor3ub(139, 146, 22);
    circle(9, 32, 50, 255);

    glColor3ub(139, 146, 22);
    circle(9, 22, 59, 225);
    glColor3ub(139, 146, 22);
    circle(9, 22, 56, 255);
    glColor3ub(139, 146, 22);
    circle(9, 22, 63, 195);
    glColor3ub(139, 146, 22);
    circle(9, 22, 50, 180);
    glColor3ub(139, 146, 22);
    circle(9, 22, 58, 165);
    glColor3ub(139, 146, 22);
    circle(9, 22, 49, 150);
    glColor3ub(139, 146, 22);
    circle(9, 22, 38, 140);


    glColor3ub(0, 77, 26);
    circle(10, 20, 55, 190);
    glColor3ub(139, 146, 22);
    circle(9.5, 19, 55, 190);


    glColor3ub(0, 77, 26);
    circle(10, 20, 55, 205);
    glColor3ub(139, 146, 22);
    circle(9.5, 20, 55, 205);


    glColor3ub(0, 77, 26);
    circle(10, 20, 50, 218);
    glColor3ub(139, 146, 22);
    circle(9.5, 20, 50, 218);


    glColor3ub(139, 146, 22);
    circle(10, 20, 27, 130);


    glColor3ub(139, 146, 22);
    circle(35, 70, 20, 200);
    glColor3ub(139, 146, 22);    ///
    circle(15, 30, 30, 255);


    glColor3ub(0, 77, 26);
    circle(10, 20, 42, 225);
    glColor3ub(139, 146, 22);
    circle(9.5, 20, 42, 224);


    glColor3ub(0, 77, 26);
    circle(10, 20, 30, 225);
    glColor3ub(139, 146, 22);
    circle(10, 20, 30, 224);


    glColor3ub(0, 77, 26);
    circle(10, 18, 42, 263);
    glColor3ub(139, 146, 22);
    circle(10, 18, 42, 262);


    glColor3ub(0, 77, 26);
    circle(10, 20, 30, 180);
    glColor3ub(139, 146, 22);
    circle(10, 20, 30, 179);

    glColor3ub(0, 77, 26);
    circle(10, 20, 20, 180);
    glColor3ub(139, 146, 22);
    circle(10, 20, 20, 179);

    glColor3ub(0, 77, 26);
    circle(10, 20, 40, 155);
    glColor3ub(139, 146, 22);
    circle(10, 20, 40, 156);


    glColor3ub(139, 146, 22);
    circle(9, 22, 20, 280);
    glColor3ub(0, 77, 26);
    circle(9, 21, 20, 270);
    glColor3ub(139, 146, 22);
    circle(9, 21, 20, 269);


    glColor3ub(139, 146, 22);
    circle(9, 22, 10, 255);
    glColor3ub(0, 77, 26);
    circle(9, 20, 10, 245);
    glColor3ub(139, 146, 22);
    circle(9, 20, 10.5, 244);


  





   

    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........2   ///
    glColor3ub(139, 99, 47);
    glVertex2f(650, 90);
    glVertex2f(655, 90);
    glVertex2f(655, 110);
    glVertex2f(650, 110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 99, 47);
    glVertex2f(640, 110);
    glVertex2f(665, 110);
    glVertex2f(652.5, 140);
    glVertex2f(652.5, 140);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 99, 47);
    glVertex2f(641, 120);
    glVertex2f(664, 120);
    glVertex2f(652.5, 160);
    glVertex2f(652.5, 160);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 99, 47);
    glVertex2f(642, 130);
    glVertex2f(663, 130);
    glVertex2f(652.5, 180);
    glVertex2f(652.5, 180);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(642.5, 140);
    glVertex2f(662.5, 140);
    glVertex2f(652.5, 185);
    glVertex2f(652.5, 185);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(643, 150);
    glVertex2f(662, 150);
    glVertex2f(652.5, 195);
    glVertex2f(652.5, 195);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(643.5, 160);
    glVertex2f(661.5, 160);
    glVertex2f(652.5, 210);
    glVertex2f(652.5, 210);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(644, 170);
    glVertex2f(661, 170);
    glVertex2f(652.5, 230);
    glVertex2f(652.5, 230);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(644.5, 180);
    glVertex2f(660.5, 180);
    glVertex2f(652.5, 250);
    glVertex2f(652.5, 250);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........3   ///
    glColor3ub(139, 99, 47);
    glVertex2f(680, 90);
    glVertex2f(685, 90);
    glVertex2f(685, 100);
    glVertex2f(680, 100);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(675, 100);
    glVertex2f(690, 100);
    glVertex2f(682.5, 130);
    glVertex2f(682.5, 130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(676, 110);
    glVertex2f(689, 110);
    glVertex2f(682.5, 140);
    glVertex2f(682.5, 140);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(677, 122);
    glVertex2f(688, 122);
    glVertex2f(682.5, 155);
    glVertex2f(682.5, 155);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........4   ///
    glColor3ub(139, 99, 47);
    glVertex2f(690, 90);
    glVertex2f(695, 90);
    glVertex2f(695, 105);
    glVertex2f(690, 105);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 99, 47);
    glVertex2f(685, 105);
    glVertex2f(700, 105);
    glVertex2f(692.5, 135);
    glVertex2f(692.5, 135);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(686, 115);
    glVertex2f(699, 115);
    glVertex2f(692.5, 145);
    glVertex2f(692.5, 145);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(687, 127);
    glVertex2f(698, 127);
    glVertex2f(692.5, 165);
    glVertex2f(692.5, 165);
    glEnd();


    glColor3ub(0, 153, 51);      ///....tree.........beside 3rd Building........6 ///
    circle(3, 6, 575, 100);
    glColor3ub(0, 153, 51);
    circle(5, 12, 570, 110);
    glColor3ub(0, 153, 51);
    circle(5, 12, 580, 110);
    glColor3ub(0, 153, 51);
    circle(5, 12, 585, 105);
    glColor3ub(0, 153, 51);
    circle(5, 12, 565, 120);


    glColor3ub(0, 102, 00);
    circle(5, 12, 570, 122);
    glColor3ub(0, 153, 51);
    circle(5, 12, 571, 122);
    glColor3ub(0, 153, 51);
    circle(5, 12, 575, 140);
    glColor3ub(0, 153, 51);
    circle(4, 10, 570, 135);
    glColor3ub(0, 102, 0);
    circle(4, 10, 572, 133);

    glColor3ub(0, 153, 51);
    circle(4, 10, 573, 132);

    glColor3ub(0, 153, 51);
    circle(5, 12, 585, 130);
    glColor3ub(0, 153, 51);
    circle(5, 12, 580, 130);
    glColor3ub(0, 102, 0);
    circle(5, 12, 579, 125);
    glColor3ub(0, 153, 51);
    circle(5, 12, 578, 124);
    glColor3ub(0, 153, 51);
    circle(5, 12, 590, 120);
    glColor3ub(0, 102, 0);
    circle(5, 12, 585, 115);
    glColor3ub(0, 153, 51);
    circle(5, 12, 584, 115);
    glColor3ub(0, 153, 51);
    circle(5, 12, 575, 118);
    glColor3ub(0, 153, 51);
    circle(5, 12, 587, 140);



    glColor3ub(255, 255, 255);         ///Full..........3rd Building.........comp.
    circle(1, 2, 575, 118);
    glColor3ub(255, 255, 255);
    circle(1, 2, 575, 138);
    glColor3ub(255, 255, 255);
    circle(1, 2, 585, 138);
    glColor3ub(255, 255, 255);
    circle(1, 2, 580, 127);
    glColor3ub(255, 255, 255);
    circle(1, 2, 564, 118);
    glColor3ub(255, 255, 255);
    circle(1, 2.5, 570, 133);
    glColor3ub(255, 255, 255);
    circle(1, 1.5, 571, 109);
    glColor3ub(255, 255, 255);
    circle(1, 2.5, 585, 105);
    glColor3ub(255, 255, 255);
    circle(1, 3, 590, 118);
    glColor3ub(255, 255, 255);
    circle(1, 3, 585, 120);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(580, 90);
    glVertex2f(583, 90);
    glVertex2f(582, 100);
    glVertex2f(577, 130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(580, 90);
    glVertex2f(583, 90);
    glVertex2f(579, 100);
    glVertex2f(573, 110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(579, 90);
    glVertex2f(583, 90);
    glVertex2f(584, 110);
    glVertex2f(587, 140);
    glEnd();


    glColor3ub(253, 183, 77);    ///.........S U N.....................///
    circle(18, 36, 400, 705);
    glColor3ub(253, 183, 77);
    circle(16.5, 33, 400, 705);
    glColor3ub(253, 183, 77);
    circle(14.5, 30, 400, 705);
    glColor3ub(253, 183, 77);
    circle(12.5, 27, 400, 705);


    glColor3ub(232, 241, 255);        ///....Megh.......1 covering sun....///
    circle(13, 20, 400, 665);
    glColor3ub(252, 254, 255);
    circle(11, 18, 400, 665);

    glColor3ub(232, 241, 255);
    circle(10, 20, 410, 675);
    glColor3ub(252, 254, 255);
    circle(10, 20, 412, 672);

    glColor3ub(232, 241, 255);
    circle(13, 20, 410, 655);

    glColor3ub(221, 229, 247);
    circle(9, 20, 420, 680);
    glColor3ub(252, 254, 255);
    circle(8, 18, 420, 679);

    glColor3ub(232, 241, 255);
    circle(9, 20, 420, 650);
    glColor3ub(252, 254, 255);
    circle(8, 18, 420, 652);

    glColor3ub(221, 229, 247);
    circle(9, 20, 430, 685);
    glColor3ub(252, 254, 255);
    circle(8, 18, 430, 683);

    glColor3ub(232, 241, 255);
    circle(9, 20, 425, 655);
    glColor3ub(252, 254, 255);
    circle(8, 18, 435, 657);

    glColor3ub(232, 241, 255);
    circle(9, 20, 440, 675);

    glColor3ub(221, 229, 247);
    circle(8, 18, 445, 665);
    glColor3ub(252, 254, 255);
    circle(8, 18, 443, 663);
    glColor3ub(252, 254, 255);
    circle(18, 18, 420, 664);
    glColor3ub(252, 254, 255);
    circle(18, 25, 417, 665);


    glColor3ub(232, 241, 255);        ///....Megh.......2.....///
    circle(13, 20, p + 200, 745);
    glColor3ub(252, 254, 255);
    circle(11, 18, p + 200, 745);

    glColor3ub(232, 241, 255);
    circle(10, 20, p + 210, 755);
    glColor3ub(252, 254, 255);
    circle(10, 20, p + 212, 762);

    glColor3ub(232, 241, 255);
    circle(13, 20, p + 210, 735);

    glColor3ub(221, 229, 247);
    circle(9, 20, p + 220, 750);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 220, 759);

    glColor3ub(232, 241, 255);
    circle(9, 20, p + 220, 756);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 220, 752);

    glColor3ub(232, 241, 255);
    circle(9, 20, p + 230, 765);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 230, 761);

    glColor3ub(232, 241, 255);
    circle(9, 20, p + 225, 745);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 235, 747);

    glColor3ub(232, 241, 255);
    circle(9, 20, p + 240, 755);

    glColor3ub(221, 229, 247);
    circle(8, 18, p + 243, 745);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 240, 743);
    glColor3ub(173, 197, 224);
    circle(8, 18, p + 230, 733);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 230, 738);
    glColor3ub(173, 197, 224);
    circle(8, 18, p + 220, 723);
    glColor3ub(252, 254, 255);
    circle(8, 18, p + 220, 728);



    glColor3ub(252, 254, 255);
    circle(23, 9, p + 245, 744);
    glColor3ub(173, 197, 224);
    circle(21, 10, p + 240, 720);
    glColor3ub(252, 254, 255);
    circle(21, 11, p + 238, 723);


    glColor3ub(252, 254, 255);
    circle(18, 18, p + 210, 744);
    glColor3ub(252, 254, 255);
    circle(18, 25, p + 220, 745);

    glColor3ub(173, 197, 224);
    circle(10, 20, p + 235, 715);
    glColor3ub(252, 254, 255);
    circle(10, 20, p + 235, 719);



    glColor3ub(173, 197, 224);        ///....Megh.......3.....///
    circle(9, 15, p + 20, 685);
    glColor3ub(252, 254, 255);
    circle(6, 14, p + 21, 685);

    glColor3ub(232, 241, 255);
    circle(7, 16, p + 30, 695);
    glColor3ub(252, 254, 255);
    circle(7, 14, p + 32, 692);

    glColor3ub(252, 254, 255);
    circle(12, 16, p + 28, 680);

    glColor3ub(221, 229, 247);
    circle(10, 15, p + 45, 690);
    glColor3ub(252, 254, 255);
    circle(9, 13, p + 43, 685);
    glColor3ub(252, 254, 255);
    circle(15, 18, p + 48, 670);

    glColor3ub(173, 197, 224);
    circle(6, 14, p + 30, 680);
    glColor3ub(252, 254, 255);
    circle(6, 13, p + 30, 677);

    glColor3ub(173, 197, 224);
    circle(6, 14, p + 38, 668);
    glColor3ub(252, 254, 255);
    circle(6, 13, p + 36, 667);


    glColor3ub(252, 254, 255);
    circle(11, 15, p + 29, 668);

    ///....Megh.......4.....///

    glColor3ub(173, 197, 224);
    circle(9, 15, 590, 695);
    glColor3ub(252, 254, 255);
    circle(6, 14, 591, 695);

    glColor3ub(232, 241, 255);
    circle(7, 16, 600, 705);
    glColor3ub(252, 254, 255);
    circle(7, 14, 602, 702);

    glColor3ub(252, 254, 255);
    circle(12, 16, 598, 690);

    glColor3ub(221, 229, 247);
    circle(10, 15, 615, 700);
    glColor3ub(252, 254, 255);
    circle(9, 13, 613, 695);
    glColor3ub(252, 254, 255);
    circle(15, 18, 618, 680);

    glColor3ub(173, 197, 224);
    circle(6, 14, 600, 690);
    glColor3ub(252, 254, 255);
    circle(6, 13, 600, 687);

    glColor3ub(173, 197, 224);
    circle(6, 14, 608, 678);
    glColor3ub(252, 254, 255);
    circle(6, 13, 606, 677);


    glColor3ub(252, 254, 255);
    circle(11, 15, 599, 678);



    if (p <= 800)
        p = p + 0.1;
    else
        p = -10;



    ///..........B U S...........1

    if (m <= 800)
        m = m + 0.3;
    else
        m = -250;



  
    glPushMatrix();
    glTranslatef(0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 81, 76);
    glVertex2f(j + 90, 98);  //bus...................
    glVertex2f(j + 95, 98);
    glVertex2f(j + 95, 100);
    glVertex2f(j + 90, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 0);
    glVertex2f(j + 94, 89);   // bus font glass
    glVertex2f(j + 96, 89);
    glVertex2f(j + 96, 100);
    glVertex2f(j + 94, 100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 81, 76);
    glVertex2f(j + 10, 80);  //.....bus
    glVertex2f(j + 90, 80);
    glVertex2f(j + 90, 105);
    glVertex2f(j + 10, 105);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 81, 76);
    glVertex2f(j + 10, 55);  //top..........lowerpart
    glVertex2f(j + 92, 55);
    glVertex2f(j + 92, 80);
    glVertex2f(j + 10, 80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(j + 11, 81);  //top..........
    glVertex2f(j + 89, 81);
    glVertex2f(j + 89, 102);
    glVertex2f(j + 11, 102);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 12, 85);  //window..........
    glVertex2f(j + 20, 85);
    glVertex2f(j + 20, 100);
    glVertex2f(j + 12, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 22, 85);  //window..........
    glVertex2f(j + 30, 85);
    glVertex2f(j + 30, 100);
    glVertex2f(j + 22, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 32, 85);  //window..........
    glVertex2f(j + 40, 85);
    glVertex2f(j + 40, 100);
    glVertex2f(j + 32, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 42, 85);  //window..........
    glVertex2f(j + 50, 85);
    glVertex2f(j + 50, 100);
    glVertex2f(j + 42, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 52, 85);  //window..........
    glVertex2f(j + 60, 85);
    glVertex2f(j + 60, 100);
    glVertex2f(j + 52, 100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 247, 255);
    glVertex2f(j + 62, 55);  //..door..........
    glVertex2f(j + 70, 55);
    glVertex2f(j + 70, 95);
    glVertex2f(j + 62, 95);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 72, 85);  //window..........
    glVertex2f(j + 80, 85);
    glVertex2f(j + 80, 100);
    glVertex2f(j + 72, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j + 82, 85);  //window..........
    glVertex2f(j + 88, 85);
    glVertex2f(j + 88, 100);
    glVertex2f(j + 82, 100);
    glEnd();

    glColor3ub(255, 255, 204);          //....chaka....back
    circle(4, 8, j + 45, 65);
    glColor3ub(255, 255, 204);
    circle(2, 4, j + 55, 75);
    glColor3ub(255, 255, 204);
    circle(3, 6, j + 15, 75);
    glColor3ub(255, 255, 204);
    circle(2, 4, j + 35, 65);
    glColor3ub(255, 255, 204);
    circle(2, 4, j + 75, 75);


    glColor3ub(0, 0, 0);          //....chaka....back
    circle(5, 10, j + 25, 55);
    glColor3ub(255, 255, 255);
    circle(3, 6, j + 25, 55);

    glColor3ub(0, 0, 0);
    circle(5, 10, j + 78, 55);
    glColor3ub(255, 255, 255);
    circle(3, 6, j + 78, 55);

    glColor3ub(0, 51, 204);
    glRasterPos2i(j + 43, 65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'Z');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'K');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'I');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'F');
    glPopMatrix();
    ///..........B U S...........2

    if (k <= 800)
        k = k + 0.3;
    else
        k = -100;

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k + 90, 98);  //bus...................
    glVertex2f(k + 95, 98);
    glVertex2f(k + 95, 100);
    glVertex2f(k + 90, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 0);
    glVertex2f(k + 94, 89);   // bus font glass
    glVertex2f(k + 96, 89);
    glVertex2f(k + 96, 100);
    glVertex2f(k + 94, 100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k + 10, 80);  //.....bus
    glVertex2f(k + 90, 80);
    glVertex2f(k + 90, 105);
    glVertex2f(k + 10, 105);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k + 10, 55);  //top..........lowerpart
    glVertex2f(k + 92, 55);
    glVertex2f(k + 92, 80);
    glVertex2f(k + 10, 80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(k + 11, 81);  //top..........
    glVertex2f(k + 89, 81);
    glVertex2f(k + 89, 102);
    glVertex2f(k + 11, 102);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 12, 85);  //window..........
    glVertex2f(k + 20, 85);
    glVertex2f(k + 20, 100);
    glVertex2f(k + 12, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 22, 85);  //window..........
    glVertex2f(k + 30, 85);
    glVertex2f(k + 30, 100);
    glVertex2f(k + 22, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 32, 85);  //window..........
    glVertex2f(k + 40, 85);
    glVertex2f(k + 40, 100);
    glVertex2f(k + 32, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 42, 85);  //window..........
    glVertex2f(k + 50, 85);
    glVertex2f(k + 50, 100);
    glVertex2f(k + 42, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 52, 85);  //window..........
    glVertex2f(k + 60, 85);
    glVertex2f(k + 60, 100);
    glVertex2f(k + 52, 100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 247, 255);
    glVertex2f(k + 62, 55);  //..door..........
    glVertex2f(k + 70, 55);
    glVertex2f(k + 70, 95);
    glVertex2f(k + 62, 95);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 72, 85);  //window..........
    glVertex2f(k + 80, 85);
    glVertex2f(k + 80, 100);
    glVertex2f(k + 72, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k + 82, 85);  //window..........
    glVertex2f(k + 88, 85);
    glVertex2f(k + 88, 100);
    glVertex2f(k + 82, 100);
    glEnd();

    glColor3ub(255, 255, 204);          //....chaka....back
    circle(4, 8, k + 45, 65);
    glColor3ub(255, 255, 204);
    circle(2, 4, k + 55, 75);
    glColor3ub(255, 255, 204);
    circle(3, 6, k + 15, 75);
    glColor3ub(255, 255, 204);
    circle(2, 4, k + 35, 65);
    glColor3ub(255, 255, 204);
    circle(2, 4, k + 75, 75);


    glColor3ub(0, 0, 0);          //....chaka....back
    circle(5, 10, k + 25, 55);
    glColor3ub(255, 255, 255);
    circle(3, 6, k + 25, 55);

    glColor3ub(0, 0, 0);
    circle(5, 10, k + 78, 55);
    glColor3ub(255, 255, 255);
    circle(3, 6, k + 78, 55);

    glColor3ub(255, 81, 76);
    glRasterPos2i(k + 40, 65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'A');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'B');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'D');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'U');
    glutPostRedisplay();
    glutSwapBuffers();




    glFlush();
 
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    // giving window size in X- and Y- direction
    glutInitWindowSize(1450, 750);
    glutInitWindowPosition(100, 0);
    // Giving name to window
    glutCreateWindow("Group project About Lab design");
    myInit();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyPressed);
    glutMainLoop();
}
