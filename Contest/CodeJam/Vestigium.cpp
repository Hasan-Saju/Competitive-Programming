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
#define asi         cout<<"Check"<<endl;
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

int mat[105][105];
int temp[105][105];

int main()
{
    fast
    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        int n,sum=0;
        cin>>n;
        memset(mat,0,sizeof(mat));
        memset(temp,0,sizeof(temp));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int x;
                cin>>x;
                mat[i][j]=x;
                temp[j][i]=x;
                if(i==j)sum+=x;
            }
        }

   int row[105];
   int col[105];
   memset(row,0,sizeof(row));
   memset(col,0,sizeof(col));

        int RowRepeat=0;

         for(int i=1;i<=n;i++)
        {
             memset(row,0,sizeof(row));

            for(int j=1;j<=n;j++)
            {
                int x=mat[i][j];
                row[x]++;
                if(row[x]>=2)
                {
                    RowRepeat++;
                    break;
                }
            }
        }
        //ans in row rep
        int ColRepeat=0;
         for(int i=1;i<=n;i++)
        {
             memset(col,0,sizeof(col));

            for(int j=1;j<=n;j++)
            {
                int x=temp[i][j];
                col[x]++;
                if(col[x]>=2)
                {
                    ColRepeat++;
                    break;
                }
            }
        }

        //print
        cout<<"Case #"<<l<<": "<<sum<<" "<<RowRepeat<<" "<<ColRepeat<<endl;
    }
}

