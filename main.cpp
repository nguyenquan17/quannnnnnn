#include <iostream>
#include <math.h>
using namespace std;
class PhanSo{
private:
    int TuSo, MauSo;
public:
    PhanSo(int TuSo, int MauSo)
    {
        this->TuSo=TuSo;
        this->MauSo=MauSo;
    }
    void Nhap();
    void Xuat();
    PhanSo RutGon();
    PhanSo Cong(PhanSo);
    PhanSo Tru(PhanSo);
    PhanSo Nhan(PhanSo);
    PhanSo Chia(PhanSo);
};
void PhanSo::Nhap()
{
    cout<<"\n Nhap tu so: ";
    cin >> this->TuSo;
    cout << "\n Nhap mau so: ";
    cin >> this ->MauSo;


}
PhanSo PhanSo::RutGon()
{
    int T, M;
    T = this->TuSo;
    M = this->MauSo;
    while (T!=M)
    {
        if(T>M)
            T =T-M;
        else
            M =M-T;
    }
    this->TuSo = this->TuSo/T;
    this->MauSo = this->MauSo/T;
    return *this;
}
PhanSo PhanSo::Cong(PhanSo ps2)
{
    TuSo = TuSo*ps2.MauSo + MauSo*ps2.TuSo;
    MauSo = MauSo* ps2.MauSo;
}
PhanSo PhanSo::Tru(PhanSo ps2)
{
    TuSo = TuSo*ps2.MauSo - MauSo*ps2.TuSo;
    MauSo = MauSo* ps2.MauSo;
}
PhanSo PhanSo::Nhan(PhanSo ps2)
{
    TuSo = TuSo* ps2.TuSo;
    MauSo = MauSo* ps2.MauSo;

}
PhanSo PhanSo::Chia(PhanSo ps2)
{

    TuSo = TuSo* ps2.MauSo;
    MauSo = MauSo* ps2.TuSo;

}
void PhanSo::Xuat()
{
    cout << this ->TuSo<< "/" <<this->MauSo;
}
int main()
{
    PhanSo ps1(0,1);
    int n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        PhanSo ps2(1,i);
        ps1.Cong(ps2);
        //ps.Tru(p);
        //ps.Nhan(p);
        //ps.Chia(p);
        ps.RutGon();
    }
    ps1.Xuat();
    return 0;
}
