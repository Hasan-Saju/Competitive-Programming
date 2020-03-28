#include<stdio.h>
int main ()
{
    char str1[50]="Hasan Saju Wants to join";
    char str2[]=" Bangladesh ARMY";

    int i=0,j=0,len=0;


    while(str1[i]!='\0'){
        i++;
        len++;
    }
    while(str2[j]!='\0'){

        str1[len+j]=str2[j];
        j++;

    }



    printf("%s",str1);
}
