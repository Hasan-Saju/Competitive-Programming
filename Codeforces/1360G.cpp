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

int f[51][51];

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        memset(f,0,sizeof(f));

       int i=1,mot=0,rowChange=0;

            for(int j=1; ; j++)
            {
                mot++;
                rowChange++;

                f[i][j]=1;
                if(rowChange==a) rowChange=0, i++;
                if(mot== n*a )break;
                if(j==m)j=0;

            }

//            for(int i=1;i<=n;i++)
//            {
//                for(int j=1;j<=m;j++)
//                    cout<<f[i][j];
//                cout<<NL;
//            }

    /*   0 0 0
         1 0 0
         0 1 0      */

         int hobena=0;

            for(int i=1; i<=m ;i++)
            {
                int kount=0;
                for(int j=1; j<=n; j++)
                {
                    if(f[j][i]==1)
                        kount++;
                }
                if(kount!=b)
                {
                    hobena=1;
                    break;
                }
            }

            int hobena2=0;
             for(int i=1; i<=n ;i++)
            {
                int kount=0;
                for(int j=1; j<=m; j++)
                {
                    if(f[i][j]==1)
                        kount++;
                }
                if(kount!=a)
                {
                    hobena2=1;
                    break;
                }
            }


            if(hobena || hobena2)
            {
                cout<<"NO"<<NL;
                continue;
            }

            cout<<"YES"<<NL;

            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                    cout<<f[i][j];
                cout<<NL;
            }



    }
}

