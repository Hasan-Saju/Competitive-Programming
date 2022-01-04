#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    if(n%2==0)
    {
        t=n/2;
        t=t+t/2;
    }
    else
    {
        t=(n/2)+1;
        n=n-t;
    t=t+n/2;
    }
    cout<<t;



}
