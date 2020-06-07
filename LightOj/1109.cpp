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

bool prime[1009];
vector<int>pl;

void sieve()
{
    int maxx=1005;
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
    for(int i=2; i<=1005; i++)
        if(prime[i])
            pl.pb(i);

}

int main()
{
    //fast
    sieve();

    vector<pair<int,int> >last;
    vi pp;

    for(int i=1000; i>=1 ; i--)
    {
        int temp=i;
        for(int j=0; j<pl.size() and pl[j]<=sqrt(i) ; j++)
        {
            int k=0;
            while(temp%pl[j]==0)
            {
                k++;
                temp=temp/pl[j];
            }
            if(k!=0)
                pp.pb(k);
        }
        if(temp!=1)
            pp.pb(1);
        int total=1;
        for(int j=0; j<pp.size(); j++)
        {
            total=total*(1+pp[j]);
        }
        last.pb(mp(total,-i));
        // cout<<i<<" done! "<<total<<NL;
        pp.clear();
    }
    sort(last.begin(),last.end());

    // for(int i=0;i<last.size();i++)
    //   cout<<last[i].ff<<" "<<last[i].ss<<NL;


    int t;
    scanf("%d",&t);
    FOR(i,t)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",i+1,-last[n-1].ss);
    }


}










