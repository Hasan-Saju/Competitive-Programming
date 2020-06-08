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

void solve(ll p,ll l,int i)
{
    ll con=p-l;
    vector<ll>v;

    for(ll j=1; j<=sqrt(con); j++)
    {
        if(con%j==0)
        {
            if(j==con/j)
                v.pb(j);
            else
            {
                v.pb(j);
                v.pb(con/j);
            }
        }
    }
    sort(v.begin(),v.end());
    printf("Case %d: ",i+1);


    int flag=0;
    ll siz=v.size();

    for(ll j=0; j<v.size(); j++)
        if(v[j]>l)
        {
            if(j!=siz-1)
                printf("%lld ",v[j]);
            else
                printf("%lld",v[j]);
            flag=1;
        }
    if(!flag)
        printf("impossible");
    printf("\n");

}


int main()
{
    //fast
    //fWrite
    int t;
    scanf("%d",&t);
    FOR(i,t)
    {
        ll p,l;
        scanf("%lld %lld",&p,&l);

        if(p==0 and l==0)
        {
            printf("Case %d: 1\n",i+1);
            continue;
        }
        solve(p,l,i);
    }


}

