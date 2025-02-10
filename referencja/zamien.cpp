
#include <iostream>
using namespace std;
void zamien(int &a , int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int a;
    cout<<"podaj a "<<endl;
    cin>>a;
    int b;
    cout<<"podaj b"<<endl;
    cin>>b;
    zamien(a,b);
    cout<<"a jest teraz równe "<<a<<endl;
    cout<<"b jest teraz równe "<<b;
}