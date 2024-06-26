#include "iGraphics.h"


void drawHomepage();

//Start Page
void drawStartPage();
void startbuttonClickHandler();
int startButtonClick = 0;
int Homepage = 1;
int StartPage = 0;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
		iFilledRectangle(10, 10, 100, 100);
		iSetColor(255, 255, 255);
	if (Homepage == 1) {
		drawHomepage(); 
	}
	else if (StartPage == 1){
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
		printf("x = %d y= %d", mx, my);
		if (Homepage = 1 && (mx>=452 && mx<=494)
		
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
	if (key == '\r')
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
void drawHomepage(){
	iSetColor(120, 120, 120);
	iFilledRectangle(0, 0, 1000, 600);
	iShowBMP2(0, 0, "images\\tzKyzs123.bmp", 0);
	iSetColor(255, 255, 255);
	iText(450, 520, "Start",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 420, "Levels", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 320, "About Us", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 220, "Instructions", GLUT_BITMAP_TIMES_ROMAN_24);
}

int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1000, 600, "Roxys Adventure");
	///updated see the documentations
	iStart();
	return 0;
}