#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isInterleave(string s1, string s2, string s3)
    {
        vector<vector<bool>>dp(s1.size()+1, vector<bool>(s2.size()+1,false));

        if(s1.size()+s2.size()!=s3.size())
            return false;

        dp[s1.size()][s2.size()]=true;
        for(int i=s1.size(); i>=0; i--)
        {
            for(int j=s2.size(); j>=0; j--)
            {
                if(i<s1.size() and s1[i]==s3[i+j] and dp[i+1][j])
                    dp[i][j]=true;
                if(j<s2.size() and s2[j]==s3[i+j] and dp[i][j+1])
                    dp[i][j]=true;
            }
        }

        return dp[0][0];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isInterleave("a", "a", "aa");
    //cout<<obj.isInterleave("aabcc", "dbbca", "aadbbcbcac");
}

