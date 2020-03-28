

#include<stdio.h>
int main()
{
     int n,a,x,b,y,person1,person2,flag=0;
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);


    while(1)
    {
        person1=a++;
        person2=b--;

        if(person1==person2)
        {
            flag=1;
            break;
        }

        if(person1==x||person2==y)
            break;

        if(person1==n)
            a=1;
        if(person2==1)
            b=n;





    }

    if(flag)
        printf("YES");
    else
        printf("NO");

}
