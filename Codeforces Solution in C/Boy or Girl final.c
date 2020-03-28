#include<stdio.h>
#include<string.h>

int main()
{
    int sum=0,i;
    char str[110];
    gets(str);

    int ara[26];

    for(i=0; i<26; i++)
    {
        ara[i]=0;
    }
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='a')
            ara[0]=1;
        else if(str[i]=='b')
            ara[1]=1;
        else if(str[i]=='c')
            ara[2]=1;
        else if(str[i]=='d')
            ara[3]=1;
        else if(str[i]=='e')
            ara[4]=1;
        else if(str[i]=='f')
            ara[5]=1;
        else if(str[i]=='g')
            ara[6]=1;
        else if(str[i]=='h')
            ara[7]=1;
        else if(str[i]=='i')
            ara[8]=1;
        else if(str[i]=='j')
            ara[9]=1;
        else if(str[i]=='k')
            ara[10]=1;
        else if(str[i]=='l')
            ara[11]=1;
        else if(str[i]=='m')
            ara[12]=1;
        else if(str[i]=='n')
            ara[13]=1;
        else if(str[i]=='o')
            ara[14]=1;
        else if(str[i]=='p')
            ara[15]=1;
        else if(str[i]=='q')
            ara[16]=1;
        else if(str[i]=='r')
            ara[17]=1;
        else if(str[i]=='s')
            ara[18]=1;
        else if(str[i]=='t')
            ara[19]=1;
        else if(str[i]=='u')
            ara[20]=1;
        else if(str[i]=='v')
            ara[21]=1;
        else if(str[i]=='w')
            ara[22]=1;
        else if(str[i]=='x')
            ara[23]=1;
        else if(str[i]=='y')
            ara[24]=1;
        else if(str[i]=='z')
            ara[25]=1;


    }

    for(i=0;i<26;i++)
    {
        sum+=ara[i];
    }

   if(sum%2==0)printf("CHAT WITH HER!");
   else printf("IGNORE HIM!");

}
