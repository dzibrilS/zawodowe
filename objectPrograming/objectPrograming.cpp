#include <iostream>
#include <string>
using namespace std;
class liczby
{
public:
int liczba1;
int liczba2;
void wypisz()
{
    cout << liczba1 << endl << liczba2;
}
};
int main()
{
    int jeden, dwa;
    cout << "podaj liczby:" << endl;
    cin >> jeden;
    cin >> dwa;
    liczby asdf;
    asdf.liczba1 = jeden;
    asdf.liczba2 = dwa;
    asdf.wypisz();

}