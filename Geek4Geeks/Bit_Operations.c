
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
