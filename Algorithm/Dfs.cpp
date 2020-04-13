#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];

void dfs(int s)
{
    vis[s]=true;
    for(int x:V[s])//v[s] er prottek ta element ektar por ekta x a ashte thakbe
    {                       //int i=0;i<V[s].size();i++   x=V[s][i];
        if(vis[x]==true)
            continue;
        dfs(x);
    }
}

int main()
{
    int node,edge;
    cin >> node >> edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin >> u >> v;
        V[u].push_back(v);
        V[v].push_back(u); //Bi-directional
    }
    dfs(1);
}

