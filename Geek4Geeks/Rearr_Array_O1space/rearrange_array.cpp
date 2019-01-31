#include<iostream>
using namespace std;
int main()
 {
	int testcase; cin >> testcase;
	while(testcase--) 
	{
		// Input Data
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		
		for (int i=0; i < n; i++) 
        a[i] += (a[a[i]]%n)*n; 
  
    
        for (int i=0; i<n; i++) 
        {
        a[i] /= n; cout<<a[i]<<" ";
        }
         cout<<endl;
	}
	return 0;
}
