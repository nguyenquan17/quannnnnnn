#include <iostream>
#include <cmath>
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
//----------------------------------------------------------------------------------------------

class triangle{
private:
    point A;
    point B;
    point C;
public:
    triangle();
    triangle(const point &, const point &, const point &);
    triangle (double, double, double, double, double, double);
    //setters
    bool setA(const point &);
    bool setB(const point &);
    bool setC(const point &);
    bool setA(double, double);
    bool setB(double, double);
    bool setC(double, double);
    //getters
    point getA()const;
    point getB()const;
    point getC()const;
    //methods
    double getArea();
    double getPerimeter()const;

};
triangle::triangle():A(0.0, 0.0),B(0.0, 0.0),C(0.0, 0.0)
{}
triangle::triangle(const point &A , const point &B, const point &C)
{
    this ->A=A;
    this ->B=B;
    this ->C=C;
}
triangle::triangle(double x1,double y1, double x2, double y2, double x3, double y3):A(x1,y1),B(x2,y2),C(x3,y3)
{}
bool triangle::setA(const point &a)
{
    this ->A=a;
    return true;
}
bool triangle::setB(const point &a)
{
    this ->B=a;
    return true;
}
bool triangle::setC(const point &a)
{
    this ->C=a;
    return true;
}
bool triangle::setA(double x1, double y1)
{
    this ->A=point(x1, y1);
    return true;
}
bool triangle::setB(double x2, double y2)
{
    this ->B=point(x2, y2);
    return true;
}
bool triangle::setC(double x3, double y3)
{
    this ->C=point(x3,y3);
    return true;
}
point triangle::getA()const
{
    return this ->A;
}
point triangle::getB()const
{
    return this ->B;
}
point triangle::getC()const
{
    return this ->C;
}
double triangle::getArea()
{
    double AB, AC, BC;
    AB= A.TinhKhoangCach(B);
    AC= A.TinhKhoangCach(C);
    BC= B.TinhKhoangCach(C);
    if (AB + AC <=BC || AB+BC <= AC || BC+AC<=AB)
    {
        cout<< "3 diem A, B, C khong the tao thanh tam giac"<<endl;
    }
    else
        return AB+AC+BC;
}

int main()
{
    point p1(1,3),p2(5,4),p3(3,6);
    triangle c;
    c.setA(p1);
    c.setA(p2);
    c.setC(p3);
    cout << c.getArea()<<endl;
    return 0;
}
