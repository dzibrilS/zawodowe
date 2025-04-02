#include <iostream>
#include <stdexcept>
#include <cctype>
using namespace std;

class SpecialCharError : public runtime_error {
public:
    SpecialCharError() : runtime_error("Błąd: znak nie jest literą, cyfrą ani interpunkcją") {}
};

void grupaB() {
    char znak;
    cout << "Podaj dużą literę: ";
    cin >> znak;

    if (cin.fail()) {
        throw invalid_argument("Błąd: podana wartość nie jest znakiem");
    }
    if (islower(znak)) {
        throw invalid_argument("Błąd: podana litera jest mała");
    }
    if (isdigit(znak)) {
        throw exception();
    }
    if (ispunct(znak)) {
        throw runtime_error("Błąd: podany znak to interpunkcja");
    }
    if (!isalpha(znak)) {
        throw SpecialCharError();
    }

    cout << "JD" << endl;
}
int main() {
    try {
        grupaA();
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    } catch (const exception&) {
        cerr << "Błąd: liczba jest nieparzysta" << endl;
    }

    try {
        grupaB();
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    } catch (const exception&) {
        cerr << "Błąd: podana wartość to cyfra" << endl;
    }

    return 0;
}