
#include <iostream>
using namespace std;


int main()
{
    
    for(int i = 1; i<=10; i++)
    {
        cout<<"#";
        for(int j=10; j>i || i>j ; j--) 
        {
            
            cout<<"*";
            
        }
        cout<<endl;
        
    }
}
