// #include <iostream>
// #include <vector>
// using namespace std;
// void wypelniamy(vector<int> &w)
// {
//     for (int i = 0; i < 5; i++) 
//   {
//     srand(time(NULL) * (i + 1)); 
//      w[i] = rand() % 20+1;    
     
//   }
// }
// void podzielne(vector<int> &w)
// {
//     for(int val:w)
//     {
//         if(val&3==0)
//         {
//             cout<<"liczby podzielne to "<<val<<","<<endl;
//         }
//     }
// }
// int main()
// {
    
//     int ile;
//     cout<<"podaj ile liczb"<<endl;
//     cin>>ile;
//     vector<int> wektor{};
//     int nr;
//     for(int nr:wektor)
//     {
//         cout<<"podaj liczbe na poczatek"<<endl;
//         cin>>nr;
//         wektor.insert(wektor.begin() + 0, nr);
//       cout<<nr<<endl;
//         cout<<"podaj liczbe na koniec"<<endl;
//          cin>>nr;
//         wektor.push_back(nr);
//      cout<<nr<<endl;
//         cout<<"podaj liczbe na druga pozycje"<<endl;
//          cin>>nr;
//         cout<<nr<<endl;
        
//         // wektor.insert(wektor.begin() + 1, nr);
//         // wektor.erase(wektor.begin() + 2);

       
//     }
   
//     wypelniamy(wektor);
//     podzielne(wektor);
    
// }

#include <iostream>
#include <vector>
using namespace std;
void wypelnijLos(vector<int> &v,int ile)
{
      for (int i = 0; i < ile; i++){
    srand(time(NULL) * (i + 1));
    v.push_back(rand() % 20 + 1);
    cout<<v[i]<<endl;  
  }
}
int wyp(vector<int>&v)
{
    int pocz;
   cout<<"podaj liczbe na poczatek"<<endl;
   cin>>pocz;
   v.insert(v.begin() + 0, pocz);
    return pocz;
}
int wyp1(vector<int>&v)
{
    int pocz;
   cout<<"podaj liczbe na 3 pozycjek"<<endl;
   cin>>pocz;
   v.insert(v.begin() + 2, pocz);
    return pocz;
}
int wyp2(vector<int>&v)
{
    int pocz;
   cout<<"podaj liczbe na koniec"<<endl;
   cin>>pocz;
   v.push_back(pocz);
   return pocz;
   
}



int main() {
    int ile;
    cout << "Ile liczb chcesz w wektorze? ";
    cin >> ile;
    
    vector<int> wektor{};
 

    wypelnijLos(wektor,ile);
    int liczba =wyp(wektor);
    int liczba1= wyp1(wektor);
    int liczba2 = wyp2(wektor);

    int i=1;
        for (int &nr : wektor)
 {
    if(i==1){
    if(nr%3 == 0)
    {
    cout<<"liczby podzielne to "<<nr<<endl;
    }
 }
 }
    return 0;
}