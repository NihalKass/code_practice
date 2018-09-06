#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
        
            for(int j=1;j<=n;j++)
            cout<<i<<" ";
            cout<<i+1<<endl;
        }
        else
        {
            cout<<i+1<<" ";
            for(int k=1;k<=n;k++)
            cout<<i<<" ";
            cout<<endl;
        }

    }
}