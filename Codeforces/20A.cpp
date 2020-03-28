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
    //cout<<ceil((double)3/2);

    string s,ans="";
    int i,prev;
    cin>>s;
    ans+=s[0];
    prev=0;
    for(i=1;i<s.size();i++)
    {
        if(s[i]!='/')ans+=s[i];

        else if(s[i]=='/' and s[i-1]!='/')ans+=s[i];

      //  prev=i-1;
     //   cout<<s[i]<<" "<<s[prev]<<" "<<ans<<endl;
    }
    if(ans[ans.size()-1]=='/')
    {
        ans.erase(ans.size()-1,ans.size()-1);
    }
cout<<ans;

}

