#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
struct timex
    {
        int minutes=0;
        int hours=0;
        int days=0;
        int seconds=0;
    };
void timey( timex &time3, int seconds)
{
        time3.days=seconds/86400;
        seconds=seconds%86400;
        time3.hours=seconds/3600;
        seconds=seconds%3600;
        time3.minutes=seconds/60;
        seconds=seconds%60;
        time3.seconds=seconds;
    }
    int timez(timex time1, int seconds)
    {
      seconds = seconds + time1.seconds;
      seconds = seconds + time1.minutes*60;
      seconds = seconds + time1.hours*3600;
      seconds = seconds + time1.minutes*86400;
      return seconds;
    }
int main()
    {
        int seconds=0;
        timex time1, time3;
        cout<<"podaj pierwszą liczbę sekund"<<endl;
        cin>>time1.seconds;
        cout<<"podaj pierwszą liczbę minut"<<endl;
        cin>>time1.minutes;
        cout<<"podaj pierwszą liczbę godzin"<<endl;
        cin>>time1.hours;
        cout<<"podaj pierwszą liczbę dni"<<endl;
        cin>>time1.days;
        seconds = timez(time1, seconds);
        cout<<"czas: "<<seconds<<endl;
        cout<<"podaj drugą liczbę sekund"<<endl;
        cin>>time1.seconds;
        cout<<"podaj drugą liczbę minut"<<endl;
        cin>>time1.minutes;
        cout<<"podaj drugą liczbę godzin"<<endl;
        cin>>time1.hours;
        cout<<"podaj drugą liczbę dni"<<endl;
        cin>>time1.days;
        seconds = timez(time1, seconds);
        cout<<"czas: "<<seconds<<endl;
        timey(time3, seconds);
        cout<<endl<<"dni: "<<time3.days;
        cout<<endl<<"godziny: "<<time3.hours;
        cout<<endl<<"minuty: "<<time3.minutes;
        cout<<endl<<"sekundy: "<<time3.seconds;
        return 0;
    }