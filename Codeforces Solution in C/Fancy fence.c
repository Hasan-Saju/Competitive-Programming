#include<stdio.h>
int main()
{
    int t,i,j,x,s,found;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&x);
        found=0;
       for(j=1;j<=1000;j++){

        s=((j-2)*180)/j;
        if(s==x)found=1;

       }

        if(found||s==99)printf("YES\n");
    else printf("NO\n");
    }

}
