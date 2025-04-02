#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
struct inSeconds
{
    int seconds=0;
    int minuts =0;
    int hours = 0;
    int days =0;
};
void timex(int seconds,inSeconds &sekunda)
{
   sekunda.days =seconds/86400;
   seconds %=86400;
   sekunda.hours=seconds/3600;
   seconds%=3600;
   sekunda.minuts=seconds/60;
   seconds%=60;
   sekunda.seconds=seconds%60;

    cout<<" w dniach "<<sekunda.days<<endl;
    cout<<" w godzinach "<<sekunda.hours<<endl;
    cout<<" w minutach "<<sekunda.minuts<<endl;
    cout<<" w sekundach "<<sekunda.seconds<<endl;
}

int main()
{
    inSeconds sekundy;
    cout<<"podaj czas w sekondach"<<endl;
    cin>>sekundy.seconds;
    timex(sekundy.seconds,sekundy);
    
    


}