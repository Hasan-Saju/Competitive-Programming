#include<bits/stdc++.h>
using namespace std;

const int N=60000;
vector<int>V[N];
bool vis[N];
int dp[N];

int previ=0;
int people=0;

void dfs(int s)
{
    people++;
    vis[s]=true;
    for(auto x:V[s] )
    {
        if(vis[x])
        {
        previ +=dp[x];
        continue;
        }

        dfs(x);
    }
}


int main()
{
    int t;
    scanf("%d",&t);

    for(int j=1;j<=t;j++)
    {
    int n;
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
        V[i].clear();
    memset(vis,false,sizeof(vis));


    for(int i=0;i<n;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        V[u].push_back(v);
    }

    for(int i=1;i<=n;i++)
    {
        if(vis[i])
            continue;
        people=0,previ=0;
        dfs(i);
        cout<<"dfs done: "<<i<<"\n";
        dp[i]=people+previ;
    }

    int ans=0,ind=0;
    for(int i=1;i<=n;i++)
    {
        if(dp[i]>ans)
        {
            ans=dp[i];
            ind=i;
        }
    }

    printf("Case %d: %d\n",j,ind);


    }


}
