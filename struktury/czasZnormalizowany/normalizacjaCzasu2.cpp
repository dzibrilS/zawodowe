#include <iostream>
using namespace std;
struct timex
{
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int days = 0;
};
int naSekundy(timex time1)
{
    return time1.seconds + time1.minutes * 60 + time1.hours * 3600 + time1.days * 24 * 3600;
}
timex naCzas(int seconds)
{
    timex time3;
    time3.days = seconds / 86400;
    seconds = seconds % 86400;
    time3.hours = seconds / 3600;
    seconds = seconds % 3600;
    time3.minutes = seconds / 60;
    seconds = seconds % 60;
    time3.seconds = seconds;
    return time3;
}
timex dodajCzasy(timex time1, timex time2){
    int sekundySuma=naSekundy(time1)+naSekundy(time2);
    return naCzas(sekundySuma);
}
int main()
{
    timex time1 {50,40,4,5};
    timex time2 {30,39,0,2};
    timex time3=dodajCzasy(time1,time2);
    cout<<time3.seconds<<endl;
    cout<<time3.minutes<<endl;
    cout<<time3.hours<<endl;
    cout<<time3.days<<endl;

}