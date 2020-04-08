#include <iostream>
using namespace std;

int main() {

	int nt;
	cin>>nt;

	while(nt--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int m=0;m<n;m++)
            cin>>a[m];
        for(int i=1;i<n;i++)  //rotate i se n-1 times
        {

             int x=a[0];
             for(int j=0;j<n;j++)
             {
                 a[j]=a[j+1];
             }
             a[n-1]=x;

             cout<<"aaa"<<endl;

             int pos=n-i;
             if(pos<=0)
             {
                 cout<<a[1];
                 break;
             }

             for(int l=pos; l<n;l++ )
             {
                 a[l]=a[l+1];
             }

             n--;


        }


      cout<<a[1];
    }
}
