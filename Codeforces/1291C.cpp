#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
#define NL          "\n"
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');
//ans+=string(r,'R');

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
ll POW(ll  B,ll P)
{
    ll R=1;
    while(P) {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
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


int main()
{
    fast
    ll t;
    cin>>t;
    deque<ll>d;
    vector<ll>v;

    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        FOR(i,n)
        {
            ll x;
            cin>>x;
            d.push_back(x);
        }

        ll pub=0;
        ll ans=0;
        if(m<=k)pub=m-1;
        else pub=k;

        FOR(i,pub)
        {
            ll f=d.front();
            ll b=d.back();
            if(f<=b)d.pop_front();
            else d.pop_back();
        }
        if(m<=k)
        {
        d.front()>=d.back() ? ans=d.front() : ans=d.back();
        cout<<ans<<NL;
        d.clear();
        v.clear();
        continue;
        }

        FOR(i,(m-k)-1)
        {
            ll f=d.front();
            ll b=d.back();
            if(f>=b)d.pop_front();
            else d.pop_back();
        }

        d.front()>=d.back() ? ans=d.front() : ans=d.back();
        cout<<ans<<NL;
        v.clear();
        d.clear();

    }

}

