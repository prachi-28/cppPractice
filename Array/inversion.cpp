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
            int c=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               if(a[i] > a[j] && i < j)
               {
                   c++;
               }
            }
        }

        cout<<c;
        cout<<endl;
    }
    }


