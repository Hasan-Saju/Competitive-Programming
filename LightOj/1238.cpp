#include<bits/stdc++.h>
using namespace std;

#define max3(a,b,c)         max(a,max(b,c))

const int N=25;
char field[N][N];
bool vis[N][N];
int dis[N][N];
int row,col;

int X[]={1,0,0,-1};
int Y[]={0,1,-1,0};

void bfs(int x,int y)
{
    memset(vis,false,sizeof(vis));
    vis[x][y]=true;
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
        for(int i=0;i<4;i++)
        {
            int vx,vy;
            vx=ux+X[i];
            vy=uy+Y[i];
            if( !vis[vx][vy] and vx>=1 and vx<=row and vy>=1 and vy<=col and field[vx][vy]!='#' and field[vx][vy]!='m' )
            {
                vis[vx][vy]=true;
                dis[vx][vy]=dis[ux][uy]+1;
                //cout<<"("<<vx<<" "<<vy<<") : "<<dis[vx][vy]<<" from "<<dis[ux][uy]<<"\n";
                Q.push(vx);
                Q.push(vy);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int j=1;j<=t;j++)
    {

        scanf("%d %d",&row,&col);

        int startx,starty,ax,ay,bx,by,cx,cy;
        for(int p=1;p<=row;p++)
        {
            for(int q=1;q<=col;q++)
            {
                char ch;
                scanf(" %c",&ch);
                field[p][q]=ch;
                if(ch=='h')
                    startx=p,  starty=q;
                if(ch=='a')
                    ax=p, ay=q;
                if(ch=='b')
                    bx=p, by=q;
                if(ch=='c')
                    cx=p, cy=q;

            }
        }

        bfs(startx,starty);

        int ans=max3(dis[ax][ay],dis[bx][by],dis[cx][cy]);

        printf("Case %d: %d\n",j,ans);

        memset(field,0,sizeof(field));
        memset(vis,false,sizeof(vis));
        memset(dis,0,sizeof(dis));

    }
}
