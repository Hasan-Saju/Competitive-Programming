#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v,w;
};

vector<edge>V;
int dis[2000];
int nodes,edges;

bool bellmanford(int s)
{
    for(int i=0;i<=nodes;i++)
        dis[i]=999999;

    dis[s]=0;

    for(int i=1;i<=nodes-1;i++)
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
            return true;
    }
    return false;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>nodes>>edges;
        for(int x=0;x<edges;x++)
        {
            int p,q,w;
            cin>>p>>q>>w;
            V.push_back({p,q,w});
        }
        bool ans=bellmanford(0);
        if(ans)cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
        V.clear();
    }
}
