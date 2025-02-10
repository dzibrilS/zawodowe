#include <iostream>


using namespace std;
double rekurencja(double liczba)
{
    if(liczba == 0)
    {
        return 1;
    }
    else if(liczba == 1)
    {
        return 2;
    }
    else
    {
        return (rekurencja(liczba-1)+2*(rekurencja(liczba-2)))/2;
    }
}
double potegi(double liczba, int potega)
{
    if(potega == 0)
    {
        return 1;
    }
    else if(potega == 1)
    {
        return liczba;
    }
    else
    {
        return potegi(liczba, potega-1)*liczba;
    }
}
int main()
{
    double liczba = rekurencja(20);
    cout << "zadanie pierwsze: " << liczba;
    int potega;
    cout << endl << "Zadanie drugie";
    cout << endl << "Podaj liczbe ";
    cin >> liczba;
    cout << endl << "Podaj potege ";
    cin >> potega;
    liczba = potegi(liczba, potega);
    cout << endl << liczba;

    return NULL;
//copyright by snejp
}