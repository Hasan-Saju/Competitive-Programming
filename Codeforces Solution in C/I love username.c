#include<stdio.h>
int main()
{
    int a,i,count=0,max,min;
    scanf("%d",&a);
    int ara[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    max=ara[0];
    min=ara[0];


    for(i=0;i<a;i++)
    {
        if(ara[i]>max)
        {
            count++;
            max=ara[i];
        } else if(ara[i]<min)

            {
                count++;
                min=ara[i];
            }



    }


    printf("%d",count);

}
