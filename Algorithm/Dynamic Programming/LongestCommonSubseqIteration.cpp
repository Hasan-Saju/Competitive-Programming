#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];  //dp[n+1][m+1]
int n,m;

int lcs(string first, string second)
{

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

int main()
{
    string first,second;
    cin>>first>>second;

     n= first.size();
     m=second.size();

     cout<<lcs(first,second);

}
