#include <iostream>
#include <string>
using namespace std;
//w klasie bazowej jedna wlasnosc ma byc dostpena w programie bezposrednio a druga nie ale ma byc dostepna
// w klasie pochodnej poprzez nazwe w klasie pochodnej oddiedziczone maja byc protected wyedytuj wszystkie odziedziczone w programie głównym
class Bazowa {
    protected:
    int niedostepna; 
public:
    int publiczna; 

    void setChroniona(int niedoste)
    {
       niedostepna = niedoste;
    }
    int getChroniona()
    {
        return niedostepna;
    }
     
};

class Pochodna : protected Bazowa {
public:
    
   
     Pochodna(int pub, int niedoste) {
        publiczna = pub; 
        niedostepna = niedoste; 
    }
   
     void setWlasnosc(int niedoste)
    {
        setChroniona(niedoste);
    }
    int getWlasnosc()
    {
        return getChroniona();
    }
     void pokazWlasciwosci() {
        cout << "Publiczna: " << publiczna << endl;
        cout << "Niedostępna: " << niedostepna << endl;
    }
};


int main() {
    Pochodna obiekt(10, 5);

    // Używanie metod do ustawiania i pobierania wartości
    obiekt.setWlasnosc(8);

    // Wywołanie funkcji do wyświetlenia właściwości
    obiekt.pokazWlasciwosci();

    cout << endl;

    // Użycie metod do pobierania wartości
    // cout << obiekt.getChroniona() << endl;
    cout << obiekt.getWlasnosc() << endl;
}

