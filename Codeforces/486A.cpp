#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x;
    cin>>n;
    x=n;

    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        n--;
        cout<<(n/2)-x;
    }
    return 0;
}
