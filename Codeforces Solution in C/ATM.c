#include<stdio.h>
int main()
{
    int w;
    float i,remain;
    scanf("%d %f",&w,&i);
    if(w%5==0&&i>w+.50){
        remain=i-w-.50;
        printf("%.02f",remain);
    }else{
        printf("%.02f",i);

    }

}
