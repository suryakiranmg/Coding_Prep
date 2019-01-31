//Find the smallest positive number missing from an unsorted array

//You are given an unsorted array with both positive and negative elements. You have to find the smallest positive number //missing from the array in O(n) time using constant extra space. You can modify the original array.

--------------------------------------//Brute Force//-----------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~BAD - takes O(n^2)~~~~~~~~~~~~~~~~~~~~~~~~~~//

#include<iostream>
using namespace std;

int main()
{
    int A[] = {0,-1,-10,-2,-10,-20};
    int n= 6;
    // write your code in C++14 (g++ 6.2.0)
    bool flag;int i;
    for(i=1; i<100000; i++)
    {
        flag = 0;
        for(int j=0; j < n;j++)
        {
            if(A[j] == i)
            {
             flag = 1;break;
            }
        }
        if(flag == 0)  break;
    }
    cout<<i;
    return 0;
}

//////////////////////Logic not fully done!!!!!!!!!!!!!!!!!!!!!!!!!!

#include<iostream>
using namespace std;

int main()
{
    int A[] = {2, 3, 7, 6, 8, -1, -10, 15};
    int n= 8;
    // write your code in C++14 (g++ 6.2.0)
    for(int i=0; i<n; i++)
    {
        if((A[i]<1)||(A[i]>n) )
                A[i]=0;
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
        if(A[i]>0) count++;
    }
    cout<<endl<<count<<endl;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]>count) 
        { A[i]=0; 
        }
        sum += A[i];
        cout<<A[i]<<" ";
    }
    
    int ans = (count*(count+1)/2) - sum;
    cout<<endl<<ans<<endl;
    
   
    return 0;
}
