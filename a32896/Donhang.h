#include <iostream>
#include "BanhCuon.h"
#include "BanhCuonChay.h"
#include "BanhCuonMong.h"
#include "BanhCuonThitLon.h"
#include "BanhCuonDB.h"
using namespace std;
class DonHang {
private:
    static int counter;
    int ID;
    BanhCuonChay a;
    BanhCuonM b;
    BanhCuonTL c;
    BanhCuonDB d;
public:
    DonHang();
    DonHang(BanhCuonChay, BanhCuonM, BanhCuonTL, BanhCuonDB);
    void print();
};
int DonHang::counter =0;
DonHang::DonHang()
{}
DonHang::DonHang(BanhCuonChay a, BanhCuonM b, BanhCuonTL c, BanhCuonDB d)
{
    this ->ID = counter;
    counter++;
    this ->a=a;
    this ->b=b;
    this ->c=c;
    this ->d=d;

}
// void DonHang::print()
// {
//     cout<<"ID"<<"-----"<<"Ten loai banh cuon"<<"-----"<<"Khoi luong vo"<<"-----"<<"Khoi luong nhan"<<"----"<<"Gia tien"<<endl;
//     cout<<this->ID<<"-----"<<"Banh cuon chay"<<"-----"<<a.getklvo<<"-----"<<a.getklnhan<<"-----"<<a.getPrice<<endl;
// }