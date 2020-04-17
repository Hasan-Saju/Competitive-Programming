#include<bits/stdc++.h>
using namespace std;

const int N=100005;
int color[N];
int timer_in[N];
int timer_out[N];

int dfs_timer = 1;

void dfs(int s)
{
    time_in[s] = dfs_timer++;
    color[s] = 1;
    for (int x : V[s])
    {
        if (color[x] == 0)
            dfs(x);
    }
    color[s] = 2;
    time_out[s] = dfs_timer++;
}


int main()
{
    int node, edge;
    cin >> node >> edge;
    for(int i = 1; i <= edge; i++)
    {
        int u, v;
        cin >> u >> v;
        V[u].push_back(v);
        V[v].push_back(u); //Bi-directional
    }
    dfs(1);
}
