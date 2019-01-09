
#include <bits/stdc++.h> 
using namespace std; 
  
int main()
{
    string s ="abcdefg", t ="abcdefg";
    
    unordered_map<char, int> H;
    
    for(int i=0;i<s.size();i++)
        H[s[i]]++;
    for(int i=0;i<t.size();i++)
        H[s[i]]--;
    for(auto x:H)
    { 
        if(x.second != 0)
        {
            cout<<"Not an anagram";
            return 0;
        }                  
    }
    cout<<"Anagram";
    return 0;
}
