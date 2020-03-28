#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000+5];

    int len,i,flag=0,ara[26],start,t,z;
    scanf("%d",&t);

    for(z=0; z<t; z++)
    {
        flag=0;


       // fflush(stdin);
        gets(str);

        len=strlen(str);

        for(i=0; i<26; i++)
        {
            ara[i]=0;
        }
        start= str[0]-'a';
        for(i=0; i<len; i++)
        {
            ara[str[i]-'a']+=1;
        }
        /*  for(i=0; i<26; i++)
          {
              if (ara[i]==1)
                  break;
          }*/
        int count=0;
        for(i=start;; i++)
        {
            if(i==26)
                i=0;
            if(ara[i]!=1)
                flag=1;
            count++;
            if(count==len)
                break;

        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");

    }
}
