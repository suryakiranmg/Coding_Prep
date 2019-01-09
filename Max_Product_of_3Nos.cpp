
#include <bits/stdc++.h> 
using namespace std; 
  
int main()
{
    vector<int> A={4,3,-6,0,10,2,7,11};
    int max1=-1001, max2=-1001, max3=-1001, min1=1001, min2=1001, result = 1001;
    
    for(int i = 0; i<A.size();i++)
    {
        if(A[i]>=max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = A[i];
        }
        else if(A[i]>=max2)
        {
            max3 = max2;
            max2 = A[i];
        }
        else if (A[i]>=max3)
        {
            max3 = A[i];
        }
        
       if(A[i]<=min1)
        {
            min2 = min1;
            min1 = A[i];
        }
        else if(A[i]<=min2)
        {
            min2 = A[i];
        }
    }
    result = max(max1*max2*max3, min1*min2*max1);
    
    cout<<"Max of product of 3 no.s: "<<result<<endl;
    cout<<min1<<" "<<min2<<" "<<max3<<" "<<max2<<" "<<max1;
    return 0;
}
