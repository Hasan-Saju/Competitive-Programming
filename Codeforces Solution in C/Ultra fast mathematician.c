#include<stdio.h>
int main()
{
    int i,ans;
    int ara[100],ara2[100],ara3[100];
    i=0;

  do{
        scanf("%d",&ara[i]);
        i++;
    }while(ara[i]!='\r');

      ans=ara[0]+ara[1];
      printf("%d",ans);

}
