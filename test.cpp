#include <iostream>
#include<string>
#include "string.h"
using namespace std;

int main()
{
    string var;
    cout<<"Koks jusu vardas?"<<endl;
    cin>>var;
    int n=var.length();
    char a[2];
    a[0]=var[n-2];
    a[1]=var[n-1];
    string sv;
    if(a[1]=='a'||a[1]=='e')
    {
        sv="Sveika, ";
    }
    else if(a[0]=='a')
    {
        var[n-1]='i';
        sv="Sveikas, ";
    }
    else
    {
        var[n-2]='a';
        var[n-1]='u';
        sv="Sveikas, ";
    }
    sv=sv+var+"!";
    n=sv.length();
    

    return 0;
}
