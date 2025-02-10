#include <iostream>
#include <string>
using namespace std;

struct Dane {
    string imie;
    int wiek;
    
};
void wyszukaj(Dane*osoby,int liczbaR,string imie,int wiek)
{
    
    for(int i =0; i<liczbaR; i++)
    {
        if(osoby[i].imie == imie || osoby[i].wiek == wiek)
        {
            cout<<"znaleziono osobe "<<osoby[i].imie<<" "<<osoby[i].wiek<<endl;
        }
    }
}


int main()
{
   
     int liczbaR;
    cout << "Podaj liczbe osob: ";
    cin >> liczbaR;

   
      Dane* osoby = new Dane[liczbaR];
   
    for(int i =0; i<liczbaR; i++)
    {
        cout<<"podaj imie "<<i+1<<endl;
        cin>>osoby[i].imie;
        cout<<"podaj wiek "<<i+1<<endl;
        cin>>osoby[i].wiek;
        
        
       
    }

   
    string imieSzukane;
    int wiekSzukany;
    cout << "Podaj dane osoby do wyszukania:" << endl;
    cout << "Imie: ";
    cin >> imieSzukane;
    cout << "wiek: ";
    cin >> wiekSzukany;
   

    

    
    wyszukaj(osoby, liczbaR, imieSzukane, wiekSzukany);
    
    delete[] osoby;

}
