#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sheldon=1,i,ans;
    scanf("%d",&n);

    for(i=1;;i=i*2)
    {
        sheldon=sheldon+5*i;
        if(sheldon>n)break;
    }
    sheldon=sheldon-5*i;

    ans=n-sheldon;

    if(ans<i)printf("Sheldon");
        else if(ans<2*i)printf("Leonard");
        else if(ans<3*i)printf("Penny");
        else if(ans<4*i)printf("Rajesh");
        else printf("Howard");

        return 0;
}
