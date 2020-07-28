#include<bits/stdc++.h>
using namespace std;

const int N=105;
bool Left[N];
bool Right[N];

int main()
{
    int t;
    scanf("%d",&t);

    for(int j=1;j<=t;j++)
    {
        int n;
        scanf("%d",&n);

        memset(Left,false,sizeof(Left));
        memset(Right,false,sizeof(Right));

        int weightOne=0,weightTwo=0;
        for(int i=1;i<=n;i++)
        {
            int u,v,c;
            scanf("%d %d %d",&u,&v,&c);
            if(!Right[u] and !Left[v])  //  u ->v
            {
                Right[u]=Left[v]=true;
                weightOne+=c;
            }
            else                        // v->u
            {
                Left[u]=Right[v]=true;
                weightTwo+=c;
            }
        }

        printf("Case %d: %d\n",j,min(weightOne,weightTwo));

    }
}
