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

int vis[20][20];
int dis[20][20];
int X[]={2,-2,2,-2,1,-1,1,-1};
int Y[]={1,1,-1,-1,2,2,-2,-2};

int bfs(int x,int y,int tx,int ty)//t for target
{
    memset(vis,0,sizeof(vis));
    vis[x][y]=1;
    dis[x][y]=0;
    queue<int>Q;
    Q.push(x);
    Q.push(y);
    while(!Q.empty())
    {
       int ux=Q.front();
        Q.pop();
       int uy=Q.front();
        Q.pop();
        if(ux==tx and uy==ty)return dis[ux][uy];

        for(int i=0;i<8;i++)
        {
            int vx=ux+X[i];
            int vy=uy+Y[i];
           // cout<<vx<<" "<<vy<<" "<<X[i]<<" "<<Y[i]<<" "<<ux<<uy<<endl;
            if(vx>=0&&vx<8&&vy>=0&&vy<8&&!vis[vx][vy])
            {
                vis[vx][vy]=1;
                dis[vx][vy]=dis[ux][uy]+1;
              //  cout<<dis[vx][vy]<<" ";//<<vx<<tx<<" ";

                Q.push(vx);
                Q.push(vy);
            }
        }
    }
}

int main()
{
    //fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);

    string s,f;
    while(cin>>s>>f)
    {
        int sx,sy,fx,fy;//start s and finish f
        sx=s[0]-'a';
        sy=s[1]-'1';
        fx=f[0]-'a';
        fy=f[1]-'1';
       // cout<<sx<<sy<<" ";
      int ans= bfs(sx,sy,fx,fy);
      cout<<"To get from "<<s<<" to "<<f<<" takes "<<ans<<" knight moves."<<endl;
      memset(vis,0,sizeof(vis));
      memset(dis,0,sizeof(dis));

    }

}

