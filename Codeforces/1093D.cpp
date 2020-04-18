#include<bits/stdc++.h>
using namespace std;

#define Mod 998244353
#define ll long long
const int N=300005;
int vis[N];
int dis[N];
vector<int>V[N];
bool nobipar;

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

void bfs(int s)
{
    nobipar=false;
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    vis[s]=1;
    dis[s]=0;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();

        for(int i=0;i<V[u].size();i++)
        {
            int x=V[u][i];

            if(vis[u]==vis[x])nobipar=true;

            if(!vis[x] and vis[u]==1)
            {
                vis[x]=2;
                Q.push(x);
                dis[x]=dis[u]+1;
            }
            else if(!vis[x] and vis[u]==2)
            {
                vis[x]=1;
                Q.push(x);
                dis[x]=dis[u]+1;
            }

        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

    int node,edge;
    cin>>node>>edge;

    for(int j=0;j<edge ;j++)
    {
        int p,q;
        cin>>p>>q;
        V[p].push_back(q);
        V[q].push_back(p);
    }

    bfs(1);

    long long even=0,odd=0,base=2;
    if(nobipar)cout<<"0"<<endl;
    else
    {
        for(int j=1;j<=node;j++)
        {
            if(dis[j]%2==0)even++;
            else odd++;
        }

        long long ans=(BMod(base,even,Mod) + BMod(base,odd,Mod))%Mod;
        cout<<even<<" "<<odd<<endl;
        cout<<ans<<endl;


    }

    }

}
