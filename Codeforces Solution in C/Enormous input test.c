#include<stdio.h>
int main()
{
    int n,k,i,x,count=0;
    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++){
        scanf("%d",&x);

        if(x%k==0)count++;
    }
    printf("%d",count);
}
