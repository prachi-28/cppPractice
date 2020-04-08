#include<iostream>
using namespace std;

int main()
{
    int nt;
    cin>>nt;
    while(nt--)
    {
         char pal[20];
  //  int flag[20]={0};
    cin.getline(pal,20);
    int l=0;

    for(int m=0;pal[m]!='\0';m++)
    {
        l++;
    }

    int i=0,j=l-1;
  //  cout<<j;
    int flag=0;
    while(i<j)
    {
          //   cout<<"aaa"<<endl;
        if(pal[i]==pal[j])
        {
          flag=1;
         // break;
        }

        else
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }

    if(flag==1)
    {
        cout<<"Yes"<<endl;

    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    cout<<endl;

}




