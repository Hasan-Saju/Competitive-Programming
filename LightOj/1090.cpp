#include<bits/stdc++.h>
using namespace std;

#define N 1000001
int dp2[N];
int dp5[N];

int d(int x, int base)
{
    int kount=0;
    while(x && (x%base==0) )
        kount++, x/=base;
    return kount;
}

void PreCalculation()
{
    int n=1000000;
    for(int i=1;i<=n;i++)
        dp5[i]=dp5[i-1]+d(i,5), dp2[i]=dp2[i-1]+d(i,2);
}

int main()
{
    PreCalculation();

    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n,r,p,q;
        scanf("%d %d %d %d",&n,&r,&p,&q);

        int five = dp5[n]-dp5[r]-dp5[n-r] + (dp5[p]-dp5[p-1])*q;
        int two = dp2[n]-dp2[r]-dp2[n-r] + (dp2[p]-dp2[p-1])*q;

        printf("Case %d: %d\n",i,max(0,min(five,two)) );        //(5*2)is the only way to produce a (0) at the end
    }
}

