#include<stdio.h>
int main()
{
    int k,w,i,n,borrow,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    int ara[w];
    for(i=1;i<=w;i++)
    {
        ara[i-1]=i*k;

    }
    for(i=0;i<w;i++){

        sum=sum+ara[i];

}
      if(n>sum||n==sum)printf("0");
      else{ borrow=sum-n;
      printf("%d",borrow);
      }
}
