#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++){
      for(int j=0;j<10-i;j++){
        cout<<'O';
      }
      cout<<endl;
    }
    return 0;
}