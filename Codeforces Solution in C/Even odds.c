#include<stdio.h>
#include<math.h>
int main()
{
    long long n,k,ans,h,m;
    scanf("%lld %lld",&n,&k);

    h=n%2;
    if(h==0)m=n/2;
   else m=(n/2)+1;

    if(k<=m)
        {
        ans=((k-1)*2)+1;
        }
    else{

        k=k-m;
        ans=k*2;
    }
    printf("%lld",ans);













}
