#include <iostream>
#include <cstdlib>
using namespace std;


void selectionSort(int tablica[], int rozmiarTablicy)
{
    for (int i = rozmiarTablicy; i > 0; i--)
    {
        int max = tablica[0], index=0, temp;

        for (int j = 0; j < rozmiarTablicy - i; j++) // wyszukujemy ekstremalne wartości z tablicy.
        {

            if (tablica[j] > max)
            {
                max = tablica[j];
                index = j;
                cout <<index<<endl;
            }
        }
        
        temp = tablica[rozmiarTablicy - i];
        tablica[rozmiarTablicy - i] = max;
        tablica[index] = temp;
    }
}