#include<iostream>
using namespace std;
class Point{
private:
     double x,y;
public: 
     Point(); // khoi tao phi tham so;
     Point(double , double);
     //setters;
     void setX(double);
     void setY(double);
     //getters;
     double getX()const;
     double getY()const;

};
Point::Point()
{
     this-> x=0.0;
     this-> y=0.0;
}
Point::Point(double x, double y)
{
     this->x = x;
     this->y = y;
}
void Point::setX(double x)
{
     this->x =x;
}
void Point::setY(double y)
{
     this->y =y;
}
double Point::getX()const;
{
     return this->x;
}
double Point::getY()const;
{
     return this->y;
}





