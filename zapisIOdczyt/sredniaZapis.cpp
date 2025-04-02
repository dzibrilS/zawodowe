#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream plik;
    int ileLiczb;
        cout<<"ile liczb chcesz wpisac"<<endl;
        cin>>ileLiczb;
    plik.open("srednia.txt", ios::out);
    {

        int liczba;
        for(int i=1; i<=ileLiczb; i++)
        {
            cout<<"podaj liczbe "<<i<<endl;
            cin>>liczba;
            plik<<liczba<<endl;

        }
    }
    plik.close();

    // plik.open("srednia.txt", ios::in);
    // {
    //    double liczba2=0;
    //    double suma=0;
    //    double srednia=0;
    //     for(int i=1; i<=ileLiczb; i++)
    //     {
    //         plik>>liczba2;
    //         cout<<liczba2<<endl;
    //         suma += liczba2;
    //         if(i==ileLiczb)
    //         {
    //             cout<<"to jest suma "<<suma<<endl;
    //             srednia = suma/ileLiczb;
    //             cout<<suma<<"/"<<ileLiczb<<" = "<<srednia<<endl;

    //         }
    //     }

    // }
    // plik.close();
}