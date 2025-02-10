#include <iostream>
#include <string>
using namespace std;

class AutomatDoPizzy {
  int ilePizz;
  float cenaSera; 
  float cenaSzynki;
  float cenaBrokuly; 
  float cenaCiastaMalego;
  float cenaCiastaDuzego;

 public:
  int ileSera;
  int ileSzynki;
  int ileBrokuly;
  bool czyDuza;

  void setCenaSera(float a)
  {
    cenaSera = a;
  }
  void setCenaSzynki(float a)
  {
    cenaSzynki = a;
  }
  void setCenaBrokuly(float a)
  {
    cenaBrokuly = a;
  }
  void setCenaBrokuly(float a)
  {
    cenaBrokuly = a;
  }

  void setCenaCiastaMalego(float a)
  {
     CenaCiastaMalego = a;
  }
  void setCenaCiastaDuzego(float a)
  {
     CenaCiastaDuzego = a;
  }
  int ilePizz()
   {
    return ilePizz;
   }  
  float getCenaSera()
   {
    return CenaSera = 2.0;
   }

  float getCenaSzynki()
   {
    return CenaSzynki = 3.0;
   }

   float getCenaBrokuly()
   {
    return cenaBrokuly = 1.0;
   }
   float cenaCiastaMalego()
   {
    return cenaCiastaMalego = 5.0;
  
   }
   float cenaCiastaDuzego()
   {
    return cenaCiastaDuzego = 10.0;
   }

  float cenaPizzy() {
    float cena = czyDuza ? cenaCiastaDuzego : cenaCiastaMalego;
    cena += ileSera * cenaSera / 100;
    cena += ileSzynki * cenaSzynki / 100;
    cena += ileBrokuly * cenaBrokuly / 100;
    return cena;
  }

  int ileKalorii() {
    kalorie += ileSera * 402 / 100;
    kalorie += ileSzynki * 145 / 100;
    kalorie += ileBrokuly * 34 / 100;
    return kalorie;
  }

  bool czyVege() {
    return ileSzynki == 0;
  }
};

int main() {
  AutomatDoPizzy pizza;

  cout << "Witaj w automacie do pizzy!" << endl;

  cout << "Ile sera (w gramach)?: ";
  cin >> pizza.ileSera;

  cout << "Ile szynki (w gramach)?: ";
  cin >> pizza.ileSzynki;

  cout << "Ile brokułów (w gramach)?: ";
  cin >> pizza.ileBrokuly;

  cout << "Czy duża pizza (1 - tak, 0 - nie)?: ";
  cin >> pizza.czyDuza;

  cout << "Cena pizzy: " << pizza.cenaPizzy() << " zł" << endl;
  cout << "Kaloryczność pizzy: " << pizza.ileKalorii() << " kcal" << endl;
  cout << "Czy pizza jest vege?: " << (pizza.czyVege() ? "Tak" : "Nie") << endl;

  return 0;
}