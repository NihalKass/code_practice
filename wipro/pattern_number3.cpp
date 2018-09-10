#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=0;

    for(int i=0;i<n;i++)
    {
        m++;
        for(int j=1;j<m+1;j++)
        {
            cout<<m;
            if(m!=j)
            cout<<"*";
        }
        cout<<endl;
    }
    m++;
    for(int i=0;i<n;i++)
    {
        m--;
        for(int j=1;j<m+1;j++)
        {
            cout<<m;
            if(m!=j)
            cout<<"*";
        }
        cout<<endl;
    }
}