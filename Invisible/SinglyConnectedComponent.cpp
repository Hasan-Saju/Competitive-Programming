#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];
int start[N];
int finish[N];
int timer=0;

map<string, vector<string> > mp;

void dfs(int s)
{
    vis[s]=true;
    start[s] = timer++;

    for(auto x:V[s])
    {
        if(!vis[x])
            dfs(x);
        else if(finish[x]==0 && start[x]<start[s])
        {
            mp["back_edge"].push_back( to_string(s) + "->" + to_string(x) );
        }
        else if(start[x]>start[s] && finish[x])
        {
            mp["forward_edge"].push_back( to_string(s) + "->" + to_string(x) );
        }
        else if(start[x]<start[s] && finish[x])
        {
            mp["cross_edge"].push_back( to_string(s) + "->" + to_string(x) );
        }

    }

    finish[s] = timer++;
}

int main()
{
    int node,edge;
    cin >> node >> edge;
    for(int i=1; i<=edge; i++)
    {
        int u,v;
        cin >> u >> v;
        V[u].push_back(v);
        //V[v].push_back(u); //Bi-directional
    }

    int notConnected = 0;
    for(int i=1; i<=node; i++)
    {
        memset(vis, false, sizeof(vis));
        memset(start, 0, sizeof(start));
        memset(finish, 0, sizeof(finish));
        timer=0;

        dfs(1);

        if(mp["forward_edge"].size()>0 && mp["cross_edge"].size()>0 )
        {
            notConnected = 1;
            break;
        }

    }

    if(notConnected)
    {
        cout<<"Not Singly Connected";
    }
    else
    {
        cout<<"Singly Connected";
    }

}
