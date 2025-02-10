
#include <iostream>
using namespace std;
class Bazowa {
public:
    int dostepna; 

protected:
    int niedostepna; 

private:
    int niedostepna1;

public:
    Bazowa() : dostepna(10), niedostepna(20), niedostepna1(30) {}

 
    int getNiedostepnaINiedziedziczona() const {
        return niedostepna1;
    }
};

class Pochodna : public Bazowa {
public:
    Pochodna() {
        
        niedostepna = 50;
    }

    void pokazWlasnosci() {
       cout << "dostepna: " << dostepna <<endl;  
       cout << "niedostepna: " << niedostepna <<endl; 
        //cout << "niedostepna1: " << niedostepna1 <<endl; 
    }

    void pokazDostepDoPrivate() {
       cout << "niedostepna1 przez getter: " << getNiedostepnaINiedziedziczona() <<endl;
    }
};

int main() {
    Pochodna p;

    p.pokazWlasnosci();
    p.pokazDostepDoPrivate();

    return 0;
}

