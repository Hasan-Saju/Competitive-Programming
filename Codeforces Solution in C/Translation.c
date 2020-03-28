#include<stdio.h>
int main()
{
    char str1[1000];
    char str2[1000];

    scanf("%s",&str1);
    scanf("%s",&str2);

    strrev(str1);

    int d=strcmp(str1,str2);

    if(d==0)printf("YES");
    else printf("NO");

}
