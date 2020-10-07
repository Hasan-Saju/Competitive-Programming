#include<bits/stdc++.h>
using namespace std;

#define fWrite      freopen("1out.txt", "w", stdout);
#define ll long long
int field[510][510];
int dp[510][510];
int n;

int maxBan()
{

    int i,j;
    int line=0;
    for(i=2*n-1; i>=n; i--)
    {
        ++line;
        for(j=1; j<=line; j++)
        {
            dp[i][j]=field[i][j]+max( dp[i+1][j], dp[i+1][j-1]);
        }
    }

    for(i=n-1; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            dp[i][j]=field[i][j]+max( dp[i+1][j], dp[i+1][j+1]);
        }
    }
}

int main()
{
    //fWrite
    int t;
    scanf("%d",&t);
    int i,j;

    for(int c=1; c<=t; c++)
    {
        memset(field,0,sizeof(field));
        memset(dp,0,sizeof(dp));
        scanf("%d",&n);

        for(i=1; i<=n; i++)
            for( j=1; j<=i; j++)
                scanf("%d",&field[i][j]);

        for(int z=0; z<n-1; z++)
            for(int x=1; x<=n-z-1; x++)
                scanf("%d",&field[i+z][x]);
        // cin>>field[i+z][x];

        maxBan();

//        for(i=1;i<= 2*n-1;i++){
//            for( j=1;j<=2*n-1;j++)
//                cout<<dp[i][j]<<" ";
//            cout<<"\n";

        printf("Case %d: %d\n",c,dp[1][1]);
    }

}
