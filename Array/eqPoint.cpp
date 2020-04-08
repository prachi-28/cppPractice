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
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {   flag=0;
	        int sumr=0;
	        int suml=0;

	        for(int k=0;k<i;k++)
	        {
	            suml=suml+a[k];

	        }

	        for(int j=i+1;j<n;j++)
	        {
	            sumr=sumr+a[j];

	        }

	        if(suml==sumr)

	        {
                flag=1;
	         cout<<i+1<<endl;
	         break;
	        }

	    }
	    if(flag==0)
        {
            cout<<-1<<endl;

        }
	}


	return 0;
}
