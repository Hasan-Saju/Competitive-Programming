#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1 = s;
        string s2 = s;
        reverse(s2.begin(), s2.end());

        vector<vector<int>>dp(s1.size()+1, vector<int>(s2.size()+1,0));
        for(int i=s1.size()-1; i>=0; i--)
        {
            for(int j=s2.size()-1; j>=0; j--)
            {
                if(s1[i]==s2[j])
                    dp[i][j] = 1+dp[i+1][j+1];
                else
                    dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }

        return dp[0][0];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.longestPalindromeSubseq("bbbab");
}

