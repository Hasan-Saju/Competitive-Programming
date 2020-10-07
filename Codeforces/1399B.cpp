#include<bits/stdc++.h>
using namespace std;

#define ll  long long


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>candy,orange;
        ll lcand=INT_MAX,loran=INT_MAX;

        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            candy.push_back(x);
            lcand=min(lcand,x);
        }
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            orange.push_back(x);
            loran=min(loran,x);
        }

        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=max(abs(candy[i]-lcand),abs(orange[i]-loran));
        }
        cout<<ans<<"\n";

    }

}
