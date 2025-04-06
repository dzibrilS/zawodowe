#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

class Pesel
{
private:
    string pesel;
    string defaultPesel = "55030101193";
    int rozmiar = 10;
    int S = 0;
    double M = 0.0;
    int R = 0;
    int temp = 0;
    int waga[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};

public:
    // Setter
    void setPesel(const string &value)
    {
        pesel = value;
    }

    // Getter
    string getPesel() const
    {
        return pesel;
    }

    int getSuma() const
    {
        return S;
    }

    double getModulo() const
    {
        return M;
    }

    int getR() const
    {
        return R;
    }

    string getDefaultPesel() const
    {
        return defaultPesel;
    }

    // Metody
    void wpiszPesel()
    {
        cout << "Wpisz PESEL (11 cyfr): ";
        cin >> pesel;
    }

    void obliczenia()
    {
        S = 0; // resetujemy sumę
        for (int i = 0; i < 10; i++)
        {
            S += (pesel[i] - '0') * waga[i];
        }

        M = S % 10;
        R = (M == 0) ? 0 : 10 - M;
    }

    void genderCheck()
    {
        if ((pesel[9] - '0') % 2 == 0)
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
        cout << "Suma kontrolna: " << S << endl;
        cout << "Modulo: " << M << endl;
        cout << "Cyfra kontrolna powinna być: " << R << endl;

        if (controlSum())
        {
            cout << "PESEL jest poprawny." << endl;
        }
        else
        {
            cout << "PESEL niepoprawny! Domyślny PESEL: " << defaultPesel << endl;
        }
    }

    bool controlSum()
    {
        return R == (pesel[10] - '0');
    }
};

// -----------------------------------------------

int main()
{
    Pesel osoba;

    osoba.wpiszPesel();
    osoba.obliczenia();
    osoba.display();

    cout << "\nProszę poczekać 5 sekund, sprawdzamy płeć..." << endl;
    this_thread::sleep_for(chrono::seconds(5));

    osoba.genderCheck();

    if (osoba.controlSum())
    {
        cout << "Wszystko się zgadza ✅" << endl;
    }
    else
    {
        cout << "Niestety coś się nie zgadza ❌" << endl;
    }

    return 0;
}
