#include <iostream>
#include <cstring>
#include<limits>
using namespace std;
int main()
{
   
   
   char tablica[20];
   cout<<"podaj imie i nazwisko"<<endl;
    cin.get(tablica,20);
    cout<<tablica<<endl;
    cout<<"podaj imie i nazwisko"<<endl;
    cin.ignore(20,'\n');
    cin.get(tablica,15);
    cout<<tablica<<endl;
}