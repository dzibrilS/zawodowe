#include <iostream>
#include <vector>
using namespace std;

int suma( vector<int>&v) {
    int result = 0;
    for (int i : v) {
        result += i;
    }
    return result;
}

double srednia( vector<int>&v, int ile) {
    int sum = suma(v);
    double average = static_cast<double>(sum) / ile;
    return average;
}

int main() {
    int ile;
    cout << "Ile liczb chcesz w wektorze? ";
    cin >> ile;
    
    vector<int> wektor(ile);
    for (int& nr : wektor) {
        cout << "Podaj liczbe: ";
        cin >> nr;
    }

    cout << "Suma: " << suma(wektor) << endl;
    cout << "Srednia: " << srednia(wektor, ile) << endl;

    return 0;
}