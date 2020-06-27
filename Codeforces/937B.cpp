#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool primality(ll n,ll p)
{
    bool prime=true;
    for(ll i=2;i*i<=n and i<=p ;i++)
    {
        if(n%i==0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}


int main()
{
    ll p,y;
    cin>>p>>y;

    bool ans=false;

    for(ll i=y; i>p; i--)
    {
        if(primality(i,p))
        {
            ans=true;
            cout<<i;
            break;
        }
    }

    if(!ans)
        cout<<"-1";

}
