#pragma once

#include <iostream>
#include <deque>
#include "snake.h"

using namespace std;


ostream& operator<<(ostream & out, const uint8_t rhs){
    return out << static_cast<int>(rhs);
}

void Snake::printSnake(){
	cout << "queue: \n";
	for(uint8_t i = 0; i < queue.size(); i++){

		cout << "x: " << queue[i].x;
		cout << "\ty: " << queue[i].y << endl;
	}
}


void Snake::pushFront(uint8_t x, uint8_t y){	
	Point aPoint(x,y);
	this->queue.push_front(aPoint);
}


void Snake::addBehind(){
	uint8_t lastIndex = this->queue.size() - 1;
	Point lastPoint = this->queue[lastIndex];
	this->queue.push_back(lastPoint);
}

void Snake::moveForward(){

}

void Snake::setColor(uint8_t r, uint8_t g, uint8_t b){
	this->color[0] = r;
	this->color[1] = g;
	this->color[2] = b;
}

ostream& operator<<(ostream & out, const Snake &snake){
	for(uint8_t i = 0; i < snake.queue.size(); i++){
		out << "x: " << snake.queue[i].x << "\ty: " << snake.queue[i].y << endl;
	}
	return out;
}




//GRAVEYARD

/*void Snake::addBack(uint8_t x, uint8_t y){
	Point aPoint(x,y);
	this->queue.push_back(aPoint);
}*/

/*void Snake::moveForward(){
	this->queue.push_front
}*/