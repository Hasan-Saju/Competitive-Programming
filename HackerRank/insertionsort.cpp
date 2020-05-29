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

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define PI          2*acos(0.0)
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
    while(P)
    {
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
    int n;
    cin>>n;
    vi v;
    int last=0;


    FOR(i,n)
    {
        int x;
        cin>>x;
        if(i!=n-1)
            v.pb(x);
        else
            last=x;
    }

    int siz=v.size();
    int dup=0;
    int flag=0;

    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]<last)
        {
            for(int j=0; j<=i; j++)
                cout<<v[j]<<" ";
            cout<<last<<" ";

            for(int j=i+1; j<siz; j++)
                cout<<v[j]<<" ";
            cout<<NL;
           flag=1;
           //break;
        }
        else
        {
             for(int j=0; j<=i; j++)
               {
                   cout<<v[j]<<" ";
                   dup=v[j];
               }
            cout<<dup<<" ";
            for(int j=i+1; j<siz; j++)
                cout<<v[j]<<" ";
            cout<<NL;
        }
    }
    if(!flag)
    {
         cout<<last<<" ";
    FOR(i,n-1)
    cout<<v[i]<<" ";

    }





}

