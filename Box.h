#pragma once
#include "../graphics.h"
#define screenSize 800
#define cellSize screenSize / 15


struct pos {
	int y = 0, x = 0;
	pos(int ypos, int xpos) : y(ypos), x(xpos) {}
};

class Box
{
public:
	pos leftTop;

	Box(int ypos, int xpos) : leftTop(ypos,xpos){
		
	}



};

