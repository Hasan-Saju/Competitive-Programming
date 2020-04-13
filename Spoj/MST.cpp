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


struct edge {           //node er shob tulona w er sapekkhe hobe
    ll u, v, w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};

ll pr[9000005];
vector<edge> e;

ll Find(ll r)
{
    return pr[r]= (pr[r]==r) ? r:Find(pr[r]);
}


ll mst(ll n)//n is for number of node
{
    sort(e.begin(), e.end());
    for (ll i = 1; i <= n; i++)
        pr[i] = i;

    ll kount = 0, s = 0;
    for (ll i = 0; i < e.size(); i++) {
        ll u = Find(e[i].u);
        ll v = Find(e[i].v);
        if (u != v) {
            pr[u] = v;
            kount++;
            s += e[i].w;
            if (kount == n - 1)
                break;
        }
    }
    return s;
}


int main()
{
    fast
    ll nodes,edges;
    cin>>nodes>>edges;
    FOR(i,edges)
    {
        edge get;
        cin>>get.u>>get.v>>get.w;
        e.pb(get);
    }
    cout<<mst(nodes);
}

