#include<iostream>
using namespace std;

extern int x=10;//global variable


class Date
{
    private:
    
    int day;// 11/1/2022    31/3/2023
    int month;
    int year;
    static char slash;
    void setDay(int dd);
    void setMonth(int mm);
    void setYear(int yy);

    public:
    void setDate(int dd,int mm,int yy);
    void showDate();
   // Date dr;
    Date *u;

};
char Date::slash='/';

void Date::setDate(int dd,int mm,int yy)
{
    setDay(dd);
    setMonth(mm);
    setYear(yy);
}
void Date::showDate()
{
    cout<<"Date is "<<day<<slash<<month<<slash<<year<<endl;
}
void Date::setDay(int dd)
{
    if(dd>31)
    day=31;
    else
    day=dd;
}
void Date::setMonth(int mm)
{
    if(mm>12)
    mm=12;
    else
    month=mm;
}

void Date::setYear(int yy)
{
    year=yy;
}

int main()
{
    Date bday,jday;
    bday.setDate(1,1,2002);
    jday.setDate(13,9,2022);
    bday.showDate();
    jday.showDate();
    return 0;
}