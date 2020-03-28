#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i=1,kount=0,sum=0;
    cin>>n>>k;


while(n)
{
   if(sum<=k)
   {

    sum+=i;
    i++;
    n--;
   }
    if(sum>k)
    {
        sum-=1;
        kount++;
        n--;
    }
}
cout<<kount;

}

