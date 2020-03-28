#include<stdio.h>
int main()
{
    int n,ans,i;
    scanf("%d",&n);

        ans=n/2;
        printf("%d\n",ans);

        if(n%2==0)
            {
            for(i=0;i<ans;i++)
                {
                printf("2 ");
                }

            }else
            {
                for(i=0;i<ans-1;i++)
                {
                printf("2 ");
            }
            printf("3");
            }
}
