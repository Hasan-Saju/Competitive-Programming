#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0,i,j,k,l;
    scanf("%d",&n);

    char str[n+2];
    char ans[n+2];
    scanf("%s",str);

    i=0;
    j=1;
    k=2;
    l=1;

    for(;;)
    {
       ans[n-l]=str[n-j];count++;

       if(count==n)break;

       ans[i]=str[n-k];count++;

        if(count==n)break;


       i++; j=j+2; l++; k=k+2;





    }

for(i=0;i<n;i++)
{


    printf("%c",ans[i]);




}
}
