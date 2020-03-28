#include<stdio.h>
int main()
{
    char country[]="Bangladesh";
    int i, length;
    length=10;
    for(i=0;i<length;i++){

        if(country[i]>=97&&country[i]<=122){
            country[i]='A'+(country[i]-'a');
        }
    }printf("%s\n",country);
}
