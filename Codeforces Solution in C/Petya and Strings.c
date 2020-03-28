#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s1[110],s2[110];

    gets(s1);
    gets(s2);

    strlwr(s1);
    strlwr(s2);

    printf("%d",strcmp(s1,s2));
}
