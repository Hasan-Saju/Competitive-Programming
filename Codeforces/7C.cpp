#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
    ll a,b,c,x,y;
    cin>>a>>b>>c;
    ll exgcd=extendedGCD(a,b,x,y);

    if(c%exgcd==0)
    {
        ll mul=-c/exgcd;
        x*=mul;
        y*=mul;
        cout<<x<<" "<<y;
    }
    else
        cout<<"-1";

}
