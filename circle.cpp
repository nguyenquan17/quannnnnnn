#include <iostream>
#include <math.h>
using namespace std;
#include "point.h"
#define PI 3,1415926535897;
class circle
{
private: 
	point I;
	double R;
public:
	circle();
	circle(point I, double R);
	circle(double, double, double);
	void setI(const point &);
	void setR(const double & );
	point getI()const;
	double getR()const;
	double getArea()const;
	double getPerimeter()const;
};
circle::circle():I(0.0,0.0),R(0)
{
}
circle::circle(point I, double R)
{
	this ->I = I;
	this ->R = R;
}
circle::circle(double a, double b, double c)
{

	this -> I.setX(a);
	this -> I.setY(b);
	this -> R=c;
}
void circle::setI(const point &a)
{
	this -> I=a;
	
}
void circle::setR(const double &a)
{
	this -> R=a;
	
}
point circle::getI()const
{
	return this ->I;
}
double circle::getR()const
{
	return this -> R;
}
double circle::getArea()const
{
	double R = getR();
	double DT = PI* R*R;
	return DT;
}
double circle::getPerimeter()const
{
	double R = getR();
	double CV = 2*PI;
	return CV;
}
int main()
{
	point a(4.0,5.0);
	double p = 6.0;
	circle c(a,p);
	cout << c.getArea()<<endl;
	cout << c.getPerimeter()<<endl;



}