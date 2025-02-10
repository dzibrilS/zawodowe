#include <iostream>
#include <string>
using namespace std;
void zamiana(string zdanie)
{
    zdanie.replace(zdanie.find(" "),1,",");
    zdanie.replace(zdanie.find(" "),1,",");
    cout<<zdanie<<endl;
}
void cudzy(string zdanie)
{

    zdanie.insert(0,"*");
    zdanie.insert(zdanie.length(),"*");
    cout<<zdanie<<endl;
}
int main(){
    string zdanie;
    cout<<"podaj napis ze spacjami"<<endl;
    getline(cin,zdanie);
    zamiana(zdanie);
    cudzy(zdanie);

}