#pragma once
#include <iostream>
#include "connguoi.h"
#include <string>
#pragma once
using namespace std;
class khachhang: public connguoi
{
private:
	static int counter;
	int IDkh;
	int diemthuong;
	float chietkhau;

public:
	khachhang()
	{
		this -> IDkh = counter;
		counter++;
	}
	khachhang(string, int ,string, string ,string,int,int );
	void setdiemthuong(int);
	void setchieukhau(float);
	int getdiemthuong()const;
	float getchietkhau()const;
	void print()const;
	int getIDkh(){
		return this -> IDkh;
	}
	
	
};
int khachhang::counter =1;
khachhang::khachhang(string Hoten, int namsinh, string quequan, string sdt, string cmnd, int diemthuong, int IDkh):
Hoten(Hoten), Namsinh(namsinh), Quequan(quequan), SDT(sdt), So_cmnd(cmnd), diemthuong(diemthuong), IDkh(IDkh){}
void khachhang::setdiemthuong(int diemthuong)
{
	this ->diemthuong = diemthuong;
}
void khachhang::setchieukhau(float ck)
{
	this ->chietkhau = diemthuong/1000;
}
int khachhang::getdiemthuong()const
{
	return this -> diemthuong;
}
float khachhang::getchietkhau()const
{
	return this -> chietkhau;
}
void khachhang::print()const
{
	cout << IDkh <<" "<<Hoten;
}