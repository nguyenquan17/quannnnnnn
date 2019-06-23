#include <iostream>
#include "account.h"
#include "khachhang.h"
#include "nvdh.h"
#include "BMW.h"
#include "XeBus.h"
#include "Xedap.h"
#include "Taudien.h"
#include <vector>


using namespace std;

int main()
{                       // xebus b
        BMW *bmw[100]; //bmw[] = &b...
        string name;
        int id;
        string password;
        double sodutk;
        //
        cout<<"\n Nhap ten: ";
        getline(cin, name);
        cout<<"\n Nhap ID: ";
        cin>>id;
        fflush(stdin);
        cout<<"\n Nhap password: ";
        getline(cin,password);
        cout<<"\n So du: ";
        cin>>sodutk;
        khachhang a(name, id, password, sodutk);
        //
        cout<<"\n Quang duong di xe bus : ";
        int qdxebus;
        cin>>qdxebus;
        XeBus b(qdxebus);
        //
        cout<<"\n Quang duong di tau dien :";
        int qdtaudien;
        cin>>qdtaudien;
        Taudien d(qdtaudien);
        //
        cout<<"\n Quang duong di xe dap: ";
        int qdxedap;
        cin>>qdxedap;
        Xedap xd(qdxedap);
        //
        bmw[0]=&b;
        bmw[1]=&d;
        bmw[2]=&xd;
        a.trutien(bmw[0]);
        a.trutien(bmw[1]);
        a.trutien(bmw[2]);
        cout<<a.getsodu()<<endl;
}