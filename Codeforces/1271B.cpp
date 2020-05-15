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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi v(n),ans,u;

    FOR(i,n)
    {
        if(s[i]=='W')v[i]=0;
        else v[i]=1;
    }

    u=v;

    for(int i=0;i<n-1;i++)
    {
        if(v[i]==0)continue;
        if(v[i]==1)
        {
            v[i]=(v[i]+1)%2;
            v[i+1]=(v[i+1]+1)%2;
            ans.pb(i+1);
        }
    }

    if(v[n-1]==0)
    {
        cout<<ans.size()<<NL;
        FOR(i,ans.size())cout<<ans[i]<<" ";
        return 0;
    }

    ans.clear();
    v=u;


    for(int i=0;i<n-1;i++)
    {
        if(v[i]==1)continue;
        if(v[i]==0)
        {
            v[i]=(v[i]+1)%2;
            v[i+1]=(v[i+1]+1)%2;
            ans.pb(i+1);
        }
    }

    if(v[n-1]==1)
    {
        cout<<ans.size()<<NL;
        FOR(i,ans.size())cout<<ans[i]<<" ";
        return 0;
    }
    else cout<<"-1"<<NL;
    //FOR(i,v.size())cout<<v[i]<<" ";

}

