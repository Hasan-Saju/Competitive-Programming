#include<stdio.h>
int main(){
    int i,n;
    for(i=1;i<=10;i++){
        printf("5");
        for(n=2;n<=i;n++){
            printf("+5");
        }
        printf("=%d\n",5*i);
    }
}
