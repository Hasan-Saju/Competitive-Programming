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
    ll t;
    cin>>t;
    while(t--)
    {
         ll a,b,q;
    cin>>a>>b>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll total=0;

        if(r>=b && l>=b)
            total=r-l+1;
        else if(r>=b && l<b)
            total=r-b+1;

           // cout<<total<<NL;
        ll lcmm=lcm(a,b);
        for(ll i=1;;i++)
        {
            ll temp=lcmm*i;
           // cout<<temp<<" ";
            if(temp>r)break;
            ll tempR=temp+b-1;

            if(tempR<l);
            else if(l<=temp  and  tempR<=r)total=total-b;
            else if(l>temp and tempR<=r)total=total-tempR-a;
            else total=total-temp-b-1;
            //cout<<total<<NL;

        }
        cout<<total<<" ";

    }
    cout<<NL;
    }


}

