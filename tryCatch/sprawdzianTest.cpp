#include <iostream>
#include <stdexcept>
using namespace std;
class Error : public runtime_error {
public:
    Error() : runtime_error(" liczba nie może być zerem") {}
};

int main() {
    try {
    double liczba;
    cout << "Podaj liczbę parzystą dodatnią: ";
    cin >> liczba;

    if (liczba < 0) {
        throw invalid_argument(" liczba ujemna");
    }
    if (liczba == 0) {
        throw Error();
    }
    if (liczba != static_cast<int>(liczba)) {
        throw runtime_error(" liczba nie jest całkowita ");
    }
    if (static_cast<int>(liczba) % 2 != 0) {
        throw exception();
    }

    cout << "JD kocham disa dis nie jest gejem a jan paweł nie gwałcił małych dzieci" << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    } catch (const exception&) {
        cout << " liczba nieparzysta" << endl;
    }
}
