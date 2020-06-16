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

int prime[10000001];

void sieve()
{
    int maxx=10000000;
    for(int i=2; i<=maxx; i++)
        if(i%2==0)
            prime[i]=2;
        else
            prime[i]=i;

    for(int i=3; i<=sqrt(maxx); i++)
    {
        if(prime[i]==i)
        {
            for(int j=i*i; j<=maxx; j+=i)
                if(prime[j]==j)
                    prime[j]=i;
        }
    }
}


int main()
{
    //fast
    sieve();
    int n;
    cin>>n;
    vi ans1,ans2;

    FOR(i,n)
    {
        int x,div,ans=1,n,flag=0;
        cin>>x;
        n=x;

        //  ans=prime[x];
        // x=x/prime[x];


        while(x!=1)
        {
            if(prime[n]==n)
                break;
            div=prime[x];
            ans*=div;
            if(ans==n)
                break;
            x/=prime[x];
            if(gcd(ans+(n/ans),n)==1)
            {
                ans1.pb(ans), ans2.pb(n/ans), flag=1;
                break;
            }
            //cout<<ans<<" "<<div<<NL;
        }
        if(!flag)
            ans1.pb(-1), ans2.pb(-1);
    }

    for(auto it: ans1)
        cout<<it<<" ";
    cout<<NL;
    for(auto it: ans2)
        cout<<it<<" ";

}

