#include<bits/stdc++.h>
using namespace std;
int field[500][500];
int dp[500][500];

int main()
{
    int t;
    cin>>t;
    for(int c=1; c<=t; c++)
    {
        memset(field,0,sizeof(field));
        memset(dp,0,sizeof(dp));
        int n;
        cin>>n;

        for(int i=1; i<=n; i++)
            for(int j=1; j<=i; j++)
                cin>>field[i][j];

        for(int i=1; i<=n; i++)
            dp[n][i]=field[n][i];

        for(int i=n-1; i>=1; i--)
        {
            for(int j=1; j<=i; j++)
            {
                dp[i][j]=field[i][j]+ max( dp[i+1][j], dp[i+1][j+1] );
            }
        }

        cout<<dp[1][1]<<"\n";

    }
}





