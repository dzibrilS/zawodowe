#include <iostream>
#include <string>
using namespace std;


class Pamiec
{
private:
    int ram, masowa;

public:
   
    void setRam(int input)
    {
        ram = input;
    }

    int getRam() const
    {
        return ram;
    }

    void setMasowa(int input)
    {
        masowa = input;
    }

    int getMasowa() const
    {
        return masowa;
    }
};


class Procesor
{
private:
    int rdzenie, watki, taktowanie;
    string model;

public:
 
    void setRdzenie(int input)
    {
        rdzenie = input;
    }

    int getRdzenie() const
    {
        return rdzenie;
    }

    void setWatki(int input)
    {
        watki = input;
    }

    int getWatki() const
    {
        return watki;
    }

    void setTaktowanie(int input)
    {
        taktowanie = input;
    }

    int getTaktowanie() const
    {
        return taktowanie;
    }

    void setModel(const string& input)
    {
        model = input;
    }

    string getModel() const
    {
        return model;
    }
};

class RozmiarMatrycy
{
private:
    int rozmiar;

public:
    
    void setRozmiar(int input)
    {
        rozmiar = input;
    }

    int getRozmiar() const
    {
        return rozmiar;
    }
};


class EkranDotykowy : public RozmiarMatrycy
{
private:
    bool czyDotykowy;

public:
    void setCzydotykowy(bool input)
    {
        czyDotykowy = input;
    }

    bool getCzyDotykowy() const
    {
        return czyDotykowy;
    }
};


class Desktop : public Pamiec, public Procesor, public RozmiarMatrycy
{
public:
    Desktop()
    {
        setRam(16);
        setMasowa(1024);
        setRdzenie(4);
        setWatki(8);
        setTaktowanie(2200000);
        setModel("i3");
        setRozmiar(14);
    }

    Desktop(int inputRam, int inputMasowa, int inputRdzenie, int inputWatki, int inputTaktowanie, const string& inputModel, int inputRozmiar)
    {
        setRam(inputRam);
        setMasowa(inputMasowa);
        setRdzenie(inputRdzenie);
        setWatki(inputWatki);
        setTaktowanie(inputTaktowanie);
        setModel(inputModel);
        setRozmiar(inputRozmiar);
    }

    void display() const
    {
        cout << "Desktop:" << endl;
        cout << "RAM: " << getRam() << " GB" << endl;
        cout << "Storage: " << getMasowa() << " GB" << endl;
        cout << "Cores: " << getRdzenie() << endl;
        cout << "Threads: " << getWatki() << endl;
        cout << "Clock Speed: " << getTaktowanie() << " MHz" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Screen Size: " << getRozmiar() << " inches" << endl;
    }
};

class Tablet : public Pamiec, public Procesor, public EkranDotykowy
{
public:
    Tablet()
    {
        setRam(4);
        setMasowa(128);
        setRdzenie(4);
        setWatki(8);
        setTaktowanie(2200000);
        setModel("i3");
        setRozmiar(14);
        setCzydotykowy(true);
    }

    Tablet(int inputRam, int inputMasowa, int inputRdzenie, int inputWatki, int inputTaktowanie, const string& inputModel, int inputRozmiar, bool inputCzyDotykowy)
    {
        setRam(inputRam);
        setMasowa(inputMasowa);
        setRdzenie(inputRdzenie);
        setWatki(inputWatki);
        setTaktowanie(inputTaktowanie);
        setModel(inputModel);
        setRozmiar(inputRozmiar);
        setCzydotykowy(inputCzyDotykowy);
    }

    void display() const
    {
        cout << "Tablet:" << endl;
        cout << "RAM: " << getRam() << " GB" << endl;
        cout << "Storage: " << getMasowa() << " GB" << endl;
        cout << "Cores: " << getRdzenie() << endl;
        cout << "Threads: " << getWatki() << endl;
        cout << "Clock Speed: " << getTaktowanie() << " MHz" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Screen Size: " << getRozmiar() << " inches" << endl;
        cout << "Touchscreen: " << (getCzyDotykowy() ? "Yes" : "No") << endl;
    }
};


class Laptop : public Pamiec, public Procesor, public EkranDotykowy
{
public:
    Laptop()
    {
        setRam(8);
        setMasowa(512);
        setRdzenie(4);
        setWatki(8);
        setTaktowanie(2200000);
        setModel("i3");
        setRozmiar(14);
        setCzydotykowy(false);
    }

    Laptop(int inputRam, int inputMasowa, int inputRdzenie, int inputWatki, int inputTaktowanie, const string& inputModel, int inputRozmiar, bool inputCzyDotykowy)
    {
        setRam(inputRam);
        setMasowa(inputMasowa);
        setRdzenie(inputRdzenie);
        setWatki(inputWatki);
        setTaktowanie(inputTaktowanie);
        setModel(inputModel);
        setRozmiar(inputRozmiar);
        setCzydotykowy(inputCzyDotykowy);
    }

    void display() const
    {
        cout << "Laptop:" << endl;
        cout << "RAM: " << getRam() << " GB" << endl;
        cout << "Storage: " << getMasowa() << " GB" << endl;
        cout << "Cores: " << getRdzenie() << endl;
        cout << "Threads: " << getWatki() << endl;
        cout << "Clock Speed: " << getTaktowanie() << " MHz" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Screen Size: " << getRozmiar() << " inches" << endl;
        cout << "Touchscreen: " << (getCzyDotykowy() ? "Yes" : "No") << endl;
    }
};

int main()
{
    Desktop desktop1;
    desktop1.display();
    desktop1.setRam(32);  
    cout << "\nAfter updating RAM: " << desktop1.getRam() << " GB" << endl;

   
    Laptop laptop1(8, 512, 4, 8, 2200000, "i5", 15, false);
    laptop1.display();

 
    Tablet tablet1(4, 128, 4, 8, 2200000, "i3", 10, true);
    tablet1.display();

    return 0;
}
