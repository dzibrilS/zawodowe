#include <iostream>
using namespace std;
int main()
{
    int pietra;
    cout << "podaj liczbę pięter" << endl;
    cin >> pietra;
    for(int i=0;i<pietra;i++){
        //i=1
                for(int a=0;a<pietra -i;a++)
        {
            cout<<" ";
        }
      for(int j=0;j<1+i *2;j++){

        cout<<"#";
      }
      cout<<endl;
    }
    return 0;
}