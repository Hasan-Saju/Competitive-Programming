#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        vector<vector<int>>dp(word1.size()+1, vector<int>(word2.size()+1, -1));

        for(int i=0; i<=word1.size(); i++)
            dp[i][word2.size()] = word1.size()-i;

        for(int j=0; j<=word2.size(); j++)
            dp[word1.size()][j] = word2.size()-j;

        for(int i=word1.size()-1; i>=0; i--)
        {
            for(int j=word2.size()-1; j>=0; j--)
            {
                if(word1[i]==word2[j])
                    dp[i][j] = dp[i+1][j+1];
                else
                    dp[i][j] = 1 + min(dp[i+1][j+1], min(dp[i+1][j], dp[i][j+1]));
            }
        }

        return dp[0][0];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.minDistance("abd", "ac");
}

