#include<stdio.h>
int main()
{
    int ara[]={12,5,20,9,3};
    int n,i,m,temp;

    for(n=0;n<4;n++)
    {

        for(m=0;m<4;m++)
        {
            if(ara[m]>ara[m+1])
            {
                temp=ara[m];
                ara[m]=ara[m+1];
                ara[m+1]=temp;
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("%d\t",ara[i]);
    }
}
