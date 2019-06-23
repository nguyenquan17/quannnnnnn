#pragma once
#include <iostream>
class BMW{
protected:
    double don_gia;
    double khoangcach;
public:
    BMW();
    BMW(double, double);
    void setdon_gia(double);
    void setkhoangcach(double);
    //
    double getdon_gia()const;
    double getkhoang_cach()const;
    virtual double giatien()const=0;
};
BMW::BMW()
{}
BMW::BMW(double don_gia, double khoangcach)
{
    this ->don_gia=don_gia;
    this ->khoangcach=khoangcach;
}
void BMW::setdon_gia(double dongia)
{
    this ->don_gia=dongia;
}
void BMW::setkhoangcach(double kc)
{
    this ->khoangcach=kc;
}
