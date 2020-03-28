#include<stdio.h>
int main()
{  int p=0;

    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char x,y,z;
        scanf(" %c %c %c",&x,&y,&z);

        if(x=='+'&&y=='+'&&z=='X')
            p++;
        else if(x=='X'&&y=='+'&&z=='+')
            p++;

        if(x=='-'&&y=='-'&&z=='X')
            p--;
        else if(x=='X'&&y=='-'&&y=='-')
            p--;
    }

    printf("%d",p);
}
