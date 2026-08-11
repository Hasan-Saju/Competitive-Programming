#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>dp;
    string a,b;
    int n,m;
    int editDistance(int i, int j)
    {
        if(i>=n)
            return m-j;
        if(j>=m)
            return n-i;
        if(dp[i][j]!=-1)
            return dp[i][j];

        int result;

        if(a[i]==b[j])
            result = editDistance(i+1, j+1);
        else
        {
            int rep = editDistance(i+1, j+1);
            int del = editDistance(i+1, j);
            int ins = editDistance(i, j+1);

            result = 1 + min( {rep, del, ins} );
        }

        return dp[i][j] = result;
    }

    int minDistance(string word1, string word2)
    {
        a=word1;
        b=word2;
        n=a.size();
        m=b.size();

        dp.assign(n+5, vector<int>(m+5,-1));

        return editDistance(0,0);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.minDistance("horse", "ros");
}

