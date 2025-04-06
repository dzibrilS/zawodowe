#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Gra
{
private:
    int rzut;
    int suma;
    int liczba[10];
    char wynik1;

public:
    Gra() : rzut(0), suma(0), wynik1('n') {}

    void insert()
    {
        do
        {
            cout << "Podaj liczbę z zakresu 3-10: ";
            cin >> rzut;
        } while (rzut < 3 || rzut > 10);
    }

    void wpisz()
    {
        srand(time(NULL));
        for (int i = 0; i < rzut; i++)
        {
            liczba[i] = (rand() % 6) + 1;
            cout << "kostka " << i + 1 << ": " << liczba[i] << endl;
        }
    }

    void sum()
    {
        int licznik[7] = {0}; // indeksy 1-6 dla wyników kostki
        suma = 0;

        for (int i = 0; i < rzut; i++)
        {
            licznik[liczba[i]]++;
        }

        for (int i = 1; i <= 6; i++)
        {
            if (licznik[i] >= 2)
            {
                suma += i * licznik[i];
            }
        }
    }

    void display()
    {
        cout << "Suma: " << suma << endl;

        cout << "Czy chcesz zagrać jeszcze raz? (t/n): ";
        cin >> wynik1;

        while (wynik1 == 't')
        {
            wpisz();
            sum();
            cout << "Suma: " << suma << endl;
            cout << "Czy chcesz zagrać jeszcze raz? (t/n): ";
            cin >> wynik1;
        }

        if (wynik1 == 'n')
        {
            cout << "Dziękuję za grę!" << endl;
        }
    }
};

int main()
{
    Gra gra;
    gra.insert();
    gra.wpisz();
    gra.sum();
    gra.display();
    return 0;
}
