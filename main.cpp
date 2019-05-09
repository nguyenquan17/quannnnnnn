#include <iostream>
#include <string>
using namespace std;
class account{
private:
    int acc_number;
    string username;
    string password;
    double money;
public:
    account();
    account(int acc, string user, string pass, double mon);
    //setters;
    void setAcc(int);
    void setUser(string);
    void setPass(string);
    void setMon(double);
    //getters;
    int getAcc()const;
    string getUser()const;
    string getPass()const;
    double getMon()const;
    //methods;
    void New_acc();
    void Add_money(float a);
    void Minus_money(float a);
    void Show_acc();
};
account::account()
{
    this -> acc_number = 0;
    this -> username ="";
    this -> password ="";
    this -> money =0;
}
account::account(int acc, string user, string pass, double mon)
{
    this -> acc_number=acc;
    this -> username=user;
    this -> password=pass;
    this -> money=mon;
}
void account::setAcc(int a)
{
    this ->acc_number=a;
}
void account::setUser(string b)
{
    this ->username=b;
}
void account::setPass(string c)
{
    this -> password=c;
}
void account::setMon(double d)
{
    this -> money=d;
}
int account::getAcc()const
{
    return this -> acc_number;
}
string account::getUser()const
{
    return this -> username;
}
string account::getPass()const
{
    return this -> password;
}
double account::getMon()const
{
    return this -> money;
}
//void account::New_acc()

void account::Add_money(float a)
{
    money+=a;
}
void account::Minus_money(float a)
{
    money-=a;
}
void account::Show_acc()
{
    cout<<"So tai khoan: "<<acc_number<<endl;
	cout<<"Ten chu so huu: "<<username<<endl;
	cout<<"So tien trong tai khoan: "<<money<<endl;
}
int main()
{
    account ACC;
    ACC.setAcc(123456);
    ACC.setUser("Nguyen Anh Quan");
    ACC.setPass("abc");
    cout<<ACC.getAcc()<<endl;
    cout<<ACC.getUser()<<endl;
    cout<<ACC.getPass()<<endl;
    ACC.setMon(1.987);
    ACC.Add_money(5.9);
    cout<<ACC.getMon()<<endl;
    ACC.Show_acc();



    return 0;
}
