// #include <iostream>
// #include <string>
// using namespace std;
// class drzewo
// {
//     bool czyTwarde,czyIglaste;
//     float obwodPnia;
//     string nazwa;
//     public:
//     drzewo{};
//     drzewo{bool,bool,float,string};

//     drzewo::drzewo()
//     {

//     }
// }; 

// int main()
// {
   
    
// }




#include <iostream>
#include <string>
using namespace std;
class Drzewo {
    bool czyIglaste;
  bool czyTwarde;
  double obwodPnia;
  string nazwa;
public:
  Drzewo(bool adam, bool jaca, double obwod):
    czyIglaste {adam},
    czyTwarde {jaca},
    // double{obwod};
    // // nazwa(nazwaa);
    // cout<<"czy iglase"<<adam<<"czy twarde"<<jaca<<" "<<obwod<<endl;

       


  Drzewo() : czyIglaste(false), czyTwarde(false), obwodPnia(0.0), nazwa("Nieznane") {}

 
  Drzewo(bool iglaste, bool twarde, double obwod, const string& nazwa) :
    czyIglaste(iglaste), czyTwarde(twarde), obwodPnia(obwod), nazwa(nazwa) {}

  
  Drzewo(const Drzewo& wzor) :
    czyIglaste(wzor.czyIglaste), czyTwarde(wzor.czyTwarde),
    obwodPnia(wzor.obwodPnia), nazwa(wzor.nazwa) {}

  
  void wyswietl() {
    cout << "Nazwa: " << nazwa << endl;
    cout << "Iglaste: " << (czyIglaste ? "Tak" : "Nie") << endl;
    cout << "Twarde: " << (czyTwarde ? "Tak" : "Nie") << endl;
    cout << "Obwód pnia: " << obwodPnia << endl;
    cout << endl;
  }
  
};

int main() {
  
  Drzewo drzewo1;
  drzewo1.wyswietl();

  
  Drzewo drzewo2(true, false, 1.5, "Sosna");
  drzewo2.wyswietl();

  
  Drzewo drzewo3(drzewo2);
  drzewo3.wyswietl();

 
  Drzewo drzewo4 {false, true, 2.0, "Dąb"};
  drzewo4.wyswietl();

  return 0;
}


