#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string neww="";
        for(int i=0; i<s.size(); i++)
        {
            if(isalnum(s[i]))
                neww+= tolower(s[i]);
        }

        string rev=neww;
        reverse(rev.begin(), rev.end());

        return neww==rev ? true:false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isPalindrome("Hl lh");
}

