#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll extendedGCD(ll a, ll m, ll &x, ll &y)
{
    if(m==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll ans=extendedGCD(m, a%m, x1, y1);

    x=y1;
    y=x1-y1*(a/m);

    return ans;
}

ll inverse(ll a, ll mod)
{
    ll x,y;
    extendedGCD(a,mod,x,y);
    return (x%mod+mod)%mod;
}

ll CRT(ll rem[], ll num[],ll n)
{
    ll product=1;
    for(ll i=0; i<n; i++)
        product*=num[i];

    ll result=0;

    for(ll i=0; i<n; i++)
    {
        ll temp= product/num[i];
        result = ( (result%product)+(rem[i]*inverse(temp,num[i])*temp)%product )% product;
    }

    return result%product;

}



int main()
{
    ll rem[15];
    ll num[15];

    ll t;
    //cin>>t;
    scanf("%lld",&t);

    for(ll j=1; j<=t; j++)
    {
        memset(rem,0,sizeof(rem));
        memset(num,0,sizeof(num));

        ll n;
        //cin>>n;     //number of equations
        scanf("%lld",&n);

        for(ll i=0; i<n; i++)
        {
            //cin>>num[i];
            //cin>>rem[i];
            scanf("%lld",&num[i]);
            scanf("%lld",&rem[i]);
        }
        ll product=1;

    printf("Case %lld: %lld\n",j,CRT(rem,num,n));
    }



}


