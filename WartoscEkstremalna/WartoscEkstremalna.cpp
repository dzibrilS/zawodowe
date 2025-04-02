#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  short i, max,min;
  int tablica[5];
  for (i = 0; i < 5; i++) // wypełnianie tablicy losowymi cyframi.
  {
    srand(time(NULL) * (i + 1)); // generujemy nowy zestaw liczb losowych
    tablica[i] = rand() % 10;    // wstawiamy do i-tego elementu losową cyfrę
  }
  for (i = 0; i < 5; i++) // wypisujemy zawartość wszystkich elementów tablicy z przecinkami.
  {
    cout << tablica[i] << ", ";
  }
  max = tablica[0];
  min=tablica[0];
  for (i = 0; i < 5; i++) // wyszukujemy ekstremalne wartości z tablicy.
  {
    if (tablica[i]>max)
    {
      max=tablica[i];
    }
     if (tablica[i]<min)
    {
      min=tablica[i];
    }
   
  }
  cout<<endl<<"najwiekszy element to "<<max;
  cout<<endl<<"najmniejszy element to "<<min;
  return 0;
}