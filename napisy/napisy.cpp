#include <iostream>
#include <cstring>
#include<limits>
using namespace std;
int main()
{
    char table[30];
    cout<<"podaj imie i nazwisko"<<endl;
    cin.get(table,30);
    cin.ignore(1024,'\n');
    cout<<table<<endl;
    cout<<"podaj imie i nazwisko"<<endl;
    cin.get(table,30);
    cout<<table<<endl;
}