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

const int N=1005;
int ara[N][N];
int tree[N][N];
int max_x,max_y;

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

int query(int x, int y)
{
    int sum=0;
    while(x>0)
    {
        int y1=y;
        while(y1>0)
        {
            sum += tree[x][y1];
            y1 -= ( y1 &(-y1) );
        }
        x -= ( x&(-x) );
    }
    return sum;
}

void update(int x, int y, int val)
{

    while(x<=max_x)
    {
        int y1=y;
        while(y1<=max_y)
        {
            tree[x][y1] += val;
            y1 +=( y1 & (-y1) );
        }
        x += ( x & (-x) );
    }
}

int sum(int x1, int y1, int x2, int y2)     ///expected portion
{
        return query(x2,y2)-query(x2,y1-1)-query(x1-1,y2)+query(x1-1,y1-1);
}

int main()
{
    // fast
    int t;
    cin>>t;

    FOR(j,t)
    {
        printf("Case %d:\n",j+1);
        int n;
        scanf("%d",&n);
        max_x=max_y=1001;

        FOR(i,n)
        {
            int ca;
            scanf("%d",&ca);

            switch(ca)
            {
            case 0:
                int x,y;
                scanf("%d %d",&x,&y);
                x++,y++;

                if(!ara[x][y])
                {
                    ara[x][y]=1;
                    update(x,y,1);
                }
                break;

            case 1:
                int x1,y1,x2,y2;
                scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
                x1++,y1++,x2++,y2++;

                printf("%d\n",sum(x1,y1,x2,y2));
                break;

            }
        }
        memset(tree,0,sizeof(tree));
        memset(ara,0,sizeof(ara));
    }

}

