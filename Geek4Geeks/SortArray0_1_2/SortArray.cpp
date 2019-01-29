#include <iostream>
using namespace std;

int main() 
{
	int testcase; cin>>testcase;
	while(testcase--)
	{
	 //Inputs
	 int n; cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++) cin>>a[i];
	 //----------------------------------------
	 int count0 =0, count1 =0, count2 =0;
	  for(int i=0;i<n;i++)
	  {
	     switch(a[i])
	     {
	     case 0:
	        count0++; break;
	     case 1:
	        count1++; break;
	     case 2:
	        count2++;break;
	     default:
	        cout<<-1<<endl;
	     }
	  }
	  
	  for(int i=0; i<count0;i++) cout<<0<<" ";
	  for(int i=0; i<count1;i++) cout<<1<<" ";
	  for(int i=0; i<count2;i++) cout<<2<<" ";
	  cout<<endl;

	 //----------------------------------------
	}
	
	return 0;
}
