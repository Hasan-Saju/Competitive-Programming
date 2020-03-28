#include<stdio.h>
int main()

{
    int h1,m1,h2,m2,c,t1,t2,t3,hour,minute;
    scanf("%d %c %d  %d %c %d",&h1,&c,&m1,&h2,&c,&m2);

    t1=(h1*60)+m1;
    t2=(h2*60)+m2;

    t3=(t1+t2)/2;

    hour=t3/60;
    minute=t3%60;


   if(hour<10&&minute<10)printf("0%d%c0%d",hour,c,minute);
    else if(hour<10)printf("0%d%c%d",hour,c,minute);
      else  if(minute<10)printf("%d%c0%d",hour,c,minute);


  else  printf("%d%c%d",hour,c,minute);



}
