#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l,n,i1,j1,k1;
    cin>>n;
    
    for(i=1;i<=((n/2)+1);i++)
    {
         for(k=(n-1);k>=i;k--)
        {
        cout<<" ";
        }
         for(j=1;j<=((i*2)-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
    for(i1=((n/2)-1);i1>=1;i1--)
    {
         for(k1=1;k1<((n/2)-1);k1++)
        {
        cout<<" ";
        }
         for(j1=i1;j1>=1;j1--)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
    
    
    
    
    return 0;
}