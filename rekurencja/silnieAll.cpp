#include <iostream>
using namespace std;
double sequence(int n){
    if(n==1)
    {
        return 2;
    }
    else{
        return sequence(n-1)*sequence(n-1)-100;
    }
}
// double silniaa(int n)
// {
//     int wynik=1;
//     for(int i=1; i<=n; i++)
//     {
//        wynik= wynik*=i;
         
//     }
//     return wynik;
// }
double potega(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 5;
    }
    else
    {
        return potega(n - 1) * 5;
    }
}
int main()
{
    int n =3;
    cout<<sequence(n)<<endl;
    // cout<<silniaa(n)<<endl;
    cout<<potega(n)<<endl;
}

#include <iostream>
#include <string>
using namespace std;
double rekurencja(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 2;
    }
    else
    {
        return (rekurencja(n - 1) + (2 * rekurencja(n - 2))) / 2;
    }
}
double potega(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 5;
    }
    else
    {
        return potega(n - 1) * 5;
    }
}
int main()
{
    int n;
    cout << "podaj który wyraz chcesz obliczyć: \n";
    cin >> n;
    cout << rekurencja(n);
    cout << "\nPodaj potenge 5 do obliczenia: \n";
    cin >> n;
    cout << potega(n);
    return 0;

}