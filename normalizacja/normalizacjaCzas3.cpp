#include <iostream>
using namespace std;
struct timex
{
    int seconds;
    int minutes;
    int hours;
    int days;
};
int main()
{

    int sakundy1, czas, sakundy2;
    timex time1, time2, time3;
    bool flag = false;

    cout << "podaj liczbę sekund" << endl;
    cin >> sakundy1;
    time1.days = sakundy1 / 86400;
    czas = sakundy1 % 86400;
    time1.hours = czas / 3600;
    czas = czas % 3600;
    time1.minutes = czas / 60;
    czas = czas % 60;
    time1.seconds = czas;

    cout << "podaj liczbę sekund" << endl;
    cin >> sakundy2;
    time2.days = sakundy2 / 86400;
    czas = sakundy2 % 86400;
    time2.hours = czas / 3600;
    czas = czas % 3600;
    time2.minutes = czas / 60;
    czas = czas % 60;
    time2.seconds = czas;   

    int czasRazem = sakundy1 + sakundy2;
    time3.days = czasRazem / 86400;
    czas = czasRazem % 86400;
    time3.hours = czas / 3600;
    czas = czas % 3600;
    time3.minutes = czas / 60;
    czas = czas % 60;
    time3.seconds = czas;

    cout << time3.seconds<<endl;
    cout << time3.minutes<<endl;
    cout << time3.hours<<endl;
    cout << time3.days<<endl;

    return 0;
}