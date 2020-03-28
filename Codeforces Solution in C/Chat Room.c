#include<stdio.h>
int main()
{
    char ara[100];
    int i,a,b,c,d,e;
    scanf("%s",&ara);

    a=b=c=d=e=0;

    for(i=0;i<100;)
    {
        if(ara[i]=='h'){a=1;
        break;}
        i++;
    }
    for(i=i+1;i<100;)
    {
        if(ara[i]=='e'){b=1;
        break;}
        i++;

    }
    for(i=i+1;i<100;)
    {
        if(ara[i]=='l'){c=1;
        break;}
        i++;

    }
    for(i=i+1;i<100;)
    {


        if(ara[i]=='l'){d=1;
        break;}
        i++;

    }
    for(i=i+1;i<100;)
    {
        if(ara[i]=='o')
        {e=1;
        break;}
        i++;

    }
    if(a==1&&b==1&&c==1&&d==1&&e==1)printf("YES");
    else printf("NO");
}
