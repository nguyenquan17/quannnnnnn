#pragma once 
using namespace  std;
#include "BanhCuon.h"
class BanhCuonM: public BanhCuon{
private:
public:
    BanhCuonM();
    BanhCuonM(double ,double,double, double);
    double getGia_vo()const;
    double getGia_nhan()const;
    double getklvo()const;
    double getklnhan()const;
    virtual double getPrice()const ;
};
BanhCuonM::BanhCuonM()
{}
BanhCuonM::BanhCuonM(double klvo, double giavo, double klnhan, double gianhan)
{
    this ->klvo = klvo;
    this ->giavo = giavo;
    this ->klnhan = klnhan;
    this ->gianhan = gianhan;
}
double BanhCuonM::getGia_vo()const
{
    return (klvo/100.0)*giavo;
}
double BanhCuonM::getGia_nhan()const
{
    return (klnhan/100.0)*gianhan;
}
double BanhCuonM::getklvo()const
{
    return klvo;
}
double BanhCuonM::getklnhan()const
{
    return klnhan;
}
double BanhCuonM::getPrice()const 
{
    return getGia_vo()+ getGia_nhan();
}