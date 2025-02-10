#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char first[30];
    char second[30];
    char temp[30];
    char temp1[30];
    char temp2[30];
    char temp3[30];
    char org[50];
    cout<<"podaj dwuczłonowe zdanie"<<endl;
    cin.get(first,30);
    cin.ignore(50,'\n');
    cout<<"podaj dwuczłonowe zdanie"<<endl;
    cin.get(second,30);
    cin.ignore(50,'\n');
    char *find=strchr(first,' ');
    int spa= find-first;
    int len1 = strlen(first);

    char *find1 = strchr(second,' ');
    int spa1= find1-second;
    int len = strlen(second);


    strncpy(temp,first,spa);

    strcpy(temp1,second+spa1+1);
    strcpy(temp2,first+ spa + 1);
    strncpy(temp3,second,spa1);


    strcat(org , temp1);
    strcat(org," ");
    strcat(org , temp2);
    strcat(org," ");
    strcat(org , temp3);
    strcat(org," ");
    strcat(org , temp);
    cout<<org<<endl;



    return 0;
}