#include<stdio.h>
#include <algorithm>
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
        int m;
        cin>>m;

        sort(a,a+n);
        int minDiff=a[n-1];
        for (int i=0; i+m-1<n; i++)
        {
            int diff=a[i+m-1]-a[i];
            if(diff<minDiff)
            {
                minDiff=diff;

            }
        }

        cout<<minDiff<<endl;


    }
}



