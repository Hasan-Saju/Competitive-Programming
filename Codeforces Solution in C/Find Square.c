#include<stdio.h>
int main()
{
    int n,m,i,j,count=0,mid,ans1,ans2,flag=0;
    scanf("%d %d",&n,&m);

    char ara[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c", &ara[i][j]);
            if(ara[i][j]=='B')count++;
        }
    }



    mid=((count-1)/2)+1;


count=0;

     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]=='B')count++;
            if(count==mid)
                    goto label;
    }

}
label:
        printf("%d %d",i+1,j+1);

}
