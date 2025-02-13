#include <iostream>
#include <stdexcept>

class ZeroError : public std::runtime_error {
public:
    ZeroError() : std::runtime_error("Błąd: liczba nie może być zerem") {}
};

void grupaA() {
    double liczba;
    std::cout << "Podaj liczbę parzystą dodatnią: ";
    std::cin >> liczba;

    if (std::cin.fail()) {
        throw std::invalid_argument("Błąd: podana wartość nie jest liczbą");
    }
    if (liczba < 0) {
        throw std::invalid_argument("Błąd: liczba jest ujemna");
    }
    if (liczba == 0) {
        throw ZeroError();
    }
    if (liczba != static_cast<int>(liczba)) {
        throw std::runtime_error("Błąd: liczba nie jest całkowita");
    }
    if (static_cast<int>(liczba) % 2 != 0) {
        throw std::exception();
    }

    std::cout << "JD" << std::endl;
}
#include <iostream>
#include <stdexcept>
#include <cctype>

class SpecialCharError : public std::runtime_error {
public:
    SpecialCharError() : std::runtime_error("Błąd: znak nie jest literą, cyfrą ani interpunkcją") {}
};

void grupaB() {
    char znak;
    std::cout << "Podaj dużą literę: ";
    std::cin >> znak;

    if (std::cin.fail()) {
        throw std::invalid_argument("Błąd: podana wartość nie jest znakiem");
    }
    if (std::islower(znak)) {
        throw std::invalid_argument("Błąd: podana litera jest mała");
    }
    if (std::isdigit(znak)) {
        throw std::exception();
    }
    if (std::ispunct(znak)) {
        throw std::runtime_error("Błąd: podany znak to interpunkcja");
    }
    if (!std::isalpha(znak)) {
        throw SpecialCharError();
    }

    std::cout << "JD" << std::endl;
}
int main() {
    try {
        grupaA();
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::exception&) {
        std::cerr << "Błąd: liczba jest nieparzysta" << std::endl;
    }

    try {
        grupaB();
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::exception&) {
        std::cerr << "Błąd: podana wartość to cyfra" << std::endl;
    }

    return 0;
}

