#include <iostream>
using namespace std;

void nTo1(int n)
{
    if (n == 1)
    {
        cout << n << endl;
    }
    else
    {
        cout << n << endl;
        return nTo1(n - 1);
    }
}

double sequence(double n)
{
    if (n == 1)
    {
        return 3;
    }
    else if (n == 2)
    {
        return 0.5;
    }
    else
    {
        return sequence(n - 1) * sequence(n - 2) / 5;
    }
}

int main()
{
    double n = 3;
    nTo1(5);
    cout << sequence(3);
}