// #include <iostream>
// using namespace std;

// class date
// {
// public:
//     unsigned short day{}, month{}, year{};
//     date(short DAY, short MONTH, short YEAR)
//     {
//         day = DAY;
//         month = MONTH;
//         year = YEAR;
//     }
//     void print()
//     {
//         cout << " day: " << day << '\n';
//         cout << " month: " << month << '\n';
//         cout << " year: " << year << '\n';
//     }
// };
// class pesel
// {
// private:
//     string PESEL{0};

// public:
//     char sex()
//     {
//         if (PESEL.at(9) % 2 == 0)
//             return 'K';
//         else
//             return 'M';
//     }
//     bool sumaKontrolna()
//     {
//         unsigned int sum{0}, sumModulo, R;
//         sum = PESEL.at(0) + PESEL.at(1) * 2 + PESEL.at(2) * 7 + PESEL.at(3) * 9 + PESEL.at(4) + PESEL.at(5) * 3 + PESEL.at(6) * 7 + PESEL.at(7) * 9 + PESEL.at(8) + PESEL.at(9) * 3;
//         sumModulo = sum % 10;
//         if (sumModulo == 0)
//             R = 0;
//         else
//             R = 10 - sumModulo;
//         if (R == PESEL.at(10))
//             return true;
//         else
//             return false;
//     }
//     date birthDay()
//     {
//         unsigned short day{}, month{}, year{};
//         day = 10 * (static_cast<unsigned short>(PESEL.at(4)) - 48) + (static_cast<unsigned short>(PESEL.at(5)) - 48);
//         if (static_cast<unsigned short>(PESEL.at(2)) - 48 > 1)
//         {
//             month = ((10 * (static_cast<unsigned short>(PESEL.at(2)) - 48)) + (static_cast<unsigned short>(PESEL.at(3)) - 48)) - 20;
//             year = 2000 + (10 * (static_cast<unsigned short>(PESEL.at(0)) - 48) + (static_cast<unsigned short>(PESEL.at(1)) - 48));
//         }
//         else
//         {
//             month = 10 * (static_cast<unsigned short>(PESEL.at(2)) - 48) + (static_cast<unsigned short>(PESEL.at(3)) - 48);
//             year = 1900 + (10 * (static_cast<unsigned short>(PESEL.at(0)) - 48) + (static_cast<unsigned short>(PESEL.at(1)) - 48));
//         }
//         return date(day, month, year);
//     }
//     pesel(string peselInsert)
//     {
//         PESEL = peselInsert;
//     }
// };
// void displayPeselInformation(pesel person)
// {
//     cout << "Pesel information: \n"
//          << "Gender: " << person.sex() << '\n'
//          << "Birthday: \n";
//     person.birthDay().print();
//     cout << "Control Sum: " << (person.sumaKontrolna() ? "true" : "false");
// }
// int main()
// {
//     bool next = true;
//     string n;
//     while (next)
//     {
//         string p = "";
//         bool flag = false;
//         cout << "Enter pesel to display person data:\n";
//         cin >> p;
//         for (char l : p)
//         {
//             isalpha(l) ? : flag = true;
//         }
//         if (p.length() == 11 && flag == true)
//         {
//             pesel person1(p);
//             displayPeselInformation(person1);
//         }
//         else
//             cout << "Please enter valid pesel.";
//         cout << "\nenter \"c\" to continue \n";
//         cin >> n;
//         if(n != "c")
//             next = false;
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

class Ulamek
{
private: // prywatna wlasnosc klasy private jest domyślne i nie trzeba go pisac
    int mianownik;

public: // deklaracja publicznych metod i własności.
    int licznik;
    void setMianownik(int liczba) //publiczny setter
    {
        if (liczba==0)
        {
           cout<<"nie ma takiego mainownika";
           exit(-1);
        }
        else
        mianownik=liczba;
    }
    void getMianownik(int &liczba)//getter przez parametr
    {
        liczba = mianownik;
    }
    int getMianownik() //getter przez wartość
    {
        return mianownik;
    }
};

int main()
{
    int l1, m1, mianownik1;
    cout << "podaj licznik i mianownik pierwszego ulamka\n";
    cin >> l1;
    cin >> m1;
    Ulamek ulamek1;
    ulamek1.licznik = l1;
    // ulamek1.mianownik=m1; tak nie możemy bo wlasność mianownik jest prywatna.
    ulamek1.setMianownik(m1);//używamy więc publicznych getterów i setterów
    ulamek1.getMianownik(mianownik1);
    cout<<ulamek1.licznik<<endl;
    cout<<mianownik1<<endl;
    cout<<ulamek1.getMianownik();
    return 0;
}
bool czyPoprawne(string pesel)
{
  int s;
  s += ((int)pesel[0] - 48) * 1;
  s += ((int)pesel[1] - 48) * 3;
  s += ((int)pesel[2] - 48) * 7;
  s += ((int)pesel[3] - 48) * 9;
  s += ((int)pesel[4] - 48) * 1;
  s += ((int)pesel[5] - 48) * 3;
  s += ((int)pesel[6] - 48) * 7;
  s += ((int)pesel[7] - 48) * 9;
  s += ((int)pesel[8] - 48) * 1;
  s += ((int)pesel[9] - 48) * 3;
  int m = s % 10;
  int r = m == 0 ? 0 : 10 - m;

  if ((int)pesel[10] - 48 == r)
  {
    return true;
  }
  return false;
}