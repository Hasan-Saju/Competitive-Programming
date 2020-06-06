#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ull         unsigned long long
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
#define mod         1000000007
#define siz         1000000
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');
//ans+=string(r,'R');

int prime[1000001];
vector<int>pl;

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

void sieve()
{
    int maxx=1000009;
    memset(prime,true,sizeof(prime));

    prime[0]=prime[1]=false;

    for(int i=2; i<=sqrt(maxx); i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=2; i<=maxx; i++)
        if(prime[i])
            pl.pb(i);


}

int main()
{
    //fast
    int t;
    scanf("%d",&t);
    sieve();
    FOR(i,t)
    {
        printf("Case %d: ",i+1);
        ll n,m;
        scanf("%lld %lld",&n,&m);

        vector<pair<ll,ll> >combo;

        for(int j=0; j<pl.size() and pl[j]<=sqrt(n); j++)
        {
            int k=0;
            while(n%pl[j]==0)
            {
                n=n/pl[j];
                k++;
            }
            if(k!=0)
                combo.pb(mp(pl[j],k));
          //  if(k!=0)cout<<pl[j]<<" div "<<k<<" "<<n<<NL;
        }
        if(n!=1)
            combo.pb(mp(n,1));
        //if(n!=1)cout<<n<<NL;

        ll ans=1;
        for(int j=0;j<combo.size();j++)
        {
            ll f=combo[j].ff;
            ll s=combo[j].ss;

            ll temp= ((BMod(f,s*m+1,mod)-1 )+mod)%mod;
            temp=(temp * BMod(f-1,mod-2,mod))%mod;               ///formula of geometric series
            ans=(ans%mod*temp%mod)%mod;

            //cout<<f<<" amu "<<s<<" "<<temp<<NL;
           // ans=(ans *( (1-BMod(f,s*m,mod) )/(1-f) ));
            //cout<<ans<<NL;
        }


       // cout<<ans<<NL;
        printf("%lld\n",ans);
        combo.clear();

    }

}


  ///main theory  link :  https://www.math.upenn.edu/~deturck/m170/wk3/lecture/sumdiv.html#:~:text=In%20general%2C%20if%20you%20have,multiply%20all%20these%20sums%20together!
