#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int ans = INT_MIN;
        int l=0;
        for(int r=0; r<s.size(); r++)
        {
            if(mp.find(s[r])!=mp.end())
            {
                l = max(mp[s[r]]+1, l);
                cout<<l<<endl;
            }
            mp[s[r]]=r;
            ans = max(ans, r-l+1);
            cout<<r<<" "<<ans<<endl;
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.lengthOfLongestSubstring("abba");
}

