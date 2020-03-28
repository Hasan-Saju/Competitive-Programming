#include<stdio.h>
#include<string.h>
int main()
{
   int l;
    int i,flag=0,flag2=0,flag3=0,flag4=0;
    char original[100000];

    scanf("%s",&original);

    l=strlen(original);

    for(i=0;i<l;i++)
    {
        if(original[i]=='A'&&original[i+1]=='B')flag=1;
        if(original[i+2]=='B'&&original[i+3]=='A')flag2=1;
    }

     for(i=0;i<=l;i++)
    {
        if(original[i]=='B'&&original[i+1]=='A')flag3=1;
        if(original[i+2]=='A'&&original[i+3]=='B')flag4=1;
    }

    printf("%d %d %d %d",flag,flag2,flag3,flag4);
    if(flag&&flag2||flag3&&flag4)printf("YES");
    else printf("NO");


}
