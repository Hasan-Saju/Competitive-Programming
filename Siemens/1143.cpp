#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>dp;
    int recursion(int i, int j, string& s1, string& s2)
    {
        if(i>=s1.size() or j>=s2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];

        if(s1[i]==s2[j])
            return dp[i][j] = 1 + recursion(i+1, j+1, s1, s2);
        else
            return dp[i][j] = max(recursion(i, j+1, s1, s2), recursion(i+1, j, s1, s2));

    }
    int longestCommonSubsequence(string text1, string text2) {
        dp.assign(text1.size(), vector<int>(text2.size(), -1));
        return recursion(0,0, text1, text2);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.longestCommonSubsequence("abcde", "abcde");
}

