#include<iostream>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int c=0;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='.')
        {
            c++;
        }
    }
    cout<<c;

}
