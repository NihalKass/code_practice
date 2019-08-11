/*Input2
5
2 2 1 7 5

5
2 2 3 5 6

Output:
3
4
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
	    int count=0,sum=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            sum = arr[i] + arr [j];
	            if( sum % 4 == 0)
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}