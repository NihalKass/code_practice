#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        count++;
        for(int k=0;k<count;k++)
        cout<<" ";
    }
    return 0;
}