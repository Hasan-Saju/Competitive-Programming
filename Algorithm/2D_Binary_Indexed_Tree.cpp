#include<bits/stdc++.h>
using namespace std;

const int N=1000005;
int ara[N][N];
int tree[N][N];
int max_x=N+1,max_y=N+1;        ///dimension

int query(int x, int y)         ///(x,y) te sum
{
    int sum=0;
    while(x>0)
    {
        int y1=y;
        while(y1>0)
        {
            sum += tree[x][y1];
            y1 -= ( y1 &(-y1) );
        }
        x -= ( x&(-x) );
    }
    return sum;
}

void update(int x, int y, int val)          ///(x,y) point er value val barabo
{

    while(x<=max_x)
    {
        int y1=y;
        while(y1<=max_y)
        {
            tree[x][y1] += val;
            y1 +=( y1 & (-y1) );
        }
        x += ( x & (-x) );
    }
}


int main()
{
    int n;
    cin>>n;

    max_x=n;
    max_y=n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n;j++)
        {
        cin>>ara[i][j];
        update(i,j,ara[i]);
        }
    }


}

