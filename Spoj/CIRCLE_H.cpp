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
    int t;
    cin>>t;
    while(t--)
    {
         int r1,r2,r3;
    cin>>r1>>r2>>r3;
    double a,b,c,temp,temp2,ans;
    a=(double)r1;
    b=(double)r2;
    c=(double)r3;

    temp=(1.0/a)+(1.0/b)+(1.0/c);
   // cout<<"te"<<" "<<temp<<endl;
    temp2=(1.0/(a*b))+(1.0/(b*c))+(1.0/(c*a));
    temp2=2*sqrt(temp2);
    ans=temp+temp2;
    ans=(1.0/ans);
    cout<<fixed<<setprecision(6)<<ans<<endl;
    }

}

