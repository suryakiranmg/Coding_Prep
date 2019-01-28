#include<bits/stdc++.h>
using namespace std;

ifstream In("data.in");
ofstream Out("data.out");

# define NO_OF_CHARS 256


bool IsPermutationPalindrome(string str)
{
    //Preprocess - remove spaces
    for
    
    int count[NO_OF_CHARS] = {0};
    
    for(int i=0; i< str.length(); i++)
        count[str[i]]++;
    
    int odd_count = 0;
    for(int i=0; i< NO_OF_CHARS; i++)
    {
        if(count[i] & 1) odd_count ++;
        if(odd_count>1) return false;
    }
    return true;
    
}


int main()
{
 IsPermutationPalindrome("suki g suki")? cout<<"YES"<<endl : cout<<"NO"<<endl;
 IsPermutationPalindrome("this doesn't work")? cout<<"YES"<<endl : cout<<"NO"<<endl;
 IsPermutationPalindrome("this does! n this does!")? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
