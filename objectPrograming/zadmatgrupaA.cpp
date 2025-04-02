#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Ksiazka
{
private:
    
    int static liczbaKsiazek;
    string tytul;
    string autor;
    int rokWydania;

public:
   
      string getTytul() {
        return tytul;
    }

     void setTytul(string tytul) {
        tytul = tytul;
    }

     string getAutor() {
        return autor;
    }

     void setAutor(string autor) {
        autor = autor;
    }

     int getRokWydania() {
        return rokWydania;
    }

     void setRokWydania(int rokWydania) {
        rokWydania = rokWydania;
    }
    void wypiszInformacje() {
       cout<<("Tytuł: " << tytul);
       cout<<("Autor: " << autor);
       cout<<("Rok wydania: "<< rokWydania);
    }
   Ksiazka(string tytul, string autor, int rokWydania) {
    this->tytul = tytul;  // Poprawne przypisanie
    this->autor = autor;   // Poprawne przypisanie
    this->rokWydania = rokWydania;  // Poprawne przypisanie
    liczbaKsiazek++;
}
    // Ksiazka(Ksiazka innaKsiążka) {
    //     tytul = innaKsiążka.tytul;
    //     autor = innaKsiążka.autor;
    //     rokWydania = innaKsiążka.rokWydania;
    //     liczbaKsiazek++;
    // }

      Ksiazka() {
        cout<<("Nieznany tytul", "Nieznany autor", 0);
    }

    Ksiazka::Ksiazka():
        tytul {" "},
        autor {" "},
        rokWydania {0}
        
    {}
    Ksiazka::Ksiazka(string tyt, string aut, int rok) : tytul{tyt}, autor{aut}, rokWydania{rok} {}


   


    //  Ksiazka::Ksiazka(string tytul, string autor, int rokWydania) {
    //     tytul = tytul;
    //     autor = autor;
    //     rokWydania = rokWydania;
    //     liczbaKsiazek++;
    // }

    
    //  Ksiazka::Ksiazka(Ksiazka innaKsiążka) {
    //     tytul = innaKsiążka.tytul;
    //     autor = innaKsiążka.autor;
    //     rokWydania = innaKsiążka.rokWydania;
    //     liczbaKsiazek++;
    // }

    //  Ksiazka::Ksiazka() {
    //     cout<<("Nieznany tytul", "Nieznany autor", 0);
    // }

    // Ksiazka::Ksiazka():
    //     tytul {" "},
    //     autor {" "},
    //     rokWydania {0}
        
    // {}
    // Ksiazka::Ksiazka(string tyt, string aut, int rok):
    //     tytul {tyt},
    //     autor {aut},
    //     rokWydania {rok}
       
    // {}

    // Ksiazka::wypiszInformacje() {
    //    cout<<("Tytuł: " + tytul);
    //    cout<<("Autor: " + autor);
    //    cout<<("Rok wydania: " + rokWydania);
    // }

    
};
void wypiszInformacje() {
       cout<<("Tytuł: " + tytul);
       cout<<("Autor: " + autor);
       cout<<("Rok wydania: " + rokWydania);
    }

     static int getLiczbaKsiazek() {
        return liczbaKsiazek;
    }



    
 

   


int main()
{
    Ksiazka ksiazka1{};


}































// () : x{0}, y(0)
//     {
//         liczbaPunktow++;
//         cout << "bezparametrowy";
//     } // konstruktor bezparametryczny

//     Ksiazka
// (float xVal, float yVal) : Ksiazka
// ()
//     {
//         x = xVal;
//         y = yVal;
//         cout << "parametryczny";
//     } // konstruktor parametryczny

//     Ksiazka
// (const Ksiazka
//  &copied) : x{copied.x}, y{copied.y} {liczbaPunktow++;} // konstruktor kopiujący

//     void odbijX()
//     { // odbicie względem X
//         y = -y;
//     }
//     void odbijY()
//     { // odbicię względem Y
//         x = -x;
//     }

//     void przesun(float dx, float dy)
//     { // przesunięcie
//         x += dx;
//         y += dy;
//     }

//     float odlegloscOdProstej(float A, float B, float C)
//     { // dystans od prostej
//         return std::fabs(A * x + B * y + C) / std::sqrt(A * A + B * B);
//     }

//     void symetriaPunkt(float px, float py)
//     { // odbicie lustrzane względem podanych koordynat
//         x = 2 * px - x;
//         y = 2 * py - y;
//     }

//     void wyswietl()
//     { // wyświetlanei
//         std::cout << "Ksiazka
//     (" << x << ", " << y << ")" << std::endl;
//     }

//     float getX() { return x; }; // getters
//     float getY() { return y; };
//     static int getLiczbaPunktow() { return liczbaPunktow; };
//     // obliczanie odległości
//     friend float odlegloscPunktow(const Ksiazka
//  &p1, const Ksiazka
//  &p2);
// };
// float odlegloscPunktow(const Ksiazka &p1, const Ksiazka &p2)
// { // distance between Ksiazkas
//     return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
// }
// // int Ksiazka::liczbaPunktow = 0;
// int main()
// {
//     // ustalenie wartości p1
//     Ksiazka
//  p1 {3, 4};
//     p1.wyswietl(); // (1) p1
//     // konstruktor kopiujący w użyciu niejawnym. Jawnie wygląda tak: Ksiazka
//  p2(p1)
//     Ksiazka
//  p2 = p1;
//     p2.wyswietl(); // (2) p2 przyjmuje wartość p1
//     // metody klasy
//     p1.przesun(1, -2);
//     p1.wyswietl(); // (3) p1 przesunięty o podane wartości
//     p1.odbijX();
//     p1.wyswietl(); // (4) p1 odbity względem X
//     p1.odbijY();
//     p1.wyswietl(); // (5) p1 odbity względem Y
//     std::cout << "Dystans P1 od prostej: " << p1.odlegloscOdProstej(2, 3, 1) << std::endl;
//     p1.symetriaPunkt(1, 1);
//     p1.wyswietl(); // (6) p1 moved symmetrically to provided coordinate
//     // dystans między p1 a p2
//     std::cout << "Dystans między P1 a P2: " << odlegloscPunktow(p1, p2) << std::endl
//               << Ksiazka
//             ::getLiczbaPunktow();
//     return 0;
// }