#include <iostream>
using namespace std;
int fib[100];
int main() {
  int n;
  cout<<"ile liczb wyznaczyc "<<endl;
  cin>>n;
  fib[0]=1;
  fib[1]=1;
  for(int i=2; i<n; i++)
    {
      fib[i] = fib[i-1] + fib[i-2];
      cout<<fib[i]<<endl;
    }
}