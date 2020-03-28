#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    long long n,m,j,x,times=0,totalDiv;
    cin>>t;
    for(i=0;i<t;i++)
    {
        x=0;
        cin>>n>>m;
        totalDiv=n/m;
        for(j=1;j<=9;j++)
        {
           x=x+(j*m)%10;
        }
       times=(n/m)/10;
       x=x*times;
       for(j=1;j<=(totalDiv%10);j++)
       {
           x=x+(j*m)%10;
       }
        cout<<x<<endl;
    }
}
