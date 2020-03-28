#include<stdio.h>
int main()
{
    int n,k,i,x,count=0;
    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);


        if(k==1)
            {
            if(x<=4)count++;

            }
        else if(k==2)
        {
         if(x<=3)count++;
        }
        else if(k==3)
        {
            if(x<=2)count++;
        }
        else if(k==4)
        {
            if(x<=1)count++;
        }
        else if(k==5)
        {
            if(x<=0)count++;
        }
        printf("%d",count);





    }
}
