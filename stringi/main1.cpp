#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;


int main()
{

    // string napis;
    // cout<<"podaj 3 czlonowa nazwe"<<endl;
    // getline(cin,napis);
    // cout<<napis<<endl;
    // string ogon2=napis.substr(napis.find(" ")+1,napis.length()-napis.find(" "));
    // napis.replace(0,napis.find(" "),"trzy");
    // napis.replace(napis.find(" "),napis.length(),"jeden");
    // cout << napis<< endl;

      char lancuch[] = "Przykladowy tekst";
      char lancuch1[] = "ELOOOOO";
    
    for (int i = 0; i < strlen(lancuch); i++) {
        lancuch[i] = toupper(lancuch[i]);
    }
    for (int i = 0; i < strlen(lancuch1); i++) {
        lancuch1[i] = tolower(lancuch1[i]);
    }

    cout << "Lancuch po zmianie: " << lancuch <<endl;
    cout << "Lancuch po zmianie 1: " << lancuch1 <<endl;
    return 0;
}
  
       