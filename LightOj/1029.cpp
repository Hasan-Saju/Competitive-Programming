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
    return(floor(log10(a)) + 1);
}
ll BMod(ll B, ll P, ll M)
{
    ll R = 1;
    B = B % M;
    while(P)
    {
        if(P & 1)
            R = (R * B) % M;
        P >>= 1;
        B = (B * B) % M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);

}

struct edge
{
    int u, v, w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};

int pr[100005];
vector<edge>e;
int node;

int Find(int r)
{
    return pr[r] = (pr[r] == r) ? r : Find(pr[r]);
}

int mstSmallest(int node)//n is for node
{
    sort(e.begin(), e.end());
    for(int i = 0; i <= e.size(); i++)
        pr[i] = i;

    int kount = 0, sum = 0;
    for(int i = 0; i <= e.size(); i++)
    {
        int u=Find(e[i].u);
        int v=Find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            kount++;
            sum+=e[i].w;
            if(kount==node)break;
        }

    }
        return sum;
}

int mstLargest(int node)//n is for node
{
    sort(e.rbegin(), e.rend());
    for(int i = 0; i <= e.size(); i++)
        pr[i] = i;

    int kount = 0, sum = 0;
    for(int i = 0; i < e.size(); i++)
    {
        int u=Find(e[i].u);
        int v=Find(e[i].v);
       // cout<<i<<" "<<kount<<" "<<node<<" "<<e.size()<<" "<<sum<<" "<<u<<v<<" "<<e[i].w<<" "<<e[i].u<<" "<<e[i].v<<endl;
        if(u!=v)
        {
            pr[u]=v;
            kount++;
            sum+=e[i].w; //cout<<sum<<" "<<kount<<" "<<node<<endl;
            if(kount==node)break;
        }

    }
    //cout<<endl;
        return sum;
}


int main()
{
    fast
   // fWrite
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {

        cin>>node;
        edge get;

        while(cin>>get.u>>get.v>>get.w and get.u+get.v+get.w)//jogfol 0 mane 0 0 0
        {
            e.push_back(get);
        }
        int best=mstSmallest(node);
        int worst=mstLargest(node);
       // cout<<best<<" "<<worst<<endl;

        int avg=best+worst;
        if(avg%2==0)cout<<"Case "<<j<<": "<<avg/2<<endl;
        else cout<<"Case "<<j<<": "<<avg<<"/"<<"2"<<endl;

        e.clear();
    }
}

