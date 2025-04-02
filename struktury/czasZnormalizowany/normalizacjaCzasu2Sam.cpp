#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
struct time1
{
    int seconds=0;
     int minutes=0;
    int hours=0;
    int days=0;
   
};
int naSekundy(time1 &czas1)
{
    return czas1.seconds + czas1.minutes * 60 + czas1.hours * 3600 + czas1.days * 24 * 3600;
}
time1 naCzas(int seconds)
{
    time1 czas3;
    czas3.days = seconds / 86400;
    seconds %=  86400;
    czas3.hours %= seconds / 3600;
    seconds %= 3600;
    czas3.minutes = seconds / 60;
    seconds %=60;
    czas3.seconds = seconds;
    return czas3;

}
time1 dodaj(time1 czas1,time1 czas2)
{
    int suma = naSekundy(czas1) + naSekundy(czas2);
    return naCzas(suma);
}
int main()
{
    time1 czas1 {30,50,3,1};
    time1 czas2 {40,20,10,3};
    time1 czas3 =dodaj(czas1, czas2);
    cout<<czas3.seconds<<endl;
    cout<<czas3.minutes<<endl;
    cout<<czas3.hours<<endl;
    cout<<czas3.days<<endl;


}