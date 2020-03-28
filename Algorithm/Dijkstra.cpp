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
#define infinity    0x3f3f3f3f
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


struct node
{
    int name,val;
    bool operator <(const node &p) const
    {
        return p.val < val;
    }
};


const int N=100005;
vector<pair<int,int> >V[N];//
int dis[N];
bool vis[N];
priority_queue<node>Q;

void Dijkstra(int s)
{
    memset(vis,0,sizeof(vis));
    memset(dis,infinity,sizeof(dis));

    dis[s]=0;
    node get;
    get.name=s;
    get.val=0;
    Q.push(get);

    while(!Q.empty())
    {
        node temp=Q.top();
        Q.pop();
        int now=temp.name;
        if(vis[now]) continue;
        vis[now]=1;
        for(int i=0;i<V[now].size();i++)
        {
            int x=V[now][i].ff;//node
            int y=V[now][i].ss;//cost
            if(dis[now]+y<dis[x])
            {
                dis[x]=dis[now]+y;
                get.name=x;
                get.val=dis[x];
                Q.push(get);
            }
        }
    }
    return;
}

void print_path(int s1,int s2)//s1== to   s2==from
{

    if(s1==s2) return;
    print_path(previous[s1],s2);//age ekdom matha porjonto jabe then print korte thakbe
    cout<<s1<<" ";//previous[s1]//s1=4 3 5//prev[s1]=1 4 3 //ans=1 4 3 5
}


int main()
{
    fast
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int n1,n2,c;
        cin>>n1>>n2>>c;
        V[n1].push_back({n2,c});
        V[n2].push_back({n1,c});
    }
    Dijkstra();
}
