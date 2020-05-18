#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX

int ara[50][50], dp[50][50];
int main()
{
    int n,m;
    cin>>n>>m;              //n=number of row and m=num of col

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ara[i][j];
        }
    }

    for(int i=1;i<=m+1;i++)
        dp[n+1][i]= INF;

    for(int i=1;i<=n+1;i++)
        dp[i][m+1]= INF;

    dp[n][m+1]=0;
    dp[n+1][m]=0;

    for(int i=n;i>=1;i--)
    {
        for(int j=m;j>=1;j--)
        {
            dp[i][j]= ara[i][j]+ min( dp[i+1][j] , dp[i][j+1] );   ///max path hole max dilei hobe // jawar aro way thakle ogular moddhe min ber kortam
        }
    }


     for(int i=1;i<=n;i++)  ///dp array te prottek ghore oi cell theke [n][m] a jawar jonno min cost ase
    {
        for(int j=1;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


}


///test input
/*
 n=3 m=4
 5 1 2 6
 9 9 7 5
 3 1 4 8
*/
