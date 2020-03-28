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
    int n,p1,p2,p3,t1,t2,i,gap,ans=0;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
int    x=0,y=0;
int left[2000],right[2000];
memset(left,0,sizeof(left));
memset(right,0,sizeof(right));



    for(i=0;i<n;i++)
    {
        cin>>x>>y;
       left[i]=x;
       right[i]=y;
       ans+=p1*(right[i]-left[i]);
       gap=left[i]-right[i-1];
        if(i==0)continue;
       ans+=p1*(min(t1,gap));
       gap=gap-t1;
       if(gap>0)
       ans+=p2*(min(t2,gap));
       gap=gap-t2;
       if(gap>0)
        ans+=p3*gap;
    }
    cout<<ans;
}

