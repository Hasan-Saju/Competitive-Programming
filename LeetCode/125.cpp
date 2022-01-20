#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string sm="";

        for(auto ch:s)
            if(isalnum(ch))
                sm+= tolower(ch);
        //cout<<sm;
        bool pal=true;
        int n=sm.size();
        for(int i=0;i<n/2;i++)
        {
            if(sm[i]!=sm[n-i-1])
                pal=false;
        }
        //cout<<pal;
        return pal;
    }
};

int main()
{
    Solution obj;
    vector<char>vec = {'h','e','l','o'};
    obj.isPalindrome("A man, a plan, a canal: Panama");
}



