#include<stdio.h>
int main()
{
    int n,l=0,i,d,r,k,b;
    char a,c;
    char ara[100];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&ara);
        l=strlen(ara);
        k=l-2;
        d=k/10;
        r=k%10;

        if(l>10)
        {
            a=ara[0];
            b=k;
            c=ara[l-1];
            printf("%c%d%c \n",a,b,c);

        }
        else printf("%s\n",ara);

    }
}
