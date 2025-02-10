#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
    cout<<"r po zamianie "<<" r = "<<a<<endl;
    cout<<"z po zamianie"<<" z = "<<b<<endl;
}
int main()
{
    int r=10;
    int z=65;
       cout<<"r na poczatku równe = "<<r<<" a z ="<<z<<endl;
    swap(r,z);
}