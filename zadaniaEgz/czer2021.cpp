#include <iostream>
#include <cstdlib>
using namespace std;
class Sort
{
int tab[10];
int rozmiar;;
public:
 int getTab() {
        return tab[10];
    }

     void setTab(int tab[]) {
        tab[10] = tab[10];
    }
    int getRozmiar()
    {
        return rozmiar;
    }
   
    void setRozmiar()
    {
        rozmiar=rozmiar;
    }
void wpisz(int tab[], int rozmiar)
{
    cout<<"wpisz liczby do tab"<<endl;
    for(int i = 0; i<rozmiar; i++)
    {
        cin>>tab[i];
    }

     for(int j = 0; j<rozmiar; j++)
    {
        cout<<tab[j]<<endl;
    }
    
}
void selectSortMax(int tab[], int rozmiar)
{
    for (int i = 0; i < rozmiar - 1; ++i)
    {
        int max = i;
        for (int j = i + 1; j < rozmiar; ++j)
        {
            if (tab[j] > tab[max])
            {
                max = j;
            }
        }

        int temp = tab[i];
        tab[i] = tab[max];
        tab[max] = temp;
    }
}
void wypisz(int tab[], int rozmiar)
{
    cout<<"tablica "<<endl;
     for(int i = 0; i<rozmiar; i++)
     {
        cout<<tab[i]<<endl;
     }
}
};
int main()
{
    int tablica[10];

        Sort sort;
            
    
    sort.wpisz( tablica[10],10);
    sort.selectSortMax(10,10);
    sort.wypisz(10,10);
    

   
    return 0;
}
