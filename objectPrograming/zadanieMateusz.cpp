// #include <iostream>
// #include <string>

// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int i = 0;
//     while (true) {
//         i++;
//         // Generate the next number in the sequence
//         int jajo = i + i * i;

//         // Check if Jajo is prime
//         if (isPrime(jajo)) {
//             // Print the number
//             std::cout << "Found a prime: " << jajo << std::endl;
//             break;
//         }
//     }
//     return 0;
// }
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
  // Konstruktor
  Jajo(string kod) {
    setKod(kod);
  }

  // Settery
  void setTypChowu(int typChowu) {
    this->typChowu = typChowu;
  }

  void setKrajPochodzenia(string krajPochodzenia) {
    this->krajPochodzenia = krajPochodzenia;
  }

  void setReszta(string reszta) {
    this->reszta = reszta;
  }

  void setKod(string kod) {
    this->kod = kod;
    this->typChowu = stoi(kod.substr(0, 1));
    this->krajPochodzenia = kod.substr(1, 2);
    this->reszta = kod.substr(3);
  }

  // Gettery
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
      case 1:
        return "na wolnym wybiegu";
      case 2:
        return "ściółkowy";
      case 3:
        return "klatkowy";
      default:
        return "nieznany";
    }
  }

  // Metody
  void print() {
    cout << "Kod: " << kod << endl;
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