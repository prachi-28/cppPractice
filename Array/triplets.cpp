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
        int i,j,k;
        int c=0;
    int x;
    sort(a,a+n);

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
              else
              {
                  x=a[i]+a[j];
              }

               for(k=0;k<n;k++)
               {  // cout<<a[k]<<endl;
                   if(a[k]==x)
                   {   // cout<<a[k]<<" "<<x<<endl;
                       c++;
                       break;
                   }


               }



            }
        }

        cout<<c;
    }
}
