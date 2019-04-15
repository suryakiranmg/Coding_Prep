
//################ ------******-----  Program to find the two odd occurring elements  -------**********----################### //

#include <stdio.h>
#include <stdlib.h>

void FindTwoOdd(int arr[], int size)
{
    int ans = arr[0];
    //Get XOR of all elements
    for(int i=1;i<size;i++)
        ans ^= arr[i];
    //Get the number with position of 1st set bit from right of ans
    int set_bit_no = ans & ~(ans -1);
    
    /* Now divide elements in two sets:  
        1) Elements having the corresponding bit as 1.  
        2) Elements having the corresponding bit as 0.  */
    int x=0,y=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] & set_bit_no)
            x ^= arr[i];
    }
    y = ans ^ x;
    printf("\nThe results: (%d, %d)",x,y);
    
}

int main()
{
    int arr[] = {3,3,11,21,7,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    FindTwoOdd(arr,arr_size);
    return 0;
}

//################ ------******-----  Program to ADD two numbers without arithmetic operators  -------**********----################### //
#include <stdio.h>
#include <stdlib.h>

int AddbyXOR(int x, int y)
{
    //Iterate till no carry
    while(y != 0)
    {
     //carry
        int carry = x & y;
      //Sum
        x = x^y;
      //Carry is shifted by one, adding it to x gives sum
        y = carry<<1;       
    }
return x;    
}

int main()
{
    //Add two numbers without using arithmetic ops
    //Use Half adder logic, Sum = A ^ B, Carry = A & B
    printf("Sum is:%d ",AddbyXOR(-5,6));
    return 0;
}

//################ ------******-----  Program to Swap Bit positions using XOR  -------**********----################### //
#include <stdio.h>
#include <stdlib.h>

int SwapBits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
{
   // Move all bits of first set to rightmost side 
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);  
  
    // Move all bits of second set to rightmost side
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);  
  
    // XOR the two sets 
    unsigned int Xor_Sum = (set1 ^ set2);  
  
    // Put the XOR bits back to their original positions 
    Xor_Sum = (Xor_Sum << p1) | (Xor_Sum << p2);  
  
    // XOR the 'Xor_Sum' with the original number to swap the 2 sets     
    unsigned int result = x ^ Xor_Sum;  
  
    return result;   

}

int main()
{
    /*Swap two set of bits; start positions from 
     right & no of bits to be swapped are given */
    int ans = SwapBits(28,0,3,2);
    printf("Answer is: %d",ans);
    return 0;
}

//###### ------****-----Count number of bits to be flipped to convert A to B------****----####### //
#include <stdio.h>
#include <stdlib.h>

int CountSetBits(int n)
    {
        int count =0;
        while(n)
        {
            count += n&1;
            n >>= 1;
        }
        return count;
    }
int FlippedBits(int a, int b)
    {
      return CountSetBits(a^b);   
    }

int main()
    {
        printf("Answer is: %d",FlippedBits(10,7));
        return 0;
    }

//###### ------****-----Detect if two integers have opposite signs------****----####### //

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool OppositeSigns(int a, int b)
{
  return((a^b)<0);   
}

int main()
{
    if((OppositeSigns(100,-50)==true))
        printf("Signs are opposite");
    else
        printf("Signs are not opposite");
    return 0;
}

//###### ------****-----Reverse a STRING---C++------****----####### //
#include <bits/stdc++.h> 
using namespace std; 

void ReverseString(string &str)
{
  int temp, n = str.length();
  for(int i=0; i<n/2 ; i++)
  {
    temp = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = temp;
  }
}

int main()
{
    string str = "This is cool, Suryakiran";
    ReverseString(str);
    cout<<str<<endl;
    return 0;
}





