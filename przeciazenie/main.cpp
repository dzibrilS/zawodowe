#include <iostream>
#include <string>
using namespace std;
int dodaj(int i)//przeładowanie  (overloading) nazwy funkcji powinno 
//pozwalać rozróżniać te same nazwy funkcji po rodzaju lub liczbie parametrów.
{
   return ++i;
};
double dodaj(int i , int b)
{
    i +=b;
    return i;
};
float dodaj(int i , float b)
{
    i += b;
    return i;
}
int main()
{
    int i=0;
    int b =5;
   
    cout<<"podaj jakas liczbe"<<endl;
    cin>>b;

    cout<<dodaj( i , b)<<endl;
    
}