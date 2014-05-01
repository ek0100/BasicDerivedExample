#ifndef shapes
#define shapes


class rectangle
{
	double width;
	double length;

public:

	double getWidth();
	double getLength();
	void setLength(double);
	void setWidth(double);
	void printData();
	double getPerimiter();
	double getArea();
	rectangle();	//default constructor
	rectangle(double,double);

};

class cube : public rectangle  //class cube, extends rectangle
{
	double height;

public:
	/*
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
	*/
	cube();
	cube(double, double, double);
	void setHeight(double);
	double getHeight();
	void printData();


};


#endif