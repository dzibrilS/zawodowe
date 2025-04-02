#include <iostream>
#include <cstring>
using namespace std;
int main() {
// Deklaracja i inicjalizacja C-napisów napis1 i napis2:
char napis1[20] = "Community";
char napis2[20] = "Community";
// Określenie długości napisów:
cout << "Długość pierwszego napisu (w znakach): " << strlen(napis1) << endl;//9
cout << "Długość drugiego napisu: " << strlen(napis2) << endl;//9
/* UWAGA
* Funkcja strlen() zwraca liczbę znaków w łańcuchu, nie uwzględniając znaku specjalnego '\0' na końcu łańcucha.
*/
// Określenie rozmiaru napisów:
cout << "Rozmiar pierwszego napisu (w bajtach): " << sizeof(napis1) << endl;//20
cout << "Rozmiar drugiego napisu (w bajtach): " << sizeof(napis2) << endl;//20
cout << "Rozmiar zmiennej char (w bajtach): " << sizeof(char) << endl;//1
// Porównanie C-napisu napis1 z C-napisem napis2:
cout << "Czy napisy są identyczne?: " << strcmp(napis1, napis2) << endl;//-1 jak są różne i 0 jak sa równe
// Skopiowanie literałów łańcuchowych do zmiennych napis1 i napis2:
strcpy(napis1, "Visual Studio");
cout << "napis1: " << napis1 << endl;
strcpy(napis2, napis1);
cout << "napis2: " << napis2 << endl;
// Dodanie literału " ", a następnie C-napisu napis2 na końcu C-napisu napis1:
strcat(napis1, " ");
strcat(napis1, napis2);
cout << "napis1: " << napis1 << endl;
// Sprawdzenie, czy literał "Studio" jest podłańcuchem napisu napis1:
cout << "Napis \"Studio\"" << " stanowi podłańcuch łańcucha " << napis1
<< " od pozycji " << strstr(napis1, "Studio") << endl;//*strstr(napis1, "Studio") ma wartość==S
// Sprawdzenie, czy znak 'm' jest zawarty w napisie napis1:
cout << "Znak 'm' jest zawarty w łańcuchu " << napis1
<< " od pozycji " << strchr(napis1, 'u') << endl;

if (strchr(napis1,'b')==nullptr)//jeżeli literka (napis) nie występuje w badanym stringu to funkcja zwraca nulptr
{
   cout<<"trafiony";
}

return 0;
}