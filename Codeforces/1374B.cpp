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

        ll n;
        cin>>n;
        ll two=0,three=0,ans=0;
        while(n%2==0)
        {
            n=n/2;
            two++;
        }
        while(n%3==0)
        {
            n=n/3;
            three++;
        }

        if(two>three or n>1)
            cout<<"-1"<<NL;

        else
        {
            ans+= three-two;
            ans+=three;
            cout<<ans<<NL;
        }

    }
}

