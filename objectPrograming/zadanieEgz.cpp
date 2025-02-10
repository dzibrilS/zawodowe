// #include <iostream>
// using namespace std;

// class Osoba{
//     private:
//         int id;
//         string imie;
//         public:
//     void print(string imie2 = ""){
//         if(imie2 != "" && id!=0)
//             cout << "cześć " << imie2 << " mam na imie " << imie;
//         else
//             cout << "brak danych";
//     }
//     Osoba(){
//         id = 0;
//         imie = "";
//     }
//     Osoba(int idWstaw, string imieWstaw)
//     {
//         id = idWstaw;
//         imie = imieWstaw;
//     }
    
   
// };
// int main(){
//     Osoba person(1, "adam");
//     person.print("Zygmunt");
//     cout<<endl;
//      Osoba person1(person);
//     // person1.imie("jaca");
//     person1.print("adam");
    
//     // Osoba person;
//     // person.print();
// }

#include <iostream>
#include <string>

using namespace std;

class Osoba {
private:
    int id;
    string imie;
    static int liczbaOsob;

public:
    // Konstruktor bezparametrowy
    Osoba() : id(0), imie("") {
        liczbaOsob++;
    }

    // Konstruktor z parametrami
    Osoba(int id, string imie) : id(id), imie(imie) {
        liczbaOsob++;
    }

    // Konstruktor kopiujący
    Osoba(const Osoba& other) : id(other.id), imie(other.imie) {
        liczbaOsob++;
    }

    // Metoda do wypisania imienia
    void przedstawSie(string imieOdbiorcy) {
        if (imie != "") {
            cout << "Cześć " << imieOdbiorcy << ", mam na imię " << imie << endl;
        } else {
            cout << "Brak danych." << endl;
        }
    }

    // Metoda statyczna do pobrania liczby instancji
    static int pobierzLiczbeOsob() {
        return liczbaOsob;
    }
};

// Inicjalizacja statycznego pola
int Osoba::liczbaOsob = 0;

int main() {
    // Tworzenie instancji klasy Osoba
    Osoba osoba1(1, "Jan");
    Osoba osoba2(osoba1);
    Osoba osoba3(osoba2);

    // Wywołanie metody przedstawSie
    osoba1.przedstawSie("Anna");
    osoba2.przedstawSie("Piotr");
    osoba3.przedstawSie("Kasia");

    // Wyświetlenie liczby instancji
    cout << "Liczba osob: " << Osoba::pobierzLiczbeOsob() << endl;

    return 0;
}