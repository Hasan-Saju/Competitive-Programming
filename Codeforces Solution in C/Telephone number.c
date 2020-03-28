#include<stdio.h>
#include<string.h>
int main()

{
    int t,i,len,flag=0,count=0,loop;
    char str[100];
    scanf("%d",&t);

    for(loop=0; loop<t; loop++)
    {
        flag=0;
        count=0;
        scanf("%d",&len);

        scanf("%s",str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='8')
            {
                count=len-i;
                break;
            }
        }
        if(count>=11)
            flag=1;
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");


    }
}
