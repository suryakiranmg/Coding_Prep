#include <iostream>
using namespace std;

int main() {
	//code
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
      int n,sum,temp=0;
      cin>>n;
      sum = n*(n+1)/2;
      
      for(int i=0;i<n-1;i++)
      {
         cin>>temp; 
         sum -= temp;
      }
      cout<<sum<<endl;
        
    }
	return 0;
}
