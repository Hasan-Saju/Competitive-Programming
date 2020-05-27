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


char field[200][200];
char ans[100];
int n,m;

bool check()
{
    int diff=0;
    for(int i=1;i<=n;i++)
    {
        diff=0;
        for(int j=1;j<=m;j++)
        {
            if(field[i][j] != ans[j])
                diff++;
        }
        if(diff>1) return false;


    }
    return true;
}





int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;

            for(int j=0;j<m;j++)
                field[i][j+1]=s[j];
        }

        //solution part

        for(int i=1;i<=m;i++)
            ans[i]=field[1][i];
           // cout<<ans[1]<<" * \n";

            int flag=0;
        for(int i=1;i<=m;i++)
        {
            for(char c='a'; c<='z'; c++ )
            {
                ans[i]=c;
                if(check())
                {
                     for(int i=1;i<=m;i++)
                        cout<<ans[i];
                        cout<<NL;
                     flag=1;
                     break;
                }
            }
            if(flag)break;
            ans[i]=field[1][i];
        }
        if(!flag)cout<<"-1"<<NL;


    }
}



















