#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,even=0,odd=0,i,x;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        if(!(x%2))even++;
        else odd++;
    }
    if(odd%2==1)printf("First");
    else if(even==0)printf("First");
   else if(!(odd%2)&&even>0&&odd>0)printf("First");//odd harse
    else printf("Second");
}
