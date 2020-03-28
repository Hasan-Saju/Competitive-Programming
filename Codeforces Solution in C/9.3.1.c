#include<stdio.h>
int main()
{
    char country[]="BANGLADESH";
    int i,length=10;

    for(i=0;i<length;i++){
        if(country[i]>='A'&&country[i]<='Z'){
            country[i]=country[i]+'a'-'A';
        }
    }printf("%s\n",country);
}
