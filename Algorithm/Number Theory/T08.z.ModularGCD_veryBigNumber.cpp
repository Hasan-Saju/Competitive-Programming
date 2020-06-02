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



int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>p;

        ll secNumber=a-b;

        for(ll i=1; i<=sqrt(secNumber); i++)
        {
            if(secNumber%i==0)
            {
                p.pb(i);
                p.pb(secNumber/i);              ///candidates for gcd
            }
        }

        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());

        //a^n
        int flag=0;

        ll mod=1000000007;


        if(secNumber==0 )
        {
            ll an= (BMod(a,n,mod));
            ll bn= (BMod(b,n,mod));

            ll answer=(an+bn)%mod;
            cout<<answer<<NL;
            continue;


        }

        for(int i=0; i<p.size(); i++)
        {
            ll an= (BMod(a,n,p[i]));
            ll bn= (BMod(b,n,p[i]));
            ll check= ((an%p[i])+(bn%p[i]))%p[i];

            if(!check)
            {
                cout<<p[i]<<NL;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"1"<<NL;



    }

}
///https://www.codechef.com/problems/GCDMOD
