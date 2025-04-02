// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     const int maxsize = 100;
//     char imie[maxsize];
//     char dimie[maxsize];
//     cout<<"podaj imie pierwsze "<<endl;
//    cin.get(imie,100);
//    cin.ignore(100,'\n');
//      cout<<"podaj imie drugie "<<endl;
//     cin.get(dimie,100);
//     int dlugosc1 = strlen(imie);
//     int srodek = dlugosc1/2;
//     for(int i =dlugosc1; i<=srodek; i--)
//     {
//         imie[i+ strlen(dimie) +1] = imie[i];
//     }
//     strncpy(imie + srodek,dimie, strlen(dimie));
//     cout<<imie<<endl;

// }

// #include <cstring>
// #include <iostream>

// using namespace std;

// int main() {
//   char imieNazwisko[50];
//   char drugieImie[20];

//   cout << "Podaj imię i nazwisko: ";
//   cin.getline(imieNazwisko, 50);

//   cout << "Podaj drugie imię: ";
//   cin.getline(drugieImie, 20);

//   // Znajdź pozycję spacji w imieniu i nazwisku
//   char* spacja = strchr(imieNazwisko, ' ');

//   // Jeśli nie znaleziono spacji, to znaczy, że podano tylko imię
//   if (spacja == NULL) {
//     strcat(imieNazwisko, " ");
//     strcat(imieNazwisko, drugieImie);
//   } else {
//     // Wstaw drugie imię w środek imienia i nazwiska

//     // Podziel imię i nazwisko na tokeny
//     char* token = strtok(imieNazwisko, " ");

//     // Zmień nazwę zmiennej `imieNazwisko` na `noweImieNazwisko`, aby uniknąć nadpisania oryginalnego ciągu
//     char noweImieNazwisko[50];

//     // Skopiuj pierwszy token do `noweImieNazwisko`
//     strcpy(noweImieNazwisko, token);

//     // Dodaj spację do `noweImieNazwisko`
//     strcat(noweImieNazwisko, " ");

//     // Dodaj drugie imię do `noweImieNazwisko`
//     strcat(noweImieNazwisko, drugieImie);

//     // Dodaj spację do `noweImieNazwisko`
//     strcat(noweImieNazwisko, " ");

//     // Przechodź przez pozostałe tokeny i dodawaj je do `noweImieNazwisko`
//     while (token != NULL) {
//       token = strtok(NULL, " ");
//       if (token != NULL) {
//         strcat(noweImieNazwisko, " ");
//         strcat(noweImieNazwisko, token);
//       }
//     }

//     // Skopiuj `noweImieNazwisko` do `imieNazwisko`
//     strcpy(imieNazwisko, noweImieNazwisko);
//   }

//   // Wyświetl wynik
//   cout << "Imię i nazwisko z drugim imieniem w środku: " << imieNazwisko << endl;

//   return 0;
// }



// #include <cstring>
// #include <iostream>

// using namespace std;

// int main() {
//   char napis1[20] = "Ala ma";
//   char napis2[20] = "dom boba";

//   // Zamień głowę pierwszego napisu z ogonem drugiego napisu

//   // Skopiuj ogon drugiego napisu do zmiennej tymczasowej
//   char tmp[20];
//   strcpy(tmp, napis2);

//   // Skopiuj głowę pierwszego napisu do ogona drugiego napisu
//   strcpy(napis2 + strlen(napis2) - strlen(napis1), napis1);

//   // Skopiuj zmienną tymczasową do głowy pierwszego napisu
//   strcpy(napis1, tmp);

//   // Wyświetl wyniki
//   cout << napis1 << endl;
//   cout << napis2 << endl;

//   return 0;
// }


// #include <iostream>
// #include <cstring>

// int main ()
// {
//   char str[] ="- This, a sample string.";
//   char * pch;
//   printf ("Splitting string \"%s\" into tokens:\n",str);
//   pch = strtok (str," ,.-");
//   while (pch != NULL)
//   {
//     printf ("%s\n",pch);
//     pch = strtok (NULL, " ,.-");
//   }
//   return 0;
// }



// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char wersja1[30];
//     cout << "Podaj marke samochodu:" << endl;
//     cin.get(wersja1, 30);
//     cout << wersja1 << endl;
//     cin.ignore(50, '\n');
//     cout << "Podaj model samochodu:  ";
//     char wersja2[30];
//     cin.get(wersja2, 30);
//     cout << wersja2 << endl;
//     cin.ignore(50, '\n');
//     char wersja3[30];
//     cout << "Podaj rok produkcji samochodu:" << endl;
//     cin.get(wersja3, 30);
//     cout << wersja3 << endl;
//     cin.ignore(50, '\n');

//     char napis1[30]{"programowanie"};
//     char napis2[30]{"zorientowane"};
//     char napis3[30]{"obiektowo"};
//     strcat(napis1, " ");
//     strcat(napis1, napis2);
//     strcat(napis1, " ");
//     strcat(napis1, napis3);
//     cout << "łańcuch: " << napis1 << endl;

//     char znak1[30]{"Java"};
//     char znak2[30]{"JavaScript"};
//     cout << "Czy napisy są identyczne?: " << endl;
//     if (strcmp(znak1, znak2) == 0)
//     {
//         cout << "oj tak" << endl;
//     }
//     else
//     {
//         cout << "oj nie" << endl;
//     }
//     char sprawdz1[30]{"Runtime"};
//     char sprawdz2[30]{"Java Runtime Environment:"};
//     if (strstr(sprawdz2, sprawdz1) == nullptr)
//     {
//         cout << "oj nie" << endl;
//     }
//     else
//     {
//         cout << "Napis \"Runtime\""
//              << " stanowi podłańcuch łańcucha " << sprawdz2
//              << " od pozycji " << strstr(sprawdz2, sprawdz1) << endl;
//     }

//     char dwa[30];
//     cout << "podaj nazwę miejscowości: " << endl;
//     cin.get(dwa, 30);
//     cout << dwa << endl;
//     cin.ignore(50, '\n');

//     char zastap1[30]{"C++, JavaScript, C#"};
//     char zastap2[30] = {"C++ "};
//     char zastap3[30] = {" C#"};
//     strstr(zastap1, "Java");

//     strcat(zastap2,"Java");
//     cout<<strcat(zastap2,"C#")<<endl;
//     cout << "JavaScript zastąpione: " << zastap2 << endl;

//     return 0;
// }

#include <iostream>
#include <math.h>
int main()
{
    std::cout << "Rodzaje zaokragleń:\n";
    std::cout << "Podaj liczbe zmiennoprzecinkowa:\n";
    long double n;
    std::cin >> n;
    std::cout << "-ceil(argument) Zwraca najmniejszą wartość całkowitą nie mniejszą od wartości argumentu — zaokrąglenie w górę \n";
    std::cout << "ceil: " << ceil(n) << '\n';
    std::cout << "-floor(argument) Zwraca największą wartość całkowitą, która jest nie większa od wartości argumentu — zaokrąglenie w dół \n";
    std::cout << "floor: " << floor(n) << '\n';
    std::cout << "-trunc(argument) Zwraca najbliższą wartość całkowitą, która jest nie większa od wartości argumentu — obcięcie części ułamkowej\n";
    std::cout << "trunc: " << trunc(n) << '\n';
    std::cout << "-round(argument) Zwraca wartość całkowitą, której wartość jest najbliższa wartości argumentu — zaokrąglenie \n";
    std::cout << "round: " << round(n) << '\n';
}