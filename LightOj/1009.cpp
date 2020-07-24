#include<bits/stdc++.h>
using namespace std;

const int N=20005;
vector<int>V[N];
bool vis[N];
int dis[N];
int exist[N];

int zero,one;

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
        for(int i=0;i<V[x].size();i++)
        {
            int u=V[x][i];
            if(!vis[u])
            {
                //cout<<u<<" ";
                vis[u]=true;
                int val =(dis[x]+1)%2;

                if(val==0)
                    zero++;
                else one++;

                dis[u]=val;
                Q.push(u);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            exist[u]=1;
            exist[v]=1;
            V[u].push_back(v);
            V[v].push_back(u);
        }

        int ans=0;
        memset(vis,false,sizeof(vis));
        for(int j=1;j<=N-1;j++)
        {
            if( !exist[j] or vis[j])
                continue;
            //cout<<"send "<<j<<"\n";
            zero=1,one=0;
            bfs(j);
            ans+=max(zero,one);
        }

        printf("Case %d: %d\n",i,ans);

        for(int j=1;j<=N;j++)
            V[j].clear();
        memset(vis,false,sizeof(vis));
        memset(dis,0,sizeof(dis));
        memset(exist,0,sizeof(exist));


    }
}
