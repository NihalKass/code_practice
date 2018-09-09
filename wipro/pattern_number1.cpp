#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n-1);
  
    int p=n/2;
    for(int i=0;i<p;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int j=n-1;j>=p;j--)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}