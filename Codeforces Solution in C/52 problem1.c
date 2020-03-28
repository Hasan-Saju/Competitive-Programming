#include<stdio.h>
int main()
{
    int x,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d",&x);
    if(x%2==0)printf("even\n");

        else if(x%2!=0) printf("odd\n");
        }
    return 0;
}
