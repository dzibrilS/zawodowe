#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

int main() {
    try {
        char znak;
        cout << "Podaj literę: ";
        cin >> znak;

        // Sprawdzamy, czy znak jest dużą literą
        if (isupper(znak)) {
            cout << "JD\n";
        }
        else if (islower(znak)) {
            throw invalid_argument("Błąd: Litera jest mała");
        }
        else if (isdigit(znak)) {
            throw logic_error("Błąd: Została podana cyfra");
        }
        else if (!isalpha(znak)) {
            throw runtime_error("Błąd: To nie jest litera ani cyfra");
        }
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
