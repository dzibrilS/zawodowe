#include <iostream>
using namespace std;

class pojazd
{
    private:
    string marka;
    protected:
    string model;
    public:
    int rok_produkcji;
pojazd() {}
pojazd(string aMarka, string aModel, int nRok)
{
    marka = aMarka;
    model = aModel;
    rok_produkcji = nRok;
}
    
    void wyswietl()
    {
        cout << endl << "Marka:" << marka;
        cout << endl << "Model:" << model;
        cout << endl << "Rok Produkcji:" << rok_produkcji;
    }
};
class ciezarowy : public pojazd
{
    public:
    ciezarowy() {}
    ciezarowy(string aMarka, string aModel, int nRok, string aPrzeznaczenie) : pojazd(aMarka, aModel, nRok)
{
    przeznaczenie = aPrzeznaczenie;
}
    string przeznaczenie;
    void wyswietl()
    {
        pojazd::wyswietl();
        cout << endl << "Przeznaczenie:" << przeznaczenie;
    }
};
class autobus : public pojazd
{
public:
    autobus() {}
    autobus(string aMarka, string aModel, int nRok, int aSiedzoce, int aStojace) : pojazd(aMarka, aModel, nRok)
{
    miejsca_siedzonce = aSiedzoce;
    miejsca_stojance = aStojace;
}
    int miejsca_siedzonce;
    int miejsca_stojance;
    void wyswietl()
    {
        pojazd::wyswietl();
        cout << endl << "Miejsca siedzące: " << miejsca_siedzonce;
        cout << endl << "Miejsca stojące: " << miejsca_stojance;
    }
    
};
int main()
{
    string marka;
    string model;
    int rok;
    string przeznaczenie;
    int siedzace;
    int stojace;
    cout << endl << "Podaj marke ";
    cin >> marka;
    cout << endl << "Podaj model ";
    cin >> model;
    cout << endl << "Podaj rok produkcji  ";
    cin >> rok;
    cout << endl << "Podaj przeznaczenie ";
    cin >> przeznaczenie;
    ciezarowy asdf1(marka, model, rok, przeznaczenie);
    cout << endl << "Podaj marke ";
    cin >> marka;
    cout << endl << "Podaj model ";
    cin >> model;
    cout << endl << "Podaj rok produkcji  ";
    cin >> rok;
    cout << endl << "Podaj ilosc miejsc siedzacych ";
    cin >> siedzace;
    cout << endl << "Podaj ilosc miejsc stojacych ";
    cin >> stojace;
    autobus asdf2(marka, model, rok, siedzace, stojace);
    cout << endl << "Ciezarowy: ";
    asdf1.wyswietl();
    cout << endl << "Autobus: ";
    asdf2.wyswietl();

    return NULL;
}