#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,kount=0,i;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if(!(x%i)&&(x/i)<=n)kount++;
    }
    cout<<kount;
}
