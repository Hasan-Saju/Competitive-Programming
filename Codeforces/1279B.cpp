#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe


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
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        vector<pair<ll,ll> >temp;
        ll n,time,s=0;
        bool flag=false;
        cin>>n>>time;
        FOR(i,n)
        {
            ll x;
            cin>>x;
            s+=x;
            v.pb(x);
            if(s>time)flag=true;
        }
        //cout<<s<<" "<<time;
        if(flag==false){
            cout<<"0"<<endl;
            continue;
        }
       // sort(v.begin(),v.end());
        ll sum=0,kount=0,store=0;
        FOR(i,n)
        {
            sum+=v[i];
            temp.pb(mp(v[i],i+1));


            ++kount;
            store=i;
            if(sum>time)break;

        }
        //cout<<temp[0].ss;
        sort(temp.begin(),temp.end(),greater<pair<ll,ll>>());
        cout<<temp[0].ss<<endl;
    }

}

