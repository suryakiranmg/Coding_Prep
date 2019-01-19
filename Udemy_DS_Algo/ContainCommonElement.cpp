#include<iostream>
using namespace std;

int main()
{
     char array1[] = {'a','b','c','x'};
     char array2[] = {'z','y','x'}; 
     
    for(int i=0; i<sizeof(array1); i++)
        for(int j=0; j<sizeof(array2); j++)
        {
            if(array1[i]==array2[j])
            {
                cout<<"True";
                return 0;
            }
        }
    cout<<"False";
}
