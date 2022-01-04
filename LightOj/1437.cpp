#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N=100005;
vector<int>V[N];
int dis[N];
bool vis[N];

void bfs(int s)
{
    memset(vis,0,sizeof(vis));
    vis[s]=1;
    dis[s]=0;
    queue<int>Q;
    Q.push(s);
    map<int,bool>parent;
    parent[s]=true;

    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0;i<V[x].size();i++)
        {
            int u=V[x][i];
            if(!vis[u])
            {
                vis[u]=1;
                dis[u]=dis[x]+1;
                Q.push(u);
            }
        }
    }
    return;
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
    for(int i=0;i<node;i++)
    {
        bfs(i);
    }

}

