#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>dp(s.size(), false);
        dp[s.size()] = 1;

        for(int i = s.size()-1; i>=0; i--)
        {
            for(int j=0; j<wordDict.size(); j++)
            {
                if(i+wordDict[j].size() <= s.size() and wordDict[j]==s.substr(i, wordDict[j].size()))
                {
                    //cout<<"here\n";
                    dp[i] = dp[i + wordDict[j].size()];
                    if(dp[i])
                        break;
                }
            }
            //cout<<i<<" "<<dp[i]<<"\n";
        }
        return dp[0];
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"apple","pen"};
    string s = "applepenapple";
    cout<<obj.wordBreak(s, vec);
}

