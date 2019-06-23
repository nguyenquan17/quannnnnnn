#pragma once
#include "BMW.h"
class Xedap: public BMW{
protected:
    double time;
public:
    Xedap();
    Xedap(double);
    virtual double giatien()const ;
};
Xedap::Xedap()
{}
Xedap::Xedap(double time)
{
   
    this ->time =time;
}
double Xedap::giatien()const
{
    return this -> time* 5000;
}