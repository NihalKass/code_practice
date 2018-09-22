#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=0,p=0;

    for(int i=0;i<n;i++)
    {
        m++;
        for(int j=1;j<m+1;j++)
        {
            p++;
            cout<<p;
            if(m!=j)
            cout<<"*";
        }
        cout<<endl;
    }
    m++;
    p=p-n;
    for(int i=0;i<n;i++)
    {
        m--;
        for(int j=1;j<m+1;j++)
        {
            p++;
            cout<<p;
            if(m!=j)
            cout<<"*";
        }
        cout<<endl;
        break;
    }
}