
#include <bits/stdc++.h> 
using namespace std; 
  
int main()
{
    vector<int> A={1,1,0,1,1,1,0,0,1,1,0,1,1,1,1,0,0,0};
    int counter = 0, highest_count = 0;
    
    for(int i = 0; i<A.size();i++)
    {
        if(A[i]==1)
        {
            counter++;
            highest_count = max(counter,highest_count);
        }
        else
        {
            counter = 0;
        }
    }
    cout<<"Highest count: "<<highest_count;
    return 0;
}
