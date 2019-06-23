#pragma once
#include "account.h"
#include "BMW.h"
class khachhang: public account{
protected:
    double sodu;
public:
    khachhang();
    khachhang(string ,int, string, double);
    void setsodu(double);
    double getsodu()const;
    //
    double themtien(double money);
    double trutien(BMW *a);
};
khachhang::khachhang()
{}
khachhang::khachhang(string name, int ID, string password, double sodu):account(name, ID, password)
{
    this ->sodu = sodu;
}
void khachhang::setsodu(double sodu)
{
    this ->sodu = sodu;
}

double khachhang::themtien(double money)
{
    return this ->sodu + money;
}
double khachhang::trutien(BMW *a)
{
    return sodu= this ->getsodu() - (a->giatien());
}
double khachhang::getsodu()const
{
    return this ->sodu;
}