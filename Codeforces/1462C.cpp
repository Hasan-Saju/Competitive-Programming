#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define emb         emplace_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
#define FOR(i,n)    for(int i=0;i<n;i++)

#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(a,min(b,min(c,d)))
#define max4(a,b,c,d)       max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))

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
    //fast
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int x;
        cin>>x;

        if(x>45)
            cout<<"-1\n";
        else if(x<=9)
            cout<<x<<"\n";
        else if(x>=10 and x<=17)
        {
            cout<<x%9<<"9\n";
        }
//        18 - 189
//        19 - 289
//        20  389
//        21  489
//        22  589
//        23  689
//        24  789

        else if(x>=18 and x<=24)
        {
            cout<<189+ (100*(x%18) )<<"\n";
        }

//        25  1789
//        26  2
//        27  3
//        28  4
//        29  5
//        30  6

        else if(x>=25 and x<=30)
        {
            cout<<1789 + ( 1000*(x%25) )<<"\n";
        }

//        31 16789
//        32 2
//        33 3
//        34 4
//        35 5

        else if(x>=31 and x<=35)
        {
            cout<<16789 + ( 10000*(x%31) )<<"\n";
        }

//        36 156789
//        37 2
//        38 3
//        39 4

        else if(x>=36 and x<=39)
        {
            cout<<156789 + ( 100000*(x%36) )<<"\n";
        }

//        40 1456789
//        41 2
//        42 3

        else if(x>=40 and x<=42)
        {
            cout<<1456789 + ( 1000000*(x%40) )<<"\n";
        }

//        43  13456789
//        44  2
//

        else if(x>=43 and x<=44)
        {
            cout<<13456789 + ( 10000000*(x%43) )<<"\n";
        }
        else if(x==45)
            cout<<"123456789\n";

    }

}

