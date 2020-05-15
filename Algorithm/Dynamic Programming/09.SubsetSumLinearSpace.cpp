#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[105];
    int n,sum;
    cin>>n>>sum;

    for(int i=1;i<=n;i++)
        cin>>ara[i];

    bool dp[sum+1];
    memset(dp,0,sizeof(dp));

    dp[0]=1;

    for(int i=1;i<=n;i++)
    {
        int current=ara[i];
        for(int j=sum;j>=current;j--)
        {
            if(dp[j]==1 or ( dp[j-current]==0 ))    //current jodi 1 hoy taile to ar kisu kora lagtese na
                continue;                           //ar dp[j-current]=0 hoile to ar ekhoner ta ! korte parbo na tai ja ase tai thakbe
            else
                dp[j]=1;
        }
    }

    for(int i=0;i<=sum;i++)
        cout<<dp[i]<<" ";       //dp[i]==1 hole  sum=i  gula pawa possible
}
