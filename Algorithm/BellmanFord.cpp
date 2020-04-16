#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v,w;
};
vector<edge>V;
int dis[105];
int n,m;

bool bellmanford(int s)
{
    for(int i=1;i<=n;i++)
        dis[i]=INT_MAX;

    dis[s]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<V.size();j++)
        {

            edge e=V[j];
            if(dis[e.v]>dis[e.u]+e.w)
            {
                dis[e.v]=dis[e.u]+e.w;
            }
        }
    }

    for(int j=0;j<V.size();j++)
    {
        edge e=V[j];
        if(dis[e.v]>dis[e.u]+e.w)
        {
            return false; //means Negative cycle detected
        }
    }

    return true;
}

int main()
{
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        V.pb({u,v,w});
    }

    if(bellmanford(1)) cout << "No Negative Cycle\n";
    else cout << "Negative Cycle\n";
}
