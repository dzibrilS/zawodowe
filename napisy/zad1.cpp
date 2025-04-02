#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char napis1[20];
    char napis2[20];
cout<<"podaj name"<<endl;
cin.getline(napis1,20);
cout<<"podaj surname"<<endl;
cin.getline(napis2,20);

if (strchr(napis1,'b')||strchr(napis2,'b'))//jeżeli literka (napis) nie występuje w badanym stringu to funkcja zwraca nulptr
{
   cout<<"trafiony"<<endl;
}
else{
    cout<<"ni ma"<<endl;
}

cout << "Długość pierwszego napisu (w znakach): " << strlen(napis1) << endl;
cout << "Długość drugiego napisu: " << strlen(napis2) << endl;


}