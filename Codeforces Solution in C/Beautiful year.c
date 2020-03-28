#include<stdio.h>
int main()
{
    int y,a,b,c,d,ans,year,flag=0;
    scanf("%d",&y);
    y=y+1;


  do{  a=y%10;
    ans=y/10;

    b=ans%10;
    ans=ans/10;

    c=ans%10;
    ans=ans/10;

    d=ans%10;
    ans=ans/10;

    if(a==b||a==c||a==d||b==a||b==c||b==d||c==a||c==b||c==d||d==a||d==b||d==c)flag=0;
        else flag=1;
        y++;
  }while(!flag);
  year=(d*1000)+(c*100)+(b*10)+a;
  printf("%d",year);

}
