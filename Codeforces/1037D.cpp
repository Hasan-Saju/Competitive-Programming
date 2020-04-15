#include<bits/stdc++.h>
using namespace std;

const int N=300005;
vector<int>V[N];
int vis[N];
int dis[N];
int order[N];

bool cmp(int a, int b)
{
    return order[a] < order[b];
}

string bfs(int s)
{
    string mineBFS="";
    memset(vis,0,sizeof(vis));
    vis[s]=1;
    dis[s]=0;
    queue<int>Q;
    Q.push(s);

   // mineBFS+=(s+'0');

    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        mineBFS+=(x+'0');

        for(int i=0;i<V[x].size();i++)
        {
            int u= V[x][i];
            if(!vis[u])
            {
                vis[u]=1;
             //   mineBFS+=(u+'0');
                dis[u]=dis[x]+1;
                Q.push(u);
            }
        }

    }

    return mineBFS;
}

int main()
{
    int n;
    cin>>n;
   // int order[n+5];
    //int reorder[n+5];

    for(int j=0;j<n-1;j++)
    {
        int x,y;
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
    }



    string check="";
    for(int j=0;j<n;j++)
    {
        int x;
        cin>>x;
       check+=(x+'0');
       order[x]=j;
    }


     for(int j=1;j<=n;j++)
        sort(V[j].begin(),V[j].end(),cmp);

        string mine=bfs(1);

    if(mine==check)cout<<"Yes";
    else cout<<"No";

    //cout<<endl<<mine<<endl<<check<<endl;

}



