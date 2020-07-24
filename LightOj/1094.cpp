#include<bits/stdc++.h>
using namespace std;

const int N=30005;
vector<int>V[N];
bool vis[N];
int dis[N];
map<pair<int,int>,int>m;
int ans=-9999;
int ind=-1;

void bfs(int s)
{
    vis[s]=true;
    dis[s]=0;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0; i<V[x].size(); i++)
        {
            int u=V[x][i];
            if(!vis[u])
            {
                vis[u]=true;
                dis[u]=dis[x]+m[make_pair(u,x)];

                if(dis[u]>ans)
                {
                    ans=max(ans,dis[u]);
                    ind=u;
                }

                // cout<<u<<" "<<dis[u]<<"vitor\n";

                Q.push(u);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);

        for(int j=0; j<n-1; j++)
        {

            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            m[make_pair(u,v)]=w;
            m[make_pair(v,u)]=w;
            V[u].push_back(v);
            V[v].push_back(u);

        }

        memset(dis,false,sizeof(dis));
        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));
        ans=-999;

        bfs(0);                 //one farthest point is ind

        memset(dis,false,sizeof(dis));
        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));
        bfs(ind);               //ans is dis from one farthest point to another


        printf("Case %d: %d\n",i,ans);
        for(int i=0; i<n; i++)
            V[i].clear();

        memset(vis,false,sizeof(vis));
        memset(dis,false,sizeof(dis));
        m.clear();

    }



}
