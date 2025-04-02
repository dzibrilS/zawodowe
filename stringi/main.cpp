#include <iostream>
#include <string>
using namespace std;

bool sprawdzPodlanuch(const string& lancuch, const string& podlancuch) {
    return lancuch.find(podlancuch) != string::npos;
}
int main()
{
    // zad 2
    // string napis1 = "programowanie ";
    // string napis2 = "zorientowane ";
    // string napis3 = "obiektowo";
    // cout<<napis1.length()<<endl;
    // cout<<napis1.replace(napis1.length(),0,napis2)<<endl;
    // cout<<napis1.replace(napis1.length(),0,napis3)<<endl;

    //zad3
    // string napis1="java";
    // string napis2="javascript";
    // cout<<napis1.compare(napis2)<<endl;
   
       string lancuch, podlancuch;

    cout << "Podaj pierwszy lancuch: ";
    getline(cin, lancuch);

    cout << "Podaj drugi lancuch do sprawdzenia: ";
    getline(cin, podlancuch);

    if (sprawdzPodlanuch(lancuch, podlancuch)) {
        cout << "Drugi lancuch jest podlancuchem pierwszego." << endl;
    } else {
        cout << "Drugi lancuch nie jest podlancuchem pierwszego." << endl;
    }
   //zad 5
    // string miejscowosc;
    // cout<<"podaj nazwe miejscowości"<<endl;
    // getline(cin,miejscowosc);
    // cout<<miejscowosc<<endl;

 //zad 6   
//     string napis="java";
//    cout<<napis<<endl;
//     cout<<napis.replace(0,napis.length(),"javascript")<<endl;


// zad 7
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
   
//     string napis1,napis2;
//     cout<<"podaj napis dwuczlonowy";
//     cout<<"podaj napis dwuczlonowy";
//     getline(cin,napis2);
//     string ogon2=napis2.substr(napis2.find(" ")+1,napis2.length()-napis2.find(" "));
//     string glowa1=napis1.substr(0,napis1.find(" "));
//     napis1.replace(0,napis1.find(" "),ogon2);
//     napis2.replace(napis1.find(" ")+1,napis1.length()-napis1.find(" ")+1,glowa1);   
//     cout << napis1<< endl;
//     cout << napis2<< endl;
//     return 0;  

//#include <iostream>
// #include <cstring>
// #include<limits>
// using namespace std;
// int main() {

// char wersja1[30];
// cout << "Podaj marke samochodu:"<<endl;
// cin.get(wersja1,30);
// cout << wersja1 << endl;
// cin.ignore( 50,'\n');
// cout << "Podaj model samochodu:  ";
// char wersja2[30];
// cin.get(wersja2,30);
// cout << wersja2 << endl;
// cin.ignore( 50,'\n');
// char wersja3[30];
// cout << "Podaj rok produkcji samochodu:"<<endl;
// cin.get(wersja3,30);
// cout << wersja3 << endl;
// cin.ignore( 50,'\n');

// char napis1[30] {"programowanie"};
// char napis2[30] {"zorientowane"};
// char napis3[30] {"obiektowo"};
// strcat(napis1, " ");
// strcat(napis1, napis2);
// strcat(napis1, " ");
// strcat(napis1, napis3);
// cout << "łańcuch: " << napis1 << endl;

// char znak1[30] {"Java"};
// char znak2[30] {"JavaScript"};
// cout << "Czy napisy są identyczne?: " << strcmp(znak1, znak2) << endl;

// char sprawdz1[30] {"Runtime"};
// char sprawdz2[30] {"Java Runtime Environment:"};
// cout << "Napis \"Runtime\"" << " stanowi podłańcuch łańcucha " << sprawdz2
// << " od pozycji " << strstr(sprawdz2, sprawdz1) << endl;

// char dwa[30];
// cout << "podaj nazwę miejscowości: "<<endl;
// cin.get(dwa,30);
// cout << dwa << endl;
// cin.ignore( 50,'\n');

// char zastap1[30] {"C++"};
// char zastap2[30] {"JavaScript"};
// char zastap3[30] {"C#"};
// strcpy(zastap2, "Java");
// cout << "JavaScript zastąpione: " << zastap2 << endl;

// return 0;
// }
}
  
                // ascii
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
// string s1;
// getline(cin,s1);
// string s2=s1;
// int i1 = sizeof(s1);
//     for (int i = 0; i < i1; i++) 
//     {
//         if (s1[i] >= 97 && s1[i] <= 122) {
//             s2[i] = s1[i] - 32;
//         }
//     }
//     for (int l = 0; l < i1; l++) 
//     {
//         if (s1[l] >= 65 && s1[l] <= 90) {
//             s2[l] = s1[l] + 32;
//         }
//     }
// cout << s2;
// return 0;
// }
