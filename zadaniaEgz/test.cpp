#include <iostream>
#include <string>
using namespace std;

void test(int a)
{
    a = 5;
}
void test1(int &a)
{
    a = 6;
}
void test2(int *wsk)
{
    *wsk = 7;
}
int main()
{
    int a = 4;
    int *wsk = &a;
    test(a);
    cout << a << endl;
    test1(a);
    cout << a << endl;
    test2(wsk);
    cout << a << endl;
}