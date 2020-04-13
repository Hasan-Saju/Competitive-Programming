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
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

ll Digits(ll a)
{
    return(floor(log10(a)) + 1);
}
ll BMod(ll B, ll P, ll M)
{
    ll R = 1;
    B = B % M;
    while(P)
    {
        if(P & 1)
            R = (R * B) % M;
        P >>= 1;
        B = (B * B) % M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);

}

const int N = 300005;
vector<int>V[N];


void bfs(int s, int n)
{
    int dis[n + 5];
    int vis[n + 5];
    memset(dis, 0, sizeof(dis));
    memset(vis, 0, sizeof(vis));


    vis[s] = 1;
    dis[s] = 0;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for(int i = 0; i < V[x].size(); i++)
        {
            int u = V[x][i];
            if(!vis[u])
            {
                vis[u] = 1;
                dis[u] = dis[x] + 1;

                Q.push(u);
            }
        }
    }
    //return;
    vector<int >even, odd;
    for(int i = 1; i <= n; i++)
    {
        if(dis[i] % 2 == 0)
            even.pb(i);
        else
            odd.pb(i);
    }

    if(even.size() <= odd.size())
    {
        cout << even.size() << "\n";
        for(int i = 0; i < even.size(); i++)
            cout << even[i] << " ";
        cout << "\n";
    }
    else
    {
        cout << odd.size() << "\n";
        for(int i = 0; i < odd.size(); i++)
            cout << odd[i] << " ";
        cout << "\n";
    }

    for(int i = 0; i <= n; i++)
        V[i].clear();
    even.clear();
    odd.clear();



}

int main()
{
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int nodes, edges;
        cin >> nodes >> edges;
        FOR(i, edges)
        {
            int x, y;
            cin >> x >> y;
            V[x].pb(y);
            V[y].pb(x);
        }
        bfs(1, nodes);


    }
}

