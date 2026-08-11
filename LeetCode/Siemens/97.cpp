#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>dp;
    string st1, st2, st3;

    bool ils(int i, int j)
    {
        int k=i+j;

        if(i+j>=st3.size())
            return true;
        if(dp[i][j]!=-1)
            return dp[i][j];

        bool match = false;
        bool match2 = false;
        if(i<st1.size() and st1[i]==st3[k])
            match = ils(i+1, j);
        if(j<st2.size() and st2[j]==st3[k])
            match2 = ils(i, j+1);

        return dp[i][j] = match || match2;
    }

    bool isInterleave(string s1, string s2, string s3)
    {
        dp.assign(105, vector<int>(105, -1));
        st1 = s1;
        st2 = s2;
        st3 = s3;

        if(st1.size()+st2.size()!=st3.size())
            return false;

        return ils(0,0);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isInterleave("aabcc", "dbbca", "aadbbcbcac" );
}

