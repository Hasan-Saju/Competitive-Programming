#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

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
const int N=1005;
vector<int>V[N];
int dis[50];
int vis[50];
int testNo=1;

int bfs(int s, int target)
{
    // cout<<"called"<<endl;
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    vis[s]=1;
    dis[s]=0;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0; i<V[x].size(); i++)
        {

            int u=V[x][i];
            // cout<<u<<endl;
            if(!vis[u])
            {
                vis[u]=1;
                dis[u]=dis[x]+1;
                if(u==target)
                {
                    //  cout<<u<<" "<<dis[u]<<endl;
                    return dis[u];
                }
                Q.push(u);
            }
        }
    }


}


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int node=20,edge,x,y,first;

    while(cin>>first)
    {
        for(int i=0; i<first; i++)
        {
            cin>>y;
            V[1].pb(y);
            V[y].pb(1);
        }

        for(int i=2; i<=19; i++)
        {
            //  cout<<"give x: ";
            cin>>x;
            while(x--)
            {
                //   cout<<"y: ";
                cin>>y;
                V[i].pb(y);
                V[y].pb(i);
                //  cout<<i<<" ";
            }
        }


        int check;
        cin>>check;
        cout<<"Test Set #"<<testNo++<<endl;
        while(check--)
        {
            int start,endd,ans;
            cin>>start>>endd;
            ans=bfs(start,endd);
            if(start<10)
                cout<<" "<<start;
            else
                cout<<start;
            cout<<" to ";
            if(endd<10)
                cout<<" "<<endd;
            else
                cout<<endd;
            cout<<": "<<ans<<endl;


            // cout<<start<<" to "<<endd<<": "<<ans<<endl;//presentation

        }
        cout<<endl;
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));

        for(int i=0; i<21; i++)
            V[i].clear();
    }

}

