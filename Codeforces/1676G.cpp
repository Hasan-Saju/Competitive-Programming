#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];
int col[N];
int result=0;

int dfs(int s)
{
    vis[s]=true;
    int cur = (col[s]== 0 ? -1 : 1);
    for(auto x:V[s])
    {
        if(vis[x]==true)
            continue;
        cur += dfs(x);
    }
    if(cur==0)
        result++;

    return cur;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int node,edge;
        cin >> node;
        for(int i=2; i<=node; i++)
        {
            int u;
            cin >> u;
            V[u].push_back(i);
        }
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            s[i]=='W' ? col[i+1]=0 : col[i+1]=1;
        }

        dfs(1);
        cout<<result<<"\n";

        result=0;
        memset(vis,false,sizeof(vis));
        memset(col,false,sizeof(col));
        for(int i=0; i<=node; i++)
            V[i].clear();
    }

}

