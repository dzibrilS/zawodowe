#include <iostream>
#include <cmath>
using namespace std;
template <typename T1, typename T2>
T1 funkcja(T1 a, T2 b) {
    return a + b;  
}


template <>
int funkcja<int, float>(int a, float b) {
    return static_cast<int>(pow(a, b));  
}


template <>
float funkcja<float, double>(float a, double b) {
    return static_cast<float>(a + b);  
}


template <>
double funkcja<double, double>(double a, double b) {
    return a * b;  
}

int main() {
    
    cout << "int, float: " << funkcja(3, 2.5f) <<endl;

    
   cout << "float, double: " << funkcja(2.5f, 3.4) << endl;

   
    cout << "double, double: " << funkcja<double, double>(3.2, 4.5) << endl;

    return 0;
}
