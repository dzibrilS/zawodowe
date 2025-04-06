#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Gra
{

public:
    int *tab;
    int rozmiar;
    int liczba;
    int indeks, indeks1;
    Gra(int r)
    {
        rozmiar = r;
        tab = new int[rozmiar];
        srand(time(NULL));
        for (int i = 0; i < rozmiar; i++)
        {
            tab[i] = (rand() % 1000) + 1;
        }
        liczba = 0;
        indeks = 0;
        indeks1 = 0;
    }

    void display1()
    {
        for (int i = 0; i < rozmiar; i++)
        {
            cout << i + 1 << ": " << tab[i] << endl;
        }
    }

    int wpisz()
    {

        cout << "znajdz liczbe " << endl;
        cin >> liczba;
        for (int i = 0; i < rozmiar; i++)
        {
            if (tab[i] == liczba)
            {

                indeks = i;
                cout << tab[i] << endl;
                cout << "Znaleziono liczbę " << liczba << " na indeksie: " << indeks << endl;
                return indeks;
            }
        };

        return -1;
    }

    void avg()
    {
        int suma = 0;
        double srednia = 0;
        for (int i = 0; i < rozmiar; i++)
        {
            suma += tab[i];
        }
        srednia = suma / rozmiar;
        cout << "średnia to " << srednia << endl;
    }

    void displayNiePar()
    {

        cout << "nieparzyste liczby" << endl;
        for (int i = 0; i < rozmiar; i++)
        {
            if (tab[i] % 2 != 0)
            {
                cout << tab[i] << endl;
                indeks1++;
            }
        }
        cout << "liczb nie parzystych jest " << indeks1 << endl;
    }
};

int main()
{
    int r;
    cout << "Podaj rozmiar tablicy: ";
    cin >> r;
    Gra t(r);

    t.display1();
    cout << t.wpisz() << endl;
    t.displayNiePar();
    t.avg();

    return 0;
}
