#pragma once 
using namespace  std;
#include "BanhCuon.h"
class BanhCuonDB: public BanhCuon{
private:
    double gia_thit_cc;
    double kl_thit_cc;
public:
    BanhCuonDB();
    BanhCuonDB(double ,double,double, double, double, double);
    double getGia_vo()const;
    double getGia_nhan()const;
    double getklvo()const;
    double getklnhan()const;
    double getGia_thit_cc()const;
    double getKl_thit_cc()const;
    virtual double getPrice()const ;
};

BanhCuonDB::BanhCuonDB()
{}
BanhCuonDB::BanhCuonDB(double klvo, double giavo, double klnhan, double gianhan, double giathitcc, double klthitcc)
{
    this ->klvo = klvo;
    this ->giavo = giavo;
    this ->klnhan = klnhan;
    this ->gianhan = gianhan;
    this-> gia_thit_cc=giathitcc;
    this-> kl_thit_cc =klthitcc;
}
double BanhCuonDB::getGia_vo()const
{
    return (klvo/100.0)*giavo;
}
double BanhCuonDB::getGia_nhan()const
{
    return (klnhan/100.0)*gianhan;
}
double BanhCuonDB::getklvo()const
{
    return klvo;
}
double BanhCuonDB::getklnhan()const
{
    return klnhan;
}
double BanhCuonDB::getGia_thit_cc()const
{
    return (kl_thit_cc/100.0)*gia_thit_cc;
}
double BanhCuonDB::getKl_thit_cc()const
{
    return kl_thit_cc;
}
double BanhCuonDB::getPrice()const 
{
    return getGia_vo()+ getGia_nhan() + getGia_thit_cc(); 
}