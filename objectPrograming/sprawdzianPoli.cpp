#include <iostream>
#include <string>
using namespace std;


class Shape {
  
public:
   
    virtual void displayVolume()=0;
   
};


class Rectangle : public Shape {

  double width , height;
public:
     Rectangle(double w , double h) 
     {
        width = w;
        height = h;
     }
    void displayVolume()
    {
        double area = width * height;
        cout<<area<<endl;
    }
    
};

class Circle : public Shape
{
    public :
    double radius;
    Circle(double r)
    {
        radius = r;
    }
    void displayVolume()
    {
        double area = 3.14 * radius  * radius;
        cout<<area<<endl;
    }

};

int main() {
   
    Shape *pola;
    pola = new Rectangle(5,10);
    pola ->displayVolume();
    delete pola;
    pola = new Circle(3);
    pola ->displayVolume();
    delete pola;
   
    return 0;
}