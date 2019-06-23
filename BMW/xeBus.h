#pragma once
#include "BMW.h"
class XeBus: public BMW{
public:
    XeBus();
    XeBus(double);
    virtual double giatien()const;
};
XeBus::XeBus()
{
    this ->don_gia=0;
    this ->khoangcach=0;
}
XeBus::XeBus(double khoangcach)
{
    this -> khoangcach = khoangcach;
}
double XeBus::giatien()const
{
    return this ->khoangcach *7000;
}