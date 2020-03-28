#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll Digits(ll a)
{
    return(floor(log10(a))+1);
}
ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);

}

const int N=100005;
vector<int>V[N];
int dis[N];
int vis[N];

int bfs(int s)
{
    memset(vis,0,sizeof(vis));
    vis[s]=1;
    dis[s]=0;
    queue<int>Q;
    Q.push(s);

    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0; i<V[x].size(); i++)
        {
            int u=V[x][i];
            if(!vis[u])
            {
                vis[u]=1;
                if(dis[x]==0)
                    dis[u]=1;
                else if(dis[x]==1)
                    dis[u]=0;
                Q.push(u);
            }
            else if(vis[u]==1)
            {
                if(dis[u]==dis[x])
                    return 0;
            }
        }
    }
    return 1;
}

int main()
{
    fast
   // freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    while(true)
    {
        int node,edge,x,y,ans,i;
        cin>>node;
        if(!node)
            return 0;
        cin>>edge;

        for(i=1; i<=edge; i++)
        {
            cin>>x>>y;
            V[x].pb(y);
            V[y].pb(x);
        }

        ans=bfs(x);
        if(!ans)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;

        for(i=0; i<node; i++)
            V[i].clear();
        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));


    }

}

