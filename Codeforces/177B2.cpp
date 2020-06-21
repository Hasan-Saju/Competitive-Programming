#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;

    ll sum=n,mx=0;
    for(ll i=2;i<=sqrt(n) and n!=1;i++)
    {
        if(n%i==0)
        {
            mx=max(i,n/i);
            sum+=mx;
            n=mx;
            i=1;
            //cout<<sum<<" "<<i<<" "<<n<<endl;
        }
    }
    sum+=1;
    cout<<sum;
}
