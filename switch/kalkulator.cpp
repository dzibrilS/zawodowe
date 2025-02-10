#include <iostream>
using namespace std;
int main(){
    int liczba1;
    int liczba2;
    int suma=liczba1 + liczba2;
    cout<<"podaj pierwsza liczbe"<<endl;
    cin>>liczba1;
    cout<<"podaj druga liczbe"<<endl;
    cin>>liczba2;
        jano:
    cout<<" co chcesz zrobic"<<endl;
    cout<<"+"<<endl;
    cout<<"-"<<endl;
    cout<<"/"<<endl;
    cout<<"*"<<endl;

    char znak;
    cin>>znak;
    switch(znak)
    {
        case '+':
        cout<<liczba1+liczba2;
        break;
         case '-':
        cout<<liczba1-liczba2;
        break;
         case '/':
         if(liczba1,liczba2 != 0){
        cout<<liczba1/liczba2;
         }
        else {
            cout<<"no debil"<<endl;
        }
        break;
         
         case '*':
        cout<<liczba1*liczba2;
        break;
        default:
        {
            cout<<"źle debilu spisz"<<endl;
        }
    }
    char odpowiedz;
    cout<<" czy chcesz zakonczyc program (F/P)"<<endl;
    cin>>znak;
    if(znak == 'F')
    {
    goto jano;
    }
    else if(znak =='P')
    {
        return 0;
    }
}
