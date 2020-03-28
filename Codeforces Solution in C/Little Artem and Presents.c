#include<stdio.h>
int main()
{
    int n,total=0,i;
    scanf("%d",&n);

    for(i=1;total<=n;i++)
    {
        total=total+1;

        if(total>=n)break;

        else if(total<n){
            total=total+2;
            i++;
            if(total>n){i=i-1;break;}
            else if(total==n)break;

        }
    }
    printf("%d",i);
}
