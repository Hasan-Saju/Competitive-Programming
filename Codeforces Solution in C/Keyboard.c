#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag=0;
    char key[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char ques[110];
    char shift;
    fflush(stdin);
    gets(ques);
    scanf(" %c",&shift);

    if(shift=='R')
    {

        for(i=0; i<strlen(ques); i++)
        {
            flag=0;
            for(j=0;!flag; j++)
            {
                if(ques[i]==key[j])
                {
                    ques[i]=key[j-1];
                    flag=1;
                }
            }

        }

    }

    else
    {
        for(i=0; i<strlen(ques); i++)
        {
            for(j=0; j<strlen(key); j++)
            {
                if(ques[i]==key[j])
                {
                    ques[i]=key[j+1];
                }
            }

        }

    }

  printf(ques);




}
