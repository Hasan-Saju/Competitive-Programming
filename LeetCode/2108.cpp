#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i=0, j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words)
    {
        for(auto x: words)
            if(isPalindrome(x))
                return x;
        return "";
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"abc","car","ada","racecar","cool"};
    cout<<obj.firstPalindrome(vec);
}

