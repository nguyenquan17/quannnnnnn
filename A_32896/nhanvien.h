#include <iostream>
#include "connguoi.h"
#include <string>
#pragma once
using namespace std;
class nhanvien: public connguoi
{
private:
	static int counter;
	int IDnv;
	//int diemthuong;
	//float chietkhau;
	int getIdnv(){
		return this ->IDnv;
	}

public:
	nhanvien()
	{
		this -> IDnv = counter;
		counter++;
	}
	nhanvien(string, int ,string, string ,string,int);
	void print()const;
	
};
int nhanvien:: counter=1;
nhanvien::nhanvien(string Hoten, int namsinh, string quequan, string sdt, string cmnd, int id):
Hoten(Hoten), Namsinh(namsinh), Quequan(quequan), SDT(sdt), So_cmnd(cmnd), IDnv(id){}
void nhanvien::print()const
{
	cout << IDnv <<" "<<Hoten;
}
