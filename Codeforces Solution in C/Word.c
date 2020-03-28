#include<stdio.h>
int main()
{
    char ara[100];
    int i,up=0,low=0;
    scanf("%s",ara);

    for(i=0; i<100; i++)
    {

        if(ara[i]=='\0')
            break;
        if(ara[i]>='A'&&ara[i]<='Z')
            up++;
        else if(ara[i]>='a'&&ara[i]<='z')
            low++;
    }

    if(up>low)
    {
        for(i=0; i<100; i++)
        {
            if(ara[i]>='a'&&ara[i]<='z')
                ara[i]=ara[i]-32;
        }
    }
    else
    {
        for(i=0; i<100; i++)
        {
            if(ara[i]>='A'&&ara[i]<='Z')
                ara[i]=ara[i]+32;
        }
    }
    printf("%s",ara);

}








