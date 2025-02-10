#include <iostream>
#include <string>

using namespace std;

class Jajo {
 private:
  string kod;
  int typChowu;
  string krajPochodzenia;
  string reszta;
  int ilosc;

 public:
  
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
    typChowu = stoi(kod.substr(0, 1));
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

  void print() {
    cout << "Typ chowu: " << getTypChowuSlownie() << endl;
    cout << "Kraj pochodzenia: " << krajPochodzenia << endl;
    cout << "Reszta: " << reszta << endl;
  }
};

int main() {
  Jajo jajo("0PL21383259");
  jajo.print();

  return 0;
}