#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>V[N];
int ara[N];

bool cmp(int a, int b)
{
    return ara[a]<ara[b];
}

//vector<int> color;
int color[N];
vector<int> time_in, time_out;
int dfs_timer = 1;
int parent[N];

int dis[N];
bool vis[N];

void bfs(int s)//parent dorker tai
{
    memset(vis,0,sizeof(vis));
    vis[s]=1;
    dis[0]=0;
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
                vis[u]=1;
                parent[u]=x;
                //dis[u]=dis[x]+1;
                Q.push(u);
            }
        }
    }
    return;
}

void dfs(int s)
{
    //time_in[s] = dfs_timer++;
    color[s] = 1;
    if(color[s]==1)cout<<s<<" ";

    for (int x : V[s])
    {
        //parent[x]=s;
        //cout<<s<<" "<<x<<endl;
        if (color[x] == 0)
            dfs(x);
    }
    color[s] = 2;
    if(color[s]==2)
    {
        cout<<parent[s]<<" ";
    }

    //time_out[s] = dfs_timer++;
}


int main()
{
        int nodes;
        cin>>nodes;
        for(int i=1;i<=nodes-1;i++)
        {
            int u,v;
            cin>>u>>v;
            V[u].push_back(v);
            V[v].push_back(u);
        }
        int leaf=0;

        for(int i=2;i<=nodes;i++)
        {
            if(V[i].size()==1)
            {
                leaf++;
               // cout<<i<<" ";
            }
        }

        for(int i=1;i<=leaf;i++)
        {
            int x;
            cin>>x;
            ara[x]=i;
        }

        for(int i=1;i<=nodes;i++)
        {
            sort(V[i].begin(),V[i].end(),cmp);
        }

//        for(int i=1;i<=nodes;i++)
//        {
//            cout<<i<<endl;
//            for(int j=0;j<V[i].size();j++)
//                cout<<V[i][j]<<" ";
//            cout<<endl;
//        }

        bfs(1);
        dfs(1);


}
