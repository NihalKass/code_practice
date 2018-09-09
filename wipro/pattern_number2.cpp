#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    n=n-1;
    for(int i=1;i<=m;i++)
    {
        n++;
        for(int j=0;j<i;j++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
    }

    for(int i=m;i>0;i--)
    {
        m--;
        n--;
        for(int j=0;j<m;j++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}