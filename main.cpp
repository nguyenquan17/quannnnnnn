#include <iostream>
using namespace std;
class Sp{
private:
    double thuc;
    double ao;
public:
    Sp();
    Sp(double,double);
    void setThuc(double);
    void setAo(double);
    double getThuc()const;
    double getAo()const;
    Sp operator+(const Sp &);
    Sp operator-(const Sp &);
    Sp operator*(const Sp &);
    Sp operator/(const Sp &);

    friend ostream &operator<<(ostream&, Sp);
};
Sp::Sp()
{}
Sp::Sp(double t, double a)
{
    this -> thuc = t;
    this -> ao = a;
}
void Sp::setThuc(double thuc)
{
    this -> thuc = thuc;
}
void Sp::setAo(double ao)
{
    this -> ao = ao;
}
double Sp::getThuc()const
{
    return this -> thuc;
}
double Sp::getAo()const
{
    return this -> ao;
}
Sp Sp:: operator+(const Sp &a)
{
    Sp sp;
    sp.thuc = thuc + a.thuc;
    sp.ao = ao + a.ao;
    return sp;
}
Sp Sp:: operator-(const Sp &a)
{
    Sp sp;
    sp.thuc = thuc - a.thuc;
    sp.ao = ao - a.ao;
    return sp;
}
Sp Sp:: operator*(const Sp &a)
{
    Sp sp;
    sp.thuc= thuc*a.thuc - ao*a.ao;
	sp.ao=thuc*a.ao + a.thuc*ao;
	return sp;
}
Sp Sp:: operator/(const Sp &a)
{
    Sp sp;
    int bp;
	bp=a.thuc*a.thuc+a.ao*a.ao;
	sp.thuc=(thuc*a.thuc+ao*a.ao)/bp;
	sp.ao=(ao*a.thuc-thuc*a.ao)/bp;
	return sp;
}

ostream &operator<<(ostream &out, Sp sp)
{
    return out << sp.thuc <<"+"<< sp.ao<<"i";
}
int main()
{
    Sp z1(2,3), z2(3,-6), z;
    //z = z1+z2;
    //z = z1-z2;
    z = z1*z2;
    //z = z1/z2;
    cout << z;
    return 0; 

}