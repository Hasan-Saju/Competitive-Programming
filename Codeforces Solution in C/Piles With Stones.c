#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0,i;
    scanf("%d",&n);

    int first[n],second[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&first[i]);
        sum1+=first[i];
    }
     for(i=0;i<n;i++)
    {
        scanf("%d",&second[i]);
        sum2+=second[i];
    }
    if(sum1>=sum2)printf("YES");
    else printf("NO");
}
