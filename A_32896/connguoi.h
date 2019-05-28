#include <iostream>
#include <string>
#pragma once
using namespace std;
class connguoi
{
protected:
	string Hoten;
	int Namsinh;
	string Quequan;
	string SDT;
	string So_cmnd;
	int ID;

public:
	connguoi();
	connguoi(string, int ,string, string ,string,int);
	void setHoten(string);
	void setNamsinh(int);
	void setQueQuan(string);
	void setSDT(string);
	void setcmnd(string);
	void setID(int);
	string getHoten()const;
	int getNamsinh()const;
	string getQuequan()const;
	string getSDT()const;
	string getSo_cmnd()const;
	int getID()const;
};
connguoi::connguoi(string Hoten, int namsinh, string quequan, string sdt, string cmnd, int id):
Hoten(Hoten), Namsinh(namsinh), Quequan(quequan), SDT(sdt), So_cmnd(cmnd), ID(id){}
void connguoi::setHoten(string ten)
{
	this -> Hoten = ten;
}
void connguoi::setNamsinh(int ns)
{
	this -> Namsinh = ns;
}
void connguoi::setQueQuan(string qq)
{
	this -> Quequan=qq;
}
void connguoi::setSDT(string sdt)
{
	this -> SDT = sdt;
}
void connguoi::setcmnd(string cmnd)
{
	this -> So_cmnd=cmnd;
}
void connguoi::setID(int id)
{
	this -> ID = id;
}
string connguoi:: getHoten()const;
{
	return Hoten;
}
int connguoi::getNamsinh()const;
{
	return Namsinh;
}
string connguoi:: getQuequan()const;
{
	return Quequan;
}
string connguoi:: getSDT()const;
{
	return SDT;
}
string connguoi:: getSo_cmnd()const;
{
	return So_cmnd;
}
int connguoi:: getID()const;
{
	return ID;
}
