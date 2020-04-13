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
    int t;
    cin>>t;
    while(t--)
    {
      string s[9];
    char c;
    for(int i=0;i<9;i++)
    {
        string temp;
        cin>>temp;
        s[i]=temp;

    }
    //cout<<s[1][1];
    s[0][6]=s[0][5];
    s[1][1]=s[1][0];
    s[2][5]=s[2][8];
    s[3][8]=s[3][5];
    s[4][2]=s[4][0];
    s[5][4]=s[5][7];
    s[6][7]=s[6][6];
    s[7][0]=s[7][1];
    s[8][3]=s[8][2];

    //cout<<s[0][6];

    for(int i=0;i<9;i++)
    {
        cout<<s[i]<<endl;
    }
    for(int i=0;i<9;i++)
        s[i].clear();

    }

}

