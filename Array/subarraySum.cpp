#include<iostream>
using namespace std;

int main()
{
    int nt;
    //cout<<"Enter number of test cases"<<endl;
    cin>>nt;
    while(nt--)
    {
        int n,s;
       // cout<<"Enter n and s"<<endl;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int temp=0;
        int j,k;
        int flag;
        for(j=0;j<n;j++)
        {   temp=arr[j];// change
            flag=0;
            for(k=j+1;k<n;k++)
            {

                    temp=temp+arr[k];

                 if(temp==s)
                  {
                     // cout<<"output is"<<endl;

                      cout<<j+1<<" "<<k+1<<endl;
                      flag=1;
                        break;
                  }

                  else
                  {
                      flag=0;
                  }




            }
            if(flag==1)
            {

                break;
            }
        }
        if(flag==0)
        cout<<-1;


    }


    return -1;

}
