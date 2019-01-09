
#include <bits/stdc++.h> 
using namespace std; 
  
int main()
{
    vector<int> nums = {3,2,1,5,6,4};
    int k=2;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<nums.size();i++)
    {
        if(pq.size()<k)
        {pq.push(nums[i]);}
        else
        {
            if(pq.top()<nums[i])
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    cout<<pq.top()<<endl;
    return 0;
}
