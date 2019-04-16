/////////////-------Passing 2D Array for Matrix Multiplication------------/////////////
//------------Method1

#include <bits/stdc++.h> 
using namespace std; 
# define MAX 5
const int r1=4,r2=4,c1=4,c2=4;

void Multiply(int A[r1][c1],int B[r2][c2],int Res[r1][c2])
{
    for(int i=0; i<r1; i++)
    {        
        for(int j=0; j<c2;j++)
        {
            Res[i][j]=0;
            for(int k=0; k<r2;k++)
            {
                Res[i][j] += A[i][k] * B[k][j];   
            }    
            cout<<Res[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{  
  int Res[r1][c2] = {0};
  int A[r1][c1] = { {1, 1, 1, 1}, 
                     {2, 2, 2, 2}, 
                     {3, 3, 3, 3}, 
                     {4, 4, 4, 4}}; 
  
   int B[r2][c2] = { {1, 1, 1, 1}, 
                     {2, 2, 2, 2}, 
                     {3, 3, 3, 3}, 
                     {4, 4, 4, 4}};     
    if(r2 != c1)
       cout<<"Error in dimensions"<<endl;
    else 
       Multiply(A,B,Res);
    return 0;
}

