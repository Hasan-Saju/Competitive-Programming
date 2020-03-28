#include<stdio.h>
#include<math.h>

int main()
{

long long n,flag=1,i,s,x,j;
scanf("%I64d",&n);

for(j=0;j<n;j++)
{
    scanf("%I64d",&x);
    flag=1;
    s=sqrt(x);
    if(s*s==x)
    {
        for(i=2;i*i<=s;i++)
        {
            if(s%i==0)
            {
                flag=0;
                break;
            }
        }
    }else flag=0;
    if(x==1)flag=0;

    if(flag)printf("YES\n");
    else printf("NO\n");



}
}
