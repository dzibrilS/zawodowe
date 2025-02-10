#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 10;
    }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
}
void odTylu(int tablica[],int rozmiarTablicy){
   int temp;
   for(int i=0; i<rozmiarTablicy/2; i++)
   {
    temp =tablica[i];//temp=1;
    tablica[i]=tablica[rozmiarTablicy -1-i]; //i=3;   np[1,2,3,4,5] 0,1,2,3,4 na tab
    tablica[5 - 0 - 1] = temp;  //okej juz rozumiemy ta linia jest po to ze zamiania sie 
    //tablica[3] z temp = 1 czyli 4,2 a jak tej lini nie ma to tablica[i] zamienia sie tylko do połowy tablicy
   }
}
int main(){
    int tablica[5];
    wypelnijLosowo(tablica,5);
    cout<<"tablica przed zamianą:"<<endl;
    wypiszTablice(tablica, 5);
    cout<<endl;
    odTylu(tablica, 5);
    cout << "tablica po zamianie:" << endl;
    wypiszTablice(tablica,5);
    return 0;
}