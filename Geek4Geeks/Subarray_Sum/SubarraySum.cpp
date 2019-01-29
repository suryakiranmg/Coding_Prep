#include <iostream>
using namespace std; 

int main() 
{ 
	int testcase; 
	cin >> testcase;
	while(testcase--) 
	{
		// Input Data
		int n; long sum;
		cin >> n >> sum;
		int a[n + 1];
		for(int i = 0; i < n; i += 1)  cin >> a[i];
		//Process Data
		long sum_t = a[0]; int start = 0, end = 0;
		while(start < n && end < n) 
		{
			if(sum_t == sum) break;
			else if(sum_t < sum) 
			{
				end ++;
				if(end < n) sum_t += a[end];
			}
			else if(sum_t > sum) 
			{
				if(start == end) 
				{
					start ++; end ++;
					sum_t = a[start];
				} 
				else 
				{
					sum_t -= a[start];
					start ++;
				}
			}
		}
		if(start < n && end < n) 
	        cout << ++start << " " << ++end << endl;
		else 	
		    cout << -1 << endl;
	}
	return 0; 
}
