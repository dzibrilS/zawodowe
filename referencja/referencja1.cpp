#include <iostream>
#include <cstdlib>
using namespace std;
int power( int podstawa, int wykladnik){
    int wynik=1;
    for (short i = 0; i < wykladnik; i++)//to co jest napisany po return mieszka w nazwie funkcji
    {
        wynik=wynik*podstawa;
    }
   return wynik; 
}
int powieksz(int a){
    a=a+3;
    cout<<"a wewnątrz funkcji ma wartosc "<<a<<endl;  //przekazywanie parametrów przez wartosc  
    return a;
}
void powiekszCalkiem(int &a){
    a=a+3;
    cout<<"a wewnątrz funkcji ma wartosc "<<a<<endl;//przekazywanie parametrów przez referencje (adres)  
   
}
int main()
{
// cout <<power(2,5)<<endl<<power(2,3)<<endl<<power(2,12);
int a=4;
powieksz(a);
cout<<"liczba poza funkcją ma wartosc "<<a<<endl;
a=4;
powiekszCalkiem(a);
cout<<"liczba poza funkcją ma wartosc "<<a;
  return 0;
}