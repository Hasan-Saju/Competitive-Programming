#include<bits/stdc++.h>
using namespace std;

const int N=105;
vector<int>V[N];
vector<int> dis(N);
bool vis[N];

void bfs(int s)
{
    memset(vis,false,sizeof(vis));
    dis[s]=0;
    vis[s]=true;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0;i<V[x].size();i++)
        {
            int u=V[x][i];
            if(!vis[u])
            {
                vis[u]=true;
                dis[u]=dis[x]+1;
                Q.push(u);
            }
        }
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            V[u].push_back(v);
            V[v].push_back(u);
        }
        int start,finish;
        scanf("%d %d",&start,&finish);

        vector<int>ds,df;
        bfs(start);
        ds=dis;

        for(int i=0;i<105;i++)dis[i]=0;

        bfs(finish);
        df=dis;

        int ans=INT_MIN;
        for(int i=0;i<=n-1;i++)
        {
            ans=max(ans,ds[i]+df[i]);
        }

        printf("Case %d: %d\n",j,ans);

        for(int i=0;i<=n;i++)
            V[i].clear();
    }
}
