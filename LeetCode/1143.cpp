
int longestCommonSubsequence(string first, string second)
{
    int n=first.size();
    int m=second.size();

    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(first[i] == second[j])
                dp[i+1][j+1]= 1 + dp[i][j];   //kona kunir sathe 1 plus //string 0 based tai
            else
                dp[i+1][j+1]= max(dp[i+1][j],dp[i][j+1]);
        }
    }

    return dp[n][m];

}
