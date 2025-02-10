#include <iostream>
using namespace std;

void wypiszLiczby(int a) {
  if (a > 0) {
    wypiszLiczby(a - 1); 
    cout << a << " ";   
  }
}
double rekurencja(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return 2*(rekurencja(n - 1)) - 4;
    }
}


int main() {
  int b = 5;
  int c;
  wypiszLiczby(b);
  cout << endl;
  cout<<"podaj c"<<endl;
  cin>>c;
  double liczba = rekurencja(c);
  cout<<liczba<<endl;
  return 0;
}