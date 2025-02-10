// Napisz szablon funkcji pobierającej dwa argumenty, która bedzie się dwa razy specjalizować i raz konkretyzować dla zmiennych typu:
// int,float -zwraca srednią argumentów (Z przecinkiem).
// float,int-komunikat o pogodzie 
// double,double-iloczyn argumentów
// Spróbuj tak skonstruować szablon by były możliwe wywołania niejawne. Wywołaj jawnie i niejawnie w sumie trzy razy funkcję.


#include <iostream>
#include <cmath>
using namespace std;

template <typename T1, typename T2>
T1 funkcja(T1 zmienna1, T2 zmienna2)
{
    return zmienna1 * zmienna2;
}


template <>
int funkcja<int, float>(int a, float b) {
    return (a+b)/2;
}

template <>
float funkcja<float, int>(float a, int b) {
    return a + b;
};

template <>
double funkcja<double,double>(double a, double b) {
    return a * b;
}

int main() {
    
    cout << "srednia" <<funkcja(5, 2.5f) << endl;
    cout<<"srednia jawnie"<<funkcja<int,float>(5,2.5)<<endl;
    cout << "Suma" << funkcja(3.5f, 2) << endl;
    cout<<" suma jawnie"<<funkcja<float,int>(3.5,2)<<endl;
    cout << "Iloczyn" << funkcja<double, double>(2.5, 4.0) <<endl;
    cout<<"konkretyzacja"<<funkcja<int,int>(2,5.5)<<endl;

    return 0;
}