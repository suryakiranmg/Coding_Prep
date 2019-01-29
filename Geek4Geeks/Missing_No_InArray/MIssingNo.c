#include <stdio.h>

int main() 
{
    //code
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
      int n,i,sum,temp=0;
      scanf("%d",&n);
      sum = n*(n+1)/2;
      
      for(i=0;i<n-1;i++)
      {
         scanf("%d",&temp); 
         sum = sum - temp;
      }
      printf("%d\n",sum);
        
    }
	
	return 0;
}
