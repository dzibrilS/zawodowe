#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Gra
{
private:
    int *tab;    // Tablica liczb całkowitych
    int rozmiar; // Liczba elementów tablicy

public:
    // Konstruktor, który inicjuje tablicę o rozmiarze r
    Gra(int r)
    {
        rozmiar = r;
        tab = new int[rozmiar];
        srand(time(NULL));
        for (int i = 0; i < rozmiar; i++)
        {
            tab[i] = (rand() % 1000) + 1;
        }
    }

    // Metoda do wyświetlania wszystkich elementów tablicy
    void display1()
    {
        for (int i = 0; i < rozmiar; i++)
        {
            cout << i + 1 << ": " << tab[i] << endl;
        }
    }

    // Metoda wyszukująca pierwszy występujący element w tablicy
    int wpisz(int liczba)
    {
        for (int i = 0; i < rozmiar; i++)
        {
            if (tab[i] == liczba)
            {
                return i; // Zwraca indeks pierwszego znalezionego elementu
            }
        }
        return -1; // Zwraca -1, jeśli liczba nie została znaleziona
    }

    // Metoda do wyświetlania nieparzystych liczb oraz ich liczby
    void displayNiePar()
    {
        int liczbaNieparzystych = 0;
        cout << "Nieparzyste liczby: " << endl;
        for (int i = 0; i < rozmiar; i++)
        {
            if (tab[i] % 2 != 0) // Sprawdza, czy liczba jest nieparzysta
            {
                cout << tab[i] << endl;
                liczbaNieparzystych++;
            }
        }
        cout << "Liczba liczb nieparzystych: " << liczbaNieparzystych << endl;
    }

    // Metoda do obliczania średniej arytmetycznej tablicy
    double avg()
    {
        int suma = 0;
        for (int i = 0; i < rozmiar; i++)
        {
            suma += tab[i];
        }
        return (double)suma / rozmiar; // Zwraca średnią jako wartość zmiennoprzecinkową
    }

    // Destruktor, który zwalnia pamięć
    ~Gra()
    {
        delete[] tab; // Zwalniamy pamięć przydzieloną na tablicę
    }
};

int main()
{
    int r;
    cout << "Podaj rozmiar tablicy (wiecej niz 20): ";
    cin >> r;

    if (r <= 20) // Upewniamy się, że rozmiar tablicy jest większy niż 20
    {
        cout << "Rozmiar tablicy musi byc wiekszy niz 20!" << endl;
        return 0;
    }

    Gra t(r); // Tworzymy obiekt klasy Gra z rozmiarem tablicy

    // Wyświetlamy wszystkie elementy tablicy
    t.display1();

    // Wyszukiwanie liczby
    int liczba;
    cout << "Podaj liczbe do wyszukania: ";
    cin >> liczba;
    int indeks = t.wpisz(liczba); // Wywołujemy metodę wyszukiwania

    if (indeks != -1)
    {
        cout << "Liczba " << liczba << " zostala znaleziona na indeksie: " << indeks << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie zostala znaleziona." << endl;
    }

    // Wyświetlamy liczby nieparzyste
    t.displayNiePar();

    // Liczymy i wyświetlamy średnią
    double srednia = t.avg();
    cout << "Srednia arytmetyczna liczb w tablicy: " << srednia << endl;

    return 0;
}
