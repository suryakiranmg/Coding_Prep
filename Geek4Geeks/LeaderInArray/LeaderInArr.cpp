#include <iostream>
using namespace std;

int main() 
{
	// Input Data
 int testcase; cin >> testcase;
 while(testcase--) 
    {
	 // Input Data
	 int n; cin >> n;
	 int a[n]; 
	 for(int i=n-1; i>=0; i--) cin>>a[i];
	 
	 int ans[n],k=0;
     ans[0]=a[0];
	 for(int i=1; i<n;i++)
	 {
	   if(a[i] >= ans[k])  ans[++k]= a[i];
	 }
	
	 for(int i=k;i>=0;i--)
	 cout<<ans[i]<<" ";
	
	 cout<<endl;
    }
    
	return 0;
}
