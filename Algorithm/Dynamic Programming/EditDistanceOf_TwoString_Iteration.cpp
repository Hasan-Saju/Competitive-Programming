#include<bits/stdc++.h>
using namespace std;



int main()
{
    fast
    string f,s;
    cin>>f>>s;
    int x=0;

    int a=f.size();
    int b=s.size();

    int dp[a+1][b+1];
    memset(dp,-1,sizeof(dp));

    for(int i=0; i<=f.size();i++)
            dp[i][0]=x++;


     x=0;
     for(int i=0; i<=s.size();i++)
            dp[0][i]=x++;

    for(int i=0; i<=f.size();i++)
    {
        for(int j=0; j<=s.size();j++)
        {
            if(dp[i][j]== -1 && f[i-1]!=s[j-1])
            {
                dp[i][j]= min3( dp[i-1][j], dp[i-1][j-1],dp[i][j-1] )+1;
            }
            else if(dp[i][j]== -1 && f[i-1]==s[j-1])  //shoman hoile konakuni value ta
            {
                dp[i][j]= dp[i-1][j-1];
            }
        }
    }

    cout<<dp[f.size()][s.size()];

}


