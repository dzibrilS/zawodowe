// Napisz szablon funkcji pobierającej dwa argumenty, która bedzie się dwa razy specjalizować i raz konkretyzować dla zmiennych typu:
// int,float -zwraca srednią argumentów (Z przecinkiem).
// float,int-komunikat o pogodzie 
// double,double-iloczyn argumentów
// Spróbuj tak skonstruować szablon by były możliwe wywołania niejawne. Wywołaj jawnie i niejawnie w sumie trzy razy funkcję.


#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 funkcja(T1 zmienna1, T2 zmienna2)
{
    cout << "konkretyzacja";
    return zmienna1 + zmienna2;
}
template <> // definicja szablonu specjalizowanego
double funkcja<int, float>(double zmienna, float zmienna1)
{
   cout<<" srednia argumentow"<<endl;
    return (zmienna1 + zmienna1) /2;
}
template <>
double funkcja<float, double>(float zmienna, double zmienna7)
{
   
    return zmienna * zmienna7;
}
int main()
{
    double bot;
    float sam;
    cout << endl;
    funkcja(bot,sam); // specjalizowanie szablonu funkcji niejawne double,float
    // specjalizowanie szablonu funkcji  niejawne float,double
    funkcja(2,2.0);//konkretyzacja niejawna int,double
    return 0;
}