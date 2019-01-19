//--------------------------------------------------------------------------------------//
//-----Brute-force, O(n*m), bad --- nested for loops, try hash table-----//

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

//--------------------------------------------------------------------//
//O(m+n) solution using hash table/map


#include<iostream>
#include<map>
using namespace std;

int main()
{
     //Given arrays
    const char array1[] = {'a','b','c','x','g','l'};
     const char array2[] = {'z','y','u','a'}; 
     
    //Create map for array1 --> O(n)
     map<char,int> m;
     for(int i=0; i<sizeof(array1); i++)
     { 
         m.insert(pair<char,int> (array1[i], i+1) )  ;
     }
     
     //Check if array2 elements exists in map --> O(m)
     map<char, int>::iterator itr ;
     for(int i=0; i<sizeof(array2);i++)
     {
         itr = m.find(array2[i]);
         if(itr != m.end())
         {
             cout<<"True"<<endl;
             return 0;
         }
     }
     cout<<"False"<<endl;
     return 0;
 //O(m+n) 
}

