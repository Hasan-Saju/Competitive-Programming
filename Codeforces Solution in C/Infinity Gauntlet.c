#include<stdio.h>
int main()
{
    int n,i,p=0,g=0,b=0,o=0,r=0,y=0,sum=0,remain=0;
    scanf("%d",&n);


    int ara[6];
    char str[8];

    for(i=0;i<n;i++)
    {
        scanf("%s",&str);
        if(str[0]=='p')p=1;
        if(str[0]=='g')g=1;
        if(str[0]=='b')b=1;
        if(str[0]=='o')o=1;
        if(str[0]=='r')r=1;
        if(str[0]=='y')y=1;
    }
    ara[0]=p;
    ara[1]=g;
    ara[2]=b;
    ara[3]=o;
    ara[4]=r;
    ara[5]=y;

    for(i=0;i<6;i++)
    {
        sum=sum+ara[i];
    }
    remain=6-sum;

    printf("%d\n",remain);

   if(p==0)printf("Power\n");
   if(g==0)printf("Time\n");
   if(b==0)printf("Space\n");
   if(o==0)printf("Soul\n");
   if(r==0)printf("Reality\n");
   if(y==0)printf("Mind\n");
}
