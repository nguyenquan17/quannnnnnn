#include <iostream>

#include <math.h>
using namespace std;
class point
{
private:
    double x;
    double y;
public:
    point();
    point(double, double);
    //setters
    void setX(double);
    void setY(double);
    //getters
    double getX()const;
    double getY()const;
    double TinhKhoangCach(point);
    ~point();
};
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
//
//
//
//
//------------------------------------------------------------------------------------------------
class circle
{
private:
    double r;
    point I;
public:
    circle();
    circle(point I,double r);
    circle(double x,double y, double r);
    void set(double x, double y, double r)
    {
        this -> I.setX(x);
        this -> I.setY(y);
        this -> r = r;
    }
    void setI(const point &I );
    void setr(double r);
    double getr()const;
    point getI()const;
    double getArea()const;
    double getPerimeter()const;

};

    circle::circle(){
        this->I=point(0,0);
        this->r=0;
    }
    circle::circle(point I,double r){
        this->I=I;
        this->r=r;
    }
    circle::circle(double x,double y,double r)
    {
        this->I=point(x,y);
        this->r=r;
    }
    void circle::setI(const point &I)
    {
        this -> I=I;
    }
    void circle::setr(double r)
    {
        this -> r=r;
    }
    double circle::getr()const
    {
        return this -> r;
    }
    point circle::getI()const
    {
        return this -> I;
    }
    double circle::getArea()const
    {
        return 3.14*r*r;
    }
    double circle::getPerimeter()const
    {
        return 2*3.14*r;
    }
int main()
{
    point p(2,4);
    circle c;
    c.setr(1);
    c.setI(p);
    cout<< c.getArea()<<endl;
    cout<< c.getPerimeter()<<endl;
    return 0;
}
