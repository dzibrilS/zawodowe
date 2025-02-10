#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double pi(int powt)
{
    double possibilities = 0;
    double favorable = 0;
    double x, y;
    for (int i = 0; i < powt; i++)
    {
        srand(time(NULL) * (i + 1));
        x = (double)rand() / (double)RAND_MAX / 2;
        y = (double)rand() / (double)RAND_MAX / 2;
        if (sqrt(pow(x, 2) + pow(y, 2)) <= (1.0 / 2.0))
        {
            favorable++;
        }
        possibilities++;
    }
    double propability = favorable / possibilities;
    cout << favorable << endl
         << "------------" << endl
         << possibilities << endl;
    return propability * 4.0;
}
int main()
{
    int powt;
    cout << "ile liczb chcesz wylosować ";
    cin >> powt;
    cout << pi(powt);
}