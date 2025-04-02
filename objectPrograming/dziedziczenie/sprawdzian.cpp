#include <iostream>
#include <string>
using namespace std;

// Grupa A :klasa bazowa mają własność która się dziedziczy, ale nie są dostępne w funkcji main przez operator wyłuskania, oraz wlasność private..

// Klasa pochodna ma mieć  odziedziczone własności chronione oraz metodę display.

// W funkcji main wyedytuj wszystkie własności
class Bazowa {
private:
    int publiczna;  

protected:
    int niedostepna;  
public:
   
    Bazowa(int niedoste, int pub) {
        niedostepna = niedoste;
        publiczna = pub;
    }

   
    void setChroniona(int niedoste) {
        niedostepna = niedoste;
    }

    int getChroniona() {
        return niedostepna;
    }

    void setPubliczna(int pub) {
        publiczna = pub;
    }

    int getPubliczna() {
        return publiczna;
    }
};


class Pochodna : protected Bazowa {
public:
  
    Pochodna(int niedoste, int pub) : Bazowa(niedoste, pub) {}

    void setWlasnosc(int niedoste) {
        setChroniona(niedoste);
    }

    int getWlasnosc() {
        return getChroniona();
    }

  
    void setWlasnosc1(int pub) {
        setPubliczna(pub);
    }

    int getWlasnosc2() {
        return getPubliczna();
    }

    
    void pokazWlasciwosci() {
        cout << "Publiczna: " << getPubliczna() << endl;
        cout << "Niedostępna: " << getChroniona() << endl;
    }
};

int main() {
   
    Pochodna obiekt(8, 5);

    
    obiekt.setWlasnosc(24); 
    obiekt.setWlasnosc1(48); 

 
    obiekt.pokazWlasciwosci();

    cout << endl;

    
    obiekt.setWlasnosc(100);   
    obiekt.setWlasnosc1(200); 


    cout << "Niedostępna: " << obiekt.getWlasnosc() << endl;
    cout << "Publiczna: " << obiekt.getWlasnosc2() << endl;

    return 0;
}