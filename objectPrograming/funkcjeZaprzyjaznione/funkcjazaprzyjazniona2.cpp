#include <iostream>
#include <cmath>
using namespace std;

class Dane {
private:
    double Radius, Height;

public:
   void setRadius(double input)
    {
        radius = input;
    }
    void setHeight(double input)
    {
        height = input;
    }

    double getRadius()
    {
        return radius;
    }
    double getHeight()
    {
        return height;
    }
    friend class Cylinder;  
};

class Cylinder {
public:
   
    double volume(const Dane& dane) const {
        return M_PI * pow(dane.getRadius(), 2) * dane.getHeight();
    }
};

class Cone {
public:
    
    double volume(const Dane& dane) const {
        return (M_PI * pow(dane.getRadius(), 2) * dane.getHeight()) / 3;
    }
};

int main() {
   
    Dane dane(5.0, 10.0);

    // Tworzenie obiektów klas Cylinder i Cone
    Cylinder cylinder;
    Cone cone;

    // Obliczanie objętości
    cout << "Objętość cylindra: " << cylinder.volume(dane) << endl;
    cout << "Objętość stożka: " << cone.volume(dane) << endl;

    return 0;
}
