#include<iostream>
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

       // int c[n+m];

        int i=0,j=0,k=0;

        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                cout<<a[i++]<<" ";

            }

           else
            {
                cout<<b[j++]<<" ";


            }


        }

        while(i<n)
        {

            cout<<a[i++]<<" ";


        }

        while(j<m)
        {
            cout<<b[j++]<<" ";


        }






    }
}
