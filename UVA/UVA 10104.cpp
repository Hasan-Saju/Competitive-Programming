#include<bits/stdc++.h>
using namespace std;
#define ll long long
///     ax + by = gcd(a,b)

ll extendedGCD(ll a, ll b, ll &x, ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll ans=extendedGCD(b, a%b, x1, y1);

    x=y1;
    y=x1-y1*(a/b);

    return ans;
}

int main()
{
    ll a,b,x,y;
    while(cin>>a>>b)
    {
        ll ans= extendedGCD(a,b,x,y);
        cout<<x<<" "<<y<<" "<<ans<<"\n";
    }

}

