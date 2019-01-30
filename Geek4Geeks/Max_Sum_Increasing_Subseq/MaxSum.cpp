#include <iostream>
using namespace std;

int main() 
{
    int testcase; cin >> testcase;
	while(testcase--) 
	{
		// Input Data
		int n; cin >> n;
		int a[n], temp[n];
		for(int i=0; i<n; i++) 
		{
		    cin>>a[i]; temp[i]=a[i];
		}
		
		for(int i=0; i<n;i++)
		{
		    for(int j=0; j<i;j++)
		    {
		        if( (a[i]>a[j]) && ((temp[j]+a[i])>temp[i]) )
		         temp[i] = temp[j]+a[i];
		    }
		}
		int max = 0;
		for(int i=0;i<n;i++)
		{
		    if(max<temp[i]) max = temp[i];
		}
		cout<<max<<endl;
		
	}

	return 0;
}
