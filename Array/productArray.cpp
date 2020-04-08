
#include<stdio.h>
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
        for(int m=0;m<n;m++)
            cin>>a[m];
        int i,j;
        int prod=1;
        for(i=0;i<n;i++)
            prod=prod*a[i];
        int p[n];
        for(j=0;j<n;j++)
        {
            p[j]=prod/a[j];
        }

          for(int m=0;m<n;m++)
            cout<<p[m]<<" ";

            cout<<endl;
    }
}
