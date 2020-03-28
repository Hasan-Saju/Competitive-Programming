#include<stdio.h>
int main()
{
    int n,s,sweet,max=0,i,a,b,flag=0;
    scanf("%d %d",&n,&s);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<s)
        {
            sweet=100-b;
            if(sweet>max&&sweet!=100)max=sweet;
            flag=1;
        }
        else if (a==s&&b==0)
        {
             sweet=100-b;
            if(sweet>max&&sweet!=100)max=sweet;
            flag=1;
        }

    }
    if(!flag)printf("-1");
   else printf("%d",max);

}
