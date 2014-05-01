/* Basic Derived Class */

#include <iostream>
#include "shapes.h"



int main()
{
	rectangle bob;
	bob.setWidth(5);
	bob.setLength(5);
	bob.printData();

	rectangle reggie(-5, 5);
	reggie.printData();

	cube tim;

	tim.setHeight(6); 
	tim.setHeight(6);
	tim.setWidth(6);

	tim.printData();

	cube second("Second", 10, 10, 10);
	second.printData();

	

	//std::cout << "Hello World!!!@!" << std::endl;
	std::system("pause");
	return 0;
}