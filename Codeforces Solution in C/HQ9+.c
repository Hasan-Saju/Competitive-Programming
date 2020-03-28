#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char str[110];
    scanf("%s",&str);

    int l=strlen(str);

    for(i=0;i<l;i++)
    {
        if(str[i]=='H')flag=1;
       else if(str[i]=='Q')flag=1;
       else if(str[i]=='9')flag=1;

    }if(flag)printf("YES");
    else printf("NO");
}
