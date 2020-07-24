#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N=95;
vector<int>V[N];
bool vis[N];
ll kount=0;

ll POW(ll  B,ll P)
{
    ll R=1;
    while(P)
    {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
    }
    return R;
}

void dfs(int s)
{
    kount++;
    vis[s]=true;

    for(auto x:V[s] )
    {
        if(vis[x]==true)
            continue;
        dfs(x);
    }

}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        V[u].push_back(v);
        V[v].push_back(u);
    }

    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==true)
            continue;

        kount=0;
        dfs(i);
        ans*=POW(2,kount-1);
    }

    cout<<ans;
}
