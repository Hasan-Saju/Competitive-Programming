#include<bits/stdc++.h>
using namespace std;

const int N=110;
int field[N][N];
bool vis[N][N];
vector<int>X(8);
vector<int>Y(8);
int row,col,m,n,even,odd;
set<pair<int,int>>ninja;

void bfs(int x,int y)
{
    memset(vis,false,sizeof(vis));
    even=0,odd=0;


    queue<int>Q;
    Q.push(x);
    Q.push(y);
    //int xxx=0;
    while(!Q.empty())
    {
        int ux,uy;
        ux=Q.front();
        Q.pop();
        uy=Q.front();
        Q.pop();

        if(vis[ux][uy])continue;

        vis[ux][uy]=true;
        //cout<<ux<<" "<<uy<<"\n";
        //xxx++;
        //if(xxx>20)break;
        ninja.clear();
        int kount=0;
        for(int i=0;i<8;i++)
        {
            int vx=ux+X[i];
            int vy=uy+Y[i];
            //cout<<"out "<<vx<<" "<<vy<<"\n";
            if(vx>=0&&vy>=0 && vx<row && vy<col and field[vx][vy]!=-1)
            {
                //cout<<"in "<<vx<<" "<<vy<<"\n";

                //kount++;
                ninja.insert(make_pair(vx,vy));
                Q.push(vx);
                Q.push(vy);
            }
        }

        kount=ninja.size();
        if(kount%2==0)even++;
        else odd++;

    }
}

void setUp(int m,int n)
{
//    X[]={1,2,-1,-2,1,-1,2,-2};
//    Y[]={2,1,-2,-1,-2,2,-1,1};
    X[0]=m, X[1]=n, X[2]=-m, X[3]=-n, X[4]=m, X[5]=-m, X[6]=n, X[7]=-n;
    Y[0]=n, Y[1]=m, Y[2]=-n, Y[3]=-m, Y[4]=-n, Y[5]=n, Y[6]=-m, Y[7]=m;
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        memset(field,0,sizeof(field));
        X.clear();
        Y.clear();
        memset(vis,false,sizeof(vis));

        int water;
        scanf("%d %d %d %d %d",&row,&col,&m,&n,&water);

        setUp(m,n);

        for(int j=0;j<water;j++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            field[x][y]=-1;
        }
        //cout<<"bfs in";
        bfs(0,0);

        printf("Case %d: %d %d\n",i,even,odd);
    }

}













