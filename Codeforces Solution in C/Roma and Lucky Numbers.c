#include<stdio.h>
int main()
{
    int n,k,count=0,c=0,i,j,r,x;
    scanf("%d %d",&n,&k);

    for(j=0;j<n;j++)
    {
        scanf("%d",&x);
        count=0;

        for(i=0;x;i++)
        {

        r=x%10;
        if(r==4||r==7)count++;
        x/=10;

        }
        if(count<=k)c++;

    }
    printf("%d",c);
}
