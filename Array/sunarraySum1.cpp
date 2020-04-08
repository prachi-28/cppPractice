#include<iostream>
using namespace std;

int main()
{
   int nt;
   cin>>nt;

   while(nt--)
   {
       long int a[100000];
       long int n,sum;

       cin>>n;

       cin>>sum;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int c_sum=a[0];
    int i=0,j=0,flag=0;
    for(int k=0;k<n;k++)
    {
        if(c_sum<sum)
        {   j++;
            c_sum=c_sum+a[j];

        }
        else if(c_sum>sum)
        {
            c_sum=c_sum-a[i];
            i++;

        }
        else{
                flag=1;
            break;
        }

    }
    if(flag==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<i+1<<" "<<j+1<<endl;
    }
   }


    return -1;


}
