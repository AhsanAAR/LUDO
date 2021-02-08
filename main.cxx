#include "graphics.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>                     // Provides exit
#include <ctype.h>                      // Provides toupper
#include "LUDO/board.h"
using namespace std;

int main()
{
	initwindow(screenSize * 2, screenSize, "First Sample");
	int playerNumber;
	outtextxy(100, 100, "How many players will play");
	do{
		playerNumber = getch() - '0';
	} while (playerNumber != 2 && playerNumber != 4 && playerNumber != 6);
	
	board myBoard(playerNumber);
	myBoard.printBoard();
	while (!kbhit())
	{
		myBoard.play();
		delay(200);
	}
	return 0;
}