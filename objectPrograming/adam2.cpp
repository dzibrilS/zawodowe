#include <iostream>
#include <cmath>

using namespace std;

class Punkt {
private:
    float x;
    float y;

public:
    
    Punkt() : x(0), y(0) {}

    Punkt(float x, float y) : x(x), y(y) {}

    
    Punkt(const Punkt& other) : x(other.x), y(other.y) {}

    void odbijX() {
        y = -y;
    }

  
    void odbijY() {
        x = -x;
    }

    
    void przesun(int dx, int dy) {
        x += dx;
        y += dy;
    }

  
    float odlegloscOdProstej(float A, float B, float C) {
        return abs(A * x + B * y + C) / sqrt(A * A + B * B);
    }


   Punkt symetriaPunkt(float x2, float y2) {
        return Punkt((x + x2) / 2, (y + y2) / 2);
    }

    
    // friend ostream& operator<<(ostream& out, const Punkt& punkt) {
    //     out << "(" << punkt.x << ", " << punkt.y << ")";
    //     return out;
    // }
};


// float odlegloscPunktow(const Punkt& p1, const Punkt& p2) {
//     return sqrt(pow(p1.x - p2));
    int main() {
    Punkt p1(2, 3);
    Punkt p2(5, 7);

    cout << "Punkt 1: ";
    p1.wyswietl();
    cout << "Punkt 2: ";
    p2.wyswietl();

    cout << "Odległość między punktami: " << odlegloscPunktow(p1, p2) << endl;

   


    p1.odbijX();
    cout << "Punkt 1 po odbiciu względem osi X: ";
    p1.wyswietl();

    p2.przesun(2, -1);
}