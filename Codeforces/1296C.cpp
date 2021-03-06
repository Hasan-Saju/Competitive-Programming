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
#define NL          "\n"
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');
//ans+=string(r,'R');

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
ll POW(ll  B,ll P)
{
    ll R=1;
    while(P) {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<pair<int,int>,int>m;
        pair<int,int>temp;
        int l=-1,r=n+1;

        int lr=0,ud=0;

        temp.ff=lr;
        temp.ss=ud;

        m[temp]=1;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')lr++;
            else if(s[i]=='L')lr--;
            else if(s[i]=='U')ud++;
            else if(s[i]=='D')ud--;

            temp.ff=lr;
            temp.ss=ud;

            if(m[temp])
            {
                if(i-m[temp]<r-l)
                {
                    l=m[temp];
                    r=i;
                }
            }

            m[temp]=i+2;

        }
        if(l==-1 and r==n+1)cout<<"-1"<<NL;
        else
        cout<<l<<" "<<r+1<<NL;
    }

}
