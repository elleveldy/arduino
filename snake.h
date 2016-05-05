#pragma once

#include <iostream>
#include <deque>

using namespace std;


struct Point{
	uint8_t x;
	uint8_t y;
	Point(){}
	Point(uint8_t x, uint8_t y): x(x), y(y) { ; }
};

struct direction{
	uint8_t x;
	uint8_t y;
};

class Snake{
private:

	deque<Point> queue;

	direction currentDir;

	uint8_t color[3] = {255, 0, 0}; 

public:

	void printSnake();

	void pushFront(uint8_t x, uint8_t y);
	void addBehind();


	void moveForward();


	void setColor(uint8_t r, uint8_t g, uint8_t b);

	friend ostream& operator<<(ostream & out, const Snake &snake);


};




//GRAVEYARD

/*
enum xDir{
	down = -1;
	up = 1;
};

enum yDir{
	left = -1;
	right = 1;
};
*/