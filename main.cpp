#include <iostream>
#include "snake.h"

using namespace std;




int main(){
	
	Snake snake1;

	cout << "pruint8_tSnake: ";
	snake1.printSnake();

	snake1.pushFront(0,1);
	snake1.pushFront(0,2);
	snake1.pushFront(0,3);

	snake1.addBehind();
	snake1.addBehind();
	snake1.addBehind();
	snake1.addBehind();
	snake1.addBehind();
	


	/*snake1.printSnake();*/

	cout << "Snake1:\n" << snake1;



	return 0;
}