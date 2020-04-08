// A leader in an array is that element which is greater than or equal to the elements to the right of it. Rightmost ele is always a leader

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
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }

      //   int ans[n];
       //  int m=0;
         for(int j=0;j<n;j++)
         {
            int flag=0;
            int temp=arr[j];
             for(int k=j+1;k<n;k++)
             {
                 if(temp<arr[k])
                 {
                     flag=1;
                     break;

                 }
             }


             if(flag==0)
             {
                 cout<<temp<<" ";
                 //ans[m]=temp;
                 //m++;
             }
         }

        // for(int n=0;n<m;n++)
           // cout<<ans[n]<<" ";

        // cout<<arr[n-1];

       cout<<endl;
     }
 }
