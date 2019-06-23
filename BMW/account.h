#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class account{
protected: 
    string name;
    int ID;
    string password;
public:
    account();
    account(string, int ,string);
    void setname(string);
    void setId(int);
    void setpassword(string);
    
    string getname()const;
    int getID()const;
    string getPass()const;
    
    //
    
};
account::account()
{}
account::account(string name, int ID, string password)
{
    this -> name=name;
    this -> ID=ID;
    this -> password=password;
}
void account::setname(string name)
{
    this ->name=name;
}
void account::setId(int ID)
{
    this ->ID=ID;
}
void account::setpassword(string password)
{
    this->password=password;
}

string account::getname()const
{
    return this ->name;
}
int account::getID()const
{
    return this ->ID;
}
string account::getPass()const
{
    return this ->password;
}
