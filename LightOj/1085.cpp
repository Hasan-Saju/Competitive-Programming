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

#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(a,min(b,min(c,d)))
#define max4(a,b,c,d)       max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define PI          2*acos(0.0)
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
    while(P)
    {
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

#define mod 1000000007
ll tree[200005];

ll query(ll idx)
{
    ll sum=0;
    while(idx>0)
    {
        sum= (sum%mod+tree[idx]%mod)%mod;
        idx-= ( idx &(-idx) );
    }
    return sum;
}

void update(ll idx, ll x, ll n)
{
    while(idx<=n)
    {
        tree[idx]=(tree[idx]%mod+x%mod)%mod;
        idx+=( idx & (-idx) );
        //cout<<idx<<" "<<n<<NL;
    }
}





int main()
{
   // fast
    ll t;
    scanf("%lld",&t);

    FOR(j,t)
    {
        ll n,ans=0;
        scanf("%lld",&n);
        vector<pair<ll,ll> > v;

        FOR(i,n)
        {
            ll x;
            scanf("%lld",&x);
            v.pb(mp(x,i));
        }

        sort(v.begin(),v.end());

        ll prev=-LONG_MAX;
        ll prevSum=0;

        FOR(i,n)
        {
            ll ind=v[i].ss+1;       //1 based index in tree
            ll val=v[i].ff;
            ll sum=(1+query(ind))%mod;

            if(val!=prev)
            {
                prevSum=sum;
                prev=val;
            }
            else
            {
                sum-=prevSum;
                prevSum=(sum%mod + prevSum%mod)%mod;
            }

            update(ind,sum,n);
            ans=(ans%mod + sum%mod)%mod;

        }
        //cout<<ans<<" "<<j+1<<"ans is "<<NL;
        printf("Case %d: %d\n",j+1,ans);
        ans=0;
        memset(tree,0,sizeof(tree));
        v.clear();

    }

}

