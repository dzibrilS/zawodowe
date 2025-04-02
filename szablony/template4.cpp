#include <iostream>
#include <cmath>

// Ogólny szablon – pozostaje niezdefiniowany, wymusza specjalizacje
template <typename T1, typename T2>
T1 compute(T1 a, T2 b);

// Specjalizacja dla (int, float) – potęgowanie
template <>
int compute<int, float>(int a, float b) {
    return std::pow(a, b);
}

// Specjalizacja dla (float, double) – suma
template <>
float compute<float, double>(float a, double b) {
    return a + b;
}

// Konkretyzacja dla (double, double) – iloczyn
template <>
double compute(double a, double b) {
    return a * b;
}

int main() {
    // Niejawne wywołania (kompilator dedukuje typy)
    std::cout << "Potęgowanie (5, 2.0f): " << compute(5, 2.0f) << "\n";
    std::cout << "Suma (3.5f, 2.5): " << compute(3.5f, 2.5) << "\n";

    // Jawne wywołanie (podanie typów w <>
    std::cout << "Iloczyn (2.5, 4.0): " << compute<double, double>(2.5, 4.0) << "\n";

    return 0;
}