#include<stdio.h>
#include<string.h>
int main()
{
    int i,max=0,count=0;
    char st[105];
    gets(st);
    int len=strlen(st);

//st[len]='B';

    for(i=0;i<len;i++)
    {
        if(st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'||st[i]=='Y')
        {
           if(count>=max)max=count;
           count=0;
        }
        else
        {

            count++;
        }

    }
   if(count>=max)max=count;
    printf("%d",max+1);
}
