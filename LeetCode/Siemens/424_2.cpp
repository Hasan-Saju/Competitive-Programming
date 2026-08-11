#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        unordered_map<char, int>mp;
        int l=0;
        int len = 0;
        int maxf=0;
        for(int r=0; r<s.size(); r++)
        {
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);

            while(r-l+1-maxf>k)
            {
                mp[s[l]]--;
                l++;
            }
            len = max(len, r-l+1);
        }

        return len;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.characterReplacement("ABAB",2);
}
