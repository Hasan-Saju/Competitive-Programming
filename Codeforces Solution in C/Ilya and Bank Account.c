#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[15],str1[15],str2[15];
    gets(str);

    int len,j=0,len1,len2,a1=0,a2=0,i;
    len=strlen(str);

    /* for(i=0;i<15;i++){
         str1[i]='0';
         str2[i]='0';
     }*/

    if(str[0]=='-')
    {
        for(i=1; i<len-1; i++)
        {
            str1[j]=str[i];
            j++;
        }
        j=0;
        for(i=1; i<len; i++)
        {
            if(i==len-2);
            else
            {
                str2[j]=str[i];
                j++;
            }

        }


        len1=strlen(str1);
        len2=strlen(str2);

        if(len1==1)
        {
            if(str1[0]=='0'||str2[0]=='0')
                printf("0");
        }


        else
        {
            a1=(str1[len-2]*10)+str1[len-1];
            a2=(str2[len-2]*10)+str2[len-1];



            if(a1<=a2)
                printf("-%s",str1);
            else
                printf("-%s",str2);
        }


    }


    else
        printf(str);
}
