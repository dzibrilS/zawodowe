#include <iostream>
#include <cstring> 
#include <cctype>
using namespace std;
void findAb(char org[50]) {
    int len = strlen(org);
    for (int i = 0; i < len; i++) {
        if (org[i] =='a' && org[i+1] =='b') {
            cout<<"występuje"<<endl;
        }
        
    }
    
}

int main()
{
    char sentence[50];
    char temp1[50];
    char temp2[50];
    char org[50];
    int letters{};
    cout<<"enter some sentence"<<endl;
    cin.get(sentence,50);
    char *find = strchr(sentence,' ');
    int spa = find-sentence;
    strncpy(temp1,sentence,spa);
    strcpy(temp2,sentence+spa+1);
    strcat(org,temp2);
    strcat(org," ");
    strcat(org,temp1);
    cout<<org<<endl;

    for (char &v : org)
    {
     if (isalpha(v) && islower(v))
        {
           letters++;
        }
    }
    cout<<"liczba małych liter "<<letters<<endl;
     
     findAb(org);
}