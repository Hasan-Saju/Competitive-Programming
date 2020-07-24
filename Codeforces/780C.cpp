#include<bits/stdc++.h>
using namespace std;

const int N=300005;
vector<int>V[N];
bool vis[N];
int dis[N];
vector<int>shape(N);

void bfs(int s)
{

    vis[s]=true;
    dis[s]=0;
    shape[0]++;

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
                cout<<u<<"u ";
                vis[u]=true;
                dis[u]=dis[x]+1;

                int val=dis[x]+1;
                shape[val]++;
//cout<<val<<" ";
                Q.push(u);
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        V[u].push_back(v);
        V[v].push_back(u);
    }

    memset(vis,false,sizeof(vis));
    int ans=-9999;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
            continue;
    shape.clear();
    memset(dis,0,sizeof(dis));
         bfs(i);
    sort(shape.begin(),shape.end());
    reverse(shape.begin(),shape.end());
    int total=shape[0]+shape[1]+shape[2];
    cout<<"\n"<<i<<" i total "<<total<<"\n";
    ans=max(ans,total);
    }

    cout<<ans<<"\n";


}
