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
    for(int j=0;j<t;j++)
    {
        int total,pos,mod;
        cin>>total>>pos;
        mod=(total*(total-1))/2;
        pos=pos%mod;
        if(pos==0)pos=mod;

        string temp="";
        for(int i=0;i<total-2;i++)
            temp+="a";
        temp+="bb";

       if(pos%2==0)
       {
           int div=pos/2;
           int f=min(total-2,div);
           int s=div-min(total-2,div);
           if(s<0)s=0;
           f=total-(f+2);
           s=total-(s+1);
           swap(temp[f],temp[total-2]);
           swap(temp[s],temp[total-1]);
           cout<<f<<" "<<s<<endl;

       }
        cout<<temp<<endl;
    }

}
