#include <iostream>
using namespace std;
int main()
{
  int lekcja;
  cout << "podaj lekcje ";
  cin >> lekcja;
  cout<<endl;
  switch (lekcja)//z break realizuje się tylko trafiony bez break wszystkie po trafionym.
  {
  case 1:
    cout << "matematyka";
    break;
  case 2:
    cout << " matematyke";
     break;
  case 3:
    cout << " polski";
    break;
  case 4:
    cout << " polski";
    break;
  case 5:
    cout << " historia";
    break;
  case 6:
    cout << " fizyka";
    break;
  case 7:
    cout << " informatyka";
     break;

  default:
    cout << "ni mosz lekcji";
    
  }
 return 0;
}