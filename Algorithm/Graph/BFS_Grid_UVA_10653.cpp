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
int field[N][N];
int vis[N][N];
int dis[N][N];
int X[]={1,0,0,-1};
int Y[]={0,1,-1,0};
int row,col;

void bfs(int x,int y)
{
   // cout<<"In"<<endl;
    memset(vis,0,sizeof(vis));
    vis[x][y]=1;
    dis[x][y]=0;// root er level 0
    queue<int>Q;
    Q.push(x);
    Q.push(y);
    while(!Q.empty())
    {
      //  cout<<"In"<<endl;
        int ux,uy;
        ux=Q.front();
        Q.pop();
        uy=Q.front();
        Q.pop();

        for(int i=0;i<4;i++)
        {
            int vx,vy;
            vx=ux+X[i];
            vy=uy+Y[i];
            if((vx>=0&&vy>=0)&&(vx<row&&vy<col)&&field[vx][vy]!=1)
            {
                if(!vis[vx][vy] and !dis[vx][vy])
                {
                vis[vx][vy]=1;
                dis[vx][vy]=dis[ux][uy]+1;
                Q.push(vx);
                Q.push(vy);
              //  cout<<dis[vx][vy]<<" ";
                }
            }
        }
    }
}

int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    while(cin>>row>>col)
    {
       if(!row and !col)return 0;
        memset(field,0,sizeof(field));
        int nr,r,kountCol,x,startR,startC,targetR,targetC;
        cin>>nr;
        for(int i=0;i<nr;i++)
        {
            cin>>r>>kountCol;
            while(kountCol--)
            {
                cin>>x;
                field[r][x]=1;
            }

        }
        cin>>startR>>startC;
        bfs(startR,startC);
        cin>>targetR>>targetC;
        cout<<dis[targetR][targetC]<<endl;

        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        memset(field,0,sizeof(field));
    }

}
//cf 1130C
//http://lightoj.com/volume_showproblem.php?problem=1238
