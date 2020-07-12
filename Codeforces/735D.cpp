#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

bool primality(ll n)
{
    bool prime =true;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            prime=false;
            break;
        }
    }
    return prime;
}


int main()
{
    fast
    ll n;
    cin>>n;
    if(primality(n))
        cout<<"1";
    else if(n%2==0)
        cout<<"2";
    else if(n%2==1 and primality(n-2))
        cout<<"2";
    else
        cout<<"3";
}
