#include "shapes.h"
#include <iostream>



rectangle::rectangle()
{
	width = 0;
	length = 0;
}

rectangle::rectangle(double w, double l)
{
	if (w > 0)
		width = w;
	else
		width = 0;

	if (l > 0)
		length = l;
	else
		length = 0;

}

double rectangle::getWidth()
{
	return width;
}

double rectangle::getLength()
{
	return length;
}

void rectangle::setLength(double l)
{
	length = l;
}

void rectangle::setWidth(double w)
{
	width = w;
}

double rectangle::getPerimiter()
{

	return((width * 2) + (length * 2));
}

double rectangle::getArea()
{

	return width*length;
}

void rectangle::printData()
{
	std::cout << "\nRectangle Print Data !" << std::endl;
	std::cout << "Length: " << getLength() << std::endl;
	std::cout << "Width: " << getWidth() << std::endl;
	std::cout << "Perimiter: " << getPerimiter() << std::endl;
	std::cout << "Area: " << getArea() << std::endl;
	
}

cube::cube(){
	height = 0;
	rectangle();
}

cube::cube(double l, double w, double h){
	
	if (h > 0)
		height = h;
	else
		height = 0;

	rectangle(l, w);
}

void cube::setHeight(double h){

	if (h > 0)
		height = h;
	else
		height = 0;
}

double cube::getHeight(){

	return height;
}


void cube::printData()
{
	
	rectangle::printData();
	std::cout << "Cube Print Data! " << std::endl;
	std::cout << "Height: " << getHeight() << std::endl;

}