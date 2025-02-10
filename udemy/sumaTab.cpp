#include <iostream>
using namespace std;

int suma(int tab[],int rozmiarTablicy)
{
    int suma=0;
    for(int i =0; i<rozmiarTablicy; i++)
    {
    int liczba = tab[i];
    if(liczba>0)
    {
        suma +=liczba;
    }
    
    }
    return suma;

}
int main()
{
   int tab[5] = {1,3,4,-5,0};
   cout<<suma(tab,5)<<endl;
}
