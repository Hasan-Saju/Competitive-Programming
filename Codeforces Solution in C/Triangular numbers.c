#include<stdio.h>
int main()
{
    int n,flag=0,i,t;
    scanf("%d",&n);

    for(i=1;;i++)
    {
        t=(i*(i+1))/2;
        if(t>500)break;
        if(t==n)
        {
            flag=1;
            break;
        }
    }
    if(flag)printf("YES");
    else printf("NO");
}
