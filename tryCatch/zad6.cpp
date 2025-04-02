#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

int main() {
    try {
        double liczba;
        cout << "Podaj liczbę: ";
        cin >> liczba;

        // Sprawdzamy, czy liczba jest całkowita
        if (floor(liczba) != liczba) {
            throw runtime_error("Błąd: Liczba nie jest całkowita");
        }

        // Sprawdzamy, czy liczba jest ujemna
        if (liczba < 0) {
            throw invalid_argument("Błąd: Liczba jest ujemna");
        }

        // Sprawdzamy, czy liczba jest parzysta
        if (static_cast<int>(liczba) % 2 != 0) {
            throw logic_error("Błąd: Liczba jest nieparzysta");
        }

        // Jeżeli liczba jest nieujemna i parzysta
        cout << "JD\n";
    }
    catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }
    catch (const logic_error& e) {
        cerr << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
