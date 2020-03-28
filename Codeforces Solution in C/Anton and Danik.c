#include<stdio.h>
int main()
{
    int n,i,danik=0,anton=0;
    scanf("%d",&n);
    char str[n];

    scanf("%s",&str);


    for(i=0;i<n;i++)
    {
        if(str[i]=='A')anton++;
        else if(str[i]=='D')danik++;
    }
    if(anton>danik)printf("Anton");
    else if(danik>anton)printf("Danik");
    else printf("Friendship");



}
