#include <iostream>
#include <string>
using namespace std;

class Osoba {
private:
    string pesel; 
public:
    short int iq;
    char plec;

    // Deklaracja funkcji przed ich użyciem w klasie
    bool czyPoprawne(string pesel);
    char sprawdzPlec(string pesel);

    // Konstruktor
    Osoba(string pesel, short int iq) {
        if (czyPoprawne(pesel)) {
            this->pesel = pesel;
            this->plec = sprawdzPlec(pesel);
        } else {
            this->pesel = "";
            cout << "Błędny PESEL!" << endl;
        }

        // Ograniczenie na IQ
        if (iq >= 0 && iq <= 200) {
            this->iq = iq;
        } else {
            this->iq = 0;
            cout << "Błędna wartość IQ!" << endl;
        }
    }

    // Metoda do wypisania danych osoby
    void wypiszDane() {
        cout << "PESEL: " << pesel << endl;
        cout << "IQ: " << iq << endl;
        cout << "Płeć: " << plec << endl;
    }
};

// Definicja funkcji - tylko jedna!
bool czyPoprawne(string pesel) {
    int s = 0;
    int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    for (int i = 0; i < 10; i++) {
        s += ((int)pesel[i] - 48) * wagi[i];
    }

    int m = s % 10;
    int r = m == 0 ? 0 : 10 - m;

    return ((int)pesel[10] - 48 == r);
}

char Osoba::sprawdzPlec(string pesel) {
    if ((int)pesel[9] - 48 % 2 == 0) {
        return 'K';
    }
    return 'M';
}

// PROGRAM GŁÓWNY
int main() {
    string pesel;
    short int iq;

    cout << "Podaj PESEL: ";
    cin >> pesel;

    cout << "Podaj IQ: ";
    cin >> iq;

    Osoba osoba(pesel, iq);

    osoba.wypiszDane();

    return 0;
}
