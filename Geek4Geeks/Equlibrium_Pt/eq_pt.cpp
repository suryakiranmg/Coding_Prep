#include <iostream>
using namespace std;

int main()
{
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int n; cin>>n;
	    int a[n], sum =0; 
	    for(int i=0; i<n; i++) 
	    {
	        cin>>a[i];
	        sum += a[i];
	    }
	    int sum_l = 0, sum_r = (sum-a[0]);
	    bool equ_flag = 0;
	    for(int i=0; i<n; i++)
	    {
	       if(sum_l == sum_r)
	       {
	        cout<<i+1<<endl;
	        equ_flag = 1;
	        break;
	       }
	        sum_l += a[i];
	        sum_r -= a[i+1];
	    }
	  if(equ_flag == 0) cout<<-1<<endl;
	}
	return 0;
}
