#include<stdio.h>
#include<string.h>

int main()
{
    int ara[70],len,i=0,j,k,z,le,temp;
    char st[110];
    gets(st);

    for(z=0; z<10; z++)
    {
        ara[z]=0;
    }


    len=strlen(st);

    for(j=0; j<len; j++)
    {
        if(st[j]>='0'&&st[j]<='9')
        {

            ara[i]=st[j]-'0';
            i++;
        }

    }
    le=i;

    for(i=0; i<le-1; i++)
    {
        for(j=0; j<le-1-i; j++)
        {
            if(ara[j+1]<ara[j])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    for(k=0; k<le; k++)
    {
        printf("%d",ara[k]);
       if(k!=le-1) printf("+");


    }
}
