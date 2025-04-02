
#include <iostream>
using namespace std;

struct Ocena {
    int wartosc;
    int waga;
};

Ocena* utworzTabliceOcen(int n) {
    Ocena* tablica = new Ocena[n];
    return tablica;
}

void pobierzDane(Ocena* tablica, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Podaj ocenę " << i + 1 << ": ";
        cin >> tablica[i].wartosc;
        cout << "Podaj wagę oceny  " << i + 1 << ": ";
        cin >> tablica[i].waga;
    }
}

double obliczSrednia(Ocena* tablica, int n) {
    double suma = 0;
    int waga = 0;
    for (int i = 0; i < n; i++) {
        suma += tablica[i].wartosc * tablica[i].waga;
        waga += tablica[i].waga;
    }
    if (waga != 0) {
        return suma / waga;
    } else {
        return 0; 
    }
}

int main() {
    int liczbaOcen;
    cout << "Podaj liczbę ocen: ";
    cin >> liczbaOcen;

    Ocena* tablicaOcen = utworzTabliceOcen(liczbaOcen);
    pobierzDane(tablicaOcen, liczbaOcen);
    double srednia = obliczSrednia(tablicaOcen, liczbaOcen);

    cout << "Średnia ocen: " << srednia << endl;

    delete[] tablicaOcen; 

    return 0;
}
