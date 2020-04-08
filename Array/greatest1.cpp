#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int prevmax=-1;
        int newmax=-1;
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]>newmax)
            {
                newmax=a[j];
            }
            a[j]=prevmax;
            prevmax=newmax;
        }
     for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }

}
