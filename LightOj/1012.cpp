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
char grid[25][25];
bool visited[25][25];
int n,row,col;
int X[]={0,1,0,-1};
int Y[]={-1,0,1,0};

#define Boundary(i,j) ((i>=0&&i<row)&&(j>=0&&j<col))

void dfs(int x,int y)
{

    for(int i=0;i<4;i++)
    {
        if(Boundary(x+X[i],y+Y[i])&&grid[x+X[i]][y+Y[i]]=='.'&&!visited[x+X[i]][y+Y[i]])
        {
            visited[x+X[i]][y+Y[i]]=true;
            n++;
          //  cout<<n<<" ";
            dfs(x+X[i],y+Y[i]);
        }


    }


}



int main()
{
    int t,ti,i,j,x,y;
    char c;
    cin>>t;
    for(ti=0;ti<t;ti++)
    {
        n=0;
        cin>>col>>row;
        getchar();
        memset(visited,0,sizeof(visited));
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>c;
                grid[i][j]=c;
                if(c=='@')
                {
                    x=i;
                    y=j;
                    visited[i][j]=true;
                }
            }
            //getchar();
        }
        n=1;
        dfs(x,y);

        cout<<"Case "<<ti+1<<": "<<n<<endl;

    }






}


