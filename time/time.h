#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
class Time{
private:
    int hour;
    int mins;
    int secs;
public:
    Time();
    Time(int, int, int);
    bool setTime(int,int,int);
    bool setHour(int);
    bool setMins(int);
    bool setSecs(int);
    int getHour()const;
    int getMins()const;
    int getSecs()const;
    void print()const;
    int convertTimetoSecs()const;
    double convertTimetoMins()const;
};


#endif // TIME_H
