#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define infinity    0x3f3f3f3f
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

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

const ll N=100005;
ll nodes,edges;
vector<pair<ll,ll> >adj[N];
ll dis[N];
ll parent[N];

void Dijkstra(ll src)
{
    multiset<pair<ll,ll> >ms;

    for(ll i=0;i<=nodes;i++)
        dis[i] = LLONG_MAX;

    dis[src]=0;
    ms.insert({0,src});
    while(!ms.empty())
    {
        pair<ll,ll> temp;
        temp=*(ms.begin());
        ms.erase(ms.begin());

        ll u=temp.second;
        for(ll i=0;i<adj[u].size();i++)
        {
            ll v=adj[u][i].ss;
            ll cost=adj[u][i].ff;
            if(dis[v]>dis[u]+cost)
            {
                dis[v]=dis[u]+cost;
                ms.insert({cost,v});
                parent[v]=u;
            }
        }
    }





}

int main()
{
    cin>>nodes>>edges;
    FOR(i,edges)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    Dijkstra(1);
    if(dis[nodes]==LLONG_MAX)
    {
        cout<<"-1";
    }
    else
        {
            stack<ll>path;
            for(ll current=nodes;current!=0;current=parent[current])
                    path.push(current);
            while(!path.empty())
            {
                cout<<path.top()<<" ";
                path.pop();
            }

        }
}

























