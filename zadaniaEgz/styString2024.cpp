#include <iostream>
#include <string>
#include <limits>
#include <thread>
#include <chrono>

using namespace std;

class Pesel
{
public:
    string pesel, defaultPesel;
    int rozmiar;
    int S, R;
    double M;
    int temp;
    int waga[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};

    Pesel()
    {
        defaultPesel = "55030101193";
        rozmiar = 10;
        temp = 0;
        S = 0;
        M = 0.0;
        R = 0;
    }
    void wpiszPesel()
    {
        cout << "wpisz pesel 11 cyfr" << endl;
        cin >> pesel;
        // cin.ignore(15, " ");
    }

    void obliczenia()
    {

        for (int i = 0; i < pesel.length() - 1; i++)
        {
            S += static_cast<int>(pesel[i] - '0') * waga[i];
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
        if (pesel[9] % 2 == 0)
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
        if (pesel.length() - 1 == rozmiar || pesel[10] == R)
        {
            cout << "suma " << S << endl;
            cout << "modulo " << M << endl;
            cout << R << endl;
        }
        else if (pesel.length() - 1 != rozmiar || pesel[10] != R)
        {
            cout << "pesel nie poprawny twój nowy pesel" << endl;
            cout << defaultPesel << endl;
        }
    }
    bool controlSum()
    {
        if (R == pesel[10] - '0')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Pesel pesel;

    pesel.wpiszPesel();
    pesel.obliczenia();
    pesel.display();
    cout << endl;
    cout << "proszę poczekać 5 sekund sprawdzamy płeć" << endl;
    this_thread::sleep_for(chrono::seconds(5));
    pesel.genderCheck();
    if (pesel.controlSum() == true)
    {
        cout << "jesteś gość " << endl;
    }
    else
    {
        cout << "jesteś cipek " << endl;
    }
    //{5, 5, 0, 3, 0, 1, 0, 1, 1, 9, 3};

    return 0;
}