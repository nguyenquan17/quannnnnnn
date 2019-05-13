#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    Time t1(8,10,00);
    Time t2(9,5,30);
    cout<<t1.convertTimetoMins()<<endl;
    cout<<t1.convertTimetoSecs()<<endl;

    return 0;
}
