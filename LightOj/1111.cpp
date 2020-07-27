#include<bits/stdc++.h>
using namespace std;

const int N=1005;
vector<int>V[N];
//int dis[N];
int vis[N];
vector<int>ques;
int ans[N];

void bfs( int s )
{
    memset(vis,false,sizeof(vis));
    vis[s]=true;
    // dis[s]=0;
    queue<int>Q;
    Q.push(s);
    ans[s]+=1;
    //cout<<s<<" -> "<<ans[s]<<"\n";
    while(!Q.empty())
    {
        int x= Q.front();
        Q.pop();
        for(int i=0; i<V[x].size(); i++)
        {
            int u=V[x][i];
            if(!vis[u])
            {
                vis[u]=true;
                //dis[u]=dis[x]+1;
                ans[u]+=1;
                Q.push(u);
                //cout<<u<<" -> "<<ans[u]<<"\n";
            }
        }
    }
}

int main()
{
    int t;
    //cin>>t;
    scanf("%d",&t);

    for(int j=1; j<=t; j++)
    {
        int k,n,m;
        //cin>>k>>n>>m;
        scanf("%d %d %d",&k,&n,&m);

        for(int i=0; i<k; i++)
        {
            int x;
            //cin>>x;
            scanf("%d",&x);
            ques.push_back(x);
        }
        for(int i=0; i<m; i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);

            V[u].push_back(v);
        }


        for(int i=0; i<k; i++)
        {
            //cout<<ques[i]<<"\n";
            bfs(ques[i]);

        }

        int finall=0;
        for(int i=1; i<=n; i++)
        {
            if(ans[i]==k)
                finall++;
        }

        printf("Case %d: %d\n",j,finall);

        ques.clear();
        memset(ans,0,sizeof(ans));
        for(int i=0; i<=n; i++)
            V[i].clear();

    }



}
