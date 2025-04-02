#include <iostream>
#include <string>
using namespace std;

class Motor
{
  bool czyDwusuw;
  bool czyCross;
  int pojemnosc;
  float ilePaliwa;
  float pojemnoscBaku;

public:
  string kolor;
  bool czyŁyse;
  int licznik1;
  int licznik2;

//  Motor()
//   {
//     pojemnoscBaku = 20;
//     ilePaliwa = 0;
//   }
//   Motor(string a, bool b)
//   {
//     pojemnoscBaku = 20;
//     ilePaliwa = 0;
//     kolor = a;
//     czyŁyse = b;
//   }

  void tankuj(float wlewawanePaliwo)
  {
    if (wlewawanePaliwo < pojemnoscBaku - ilePaliwa)
    {
      ilePaliwa += wlewawanePaliwo;
      cout << "Wlałeś " << wlewawanePaliwo << endl;
    }
    else
    {
      float temp = pojemnoscBaku - ilePaliwa;
      ilePaliwa += temp;
      cout << "Wlałeś " << temp << " bo nie miałeś miejsca w baku\n";
    }
  }

  void setCzyDwusuw(bool a)
  {
    czyDwusuw = a;
  }
  void setCzyCross(bool a)
  {
    czyCross = a;
  }
  void setPojemnosc(int a)
  {
    pojemnosc = a;
  }
  void setilePaliwa(int a)
  {
    ilePaliwa = a;
  }
  void setpojemnoscBaku(int a)
  {
    pojemnoscBaku = a;
  }

  bool getCzyDwusuw()
  {
    return czyDwusuw;
  }
  bool getCzyCross()
  {
    return czyCross;
  }
  int getPojemnosc()
  {
    return pojemnosc;
  }
   float getilePaliwa()
   {
    return ilePaliwa;
   }
   float getpojemnoscBaku()
   {
    return pojemnoscBaku;
   }

  void czyTymPojade()
  {
    if (kolor == "czerwony" && czyDwusuw == true && czyŁyse == false)
    {
      cout << "Mogę Jechać !\n";
    }
    else
    {
      cout << "Nie Mogę Jechać\n";
    }
  }
  void czyNadajeSie(int oczekiwanaPojemnosc)
  {
    if (pojemnosc < oczekiwanaPojemnosc)
    {
      cout << "Nie nadaje się !\n";
    }
    else
    {
      cout << "Nadaje się !\n";
    }
  }      
};
    
  void porownajMotory(Motor motor1, Motor motor2)
  {
    int licznik1=0;
    int licznik2=0;
    if (motor1.getPojemnosc() > motor2.getPojemnosc())
    {
      licznik1++;    
    }
    else
    {
      licznik2++;      
    }
     if (motor1.getCzyDwusuw() > motor2.getCzyDwusuw())
    {
      licznik1++;
    }
    else
    {
      licznik2++; 
    }
     if (motor1.getCzyCross() > motor2.getCzyCross())
    {
      licznik1++;
    }
    else
    {
      licznik2++;
    }
    if (motor1.getilePaliwa() > motor2.getilePaliwa())
    {
      licznik1++;
    }
    else
    {
      licznik2++;
    }
    if (motor1.getpojemnoscBaku() > motor2.getpojemnoscBaku())
    {
      licznik1++;
    }
    else
    {
      licznik2++;
    }
    if(licznik1 > licznik2)
    {
      cout<<"wygrał motor czerwony z punktami "<<licznik1<<endl;;
      
    }
    else if(licznik1 == licznik2)
    {
      cout<<"wygrał motor niebieski z punktami "<<licznik2<<endl;
      
    }
    else
    {
      cout<<"remis"<<licznik1<<"vs"<<licznik2<<endl;

    }
  }



int main()
{

  Motor motor1; 
  Motor motor2;

  motor1.kolor = "czerwony";
  motor1.czyŁyse = false;
  motor1.setCzyDwusuw(true);
  motor1.setCzyCross(true);
  motor1.setPojemnosc(600);
  // motor1.tankuj(15.5);
  motor1.setilePaliwa(15);
  motor1.setpojemnoscBaku(20);

  motor2.kolor = "niebieski";
  motor2.czyŁyse = true;
  motor2.setCzyDwusuw(false);
  motor2.setCzyCross(false);
  motor2.setPojemnosc(400);
  // motor2.tankuj(10);
  motor1.setilePaliwa(13);
  motor1.setpojemnoscBaku(20);

  cout << endl;
  motor1.czyTymPojade();
  motor1.czyNadajeSie(500);

  cout << endl;
  motor2.czyTymPojade();
  motor2.czyNadajeSie(500);

  porownajMotory(motor1,motor2);
  

  return 0;
}