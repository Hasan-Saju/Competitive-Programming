#include<stdio.h>
int main()
{
    int n,m,odd=0,odd2=0,even=0,even2=0,i,t1,t2,total;
    scanf("%d %d",&n,&m);

    int ara[n],ara2[m];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]%2)odd++;
        else even++;

    }



    for(i=0;i<m;i++)
    {
        scanf("%d",&ara2[i]);
        if(ara2[i]%2)odd2++;
        else even2++;
    }

    if(odd<=even2)t1=odd;
    else t1=even2;

     if(odd2<=even)t2=odd2;
    else t2=even;


    total=t1+t2;
    printf("%d",total);

}
