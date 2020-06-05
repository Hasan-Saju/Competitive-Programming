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

const int N=300009;
int ara[N];
int tree[N];

int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=( idx & (-idx));
    }
    return sum;
}

void update(int idx, int x, int n)
{
    while(idx<=n)
    {
        tree[idx]+=x;
        idx+=(idx & (-idx));
    }
}

void donation(int idx, int x, int n)
{
    while(idx<=n)
    {
        tree[idx]-=x;
        idx+=(idx & (-idx));
    }
}

int main()
{
  //  fast
   // fWrite
    int t;
    scanf("%d",&t);

    FOR(a,t)
    {
        int n,q;
        printf("Case %d:\n",a+1);
        scanf("%d %d",&n,&q);

        for(int i=1;i<=n;i++)
        {
            scanf("%d", &ara[i]);
            update(i,ara[i],n);
        }

        // cout<<"Case "<<a+1<<":"<<NL;
        while(q--)
        {
            int f,sec,third;
            scanf("%d",&f);


            if(f==1)
            {
               scanf("%d",&sec);
                //cout<<query(sec+1)-query(sec)<<NL;
                donation(sec+1,ara[sec+1],n);
                printf("%d\n",ara[sec+1]);
                ara[sec+1]=0;

            }
            else if(f==2)
            {
                scanf("%d %d",&sec, &third);
                update(sec+1,third,n);
                ara[sec+1]+=third;

            }
            else
            {
                scanf("%d %d",&sec, &third);
                //i+1 --- j+1
                int ans= query(third+1)-query(sec);
                if(sec==0)
                    ans=query(third+1)-0;
               printf("%d\n",ans);
            }
        }
        memset(ara,0,sizeof(ara));
        memset(tree,0,sizeof(tree));
    }

}

