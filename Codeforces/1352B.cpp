#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
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
    vi v;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int same=k-1;
        int sameEven=same*2;
        int sameOdd=same*1;

        int bakiEv=n-sameEven;
        int bakiOd=n-sameOdd;


        if(bakiOd%2==1 and bakiOd>0)
        {
            cout<<"YES"<<NL;
            while(same--)
                cout<<"1 ";
            cout<<bakiOd<<NL;
        }
        else if(bakiEv%2==0 and bakiEv>0)
        {
            cout<<"YES"<<NL;
            while(same--)
                cout<<"2 ";
            cout<<bakiEv<<NL;
        }
          else
        {
            label:
            cout<<"NO"<<NL;
        }



    }
}

