

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int num = 22;
    int count = 0;
    
    if(num < 0) return -1;
    
    for(int i=5; num/i>0 ; i *= 5)
    {
        count += num/i;
    }
  
    cout<<"No of Zeros: "<<count<<endl;
    
    return 0; 
} 
