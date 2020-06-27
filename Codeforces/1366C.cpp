#include<bits/stdc++.h>
using namespace std;

int ara[30][30];
int cnt[60][2];
int n,m;

void input()
{
    cin>>n>>m;
    memset(ara,0,sizeof(ara));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ara[i][j];
        }
    }

}

void solve()
{
    memset(cnt,0,sizeof(cnt));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(ara[i][j]==0)
                cnt[i+j+1][0]++;
            else
                cnt[i+j+1][1]++;
        }
    }

    int i=1, j=n+m-1,ans=0;
    while(i<j)
    {
        ans+= min( cnt[i][0]+cnt[j][0], cnt[i][1]+cnt[j][1] );
        i++;
        j--;
    }

    cout<<ans<<"\n";

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        input();
        solve();
    }


}
