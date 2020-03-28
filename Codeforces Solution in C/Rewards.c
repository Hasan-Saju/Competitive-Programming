#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,n,cup,medal,shelf_cup,shelf_medal;
    scanf("%d %d %d %d %d %d %d",&a1,&a2,&a3,&b1,&b2,&b3,&n);

    cup=a1+a2+a3;

    shelf_cup=cup/5;
    if(cup%5==0)shelf_cup=shelf_cup;
    else shelf_cup=shelf_cup+1 ;

    medal=b1+b2+b3;

    shelf_medal=medal/10;
     if(medal%10==0)shelf_medal=shelf_medal;
    else shelf_medal=shelf_medal+1 ;

    if(shelf_cup+shelf_medal<=n)printf("YES");
    else printf("NO");


}
