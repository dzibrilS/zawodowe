#include <iostream>
#include <string>
using namespace std;
class liczby
{
private:
    int licznik;
    int mianownik;

public:
    void display()
    {
        cout << licznik << endl
             << mianownik;
    }
    void get(int &licznikP, int &mianownikP)
    {
        licznikP = licznik;
        mianownikP = mianownik;
    }
    void set(int licznikP, int mianownikP)
    {
        licznik = licznikP;
        if (mianownikP == 0)
        {
            cout << "mianownik nie moze byc zero";
        }
        else
        mianownik = mianownikP;
    }
};
int main()
{
    int jeden, dwa;
    liczby object;
    object.set(7, 0);
    object.get(jeden, dwa);
    object.display();  
}