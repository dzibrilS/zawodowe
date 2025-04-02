#include <iostream>
#include "operacje.h"
using namespace std;
using namespace wLitrach;


int main()
{
    int litr{};
    litry liter;
    cout << "podaj w litrach";
    cin >> litr;
    litra(litr, liter);
    cout << "cysterna: " << liter.cysterna << endl;
    cout << "wanna: " << liter.wanna << endl;
    cout << "galon: " << liter.galon << endl;
    cout << "litr: " << liter.litr << endl;
    return 0;
}