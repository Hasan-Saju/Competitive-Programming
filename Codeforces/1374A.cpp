#include<bits/stdc++.h>
using namespace std;

#define ll          long long


#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

#define NL          "\n"


int main()
{
    fast
    ll test;
    cin>>test;
    while(test--)
    {
        ll x,y,n;
        cin>>x>>y>>n;

        ll temp=n/x;
        if((x*temp)+y>n)
        temp--;
        ll ans=(temp*x)+y;
        cout<<ans<<NL;
    }

}

