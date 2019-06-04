#pragma once 
using namespace  std;
#include "BanhCuon.h"
class BanhCuonTL: public BanhCuon{
private:
    
public:
    BanhCuonTL();
    BanhCuonTL(double ,double,double, double);
    double getGia_vo()const;
    double getGia_nhan()const;
    double getklvo()const;
    double getklnhan()const;
    virtual double getPrice()const ;
};
BanhCuonTL::BanhCuonTL()
{}
BanhCuonTL::BanhCuonTL(double klvo, double giavo, double klnhan, double gianhan)
{
    this ->klvo = klvo;
    this ->giavo = giavo;
    this ->klnhan = klnhan;
    this ->gianhan = gianhan;
}
double BanhCuonTL::getGia_vo()const
{
    return (klvo/100.0)*giavo;
}
double BanhCuonTL::getGia_nhan()const
{
    return (klnhan/100.0)*gianhan;
}
double BanhCuonTL::getklvo()const
{
    return klvo;
}
double BanhCuonTL::getklnhan()const
{
    return klnhan;
}
double BanhCuonTL::getPrice()const 
{
    return getGia_vo()+ getGia_nhan();
}