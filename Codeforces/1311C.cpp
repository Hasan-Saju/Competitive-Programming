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
        int len,tryy,i,x;
        cin>>len>>tryy;

        int ara[len+7];
        memset(ara,0,sizeof(ara));

        string s;
        cin>>s;

        for(i=0; i<tryy; i++)
        {
            cin>>x;
            ara[x-1]++;
        }
        for(i=len-1; i>0; i--)
        {
            ara[i-1]+=ara[i];
        }
        map<char,int>m;
        for(i=0; i<s.size(); i++)
        {
            m[s[i]]+=ara[i]+1;
        }
        for(char c='a'; c<='z'; c++)
        {
            cout<<m[c]<<" ";
        }
        cout<<endl;

    }
}

