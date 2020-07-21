#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N=100005;
vector<int>V[N];
bool vis[N];
ll cost[N];
long long low=LONG_MAX;

void dfs(ll s)
{
    vis[s]=true;
    low=min(low,cost[s]);

    for(auto x:V[s] )
    {
        if(vis[x])
            continue;
        dfs(x);
    }
}



int main()
{
    int node,edge;
    cin>>node>>edge;

    for(int i=1;i<=node;i++)
    {
        int x;
        cin>>x;
        cost[i]=x;
    }

    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin>>u>>v;
        V[u].push_back(v);
        V[v].push_back(u);
    }

    long long ans=0;

    for(int i=1;i<=node;i++)
    {
        if(vis[i])
            continue;
        low= LONG_MAX;
        dfs(i);
        ans+=low;
    }
    cout<<ans;

}
