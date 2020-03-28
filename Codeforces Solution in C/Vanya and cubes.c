#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    scanf("%d",&n);



    for(i=1;sum<n ;i++)
    {

        for(j=1;i>=j;j++)
        {

            sum=sum+j;
            if(sum>n)
            {
                i=i-1;
                break;
            }

        }


    }
    printf("%d",i-1);
}
