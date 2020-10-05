#include<iostream>
using namespace std;

int main()

{    
        int n,k;
        
        cout<<"Enter no : ";
        cin>>n;
 
        for(int j=1;j<=n;j++)
        {
               for(k=(n-1);k>=j;k--)
                   {
                       cout<<" ";
                   }
               for(int i=1;i<j+1;i++)
                   {
                       cout<<"*";
                   }     
           cout<<endl;
        }      
 }
