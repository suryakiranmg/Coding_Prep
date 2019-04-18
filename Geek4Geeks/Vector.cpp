///////------------// CPP implementation for Adding one to number represented by digits //------------------/////

#include <bits/stdc++.h> 
using namespace std; 
  
// function for adding one to number 
void incrementVector(vector<int> &A) 
{   
   int carry;
   //Remove any zero's at the beginning
   while((A.size() != 1) && (*(A.begin()) ==0 ))
        A.erase(A.begin());
   //Do the operation
   for(auto itr = A.rbegin(); itr != A.rend(); ++itr) 
    {
       if(*itr==9)
       {
           *itr = 0;
           carry =1;
           continue;
       }
       else
       {
           *itr = *itr + 1;
           carry = 0;
           break;
       }
    }
   //Insert a digit if there is overflow
    if((*(A.begin()) == 0)&&(carry == 1))
          A.insert(A.begin(),1); 
} 
  
// driver code 
int main() 
{ 
    vector<int> vect={0,0,1,3};    
    incrementVector(vect); 
    //print result
    for (int i=0; i<vect.size(); i++) 
       cout << vect[i] << " "; 
    return 0; 
} 
