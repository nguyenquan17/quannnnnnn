#include<iostream>
#include<math.h> 
using namespace std;
#include<point.h>
class rectangle{
private:
     point tf; // top-left;\
     point br; // bot - right;
public:
     rectangle();
     rectangle(point tf, point br);
     rectangle(double, double, double, double);
     //setters
     bool settf(const point &);
     bool setbr(const point &);
     bool settf(double, double);
     bool setbr(double, double);
     //getters
     point gettf()const;
     point getbr()const;
     //methods
     double getArea()const;
     double getPerimeter()const;

};
rectangle::retangle() // kieu point 
{
     this->tf.x = 0.0;
     this->br.x = 0.0;
     this->tf.y = 0.0;
     this->br.y = 0.0;
     // rectangle::retangle():tf(0.0,0.0), br(0.0,0.0)
     
}
rectangle::rectangle(point tf, point br)
{
     this-> tf=tf;
     this-> br=br;
}
rectangle::rectangle(double a, double b, double c, double d)
{
     this->tf.x = a;
     this->tf.y = b;
     this->br.x = c;
     this->br.y = d;
}
//setters
bool rectangle::settf(const point &b)
{
     this->tf = b
     return true;
}
bool rectangle::setbr(const point &b)
{
     this->br = b;
     return true;
}
bool rectangle::settf(double a, double b)
{
     //this->tf.x =a;
     //this->br.x =b;
     this-> tf = point(a,b);
     return true;
}
bool rectangle::setbr(double a, double b)
{
     this-> br = point(a,b);
     return true;
}
point rectangle::getf()const
{
     return this->tf;

}
point rectangle::getbr()const
{
     return this->br;
}
double rectangle::getArea()const
{
     return abs((br.getX()-tf.getX())*(br.getY()-tf.getY()));

}
double rectangle::getPerimeter()const
{
     return abs((br.getX()-tf.getX())+(br.getY()-tf.getY()))*2;

}
