#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// int main()
// {
    // int a,b,c;
    // cout<<" a "<<endl; cin>>a;
    // cout<<" b "<<endl; cin>>b;
    // cout<<" c "<<endl; cin>>c;
    // fstream plik;
    // plik.open("janek.txt", ios::out);
    // plik<<a<<endl;
    // plik<<b<<endl;
    // plik<<c<<endl;
    // plik.close();

    // fstream plik;
    // plik.open("test.txt", ios::out);
    // {
    // plik<<8<<endl;
    // plik<<10<<endl;
    // plik<<14<<endl;
    // plik.close();
    // }
    // int zplik;
    // plik.open("test.txt", ios::in);
    // {
    
    //     plik>>zplik;
    //     cout<<zplik<<endl;
    
    // plik.close();
    // }
    

//     

// int main()
// {
//     int zPliku, suma=0;
//     ofstream zapis("wyjscie.txt");
//     zapis << 5 << " " << 50 << " " << -50;
//     zapis.close();
//     ifstream odczyt("wyjscie.txt");
//     while (!odczyt.eof())
//     {
//         odczyt >> zPliku;
//         cout << zPliku << endl;
//         suma+=zPliku;
//     }
//     odczyt.close();
//     cout<<suma;
//     return 0;
// }
//   

// int main()
// {
//     // int zPliku, suma=0;
//     // fstream plik;
//     // plik.open ("wyjscie.txt", ios::out);
//     // plik << 5 << " " << 50 ;
//     // plik.close();
//     // plik.open("wyjscie.txt", ios::app);
//     // plik << " "<<15 << " " << 60 ;
//     // plik.close();
//     // plik.open ("wyjscie.txt" ,ios::in);
//     // while (plik.eof())
//     // {
//     //     plik >> zPliku;
//     //     cout << zPliku << endl;
       
//     // }
    
// }


// #include <fstream>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int zPliku,iterator=0;
//     fstream plik;
//     // plik.open ("wyjscie.txt", ios::out);
//     // plik << 5 << " " << 50 ;
//     // plik.close();
//     // plik.open("wyjscie.txt", ios::app);
//     // plik << " "<<15 << " " << 60 ;
//     // plik.close();
//     plik.open ("wyjscie.txt" ,ios::in);
//     while (!plik.eof())
//     {
//         plik >> zPliku;
//         cout << zPliku << endl;
//         iterator++;
//     }
//     int *liczby;
//     liczby=new int[iterator];
//     plik.close();
//     plik.open ("wyjscie.txt" ,ios::in);
//     int i=0;
//      while (!plik.eof())
//     {

//         plik >> zPliku;
//         liczby[i]=zPliku;
//         i++;
//     }
//     plik.close();
//     for (short i = 0; i < iterator; i++)
//     {
//         cout<<liczby[i]<<' ';
//     }
    
//     // cout<<iterator;
//     return 0;
// }


// int rozmiarPliku()
// {
//     int iterator=0;
//     fstream plik;
//     int zPliku;
//     string nazwaPliku;
//     cout<<"podaj nazwe pliku"<<endl;
//     cin>>nazwaPliku;
//     plik.open(nazwaPliku, ios::in); // do odczytu
//     while (!plik.eof())
//     {
//         plik>>zPliku;
//         iterator++;
//     }
//     return iterator;
// }

// #include <fstream>
// #include <iostream>
// #include <cstdlib>
// using namespace std;

// void randomNumbersToFile(int n)
// {
//     fstream plik;
//     plik.open("wyjscie.txt", ios::out);
//     srand(time(NULL));
//     plik << rand() % 10;
//     for (int i = 1; i < n; i++)
//     {
//         srand(time(NULL) * (i + 1));
//         plik << " " << rand() % 10;
//     }
//     plik.close();
// }
// int fileSize(){
//     fstream plik;
//     plik.open("wyjscie.txt", ios::in);
//     int i{};
//     int zPliku{};
//     while (!plik.eof())
//     {
//         plik >> zPliku;
//         i++;
//     }
//     plik.close();
//     return i;
// }
// int *fileToArray(int n)
// {
//     fstream plik;
    
//     int *arr = new int[n];
//     plik.open("wyjscie.txt", ios::in);
//     int i{};
//     int fromFile{};
//     while (i <= n)
//     {
//         plik >> fromFile;
//         arr[i] = fromFile;
//         i++;
//     }
//     plik.close();
//     return arr;
// }
// double averageFromArray(const int arr[], int size){
//     double sum{};
//     for(int i = 0;i < size; i++){
//         sum += *(arr)+i;
//     }
//     return sum / static_cast<double>(size);
// }

// int main()
// {
//     randomNumbersToFile(10);
//     int size = fileSize();
//     int *arr = fileToArray(size);
//     cout << "srednia: "<<averageFromArray(arr, 10);
//     return 0;
// }

// #include <fstream>
// #include <iostream>
// #include <cstdlib>
// using namespace std;

// void wypisz(int numery[], int rozmiar)
// {
//     for (short i = 0; i < rozmiar; i++)
//     {
//        cout<<numery[i]<<" ";
//     }
    
    
// }
// void randomNumbersToFile(int n)
// {
//     fstream plik;
//     plik.open("wyjscie.txt", ios::out);
//     srand(time(NULL));
//     plik << rand() % 10;
//     for (int i = 1; i < n; i++)
//     {
//         srand(time(NULL) * (i + 1));
//         plik << " " << rand() % 10;
//     }
//     plik.close();
// }
// int fileSize()
// {
//     fstream plik;
//     plik.open("wyjscie.txt", ios::in);
//     int i{};
//     int zPliku{};
//     while (!plik.eof())
//     {
//         plik >> zPliku;
//         i++;
//     }
//     plik.close();
//     return i;
// }
// int *fileToArray(int n)
// {
//     fstream plik;

//     int *arr = new int[n];
//     plik.open("wyjscie.txt", ios::in);
//     int i{};
//     int fromFile{};
//     while (i <= n)
//     {
//         plik >> fromFile;
//         arr[i] = fromFile;
//         i++;
//     }
//     plik.close();
//     return arr;
// }
// double averageFromArray(const int arr[], int size)
// {
//     double sum{};
//     for (int i = 0; i < size; i++)
//     {
//         sum += *(arr) + i;
//     }
//     return sum / static_cast<double>(size);
// }

// int main()
// {
//     randomNumbersToFile(10);
    
//     int size = fileSize();
//     int *arr = fileToArray(size);
//     wypisz(arr,size);
//     cout << "srednia: " << averageFromArray(arr, 10);
//     return 0;
// }