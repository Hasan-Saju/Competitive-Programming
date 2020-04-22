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


int main()
{
    fast
    ll n;
    ll M=3000000000;
    cin>>n;

    ll dig[15];
    memset(dig,0,sizeof(dig));

    dig[1]=9;
    dig[2]=180;
    dig[3]=2700;
    dig[4]=36000;
    dig[5]=450000;
    dig[6]=5400000;
    dig[7]=63000000;
    dig[8]=720000000;
    dig[9]=8100000000;
    dig[10]=90000000000;


    ll given=Digits(n);

   ll temp=n-BMod(10,given-1,M)+1;
   ll tempAns=temp*given;

    for(int i=given-1;i>0;i--)
        tempAns+=dig[i];

    cout<<tempAns;




}

