#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];

bool dfs(int node,int parent)    //root er parent -1
{
    vis[node]=true;

    for(int child:V[node])
    {
        if(vis[child]==false)
        {
            if(dfs(child,node)==true)
                return true;
        }
        else
            if(child!=parent)
                return true;    //cycle ase
    }
    return false;
}

int main()
{
    int node,edge;
    cin >> node >> edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin >> u >> v;
        V[u].push_back(v);
        if(dfs(u,-1))
            cout<<u<<" "<<v<<"\n";
        V[u].pop_back();
        vis[v]=false;
    }
    cout<<"0 0";

}
