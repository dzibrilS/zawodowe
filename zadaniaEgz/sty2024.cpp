#include <iostream>
#include <cstring>
#include <thread>
#include <chrono>
using namespace std;

class Pesel
{
public:
    int tab[11];
    int rozmiar;
    int S, R;
    double M;
    int temp;
    int waga[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};

    Pesel()
    {

        rozmiar = 11;
        temp = 0;
        S = 0;
        M = 0.0;
        R = 0;
    }
    void wpiszPesel()
    {
        cout << "wpisz pesel 11 cyfr" << endl;
        for (int i = 0; i < rozmiar; i++)
        {
            cin >> tab[i];
        }
    }

    void obliczenia()
    {

        for (int i = 0; i < rozmiar - 1; i++)
        {
            S += tab[i] * waga[i];
        }
        M = S % 10;
        if (M == 0)
        {
            R = 0;
        }
        else
        {
            R = 10 - M;
        }
    }
    void genderCheck()
    {
        if (tab[9] % 2 == 0)
        {
            cout << "Jesteś kobietą." << endl;
        }
        else
        {
            cout << "Jesteś mężczyzną." << endl;
        }
    }

    void display()
    {
        cout << "suma " << S << endl;
        cout << "modulo " << M << endl;
        cout << R << endl;
    }
    bool isValid()
    {

        return tab[10] == R;
    }
};

int main()
{

    Pesel pesel;

    pesel.wpiszPesel();
    pesel.obliczenia();
    pesel.display();
    cout << endl;
    cout << "proszę poczekać 5 sekund sprawdzamy pesel" << endl;
    this_thread::sleep_for(chrono::seconds(5));
    pesel.genderCheck();

    if (pesel.isValid())
    {
        cout << "Numer PESEL jest poprawny." << endl;
    }
    else
    {
        int inCorrect[11] = {5, 5, 0, 3, 0, 1, 0, 1, 1, 9, 3};
        cout << "twój nowy pesel idioto ";
        for (int i = 0; i < 11; i++)
        {
            cout << inCorrect[i];
        }
    }
    //{5, 5, 0, 3, 0, 1, 0, 1, 1, 9, 3};

    return 0;
}