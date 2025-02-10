// #include <iostream>
// #include <string>

// using namespace std;

// struct Osoba {
//     int id;
//     string imie;
//     string nazwisko;
//     int wiek;
// };


// void wyszukajOsobe(Osoba* osoby, int iloscOsob, string imie, string nazwisko, int wiek,int id) {
//     bool znaleziono = false;
//     for (int i = 0; i < iloscOsob; ++i) {
//         if (osoby[i].imie == imie && osoby[i].nazwisko == nazwisko && osoby[i].wiek == wiek) {
//             cout << "Znaleziono osobe na id " <<osoby[i].id<<endl; 
//             znaleziono = true;
//         }
//     }
//     if (!znaleziono) {
//         cout << "Nie znaleziono osoby o podanych danych." << endl;
//     }
// }

// int main() {
//     int iloscOsob;
//     cout << "Podaj liczbe osob: ";
//     cin >> iloscOsob;

//     Osoba* osoby = new Osoba[iloscOsob];


//     for (int i = 0; i < iloscOsob; ++i) {
//         cout << "Podaj dane dla osoby " << i+1 << ":" << endl;
//         cout << "Imie: ";
//         cin >> osoby[i].imie;
//         cout << "Nazwisko: ";
//         cin >> osoby[i].nazwisko;
//         cout << "Wiek: ";
//         cin >> osoby[i].wiek;
//         cout<<"id ";
//         cin>>osoby[i].id;
//     }

 
//     string imieSzukane, nazwiskoSzukane;
//     int wiekSzukany,id;
//     cout << "Podaj dane osoby do wyszukania:" << endl;
//     cout << "Imie: ";
//     cin >> imieSzukane;
//     cout << "Nazwisko: ";
//     cin >> nazwiskoSzukane;
//     cout << "Wiek: ";
//     cin >> wiekSzukany;
//     cout<<" id ";;
//     cin>>id;
    


//     wyszukajOsobe(osoby, iloscOsob, imieSzukane, nazwiskoSzukane, wiekSzukany,id);

    
//     delete[] osoby;

//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

struct Dane {
    string imie;
    string nazwisko;
    int id;
};
void wyszukaj(Dane*osoby,int iloscOsob,string imie,string nazwisko,int id)
{
    for(int i =0; i<iloscOsob; i++)
    {
        if(osoby[i].imie == imie && osoby[i].nazwisko == nazwisko)
        {
            cout<<"znaleziono osobe na id "<<id<<endl;
        }
    }
}

int main()
{
     int iloscOsob;
    cout << "Podaj liczbe osob: ";
    cin >> iloscOsob;

    // Tworzenie tablicy dynamicznej osób
      Dane* osoby = new Dane[iloscOsob];
    int id=0;
    for(int i =0; i<iloscOsob; i++)
    {
        cout<<"podaj imie "<<i+1<<endl;
        cin>>osoby[i].imie;
        cout<<"podaj nazwisko "<<i+1<<endl;
        cin>>osoby[i].nazwisko;
        
        
       
    }

   
    string imieSzukane, nazwiskoSzukane;
    int wiekSzukany;
    cout << "Podaj dane osoby do wyszukania:" << endl;
    cout << "Imie: ";
    cin >> imieSzukane;
    cout << "Nazwisko: ";
    cin >> nazwiskoSzukane;
    cout<<" id ";
    cin>>id;

    

    // Wywołanie funkcji wyszukującej osobę
    wyszukaj(osoby, iloscOsob, imieSzukane, nazwiskoSzukane,id);


}
