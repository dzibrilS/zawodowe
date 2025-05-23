#include <iostream>
using namespace std;
// Definicja klasy bazowej Pracownik:
class Pracownik
{
public: // wszystkie elementy członkowskie klasy są publiczne
    // Definicje zmiennych członkowskich:
    string imie{""};
    string nazwisko{""};
    // Definicja funkcji członkowskiej:
    string zwrocDane()
    {
        return imie + " " + nazwisko;
    }
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel : public Pracownik
{ // dziedziczenie publiczne
public:
    // Definicja zmiennej członkowskiej:
    string przedmiot{""};
    // Definicja funkcji członkowskiej:
    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};
class Wychowawca : public Nauczyciel
{
public:
    string klasa{""};
    Wychowawca(string imie, string nazwisko, string przedmiot, string klasa)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->przedmiot = przedmiot;
        this->klasa = klasa;
    }
    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot + ", klasa: " + klasa;
    }
};
int main()
{
    Wychowawca wychowawca("Katarzyna", "Pawlik", "niemiecki", "3 TIP");
    cout << "Dane nauczyciela: " << wychowawca.zwrocDane() << endl;
    return 0;
}