#ifndef BANK1_H_INCLUDED
#define BANK1_H_INCLUDED
class Bank{
private:
    account acc_bank[100];
    int index;
public:
    Bank();
    int get_acc();
    void signsup(account a);
    account findtopMoney();
    void negativeMoney();

};
Bank::Bank():index(0){}
void Bank::signsup(account a)
{
    acc_bank[index] = a;
    index++;
}
account Bank::findtopMoney()
{

}


#endif // BANK1_H_INCLUDED
