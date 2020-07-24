#include<bits/stdc++.h>
using namespace std;

const int N=100005;
set<int>V[N];
bool vis[N];

void dfs(int s)
{
    vis[s]=true;

    for( auto x:V[s] )
    {
        if(vis[x])
            continue;
        dfs(x);
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        int x;
        cin>>x;
        V[i].insert(x);
        V[x].insert(i);
    }

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
            continue;
        ans++;
        dfs(i);
    }

    cout<<ans;
}
