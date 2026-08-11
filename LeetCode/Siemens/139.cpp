#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        vector<int>dp(s.size()+1, 0);
        dp[s.size()]=1;

        for(int i=s.size()-1; i>=0; i--)
        {
            for(int j=0; j<wordDict.size(); j++)
            {
                if(i+wordDict[j].size()<=s.size()
                        and wordDict[j]==s.substr(i, wordDict[j].size()))
                {
                    //cout<<s.substr(i, wordDict[j].size())<<endl;
                    dp[i] = dp[i+wordDict[j].size()];
                    if(dp[i])
                        break;
                }
            }
        }
        return dp[0];
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"leet", "code"};
    cout<<obj.wordBreak("leetcode", vec);
}

