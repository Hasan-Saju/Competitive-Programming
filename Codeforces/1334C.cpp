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


int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        queue<pair<ll,ll> >q;
        pair<ll,ll>p;

        ll minn=9999999;

        FOR(i,n)
        {
            ll x,y;
            cin>>x>>y;
            minn=min(minn,x);
            q.push(mp(x,y));
        }
        ll total=0;

        while(!q.empty())
        {
           p=q.front();

           if(p.ff!=minn)
           {
                q.pop();
               q.push(p);
           }
           else
                break;
        }

        ll prev=0;

        while(!q.empty())
        {
            p=q.front();
            p.ff=p.ff-prev;
            if(p.ff<=0)
            {
                q.pop();
                prev=p.ss;
                continue;

            }
            total+=p.ff;
            prev=p.ss;
            q.pop();
           // cout<<p.ff<<" "<<p.ss<<endl;
        }

        cout<<total<<endl;

    }

}

