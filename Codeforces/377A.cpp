
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
#define Boundary(i,j) (( i>=0&&i<row)&&(j>=0&&j<col))
char grid[500+25][500+25];
int visited[500][500];
int row,col,k=0,n,bad,p=0;
int X[]={1,0,-1,0};
int Y[]={0,-1,0,1};

void dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        if(Boundary(x+X[i],y+Y[i])&&!visited[x+X[i]][y+Y[i]]&&grid[x+X[i]][y+Y[i]]=='.')
        {
            visited[x+X[i]][y+Y[i]]=true;
            k++;//cout<<k<<" ";
            if(k>=bad+1)
            {
                grid[x+X[i]][y+Y[i]]='X';
                p++;
               // cout<<p<<" ";

            }
            dfs(x+X[i],y+Y[i]);
//            if(n==k)goto label;
        }
    }



}


int main()
{
    cin>>row>>col>>n;
    char c;
    int kount=0,x,y;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
         cin>>c;
         grid[i][j]=c;
         if(c=='.')
         {
             kount++;
             x=i;y=j;
         }
        }
    }
    bad=kount-n;
    dfs(x,y);
  //  label:
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
   // cout<<kount;

}



