#include <iostream>
#include <string>
using namespace std;

class Ulamek
{
private: // prywatna wlasnosc klasy private jest domyślne i nie trzeba go pisac
    string kod;
    int typChowu;
    string krajPochodzenia;
    string reszta;
    int iloscJaj
public: // deklaracja publicznych metod i własności.
   Jajo(string kod) {
    setKod(kod);
  }

  void setTypChowu(int typChowu) {
  typChowu = typChowu;
  }

  void setKrajPochodzenia(string krajPochodzenia) {
    krajPochodzenia = krajPochodzenia;
  }

  void setReszta(string reszta) {
    reszta = reszta;
  }

  void setKod(string kod) {
    kod = kod;
    typChowu = kod[0];
    krajPochodzenia = kod.substr(1, 2);
    reszta = kod.substr(3);
  }

  
  string getKod() {
    return kod;
  }

  int getTypChowu() {
    return typChowu;
  }

  string getKrajPochodzenia() {
    return krajPochodzenia;
  }

  string getReszta() {
    return reszta;
  }

  string getTypChowuSlownie() {
    switch (typChowu) {
      case 0:
        return "ekologiczny";
        break;
      case 1:
        return "na wolnym wybiegu";
        break;
      case 2:
        return "ściółkowy";
        break;
      case 3:
        return "klatkowy";
        break;
      default:
        return "nieznany";
    }
  }

int main()
{
    int l1, m1, mianownik1;
    cout << "podaj licznik i mianownik pierwszego ulamka\n";
    cin >> l1;
    cin >> m1;
    Ulamek ulamek1;
    ulamek1.licznik = l1;
    // ulamek1.mianownik=m1; tak nie możemy bo wlasność mianownik jest prywatna.
    ulamek1.setMianownik(m1);//używamy więc publicznych getterów i setterów
    ulamek1.getMianownik(mianownik1);
    cout<<ulamek1.licznik<<endl;
    cout<<mianownik1<<endl;
    cout<<ulamek1.getMianownik();
    return 0;
}
bool czyPoprawne(string pesel)
{
  int s;
  s += ((int)pesel[0] - 48) * 1;
  s += ((int)pesel[1] - 48) * 3;
  s += ((int)pesel[2] - 48) * 7;
  s += ((int)pesel[3] - 48) * 9;
  s += ((int)pesel[4] - 48) * 1;
  s += ((int)pesel[5] - 48) * 3;
  s += ((int)pesel[6] - 48) * 7;
  s += ((int)pesel[7] - 48) * 9;
  s += ((int)pesel[8] - 48) * 1;
  s += ((int)pesel[9] - 48) * 3;
  int m = s % 10;
  int r = m == 0 ? 0 : 10 - m;

  if ((int)pesel[10] - 48 == r)
  {
    return true;
  }
  return false;
}