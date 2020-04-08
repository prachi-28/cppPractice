
#include <iostream>
using namespace std;

int main() {

	int nt;
	cin>>nt;

	while(nt--)
    {
        int n, deg;
        cin>>n>>deg;
        int a[n];
         for(int m=0;m<n;m++)
	    {
	        cin>>a[m];
	    }
        int i,j;
        for(i=0;i<deg;i++)
        {
            int x=a[0];
             for(j=0;j<n;j++)
             {
                 a[j]=a[j+1];
             }
             a[n-1]=x;
        }

        for(int m=0;m<n;m++)
	    {
	        cout<<a[m]<<" ";
	    }

	    cout<<endl;

    }
}
