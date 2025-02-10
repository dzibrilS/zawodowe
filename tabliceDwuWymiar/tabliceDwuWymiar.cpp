#include <iostream>
using namespace std;

int main() {
    const int rows = 4;
    const int cols = 3;
    int tablica[rows][cols];

    cout << "Wprowadz wartosci do tablicy " << rows << "x" << cols << ":" << endl;
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            cout << "Podaj wartość dla tablica[" << i << "][" << j << "]: ";
            cin >> tablica[i][j];
        }
    }

   int maxRows=tablica[0][0];
   int maxColums=tablica[0][0];
   for(int i=0; i<=rows; i++)
   {
    if(maxRows<=tablica[0][0])
    {
        maxRows=tablica[i][0];
    }
    for(int j=0; i<=cols;i++)
    {
        if(maxColums<tablica[i][0])
        {
            maxColums=tablica[i][j];
        }
   }
   }
   cout<<"najwieksza wartosc to w wierszach "<<maxRows<<endl;
   cout<<"najwieksza wartosc to w kolumnach "<<maxColums<<endl;
   
}