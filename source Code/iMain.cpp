#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int a, b, c, d, e, f;

float x = 0;

void drawHomePage();
void drawStartPage();

void startButtonClickHandler();

int startButtonClick = 0;


int homePage = 1;
int startPage = 0;


void iDraw()
{
	iClear();
	
	if (homePage == 1)
	{
		drawHomePage();
	}
	else if (startPage == 1){
		drawStartPage();
	}




}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("x=%d  y=%d", mx, my);
		if (homePage == 1 && (mx >= 418 && mx <= 580) && (my >= 434 && my <= 516)){
			startButtonClickHandler();
		}

	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'e')
	{
		
	}


}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{

	}
	if (key == GLUT_KEY_LEFT)
	{

	}

	if (key == GLUT_KEY_HOME)
	{

	}

}
void drawHomePage(){
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1000, 600);
	iShowBMP2(0, 0,"Images//bg.bmp", 0);
	iShowImage(400, 420, 200, 100, a);
}

void drawStartPage(){
	iFilledRectangle(0, 0, 1000, 600);
	
	//iShowBMP2(x, 0, "Images//jungle1.bmp", 0); bmp use korle background move kore na
	iShowImage(x + 1000, 0, 1000, 600, b);
	iShowImage(x, 0, 1000, 600, b); // ei jonno image use korlam
	x -= 0.05;
	if (x < -1000)
		x = 0;

}
void startButtonClickHandler()
{
	homePage = 0;
	startPage = 1;
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1000, 600, "Project-0");
	a = iLoadImage("Images//PlayButton.png");
	b = iLoadImage("Images//jungle.jpg");


	///updated see the documentations
	iStart();
	return 0;
}
