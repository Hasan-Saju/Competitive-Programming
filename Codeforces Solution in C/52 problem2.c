#include<stdio.h>
int main()
{
    int n,t,i;\
    int st[99];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&st);
        if(st[99]%2==0){printf("even");}
        else{printf("odd");
        printf("%d",st[99]);
        }
    }
}
