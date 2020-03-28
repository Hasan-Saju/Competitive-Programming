#include<stdio.h>
int main()
{
    int white=0,black=0;

    int i,j,k=0;
    char ch[65];
    char ar[9];

    for(i=0;i<8;i++)
    {
        gets(ar);
        for(j=0,k=k;j<8;j++,k++)
        {
            ch[k]=ar[j];
        }
    }

    for(i=0;i<64;i++)
    {

        if(ch[i]=='Q')white=white+9;
        else if(ch[i]=='R')white=white+5;
         else if(ch[i]=='B')white=white+3;
          else if(ch[i]=='N')white=white+3;
            else if(ch[i]=='P')white=white+1;
             else if(ch[i]=='K')white=white+0;

            else  if(ch[i]=='q')black=black+9;
        else if(ch[i]=='r')black=black+5;
         else if(ch[i]=='b')black=black+3;
          else if(ch[i]=='n')black=black+3;
            else if(ch[i]=='p')black=black+1;
             else if(ch[i]=='k')black=black+0;


    }


    if(white>black)printf("White");
    else if(black>white)printf("Black");
    else printf("Draw");



}
