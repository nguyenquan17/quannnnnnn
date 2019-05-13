#include "point.h"
point::point():x(0.0),y(0.0)
{}
point::point(double x, double y):x(x), y(y)
{}

point::~point()
{}
void point::setX(double x){
    this ->x = x;
}
void point::setY(double y){
    this->y = y;
}
double point::getX()const{
    return this->x;
}
double point::getY()const{
    return this->y;
}
double point::TinhKhoangCach(point a)
{
    return sqrt(pow((x-a.x),2) + pow((y-a.y),2));
}
