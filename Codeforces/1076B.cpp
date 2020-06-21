#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

int main()
{
    fast
    ll n;
    cin>>n;

    ll ans=1,flag=0,div=0;

    for(ll i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            div=i;
           flag=1;
           break;
        }
    }
    if(flag)ans=1+(n-div)/2;
    cout<<ans;

}
