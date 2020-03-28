#include<stdio.h>
int main()
{
    int n,m,c,mi=0,ch=0,dr=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&m,&c);
        if(m>c)mi++;
        else if(c>m)ch++;
        else dr++;
    }

    if(mi>ch)printf("Mishka");
    else if(ch>mi)printf("Chris");
    else printf("Friendship is magic!^^");

}
