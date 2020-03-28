#include<stdio.h>
int main()
{
    int n,four=0,three=0,two=0,one=0,taxi=0,i,extra_two,extra;
    scanf("%d",&n);

    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==4)four++;
          if(ara[i]==3)three++;
            if(ara[i]==2)two++;
              if(ara[i]==1)one++;
    }

   if(three>=one)one=0;
   else if(one>three)one=one-three;



     extra_two=two%2;
     if(two%2==0)
       two=two/2;
       else two=(two/2)+1;




   if((2*extra_two)>=one)one=0;
   else one=one-(2*extra_two);



 if(one==0)one=0;
 else {
    if(one%4==0)one=one/4;
    else one=(one/4)+1;
 }

    taxi=four+three+two+one;

    printf("%d",taxi);
}
