#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N=100005;
vector<int>V[N];
int dis[N];
bool vis[N];

void bfs(int s)
{
    memset(vis,0,sizeof(vis));
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
                vis[u]=true;
                dis[u]= (dis[x]+1)%2;
                Q.push(u);
            }
        }
    }
}

int main()
{
    int node;
    cin>>node;

    for(int i=0;i<node-1;i++)
    {
        int u,v;
        cin>>u>>v;
        V[u].push_back(v);
        V[v].push_back(u);
    }

    bfs(1);
    ll zero=0,one=0;

    for(int i=1;i<=node;i++)
    {
        if(dis[i]==0)zero++;
        else one++;
    }

    ll shouldBe=one*zero;

    ll ans=shouldBe-(node-1);

    cout<<ans;

}
