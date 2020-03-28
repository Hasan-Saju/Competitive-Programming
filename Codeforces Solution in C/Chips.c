#include<stdio.h>
int main()
{
    int n,m,i,total=0,ans,j=1;
    scanf("%d %d",&n,&m);

    for(i=1;;i++)
    {


        total=total+i;
      //  printf("\n %d",total);

          if(total>m)
        {
            total=total-i;
            break;
        }else if(total==m)break;



        if(i==n)
            {
            i=0;
            }

    }
    ans=m-total;
    printf("%d",ans);


}
