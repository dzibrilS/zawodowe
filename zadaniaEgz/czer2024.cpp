#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class Gra
{

public:
    int rzut, wynik, temp, rozmiar, suma;
    int liczba[10];
    Gra()
    {
        rzut = 0;
        wynik = 0;
        temp = 0;
        suma = 0;
        rozmiar = 10;
    }
    void insert()
    {
        do
        {
            cout << "Podaj liczbę z zakresu 3-10: ";
            cin >> rzut;

        } while (rzut < 3 || rzut > 10);
    }
    void display()
    {

        for (int i = 0; i < rzut; i++)
        {
            srand(time(NULL) * (i + 1));
            liczba[i] = (rand() % 6) + 1;
            cout << "kostka " << i + 1 << ": " << liczba[i] << endl;
        }
    }
    void sum()
    {
        for (int i = 0; i < rozmiar - 1; i++)
        {
            temp = liczba[i];
            for (int j = j + 1; j < rozmiar; i++)
            {
                if (temp == liczba[j])
                {
                    suma += temp + liczba[j];
                }
            }
        }
    }
    void display1()
    {
        cout << "suma " << suma << endl;
    }
};
int main()
{
    Gra gra;
    gra.insert();
    gra.display();
    gra.sum();
    gra.display1();
    return 0;
}
