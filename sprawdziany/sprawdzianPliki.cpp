#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int dopiszFile(int n)
{
    fstream plik;
    int liczba;
    plik.open("cos.txt",ios::app);
    {
    for(int i=1; i<=n; i++)
    {
        cout<<"jakie liczby dołożyć"<<endl;
        cin>>liczba;
        plik<<liczba<<endl;
        
    }
    }
    plik.close();
}
void wypisz(int n,int liczba)
{
    ifstream plik;
    plik.open("cos.txt");
    int liczby;
    for(int i=1; i<=n; i++)
    {
        plik>>liczba;
        plik>>liczby;
        cout<<"liczba"<<liczba <<i<<" "<<liczby<<endl;
    }
    
}
void suma(int n,int liczba)
{ 
    fstream plik;
    plik.open("cos.txt", ios::in);
    {
       double suma=0;
       
        for(int i=1; i<=n; i++)
        {
            plik>>liczba;
            suma += liczba;
            if(i==n)
            {
            cout<<"to jest suma"<<suma<<endl;
            }
        }

    }
    plik.close();
}
int main()
{
    fstream plik;
    int iloscLiczb;
    cout<<"ile liczb chcesz"<<endl;
    cin>>iloscLiczb;
    int liczba;
    plik.open("cos.txt",ios::out);
    {
        for(int i=1; i<=iloscLiczb; i++)
        {
            cout<<"podaj liczby jakie chcesz"<<endl;
            cin>>liczba;
            plik<<liczba<<endl;
        }
    }
   
    plik.close();
   dopiszFile(iloscLiczb);
    wypisz(iloscLiczb,liczba);
    suma(iloscLiczb,liczba);
}