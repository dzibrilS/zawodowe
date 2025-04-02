#include <iostream>
#include <cmath>
#include <string>
using namespace std;

 class Ksiazka {
    // Pola prywatne
     String tytul;
     String autor;
     int rokWydania;

    // Pole statyczne zliczające liczbę książek
     static int liczbaKsiazek = 0;

    // Konstruktor parametryczny
     Ksiazka(String tytul, String autor, int rokWydania) {
        this->tytul = tytul;
        this->autor = autor;
        this->rokWydania = rokWydania;
        liczbaKsiazek++;
    }

    // Konstruktor kopiujący
     Ksiazka(Ksiazka innaKsiążka) {
        this->tytul = innaKsiążka.tytul;
        this->autor = innaKsiążka.autor;
        this->rokWydania = innaKsiążka.rokWydania;
        liczbaKsiazek++;
    }

    // Konstruktor bezparametryczny delegujący do parametrycznego
     Ksiazka() {
        cout("Nieznany tytul", "Nieznany autor", 0);
    }

    // Settery i gettery
     String getTytul() {
        return tytul;
    }

     void setTytul(String tytul) {
        this->tytul = tytul;
    }

     String getAutor() {
        return autor;
    }

     void setAutor(String autor) {
        this->autor = autor;
    }

     int getRokWydania() {
        return rokWydania;
    }

     void setRokWydania(int rokWydania) {
        this->rokWydania = rokWydania;
    }

    // Metoda wypisująca informację o książce
     void wypiszInformacje() {
       cout("Tytuł: " + tytul);
       cout("Autor: " + autor);
       cout("Rok wydania: " + rokWydania);
    }

    // Metoda zwracająca liczbę książek
     static int getLiczbaKsiazek() {
        return liczbaKsiazek;
    }

    // Główna klasa do testowania
     static void main(String[] args) {
        // Inicjalizacja książek przy użyciu konstruktora parametrycznego
        Ksiazka ksiazka1 = new Ksiazka("Wiedźmin", "Andrzej Sapkowski", 1992);
        Ksiazka ksiazka2 = new Ksiazka("Harry Potter", "J.K. Rowling", 1997);

        // Inicjalizacja książki przy użyciu konstruktora kopiującego
        Ksiazka ksiazka3 = new Ksiazka(ksiazka1);

        // Inicjalizacja książki przy użyciu konstruktora bezparametrycznego
        Ksiazka ksiazka4 = new Ksiazka();

        // Wypisanie informacji o książkach
        ksiazka1.wypiszInformacje();
        ksiazka2.wypiszInformacje();
        ksiazka3.wypiszInformacje();
        ksiazka4.wypiszInformacje();

        // Wyświetlenie liczby książek
       cout("Liczba książek: " + Ksiazka.getLiczbaKsiazek());
    }
}
