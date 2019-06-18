#pragma once
#include "BMW.h"
class Taudien: public BMW{
public:
    Taudien();
    Taudien(double);
    virtual double giatien()const;
};
Taudien::Taudien()
{
    this ->don_gia=0;
    this ->khoangcach=0;
}
Taudien::Taudien(double khoangcach)
{
    
    this -> khoangcach = khoangcach;
}
double Taudien::giatien()const
{
    return this ->khoangcach *15.000;
}
