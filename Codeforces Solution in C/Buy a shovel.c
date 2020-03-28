#include<stdio.h>
int main()
{
    int k,r,i,p,remain;
    scanf("%d %d",&k,&r);

    for(i=1;;i++)
    {
       p=i*k;
       remain=p%10;

       if(remain==r||remain==0)break;
    }
    printf("%d",i);
}
