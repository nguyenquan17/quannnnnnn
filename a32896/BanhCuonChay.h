#pragma once 
using namespace  std;
#include "BanhCuon.h"
class BanhCuonChay: public BanhCuon{
private:
public:
    BanhCuonChay();
    BanhCuonChay(double, double, double, double);
    double getGia_vo()const;
    double getGia_nhan()const;
    double getklvo()const;
    double getklnhan()const;
    virtual double getPrice()const;

};
BanhCuonChay::BanhCuonChay()
{}
BanhCuonChay::BanhCuonChay(double klvo, double giavo, double klnhan, double gianhan)
{
    this ->klvo = klvo;
    this ->giavo = giavo;
    this ->klnhan = klnhan;
    this ->gianhan = gianhan;
}
double BanhCuonChay::getGia_vo()const
{
    return (klvo/100.0)*giavo;
}
double BanhCuonChay::getGia_nhan()const
{
    return (klnhan/100.0)*gianhan;
}
double BanhCuonChay::getklvo()const
{
    return klvo;
}
double BanhCuonChay::getklnhan()const
{
    return klnhan;
}
double BanhCuonChay::getPrice()const 
{
    return getGia_vo()+ getGia_nhan();
}