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
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

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

int sum(int num)
{
    int s=0;
 while(true)
        {

            int x=num%10;
            s+=x;
            num=num/10;
            if(num==0)break;
        }
        return s;
}

int main()
{
    fast
    int n;
    cin>>n;

    vi v;


    for(int i=1;i<=100;i++)
    {
        if(i==sum(n-i))
                v.pb(n-i);

                //cout<<i<<" "<<sum(n-i)<<endl;
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    FOR(j,v.size())cout<<v[j]<<" ";
}

