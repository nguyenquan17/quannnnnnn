#pragma once
#include <iostream>
using namespace std;
class hanghoa{
private: 
	int ID_hang;
	string ten_mathang;
	int so_luong_conlai;
	double don_gia;
	static int counter;
public:
	hanghoa(){
	{
		this -> ID_hang = counter;
		counter++;
	};
	hanghoa(string, int, double);

};
int hanghoa::counter = 1;
hanghoa::hanghoa(){}
hanghoa::hanghoa(string ten, int soluong, double dongia):ten_mathang(ten), 
so_luong_conlai(soluong), don_gia(dongia){}