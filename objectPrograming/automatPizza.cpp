// #include <iostream>

// using namespace std;

// class AutomatDoPizzy {
//  public:

//   AutomatDoPizzy(float cenaSera, float cenaSzynki, float cenaBrokuly, float cenaCiastaMalego){
//       cenaSera(cenaSera),cenaSzynki(cenaSzynki),cenaBrokuly(cenaBrokuly),cenaCiastaMalego(cenaCiastaMalego)};


//   float cenaPizzy() {
//     float cena = cenaCiastaMalego;  
//     if (czyDuza) {
//       cena *= 1.5; 
//     }
//     cena += ileSera * cenaSera;
//     cena += ileSzynki * cenaSzynki;
//     cena += ileBrokuly * cenaBrokuly;
//     return cena;
//   }

//   int ileKalorii() {
//     int kalorie = 200; 
//     if (czyDuza) {
//       kalorie *= 1.5; 
//     }
//     kalorie += ileSera * 402;   
//     kalorie += ileSzynki * 145;  
//     kalorie += ileBrokuly * 34;   
//     return kalorie;
//   }

//   bool czyVege() {
//     return ileSzynki == 0;
//   }

 
//   int ileSera = 0;
//   int ileSzynki = 0;
//   int ileBrokuly = 0;
//   bool czyDuza = false;

//  private:
 
//   float cenaSera;
//   float cenaSzynki;
//   float cenaBrokuly;
//   float cenaCiastaMalego;
// };

// int main() {

//   AutomatDoPizzy automat(2.5, 3.0, 1.5, 10.0); 


//   automat.ileSera = 2;
//   automat.ileSzynki = 1;
//   automat.ileBrokuly = 1;
//   automat.czyDuza = true;

//   cout << "Cena pizzy: " << automat.cenaPizzy() << " zł" << endl;
//   cout << "Kaloryczność: " << automat.ileKalorii() << " kcal" << endl;
//   cout << "Czy pizza jest wegetariańska? " << (automat.czyVege() ? "Tak" : "Nie") << endl;

//   return 0;
// }

#include <iostream>

using namespace std;

class AutomatDoPizzy {
 public:
  int ileSera;
  int ileSzynki;
  int ileBrokuly;
  bool czyDuza;

  float cenaSera = 2.5; 
  float cenaSzynki = 3.0;
  float cenaBrokuly = 1.5; 
  float cenaCiastaMalego = 5.0;
  float cenaCiastaDuzego = 10.0;

  float cenaPizzy() {
    float cena = czyDuza ? cenaCiastaDuzego : cenaCiastaMalego;
    cena += ileSera * cenaSera / 100;
    cena += ileSzynki * cenaSzynki / 100;
    cena += ileBrokuly * cenaBrokuly / 100;
    return cena;
  }

  int ileKalorii() {
    int kalorie = czyDuza ? 350 : 250; // przykładowa kaloryczność ciasta
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