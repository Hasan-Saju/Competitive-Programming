#include<bits/stdc++.h>
using namespace std;
char area[100][100];
int m,n;

void dfs(int x,int y)
{
    if(x<0||y<0||x==m||y==n)return;
    if(area[x][y]=='*')return;
    if(area[x][y]=='@')area[x][y]='*';
    dfs(x-1,y-1);
    dfs(x-1,y);
    dfs(x-1,y+1);
    dfs(x,y-1);
    dfs(x,y+1);
    dfs(x+1,y-1);
    dfs(x+1,y);
    dfs(x+1,y+1);
}


int main()
{
    int i,j,kount=0;

    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m==0)break;

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>area[i][j];
            }
        }
        kount=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(area[i][j]=='@')
                {
                    dfs(i,j);
                    kount++;
                }
            }
        }


     cout<<kount<<endl;


    }




    return 0;





}
