#include<stdio.h>

struct collection
{
    int a,b;
}s[100000];




int main()
{
    int n,i,count=0,max=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&s[i].a,&s[i].b);

    }

    for(i=0;i<n-1;i++)
    {
        if(s[i].a==s[i+1].a&&s[i].b==s[i+1].b)count++;
        else
        {
            if(count>max)max=count;
            count=0;

        }



    }

 if(count>=max)max=count;
    printf("%d",max+1);

}
