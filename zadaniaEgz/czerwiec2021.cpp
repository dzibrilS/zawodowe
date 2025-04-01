#include <iostream>
#include <cstdlib>
using namespace std;
class Sort
{
    int tab[10];
    int rozmiar;

    int *wsk;

public:
    Sort()
    {
        wsk = new int[10];
        rozmiar = 10;
        for (int i = 0; i < rozmiar; i++)
        {
            cout << "podaj liczby" << endl;
            cin >> wsk[i];
        }
        for (int j = 0; j < rozmiar; j++)
        {
            cout << wsk[j] << " , ";
        }
    };
    int *getWsk()
    {
        return wsk;
    }
    void setWsk(int newtab[10])
    {
        for (int i = 0; i < rozmiar; i++)
        {
            wsk[i] = newtab[i];
        }
    };

    void sortMax(int *wsk, int rozmiar)
    {
        int temp;
        int min;
        for (int i = 0; i < rozmiar - 1; ++i) // tab{1,5,3,2,1} i=0; min = 1;     jesli 5>1; min = 5;
        {
            min = i;
            for (int j = i + 1; j < rozmiar; ++j)
            {
                if (wsk[j] > wsk[min])
                {
                    min = j;
                }
            }
            temp = wsk[i];
            wsk[i] = wsk[min];
            wsk[min] = temp;
        }
        cout << endl;
        cout << "maksymalna wartosc w tablicy: " << wsk[9] << endl;
    }
    void display()
    {

        for (int i = 0; i < rozmiar; i++)
        {
            cout << "tablica dynamiczna" << " " << wsk[i] << endl;
        }
    }
    ~Sort()
    {
        delete[] wsk;
    }
};

int main()
{
    int rozmiar = 10;
    Sort sort;

    int *tablica = sort.getWsk();
    sort.sortMax(tablica, rozmiar);
    sort.display();

    return 0;
}