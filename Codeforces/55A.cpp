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
    int ara[2000+10];
    memset(ara,0,sizeof(ara));
    int n,k=1,i,flag=0;
    cin>>n;
    ara[1]=1;
    for(i=1;i<=3*n;i++)
    {
        k=k+i;
       if(k>n) k=k%n;
        ara[k]=1;
        //cout<<k<<i<<" ";

    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)cout<<"NO";
    else cout<<"YES";
}

