#include <iostream>
using namespace std;

double silniaa( int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 4;
    }
    else {
        return (silniaa(n - 1) + silniaa(n - 2)) / 2;
    }
}
double silnia( int n) {
    if (n == 2) {
        return -1;
    }
    else {
        return 2*(silnia(n - 1) * silnia(n - 1)) +2;
    }
}
double silniaaa(int n)
{
    if(n==1)
    {
        return 5;
    }
    else
    {
        return (silniaaa(n-1)/4) +1;
    }
}

int main() {
    int x;
    cout << "podaj cos" << endl;
    cin >> x;
    cout << "Wynik 1: " << silniaa(x) << endl;
    cout << "Wynik 2: " << silnia(x) << endl;
    cout << "Wynik 3: " << silniaaa(x) << endl;
    return 0;

}