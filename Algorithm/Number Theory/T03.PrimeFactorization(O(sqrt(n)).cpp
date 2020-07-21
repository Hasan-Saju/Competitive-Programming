#include<bits/stdc++.h>
using namespace std;

#define ll long long

void primeFact(ll n)
{
    for(ll i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            ll kount=0;
            while(n%i==0)
                kount++, n=n/i;
            cout<<i<<" -> "<<kount<<"times\n";
        }
    }
    if(n>1)
    cout<<n<<" -> "<<"1 "<<"times\n";
}

int main()
{
    primeFact();
}
