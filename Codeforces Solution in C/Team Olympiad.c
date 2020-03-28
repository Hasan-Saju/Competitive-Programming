#include<stdio.h>
int main()
{
    int i,j,p,q,n,x,r,k=0,prog=0,math=0,pe=0;
    scanf("%d",&n);
    int ara[n];
    for(j=0; j<n; j++)
    {
        scanf("%d",&ara[j]);
    }


    for(i=0; i<n; i++)
    {

        if(ara[i]==1)
            prog++;
        else if(ara[i]==2)
            math++;
        else if(ara[i]==3)
            pe++;


    }
    if(prog<=math&&prog<=pe)
    {
        x=prog;
        printf("%d",x);
    }
    else if(math<=prog&&math<=pe)
    {
        x=math;
        printf("%d",x);
    }
    else if(pe<=math&&pe<=prog)
    {
        x=pe;
        printf("%d",x);
    }
    printf("\n");


    r=0,p=0,q=0;
    for (i=0; k<x;)
    {

        for(; r<n;)
        {
            if(ara[r]==1)
            {
                printf("%d ",r+1);
                r++;
                break;
            }
            r++;
        }

        for(; p<n;)
        {
            if(ara[p]==2)
            {
                printf("%d ",p+1);
                p++;
                break;
            }
            p++;

        }
        for(; q<n;)
        {
            if(ara[q]==3)
            {
                printf("%d ",q+1);
                q++;
                break;
            }
            q++;
        }
        printf("\n");
        k++;


    }



}


