#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
T2 obwTrojkata(T1 a, T1 b, T3 c)
{
    return a + b + c;
}

int main()
{
    float a{1.5}, b{2.5}, c{3};
    cout << "Obwod trojkata: " << obwTrojkata<int, int, int>(a, b, c) << '\n';
    cout << "Obwod trojkata: " << obwTrojkata<float, float, float>(a, b, c) << '\n';
    return 0;
}