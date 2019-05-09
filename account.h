#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class account{
private:
    int acc_number;
    string username;
    string password;
    float money;
public:
    account();
    account(int acc, string user, string pass, float mon);
    //setters;
    void setAcc(int);
    void setUser(string);
    void setPass(string);
    void setMon(float);
    //getters;
    int getAcc()const;
    string getUser()const;
    string getPass()const;
    float getMon()const;
    //methods;
    void New_acc();
    void Add_money(float a);
    void Minus_money(float a);
    void Show_acc();
};
account::account():acc_number(0),username(""),password(""),money(0)
{}
account::account(int acc, string user, string pass, float mon)
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
void account::setMon(float d)
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
float account::getMon()const
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


#endif // ACCOUNT_H_INCLUDED
