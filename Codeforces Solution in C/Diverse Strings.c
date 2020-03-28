#include<stdio.h>
#include<string.h>
int main()

{
    int n,len,temp,k,i,j,flag=0;
    scanf("%d",&n);

    char str[105];
    for(k=0;k<n;k++)
    {
        flag=0;
        scanf("%s",&str);

       len=strlen(str);

       for(i=0;i<len-1;i++)
       {
           for(j=0;j<len-i-1;j++)
           {
               if(str[j]>str[j+1])
               {
                   temp=str[j];
                   str[j]=str[j+1];
                   str[j+1]=temp;

               }

           }
       }

        for(i=0;i<len-1;i++)
        {
            if(str[i+1]-str[i]!=1)flag=1;
        }
        if(flag)printf("nO\n");
        else printf("yEs\n");

    }

}
