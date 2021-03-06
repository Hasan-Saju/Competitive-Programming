#include<bits/stdc++.h>
using namespace std;

const int N=300005;
vector<int>V[N];
bool vis[N];
vector<int >ans;
int child[N];
int ulta[N];

int dfs(int s)
{
    vis[s]=true;
    ans.push_back(s);

    int cnt=1;
    for(int x: V[s])
    {
        if(!vis[x])
           cnt+= dfs(x);
    }
    child[s]=cnt;
    return cnt;
}

int main()
{
    int officers,query;
    cin>>officers>>query;

    for(int i=2;i<=officers;i++)
    {
        int y;
        cin>>y;
        V[y].push_back(i);
    }

    for(int i=1;i<=officers;i++)
        sort(V[i].begin(),V[i].end());

        dfs(1);
        int u,k;

//        for(int i=1;i<=officers;i++)
//            cout<<child[i]<<" ";
//            cout<<endl;

    for(int i=0;i<ans.size();i++)
        ulta[ans[i]]=i;

    for(int i=1;i<=query;i++)
    {
        cin>>u>>k;

       int ind= ulta[u];

        int ansi=ind+k;

        if(k>child[u])
        cout<<"-1"<<endl;
    else
    {
        cout<<ans[ansi-1]<<endl;
    }

    }
}
