/* Basic Derived Class */

#include <iostream>

class rectangle
{
	double width;
	double height;

public:

	double getWidth();
	double getHeight();
	void setHeight(double);
	void setWidth(double);
	void printData();
	double getPerimiter();
	double getArea();
	rectangle() : width(0), height(0){};	//default constructor
	rectangle(double w, double h){

		if (w > 0)
			width = w;
		else
			width = 0;

		if (h > 0)
			height = h;
		else
			height = 0;
	}

};

double rectangle::getWidth()
{
	return width;
}

double rectangle::getHeight()
{
	return height;
}

void rectangle::setHeight(double h)
{
	height = h;
}

void rectangle::setWidth(double w)
{
	width = w;
}

double rectangle::getPerimiter()
{

	return((width * 2) + (height * 2));
}

double rectangle::getArea()
{

	return width*height;
}

void rectangle::printData()
{
	std::cout << " Rectangle Print Data !" << std::endl;
	std::cout << "height: " << getHeight() << std::endl;
	std::cout << "width: " << getWidth() << std::endl;
	std::cout << "perimiter: " << getPerimiter() << std::endl;
	std::cout << "area: " << getArea() << std::endl;
	std::cout << std::endl;


}

class cube : public rectangle  //class cube, extends rectangle
{
	double depth;

public:
	cube() : rectangle()
	{
		depth = 0;
	}
	cube(double w, double h, double d) :rectangle(w, d)
	{
		if (d > 0)
			depth = d;
		else
			depth = 0;
	}
	
	
	void setDepth(double);
	double getDepth();
	void printData();
	

};

void cube::setDepth(double d){

	if (d > 0)
		depth = d;
	else
		depth = 0;
}

double cube::getDepth(){

	return depth;
}


void cube::printData()
{
	std::cout << " Cube Print Data! " << std::endl;
	rectangle::printData();
	std::cout << "Depth: " <<getDepth()<< std::endl;

}

int main()
{
	rectangle bob;
	bob.setWidth(5);
	bob.setHeight(5);
	bob.printData();


	cube tim;

	tim.setDepth(6); 
	tim.setHeight(6);
	tim.setWidth(6);

	tim.printData();

	rectangle reggie(-5, 5);
	reggie.printData();

	//std::cout << "Hello World!!!@!" << std::endl;
	std::system("pause");
	return 0;
}