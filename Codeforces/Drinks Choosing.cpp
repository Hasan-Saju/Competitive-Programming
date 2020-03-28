#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k,sum=0,i,x,student;
cin>>n>>k;

student=n;

int ara[k];

if(!n%2)n=n/2;
else n=(n+1)/2;

for(i=0;i<k;i++)
{
    ara[i]=0;
}

for(i=0;i<student;i++)
{
    cin>>x;
    ara[x-1]+=1;
}

for(i=0;i<k;i++)
{
    if(ara[i]%2==0&&ara[i])
    {
        n=n-ara[i]/2;
        ara[i]=0;
    }
}
for(i=k-1;i>=0;i--)
{
   if(i==k-1) sort(ara,ara+k);
   label:
   if(ara[i])
   {
       if(ara[i]==1)
       {
           if(n==0)break;
           n=n-1;
           ara[i]=0;

       }
       if(n==0)break;
       n=n-ara[i]/2;
       ara[i]=ara[i]%2;
   }

}
if(n!=0)
{
    i=k-1;
    goto label;
}
for(i=0;i<k;i++)
{
    sum+=ara[i];
}

cout<<student-sum;
}






