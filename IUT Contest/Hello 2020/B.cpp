#include<bits/stdc++.h>
using namespace std;
int prime(int x)
{
    int flag=0,i;
    if(x<2)return 1;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)flag=1;
    }
    if(flag)return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    if(n==2)cout<<"-1";
    else
    {
        if(prime(n-2))cout<<"-1";
        else cout<<"2"<<" "<<n-2;

    }
}
