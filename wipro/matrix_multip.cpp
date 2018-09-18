#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter size of matrix"<<endl;
    int r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;
    int a[r1][c1],b[r2][c2],mul[r1][c2];
    //input of matrix
    for(int i=0;i<r1;++i)
    {
        for(int j=0;j<c1;++j)
        {
            cin>>a[i][j];
        }
    }
     
    
    for(int i=0;i<r2;++i)
    {
        for(int j=0;j<c2;++j)
        {
            cin>>b[i][j];
        }
    }
   //matrix initializing with zero
    for(int i=0;i<r1;++i)
    {
        for(int j=0;j<c2;++j)
        {
            mul[i][j]=0;
        }
    }
    
        for(int i=0;i<r1;++i)
        {
            for(int j=0;j<c2;++j)
            {
                for(int k=0;k<c1;++k)
                {
                    mul[i][j] += a[i][k]*b[k][j];
                }
            }
        }
    
    
    
    //output of MATRIX
     cout << endl << "Output Matrix: " << endl;
        for(int i = 0; i < r1; ++i)
        {
            for(int j = 0; j < c2; ++j)
            {
                 cout <<mul[i][j]<<" ";
            }    
                 cout << endl;
        }
    return 0;
}