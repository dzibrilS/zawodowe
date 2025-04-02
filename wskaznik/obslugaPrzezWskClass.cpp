#include <iostream>
#include <string>
using namespace std;
// Definicja klasy Pracownik:
struct data_zatrudnienia {   
  int dzien; 
  int miesiąc;
  int rok; 
};
class Pracownik {
public:
data_zatrudnienia data;
string imie;
string nazwisko;
void wyswietlDane() {
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
cout<<"data zatrudnienia"<<" dzien "<<data.dzien<<" miesiac "<<data.miesiąc<<" rok "<<data.rok<<endl;
}
};

int main() {
// Utworzenie obiektu pracownik należącego do klasy Pracownik:
Pracownik pracownik;
// pracownik.imie="Jan"; tak umiemy
// Deklaracja i inicjalizacja zmiennej wskaźnikowej (wskaźnika) w_pracownik na dowolny obiekt należący
// do typu Pracownik:
Pracownik *w_pracownik;
// Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik:
w_pracownik = &pracownik;
// Nadanie wartości zmiennym członkowskim obiektu pracownik:
w_pracownik->imie = "Jan";//tak tez mozna.
w_pracownik->nazwisko = "Kowalski";
w_pracownik->data = {2010,8,8};

// Prezentacja danych zapisanych w zmiennych członkowskich obiektu pracownik na ekranie monitora:
w_pracownik->wyswietlDane();
return 0;
}