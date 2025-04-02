#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
   double liczba, liczba1;
   srand(time(NULL));

   liczba=(double)rand()/(double)RAND_MAX;
   cout<<liczba;
   return 0;
}