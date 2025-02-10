#include <iostream>
#include <string>
#define PI 3.14

using namespace std;

void initMenuBox();
void menuDecision(int);
double poleKola(double);
double poleKwadratu(double);
double poleProstokata(double, double);
double poleTrojkata(double, double);
bool isRight(string);
bool isRight();
int main()
{
    char zn = 'T';
    int wybor;
    
    do
    {     
       system("cls"); //cls = clear screen
       initMenuBox();               
       
       while(!(cin >> wybor))
       {
         //cout << "stan przed: " << cin.rdstate() << endl;
         cin.clear();
        // cout << "stan po: " << cin.rdstate() << endl;
         cin.ignore(1024, '\n');
         system("cls");
         initMenuBox();
         cout << "Wpisales niepoprawny znak, ponow swa operacje";
       }
       
       cin.ignore(1024, '\n');
       
       menuDecision(wybor);
       
       do
       {
          cout <<"Czy chcesz kontynuowac program? (T/N)" << endl;
          cin >> zn; //bufor jest to TYMCZASOWA ZMIENNA, a dok�adniej tablica, asdft
          cin.ignore(1024, '\n');
       }while (zn != 't' && zn != 'T' && zn != 'n' && zn != 'N');
       
       
    }while(zn == 't' || zn == 'T');
    
    system("pause");
}
void initMenuBox()
{
     cout << "Wybierz opcje: " << endl;
     cout << "1. Pole Kola " << endl;
     cout << "2. Pole Kwadratu " << endl;
     cout << "3. Pole Prostokata " << endl;
     cout << "4. Pole Trojkata " << endl;
}
void menuDecision(int wybor)
{
     system("cls"); //cls = clear screen
     initMenuBox();     
     double a, b, h, r;
     switch(wybor)
     {
         case 1:
              do { cout <<"Podaj promien: " << endl; cin >> r;} while (!isRight());
              poleKola(r);
              break;
         case 2:
              cout <<"Podaj bok kwadratu: " << endl;
              do { cin >> a;} while (!isRight("Zle! Podaj bok ponownie:\n"));
              poleKwadratu(a);
              break;
         case 3:
              cout << "Podaj szer. oraz wys. prostokata: " << endl;
              do { cin >> a >> b;} while (!isRight("Zle, podales jedna z danych nieprawidlowo! Podaj dane ponownie:\n"));
              poleProstokata(a, b);
              break;
         case 4:
              cout << "Podaj podstawe oraz wysokosc trojkata: " << endl;
              do { cin >> a >> h;} while (!isRight("Zle, podales jedna z danych nieprawidlowo! Podaj dane ponownie:\n"));
              poleTrojkata(a, h);
              break; 
         default:
              cout << "Na pewno nie wybrales odpowiedniej opcji z menu" << endl;                                         
     }
}
double poleKola(double r)
{
       double wynik = PI * r * r;
       
       cout << "Pole kola o promienu: " << r << " wynosi " << wynik << endl;
       
       return wynik;
}
double poleKwadratu(double a)
{
       double wynik = a * a;
       
       cout << "Pole kwadratu o boku: " << a << " wynosi " << wynik << endl;
       
       return wynik;
}
double poleProstokata(double a, double b)
{
       double wynik = a * b;
       
       cout << "Pole prostokata o szer. " << a << " i wys. : " << b << " wynosi " << wynik << endl;
       
       return wynik;
}
double poleTrojkata(double a, double h)
{
       double wynik = 0.5 * a * h;
       
       cout << "Pole trojkata o podstawie " << a << " i wys. : " << h << " wynosi " << wynik << endl;
       
       return wynik;
}

bool isRight(string error_msg)
{
     if (cin.rdstate())
     {
        cin.clear();
        cin.ignore(1024, '\n');
        
        system("cls");
        initMenuBox();
        cout << error_msg;
        return false;
     } 
     
     return true;  
}
bool isRight()
{
    if (cin.rdstate())
     {
        cin.clear();
        cin.ignore(1024, '\n');
        
        system("cls");
        initMenuBox();

        return false;
     } 
     
     return true;       
}
