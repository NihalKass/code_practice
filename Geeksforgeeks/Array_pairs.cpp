/*
INPUT:
2
7
5 0 10 2 4 1 6

4
8 4 2 1

Output:
5
2
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int count = 0;
	    
	        for(int i=0;i<n;i++)
	        {
	            for(int j=i+1;j<n;j++)
	            {
	                if(i*arr[i] > j*arr[j])
	                count++;
	            }
	        }
	       cout<<count;
	}
	return 0;
}