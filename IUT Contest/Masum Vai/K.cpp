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
#define mod 1000000007

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

    int n;
    cin>>n;

    while(n--)
    {
        ll a,b,c,temp;
        cin>>a>>b>>c;
        temp=BMod(b,c,mod-1);
        cout<<BMod(a,temp,mod)<<endl;
    }
}

