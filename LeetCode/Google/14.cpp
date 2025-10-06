#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans;
        vector<int>v(26,0);
        int i=0;
        while(true)
        {
            int val = 0;
            char ch;
            for(auto s: strs)
            {
                if(i>=s.size())
                    return ans;

                v[s[i]-'a']++;
                ch = s[i];
            }

            if(v[ch-'a']==strs.size())
            {
                v[ch-'a'] = 0;
                ans+=ch;
            }
            else
                return ans;
            i++;
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"flower","flow","flight"};
    cout<<obj.longestCommonPrefix(vec);
}

