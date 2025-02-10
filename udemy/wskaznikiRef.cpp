// #include <iostream>
// using namespace std;
// // void waps(int &z,int &y)
// // {
// //     int temp = z;
// //     z=y;
// //     y=temp;
// //     cout<<" adres z "<<&z<<" adres y "<<&y<<endl;
    
    
// // }
// int main()
// {
//     // int zwyklaZmienna = 4;
//     // int &jacaplaca =zwyklaZmienna;
//     // int nieRef =5;
//     // cout<<"wartosc to "<<jacaplaca<<" adres to "<<&jacaplaca<<endl;
//     // cout<<"wartosc to "<<zwyklaZmienna<<" adres to "<<&zwyklaZmienna<<endl;
//     // cout<<"wartosc to "<<nieRef<<" adres to "<<&nieRef<<endl;


// //     int a, b;
// //     cout<<"podaj a "<<endl;
// //     cin >> a;
// //     cout<<"podaj b "<<endl;
// //     cin>>b;
// //     cout<<"a teraz jest rowne "<<a<<" i adres "<<&a<<" b teraz jest rowne "<<b<<" i adres "<<&b<<endl;

// //   swap(a , b);
// //   cout<<" a jest rowne "<<a<<" b jest rowne "<<b<<endl;




//         // int zmiensinf=53;

//         // cout<<*&zmiensinf<<endl;

    

//         // cout<<sizeof(bool);


        #include <iostream>
        using namespace std;
        #include <cstdlib>

int main()
{

        int a[3];
        int*p =&a[0];
        a[0]=2;
        a[1]=4;
        a[2]=5;
        cout<<*++p<<endl;
        cout<<*p++<<endl;
        cout<<*p++<<endl;


         



//     int zm = 10;
//     cout << *&zm << endl;  //gwiazdka wyciąga wartość z pod danego adresu

//     int *wsk; //pełni rolę INFORMACJI, czyli informuje kompilator,że
//               //ta zmienna jest niezwykła - bo jest zmienną wskaźnikową,
//               //czyli może wskazywać na zmienne które są typu int 
  
//     wsk = &zm; //aby wskaźnik wskazywał przypisujesz adres zmiennej

//     cout << *wsk<<" "<<&zm<<" " <<&wsk<< endl; //wyciągasz zawartość z pod adresu na który 
//                           //wskazuje ten wskaźnik 

//                           int *zwykly_wsk = &zm;
//                           int **wskaznik_wsk_na_wskaznik = &zwykly_wsk;

//                           cout<<**wskaznik_wsk_na_wskaznik<< " "<<*zwykly_wsk<<endl;

        
}


