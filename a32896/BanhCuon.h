#pragma once
#include <iostream>
using namespace std;
class BanhCuon{
protected:
    double giavo;
    double gianhan;
    double klvo;
    double klnhan;
public:
    BanhCuon();
    virtual double getPrice()const;

};
BanhCuon::BanhCuon()
{}
