#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
int vis[N];
int in[N];
int low[N];
int timer=1;

void dfs(int node, int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;   //first a shobar in ar low same
    timer++;
    int children=0; // prottek node er children

    for(int child : V[node])
    {
        if(child==par) continue;

        if(vis[child]==1)
        {

            low[node]=min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);

            low[node]=min(low[node],low[child]);

            if(low[child] >= in[node] && par!=1) //root bade baki der jonno
                cout<<node<<" is a articulation point\n";   //one point can come many times

            ++children;   //ekjoner subtree koyta
        }
    }
    if(par==-1 && children > 1)  //root er jonno 2 er beshi subtree thale articulation
                cout<<node<<" is a articulation point\n";

}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
    }

        memset(vis,false,sizeof(vis));
        dfs(1,-1);
}

