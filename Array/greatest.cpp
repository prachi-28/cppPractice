#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int nt;
    cin>>nt;
    while(nt--)
    {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
            cin>>a[i];

     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         { // cout<<*max_element(a+i+1, a + n)<<" ";
             a[i]=*max_element(a+i+1, a + n);

         }
     }
     a[n-1]=-1;

      for(int m=0;m<n;m++)
         {
             cout<<a[m]<<" ";
         }

    cout<<endl;

    }
}
