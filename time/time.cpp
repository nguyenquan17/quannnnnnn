#include "time.h"
Time::Time()
{
    this -> hour=0;
    this -> mins=0;
    this -> secs=0;
}
Time::Time(int h, int m, int s):hour(h),mins(m),secs(s)
{}
bool Time::setTime(int h,int m,int s)
{
    return setHour(h) && setMins(m) && setSecs(s);
}
bool Time::setHour(int h)
{
    if(h>=0 && h <24)
    {
        this -> hour = h;
        return true;
    }
    return false;

}
bool Time::setMins(int m)
{
    if(m>=0 && m <60)
    {
        this -> mins = m;
        return true;
    }
    return false;
}
bool Time::setSecs(int s)
{
    if(s>=0 && s <60)
    {
        this -> secs = s;
        return true;
    }
    return false;
}

int Time::getHour()const
{
    return this -> hour;
}
int Time::getMins()const
{
    return this -> mins;
}
int Time::getSecs()const
{
    return this -> secs;
}
void Time::print()const
{
    cout<<this->hour<<":"<<this->mins<<":"<<this->secs<<endl;
}

int Time::convertTimetoSecs()const
{
    return  this->hour*60*60 + this -> mins * 60 + this -> secs;
}
double Time::convertTimetoMins()const
{
    return  this->hour*60 + this -> mins + this -> secs/60.0;
}
