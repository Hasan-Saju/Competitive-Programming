#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
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

int ara[51];

int main()
{
    fast
    int t;
    cin>>t;
    int field[51][51];
    int temp[51][51];
    while(t--)
    {
        memset(field,0,sizeof(field));
        memset(ara,0,sizeof(ara));
        int k=0,fakaRow=0,fakaCol=0;

        int r,c;
        cin>>r>>c;
        for(int i=1; i<=r; i++)
        {
            int row=0;
            for(int j=1; j<=c; j++)
            {
                int x;
                cin>>x;
                if(x!=0)
                    row++;
                field[i][j]=x;
            }
            if(row==0)
                fakaRow++;
        }

        for(int j=1; j<=c; j++)
        {
            int col=0;
            for(int i=1; i<=r; i++)
            {
                if(field[i][j]!=0)
                    col++;
            }
            if(col==0)
                fakaCol++;
        }

        k=min(fakaCol,fakaRow);
        //cout<<k<<fakaCol<<fakaRow<<NL;
        if(k%2==0)
            cout<<"Vivek\n";
        else
            cout<<"Ashish\n";

    }

}

