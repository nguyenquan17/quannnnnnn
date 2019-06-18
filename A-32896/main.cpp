#include <iostream>
#include "accout.h"
#include "khachhang.h"
#include "nvdh.h"
#include "BMW.h"
#include "XeBus.h"
#include "Xedap.h"
#include "Taudien.h"


using namespace std;

int main()
{
    BMW *bmw[100];
    for (int i=0; i<5; i++)
    {
        string name;
        int id;
        string password;
        double sodutk;
        //
        cout<<"Nhap ten: "<<endl;
        getline(cin, name);
        cout<<"Nhap ID: "<<endl;
        cin>>id;
        cout<<"Nhap password: "<<endl;
        getline(cin,password);
        cout<<"So du: "<<endl;
        cin>>sodutk;
        khachhang a(name, id, password, sodutk);
        //
        cout<<"Quang duong di xe bus : "<<endl;
        int qdxebus;
        cin>>qdxebus;
        XeBus b(qdxebus);
        //
        cout<<"Quang duong di tau dien :"<<endl;
        int qdtaudien;
        cin>>qdtaudien;
        Taudien d(qdtaudien);
        //
        cout<<"Quang duong di xe dap: "<<endl;
        int qdxedap;
        cin>>qdxedap;
        Xedap xd(qdxedap);
        bmw[0]=&b;
        bmw[1]=&d;
        bmw[2]=&xd;
        a.trutien(bmw[0]);
        a.trutien(bmw[1]);
        a.trutien(bmw[2]);
        cout<<a.getsodu()<<endl;


    }
    return 0;

}


