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

const ll N = 100005;
ll nodes, edges;
vector<pair<ll, ll>> adj[N];
ll dist[N];
ll parent[N];//to print the path of dijkstra

void Dijkstra(ll src)
{
    multiset<pair<ll, ll>> ms;

    for (ll i = 0; i <= nodes; i++)
        dist[i] = LLONG_MAX;

    dist[src] = 0;
    ms.insert({0, src});

    while (!ms.empty())
    {
        pair<ll, ll> temp;
        temp = *(ms.begin());
        ms.erase(ms.begin());

        ll u = temp.second;
        for(int i=0; i<adj[u].size(); i++)
        {
            ll v = adj[u][i].second;
            ll cost = adj[u][i].first;

            if (dist[v] > max(dist[u],cost))
            {
                dist[v] = max(dist[u],cost);
                ms.insert({cost,v});
                parent[v] = u;// for keeping the path
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    for(int j=1; j<=t; j++)
    {
        cin >> nodes >> edges;
        for (ll i = 0; i < edges; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({w, v});
            adj[v].push_back({w, u});
        }
        int mine;
        cin>>mine;
        Dijkstra(mine);

        cout<<"Case "<<j<<":\n";
        for(int i=0; i<nodes; i++)
        {
            if(dist[i]!=LLONG_MAX)
                cout<<dist[i]<<"\n";
            else
                cout<<"Impossible\n";
        }

        for(int i=0;i<=nodes;i++)
            adj[i].clear();
    }

}
