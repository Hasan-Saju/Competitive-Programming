#include<bits/stdc++.h>
using namespace std;
#define ll          long long
//#define pb          push_back
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
#define asi         cout<<"Check"<<endl;
#define bye         return 0
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

const int N=100005;
int nodes,edges;
vector<pair<int,int> >adj[N];
int dis[N];
int parent[N];
vector<int>len;

int w=1;

void Dijkstra(int src)
{
    multiset<pair<int,int> >ms;
    if(w==1)
    {
        dis[src]=0;
        ms.insert({0,src});
        ++w;
    }
    else
    {
        cout<<"check"<<dis[src]<<endl;
        dis[src]=dis[src];
        ms.insert({dis[src],src});
    }
    while(!ms.empty())
    {
        //   if(flag)break;
        pair<int,int>temp;
        temp=*(ms.begin());
        ms.erase(ms.begin());

        int u =temp.ss;

        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i].ss;
            int cost=adj[u][i].ff;
            // cout<<"chcek";
            if(dis[v]>dis[u]+cost)
            {
                dis[v]=dis[u]+cost;
                ms.insert({cost,v});
                //cout<<v<<" "<<dis[v]<<endl;

            }

        }


    }


}


int main()
{
    fast
    ll t;
    cin>>t;

    for(int x=1; x<=t; x++)
    {





        cin>>nodes>>edges;
        for(int i=0; i<=nodes; i++)
            dis[i]=INT_MAX;
        FOR(i,edges)
        {
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back({w,v});
            adj[v].push_back({w,u});
        }
        Dijkstra(1);
        cout<<"Case "<<x<<": "<<dis[nodes]<<endl;
        Dijkstra(1);
        cout<<"Case "<<x<<": "<<dis[nodes]<<endl;
        //  sort(len.begin(),len.end());

        cout<<"Case "<<x<<": "<<dis[nodes]<<endl;
        len.clear();
        FOR(i,nodes)
        adj[i].clear();

        w=1;

    }

}

