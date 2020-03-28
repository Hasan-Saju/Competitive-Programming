#include<stdio.h>
int main()
{
    int n,yes=0,no=0,i;
    scanf("%d",&n);

    char str[n];
    scanf("%s",&str);

    for(i=0;i<n;i++)
    {

        if(str[i]=='S'&&str[i+1]=='F')yes++;
        if(str[i]=='F'&&str[i+1]=='S')no++;

    }
    if(yes>no)printf("YES");
    else printf("NO");
}
