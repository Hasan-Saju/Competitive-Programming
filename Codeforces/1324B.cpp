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
    //freopen("out.txt", "w", stdout);
    //freopen("in.txt", "r", stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[10000];
        memset(ara,0,sizeof(ara));
        int flag=0,i,x,prev;
         cin>>x;
            ara[x]++;
            prev=x;
        for(i=0;i<n-1;i++)
        {
            cin>>x;
            ara[x]++;
            if(x!=prev&&ara[x]>1||ara[x]>2)
            {
                flag=1;
            }
          //  cout<<x<<" "<<ara[x]<<" "<<prev<<" "<<flag<<endl;
            prev=x;

        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
