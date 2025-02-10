#include <iostream>
#include <string>
using namespace std;
class imie
{
public:
string imie;
void display()
{
    cout<<imie<<endl;
}
};

class nazwisko
{
public:
string nazwisko;
void display()
{
    cout<<nazwisko<<endl;
}

};

class przedmiot
{
    public:
    string przedmiot;
    void display()
{
    cout<<przedmiot<<endl;
}
};

class klasa
{
    public:
    string klasa;
    void display()
{
    cout<<klasa<<endl;
}

};

class pracownik : public imie , public nazwisko
{
void display()
{
    cout<<imie<<nazwisko<<endl;
}

};

class nauczyciel : public imie , public nazwisko, public przedmiot
{
    void display()
{
    cout<<imie<<nazwisko<<przedmiot<<endl;
}
};

class wychowawca : public imie , public nazwisko, public przedmiot, public klasa
{
       void display()
{
    cout<<imie<<nazwisko<<przedmiot<<klasa<<endl;
}
};

int main()
{
nauczyciel nauczyciel1;
imie *w_imie;
nazwisko *w_nazwisko;
klasa *w_klasa;
przedmiot *w_przedmiot;


w_imie = &nauczyciel1;
w_nazwisko = &nauczyciel1;
w_przedmiot = &nauczyciel1;
// *w_klasa = &nauczyciel1;
w_imie->nauczyciel1 = "Jan";
w_nazwisko->nauczyciel1 = "Kowalski";
w_przedmiot->nauczyciel = "matematyka";
// w_klasa -> nauczyciel1 = "trzecia";

cout<<&nauczyciel1<<
zwrocDane(); 
}