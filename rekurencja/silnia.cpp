#include <iostream>
using namespace std;
int silniaa(int silnia)
{
    int wynik=1;
    for(int i=1; i<=silnia; i++)
    {
       wynik= wynik*=i;
         
    }
    return wynik;
}

int main()
{
    int silnia;
    cout<<"podaj liczbe do silni"<<endl;
    cin>>silnia;
    cout<<silniaa(silnia)<<endl;
}