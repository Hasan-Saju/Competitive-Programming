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

//CODEFORCES 20C
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
        for(int i=0;i<adj[u].size();i++)
        {
            ll v = adj[u][i].second;
            ll cost = adj[u][i].first;

            if (dist[v] > dist[u] + cost)
            {
                dist[v] = dist[u] + cost;
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

    for(int x=1;x<=t;x++)
    {
        int a,b,c,r;

    cin >> nodes >> edges>>a>>b>>c>>r;
    for (ll i = 0; i < edges; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }


    //Dijkstra(1);
    Dijkstra(a);
    ll ab=dist[b];
    ll ac=dist[c];

    Dijkstra(b);
    ll bc=dist[c];

//ab-bc
    Dijkstra(1);
    ll one=dist[a]+ab+bc;
    Dijkstra(c);
    one=one+dist[r];


//ac-cb
    Dijkstra(1);
    ll two=dist[a]+ac+bc;
    Dijkstra(b);
    two=two+dist[r];

//ba-ac
    Dijkstra(1);
    ll three=dist[b]+ab+ac;
    Dijkstra(c);
    three=three+dist[r];


//bc-ca
    Dijkstra(1);
    ll four=dist[b]+ac+bc;
    Dijkstra(a);
    four=four+dist[r];

//cb-ba
    Dijkstra(1);
    ll five=dist[c]+ab+bc;
    Dijkstra(a);
    five=five+dist[r];


//ca-ab
    Dijkstra(1);
    ll six=dist[c]+ac+ab;
    Dijkstra(b);
    six=six+dist[r];



vi v(6);
v[0]=one;
v[1]=two;
v[2]=three;
v[3]=four;
v[4]=five;
v[5]=six;

sort(v.begin(),v.end());

cout<<v[0]<<"\n";

    }
}
