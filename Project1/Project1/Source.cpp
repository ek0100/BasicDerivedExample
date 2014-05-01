#include <iostream>

class rectangle
{
	double width;
	double height;

public:

	double getLength();
	double getHeight();
	rectangle() : width(0), height(0){};	//default constructor




};

int main()
{

	std::cout << "Hello World!!!@!" << std::endl;
	std::system("pause");
	return 0;
}