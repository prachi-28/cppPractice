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
        int i,j, temp;
        for(int k=0;k<n;k++)
            cin>>arr[k];
        for(i=1;i<n;++i)
	     {
		       for(j=0;j<(n-i);++j)
			   if(arr[j]>=arr[j+1])
			    {
			  	   temp=arr[j];
				   arr[j]=arr[j+1];
				   arr[j+1]=temp;
                }
	     }

	     	for(i=0;i<n;++i)
		       cout<<arr[i]<<" ";

		       cout<<endl;


    }
}
