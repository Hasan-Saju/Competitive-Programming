#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,vagfol,vagshesh,extra,i;
    scanf("%d %d",&n,&m);

    vagfol=n/m;
    vagshesh=n%m;
    extra=m-vagshesh;

    for(i=0;i<m;i++)
    {
        if(i>=extra)printf("%d ",vagfol+1);
        else
        printf("%d ",vagfol);

    }
}
