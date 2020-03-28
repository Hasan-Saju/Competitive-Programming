#include<stdio.h>
int main()
{


int n,i,j,temp,k;
scanf("%d",&n);
int ara[n];
for(i=0;i<n;i++)
{
    scanf("%d",&ara[i]);
}

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(ara[j]>ara[j+1])
        {
            temp=ara[j];
            ara[j]=ara[j+1];
            ara[j+1]=temp;
        }
    }
}
if(n%2==0)
{

    k=(n/2)-1;
    printf("%d",ara[k]);



}else
{
    k=(n/2);

    printf("%d",ara[k]);

}

}
