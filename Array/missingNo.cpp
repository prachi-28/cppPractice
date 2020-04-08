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
        int arr[n];

        for(int i=0;i<n-1;i++)
            cin>>arr[i];
        int tsum=((n*(n+1))/2);
        int asum=0;
        for(int j=0;j<n-1;j++)
        {
            asum=asum+arr[j];
        }
        int ans=tsum-asum;
        cout<<ans<<endl;
       // break;

    }

}

