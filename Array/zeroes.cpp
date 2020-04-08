
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
        int a[n];
        for(int m=0;m<n;m++)
            cin>>a[m];
        int i,j;
        int c=0;

        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
        }
        for(i=0;i<n-c;i++)
        {
            if(a[i]==0)
            {
               // c++;
                int x=a[i];

                for(j=i;j<n-1;j++)
                {
                    a[j]=a[j+1];

                }
                a[n-1]=x;
            }
        }
        //for(int l=c;l<n;l++)
       //     a[l]=0;

         for(int m=0;m<n;m++)
         {
             cout<<a[m]<<" ";
         }





            cout<<endl;






    }
}


/*

SASTA JUGAAAAD

#include<iostream>
using namespace std;



int main()
 {
	int t ;
	cin >> t ;
	while(t--){
	    int n , i , c = 0 ;
	    cin >> n ;
	    int a[n] ;
	    for(i=0;i<n;i++){
	        cin >> a[i] ;
	        if(a[i] == 0)
            {
	            c++ ;
	        }
	        else{
	            cout << a[i] << " " ;
	        }
	    }
	    for(i=0;i<c;i++){
	        cout << "0 " ;
	    }
	    cout << endl ;
	}


}

*/
