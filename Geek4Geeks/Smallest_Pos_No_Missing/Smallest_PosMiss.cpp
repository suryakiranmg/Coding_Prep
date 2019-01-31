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

