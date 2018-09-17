#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1;
    int j=0;
    cin>>str;
    int length=str.size();

    for(int i=0;i<length;i++)
    {
        if(str[i]!='a' && str[i]!='A' && str[i]!='e' && str[i]!='E' && str[i]!='u' && str[i]!='U' && str[i]!='o' && str[i]!='O' && str[i]!='I' && str[i]!='i')
        cout<<str[i];
    }
}