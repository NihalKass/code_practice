#include<iostream>
#include<vector>
using namespace std;
int num;

vector<int> prime_no()
{
    vector<int> a;

    int count;
    for(int i=1; i<=num; i++)
    {
        count=0;
        for(int j=1;j<=num;j++)
        {
            //cout<<"check :"<<endl;
            if(i%j == 0)
            {
                count++;
              //  cout<<"check :"<<endl;
            }
        }
        if(count==2)
        {
            a.push_back(i);
           // cout<<"element : "<<a[i]<<endl;
        }
    }
    return a;
}
int main()
{
    cin>>num;
    vector<int>prime;
    prime=prime_no();
    for(int i=0;i<prime.size();i++)
    {
        cout<<prime[i]<<" ";
    }
}