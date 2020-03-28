#include<bits/stdc++.h>
using namespace std;
char tiles[50][50];
int bound(int x,int y,int n)
{
    if(x-1>=0&&x-1<=n&&y-1>=0&&y-1<=n)return 1;
}
void tile(int i,int j,int n)
{
    if(tiles[i][j]=='.'&&tiles[i-1][j]=='.'&&tiles[i+1][j]=='.'&&tiles[i][j-1]=='.'&&tiles[i][j+1]=='.'&&bound(i,j,n))
    {
        tiles[i][j]='#';tiles[i-1][j]='#';tiles[i+1][j]='#';tiles[i][j-1]='#';tiles[i][j+1]='#';
    }

}
int main()
{
    int n,flag=0,p,q;
    cin>>n;

    for(p=0;p<n;p++)
    {
        for(q=0;q<n;q++)
        {
            cin>>tiles[p][q];
        }
    }
     for(p=0;p<n;p++)
    {
        for(q=0;q<n;q++)
        {
            tile(p,q,n);
        }
    }
     for(p=0;p<n;p++)
    {
        for(q=0;q<n;q++)
        {
            if(tiles[p][q]=='.')
            {
                flag=1;
                cout<<"NO";
                return 0;
            }
        }
    }
    if(!flag)cout<<"YES";

}
