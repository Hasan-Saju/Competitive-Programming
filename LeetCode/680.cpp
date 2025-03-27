#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validPalindrome(string s)
    {
        int k=0;
        for(int i=0, j=s.size()-1; i<=j; i++, j--)
        {
            if(s[i]!=s[j])
            {
                return checkPal(s.substr(0, i)+s.substr(i+1))
                       ||checkPal(s.substr(0, j)+ s.substr(j+1));
            }
        }
        return true;
    }

    bool checkPal(string s)
    {
        for(int i=0, j=s.size()-1; i<=j; i++, j--)
        {
            if(s[i]!=s[j])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.validPalindrome("abca");
}

