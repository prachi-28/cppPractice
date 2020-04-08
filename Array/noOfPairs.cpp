#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nt;
    cin>>nt;
    while(nt--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int l=0;l<n;l++)
            cin>>a[l];
        for(int l=0;l<m;l++)
            cin>>b[l];
        int i,j;
        int c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                double g=pow(a[i],b[j]);
                double f=pow(b[j],a[i]);
                if(g>f)
                {
                    c++;
                }
            }
        }

        cout<<c<<endl;
    }
}
