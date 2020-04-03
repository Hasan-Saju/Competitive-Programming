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
#define asi         cout<<"Check"<<endl;
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

vi fact;

void f (int n);
{
    for(int j=1;j<=sqrt(n)+1;j++)
    {
        if(n%j==0)
        {
            fact.pb(j);
            fact.pb(n/j);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ara[100005];
    memset(ara,0,sizeof(ara));
    int cumm=0;
    int flagna=0,start;
    vi v;

    FOR(i,n)
    {
        int x=s[i]-'0';
        cumm+=x;
        v.pb(cumm);
        ara[cumm]++;
    }
    f(v[n-1]);





    if(flagna)cout<<"NO";
    else cout<<"YES";
}


