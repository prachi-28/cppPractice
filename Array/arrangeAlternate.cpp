#include <bits/stdc++.h>
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
        sort(a, a+n);

        int i=0;
        int j=n-1;
        if(n==1)
         cout<<a[0];
        while(i<j)
        {


            cout<<a[j]<<" ";
            j--;

             cout<<a[i]<<" ";
            i++;

            if(i==j)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}


